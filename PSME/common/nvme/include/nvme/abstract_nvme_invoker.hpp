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
 * @file nvme/abstract_nvme_invoker.hpp
 */

#pragma once

#include "nvme/commands/generic_nvme_command.hpp"

#include <string>

namespace nvme {

/*!
 * Interface for nvme command invokers
 */
class AbstractNvmeInvoker {
public:

    virtual ~AbstractNvmeInvoker();

    /*!
     * @brief Executes provided NVMe command
     * @param target Target of the command
     * @param command Queried NVMe command
     */
    virtual void execute(const std::string& target, commands::GenericNvmeCommand& command) const = 0;

};

}
