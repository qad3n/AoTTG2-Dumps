// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.FontFeatureTable
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000F")]
	internal List<UnityEngine.TextCore.LowLevel.MarkToBaseAdjustmentRecord> MarkToBaseAdjustmentRecords
	{
		[Token(Token = "0x600005F")]
		[Address(RVA = "0x2E8E8B0", Offset = "0x2E8CEB0", VA = "0x182E8E8B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000010")]
	internal List<UnityEngine.TextCore.LowLevel.MarkToMarkAdjustmentRecord> MarkToMarkAdjustmentRecords
	{
		[Token(Token = "0x6000060")]
		[Address(RVA = "0xD0ECE0", Offset = "0xD0D2E0", VA = "0x180D0ECE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x30130D0", Offset = "0x30116D0", VA = "0x1830130D0")]
	internal FontFeatureTable()
	{
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x3012A10", Offset = "0x3011010", VA = "0x183012A10")]
	public void SortGlyphPairAdjustmentRecords()
	{
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x3012C50", Offset = "0x3011250", VA = "0x183012C50")]
	public void SortMarkToBaseAdjustmentRecords()
	{
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x3012E90", Offset = "0x3011490", VA = "0x183012E90")]
	public void SortMarkToMarkAdjustmentRecords()
	{
	}
}
