// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RadeonRays.RadixSort
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RadeonRays;

[Token(Token = "0x200001D")]
internal class RadixSort
{
	[Token(Token = "0x4000090")]
	[FieldOffset(Offset = "0x10")]
	private readonly ComputeShader shaderBitHistogram;

	[Token(Token = "0x4000091")]
	[FieldOffset(Offset = "0x18")]
	private readonly int kernelBitHistogram;

	[Token(Token = "0x4000092")]
	[FieldOffset(Offset = "0x20")]
	private readonly ComputeShader shaderScatter;

	[Token(Token = "0x4000093")]
	[FieldOffset(Offset = "0x28")]
	private readonly int kernelScatter;

	[Token(Token = "0x4000094")]
	[FieldOffset(Offset = "0x30")]
	private readonly Scan scan;

	[Token(Token = "0x4000095")]
	private const uint kKeysPerThread = 4u;

	[Token(Token = "0x4000096")]
	private const uint kGroupSize = 256u;

	[Token(Token = "0x4000097")]
	private const uint kKeysPerGroup = 1024u;

	[Token(Token = "0x4000098")]
	private const int kNumBitsPerPass = 4;

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x2D92B90", Offset = "0x2D91190", VA = "0x182D92B90")]
	public RadixSort(RadeonRaysShaders shaders)
	{
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x2D92630", Offset = "0x2D90C30", VA = "0x182D92630")]
	public void Execute(CommandBuffer cmd, GraphicsBuffer buffer, uint inputKeysOffset, uint outputKeysOffset, uint inputValuesOffset, uint outputValuesOffset, uint scratchDataOffset, uint size)
	{
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x2D92B30", Offset = "0x2D91130", VA = "0x182D92B30")]
	public static ulong GetScratchDataSizeInDwords(uint size)
	{
		return default(ulong);
	}
}
