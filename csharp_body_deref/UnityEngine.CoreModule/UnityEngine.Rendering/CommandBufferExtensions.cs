using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002CF")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Graphics/RenderingCommandBufferExtensions.bindings.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public static class CommandBufferExtensions
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FFC")]
	[Address(RVA = "0x4B00A50", Offset = "0x4B00A50", VA = "0x4B00A50")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBufferExtensions_Bindings::Internal_SwitchIntoFastMemory")]
	private static extern void Internal_SwitchIntoFastMemory([UnityEngine.Bindings.NotNull("NullExceptionObject")] CommandBuffer cmd, ref RenderTargetIdentifier rt, FastMemoryFlags fastMemoryFlags, float residency, bool copyContents);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FFD")]
	[Address(RVA = "0x4B00AB0", Offset = "0x4B00AB0", VA = "0x4B00AB0")]
	[UnityEngine.Bindings.FreeFunction("RenderingCommandBufferExtensions_Bindings::Internal_SwitchOutOfFastMemory")]
	private static extern void Internal_SwitchOutOfFastMemory([UnityEngine.Bindings.NotNull("NullExceptionObject")] CommandBuffer cmd, ref RenderTargetIdentifier rt, bool copyContents);

	[Token(Token = "0x6000FFE")]
	[Address(RVA = "0x4B00AF0", Offset = "0x4B00AF0", VA = "0x4B00AF0")]
	[UnityEngine.Bindings.NativeConditional("UNITY_XBOXONE || UNITY_GAMECORE_XBOXONE")]
	public static void SwitchIntoFastMemory(this CommandBuffer cmd, RenderTargetIdentifier rid, FastMemoryFlags fastMemoryFlags, float residency, bool copyContents)
	{
	}

	[Token(Token = "0x6000FFF")]
	[Address(RVA = "0x4B00B50", Offset = "0x4B00B50", VA = "0x4B00B50")]
	[UnityEngine.Bindings.NativeConditional("UNITY_XBOXONE || UNITY_GAMECORE_XBOXONE")]
	public static void SwitchOutOfFastMemory(this CommandBuffer cmd, RenderTargetIdentifier rid, bool copyContents)
	{
	}
}
