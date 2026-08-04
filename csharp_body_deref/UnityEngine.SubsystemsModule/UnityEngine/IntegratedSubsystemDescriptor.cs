// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.IntegratedSubsystemDescriptor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4E9E5B0", Offset = "0x4E9E5B0", VA = "0x4E9E5B0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x4E9E610", Offset = "0x4E9E610", VA = "0x4E9E610")]
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
