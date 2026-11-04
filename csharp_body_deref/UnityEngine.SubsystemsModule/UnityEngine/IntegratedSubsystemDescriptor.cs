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
[Token(Token = "0x2000005")]
[UnityEngine.Scripting.UsedByNativeCode("SubsystemDescriptorBase")]
public abstract class IntegratedSubsystemDescriptor : ISubsystemDescriptor
{
	[Token(Token = "0x4000003")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.XRModule" })]
	internal IntPtr m_Ptr;

	[Token(Token = "0x17000003")]
	public string id
	{
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x2FF7480", Offset = "0x2FF5A80", VA = "0x182FF7480", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected IntegratedSubsystemDescriptor()
	{
	}
}
[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000006")]
[UnityEngine.Bindings.NativeHeader("Modules/Subsystems/SubsystemDescriptor.h")]
[UnityEngine.Scripting.UsedByNativeCode("SubsystemDescriptor")]
public class IntegratedSubsystemDescriptor<TSubsystem> : IntegratedSubsystemDescriptor where TSubsystem : IntegratedSubsystem
{
	[Token(Token = "0x600000C")]
	public IntegratedSubsystemDescriptor()
	{
	}
}
