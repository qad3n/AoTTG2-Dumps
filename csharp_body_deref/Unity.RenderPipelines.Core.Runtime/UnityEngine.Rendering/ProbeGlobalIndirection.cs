using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200011A")]
internal class ProbeGlobalIndirection
{
	[Token(Token = "0x200011B")]
	internal struct IndexMetaData
	{
		[Token(Token = "0x4000413")]
		[FieldOffset(Offset = "0x0")]
		private static uint[] s_PackedValues;

		[Token(Token = "0x4000414")]
		[FieldOffset(Offset = "0x0")]
		internal Vector3Int minLocalIdx;

		[Token(Token = "0x4000415")]
		[FieldOffset(Offset = "0xC")]
		internal Vector3Int maxLocalIdxPlusOne;

		[Token(Token = "0x4000416")]
		[FieldOffset(Offset = "0x18")]
		internal int firstChunkIndex;

		[Token(Token = "0x4000417")]
		[FieldOffset(Offset = "0x1C")]
		internal int minSubdiv;

		[Token(Token = "0x6000918")]
		[Address(RVA = "0x48939C0", Offset = "0x48939C0", VA = "0x48939C0")]
		internal void Pack(out uint[] vals)
		{
		}
	}

	[Token(Token = "0x4000409")]
	private const int kUintPerEntry = 3;

	[Token(Token = "0x400040B")]
	internal const int kEntryMaxSubdivLevel = 3;

	[Token(Token = "0x400040C")]
	[FieldOffset(Offset = "0x18")]
	private ComputeBuffer m_IndexOfIndicesBuffer;

	[Token(Token = "0x400040D")]
	[FieldOffset(Offset = "0x20")]
	private uint[] m_IndexOfIndicesData;

	[Token(Token = "0x400040E")]
	[FieldOffset(Offset = "0x28")]
	private int m_CellSizeInMinBricks;

	[Token(Token = "0x400040F")]
	[FieldOffset(Offset = "0x2C")]
	private Vector3Int m_EntriesCount;

	[Token(Token = "0x4000410")]
	[FieldOffset(Offset = "0x38")]
	private Vector3Int m_EntryMin;

	[Token(Token = "0x4000411")]
	[FieldOffset(Offset = "0x44")]
	private Vector3Int m_EntryMax;

	[Token(Token = "0x4000412")]
	[FieldOffset(Offset = "0x50")]
	private bool m_NeedUpdateComputeBuffer;

	[Token(Token = "0x170000F8")]
	internal int estimatedVMemCost
	{
		[Token(Token = "0x6000908")]
		[Address(RVA = "0x4893230", Offset = "0x4893230", VA = "0x4893230")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000909")]
		[Address(RVA = "0x4893240", Offset = "0x4893240", VA = "0x4893240")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000F9")]
	private int entrySizeInBricks
	{
		[Token(Token = "0x600090D")]
		[Address(RVA = "0x4893290", Offset = "0x4893290", VA = "0x4893290")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000FA")]
	internal int entriesPerCellDimension
	{
		[Token(Token = "0x600090E")]
		[Address(RVA = "0x48932A0", Offset = "0x48932A0", VA = "0x48932A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600090A")]
	[Address(RVA = "0x4893250", Offset = "0x4893250", VA = "0x4893250")]
	internal void GetMinMaxEntry(out Vector3Int minEntry, out Vector3Int maxEntry)
	{
	}

	[Token(Token = "0x600090B")]
	[Address(RVA = "0x4893270", Offset = "0x4893270", VA = "0x4893270")]
	internal Vector3Int GetGlobalIndirectionDimension()
	{
		return default(Vector3Int);
	}

	[Token(Token = "0x600090C")]
	[Address(RVA = "0x4893280", Offset = "0x4893280", VA = "0x4893280")]
	internal Vector3Int GetGlobalIndirectionMinEntry()
	{
		return default(Vector3Int);
	}

	[Token(Token = "0x600090F")]
	[Address(RVA = "0x48932C0", Offset = "0x48932C0", VA = "0x48932C0")]
	private int GetFlatIndex(Vector3Int normalizedPos)
	{
		return default(int);
	}

	[Token(Token = "0x6000910")]
	[Address(RVA = "0x48932E0", Offset = "0x48932E0", VA = "0x48932E0")]
	internal ProbeGlobalIndirection(Vector3Int cellMin, Vector3Int cellMax, int cellSizeInMinBricks)
	{
	}

	[Token(Token = "0x6000911")]
	[Address(RVA = "0x48934D0", Offset = "0x48934D0", VA = "0x48934D0")]
	internal int GetFlatIdxForEntry(Vector3Int entryPosition)
	{
		return default(int);
	}

	[Token(Token = "0x6000912")]
	[Address(RVA = "0x4893500", Offset = "0x4893500", VA = "0x4893500")]
	internal int[] GetFlatIndicesForCell(Vector3Int cellPosition)
	{
		return null;
	}

	[Token(Token = "0x6000913")]
	[Address(RVA = "0x48936C0", Offset = "0x48936C0", VA = "0x48936C0")]
	internal void UpdateCell(int[] cellEntriesIndices, ProbeBrickIndex.CellIndexUpdateInfo cellUpdateInfo)
	{
	}

	[Token(Token = "0x6000914")]
	[Address(RVA = "0x4893AF0", Offset = "0x4893AF0", VA = "0x4893AF0")]
	internal void MarkEntriesAsUnloaded(int[] entriesFlatIndices)
	{
	}

	[Token(Token = "0x6000915")]
	[Address(RVA = "0x4893B80", Offset = "0x4893B80", VA = "0x4893B80")]
	internal void PushComputeData()
	{
	}

	[Token(Token = "0x6000916")]
	[Address(RVA = "0x4893BB0", Offset = "0x4893BB0", VA = "0x4893BB0")]
	internal void GetRuntimeResources(ref ProbeReferenceVolume.RuntimeResources rr)
	{
	}

	[Token(Token = "0x6000917")]
	[Address(RVA = "0x4893C00", Offset = "0x4893C00", VA = "0x4893C00")]
	internal void Cleanup()
	{
	}
}
