// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.KerningPair
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Serialization;

namespace TMPro;

[Serializable]
[Token(Token = "0x2000046")]
public class KerningPair
{
	[Token(Token = "0x4000218")]
	[FieldOffset(Offset = "0x10")]
	[FormerlySerializedAs("AscII_Left")]
	[SerializeField]
	private uint m_FirstGlyph;

	[Token(Token = "0x4000219")]
	[FieldOffset(Offset = "0x14")]
	[SerializeField]
	private GlyphValueRecord_Legacy m_FirstGlyphAdjustments;

	[Token(Token = "0x400021A")]
	[FieldOffset(Offset = "0x24")]
	[FormerlySerializedAs("AscII_Right")]
	[SerializeField]
	private uint m_SecondGlyph;

	[Token(Token = "0x400021B")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private GlyphValueRecord_Legacy m_SecondGlyphAdjustments;

	[Token(Token = "0x400021C")]
	[FieldOffset(Offset = "0x38")]
	[FormerlySerializedAs("XadvanceOffset")]
	public float xOffset;

	[Token(Token = "0x400021D")]
	[FieldOffset(Offset = "0x0")]
	internal static KerningPair empty;

	[Token(Token = "0x400021E")]
	[FieldOffset(Offset = "0x3C")]
	[SerializeField]
	private bool m_IgnoreSpacingAdjustments;

	[Token(Token = "0x17000065")]
	public uint firstGlyph
	{
		[Token(Token = "0x600023F")]
		[Address(RVA = "0x4C56520", Offset = "0x4C56520", VA = "0x4C56520")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x6000240")]
		[Address(RVA = "0x4C56530", Offset = "0x4C56530", VA = "0x4C56530")]
		set
		{
		}
	}

	[Token(Token = "0x17000066")]
	public GlyphValueRecord_Legacy firstGlyphAdjustments
	{
		[Token(Token = "0x6000241")]
		[Address(RVA = "0x4C56540", Offset = "0x4C56540", VA = "0x4C56540")]
		get
		{
			return default(GlyphValueRecord_Legacy);
		}
	}

	[Token(Token = "0x17000067")]
	public uint secondGlyph
	{
		[Token(Token = "0x6000242")]
		[Address(RVA = "0x4C56550", Offset = "0x4C56550", VA = "0x4C56550")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x6000243")]
		[Address(RVA = "0x4C56560", Offset = "0x4C56560", VA = "0x4C56560")]
		set
		{
		}
	}

	[Token(Token = "0x17000068")]
	public GlyphValueRecord_Legacy secondGlyphAdjustments
	{
		[Token(Token = "0x6000244")]
		[Address(RVA = "0x4C56570", Offset = "0x4C56570", VA = "0x4C56570")]
		get
		{
			return default(GlyphValueRecord_Legacy);
		}
	}

	[Token(Token = "0x17000069")]
	public bool ignoreSpacingAdjustments
	{
		[Token(Token = "0x6000245")]
		[Address(RVA = "0x4C56580", Offset = "0x4C56580", VA = "0x4C56580")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x4C56590", Offset = "0x4C56590", VA = "0x4C56590")]
	public KerningPair()
	{
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x4C565B0", Offset = "0x4C565B0", VA = "0x4C565B0")]
	public KerningPair(uint left, uint right, float offset)
	{
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x4C565F0", Offset = "0x4C565F0", VA = "0x4C565F0")]
	public KerningPair(uint firstGlyph, GlyphValueRecord_Legacy firstGlyphAdjustments, uint secondGlyph, GlyphValueRecord_Legacy secondGlyphAdjustments)
	{
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x4C56650", Offset = "0x4C56650", VA = "0x4C56650")]
	internal void ConvertLegacyKerningData()
	{
	}
}
