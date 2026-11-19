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
[Token(Token = "0x2000047")]
public class TMP_GlyphPairAdjustmentRecord
{
	[Token(Token = "0x400017F")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	internal TMP_GlyphAdjustmentRecord m_FirstAdjustmentRecord;

	[Token(Token = "0x4000180")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	internal TMP_GlyphAdjustmentRecord m_SecondAdjustmentRecord;

	[Token(Token = "0x4000181")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	internal FontFeatureLookupFlags m_FeatureLookupFlags;

	[Token(Token = "0x1700006D")]
	public TMP_GlyphAdjustmentRecord firstAdjustmentRecord
	{
		[Token(Token = "0x60001FC")]
		[Address(RVA = "0x66F69C0", Offset = "0x66F59C0", VA = "0x66F69C0")]
		get
		{
			return default(TMP_GlyphAdjustmentRecord);
		}
		[Token(Token = "0x60001FD")]
		[Address(RVA = "0x66F69E0", Offset = "0x66F59E0", VA = "0x66F69E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006E")]
	public TMP_GlyphAdjustmentRecord secondAdjustmentRecord
	{
		[Token(Token = "0x60001FE")]
		[Address(RVA = "0x66F6A00", Offset = "0x66F5A00", VA = "0x66F6A00")]
		get
		{
			return default(TMP_GlyphAdjustmentRecord);
		}
		[Token(Token = "0x60001FF")]
		[Address(RVA = "0x66F6A20", Offset = "0x66F5A20", VA = "0x66F6A20")]
		set
		{
		}
	}

	[Token(Token = "0x1700006F")]
	public FontFeatureLookupFlags featureLookupFlags
	{
		[Token(Token = "0x6000200")]
		[Address(RVA = "0x66F6A40", Offset = "0x66F5A40", VA = "0x66F6A40")]
		get
		{
			return default(FontFeatureLookupFlags);
		}
		[Token(Token = "0x6000201")]
		[Address(RVA = "0x66F6A50", Offset = "0x66F5A50", VA = "0x66F6A50")]
		set
		{
		}
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x66F6A60", Offset = "0x66F5A60", VA = "0x66F6A60")]
	public TMP_GlyphPairAdjustmentRecord(TMP_GlyphAdjustmentRecord firstAdjustmentRecord, TMP_GlyphAdjustmentRecord secondAdjustmentRecord)
	{
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x66F6AA0", Offset = "0x66F5AA0", VA = "0x66F6AA0")]
	internal TMP_GlyphPairAdjustmentRecord(GlyphPairAdjustmentRecord glyphPairAdjustmentRecord)
	{
	}
}
