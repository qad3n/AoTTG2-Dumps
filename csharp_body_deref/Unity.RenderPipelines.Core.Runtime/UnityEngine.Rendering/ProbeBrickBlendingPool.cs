// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeBrickBlendingPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000FB")]
internal class ProbeBrickBlendingPool
{
	[Token(Token = "0x400038D")]
	[FieldOffset(Offset = "0x0")]
	private static ComputeShader stateBlendShader;

	[Token(Token = "0x400038E")]
	[FieldOffset(Offset = "0x8")]
	private static int scenarioBlendingKernel;

	[Token(Token = "0x400038F")]
	[FieldOffset(Offset = "0xC")]
	private static readonly int _PoolDim_LerpFactor;

	[Token(Token = "0x4000390")]
	[FieldOffset(Offset = "0x10")]
	private static readonly int _ChunkList;

	[Token(Token = "0x4000391")]
	[FieldOffset(Offset = "0x14")]
	private static readonly int _State0_L0_L1Rx;

	[Token(Token = "0x4000392")]
	[FieldOffset(Offset = "0x18")]
	private static readonly int _State0_L1G_L1Ry;

	[Token(Token = "0x4000393")]
	[FieldOffset(Offset = "0x1C")]
	private static readonly int _State0_L1B_L1Rz;

	[Token(Token = "0x4000394")]
	[FieldOffset(Offset = "0x20")]
	private static readonly int _State0_L2_0;

	[Token(Token = "0x4000395")]
	[FieldOffset(Offset = "0x24")]
	private static readonly int _State0_L2_1;

	[Token(Token = "0x4000396")]
	[FieldOffset(Offset = "0x28")]
	private static readonly int _State0_L2_2;

	[Token(Token = "0x4000397")]
	[FieldOffset(Offset = "0x2C")]
	private static readonly int _State0_L2_3;

	[Token(Token = "0x4000398")]
	[FieldOffset(Offset = "0x30")]
	private static readonly int _State0_ProbeOcclusion;

	[Token(Token = "0x4000399")]
	[FieldOffset(Offset = "0x34")]
	private static readonly int _State1_L0_L1Rx;

	[Token(Token = "0x400039A")]
	[FieldOffset(Offset = "0x38")]
	private static readonly int _State1_L1G_L1Ry;

	[Token(Token = "0x400039B")]
	[FieldOffset(Offset = "0x3C")]
	private static readonly int _State1_L1B_L1Rz;

	[Token(Token = "0x400039C")]
	[FieldOffset(Offset = "0x40")]
	private static readonly int _State1_L2_0;

	[Token(Token = "0x400039D")]
	[FieldOffset(Offset = "0x44")]
	private static readonly int _State1_L2_1;

	[Token(Token = "0x400039E")]
	[FieldOffset(Offset = "0x48")]
	private static readonly int _State1_L2_2;

	[Token(Token = "0x400039F")]
	[FieldOffset(Offset = "0x4C")]
	private static readonly int _State1_L2_3;

	[Token(Token = "0x40003A0")]
	[FieldOffset(Offset = "0x50")]
	private static readonly int _State1_ProbeOcclusion;

	[Token(Token = "0x40003A1")]
	[FieldOffset(Offset = "0x10")]
	private Vector4[] m_ChunkList;

	[Token(Token = "0x40003A2")]
	[FieldOffset(Offset = "0x18")]
	private int m_MappedChunks;

	[Token(Token = "0x40003A3")]
	[FieldOffset(Offset = "0x20")]
	private ProbeBrickPool m_State0;

	[Token(Token = "0x40003A4")]
	[FieldOffset(Offset = "0x28")]
	private ProbeBrickPool m_State1;

	[Token(Token = "0x40003A5")]
	[FieldOffset(Offset = "0x30")]
	private ProbeVolumeTextureMemoryBudget m_MemoryBudget;

	[Token(Token = "0x40003A6")]
	[FieldOffset(Offset = "0x34")]
	private ProbeVolumeSHBands m_ShBands;

	[Token(Token = "0x40003A7")]
	[FieldOffset(Offset = "0x38")]
	private bool m_ProbeOcclusion;

	[Token(Token = "0x170000F4")]
	internal bool isAllocated
	{
		[Token(Token = "0x60008AD")]
		[Address(RVA = "0x6501150", Offset = "0x6500150", VA = "0x6501150")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F5")]
	internal int estimatedVMemCost
	{
		[Token(Token = "0x60008AE")]
		[Address(RVA = "0x6501160", Offset = "0x6500160", VA = "0x6501160")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60008AC")]
	[Address(RVA = "0x6500FC0", Offset = "0x64FFFC0", VA = "0x6500FC0")]
	internal static void Initialize()
	{
	}

	[Token(Token = "0x60008AF")]
	[Address(RVA = "0x6501290", Offset = "0x6500290", VA = "0x6501290")]
	internal int GetPoolWidth()
	{
		return default(int);
	}

	[Token(Token = "0x60008B0")]
	[Address(RVA = "0x65012B0", Offset = "0x65002B0", VA = "0x65012B0")]
	internal int GetPoolHeight()
	{
		return default(int);
	}

	[Token(Token = "0x60008B1")]
	[Address(RVA = "0x65012D0", Offset = "0x65002D0", VA = "0x65012D0")]
	internal int GetPoolDepth()
	{
		return default(int);
	}

	[Token(Token = "0x60008B2")]
	[Address(RVA = "0x65012F0", Offset = "0x65002F0", VA = "0x65012F0")]
	internal ProbeBrickBlendingPool(ProbeVolumeBlendingTextureMemoryBudget memoryBudget, ProbeVolumeSHBands shBands, bool probeOcclusion)
	{
	}

	[Token(Token = "0x60008B3")]
	[Address(RVA = "0x6501320", Offset = "0x6500320", VA = "0x6501320")]
	internal void AllocateResourcesIfNeeded()
	{
	}

	[Token(Token = "0x60008B4")]
	[Address(RVA = "0x6501490", Offset = "0x6500490", VA = "0x6501490")]
	internal void Update(ProbeBrickPool.DataLocation source, List<ProbeBrickPool.BrickChunkAlloc> srcLocations, List<ProbeBrickPool.BrickChunkAlloc> dstLocations, int destStartIndex, ProbeVolumeSHBands bands, int state)
	{
	}

	[Token(Token = "0x60008B5")]
	[Address(RVA = "0x65014B0", Offset = "0x65004B0", VA = "0x65014B0")]
	internal void Update(CommandBuffer cmd, ProbeReferenceVolume.CellStreamingScratchBuffer dataBuffer, ProbeReferenceVolume.CellStreamingScratchBufferLayout layout, List<ProbeBrickPool.BrickChunkAlloc> dstLocations, ProbeVolumeSHBands bands, int state, Texture validityTexture, bool skyOcclusion, Texture skyOcclusionTexture, bool skyShadingDirections, Texture skyShadingDirectionsTexture, bool probeOcclusion)
	{
	}

	[Token(Token = "0x60008B6")]
	[Address(RVA = "0x65015B0", Offset = "0x65005B0", VA = "0x65015B0")]
	internal void PerformBlending(CommandBuffer cmd, float factor, ProbeBrickPool dstPool)
	{
	}

	[Token(Token = "0x60008B7")]
	[Address(RVA = "0x6502390", Offset = "0x6501390", VA = "0x6502390")]
	internal void BlendChunks(ProbeReferenceVolume.Cell cell, ProbeBrickPool dstPool)
	{
	}

	[Token(Token = "0x60008B8")]
	[Address(RVA = "0x6502520", Offset = "0x6501520", VA = "0x6502520")]
	internal void Clear()
	{
	}

	[Token(Token = "0x60008B9")]
	[Address(RVA = "0x6502580", Offset = "0x6501580", VA = "0x6502580")]
	internal bool Allocate(int numberOfBrickChunks, List<ProbeBrickPool.BrickChunkAlloc> outAllocations)
	{
		return default(bool);
	}

	[Token(Token = "0x60008BA")]
	[Address(RVA = "0x65025C0", Offset = "0x65015C0", VA = "0x65025C0")]
	internal void Deallocate(List<ProbeBrickPool.BrickChunkAlloc> allocations)
	{
	}

	[Token(Token = "0x60008BB")]
	[Address(RVA = "0x6502620", Offset = "0x6501620", VA = "0x6502620")]
	internal void EnsureTextureValidity()
	{
	}

	[Token(Token = "0x60008BC")]
	[Address(RVA = "0x6502720", Offset = "0x6501720", VA = "0x6502720")]
	internal void Cleanup()
	{
	}
}
