using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200035B")]
internal struct InheritedData : IStyleDataGroup<InheritedData>, IEquatable<InheritedData>
{
	[Token(Token = "0x40009FD")]
	[FieldOffset(Offset = "0x0")]
	public Color color;

	[Token(Token = "0x40009FE")]
	[FieldOffset(Offset = "0x10")]
	public Length fontSize;

	[Token(Token = "0x40009FF")]
	[FieldOffset(Offset = "0x18")]
	public Length letterSpacing;

	[Token(Token = "0x4000A00")]
	[FieldOffset(Offset = "0x20")]
	public TextShadow textShadow;

	[Token(Token = "0x4000A01")]
	[FieldOffset(Offset = "0x40")]
	public Font unityFont;

	[Token(Token = "0x4000A02")]
	[FieldOffset(Offset = "0x48")]
	public FontDefinition unityFontDefinition;

	[Token(Token = "0x4000A03")]
	[FieldOffset(Offset = "0x58")]
	public FontStyle unityFontStyleAndWeight;

	[Token(Token = "0x4000A04")]
	[FieldOffset(Offset = "0x5C")]
	public Length unityParagraphSpacing;

	[Token(Token = "0x4000A05")]
	[FieldOffset(Offset = "0x64")]
	public TextAnchor unityTextAlign;

	[Token(Token = "0x4000A06")]
	[FieldOffset(Offset = "0x68")]
	public Color unityTextOutlineColor;

	[Token(Token = "0x4000A07")]
	[FieldOffset(Offset = "0x78")]
	public float unityTextOutlineWidth;

	[Token(Token = "0x4000A08")]
	[FieldOffset(Offset = "0x7C")]
	public Visibility visibility;

	[Token(Token = "0x4000A09")]
	[FieldOffset(Offset = "0x80")]
	public WhiteSpace whiteSpace;

	[Token(Token = "0x4000A0A")]
	[FieldOffset(Offset = "0x84")]
	public Length wordSpacing;

	[Token(Token = "0x6001590")]
	[Address(RVA = "0x4D81DE0", Offset = "0x4D81DE0", VA = "0x4D81DE0", Slot = "4")]
	public InheritedData Copy()
	{
		return default(InheritedData);
	}

	[Token(Token = "0x6001591")]
	[Address(RVA = "0x4D81E00", Offset = "0x4D81E00", VA = "0x4D81E00", Slot = "5")]
	public void CopyFrom(ref InheritedData other)
	{
	}

	[Token(Token = "0x6001592")]
	[Address(RVA = "0x4D81E20", Offset = "0x4D81E20", VA = "0x4D81E20")]
	public static bool operator ==(InheritedData lhs, InheritedData rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001593")]
	[Address(RVA = "0x4D820E0", Offset = "0x4D820E0", VA = "0x4D820E0", Slot = "6")]
	public bool Equals(InheritedData other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001594")]
	[Address(RVA = "0x4D82120", Offset = "0x4D82120", VA = "0x4D82120", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001595")]
	[Address(RVA = "0x4D821B0", Offset = "0x4D821B0", VA = "0x4D821B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
