using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000360")]
internal struct VisualData : IStyleDataGroup<VisualData>, IEquatable<VisualData>
{
	[Token(Token = "0x4000A3E")]
	[FieldOffset(Offset = "0x0")]
	public Color backgroundColor;

	[Token(Token = "0x4000A3F")]
	[FieldOffset(Offset = "0x10")]
	public Background backgroundImage;

	[Token(Token = "0x4000A40")]
	[FieldOffset(Offset = "0x30")]
	public BackgroundPosition backgroundPositionX;

	[Token(Token = "0x4000A41")]
	[FieldOffset(Offset = "0x3C")]
	public BackgroundPosition backgroundPositionY;

	[Token(Token = "0x4000A42")]
	[FieldOffset(Offset = "0x48")]
	public BackgroundRepeat backgroundRepeat;

	[Token(Token = "0x4000A43")]
	[FieldOffset(Offset = "0x50")]
	public BackgroundSize backgroundSize;

	[Token(Token = "0x4000A44")]
	[FieldOffset(Offset = "0x64")]
	public Color borderBottomColor;

	[Token(Token = "0x4000A45")]
	[FieldOffset(Offset = "0x74")]
	public Length borderBottomLeftRadius;

	[Token(Token = "0x4000A46")]
	[FieldOffset(Offset = "0x7C")]
	public Length borderBottomRightRadius;

	[Token(Token = "0x4000A47")]
	[FieldOffset(Offset = "0x84")]
	public Color borderLeftColor;

	[Token(Token = "0x4000A48")]
	[FieldOffset(Offset = "0x94")]
	public Color borderRightColor;

	[Token(Token = "0x4000A49")]
	[FieldOffset(Offset = "0xA4")]
	public Color borderTopColor;

	[Token(Token = "0x4000A4A")]
	[FieldOffset(Offset = "0xB4")]
	public Length borderTopLeftRadius;

	[Token(Token = "0x4000A4B")]
	[FieldOffset(Offset = "0xBC")]
	public Length borderTopRightRadius;

	[Token(Token = "0x4000A4C")]
	[FieldOffset(Offset = "0xC4")]
	public float opacity;

	[Token(Token = "0x4000A4D")]
	[FieldOffset(Offset = "0xC8")]
	public OverflowInternal overflow;

	[Token(Token = "0x60015AE")]
	[Address(RVA = "0x4D84180", Offset = "0x4D84180", VA = "0x4D84180", Slot = "4")]
	public VisualData Copy()
	{
		return default(VisualData);
	}

	[Token(Token = "0x60015AF")]
	[Address(RVA = "0x4D841A0", Offset = "0x4D841A0", VA = "0x4D841A0", Slot = "5")]
	public void CopyFrom(ref VisualData other)
	{
	}

	[Token(Token = "0x60015B0")]
	[Address(RVA = "0x4D841C0", Offset = "0x4D841C0", VA = "0x4D841C0")]
	public static bool operator ==(VisualData lhs, VisualData rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60015B1")]
	[Address(RVA = "0x4D84580", Offset = "0x4D84580", VA = "0x4D84580", Slot = "6")]
	public bool Equals(VisualData other)
	{
		return default(bool);
	}

	[Token(Token = "0x60015B2")]
	[Address(RVA = "0x4D845C0", Offset = "0x4D845C0", VA = "0x4D845C0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60015B3")]
	[Address(RVA = "0x4D84660", Offset = "0x4D84660", VA = "0x4D84660", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
