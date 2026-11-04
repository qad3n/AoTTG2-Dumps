// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeGlobalIndirection
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000FC")]
internal class ProbeGlobalIndirection
{
	[Token(Token = "0x20000FD")]
	internal struct IndexMetaData
	{
		[Token(Token = "0x40003B2")]
		[FieldOffset(Offset = "0x0")]
		private static uint[] s_PackedValues;

		[Token(Token = "0x40003B3")]
		[FieldOffset(Offset = "0x0")]
		internal Vector3Int minLocalIdx;

		[Token(Token = "0x40003B4")]
		[FieldOffset(Offset = "0xC")]
		internal Vector3Int maxLocalIdxPlusOne;

		[Token(Token = "0x40003B5")]
		[FieldOffset(Offset = "0x18")]
		internal int firstChunkIndex;

		[Token(Token = "0x40003B6")]
		[FieldOffset(Offset = "0x1C")]
		internal int minSubdiv;

		[Token(Token = "0x60008CE")]
		[Address(RVA = "0x2B0BF20", Offset = "0x2B0A520", VA = "0x182B0BF20")]
		internal void Pack(out uint[] vals)
		{
		}
	}

	[Token(Token = "0x40003A8")]
	private const int kUintPerEntry = 3;

	[Token(Token = "0x40003AA")]
	internal const int kEntryMaxSubdivLevel = 3;

	[Token(Token = "0x40003AB")]
	[FieldOffset(Offset = "0x18")]
	private ComputeBuffer m_IndexOfIndicesBuffer;

	[Token(Token = "0x40003AC")]
	[FieldOffset(Offset = "0x20")]
	private uint[] m_IndexOfIndicesData;

	[Token(Token = "0x40003AD")]
	[FieldOffset(Offset = "0x28")]
	private int m_CellSizeInMinBricks;

	[Token(Token = "0x40003AE")]
	[FieldOffset(Offset = "0x2C")]
	private Vector3Int m_EntriesCount;

	[Token(Token = "0x40003AF")]
	[FieldOffset(Offset = "0x38")]
	private Vector3Int m_EntryMin;

	[Token(Token = "0x40003B0")]
	[FieldOffset(Offset = "0x44")]
	private Vector3Int m_EntryMax;

	[Token(Token = "0x40003B1")]
	[FieldOffset(Offset = "0x50")]
	private bool m_NeedUpdateComputeBuffer;

	[Token(Token = "0x170000F6")]
	internal int estimatedVMemCost
	{
		[Token(Token = "0x60008BE")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60008BF")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000F7")]
	private int entrySizeInBricks
	{
		[Token(Token = "0x60008C3")]
		[Address(RVA = "0x2B13950", Offset = "0x2B11F50", VA = "0x182B13950")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000F8")]
	internal int entriesPerCellDimension
	{
		[Token(Token = "0x60008C4")]
		[Address(RVA = "0x2B13910", Offset = "0x2B11F10", VA = "0x182B13910")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60008C0")]
	[Address(RVA = "0x2B12FF0", Offset = "0x2B115F0", VA = "0x182B12FF0")]
	internal void GetMinMaxEntry(out Vector3Int minEntry, out Vector3Int maxEntry)
	{
	}

	[Token(Token = "0x60008C1")]
	[Address(RVA = "0x585000", Offset = "0x583600", VA = "0x180585000")]
	internal Vector3Int GetGlobalIndirectionDimension()
	{
		return default(Vector3Int);
	}

	[Token(Token = "0x60008C2")]
	[Address(RVA = "0x1D65970", Offset = "0x1D63F70", VA = "0x181D65970")]
	internal Vector3Int GetGlobalIndirectionMinEntry()
	{
		return default(Vector3Int);
	}

	[Token(Token = "0x60008C5")]
	[Address(RVA = "0x2B12DE0", Offset = "0x2B113E0", VA = "0x182B12DE0")]
	private int GetFlatIndex(Vector3Int normalizedPos)
	{
		return default(int);
	}

	[Token(Token = "0x60008C6")]
	[Address(RVA = "0x2B13670", Offset = "0x2B11C70", VA = "0x182B13670")]
	internal ProbeGlobalIndirection(Vector3Int cellMin, Vector3Int cellMax, int cellSizeInMinBricks)
	{
	}

	[Token(Token = "0x60008C7")]
	[Address(RVA = "0x2B12DB0", Offset = "0x2B113B0", VA = "0x182B12DB0")]
	internal int GetFlatIdxForEntry(Vector3Int entryPosition)
	{
		return default(int);
	}

	[Token(Token = "0x60008C8")]
	[Address(RVA = "0x2B12E00", Offset = "0x2B11400", VA = "0x182B12E00")]
	internal int[] GetFlatIndicesForCell(Vector3Int cellPosition)
	{
		return null;
	}

	[Token(Token = "0x60008C9")]
	[Address(RVA = "0x2B13190", Offset = "0x2B11790", VA = "0x182B13190")]
	internal void UpdateCell(ProbeReferenceVolume.CellIndexInfo cellInfo)
	{
	}

	[Token(Token = "0x60008CA")]
	[Address(RVA = "0x2B13070", Offset = "0x2B11670", VA = "0x182B13070")]
	internal void MarkEntriesAsUnloaded(int[] entriesFlatIndices)
	{
	}

	[Token(Token = "0x60008CB")]
	[Address(RVA = "0x2B13160", Offset = "0x2B11760", VA = "0x182B13160")]
	internal void PushComputeData()
	{
	}

	[Token(Token = "0x60008CC")]
	[Address(RVA = "0x2B13020", Offset = "0x2B11620", VA = "0x182B13020")]
	internal void GetRuntimeResources(ref ProbeReferenceVolume.RuntimeResources rr)
	{
	}

	[Token(Token = "0x60008CD")]
	[Address(RVA = "0x2B12D40", Offset = "0x2B11340", VA = "0x182B12D40")]
	internal void Cleanup()
	{
	}
}
