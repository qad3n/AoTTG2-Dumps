// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_FontFeatureTable
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001D5")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		set
		{
		}
	}

	[Token(Token = "0x17000063")]
	public List<LigatureSubstitutionRecord> ligatureRecords
	{
		[Token(Token = "0x60001D6")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001D7")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		set
		{
		}
	}

	[Token(Token = "0x17000064")]
	public List<GlyphPairAdjustmentRecord> glyphPairAdjustmentRecords
	{
		[Token(Token = "0x60001D8")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001D9")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000065")]
	public List<MarkToBaseAdjustmentRecord> MarkToBaseAdjustmentRecords
	{
		[Token(Token = "0x60001DA")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001DB")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000066")]
	public List<MarkToMarkAdjustmentRecord> MarkToMarkAdjustmentRecords
	{
		[Token(Token = "0x60001DC")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001DD")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		set
		{
		}
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x2CF6C80", Offset = "0x2CF5280", VA = "0x182CF6C80")]
	public TMP_FontFeatureTable()
	{
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x2CF65C0", Offset = "0x2CF4BC0", VA = "0x182CF65C0")]
	public void SortGlyphPairAdjustmentRecords()
	{
	}

	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x2CF6800", Offset = "0x2CF4E00", VA = "0x182CF6800")]
	public void SortMarkToBaseAdjustmentRecords()
	{
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x2CF6A40", Offset = "0x2CF5040", VA = "0x182CF6A40")]
	public void SortMarkToMarkAdjustmentRecords()
	{
	}
}
