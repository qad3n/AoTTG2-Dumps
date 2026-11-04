// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RadeonRays.HlbvhTopLevelBuilder
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RadeonRays;

[Token(Token = "0x200000C")]
internal class HlbvhTopLevelBuilder
{
	[Token(Token = "0x200000D")]
	private struct ScratchBufferLayout
	{
		[Token(Token = "0x4000037")]
		[FieldOffset(Offset = "0x0")]
		public uint Aabb;

		[Token(Token = "0x4000038")]
		[FieldOffset(Offset = "0x4")]
		public uint MortonCodes;

		[Token(Token = "0x4000039")]
		[FieldOffset(Offset = "0x8")]
		public uint PrimitiveRefs;

		[Token(Token = "0x400003A")]
		[FieldOffset(Offset = "0xC")]
		public uint SortedMortonCodes;

		[Token(Token = "0x400003B")]
		[FieldOffset(Offset = "0x10")]
		public uint SortedPrimitiveRefs;

		[Token(Token = "0x400003C")]
		[FieldOffset(Offset = "0x14")]
		public uint SortMemory;

		[Token(Token = "0x400003D")]
		[FieldOffset(Offset = "0x18")]
		public uint InternalNodeRange;

		[Token(Token = "0x400003E")]
		[FieldOffset(Offset = "0x1C")]
		public uint TotalSize;

		[Token(Token = "0x600002C")]
		[Address(RVA = "0x2D94540", Offset = "0x2D92B40", VA = "0x182D94540")]
		public static ScratchBufferLayout Create(uint instanceCount)
		{
			return default(ScratchBufferLayout);
		}

		[Token(Token = "0x600002D")]
		[Address(RVA = "0x2D945F0", Offset = "0x2D92BF0", VA = "0x182D945F0")]
		private uint Reserve(uint size)
		{
			return default(uint);
		}
	}

	[Token(Token = "0x400002E")]
	[FieldOffset(Offset = "0x10")]
	private readonly ComputeShader shaderBuildHlbvh;

	[Token(Token = "0x400002F")]
	[FieldOffset(Offset = "0x18")]
	private readonly int kernelInit;

	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x1C")]
	private readonly int kernelCalculateAabb;

	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x20")]
	private readonly int kernelCalculateMortonCodes;

	[Token(Token = "0x4000032")]
	[FieldOffset(Offset = "0x24")]
	private readonly int kernelBuildTreeBottomUp;

	[Token(Token = "0x4000033")]
	[FieldOffset(Offset = "0x28")]
	private readonly RadixSort radixSort;

	[Token(Token = "0x4000034")]
	private const uint kTrianglesPerThread = 8u;

	[Token(Token = "0x4000035")]
	private const uint kGroupSize = 256u;

	[Token(Token = "0x4000036")]
	private const uint kTrianglesPerGroup = 2048u;

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x2D90F60", Offset = "0x2D8F560", VA = "0x182D90F60")]
	public HlbvhTopLevelBuilder(RadeonRaysShaders shaders)
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x2D90EF0", Offset = "0x2D8F4F0", VA = "0x182D90EF0")]
	public ulong GetScratchDataSizeInDwords(uint instanceCount)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x2D90250", Offset = "0x2D8E850", VA = "0x182D90250")]
	public static uint GetBvhNodeCount(uint leafCount)
	{
		return default(uint);
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x2D90420", Offset = "0x2D8EA20", VA = "0x182D90420")]
	public void AllocateResultBuffers(uint instanceCount, ref TopLevelAccelStruct accelStruct)
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x2D90770", Offset = "0x2D8ED70", VA = "0x182D90770")]
	public void CreateEmpty(ref TopLevelAccelStruct accelStruct)
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x2D90940", Offset = "0x2D8EF40", VA = "0x182D90940")]
	public void Execute(CommandBuffer cmd, GraphicsBuffer scratch, ref TopLevelAccelStruct accelStruct)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x2D90540", Offset = "0x2D8EB40", VA = "0x182D90540")]
	private void BindKernelArguments(CommandBuffer cmd, int kernel, GraphicsBuffer scratch, ScratchBufferLayout scratchLayout, TopLevelAccelStruct accelStruct, bool setSortedCodes)
	{
	}
}
