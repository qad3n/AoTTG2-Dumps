// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.FontFeatureTable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.TextCore.LowLevel;

namespace UnityEngine.TextCore.Text;

[Serializable]
[Token(Token = "0x2000021")]
public class FontFeatureTable
{
	[Token(Token = "0x40000D0")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	internal List<UnityEngine.TextCore.LowLevel.MultipleSubstitutionRecord> m_MultipleSubstitutionRecords;

	[Token(Token = "0x40000D1")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	internal List<UnityEngine.TextCore.LowLevel.LigatureSubstitutionRecord> m_LigatureSubstitutionRecords;

	[Token(Token = "0x40000D2")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private List<GlyphPairAdjustmentRecord> m_GlyphPairAdjustmentRecords;

	[Token(Token = "0x40000D3")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	internal List<UnityEngine.TextCore.LowLevel.MarkToBaseAdjustmentRecord> m_MarkToBaseAdjustmentRecords;

	[Token(Token = "0x40000D4")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	internal List<UnityEngine.TextCore.LowLevel.MarkToMarkAdjustmentRecord> m_MarkToMarkAdjustmentRecords;

	[Token(Token = "0x40000D5")]
	[FieldOffset(Offset = "0x38")]
	internal Dictionary<uint, List<UnityEngine.TextCore.LowLevel.LigatureSubstitutionRecord>> m_LigatureSubstitutionRecordLookup;

	[Token(Token = "0x40000D6")]
	[FieldOffset(Offset = "0x40")]
	internal Dictionary<uint, GlyphPairAdjustmentRecord> m_GlyphPairAdjustmentRecordLookup;

	[Token(Token = "0x40000D7")]
	[FieldOffset(Offset = "0x48")]
	internal Dictionary<uint, UnityEngine.TextCore.LowLevel.MarkToBaseAdjustmentRecord> m_MarkToBaseAdjustmentRecordLookup;

	[Token(Token = "0x40000D8")]
	[FieldOffset(Offset = "0x50")]
	internal Dictionary<uint, UnityEngine.TextCore.LowLevel.MarkToMarkAdjustmentRecord> m_MarkToMarkAdjustmentRecordLookup;

	[Token(Token = "0x1700000E")]
	internal List<GlyphPairAdjustmentRecord> glyphPairAdjustmentRecords
	{
		[Token(Token = "0x600005E")]
		[Address(RVA = "0x6A0D6D0", Offset = "0x6A0C6D0", VA = "0x6A0D6D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000F")]
	internal List<UnityEngine.TextCore.LowLevel.MarkToBaseAdjustmentRecord> MarkToBaseAdjustmentRecords
	{
		[Token(Token = "0x600005F")]
		[Address(RVA = "0x6A0D6E0", Offset = "0x6A0C6E0", VA = "0x6A0D6E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000010")]
	internal List<UnityEngine.TextCore.LowLevel.MarkToMarkAdjustmentRecord> MarkToMarkAdjustmentRecords
	{
		[Token(Token = "0x6000060")]
		[Address(RVA = "0x6A0D6F0", Offset = "0x6A0C6F0", VA = "0x6A0D6F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x6A0D700", Offset = "0x6A0C700", VA = "0x6A0D700")]
	internal FontFeatureTable()
	{
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x6A0D990", Offset = "0x6A0C990", VA = "0x6A0D990")]
	public void SortGlyphPairAdjustmentRecords()
	{
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x6A0DBC0", Offset = "0x6A0CBC0", VA = "0x6A0DBC0")]
	public void SortMarkToBaseAdjustmentRecords()
	{
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x6A0DDF0", Offset = "0x6A0CDF0", VA = "0x6A0DDF0")]
	public void SortMarkToMarkAdjustmentRecords()
	{
	}
}
