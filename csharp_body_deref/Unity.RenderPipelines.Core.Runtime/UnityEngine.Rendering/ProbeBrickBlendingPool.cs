// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeBrickBlendingPool
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x2450AE0", Offset = "0x244F0E0", VA = "0x182450AE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F5")]
	internal int estimatedVMemCost
	{
		[Token(Token = "0x60008AE")]
		[Address(RVA = "0x2B0E030", Offset = "0x2B0C630", VA = "0x182B0E030")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60008AC")]
	[Address(RVA = "0x2B0CB50", Offset = "0x2B0B150", VA = "0x182B0CB50")]
	internal static void Initialize()
	{
	}

	[Token(Token = "0x60008AF")]
	[Address(RVA = "0x2B0CB30", Offset = "0x2B0B130", VA = "0x182B0CB30")]
	internal int GetPoolWidth()
	{
		return default(int);
	}

	[Token(Token = "0x60008B0")]
	[Address(RVA = "0x2B0CB10", Offset = "0x2B0B110", VA = "0x182B0CB10")]
	internal int GetPoolHeight()
	{
		return default(int);
	}

	[Token(Token = "0x60008B1")]
	[Address(RVA = "0x2B0CAF0", Offset = "0x2B0B0F0", VA = "0x182B0CAF0")]
	internal int GetPoolDepth()
	{
		return default(int);
	}

	[Token(Token = "0x60008B2")]
	[Address(RVA = "0x2B0E000", Offset = "0x2B0C600", VA = "0x182B0E000")]
	internal ProbeBrickBlendingPool(ProbeVolumeBlendingTextureMemoryBudget memoryBudget, ProbeVolumeSHBands shBands, bool probeOcclusion)
	{
	}

	[Token(Token = "0x60008B3")]
	[Address(RVA = "0x2B0C4E0", Offset = "0x2B0AAE0", VA = "0x182B0C4E0")]
	internal void AllocateResourcesIfNeeded()
	{
	}

	[Token(Token = "0x60008B4")]
	[Address(RVA = "0x2B0DAC0", Offset = "0x2B0C0C0", VA = "0x182B0DAC0")]
	internal void Update(ProbeBrickPool.DataLocation source, List<ProbeBrickPool.BrickChunkAlloc> srcLocations, List<ProbeBrickPool.BrickChunkAlloc> dstLocations, int destStartIndex, ProbeVolumeSHBands bands, int state)
	{
	}

	[Token(Token = "0x60008B5")]
	[Address(RVA = "0x2B0DB60", Offset = "0x2B0C160", VA = "0x182B0DB60")]
	internal void Update(CommandBuffer cmd, ProbeReferenceVolume.CellStreamingScratchBuffer dataBuffer, ProbeReferenceVolume.CellStreamingScratchBufferLayout layout, List<ProbeBrickPool.BrickChunkAlloc> dstLocations, ProbeVolumeSHBands bands, int state, Texture validityTexture, bool skyOcclusion, Texture skyOcclusionTexture, bool skyShadingDirections, Texture skyShadingDirectionsTexture, bool probeOcclusion)
	{
	}

	[Token(Token = "0x60008B6")]
	[Address(RVA = "0x2B0CCE0", Offset = "0x2B0B2E0", VA = "0x182B0CCE0")]
	internal void PerformBlending(CommandBuffer cmd, float factor, ProbeBrickPool dstPool)
	{
	}

	[Token(Token = "0x60008B7")]
	[Address(RVA = "0x2B0C840", Offset = "0x2B0AE40", VA = "0x182B0C840")]
	internal void BlendChunks(ProbeReferenceVolume.Cell cell, ProbeBrickPool dstPool)
	{
	}

	[Token(Token = "0x60008B8")]
	[Address(RVA = "0x2B0C9F0", Offset = "0x2B0AFF0", VA = "0x182B0C9F0")]
	internal void Clear()
	{
	}

	[Token(Token = "0x60008B9")]
	[Address(RVA = "0x2B0C660", Offset = "0x2B0AC60", VA = "0x182B0C660")]
	internal bool Allocate(int numberOfBrickChunks, List<ProbeBrickPool.BrickChunkAlloc> outAllocations)
	{
		return default(bool);
	}

	[Token(Token = "0x60008BA")]
	[Address(RVA = "0x2B0CA50", Offset = "0x2B0B050", VA = "0x182B0CA50")]
	internal void Deallocate(List<ProbeBrickPool.BrickChunkAlloc> allocations)
	{
	}

	[Token(Token = "0x60008BB")]
	[Address(RVA = "0x2B0CAB0", Offset = "0x2B0B0B0", VA = "0x182B0CAB0")]
	internal void EnsureTextureValidity()
	{
	}

	[Token(Token = "0x60008BC")]
	[Address(RVA = "0x2B0C9A0", Offset = "0x2B0AFA0", VA = "0x182B0C9A0")]
	internal void Cleanup()
	{
	}
}
