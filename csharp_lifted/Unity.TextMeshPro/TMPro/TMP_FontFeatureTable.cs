// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_FontFeatureTable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.TextCore.LowLevel;

namespace TMPro;

[Serializable]
[Token(Token = "0x2000042")]
public class TMP_FontFeatureTable
{
	[Token(Token = "0x4000165")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	internal List<MultipleSubstitutionRecord> m_MultipleSubstitutionRecords;

	[Token(Token = "0x4000166")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	internal List<LigatureSubstitutionRecord> m_LigatureSubstitutionRecords;

	[Token(Token = "0x4000167")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	internal List<GlyphPairAdjustmentRecord> m_GlyphPairAdjustmentRecords;

	[Token(Token = "0x4000168")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	internal List<MarkToBaseAdjustmentRecord> m_MarkToBaseAdjustmentRecords;

	[Token(Token = "0x4000169")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	internal List<MarkToMarkAdjustmentRecord> m_MarkToMarkAdjustmentRecords;

	[Token(Token = "0x400016A")]
	[FieldOffset(Offset = "0x38")]
	internal Dictionary<uint, List<LigatureSubstitutionRecord>> m_LigatureSubstitutionRecordLookup;

	[Token(Token = "0x400016B")]
	[FieldOffset(Offset = "0x40")]
	internal Dictionary<uint, GlyphPairAdjustmentRecord> m_GlyphPairAdjustmentRecordLookup;

	[Token(Token = "0x400016C")]
	[FieldOffset(Offset = "0x48")]
	internal Dictionary<uint, MarkToBaseAdjustmentRecord> m_MarkToBaseAdjustmentRecordLookup;

	[Token(Token = "0x400016D")]
	[FieldOffset(Offset = "0x50")]
	internal Dictionary<uint, MarkToMarkAdjustmentRecord> m_MarkToMarkAdjustmentRecordLookup;

	[Token(Token = "0x17000062")]
	public List<MultipleSubstitutionRecord> multipleSubstitutionRecords
	{
		[Token(Token = "0x60001D4")]
		[Address(RVA = "0x66F5CB0", Offset = "0x66F4CB0", VA = "0x66F5CB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001D5")]
		[Address(RVA = "0x66F5CC0", Offset = "0x66F4CC0", VA = "0x66F5CC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000063")]
	public List<LigatureSubstitutionRecord> ligatureRecords
	{
		[Token(Token = "0x60001D6")]
		[Address(RVA = "0x66F5CD0", Offset = "0x66F4CD0", VA = "0x66F5CD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001D7")]
		[Address(RVA = "0x66F5CE0", Offset = "0x66F4CE0", VA = "0x66F5CE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000064")]
	public List<GlyphPairAdjustmentRecord> glyphPairAdjustmentRecords
	{
		[Token(Token = "0x60001D8")]
		[Address(RVA = "0x66F5CF0", Offset = "0x66F4CF0", VA = "0x66F5CF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001D9")]
		[Address(RVA = "0x66F5D00", Offset = "0x66F4D00", VA = "0x66F5D00")]
		set
		{
		}
	}

	[Token(Token = "0x17000065")]
	public List<MarkToBaseAdjustmentRecord> MarkToBaseAdjustmentRecords
	{
		[Token(Token = "0x60001DA")]
		[Address(RVA = "0x66F5D10", Offset = "0x66F4D10", VA = "0x66F5D10")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001DB")]
		[Address(RVA = "0x66F5D20", Offset = "0x66F4D20", VA = "0x66F5D20")]
		set
		{
		}
	}

	[Token(Token = "0x17000066")]
	public List<MarkToMarkAdjustmentRecord> MarkToMarkAdjustmentRecords
	{
		[Token(Token = "0x60001DC")]
		[Address(RVA = "0x66F5D30", Offset = "0x66F4D30", VA = "0x66F5D30")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001DD")]
		[Address(RVA = "0x66F5D40", Offset = "0x66F4D40", VA = "0x66F5D40")]
		set
		{
		}
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x66F5D50", Offset = "0x66F4D50", VA = "0x66F5D50")]
	public TMP_FontFeatureTable()
	{
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x66F5FE0", Offset = "0x66F4FE0", VA = "0x66F5FE0")]
	public void SortGlyphPairAdjustmentRecords()
	{
	}

	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x66F6210", Offset = "0x66F5210", VA = "0x66F6210")]
	public void SortMarkToBaseAdjustmentRecords()
	{
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x66F6440", Offset = "0x66F5440", VA = "0x66F6440")]
	public void SortMarkToMarkAdjustmentRecords()
	{
	}
}
