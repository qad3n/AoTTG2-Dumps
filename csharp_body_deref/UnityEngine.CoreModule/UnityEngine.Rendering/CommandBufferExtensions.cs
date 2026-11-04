// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CommandBufferExtensions
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000362")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Graphics/RenderingCommandBufferExtensions.bindings.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public static class CommandBufferExtensions
{
	[Token(Token = "0x6001535")]
	[Address(RVA = "0x2F63BB0", Offset = "0x2F621B0", VA = "0x182F63BB0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBufferExtensions_Bindings::Internal_SwitchIntoFastMemory")]
	private static void Internal_SwitchIntoFastMemory([UnityEngine.Bindings.NotNull] CommandBuffer cmd, ref RenderTargetIdentifier rt, FastMemoryFlags fastMemoryFlags, float residency, bool copyContents)
	{
	}

	[Token(Token = "0x6001536")]
	[Address(RVA = "0x2F63CE0", Offset = "0x2F622E0", VA = "0x182F63CE0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBufferExtensions_Bindings::Internal_SwitchOutOfFastMemory")]
	private static void Internal_SwitchOutOfFastMemory([UnityEngine.Bindings.NotNull] CommandBuffer cmd, ref RenderTargetIdentifier rt, bool copyContents)
	{
	}

	[Token(Token = "0x6001537")]
	[Address(RVA = "0x2F63DA0", Offset = "0x2F623A0", VA = "0x182F63DA0")]
	[UnityEngine.Bindings.NativeConditional("UNITY_XBOXONE || UNITY_GAMECORE_XBOXONE")]
	public static void SwitchIntoFastMemory(this CommandBuffer cmd, RenderTargetIdentifier rid, FastMemoryFlags fastMemoryFlags, float residency, bool copyContents)
	{
	}

	[Token(Token = "0x6001538")]
	[Address(RVA = "0x2F63E70", Offset = "0x2F62470", VA = "0x182F63E70")]
	[UnityEngine.Bindings.NativeConditional("UNITY_XBOXONE || UNITY_GAMECORE_XBOXONE")]
	public static void SwitchOutOfFastMemory(this CommandBuffer cmd, RenderTargetIdentifier rid, bool copyContents)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001539")]
	[Address(RVA = "0x2F63B40", Offset = "0x2F62140", VA = "0x182F63B40")]
	private static extern void Internal_SwitchIntoFastMemory_Injected(IntPtr cmd, ref RenderTargetIdentifier rt, FastMemoryFlags fastMemoryFlags, float residency, bool copyContents);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600153A")]
	[Address(RVA = "0x2F63C80", Offset = "0x2F62280", VA = "0x182F63C80")]
	private static extern void Internal_SwitchOutOfFastMemory_Injected(IntPtr cmd, ref RenderTargetIdentifier rt, bool copyContents);
}
