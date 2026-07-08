using System;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Serialization;

namespace TMPro;

[Serializable]
[Token(Token = "0x2000030")]
public class KerningPair
{
	[Token(Token = "0x4000124")]
	[FieldOffset(Offset = "0x10")]
	[FormerlySerializedAs("AscII_Left")]
	[SerializeField]
	private uint m_FirstGlyph;

	[Token(Token = "0x4000125")]
	[FieldOffset(Offset = "0x14")]
	[SerializeField]
	private GlyphValueRecord_Legacy m_FirstGlyphAdjustments;

	[Token(Token = "0x4000126")]
	[FieldOffset(Offset = "0x24")]
	[FormerlySerializedAs("AscII_Right")]
	[SerializeField]
	private uint m_SecondGlyph;

	[Token(Token = "0x4000127")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private GlyphValueRecord_Legacy m_SecondGlyphAdjustments;

	[Token(Token = "0x4000128")]
	[FieldOffset(Offset = "0x38")]
	[FormerlySerializedAs("XadvanceOffset")]
	public float xOffset;

	[Token(Token = "0x4000129")]
	[FieldOffset(Offset = "0x0")]
	internal static KerningPair empty;

	[Token(Token = "0x400012A")]
	[FieldOffset(Offset = "0x3C")]
	[SerializeField]
	private bool m_IgnoreSpacingAdjustments;

	[Token(Token = "0x17000044")]
	public uint firstGlyph
	{
		[Token(Token = "0x600014E")]
		[Address(RVA = "0x4908FA0", Offset = "0x4908FA0", VA = "0x4908FA0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x600014F")]
		[Address(RVA = "0x4908FB0", Offset = "0x4908FB0", VA = "0x4908FB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000045")]
	public GlyphValueRecord_Legacy firstGlyphAdjustments
	{
		[Token(Token = "0x6000150")]
		[Address(RVA = "0x4908FC0", Offset = "0x4908FC0", VA = "0x4908FC0")]
		get
		{
			return default(GlyphValueRecord_Legacy);
		}
	}

	[Token(Token = "0x17000046")]
	public uint secondGlyph
	{
		[Token(Token = "0x6000151")]
		[Address(RVA = "0x4908FD0", Offset = "0x4908FD0", VA = "0x4908FD0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x6000152")]
		[Address(RVA = "0x4908FE0", Offset = "0x4908FE0", VA = "0x4908FE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000047")]
	public GlyphValueRecord_Legacy secondGlyphAdjustments
	{
		[Token(Token = "0x6000153")]
		[Address(RVA = "0x4908FF0", Offset = "0x4908FF0", VA = "0x4908FF0")]
		get
		{
			return default(GlyphValueRecord_Legacy);
		}
	}

	[Token(Token = "0x17000048")]
	public bool ignoreSpacingAdjustments
	{
		[Token(Token = "0x6000154")]
		[Address(RVA = "0x4909000", Offset = "0x4909000", VA = "0x4909000")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x4909010", Offset = "0x4909010", VA = "0x4909010")]
	public KerningPair()
	{
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x4909030", Offset = "0x4909030", VA = "0x4909030")]
	public KerningPair(uint left, uint right, float offset)
	{
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x4909070", Offset = "0x4909070", VA = "0x4909070")]
	public KerningPair(uint firstGlyph, GlyphValueRecord_Legacy firstGlyphAdjustments, uint secondGlyph, GlyphValueRecord_Legacy secondGlyphAdjustments)
	{
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x49090D0", Offset = "0x49090D0", VA = "0x49090D0")]
	internal void ConvertLegacyKerningData()
	{
	}
}
