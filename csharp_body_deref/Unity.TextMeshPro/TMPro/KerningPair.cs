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
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60001A8")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
		set
		{
		}
	}

	[Token(Token = "0x1700005D")]
	public GlyphValueRecord_Legacy firstGlyphAdjustments
	{
		[Token(Token = "0x60001A9")]
		[Address(RVA = "0x1165450", Offset = "0x1163A50", VA = "0x181165450")]
		get
		{
			return default(GlyphValueRecord_Legacy);
		}
	}

	[Token(Token = "0x1700005E")]
	public uint secondGlyph
	{
		[Token(Token = "0x60001AA")]
		[Address(RVA = "0xBDB280", Offset = "0xBD9880", VA = "0x180BDB280")]
		get
		{
			return default(uint);
		}
		[Token(Token = "0x60001AB")]
		[Address(RVA = "0xD23EF0", Offset = "0xD224F0", VA = "0x180D23EF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700005F")]
	public GlyphValueRecord_Legacy secondGlyphAdjustments
	{
		[Token(Token = "0x60001AC")]
		[Address(RVA = "0x181CEB0", Offset = "0x181B4B0", VA = "0x18181CEB0")]
		get
		{
			return default(GlyphValueRecord_Legacy);
		}
	}

	[Token(Token = "0x17000060")]
	public bool ignoreSpacingAdjustments
	{
		[Token(Token = "0x60001AD")]
		[Address(RVA = "0xDA7C70", Offset = "0xDA6270", VA = "0x180DA7C70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x2CF4750", Offset = "0x2CF2D50", VA = "0x182CF4750")]
	public KerningPair()
	{
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x2CF46C0", Offset = "0x2CF2CC0", VA = "0x182CF46C0")]
	public KerningPair(uint left, uint right, float offset)
	{
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x2CF4710", Offset = "0x2CF2D10", VA = "0x182CF4710")]
	public KerningPair(uint firstGlyph, GlyphValueRecord_Legacy firstGlyphAdjustments, uint secondGlyph, GlyphValueRecord_Legacy secondGlyphAdjustments)
	{
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x2CF4620", Offset = "0x2CF2C20", VA = "0x182CF4620")]
	internal void ConvertLegacyKerningData()
	{
	}
}
