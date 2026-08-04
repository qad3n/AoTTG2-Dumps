// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.CommandBufferHelpers
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Rendering;

namespace UnityEngine.Experimental.Rendering;

[Token(Token = "0x200000A")]
public struct CommandBufferHelpers
{
	[Token(Token = "0x4000018")]
	[FieldOffset(Offset = "0x0")]
	internal static RasterCommandBuffer rasterCmd;

	[Token(Token = "0x4000019")]
	[FieldOffset(Offset = "0x8")]
	internal static ComputeCommandBuffer computeCmd;

	[Token(Token = "0x400001A")]
	[FieldOffset(Offset = "0x10")]
	internal static LowLevelCommandBuffer lowlevelCmd;

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x4B6A950", Offset = "0x4B6A950", VA = "0x4B6A950")]
	public static RasterCommandBuffer GetRasterCommandBuffer(CommandBuffer baseBuffer)
	{
		return null;
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4B6A9F0", Offset = "0x4B6A9F0", VA = "0x4B6A9F0")]
	public static ComputeCommandBuffer GetComputeCommandBuffer(CommandBuffer baseBuffer)
	{
		return null;
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x4B6AA90", Offset = "0x4B6AA90", VA = "0x4B6AA90")]
	public static LowLevelCommandBuffer GetLowLevelCommandBuffer(CommandBuffer baseBuffer)
	{
		return null;
	}
}
