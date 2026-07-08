using System;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.TextCore.LowLevel;

namespace TMPro;

[Serializable]
[Token(Token = "0x200003D")]
public class TMP_GlyphPairAdjustmentRecord
{
	[Token(Token = "0x4000148")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	internal TMP_GlyphAdjustmentRecord m_FirstAdjustmentRecord;

	[Token(Token = "0x4000149")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	internal TMP_GlyphAdjustmentRecord m_SecondAdjustmentRecord;

	[Token(Token = "0x400014A")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	internal FontFeatureLookupFlags m_FeatureLookupFlags;

	[Token(Token = "0x17000051")]
	public TMP_GlyphAdjustmentRecord firstAdjustmentRecord
	{
		[Token(Token = "0x6000191")]
		[Address(RVA = "0x490B2D0", Offset = "0x490B2D0", VA = "0x490B2D0")]
		get
		{
			return default(TMP_GlyphAdjustmentRecord);
		}
		[Token(Token = "0x6000192")]
		[Address(RVA = "0x490B2F0", Offset = "0x490B2F0", VA = "0x490B2F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000052")]
	public TMP_GlyphAdjustmentRecord secondAdjustmentRecord
	{
		[Token(Token = "0x6000193")]
		[Address(RVA = "0x490B310", Offset = "0x490B310", VA = "0x490B310")]
		get
		{
			return default(TMP_GlyphAdjustmentRecord);
		}
		[Token(Token = "0x6000194")]
		[Address(RVA = "0x490B330", Offset = "0x490B330", VA = "0x490B330")]
		set
		{
		}
	}

	[Token(Token = "0x17000053")]
	public FontFeatureLookupFlags featureLookupFlags
	{
		[Token(Token = "0x6000195")]
		[Address(RVA = "0x490B350", Offset = "0x490B350", VA = "0x490B350")]
		get
		{
			return default(FontFeatureLookupFlags);
		}
		[Token(Token = "0x6000196")]
		[Address(RVA = "0x490B360", Offset = "0x490B360", VA = "0x490B360")]
		set
		{
		}
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x49084B0", Offset = "0x49084B0", VA = "0x49084B0")]
	public TMP_GlyphPairAdjustmentRecord(TMP_GlyphAdjustmentRecord firstAdjustmentRecord, TMP_GlyphAdjustmentRecord secondAdjustmentRecord)
	{
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x4907820", Offset = "0x4907820", VA = "0x4907820")]
	internal TMP_GlyphPairAdjustmentRecord(GlyphPairAdjustmentRecord glyphPairAdjustmentRecord)
	{
	}
}
