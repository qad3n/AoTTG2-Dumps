// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_GlyphPairAdjustmentRecord
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.TextCore.LowLevel;

namespace TMPro;

[Serializable]
[Token(Token = "0x2000051")]
public class TMP_GlyphPairAdjustmentRecord
{
	[Token(Token = "0x4000237")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	internal TMP_GlyphAdjustmentRecord m_FirstAdjustmentRecord;

	[Token(Token = "0x4000238")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	internal TMP_GlyphAdjustmentRecord m_SecondAdjustmentRecord;

	[Token(Token = "0x4000239")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	internal FontFeatureLookupFlags m_FeatureLookupFlags;

	[Token(Token = "0x17000071")]
	public TMP_GlyphAdjustmentRecord firstAdjustmentRecord
	{
		[Token(Token = "0x600027A")]
		[Address(RVA = "0x4C58790", Offset = "0x4C58790", VA = "0x4C58790")]
		get
		{
			return default(TMP_GlyphAdjustmentRecord);
		}
		[Token(Token = "0x600027B")]
		[Address(RVA = "0x4C587B0", Offset = "0x4C587B0", VA = "0x4C587B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000072")]
	public TMP_GlyphAdjustmentRecord secondAdjustmentRecord
	{
		[Token(Token = "0x600027C")]
		[Address(RVA = "0x4C587D0", Offset = "0x4C587D0", VA = "0x4C587D0")]
		get
		{
			return default(TMP_GlyphAdjustmentRecord);
		}
		[Token(Token = "0x600027D")]
		[Address(RVA = "0x4C587F0", Offset = "0x4C587F0", VA = "0x4C587F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000073")]
	public FontFeatureLookupFlags featureLookupFlags
	{
		[Token(Token = "0x600027E")]
		[Address(RVA = "0x4C58810", Offset = "0x4C58810", VA = "0x4C58810")]
		get
		{
			return default(FontFeatureLookupFlags);
		}
		[Token(Token = "0x600027F")]
		[Address(RVA = "0x4C58820", Offset = "0x4C58820", VA = "0x4C58820")]
		set
		{
		}
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x4C55A30", Offset = "0x4C55A30", VA = "0x4C55A30")]
	public TMP_GlyphPairAdjustmentRecord(TMP_GlyphAdjustmentRecord firstAdjustmentRecord, TMP_GlyphAdjustmentRecord secondAdjustmentRecord)
	{
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x4C54DA0", Offset = "0x4C54DA0", VA = "0x4C54DA0")]
	internal TMP_GlyphPairAdjustmentRecord(GlyphPairAdjustmentRecord glyphPairAdjustmentRecord)
	{
	}
}
