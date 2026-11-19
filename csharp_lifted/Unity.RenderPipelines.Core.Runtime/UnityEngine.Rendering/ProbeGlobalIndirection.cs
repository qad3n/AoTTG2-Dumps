// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeGlobalIndirection
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x65033F0", Offset = "0x65023F0", VA = "0x65033F0")]
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
		[Address(RVA = "0x6502A80", Offset = "0x6501A80", VA = "0x6502A80")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60008BF")]
		[Address(RVA = "0x6502A90", Offset = "0x6501A90", VA = "0x6502A90")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000F7")]
	private int entrySizeInBricks
	{
		[Token(Token = "0x60008C3")]
		[Address(RVA = "0x6502AE0", Offset = "0x6501AE0", VA = "0x6502AE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000F8")]
	internal int entriesPerCellDimension
	{
		[Token(Token = "0x60008C4")]
		[Address(RVA = "0x6502AF0", Offset = "0x6501AF0", VA = "0x6502AF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60008C0")]
	[Address(RVA = "0x6502AA0", Offset = "0x6501AA0", VA = "0x6502AA0")]
	internal void GetMinMaxEntry(out Vector3Int minEntry, out Vector3Int maxEntry)
	{
	}

	[Token(Token = "0x60008C1")]
	[Address(RVA = "0x6502AC0", Offset = "0x6501AC0", VA = "0x6502AC0")]
	internal Vector3Int GetGlobalIndirectionDimension()
	{
		return default(Vector3Int);
	}

	[Token(Token = "0x60008C2")]
	[Address(RVA = "0x6502AD0", Offset = "0x6501AD0", VA = "0x6502AD0")]
	internal Vector3Int GetGlobalIndirectionMinEntry()
	{
		return default(Vector3Int);
	}

	[Token(Token = "0x60008C5")]
	[Address(RVA = "0x6502B10", Offset = "0x6501B10", VA = "0x6502B10")]
	private int GetFlatIndex(Vector3Int normalizedPos)
	{
		return default(int);
	}

	[Token(Token = "0x60008C6")]
	[Address(RVA = "0x6502B30", Offset = "0x6501B30", VA = "0x6502B30")]
	internal ProbeGlobalIndirection(Vector3Int cellMin, Vector3Int cellMax, int cellSizeInMinBricks)
	{
	}

	[Token(Token = "0x60008C7")]
	[Address(RVA = "0x6502D30", Offset = "0x6501D30", VA = "0x6502D30")]
	internal int GetFlatIdxForEntry(Vector3Int entryPosition)
	{
		return default(int);
	}

	[Token(Token = "0x60008C8")]
	[Address(RVA = "0x6502D60", Offset = "0x6501D60", VA = "0x6502D60")]
	internal int[] GetFlatIndicesForCell(Vector3Int cellPosition)
	{
		return null;
	}

	[Token(Token = "0x60008C9")]
	[Address(RVA = "0x6503100", Offset = "0x6502100", VA = "0x6503100")]
	internal void UpdateCell(ProbeReferenceVolume.CellIndexInfo cellInfo)
	{
	}

	[Token(Token = "0x60008CA")]
	[Address(RVA = "0x6503540", Offset = "0x6502540", VA = "0x6503540")]
	internal void MarkEntriesAsUnloaded(int[] entriesFlatIndices)
	{
	}

	[Token(Token = "0x60008CB")]
	[Address(RVA = "0x65035D0", Offset = "0x65025D0", VA = "0x65035D0")]
	internal void PushComputeData()
	{
	}

	[Token(Token = "0x60008CC")]
	[Address(RVA = "0x6503600", Offset = "0x6502600", VA = "0x6503600")]
	internal void GetRuntimeResources(ref ProbeReferenceVolume.RuntimeResources rr)
	{
	}

	[Token(Token = "0x60008CD")]
	[Address(RVA = "0x6503650", Offset = "0x6502650", VA = "0x6503650")]
	internal void Cleanup()
	{
	}
}
