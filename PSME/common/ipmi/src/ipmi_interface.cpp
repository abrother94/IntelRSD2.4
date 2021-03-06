/*!
 * @brief Interface to communicate with transport library.
 *
 * Represents IPMI session. If session is invalid, communication channel is closed
 * and opened on sending a (next) message
 *
 * @copyright Copyright (c) 2017-2019 Intel Corporation.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at http://www.apache.org/licenses/LICENSE-2.0.
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * @file ipmi/ipmi_intf.cpp
 */

#include "ipmi/ipmi_interface.hpp"

using namespace ipmi;

IpmiInterface::IpmiInterface() { }

IpmiInterface::~IpmiInterface() { }
