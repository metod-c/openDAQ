/*
 * Copyright 2022-2024 openDAQ d.o.o.
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

#pragma once
#include <tms_object_test.h>
#include <opendaq/context_factory.h>
#include <opcuatms_server/tms_server_context.h>

class TmsServerObjectTest : public TmsObjectTest
{
public:
    void SetUp() override;
    void TearDown() override;

    daq::ContextPtr ctx;
    daq::opcua::tms::TmsServerContextPtr tmsCtx;
};
