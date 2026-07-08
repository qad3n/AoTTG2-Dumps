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
	[Address(RVA = "0x4845860", Offset = "0x4845860", VA = "0x4845860")]
	public static RasterCommandBuffer GetRasterCommandBuffer(CommandBuffer baseBuffer)
	{
		return null;
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4845900", Offset = "0x4845900", VA = "0x4845900")]
	public static ComputeCommandBuffer GetComputeCommandBuffer(CommandBuffer baseBuffer)
	{
		return null;
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x48459A0", Offset = "0x48459A0", VA = "0x48459A0")]
	public static LowLevelCommandBuffer GetLowLevelCommandBuffer(CommandBuffer baseBuffer)
	{
		return null;
	}
}
