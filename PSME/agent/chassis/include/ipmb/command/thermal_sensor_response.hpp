/*!
 * @section LICENSE
 *
 * @copyright
 * Copyright (c) 2015-2019 Intel Corporation
 *
 * @copyright
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * @copyright
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * @copyright
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * @section DESCRIPTION
 * */

#pragma once
#include <ipmb/command/command.hpp>

namespace agent {
namespace chassis {
namespace ipmb {

#pragma pack(push, 1)
struct ThermalSensorIpmbResponse {
    struct Thermal {
        uint8_t sled_type = {};
        uint8_t desired_pwm = {};
        uint8_t inlet_temp = {};
    };

    uint8_t sled_presence_bitmap {};
    Thermal thermal_data[8] = {{}};
    uint8_t sled_count = 0;
};
#pragma pack(pop)


}
}
}
