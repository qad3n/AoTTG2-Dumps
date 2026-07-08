using System;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.TextCore.LowLevel;

namespace TMPro;

[Serializable]
[Token(Token = "0x200003C")]
public struct TMP_GlyphAdjustmentRecord
{
	[Token(Token = "0x4000146")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	internal uint m_GlyphIndex;

	[Token(Token = "0x4000147")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	internal TMP_GlyphValueRecord m_GlyphValueRecord;

	[Token(Token = "0x1700004F")]
	public uint glyphIndex
	{
		[Token(Token = "0x600018B")]
		[Address(RVA = "0x490B1F0", Offset = "0x490B1F0", VA = "0x490B1F0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x600018C")]
		[Address(RVA = "0x490B200", Offset = "0x490B200", VA = "0x490B200")]
		set
		{
		}
	}

	[Token(Token = "0x17000050")]
	public TMP_GlyphValueRecord glyphValueRecord
	{
		[Token(Token = "0x600018D")]
		[Address(RVA = "0x490B210", Offset = "0x490B210", VA = "0x490B210")]
		get
		{
			return default(TMP_GlyphValueRecord);
		}
		[Token(Token = "0x600018E")]
		[Address(RVA = "0x490B220", Offset = "0x490B220", VA = "0x490B220")]
		set
		{
		}
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x49084A0", Offset = "0x49084A0", VA = "0x49084A0")]
	public TMP_GlyphAdjustmentRecord(uint glyphIndex, TMP_GlyphValueRecord glyphValueRecord)
	{
	}

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x490B230", Offset = "0x490B230", VA = "0x490B230")]
	internal TMP_GlyphAdjustmentRecord(GlyphAdjustmentRecord adjustmentRecord)
	{
	}
}
