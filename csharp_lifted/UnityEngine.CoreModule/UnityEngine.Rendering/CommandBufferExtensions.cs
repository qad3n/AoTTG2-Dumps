// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CommandBufferExtensions
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000365")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Graphics/RenderingCommandBufferExtensions.bindings.h")]
public static class CommandBufferExtensions
{
	[Token(Token = "0x600154D")]
	[Address(RVA = "0x6953E90", Offset = "0x6952E90", VA = "0x6953E90")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBufferExtensions_Bindings::Internal_SwitchIntoFastMemory")]
	private static void Internal_SwitchIntoFastMemory([UnityEngine.Bindings.NotNull] CommandBuffer cmd, ref RenderTargetIdentifier rt, FastMemoryFlags fastMemoryFlags, float residency, bool copyContents)
	{
	}

	[Token(Token = "0x600154E")]
	[Address(RVA = "0x6953FC0", Offset = "0x6952FC0", VA = "0x6953FC0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBufferExtensions_Bindings::Internal_SwitchOutOfFastMemory")]
	private static void Internal_SwitchOutOfFastMemory([UnityEngine.Bindings.NotNull] CommandBuffer cmd, ref RenderTargetIdentifier rt, bool copyContents)
	{
	}

	[Token(Token = "0x600154F")]
	[Address(RVA = "0x69540B0", Offset = "0x69530B0", VA = "0x69540B0")]
	[UnityEngine.Bindings.NativeConditional("UNITY_XBOXONE || UNITY_GAMECORE_XBOXONE")]
	public static void SwitchIntoFastMemory(this CommandBuffer cmd, RenderTargetIdentifier rid, FastMemoryFlags fastMemoryFlags, float residency, bool copyContents)
	{
	}

	[Token(Token = "0x6001550")]
	[Address(RVA = "0x6954180", Offset = "0x6953180", VA = "0x6954180")]
	[UnityEngine.Bindings.NativeConditional("UNITY_XBOXONE || UNITY_GAMECORE_XBOXONE")]
	public static void SwitchOutOfFastMemory(this CommandBuffer cmd, RenderTargetIdentifier rid, bool copyContents)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001551")]
	[Address(RVA = "0x6953F60", Offset = "0x6952F60", VA = "0x6953F60")]
	private static extern void Internal_SwitchIntoFastMemory_Injected(IntPtr cmd, ref RenderTargetIdentifier rt, FastMemoryFlags fastMemoryFlags, float residency, bool copyContents);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001552")]
	[Address(RVA = "0x6954070", Offset = "0x6953070", VA = "0x6954070")]
	private static extern void Internal_SwitchOutOfFastMemory_Injected(IntPtr cmd, ref RenderTargetIdentifier rt, bool copyContents);
}
