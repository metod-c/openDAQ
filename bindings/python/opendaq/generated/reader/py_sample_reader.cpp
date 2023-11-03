//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//
//     RTGen (PythonGenerator).
// </auto-generated>
//------------------------------------------------------------------------------

/*
 * Copyright 2022-2023 Blueberry d.o.o.
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

#include "py_opendaq/py_opendaq.h"
#include "py_core_types/py_converter.h"

PyDaqIntf<daq::ISampleReader, daq::IReader> declareISampleReader(pybind11::module_ m)
{
    py::enum_<daq::ReadMode>(m, "ReadMode")
        .value("Raw", daq::ReadMode::Raw)
        .value("Scaled", daq::ReadMode::Scaled);

    return wrapInterface<daq::ISampleReader, daq::IReader>(m, "ISampleReader");
}

void defineISampleReader(pybind11::module_ m, PyDaqIntf<daq::ISampleReader, daq::IReader> cls)
{
    cls.doc() = "A basic signal reader that simplifies reading the signals's samples.";

    cls.def_property_readonly("value_read_type",
        [](daq::ISampleReader *object)
        {
            const auto objectPtr = daq::SampleReader::Borrow(object);
            return objectPtr.getValueReadType();
        },
        "Gets the sample-type the signal value samples will be converted to when read or @c SampleType::Invalid if read-type has not been determined yet.");
    cls.def_property_readonly("domain_read_type",
        [](daq::ISampleReader *object)
        {
            const auto objectPtr = daq::SampleReader::Borrow(object);
            return objectPtr.getDomainReadType();
        },
        "Gets the sample-type the signal domain samples will be converted to when read or @c SampleType::Invalid if read-type has not been determined yet.");
    cls.def_property("value_transform_function",
        nullptr,
        [](daq::ISampleReader *object, daq::IFunction* transform)
        {
            const auto objectPtr = daq::SampleReader::Borrow(object);
            objectPtr.setValueTransformFunction(transform);
        },
        "Sets the transform function that will be called with the read value-data and currently valid Signal-Descriptor giving the user the chance add a custom post-processing step. The function should have a signature compatible with:");
    cls.def_property("domain_transform_function",
        nullptr,
        [](daq::ISampleReader *object, daq::IFunction* transform)
        {
            const auto objectPtr = daq::SampleReader::Borrow(object);
            objectPtr.setDomainTransformFunction(transform);
        },
        "Sets the transform function that will be called with the read domain-data and currently valid Signal-Descriptor giving the user the chance add a custom post-processing step. The function should have a signature compatible with:");
    cls.def_property_readonly("read_mode",
        [](daq::ISampleReader *object)
        {
            const auto objectPtr = daq::SampleReader::Borrow(object);
            return objectPtr.getReadMode();
        },
        "Gets the reader's read mode which determines if the reader will also scale the read data or not.");
}
