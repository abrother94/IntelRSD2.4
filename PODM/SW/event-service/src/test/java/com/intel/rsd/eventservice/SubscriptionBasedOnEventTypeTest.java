/*
 * Copyright (c) 2017-2019 Intel Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package com.intel.rsd.eventservice;

import com.intel.rsd.dto.events.Event;
import com.intel.rsd.dto.events.EventFactory;
import com.intel.rsd.dto.events.EventRecord;
import com.intel.rsd.dto.events.EventType;
import com.intel.rsd.dto.events.SubscriptionRequest;
import com.intel.rsd.eventservice.utils.EventCatcher;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.test.context.SpringBootTest;
import org.springframework.boot.web.server.LocalServerPort;
import org.springframework.cloud.client.discovery.EnableDiscoveryClient;
import org.springframework.test.context.ActiveProfiles;
import org.springframework.test.context.testng.AbstractTestNGSpringContextTests;
import org.springframework.web.util.UriComponentsBuilder;
import org.testng.annotations.AfterMethod;
import org.testng.annotations.BeforeMethod;
import org.testng.annotations.Test;

import java.net.URI;

import static com.google.common.collect.Sets.newHashSet;
import static com.intel.rsd.dto.events.EventFactory.createEvent;
import static com.intel.rsd.dto.events.EventType.Alert;
import static com.intel.rsd.dto.events.EventType.StatusChange;
import static com.intel.rsd.eventservice.SubscriptionRequestFactory.create;
import static java.util.Arrays.asList;
import static java.util.Collections.emptySet;
import static java.util.Collections.singletonList;
import static org.assertj.core.api.Java6Assertions.assertThat;

@EnableDiscoveryClient(autoRegister = false)
@SpringBootTest(webEnvironment = SpringBootTest.WebEnvironment.RANDOM_PORT)
@ActiveProfiles("test")
public class SubscriptionBasedOnEventTypeTest extends AbstractTestNGSpringContextTests {
    @Autowired
    EventStore eventStore;

    @Autowired
    EventCatcher eventCatcher;

    @Autowired
    private SubscriptionService subscriptionService;

    @LocalServerPort
    private int randomServerPort;

    @BeforeMethod
    public void setUp() {
        subscriptionService.removeAll();
        URI destination = UriComponentsBuilder.newInstance().scheme("http").host("localhost").port(randomServerPort).path("eventCatcher").build().toUri();
        SubscriptionRequest subscriptionRequest = create("name", destination, "context", emptySet(), newHashSet(Alert));
        subscriptionService.createSubscription(subscriptionRequest);
    }

    @AfterMethod
    public void tearDown() {
        subscriptionService.removeAll();
    }

    @Test
    public void whenSubscriptionOnAlertIsRegistered_alertEventShouldBeDelivered() {
        EventRecord eventRecord = createEventRecord(Alert);
        eventStore.store(createEvent(singletonList(eventRecord)));

        assertThat(eventCatcher.getQueue()).hasSize(1);
        Event receivedEvent = eventCatcher.getQueue().poll();
        assertThat(receivedEvent.getEventRecords()).hasSize(1);
        assertThat(receivedEvent.getEventRecords()).first().hasFieldOrPropertyWithValue("eventType", Alert);
        assertThat(receivedEvent.getEventRecords()).first().isEqualTo(eventRecord);
    }

    @Test
    public void whenSubscriptionOnAlertIsRegisteredAndMultiEventMessageHaveBeenSend_onlyAlertEventShouldBeDelivered() {
        EventRecord alert = createEventRecord(Alert);
        EventRecord statusChange = createEventRecord(StatusChange);
        eventStore.store(createEvent(asList(alert, statusChange)));

        assertThat(eventCatcher.getQueue()).hasSize(1);
        Event receivedEvent = eventCatcher.getQueue().poll();
        assertThat(receivedEvent.getEventRecords()).hasSize(1);
        assertThat(receivedEvent.getEventRecords()).first().hasFieldOrPropertyWithValue("eventType", Alert);
        assertThat(receivedEvent.getEventRecords()).first().isEqualTo(alert);
    }

    @Test
    public void whenSubscriptionOnAlertIsRegistered_nonAlertEventShouldNotBeDelivered() {
        eventStore.store(createEvent(singletonList(createEventRecord(StatusChange))));
        assertThat(eventCatcher.getQueue()).isEmpty();
    }

    private EventRecord createEventRecord(EventType eventType) {
        return EventFactory.createEventRecord(eventType, "1", "OK", "context", "/o/r/i/g/i/n/o/f/c/o/n/d/i/t/i/o/n");
    }
}
