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

[Token(Token = "0x2000119")]
internal class ProbeBrickBlendingPool
{
	[Token(Token = "0x40003EA")]
	[FieldOffset(Offset = "0x0")]
	private static ComputeShader stateBlendShader;

	[Token(Token = "0x40003EB")]
	[FieldOffset(Offset = "0x8")]
	private static int scenarioBlendingKernel;

	[Token(Token = "0x40003EC")]
	[FieldOffset(Offset = "0xC")]
	private static readonly int _PoolDim_LerpFactor;

	[Token(Token = "0x40003ED")]
	[FieldOffset(Offset = "0x10")]
	private static readonly int _ChunkList;

	[Token(Token = "0x40003EE")]
	[FieldOffset(Offset = "0x14")]
	private static readonly int _State0_L0_L1Rx;

	[Token(Token = "0x40003EF")]
	[FieldOffset(Offset = "0x18")]
	private static readonly int _State0_L1G_L1Ry;

	[Token(Token = "0x40003F0")]
	[FieldOffset(Offset = "0x1C")]
	private static readonly int _State0_L1B_L1Rz;

	[Token(Token = "0x40003F1")]
	[FieldOffset(Offset = "0x20")]
	private static readonly int _State0_L2_0;

	[Token(Token = "0x40003F2")]
	[FieldOffset(Offset = "0x24")]
	private static readonly int _State0_L2_1;

	[Token(Token = "0x40003F3")]
	[FieldOffset(Offset = "0x28")]
	private static readonly int _State0_L2_2;

	[Token(Token = "0x40003F4")]
	[FieldOffset(Offset = "0x2C")]
	private static readonly int _State0_L2_3;

	[Token(Token = "0x40003F5")]
	[FieldOffset(Offset = "0x30")]
	private static readonly int _State1_L0_L1Rx;

	[Token(Token = "0x40003F6")]
	[FieldOffset(Offset = "0x34")]
	private static readonly int _State1_L1G_L1Ry;

	[Token(Token = "0x40003F7")]
	[FieldOffset(Offset = "0x38")]
	private static readonly int _State1_L1B_L1Rz;

	[Token(Token = "0x40003F8")]
	[FieldOffset(Offset = "0x3C")]
	private static readonly int _State1_L2_0;

	[Token(Token = "0x40003F9")]
	[FieldOffset(Offset = "0x40")]
	private static readonly int _State1_L2_1;

	[Token(Token = "0x40003FA")]
	[FieldOffset(Offset = "0x44")]
	private static readonly int _State1_L2_2;

	[Token(Token = "0x40003FB")]
	[FieldOffset(Offset = "0x48")]
	private static readonly int _State1_L2_3;

	[Token(Token = "0x40003FC")]
	[FieldOffset(Offset = "0x4C")]
	private static readonly int _Out_L0_L1Rx;

	[Token(Token = "0x40003FD")]
	[FieldOffset(Offset = "0x50")]
	private static readonly int _Out_L1G_L1Ry;

	[Token(Token = "0x40003FE")]
	[FieldOffset(Offset = "0x54")]
	private static readonly int _Out_L1B_L1Rz;

	[Token(Token = "0x40003FF")]
	[FieldOffset(Offset = "0x58")]
	private static readonly int _Out_L2_0;

	[Token(Token = "0x4000400")]
	[FieldOffset(Offset = "0x5C")]
	private static readonly int _Out_L2_1;

	[Token(Token = "0x4000401")]
	[FieldOffset(Offset = "0x60")]
	private static readonly int _Out_L2_2;

	[Token(Token = "0x4000402")]
	[FieldOffset(Offset = "0x64")]
	private static readonly int _Out_L2_3;

	[Token(Token = "0x4000403")]
	[FieldOffset(Offset = "0x10")]
	private Vector4[] m_ChunkList;

	[Token(Token = "0x4000404")]
	[FieldOffset(Offset = "0x18")]
	private int m_MappedChunks;

	[Token(Token = "0x4000405")]
	[FieldOffset(Offset = "0x20")]
	private ProbeBrickPool m_State0;

	[Token(Token = "0x4000406")]
	[FieldOffset(Offset = "0x28")]
	private ProbeBrickPool m_State1;

	[Token(Token = "0x4000407")]
	[FieldOffset(Offset = "0x30")]
	private ProbeVolumeTextureMemoryBudget m_MemoryBudget;

	[Token(Token = "0x4000408")]
	[FieldOffset(Offset = "0x34")]
	private ProbeVolumeSHBands m_ShBands;

	[Token(Token = "0x170000F5")]
	internal static bool isSupported
	{
		[Token(Token = "0x60008F5")]
		[Address(RVA = "0x4BB6830", Offset = "0x4BB6830", VA = "0x4BB6830")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F6")]
	internal bool isAllocated
	{
		[Token(Token = "0x60008F7")]
		[Address(RVA = "0x4BB69C0", Offset = "0x4BB69C0", VA = "0x4BB69C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F7")]
	internal int estimatedVMemCost
	{
		[Token(Token = "0x60008F8")]
		[Address(RVA = "0x4BB69D0", Offset = "0x4BB69D0", VA = "0x4BB69D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60008F6")]
	[Address(RVA = "0x4BB68B0", Offset = "0x4BB68B0", VA = "0x4BB68B0")]
	internal static void Initialize(in ProbeVolumeSystemParameters parameters)
	{
	}

	[Token(Token = "0x60008F9")]
	[Address(RVA = "0x4BB6C50", Offset = "0x4BB6C50", VA = "0x4BB6C50")]
	internal int GetPoolWidth()
	{
		return default(int);
	}

	[Token(Token = "0x60008FA")]
	[Address(RVA = "0x4BB6C70", Offset = "0x4BB6C70", VA = "0x4BB6C70")]
	internal int GetPoolHeight()
	{
		return default(int);
	}

	[Token(Token = "0x60008FB")]
	[Address(RVA = "0x4BB6C90", Offset = "0x4BB6C90", VA = "0x4BB6C90")]
	internal int GetPoolDepth()
	{
		return default(int);
	}

	[Token(Token = "0x60008FC")]
	[Address(RVA = "0x4BB6CB0", Offset = "0x4BB6CB0", VA = "0x4BB6CB0")]
	internal ProbeBrickBlendingPool(ProbeVolumeBlendingTextureMemoryBudget memoryBudget, ProbeVolumeSHBands shBands)
	{
	}

	[Token(Token = "0x60008FD")]
	[Address(RVA = "0x4BB6CD0", Offset = "0x4BB6CD0", VA = "0x4BB6CD0")]
	internal void AllocateResourcesIfNeeded()
	{
	}

	[Token(Token = "0x60008FE")]
	[Address(RVA = "0x4BB6E00", Offset = "0x4BB6E00", VA = "0x4BB6E00")]
	internal void Update(ProbeBrickPool.DataLocation source, List<ProbeBrickPool.BrickChunkAlloc> srcLocations, List<ProbeBrickPool.BrickChunkAlloc> dstLocations, int destStartIndex, ProbeVolumeSHBands bands, int state)
	{
	}

	[Token(Token = "0x60008FF")]
	[Address(RVA = "0x4BB6EB0", Offset = "0x4BB6EB0", VA = "0x4BB6EB0")]
	private static int DivRoundUp(int x, int y)
	{
		return default(int);
	}

	[Token(Token = "0x6000900")]
	[Address(RVA = "0x4BB6EC0", Offset = "0x4BB6EC0", VA = "0x4BB6EC0")]
	internal void PerformBlending(CommandBuffer cmd, float factor, ProbeBrickPool dstPool)
	{
	}

	[Token(Token = "0x6000901")]
	[Address(RVA = "0x4BB7C30", Offset = "0x4BB7C30", VA = "0x4BB7C30")]
	internal void BlendChunks(ProbeReferenceVolume.BlendingCellInfo blendingCell, ProbeBrickPool dstPool)
	{
	}

	[Token(Token = "0x6000902")]
	[Address(RVA = "0x4BB7DB0", Offset = "0x4BB7DB0", VA = "0x4BB7DB0")]
	internal void Clear()
	{
	}

	[Token(Token = "0x6000903")]
	[Address(RVA = "0x4BB7E10", Offset = "0x4BB7E10", VA = "0x4BB7E10")]
	internal bool Allocate(int numberOfBrickChunks, List<ProbeBrickPool.BrickChunkAlloc> outAllocations)
	{
		return default(bool);
	}

	[Token(Token = "0x6000904")]
	[Address(RVA = "0x4BB7E50", Offset = "0x4BB7E50", VA = "0x4BB7E50")]
	internal void Deallocate(List<ProbeBrickPool.BrickChunkAlloc> allocations)
	{
	}

	[Token(Token = "0x6000905")]
	[Address(RVA = "0x4BB7EB0", Offset = "0x4BB7EB0", VA = "0x4BB7EB0")]
	internal void EnsureTextureValidity()
	{
	}

	[Token(Token = "0x6000906")]
	[Address(RVA = "0x4BB7EE0", Offset = "0x4BB7EE0", VA = "0x4BB7EE0")]
	internal void Cleanup()
	{
	}
}
