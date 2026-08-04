// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.IntegratedSubsystem
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4E9E520", Offset = "0x4E9E520", VA = "0x4E9E520", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000003")]
	internal bool valid
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x4E9E560", Offset = "0x4E9E560", VA = "0x4E9E560")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000002")]
	[Address(RVA = "0x4E9E4E0", Offset = "0x4E9E4E0", VA = "0x4E9E4E0")]
	internal extern void SetHandle(IntegratedSubsystem subsystem);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000005")]
	[Address(RVA = "0x4E9E570", Offset = "0x4E9E570", VA = "0x4E9E570")]
	internal extern bool IsRunning();

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x4E9E5A0", Offset = "0x4E9E5A0", VA = "0x4E9E5A0")]
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
