// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RadeonRays.Scan
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RadeonRays;

[Token(Token = "0x2000020")]
internal class Scan
{
	[Token(Token = "0x40000AA")]
	[FieldOffset(Offset = "0x10")]
	private readonly ComputeShader shaderScan;

	[Token(Token = "0x40000AB")]
	[FieldOffset(Offset = "0x18")]
	private readonly int kernelScan;

	[Token(Token = "0x40000AC")]
	[FieldOffset(Offset = "0x20")]
	private readonly ComputeShader shaderReduce;

	[Token(Token = "0x40000AD")]
	[FieldOffset(Offset = "0x28")]
	private readonly int kernelReduce;

	[Token(Token = "0x40000AE")]
	private const uint kKeysPerThread = 4u;

	[Token(Token = "0x40000AF")]
	private const uint kGroupSize = 256u;

	[Token(Token = "0x40000B0")]
	private const uint kKeysPerGroup = 1024u;

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x2D943A0", Offset = "0x2D929A0", VA = "0x182D943A0")]
	public Scan(RadeonRaysShaders shaders)
	{
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x2D93E40", Offset = "0x2D92440", VA = "0x182D93E40")]
	public void Execute(CommandBuffer cmd, GraphicsBuffer buffer, uint inputKeysOffset, uint outputKeysOffset, uint scratchDataOffset, uint size)
	{
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x2D94250", Offset = "0x2D92850", VA = "0x182D94250")]
	private void SetState(CommandBuffer cmd, ComputeShader shader, int kernelIndex, uint size, GraphicsBuffer buffer, uint inputKeysOffset, uint scratchDataOffset, uint outputKeysOffset)
	{
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x2D94220", Offset = "0x2D92820", VA = "0x182D94220")]
	public static ulong GetScratchDataSizeInDwords(uint size)
	{
		return default(ulong);
	}
}
