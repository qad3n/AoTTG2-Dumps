// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RadeonRays.RadixSort
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x6776780", Offset = "0x6775780", VA = "0x6776780")]
	public RadixSort(RadeonRaysShaders shaders)
	{
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x6777280", Offset = "0x6776280", VA = "0x6777280")]
	public void Execute(CommandBuffer cmd, GraphicsBuffer buffer, uint inputKeysOffset, uint outputKeysOffset, uint inputValuesOffset, uint outputValuesOffset, uint scratchDataOffset, uint size)
	{
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x6777680", Offset = "0x6776680", VA = "0x6777680")]
	public static ulong GetScratchDataSizeInDwords(uint size)
	{
		return default(ulong);
	}
}
