using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Serializable]
[Token(Token = "0x2000038")]
public class TMP_FontFeatureTable
{
	[Token(Token = "0x4000139")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	internal List<TMP_GlyphPairAdjustmentRecord> m_GlyphPairAdjustmentRecords;

	[Token(Token = "0x400013A")]
	[FieldOffset(Offset = "0x18")]
	internal Dictionary<uint, TMP_GlyphPairAdjustmentRecord> m_GlyphPairAdjustmentRecordLookupDictionary;

	[Token(Token = "0x1700004A")]
	public List<TMP_GlyphPairAdjustmentRecord> glyphPairAdjustmentRecords
	{
		[Token(Token = "0x6000177")]
		[Address(RVA = "0x490B030", Offset = "0x490B030", VA = "0x490B030")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000178")]
		[Address(RVA = "0x490B040", Offset = "0x490B040", VA = "0x490B040")]
		set
		{
		}
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x4907750", Offset = "0x4907750", VA = "0x4907750")]
	public TMP_FontFeatureTable()
	{
	}

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x4901CD0", Offset = "0x4901CD0", VA = "0x4901CD0")]
	public void SortGlyphPairAdjustmentRecords()
	{
	}
}
