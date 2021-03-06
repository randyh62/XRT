/**
 * Copyright (C) 2016-2017 Xilinx, Inc
 *
 * Licensed under the Apache License, Version 2.0 (the "License"). You may
 * not use this file except in compliance with the License. A copy of the
 * License is located at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations
 * under the License.
 */

#ifndef xrt_message_h_
#define xrt_message_h_
#include <string>

namespace xrt_core { namespace message {

//modeled based on syslog severity.
enum class severity_level : unsigned short
{
 EMERGENCY,
 ALERT,
 CRITICAL,
 ERROR,
 WARNING,
 NOTICE,
 INFO,
 DEBUG
};


void 
send(severity_level l, const char* tag, const char* msg);

inline void 
send(severity_level l, const std::string& tag, const std::string& msg)
{
  send(l, tag.c_str(), msg.c_str());
}

}} // message,xrt

#endif



