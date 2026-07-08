using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000006")]
[UnityEngine.Scripting.UsedByNativeCode("SubsystemDescriptorBase")]
public abstract class IntegratedSubsystemDescriptor : ISubsystemDescriptor
{
	[Token(Token = "0x4000003")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x17000004")]
	public string id
	{
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x4B76C80", Offset = "0x4B76C80", VA = "0x4B76C80", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x4B76CE0", Offset = "0x4B76CE0", VA = "0x4B76CE0")]
	protected IntegratedSubsystemDescriptor()
	{
	}
}
[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000007")]
[UnityEngine.Scripting.UsedByNativeCode("SubsystemDescriptor")]
[UnityEngine.Bindings.NativeHeader("Modules/Subsystems/SubsystemDescriptor.h")]
public class IntegratedSubsystemDescriptor<TSubsystem> : IntegratedSubsystemDescriptor where TSubsystem : IntegratedSubsystem
{
	[Token(Token = "0x600000A")]
	public IntegratedSubsystemDescriptor()
	{
	}
}
