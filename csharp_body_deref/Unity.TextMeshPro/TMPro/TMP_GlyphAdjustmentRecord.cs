// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_GlyphAdjustmentRecord
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
[Token(Token = "0x2000046")]
public struct TMP_GlyphAdjustmentRecord
{
	[Token(Token = "0x400017D")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	internal uint m_GlyphIndex;

	[Token(Token = "0x400017E")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	internal TMP_GlyphValueRecord m_GlyphValueRecord;

	[Token(Token = "0x1700006B")]
	public uint glyphIndex
	{
		[Token(Token = "0x60001F6")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60001F7")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
		set
		{
		}
	}

	[Token(Token = "0x1700006C")]
	public TMP_GlyphValueRecord glyphValueRecord
	{
		[Token(Token = "0x60001F8")]
		[Address(RVA = "0xADC270", Offset = "0xADA870", VA = "0x180ADC270")]
		get
		{
			return default(TMP_GlyphValueRecord);
		}
		[Token(Token = "0x60001F9")]
		[Address(RVA = "0x2CF7460", Offset = "0x2CF5A60", VA = "0x182CF7460")]
		set
		{
		}
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x180D1A0", Offset = "0x180B7A0", VA = "0x18180D1A0")]
	public TMP_GlyphAdjustmentRecord(uint glyphIndex, TMP_GlyphValueRecord glyphValueRecord)
	{
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x2CF73B0", Offset = "0x2CF59B0", VA = "0x182CF73B0")]
	internal TMP_GlyphAdjustmentRecord(GlyphAdjustmentRecord adjustmentRecord)
	{
	}
}
