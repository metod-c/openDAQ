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

#include "py_opendaq/py_opendaq.h"
#include "py_core_types/py_converter.h"

PyDaqIntf<daq::IAllocator, daq::IBaseObject> declareIAllocator(pybind11::module_ m)
{
    return wrapInterface<daq::IAllocator, daq::IBaseObject>(m, "IAllocator");
}

void defineIAllocator(pybind11::module_ m, PyDaqIntf<daq::IAllocator, daq::IBaseObject> cls)
{
    cls.doc() = "An allocator used to allocate memory.";

    m.def("MallocAllocator", &daq::MallocAllocator_Create);
#ifdef OPENDAQ_MIMALLOC_SUPPORT
    m.def("MiMallocAllocator", &daq::MiMallocAllocator_Create);
#endif
    m.def("ExternalAllocator", &daq::ExternalAllocator_Create);

    cls.def("allocate",
        [](daq::IAllocator *object, daq::IDataDescriptor* descriptor, const size_t bytes, const size_t align)
        {
            const auto objectPtr = daq::AllocatorPtr::Borrow(object);
            return objectPtr.allocate(descriptor, bytes, align);
        },
        py::arg("descriptor"), py::arg("bytes"), py::arg("align"),
        "Allocates a chunk of memory for a packet.");
    cls.def("free",
        [](daq::IAllocator *object, void* address)
        {
            const auto objectPtr = daq::AllocatorPtr::Borrow(object);
            objectPtr.free(address);
        },
        py::arg("address"),
        "Releases a chunk of memory allocated by allocate().");
}
