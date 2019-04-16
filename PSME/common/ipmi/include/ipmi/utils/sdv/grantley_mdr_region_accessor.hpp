/*!
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
 * @brief Grantley MDR region accessor declaration
 *
 * @file grantley_mdr_region_accessor.hpp
 */

#pragma once

#include "ipmi/utils/sdv/mdr_region_accessor.hpp"

namespace ipmi {
namespace sdv {

/*!
 * Class responsible for providing access to data from MDR regions on Grantley platform
 */
class GrantleyMdrRegionAccessor : public MdrRegionAccessor {
public:
    GrantleyMdrRegionAccessor(IpmiController& ipmi_controller, const command::sdv::DataRegionId region_id) :
        MdrRegionAccessor(ipmi_controller, region_id) {}

    IpmiInterface::ByteBuffer get_mdr_region() override;

    std::uint16_t get_mdr_region_size_to_read() override;

    [[noreturn]] void write_mdr_region(const IpmiInterface::ByteBuffer&) override;

private:
    std::uint8_t get_mdr_region_checksum() override;
    [[noreturn]] std::uint8_t get_mdr_region_update_count() override;
};

}
}
