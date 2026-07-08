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
		[Address(RVA = "0x488F3C0", Offset = "0x488F3C0", VA = "0x488F3C0")]
		internal Brick(Vector3Int position, int subdivisionLevel)
		{
		}

		[Token(Token = "0x60008CD")]
		[Address(RVA = "0x488F3D0", Offset = "0x488F3D0", VA = "0x488F3D0", Slot = "4")]
		public bool Equals(Brick other)
		{
			return default(bool);
		}

		[Token(Token = "0x60008CE")]
		[Address(RVA = "0x488F400", Offset = "0x488F400", VA = "0x488F400")]
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
		[Address(RVA = "0x488F5D0", Offset = "0x488F5D0", VA = "0x488F5D0")]
		public void Clear()
		{
		}

		[Token(Token = "0x60008D0")]
		[Address(RVA = "0x488F620", Offset = "0x488F620", VA = "0x488F620")]
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
		[Address(RVA = "0x488F6A0", Offset = "0x488F6A0", VA = "0x488F6A0")]
		public void Clear()
		{
		}

		[Token(Token = "0x60008D2")]
		[Address(RVA = "0x488F700", Offset = "0x488F700", VA = "0x488F700")]
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
		[Address(RVA = "0x488F7C0", Offset = "0x488F7C0", VA = "0x488F7C0")]
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
		[Address(RVA = "0x488B480", Offset = "0x488B480", VA = "0x488B480")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60008B1")]
		[Address(RVA = "0x488B490", Offset = "0x488B490", VA = "0x488B490")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000F3")]
	internal float fragmentationRate
	{
		[Token(Token = "0x60008B3")]
		[Address(RVA = "0x488B4B0", Offset = "0x488B4B0", VA = "0x488B4B0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60008B4")]
		[Address(RVA = "0x488B4C0", Offset = "0x488B4C0", VA = "0x488B4C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60008B2")]
	[Address(RVA = "0x488B4A0", Offset = "0x488B4A0", VA = "0x488B4A0")]
	internal ComputeBuffer GetDebugFragmentationBuffer()
	{
		return null;
	}

	[Token(Token = "0x60008B5")]
	[Address(RVA = "0x488B4D0", Offset = "0x488B4D0", VA = "0x488B4D0")]
	private int GetVoxelSubdivLevel()
	{
		return default(int);
	}

	[Token(Token = "0x60008B6")]
	[Address(RVA = "0x488B5A0", Offset = "0x488B5A0", VA = "0x488B5A0")]
	private int SizeOfPhysicalIndexFromBudget(ProbeVolumeTextureMemoryBudget memoryBudget)
	{
		return default(int);
	}

	[Token(Token = "0x60008B7")]
	[Address(RVA = "0x488B5D0", Offset = "0x488B5D0", VA = "0x488B5D0")]
	internal ProbeBrickIndex(ProbeVolumeTextureMemoryBudget memoryBudget)
	{
	}

	[Token(Token = "0x60008B8")]
	[Address(RVA = "0x488C150", Offset = "0x488C150", VA = "0x488C150")]
	public int GetRemainingChunkCount()
	{
		return default(int);
	}

	[Token(Token = "0x60008B9")]
	[Address(RVA = "0x488C160", Offset = "0x488C160", VA = "0x488C160")]
	internal void UploadIndexData()
	{
	}

	[Token(Token = "0x60008BA")]
	[Address(RVA = "0x488C1B0", Offset = "0x488C1B0", VA = "0x488C1B0")]
	private void UpdateDebugData()
	{
	}

	[Token(Token = "0x60008BB")]
	[Address(RVA = "0x488BBE0", Offset = "0x488BBE0", VA = "0x488BBE0")]
	internal void Clear()
	{
	}

	[Token(Token = "0x60008BC")]
	[Address(RVA = "0x488C340", Offset = "0x488C340", VA = "0x488C340")]
	private void MapBrickToVoxels(Brick brick, HashSet<Vector3Int> voxels)
	{
	}

	[Token(Token = "0x60008BD")]
	[Address(RVA = "0x488C6E0", Offset = "0x488C6E0", VA = "0x488C6E0")]
	private void ClearVoxel(Vector3Int pos, IndirectionEntryUpdateInfo entryInfo)
	{
	}

	[Token(Token = "0x60008BE")]
	[Address(RVA = "0x488CF20", Offset = "0x488CF20", VA = "0x488CF20")]
	internal void GetRuntimeResources(ref ProbeReferenceVolume.RuntimeResources rr)
	{
	}

	[Token(Token = "0x60008BF")]
	[Address(RVA = "0x488D0C0", Offset = "0x488D0C0", VA = "0x488D0C0")]
	internal void Cleanup()
	{
	}

	[Token(Token = "0x60008C0")]
	[Address(RVA = "0x488D150", Offset = "0x488D150", VA = "0x488D150")]
	internal void ComputeFragmentationRate()
	{
	}

	[Token(Token = "0x60008C1")]
	[Address(RVA = "0x488D1B0", Offset = "0x488D1B0", VA = "0x488D1B0")]
	private int MergeIndex(int index, int size)
	{
		return default(int);
	}

	[Token(Token = "0x60008C2")]
	[Address(RVA = "0x488D1C0", Offset = "0x488D1C0", VA = "0x488D1C0")]
	internal int GetNumberOfChunks(int brickCount)
	{
		return default(int);
	}

	[Token(Token = "0x60008C3")]
	[Address(RVA = "0x488D230", Offset = "0x488D230", VA = "0x488D230")]
	internal bool FindSlotsForEntries(ref IndirectionEntryUpdateInfo[] entriesInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x60008C4")]
	[Address(RVA = "0x488D4B0", Offset = "0x488D4B0", VA = "0x488D4B0")]
	internal bool ReserveChunks(IndirectionEntryUpdateInfo[] entriesInfo, bool ignoreErrorLog)
	{
		return default(bool);
	}

	[Token(Token = "0x60008C5")]
	[Address(RVA = "0x488D5F0", Offset = "0x488D5F0", VA = "0x488D5F0")]
	public void AddBricks(ProbeReferenceVolume.Cell cell, NativeArray<Brick> bricks, List<ProbeBrickPool.BrickChunkAlloc> allocations, int allocationSize, int poolWidth, int poolHeight, CellIndexUpdateInfo cellInfo)
	{
	}

	[Token(Token = "0x60008C6")]
	[Address(RVA = "0x488E5A0", Offset = "0x488E5A0", VA = "0x488E5A0")]
	public void RemoveBricks(ProbeReferenceVolume.CellInfo cellInfo)
	{
	}

	[Token(Token = "0x60008C7")]
	[Address(RVA = "0x488E1B0", Offset = "0x488E1B0", VA = "0x488E1B0")]
	private void UpdateIndexForVoxel(Vector3Int voxel, IndirectionEntryUpdateInfo entryInfo)
	{
	}

	[Token(Token = "0x60008C8")]
	[Address(RVA = "0x488CA00", Offset = "0x488CA00", VA = "0x488CA00")]
	private void UpdatePhysicalIndex(Vector3Int brickMin, Vector3Int brickMax, int value, IndirectionEntryUpdateInfo entryInfo)
	{
	}

	[Token(Token = "0x60008C9")]
	[Address(RVA = "0x488C830", Offset = "0x488C830", VA = "0x488C830")]
	private void ClipToIndexSpace(Vector3Int pos, int subdiv, out Vector3Int outMinpos, out Vector3Int outMaxpos, IndirectionEntryUpdateInfo entryInfo)
	{
	}

	[Token(Token = "0x60008CA")]
	[Address(RVA = "0x488F370", Offset = "0x488F370", VA = "0x488F370")]
	private bool BrickOverlapEntry(Vector3Int brickMin, Vector3Int brickMax, Vector3Int entryMin, Vector3Int entryMax)
	{
		return default(bool);
	}

	[Token(Token = "0x60008CB")]
	[Address(RVA = "0x488EE80", Offset = "0x488EE80", VA = "0x488EE80")]
	private void UpdateIndexForVoxel(Vector3Int voxel, List<ReservedBrick> bricks, List<ushort> indices, IndirectionEntryUpdateInfo entryInfo)
	{
	}
}
