// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeBrickIndex
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering;

[Token(Token = "0x200010E")]
internal class ProbeBrickIndex
{
	[Serializable]
	[Token(Token = "0x200010F")]
	[DebuggerDisplay("Brick [{position}, {subdivisionLevel}]")]
	public struct Brick : IEquatable<Brick>
	{
		[Token(Token = "0x40003B8")]
		[FieldOffset(Offset = "0x0")]
		public Vector3Int position;

		[Token(Token = "0x40003B9")]
		[FieldOffset(Offset = "0xC")]
		public int subdivisionLevel;

		[Token(Token = "0x60008CC")]
		[Address(RVA = "0x4BB44B0", Offset = "0x4BB44B0", VA = "0x4BB44B0")]
		internal Brick(Vector3Int position, int subdivisionLevel)
		{
		}

		[Token(Token = "0x60008CD")]
		[Address(RVA = "0x4BB44C0", Offset = "0x4BB44C0", VA = "0x4BB44C0", Slot = "4")]
		public bool Equals(Brick other)
		{
			return default(bool);
		}

		[Token(Token = "0x60008CE")]
		[Address(RVA = "0x4BB44F0", Offset = "0x4BB44F0", VA = "0x4BB44F0")]
		public bool IntersectArea(Bounds boundInBricksToCheck)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000110")]
	[DebuggerDisplay("Brick [{brick.position}, {brick.subdivisionLevel}], {flattenedIdx}")]
	private struct ReservedBrick
	{
		[Token(Token = "0x40003BA")]
		[FieldOffset(Offset = "0x0")]
		public Brick brick;

		[Token(Token = "0x40003BB")]
		[FieldOffset(Offset = "0x10")]
		public int flattenedIdx;
	}

	[Token(Token = "0x2000111")]
	private class VoxelMeta
	{
		[Token(Token = "0x40003BC")]
		[FieldOffset(Offset = "0x10")]
		public ProbeReferenceVolume.Cell cell;

		[Token(Token = "0x40003BD")]
		[FieldOffset(Offset = "0x18")]
		public List<ushort> brickIndices;

		[Token(Token = "0x60008CF")]
		[Address(RVA = "0x4BB46C0", Offset = "0x4BB46C0", VA = "0x4BB46C0")]
		public void Clear()
		{
		}

		[Token(Token = "0x60008D0")]
		[Address(RVA = "0x4BB4710", Offset = "0x4BB4710", VA = "0x4BB4710")]
		public VoxelMeta()
		{
		}
	}

	[Token(Token = "0x2000112")]
	private class BrickMeta
	{
		[Token(Token = "0x40003BE")]
		[FieldOffset(Offset = "0x10")]
		public HashSet<Vector3Int> voxels;

		[Token(Token = "0x40003BF")]
		[FieldOffset(Offset = "0x18")]
		public List<ReservedBrick> bricks;

		[Token(Token = "0x60008D1")]
		[Address(RVA = "0x4BB4790", Offset = "0x4BB4790", VA = "0x4BB4790")]
		public void Clear()
		{
		}

		[Token(Token = "0x60008D2")]
		[Address(RVA = "0x4BB47F0", Offset = "0x4BB47F0", VA = "0x4BB47F0")]
		public BrickMeta()
		{
		}
	}

	[Token(Token = "0x2000113")]
	public struct IndirectionEntryUpdateInfo
	{
		[Token(Token = "0x40003C0")]
		[FieldOffset(Offset = "0x0")]
		public int brickCount;

		[Token(Token = "0x40003C1")]
		[FieldOffset(Offset = "0x4")]
		public int firstChunkIndex;

		[Token(Token = "0x40003C2")]
		[FieldOffset(Offset = "0x8")]
		public int numberOfChunks;

		[Token(Token = "0x40003C3")]
		[FieldOffset(Offset = "0xC")]
		public int minSubdivInCell;

		[Token(Token = "0x40003C4")]
		[FieldOffset(Offset = "0x10")]
		public Vector3Int minValidBrickIndexForCellAtMaxRes;

		[Token(Token = "0x40003C5")]
		[FieldOffset(Offset = "0x1C")]
		public Vector3Int maxValidBrickIndexForCellAtMaxResPlusOne;

		[Token(Token = "0x40003C6")]
		[FieldOffset(Offset = "0x28")]
		public Vector3Int entryPositionInBricksAtMaxRes;

		[Token(Token = "0x40003C7")]
		[FieldOffset(Offset = "0x34")]
		public bool hasOnlyBiggerBricks;
	}

	[Token(Token = "0x2000114")]
	public struct CellIndexUpdateInfo
	{
		[Token(Token = "0x40003C8")]
		[FieldOffset(Offset = "0x0")]
		public IndirectionEntryUpdateInfo[] entriesInfo;

		[Token(Token = "0x60008D3")]
		[Address(RVA = "0x4BB48B0", Offset = "0x4BB48B0", VA = "0x4BB48B0")]
		public int GetNumberOfChunks()
		{
			return default(int);
		}
	}

	[Token(Token = "0x40003A0")]
	internal const int kMaxSubdivisionLevels = 7;

	[Token(Token = "0x40003A1")]
	internal const int kIndexChunkSize = 243;

	[Token(Token = "0x40003A2")]
	internal const int kFailChunkIndex = -1;

	[Token(Token = "0x40003A3")]
	internal const int kEmptyIndex = -2;

	[Token(Token = "0x40003A4")]
	[FieldOffset(Offset = "0x10")]
	private BitArray m_IndexChunks;

	[Token(Token = "0x40003A5")]
	[FieldOffset(Offset = "0x18")]
	private BitArray m_IndexChunksCopyForChecks;

	[Token(Token = "0x40003A6")]
	[FieldOffset(Offset = "0x20")]
	private int m_ChunksCount;

	[Token(Token = "0x40003A7")]
	[FieldOffset(Offset = "0x24")]
	private int m_AvailableChunkCount;

	[Token(Token = "0x40003A8")]
	[FieldOffset(Offset = "0x28")]
	private ComputeBuffer m_PhysicalIndexBuffer;

	[Token(Token = "0x40003A9")]
	[FieldOffset(Offset = "0x30")]
	private int[] m_PhysicalIndexBufferData;

	[Token(Token = "0x40003AA")]
	[FieldOffset(Offset = "0x38")]
	private ComputeBuffer m_DebugFragmentationBuffer;

	[Token(Token = "0x40003AB")]
	[FieldOffset(Offset = "0x40")]
	private int[] m_DebugFragmentationData;

	[Token(Token = "0x40003AE")]
	[FieldOffset(Offset = "0x50")]
	private Vector3Int m_CenterRS;

	[Token(Token = "0x40003AF")]
	[FieldOffset(Offset = "0x60")]
	private Dictionary<Vector3Int, List<VoxelMeta>> m_VoxelToBricks;

	[Token(Token = "0x40003B0")]
	[FieldOffset(Offset = "0x68")]
	private Dictionary<ProbeReferenceVolume.Cell, BrickMeta> m_BricksToVoxels;

	[Token(Token = "0x40003B1")]
	[FieldOffset(Offset = "0x70")]
	private ObjectPool<BrickMeta> m_BrickMetaPool;

	[Token(Token = "0x40003B2")]
	[FieldOffset(Offset = "0x78")]
	private ObjectPool<List<VoxelMeta>> m_VoxelMetaListPool;

	[Token(Token = "0x40003B3")]
	[FieldOffset(Offset = "0x80")]
	private ObjectPool<VoxelMeta> m_VoxelMetaPool;

	[Token(Token = "0x40003B4")]
	[FieldOffset(Offset = "0x88")]
	private bool m_NeedUpdateIndexComputeBuffer;

	[Token(Token = "0x40003B5")]
	[FieldOffset(Offset = "0x8C")]
	private int m_UpdateMinIndex;

	[Token(Token = "0x40003B6")]
	[FieldOffset(Offset = "0x90")]
	private int m_UpdateMaxIndex;

	[Token(Token = "0x40003B7")]
	[FieldOffset(Offset = "0x0")]
	private static ProbeReferenceVolume.Cell g_Cell;

	[Token(Token = "0x170000F2")]
	internal int estimatedVMemCost
	{
		[Token(Token = "0x60008B0")]
		[Address(RVA = "0x4BB0570", Offset = "0x4BB0570", VA = "0x4BB0570")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60008B1")]
		[Address(RVA = "0x4BB0580", Offset = "0x4BB0580", VA = "0x4BB0580")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000F3")]
	internal float fragmentationRate
	{
		[Token(Token = "0x60008B3")]
		[Address(RVA = "0x4BB05A0", Offset = "0x4BB05A0", VA = "0x4BB05A0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60008B4")]
		[Address(RVA = "0x4BB05B0", Offset = "0x4BB05B0", VA = "0x4BB05B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60008B2")]
	[Address(RVA = "0x4BB0590", Offset = "0x4BB0590", VA = "0x4BB0590")]
	internal ComputeBuffer GetDebugFragmentationBuffer()
	{
		return null;
	}

	[Token(Token = "0x60008B5")]
	[Address(RVA = "0x4BB05C0", Offset = "0x4BB05C0", VA = "0x4BB05C0")]
	private int GetVoxelSubdivLevel()
	{
		return default(int);
	}

	[Token(Token = "0x60008B6")]
	[Address(RVA = "0x4BB0690", Offset = "0x4BB0690", VA = "0x4BB0690")]
	private int SizeOfPhysicalIndexFromBudget(ProbeVolumeTextureMemoryBudget memoryBudget)
	{
		return default(int);
	}

	[Token(Token = "0x60008B7")]
	[Address(RVA = "0x4BB06C0", Offset = "0x4BB06C0", VA = "0x4BB06C0")]
	internal ProbeBrickIndex(ProbeVolumeTextureMemoryBudget memoryBudget)
	{
	}

	[Token(Token = "0x60008B8")]
	[Address(RVA = "0x4BB1240", Offset = "0x4BB1240", VA = "0x4BB1240")]
	public int GetRemainingChunkCount()
	{
		return default(int);
	}

	[Token(Token = "0x60008B9")]
	[Address(RVA = "0x4BB1250", Offset = "0x4BB1250", VA = "0x4BB1250")]
	internal void UploadIndexData()
	{
	}

	[Token(Token = "0x60008BA")]
	[Address(RVA = "0x4BB12A0", Offset = "0x4BB12A0", VA = "0x4BB12A0")]
	private void UpdateDebugData()
	{
	}

	[Token(Token = "0x60008BB")]
	[Address(RVA = "0x4BB0CD0", Offset = "0x4BB0CD0", VA = "0x4BB0CD0")]
	internal void Clear()
	{
	}

	[Token(Token = "0x60008BC")]
	[Address(RVA = "0x4BB1430", Offset = "0x4BB1430", VA = "0x4BB1430")]
	private void MapBrickToVoxels(Brick brick, HashSet<Vector3Int> voxels)
	{
	}

	[Token(Token = "0x60008BD")]
	[Address(RVA = "0x4BB17D0", Offset = "0x4BB17D0", VA = "0x4BB17D0")]
	private void ClearVoxel(Vector3Int pos, IndirectionEntryUpdateInfo entryInfo)
	{
	}

	[Token(Token = "0x60008BE")]
	[Address(RVA = "0x4BB2010", Offset = "0x4BB2010", VA = "0x4BB2010")]
	internal void GetRuntimeResources(ref ProbeReferenceVolume.RuntimeResources rr)
	{
	}

	[Token(Token = "0x60008BF")]
	[Address(RVA = "0x4BB21B0", Offset = "0x4BB21B0", VA = "0x4BB21B0")]
	internal void Cleanup()
	{
	}

	[Token(Token = "0x60008C0")]
	[Address(RVA = "0x4BB2240", Offset = "0x4BB2240", VA = "0x4BB2240")]
	internal void ComputeFragmentationRate()
	{
	}

	[Token(Token = "0x60008C1")]
	[Address(RVA = "0x4BB22A0", Offset = "0x4BB22A0", VA = "0x4BB22A0")]
	private int MergeIndex(int index, int size)
	{
		return default(int);
	}

	[Token(Token = "0x60008C2")]
	[Address(RVA = "0x4BB22B0", Offset = "0x4BB22B0", VA = "0x4BB22B0")]
	internal int GetNumberOfChunks(int brickCount)
	{
		return default(int);
	}

	[Token(Token = "0x60008C3")]
	[Address(RVA = "0x4BB2320", Offset = "0x4BB2320", VA = "0x4BB2320")]
	internal bool FindSlotsForEntries(ref IndirectionEntryUpdateInfo[] entriesInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x60008C4")]
	[Address(RVA = "0x4BB25A0", Offset = "0x4BB25A0", VA = "0x4BB25A0")]
	internal bool ReserveChunks(IndirectionEntryUpdateInfo[] entriesInfo, bool ignoreErrorLog)
	{
		return default(bool);
	}

	[Token(Token = "0x60008C5")]
	[Address(RVA = "0x4BB26E0", Offset = "0x4BB26E0", VA = "0x4BB26E0")]
	public void AddBricks(ProbeReferenceVolume.Cell cell, NativeArray<Brick> bricks, List<ProbeBrickPool.BrickChunkAlloc> allocations, int allocationSize, int poolWidth, int poolHeight, CellIndexUpdateInfo cellInfo)
	{
	}

	[Token(Token = "0x60008C6")]
	[Address(RVA = "0x4BB3690", Offset = "0x4BB3690", VA = "0x4BB3690")]
	public void RemoveBricks(ProbeReferenceVolume.CellInfo cellInfo)
	{
	}

	[Token(Token = "0x60008C7")]
	[Address(RVA = "0x4BB32A0", Offset = "0x4BB32A0", VA = "0x4BB32A0")]
	private void UpdateIndexForVoxel(Vector3Int voxel, IndirectionEntryUpdateInfo entryInfo)
	{
	}

	[Token(Token = "0x60008C8")]
	[Address(RVA = "0x4BB1AF0", Offset = "0x4BB1AF0", VA = "0x4BB1AF0")]
	private void UpdatePhysicalIndex(Vector3Int brickMin, Vector3Int brickMax, int value, IndirectionEntryUpdateInfo entryInfo)
	{
	}

	[Token(Token = "0x60008C9")]
	[Address(RVA = "0x4BB1920", Offset = "0x4BB1920", VA = "0x4BB1920")]
	private void ClipToIndexSpace(Vector3Int pos, int subdiv, out Vector3Int outMinpos, out Vector3Int outMaxpos, IndirectionEntryUpdateInfo entryInfo)
	{
	}

	[Token(Token = "0x60008CA")]
	[Address(RVA = "0x4BB4460", Offset = "0x4BB4460", VA = "0x4BB4460")]
	private bool BrickOverlapEntry(Vector3Int brickMin, Vector3Int brickMax, Vector3Int entryMin, Vector3Int entryMax)
	{
		return default(bool);
	}

	[Token(Token = "0x60008CB")]
	[Address(RVA = "0x4BB3F70", Offset = "0x4BB3F70", VA = "0x4BB3F70")]
	private void UpdateIndexForVoxel(Vector3Int voxel, List<ReservedBrick> bricks, List<ushort> indices, IndirectionEntryUpdateInfo entryInfo)
	{
	}
}
