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
		[Address(RVA = "0x152F200", Offset = "0x152D800", VA = "0x18152F200")]
		get
		{
			return default(TMP_GlyphAdjustmentRecord);
		}
		[Token(Token = "0x60001FD")]
		[Address(RVA = "0x2CF7690", Offset = "0x2CF5C90", VA = "0x182CF7690")]
		set
		{
		}
	}

	[Token(Token = "0x1700006E")]
	public TMP_GlyphAdjustmentRecord secondAdjustmentRecord
	{
		[Token(Token = "0x60001FE")]
		[Address(RVA = "0x2CF7670", Offset = "0x2CF5C70", VA = "0x182CF7670")]
		get
		{
			return default(TMP_GlyphAdjustmentRecord);
		}
		[Token(Token = "0x60001FF")]
		[Address(RVA = "0x2CF76A0", Offset = "0x2CF5CA0", VA = "0x182CF76A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006F")]
	public FontFeatureLookupFlags featureLookupFlags
	{
		[Token(Token = "0x6000200")]
		[Address(RVA = "0x172E4A0", Offset = "0x172CAA0", VA = "0x18172E4A0")]
		get
		{
			return default(FontFeatureLookupFlags);
		}
		[Token(Token = "0x6000201")]
		[Address(RVA = "0x1A40490", Offset = "0x1A3EA90", VA = "0x181A40490")]
		set
		{
		}
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x2CF7470", Offset = "0x2CF5A70", VA = "0x182CF7470")]
	public TMP_GlyphPairAdjustmentRecord(TMP_GlyphAdjustmentRecord firstAdjustmentRecord, TMP_GlyphAdjustmentRecord secondAdjustmentRecord)
	{
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x2CF74C0", Offset = "0x2CF5AC0", VA = "0x182CF74C0")]
	internal TMP_GlyphPairAdjustmentRecord(GlyphPairAdjustmentRecord glyphPairAdjustmentRecord)
	{
	}
}
