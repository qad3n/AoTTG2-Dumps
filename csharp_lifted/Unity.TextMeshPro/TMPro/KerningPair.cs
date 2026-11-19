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
[Token(Token = "0x200003A")]
public class KerningPair
{
	[Token(Token = "0x4000151")]
	[FieldOffset(Offset = "0x10")]
	[FormerlySerializedAs("AscII_Left")]
	[SerializeField]
	private uint m_FirstGlyph;

	[Token(Token = "0x4000152")]
	[FieldOffset(Offset = "0x14")]
	[SerializeField]
	private GlyphValueRecord_Legacy m_FirstGlyphAdjustments;

	[Token(Token = "0x4000153")]
	[FieldOffset(Offset = "0x24")]
	[FormerlySerializedAs("AscII_Right")]
	[SerializeField]
	private uint m_SecondGlyph;

	[Token(Token = "0x4000154")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private GlyphValueRecord_Legacy m_SecondGlyphAdjustments;

	[Token(Token = "0x4000155")]
	[FieldOffset(Offset = "0x38")]
	[FormerlySerializedAs("XadvanceOffset")]
	public float xOffset;

	[Token(Token = "0x4000156")]
	[FieldOffset(Offset = "0x0")]
	internal static KerningPair empty;

	[Token(Token = "0x4000157")]
	[FieldOffset(Offset = "0x3C")]
	[SerializeField]
	private bool m_IgnoreSpacingAdjustments;

	[Token(Token = "0x1700005C")]
	public uint firstGlyph
	{
		[Token(Token = "0x60001A7")]
		[Address(RVA = "0x66F34A0", Offset = "0x66F24A0", VA = "0x66F34A0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60001A8")]
		[Address(RVA = "0x66F34B0", Offset = "0x66F24B0", VA = "0x66F34B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700005D")]
	public GlyphValueRecord_Legacy firstGlyphAdjustments
	{
		[Token(Token = "0x60001A9")]
		[Address(RVA = "0x66F34C0", Offset = "0x66F24C0", VA = "0x66F34C0")]
		get
		{
			return default(GlyphValueRecord_Legacy);
		}
	}

	[Token(Token = "0x1700005E")]
	public uint secondGlyph
	{
		[Token(Token = "0x60001AA")]
		[Address(RVA = "0x66F34D0", Offset = "0x66F24D0", VA = "0x66F34D0")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60001AB")]
		[Address(RVA = "0x66F34E0", Offset = "0x66F24E0", VA = "0x66F34E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700005F")]
	public GlyphValueRecord_Legacy secondGlyphAdjustments
	{
		[Token(Token = "0x60001AC")]
		[Address(RVA = "0x66F34F0", Offset = "0x66F24F0", VA = "0x66F34F0")]
		get
		{
			return default(GlyphValueRecord_Legacy);
		}
	}

	[Token(Token = "0x17000060")]
	public bool ignoreSpacingAdjustments
	{
		[Token(Token = "0x60001AD")]
		[Address(RVA = "0x66F3500", Offset = "0x66F2500", VA = "0x66F3500")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x66F3510", Offset = "0x66F2510", VA = "0x66F3510")]
	public KerningPair()
	{
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x66F3530", Offset = "0x66F2530", VA = "0x66F3530")]
	public KerningPair(uint left, uint right, float offset)
	{
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x66F3570", Offset = "0x66F2570", VA = "0x66F3570")]
	public KerningPair(uint firstGlyph, GlyphValueRecord_Legacy firstGlyphAdjustments, uint secondGlyph, GlyphValueRecord_Legacy secondGlyphAdjustments)
	{
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x66F35D0", Offset = "0x66F25D0", VA = "0x66F35D0")]
	internal void ConvertLegacyKerningData()
	{
	}
}
