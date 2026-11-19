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
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/Subsystems/Subsystem.h")]
public class IntegratedSubsystem : ISubsystem
{
	[Token(Token = "0x2000005")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x69F1CC0", Offset = "0x69F0CC0", VA = "0x69F1CC0")]
		public static IntPtr ConvertToNative(IntegratedSubsystem integratedSubsystem)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x4000001")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.XRModule" })]
	internal IntPtr m_Ptr;

	[Token(Token = "0x4000002")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal ISubsystemDescriptor m_SubsystemDescriptor;

	[Token(Token = "0x17000002")]
	public bool running
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x69F1BD0", Offset = "0x69F0BD0", VA = "0x69F1BD0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000003")]
	internal bool valid
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x69F1C10", Offset = "0x69F0C10", VA = "0x69F1C10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x69F1B30", Offset = "0x69F0B30", VA = "0x69F1B30")]
	internal void SetHandle([UnityEngine.Bindings.UnityMarshalAs(UnityEngine.Bindings.NativeType.ScriptingObjectPtr)] IntegratedSubsystem subsystem)
	{
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x69F1C20", Offset = "0x69F0C20", VA = "0x69F1C20")]
	internal bool IsRunning()
	{
		return default(bool);
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x69F1CB0", Offset = "0x69F0CB0", VA = "0x69F1CB0")]
	public IntegratedSubsystem()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000007")]
	[Address(RVA = "0x69F1B90", Offset = "0x69F0B90", VA = "0x69F1B90")]
	private static extern void SetHandle_Injected(IntPtr _unity_self, IntegratedSubsystem subsystem);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000008")]
	[Address(RVA = "0x69F1C80", Offset = "0x69F0C80", VA = "0x69F1C80")]
	private static extern bool IsRunning_Injected(IntPtr _unity_self);
}
[Token(Token = "0x2000006")]
[UnityEngine.Scripting.UsedByNativeCode("Subsystem_TSubsystemDescriptor")]
public class IntegratedSubsystem<TSubsystemDescriptor> : IntegratedSubsystem where TSubsystemDescriptor : ISubsystemDescriptor
{
	[Token(Token = "0x600000A")]
	public IntegratedSubsystem()
	{
	}
}
