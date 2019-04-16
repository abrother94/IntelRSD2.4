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

/*! Agent namesapce */
namespace agent {
/*! Chassis namesapce */
namespace chassis {
/*! IPMB namesapce */
namespace ipmb {
/*! Command namesapce */
namespace command {

/*! IpSelector */
class IpSelector final : public Command {
public:
    /*!
     * Unpacks IPMI Message
     * @param msg IPMI Message
     * */
    void unpack(IpmiMessage& msg);

    /*!
     * Packs IPMI Message
     * @param msg IPMI Message
     * */
    void pack(IpmiMessage& msg);

    /*! Copy constructor */
    IpSelector(const IpSelector&) = default;
    /*! Assigment construcor */
    IpSelector& operator=(const IpSelector&) = default;

    explicit IpSelector() = default;
    ~IpSelector();

private:
    static const constexpr uint8_t CMD_RESPONSE_DATA_LENGHT = 6;

    static const constexpr uint8_t OFFSET_CC = 0;
    static const constexpr uint8_t OFFSET_REVISTION = 1;
    static const constexpr uint8_t OFFSET_ADDR = 2;

    class Response final : public Command::Response {
    public:
        using IpBytes = std::array<std::uint8_t, 4>;
        /*!
         * Fill data buffer
         * @param msg IPMI Message
         * */
        void add_data(IpmiMessage& msg);

        void set_ip_data(const IpBytes& ip) {
            m_ip = ip;
        }

        void set_revision(const std::uint8_t revision) {
            m_param_revision = revision;
        }

        private:
            std::uint8_t m_param_revision{0x11};
            IpBytes m_ip{{}};
    };

    Response m_response{};

};

}
}
}
}

