using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000004")]
[UnityEngine.Bindings.NativeHeader("Modules/Subsystems/Subsystem.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public class IntegratedSubsystem : ISubsystem
{
	[Token(Token = "0x4000001")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x4000002")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal ISubsystemDescriptor m_SubsystemDescriptor;

	[Token(Token = "0x17000002")]
	public bool running
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x4B76BF0", Offset = "0x4B76BF0", VA = "0x4B76BF0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000003")]
	internal bool valid
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x4B76C30", Offset = "0x4B76C30", VA = "0x4B76C30")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000002")]
	[Address(RVA = "0x4B76BB0", Offset = "0x4B76BB0", VA = "0x4B76BB0")]
	internal extern void SetHandle(IntegratedSubsystem subsystem);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000005")]
	[Address(RVA = "0x4B76C40", Offset = "0x4B76C40", VA = "0x4B76C40")]
	internal extern bool IsRunning();

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x4B76C70", Offset = "0x4B76C70", VA = "0x4B76C70")]
	public IntegratedSubsystem()
	{
	}
}
[Token(Token = "0x2000005")]
[UnityEngine.Scripting.UsedByNativeCode("Subsystem_TSubsystemDescriptor")]
public class IntegratedSubsystem<TSubsystemDescriptor> : IntegratedSubsystem where TSubsystemDescriptor : ISubsystemDescriptor
{
	[Token(Token = "0x6000007")]
	public IntegratedSubsystem()
	{
	}
}
