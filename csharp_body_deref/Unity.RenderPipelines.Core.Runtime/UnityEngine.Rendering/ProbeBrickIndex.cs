// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeBrickIndex
// Update status: CHANGED in this game update
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

[Token(Token = "0x20000F4")]
internal class ProbeBrickIndex
{
	[Serializable]
	[Token(Token = "0x20000F5")]
	[DebuggerDisplay("Brick [{position}, {subdivisionLevel}]")]
	public struct Brick : IEquatable<Brick>
	{
		[Token(Token = "0x400034C")]
		[FieldOffset(Offset = "0x0")]
		public Vector3Int position;

		[Token(Token = "0x400034D")]
		[FieldOffset(Offset = "0xC")]
		public int subdivisionLevel;

		[Token(Token = "0x6000884")]
		[Address(RVA = "0x180F450", Offset = "0x180DA50", VA = "0x18180F450")]
		internal Brick(Vector3Int position, int subdivisionLevel)
		{
		}

		[Token(Token = "0x6000885")]
		[Address(RVA = "0x1B27550", Offset = "0x1B25B50", VA = "0x181B27550", Slot = "4")]
		public bool Equals(Brick other)
		{
			return default(bool);
		}

		[Token(Token = "0x6000886")]
		[Address(RVA = "0x2B08AA0", Offset = "0x2B070A0", VA = "0x182B08AA0")]
		public bool IntersectArea(Bounds boundInBricksToCheck)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x20000F6")]
	public struct IndirectionEntryUpdateInfo
	{
		[Token(Token = "0x400034E")]
		[FieldOffset(Offset = "0x0")]
		public int firstChunkIndex;

		[Token(Token = "0x400034F")]
		[FieldOffset(Offset = "0x4")]
		public int numberOfChunks;

		[Token(Token = "0x4000350")]
		[FieldOffset(Offset = "0x8")]
		public int minSubdivInCell;

		[Token(Token = "0x4000351")]
		[FieldOffset(Offset = "0xC")]
		public Vector3Int minValidBrickIndexForCellAtMaxRes;

		[Token(Token = "0x4000352")]
		[FieldOffset(Offset = "0x18")]
		public Vector3Int maxValidBrickIndexForCellAtMaxResPlusOne;

		[Token(Token = "0x4000353")]
		[FieldOffset(Offset = "0x24")]
		public Vector3Int entryPositionInBricksAtMaxRes;

		[Token(Token = "0x4000354")]
		[FieldOffset(Offset = "0x30")]
		public bool hasOnlyBiggerBricks;
	}

	[Token(Token = "0x20000F7")]
	public struct CellIndexUpdateInfo
	{
		[Token(Token = "0x4000355")]
		[FieldOffset(Offset = "0x0")]
		public IndirectionEntryUpdateInfo[] entriesInfo;

		[Token(Token = "0x6000887")]
		[Address(RVA = "0x2B09850", Offset = "0x2B07E50", VA = "0x182B09850")]
		public int GetNumberOfChunks()
		{
			return default(int);
		}
	}

	[Token(Token = "0x400033A")]
	internal const int kMaxSubdivisionLevels = 7;

	[Token(Token = "0x400033B")]
	internal const int kIndexChunkSize = 243;

	[Token(Token = "0x400033C")]
	internal const int kFailChunkIndex = -1;

	[Token(Token = "0x400033D")]
	internal const int kEmptyIndex = -2;

	[Token(Token = "0x400033E")]
	[FieldOffset(Offset = "0x10")]
	private BitArray m_IndexChunks;

	[Token(Token = "0x400033F")]
	[FieldOffset(Offset = "0x18")]
	private BitArray m_IndexChunksCopyForChecks;

	[Token(Token = "0x4000340")]
	[FieldOffset(Offset = "0x20")]
	private int m_ChunksCount;

	[Token(Token = "0x4000341")]
	[FieldOffset(Offset = "0x24")]
	private int m_AvailableChunkCount;

	[Token(Token = "0x4000342")]
	[FieldOffset(Offset = "0x28")]
	private ComputeBuffer m_PhysicalIndexBuffer;

	[Token(Token = "0x4000343")]
	[FieldOffset(Offset = "0x30")]
	private NativeArray<int> m_PhysicalIndexBufferData;

	[Token(Token = "0x4000344")]
	[FieldOffset(Offset = "0x40")]
	private ComputeBuffer m_DebugFragmentationBuffer;

	[Token(Token = "0x4000345")]
	[FieldOffset(Offset = "0x48")]
	private int[] m_DebugFragmentationData;

	[Token(Token = "0x4000346")]
	[FieldOffset(Offset = "0x50")]
	private bool m_NeedUpdateIndexComputeBuffer;

	[Token(Token = "0x4000347")]
	[FieldOffset(Offset = "0x54")]
	private int m_UpdateMinIndex;

	[Token(Token = "0x4000348")]
	[FieldOffset(Offset = "0x58")]
	private int m_UpdateMaxIndex;

	[Token(Token = "0x400034B")]
	[FieldOffset(Offset = "0x64")]
	private Vector3Int m_CenterRS;

	[Token(Token = "0x170000F1")]
	internal int estimatedVMemCost
	{
		[Token(Token = "0x600086D")]
		[Address(RVA = "0x1A4F710", Offset = "0x1A4DD10", VA = "0x181A4F710")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600086E")]
		[Address(RVA = "0x1CFDDD0", Offset = "0x1CFC3D0", VA = "0x181CFDDD0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000F2")]
	internal float fragmentationRate
	{
		[Token(Token = "0x6000870")]
		[Address(RVA = "0x58A700", Offset = "0x588D00", VA = "0x18058A700")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000871")]
		[Address(RVA = "0x58A9F0", Offset = "0x588FF0", VA = "0x18058A9F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600086F")]
	[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
	internal ComputeBuffer GetDebugFragmentationBuffer()
	{
		return null;
	}

	[Token(Token = "0x6000872")]
	[Address(RVA = "0x2B0F410", Offset = "0x2B0DA10", VA = "0x182B0F410")]
	private int SizeOfPhysicalIndexFromBudget(ProbeVolumeTextureMemoryBudget memoryBudget)
	{
		return default(int);
	}

	[Token(Token = "0x6000873")]
	[Address(RVA = "0x2B0F650", Offset = "0x2B0DC50", VA = "0x182B0F650")]
	internal ProbeBrickIndex(ProbeVolumeTextureMemoryBudget memoryBudget)
	{
	}

	[Token(Token = "0x6000874")]
	[Address(RVA = "0xBDB280", Offset = "0xBD9880", VA = "0x180BDB280")]
	public int GetRemainingChunkCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000875")]
	[Address(RVA = "0x2B0F5D0", Offset = "0x2B0DBD0", VA = "0x182B0F5D0")]
	internal void UploadIndexData()
	{
	}

	[Token(Token = "0x6000876")]
	[Address(RVA = "0x2B0F440", Offset = "0x2B0DA40", VA = "0x182B0F440")]
	private void UpdateDebugData()
	{
	}

	[Token(Token = "0x6000877")]
	[Address(RVA = "0x2B0E7F0", Offset = "0x2B0CDF0", VA = "0x182B0E7F0")]
	internal void Clear()
	{
	}

	[Token(Token = "0x6000878")]
	[Address(RVA = "0x2B0ED10", Offset = "0x2B0D310", VA = "0x182B0ED10")]
	internal void GetRuntimeResources(ref ProbeReferenceVolume.RuntimeResources rr)
	{
	}

	[Token(Token = "0x6000879")]
	[Address(RVA = "0x2B0E750", Offset = "0x2B0CD50", VA = "0x182B0E750")]
	internal void Cleanup()
	{
	}

	[Token(Token = "0x600087A")]
	[Address(RVA = "0x2B0E880", Offset = "0x2B0CE80", VA = "0x182B0E880")]
	internal void ComputeFragmentationRate()
	{
	}

	[Token(Token = "0x600087B")]
	[Address(RVA = "0x2B0F200", Offset = "0x2B0D800", VA = "0x182B0F200")]
	private int MergeIndex(int index, int size)
	{
		return default(int);
	}

	[Token(Token = "0x600087C")]
	[Address(RVA = "0x2B0ECB0", Offset = "0x2B0D2B0", VA = "0x182B0ECB0")]
	internal int GetNumberOfChunks(int brickCount)
	{
		return default(int);
	}

	[Token(Token = "0x600087D")]
	[Address(RVA = "0x2B0E900", Offset = "0x2B0CF00", VA = "0x182B0E900")]
	internal bool FindSlotsForEntries(ref IndirectionEntryUpdateInfo[] entriesInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x600087E")]
	[Address(RVA = "0x2B0F2E0", Offset = "0x2B0D8E0", VA = "0x182B0F2E0")]
	internal bool ReserveChunks(IndirectionEntryUpdateInfo[] entriesInfo, bool ignoreErrorLog)
	{
		return default(bool);
	}

	[Token(Token = "0x600087F")]
	[Address(RVA = "0x2B0E710", Offset = "0x2B0CD10", VA = "0x182B0E710")]
	internal static bool BrickOverlapEntry(Vector3Int brickMin, Vector3Int brickMax, Vector3Int entryMin, Vector3Int entryMax)
	{
		return default(bool);
	}

	[Token(Token = "0x6000880")]
	[Address(RVA = "0x2B0EE80", Offset = "0x2B0D480", VA = "0x182B0EE80")]
	private static int LocationToIndex(int x, int y, int z, Vector3Int sizeOfValid)
	{
		return default(int);
	}

	[Token(Token = "0x6000881")]
	[Address(RVA = "0x2B0EE90", Offset = "0x2B0D490", VA = "0x182B0EE90")]
	private void MarkBrickInPhysicalBuffer(in IndirectionEntryUpdateInfo entry, Vector3Int brickMin, Vector3Int brickMax, int brickSubdivLevel, int entrySubdivLevel, int idx)
	{
	}

	[Token(Token = "0x6000882")]
	[Address(RVA = "0x2B0E260", Offset = "0x2B0C860", VA = "0x182B0E260")]
	public void AddBricks(ProbeReferenceVolume.CellIndexInfo cellInfo, NativeArray<Brick> bricks, List<ProbeBrickPool.BrickChunkAlloc> allocations, int allocationSize, int poolWidth, int poolHeight)
	{
	}

	[Token(Token = "0x6000883")]
	[Address(RVA = "0x2B0F220", Offset = "0x2B0D820", VA = "0x182B0F220")]
	public void RemoveBricks(ProbeReferenceVolume.CellIndexInfo cellInfo)
	{
	}
}
