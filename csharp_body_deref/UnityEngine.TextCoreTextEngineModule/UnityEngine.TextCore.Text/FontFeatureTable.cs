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
[Token(Token = "0x200000B")]
public class FontFeatureTable
{
	[Token(Token = "0x4000062")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	internal List<UnityEngine.TextCore.LowLevel.MultipleSubstitutionRecord> m_MultipleSubstitutionRecords;

	[Token(Token = "0x4000063")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	internal List<UnityEngine.TextCore.LowLevel.LigatureSubstitutionRecord> m_LigatureSubstitutionRecords;

	[Token(Token = "0x4000064")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	internal List<GlyphPairAdjustmentRecord> m_GlyphPairAdjustmentRecords;

	[Token(Token = "0x4000065")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	internal List<UnityEngine.TextCore.LowLevel.MarkToBaseAdjustmentRecord> m_MarkToBaseAdjustmentRecords;

	[Token(Token = "0x4000066")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	internal List<UnityEngine.TextCore.LowLevel.MarkToMarkAdjustmentRecord> m_MarkToMarkAdjustmentRecords;

	[Token(Token = "0x4000067")]
	[FieldOffset(Offset = "0x38")]
	internal Dictionary<uint, List<UnityEngine.TextCore.LowLevel.LigatureSubstitutionRecord>> m_LigatureSubstitutionRecordLookup;

	[Token(Token = "0x4000068")]
	[FieldOffset(Offset = "0x40")]
	internal Dictionary<uint, GlyphPairAdjustmentRecord> m_GlyphPairAdjustmentRecordLookup;

	[Token(Token = "0x4000069")]
	[FieldOffset(Offset = "0x48")]
	internal Dictionary<uint, UnityEngine.TextCore.LowLevel.MarkToBaseAdjustmentRecord> m_MarkToBaseAdjustmentRecordLookup;

	[Token(Token = "0x400006A")]
	[FieldOffset(Offset = "0x50")]
	internal Dictionary<uint, UnityEngine.TextCore.LowLevel.MarkToMarkAdjustmentRecord> m_MarkToMarkAdjustmentRecordLookup;

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x4EB0CA0", Offset = "0x4EB0CA0", VA = "0x4EB0CA0")]
	internal FontFeatureTable()
	{
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x4EA9ED0", Offset = "0x4EA9ED0", VA = "0x4EA9ED0")]
	public void SortGlyphPairAdjustmentRecords()
	{
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x4EAA100", Offset = "0x4EAA100", VA = "0x4EAA100")]
	public void SortMarkToBaseAdjustmentRecords()
	{
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x4EAA330", Offset = "0x4EAA330", VA = "0x4EAA330")]
	public void SortMarkToMarkAdjustmentRecords()
	{
	}
}
