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

namespace TMPro;

[Serializable]
[Token(Token = "0x2000053")]
public class TMP_FontFeatureTable
{
	[Token(Token = "0x400023D")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	internal List<TMP_GlyphPairAdjustmentRecord> m_GlyphPairAdjustmentRecords;

	[Token(Token = "0x400023E")]
	[FieldOffset(Offset = "0x18")]
	internal Dictionary<uint, TMP_GlyphPairAdjustmentRecord> m_GlyphPairAdjustmentRecordLookupDictionary;

	[Token(Token = "0x17000074")]
	public List<TMP_GlyphPairAdjustmentRecord> glyphPairAdjustmentRecords
	{
		[Token(Token = "0x6000284")]
		[Address(RVA = "0x4C58840", Offset = "0x4C58840", VA = "0x4C58840")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000285")]
		[Address(RVA = "0x4C58850", Offset = "0x4C58850", VA = "0x4C58850")]
		set
		{
		}
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x4C54CD0", Offset = "0x4C54CD0", VA = "0x4C54CD0")]
	public TMP_FontFeatureTable()
	{
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x4C4F250", Offset = "0x4C4F250", VA = "0x4C4F250")]
	public void SortGlyphPairAdjustmentRecords()
	{
	}
}
