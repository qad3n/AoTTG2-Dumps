// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CommandBufferExtensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002D2")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Graphics/RenderingCommandBufferExtensions.bindings.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public static class CommandBufferExtensions
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FFE")]
	[Address(RVA = "0x4E28380", Offset = "0x4E28380", VA = "0x4E28380")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBufferExtensions_Bindings::Internal_SwitchIntoFastMemory")]
	private static extern void Internal_SwitchIntoFastMemory([UnityEngine.Bindings.NotNull("NullExceptionObject")] CommandBuffer cmd, ref RenderTargetIdentifier rt, FastMemoryFlags fastMemoryFlags, float residency, bool copyContents);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FFF")]
	[Address(RVA = "0x4E283E0", Offset = "0x4E283E0", VA = "0x4E283E0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBufferExtensions_Bindings::Internal_SwitchOutOfFastMemory")]
	private static extern void Internal_SwitchOutOfFastMemory([UnityEngine.Bindings.NotNull("NullExceptionObject")] CommandBuffer cmd, ref RenderTargetIdentifier rt, bool copyContents);

	[Token(Token = "0x6001000")]
	[Address(RVA = "0x4E28420", Offset = "0x4E28420", VA = "0x4E28420")]
	[UnityEngine.Bindings.NativeConditional("UNITY_XBOXONE || UNITY_GAMECORE_XBOXONE")]
	public static void SwitchIntoFastMemory(this CommandBuffer cmd, RenderTargetIdentifier rid, FastMemoryFlags fastMemoryFlags, float residency, bool copyContents)
	{
	}

	[Token(Token = "0x6001001")]
	[Address(RVA = "0x4E28480", Offset = "0x4E28480", VA = "0x4E28480")]
	[UnityEngine.Bindings.NativeConditional("UNITY_XBOXONE || UNITY_GAMECORE_XBOXONE")]
	public static void SwitchOutOfFastMemory(this CommandBuffer cmd, RenderTargetIdentifier rid, bool copyContents)
	{
	}
}
