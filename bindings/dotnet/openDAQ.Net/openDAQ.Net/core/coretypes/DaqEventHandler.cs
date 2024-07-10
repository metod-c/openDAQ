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
//     RTGen (CSharpGenerator v1.0.0) on 25.06.2024 08:46:42.
// </auto-generated>
//------------------------------------------------------------------------------


namespace Daq.Core.Types;


[StructLayout(LayoutKind.Sequential)]
internal unsafe class RawDaqEventHandler : RawBaseObject
{
    //ErrorCode handleEvent(daq.IBaseObject* sender, daq.IEventArgs* eventArgs); stdcall;
    public delegate* unmanaged[Stdcall]<IntPtr, IntPtr, IntPtr, ErrorCode> HandleEvent;
}

[Guid("8173cd51-2de8-5df3-a729-8a2728637dad")]
public class DaqEventHandler : BaseObject
{
    //type-casted base._virtualTable
    private readonly RawDaqEventHandler _rawDaqEventHandler;

    internal DaqEventHandler(IntPtr nativePointer, bool incrementReference)
        : base(nativePointer, incrementReference)
    {
        IntPtr objVirtualTable = Marshal.ReadIntPtr(nativePointer, 0); //read the pointer from the given address
        base._virtualTable =
            _rawDaqEventHandler = Marshal.PtrToStructure<RawDaqEventHandler>(objVirtualTable);
    }

    public void HandleEvent(BaseObject sender, DaqEventArgs eventArgs)
    {
        unsafe //use native method pointer
        {
            //call native method
            ErrorCode errorCode = (ErrorCode)_rawDaqEventHandler.HandleEvent(base.NativePointer, sender.NativePointer, eventArgs.NativePointer);

            if (Result.Failed(errorCode))
            {
                throw new OpenDaqException(errorCode);
            }
        }
    }
}


#region Class Factory

// Factory functions of the &apos;CoreTypes&apos; library.
public static partial class CoreTypesFactory
{
}

#endregion Class Factory
