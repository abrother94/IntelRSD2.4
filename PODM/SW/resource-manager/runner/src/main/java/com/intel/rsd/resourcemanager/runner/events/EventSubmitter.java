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

package com.intel.rsd.resourcemanager.runner.events;

import com.fasterxml.jackson.databind.JsonNode;
import com.intel.rsd.resourcemanager.layers.EventHandler;
import com.intel.rsd.resourcemanager.layers.ServiceId;
import com.intel.rsd.resourcemanager.runner.events.configuration.EventsConfiguration;
import org.springframework.cloud.client.loadbalancer.LoadBalanced;
import org.springframework.stereotype.Component;
import org.springframework.web.client.RestTemplate;

import java.net.URI;

import static java.lang.String.format;

@Component
public class EventSubmitter implements EventHandler {

    private final RestTemplate restTemplate;
    private final URI endpointUri;

    public EventSubmitter(@LoadBalanced RestTemplate restTemplate, EventsConfiguration eventsConfiguration) {
        this.restTemplate = restTemplate;
        this.endpointUri = URI.create(format("http://event-service%s", eventsConfiguration.getSubmitter().getEndpoint()));
    }

    @Override
    public void onEvent(ServiceId serviceId, JsonNode event) {
        restTemplate.postForLocation(endpointUri, event);
    }

    @Override
    public void setNext(EventHandler next) {
        //do nothing
    }
}
