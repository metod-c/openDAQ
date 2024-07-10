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

PyDaqIntf<daq::ITags, daq::IBaseObject> declareITags(pybind11::module_ m)
{
    return wrapInterface<daq::ITags, daq::IBaseObject>(m, "ITags");
}

void defineITags(pybind11::module_ m, PyDaqIntf<daq::ITags, daq::IBaseObject> cls)
{
    cls.doc() = "List of string tags. Provides helpers to get and search the list of tags.";

    m.def("Tags", &daq::Tags_Create);

    cls.def_property_readonly("list",
        [](daq::ITags *object)
        {
            const auto objectPtr = daq::TagsPtr::Borrow(object);
            return objectPtr.getList().detach();
        },
        py::return_value_policy::take_ownership,
        "Gets the list of all tags in the list.");
    cls.def("contains",
        [](daq::ITags *object, const std::string& name)
        {
            const auto objectPtr = daq::TagsPtr::Borrow(object);
            return objectPtr.contains(name);
        },
        py::arg("name"),
        "Checks whether a tag is present in the list of tags.");
    cls.def("query",
        [](daq::ITags *object, const std::string& query)
        {
            const auto objectPtr = daq::TagsPtr::Borrow(object);
            return objectPtr.query(query);
        },
        py::arg("query"),
        "Queries the list of tags, creating an EvalValue expression from the `query` string. Returns true if the list of tags matches the query, false otherwise.");
}
