// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RadeonRays.HlbvhBuilder
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RadeonRays;

[Token(Token = "0x2000009")]
internal class HlbvhBuilder
{
	[Token(Token = "0x200000A")]
	private struct ScratchBufferLayout
	{
		[Token(Token = "0x400001F")]
		[FieldOffset(Offset = "0x0")]
		public uint PrimitiveRefs;

		[Token(Token = "0x4000020")]
		[FieldOffset(Offset = "0x4")]
		public uint MortonCodes;

		[Token(Token = "0x4000021")]
		[FieldOffset(Offset = "0x8")]
		public uint SortedPrimitiveRefs;

		[Token(Token = "0x4000022")]
		[FieldOffset(Offset = "0xC")]
		public uint SortedMortonCodes;

		[Token(Token = "0x4000023")]
		[FieldOffset(Offset = "0x10")]
		public uint SortMemory;

		[Token(Token = "0x4000024")]
		[FieldOffset(Offset = "0x14")]
		public uint Aabb;

		[Token(Token = "0x4000025")]
		[FieldOffset(Offset = "0x18")]
		public uint LeafParents;

		[Token(Token = "0x4000026")]
		[FieldOffset(Offset = "0x1C")]
		public uint InternalNodeRange;

		[Token(Token = "0x4000027")]
		[FieldOffset(Offset = "0x20")]
		public uint TotalSize;

		[Token(Token = "0x6000022")]
		[Address(RVA = "0x2D94490", Offset = "0x2D92A90", VA = "0x182D94490")]
		public static ScratchBufferLayout Create(uint triangleCount)
		{
			return default(ScratchBufferLayout);
		}

		[Token(Token = "0x6000023")]
		[Address(RVA = "0x2D94610", Offset = "0x2D92C10", VA = "0x182D94610")]
		private uint Reserve(uint size)
		{
			return default(uint);
		}
	}

	[Token(Token = "0x4000016")]
	[FieldOffset(Offset = "0x10")]
	private readonly ComputeShader shaderBuildHlbvh;

	[Token(Token = "0x4000017")]
	[FieldOffset(Offset = "0x18")]
	private readonly int kernelInit;

	[Token(Token = "0x4000018")]
	[FieldOffset(Offset = "0x1C")]
	private readonly int kernelCalculateAabb;

	[Token(Token = "0x4000019")]
	[FieldOffset(Offset = "0x20")]
	private readonly int kernelCalculateMortonCodes;

	[Token(Token = "0x400001A")]
	[FieldOffset(Offset = "0x24")]
	private readonly int kernelBuildTreeBottomUp;

	[Token(Token = "0x400001B")]
	[FieldOffset(Offset = "0x28")]
	private readonly RadixSort radixSort;

	[Token(Token = "0x400001C")]
	private const uint kTrianglesPerThread = 8u;

	[Token(Token = "0x400001D")]
	private const uint kGroupSize = 256u;

	[Token(Token = "0x400001E")]
	private const uint kTrianglesPerGroup = 2048u;

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x2D902E0", Offset = "0x2D8E8E0", VA = "0x182D902E0")]
	public HlbvhBuilder(RadeonRaysShaders shaders)
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x2D90270", Offset = "0x2D8E870", VA = "0x182D90270")]
	public uint GetScratchDataSizeInDwords(uint triangleCount)
	{
		return default(uint);
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x2D90250", Offset = "0x2D8E850", VA = "0x182D90250")]
	public static uint GetBvhNodeCount(uint leafCount)
	{
		return default(uint);
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x2D90260", Offset = "0x2D8E860", VA = "0x182D90260")]
	public uint GetResultDataSizeInDwords(uint triangleCount)
	{
		return default(uint);
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x2D8FB20", Offset = "0x2D8E120", VA = "0x182D8FB20")]
	public void Execute(CommandBuffer cmd, GraphicsBuffer vertices, int verticesOffset, uint vertexStride, GraphicsBuffer indices, int indicesOffset, int baseIndex, IndexFormat indexFormat, uint triangleCount, GraphicsBuffer scratch, in BottomLevelLevelAccelStruct result)
	{
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x2D8F8E0", Offset = "0x2D8DEE0", VA = "0x182D8F8E0")]
	private void BindKernelArguments(CommandBuffer cmd, int kernel, GraphicsBuffer vertices, GraphicsBuffer indices, GraphicsBuffer scratch, ScratchBufferLayout scratchLayout, BottomLevelLevelAccelStruct result, bool setSortedCodes)
	{
	}
}
