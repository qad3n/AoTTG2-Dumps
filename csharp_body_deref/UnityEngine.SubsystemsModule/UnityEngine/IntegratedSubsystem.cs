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
[Token(Token = "0x2000002")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/Subsystems/Subsystem.h")]
public class IntegratedSubsystem : ISubsystem
{
	[Token(Token = "0x2000003")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
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

	[Token(Token = "0x17000001")]
	public bool running
	{
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x2FF75E0", Offset = "0x2FF5BE0", VA = "0x182FF75E0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000002")]
	internal bool valid
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x2F7D790", Offset = "0x2F7BD90", VA = "0x182F7D790")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x2FF7580", Offset = "0x2FF5B80", VA = "0x182FF7580")]
	internal void SetHandle([UnityEngine.Bindings.UnityMarshalAs(UnityEngine.Bindings.NativeType.ScriptingObjectPtr)] IntegratedSubsystem subsystem)
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x2FF74D0", Offset = "0x2FF5AD0", VA = "0x182FF74D0")]
	internal bool IsRunning()
	{
		return default(bool);
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public IntegratedSubsystem()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000006")]
	[Address(RVA = "0x2FF7530", Offset = "0x2FF5B30", VA = "0x182FF7530")]
	private static extern void SetHandle_Injected(IntPtr _unity_self, IntegratedSubsystem subsystem);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000007")]
	[Address(RVA = "0x2FF7490", Offset = "0x2FF5A90", VA = "0x182FF7490")]
	private static extern bool IsRunning_Injected(IntPtr _unity_self);
}
[Token(Token = "0x2000004")]
[UnityEngine.Scripting.UsedByNativeCode("Subsystem_TSubsystemDescriptor")]
public class IntegratedSubsystem<TSubsystemDescriptor> : IntegratedSubsystem where TSubsystemDescriptor : ISubsystemDescriptor
{
	[Token(Token = "0x6000009")]
	public IntegratedSubsystem()
	{
	}
}
