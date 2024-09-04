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


//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//
//     RTGen (CSharpConfigGenerator v1.0.0) on 04.09.2024 17:45:27.
// </auto-generated>
//------------------------------------------------------------------------------


using Daq.Core.Types;


namespace Daq.Core;


/// <summary>Library information for the &apos;daqcoretypes&apos; library.</summary>
public static class CoreTypesDllInfo
{
#if DEBUG && !OPENDAQ_RELEASE_ONLY
    private const string Target = "-debug";
#else
    private const string Target = "";
#endif

    /// <summary>The file name of the &apos;daqcoretypes&apos; library.</summary>
    /// <remarks>
    /// This constant is used in the factories&apos; <c>[DllImport()]</c> attributes.<br/>
    /// The library will be searched in the same directory as this assembly or in a sub-tree below 'runtimes'.
    /// </remarks>
#if _X86
    public const string FileName = "daqcoretypes-32-3" + Target;
#else
    public const string FileName = "daqcoretypes-64-3" + Target;
#endif

    /// <summary>The SDK version.</summary>
    public static readonly OpenDaqVersion Version = new OpenDaqVersion(3, 4, 0);
}
