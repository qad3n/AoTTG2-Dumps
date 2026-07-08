using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200035C")]
internal struct LayoutData : IStyleDataGroup<LayoutData>, IEquatable<LayoutData>
{
	[Token(Token = "0x4000A0B")]
	[FieldOffset(Offset = "0x0")]
	public Align alignContent;

	[Token(Token = "0x4000A0C")]
	[FieldOffset(Offset = "0x4")]
	public Align alignItems;

	[Token(Token = "0x4000A0D")]
	[FieldOffset(Offset = "0x8")]
	public Align alignSelf;

	[Token(Token = "0x4000A0E")]
	[FieldOffset(Offset = "0xC")]
	public float borderBottomWidth;

	[Token(Token = "0x4000A0F")]
	[FieldOffset(Offset = "0x10")]
	public float borderLeftWidth;

	[Token(Token = "0x4000A10")]
	[FieldOffset(Offset = "0x14")]
	public float borderRightWidth;

	[Token(Token = "0x4000A11")]
	[FieldOffset(Offset = "0x18")]
	public float borderTopWidth;

	[Token(Token = "0x4000A12")]
	[FieldOffset(Offset = "0x1C")]
	public Length bottom;

	[Token(Token = "0x4000A13")]
	[FieldOffset(Offset = "0x24")]
	public DisplayStyle display;

	[Token(Token = "0x4000A14")]
	[FieldOffset(Offset = "0x28")]
	public Length flexBasis;

	[Token(Token = "0x4000A15")]
	[FieldOffset(Offset = "0x30")]
	public FlexDirection flexDirection;

	[Token(Token = "0x4000A16")]
	[FieldOffset(Offset = "0x34")]
	public float flexGrow;

	[Token(Token = "0x4000A17")]
	[FieldOffset(Offset = "0x38")]
	public float flexShrink;

	[Token(Token = "0x4000A18")]
	[FieldOffset(Offset = "0x3C")]
	public Wrap flexWrap;

	[Token(Token = "0x4000A19")]
	[FieldOffset(Offset = "0x40")]
	public Length height;

	[Token(Token = "0x4000A1A")]
	[FieldOffset(Offset = "0x48")]
	public Justify justifyContent;

	[Token(Token = "0x4000A1B")]
	[FieldOffset(Offset = "0x4C")]
	public Length left;

	[Token(Token = "0x4000A1C")]
	[FieldOffset(Offset = "0x54")]
	public Length marginBottom;

	[Token(Token = "0x4000A1D")]
	[FieldOffset(Offset = "0x5C")]
	public Length marginLeft;

	[Token(Token = "0x4000A1E")]
	[FieldOffset(Offset = "0x64")]
	public Length marginRight;

	[Token(Token = "0x4000A1F")]
	[FieldOffset(Offset = "0x6C")]
	public Length marginTop;

	[Token(Token = "0x4000A20")]
	[FieldOffset(Offset = "0x74")]
	public Length maxHeight;

	[Token(Token = "0x4000A21")]
	[FieldOffset(Offset = "0x7C")]
	public Length maxWidth;

	[Token(Token = "0x4000A22")]
	[FieldOffset(Offset = "0x84")]
	public Length minHeight;

	[Token(Token = "0x4000A23")]
	[FieldOffset(Offset = "0x8C")]
	public Length minWidth;

	[Token(Token = "0x4000A24")]
	[FieldOffset(Offset = "0x94")]
	public Length paddingBottom;

	[Token(Token = "0x4000A25")]
	[FieldOffset(Offset = "0x9C")]
	public Length paddingLeft;

	[Token(Token = "0x4000A26")]
	[FieldOffset(Offset = "0xA4")]
	public Length paddingRight;

	[Token(Token = "0x4000A27")]
	[FieldOffset(Offset = "0xAC")]
	public Length paddingTop;

	[Token(Token = "0x4000A28")]
	[FieldOffset(Offset = "0xB4")]
	public Position position;

	[Token(Token = "0x4000A29")]
	[FieldOffset(Offset = "0xB8")]
	public Length right;

	[Token(Token = "0x4000A2A")]
	[FieldOffset(Offset = "0xC0")]
	public Length top;

	[Token(Token = "0x4000A2B")]
	[FieldOffset(Offset = "0xC8")]
	public Length width;

	[Token(Token = "0x6001596")]
	[Address(RVA = "0x4D82420", Offset = "0x4D82420", VA = "0x4D82420", Slot = "4")]
	public LayoutData Copy()
	{
		return default(LayoutData);
	}

	[Token(Token = "0x6001597")]
	[Address(RVA = "0x4D82440", Offset = "0x4D82440", VA = "0x4D82440", Slot = "5")]
	public void CopyFrom(ref LayoutData other)
	{
	}

	[Token(Token = "0x6001598")]
	[Address(RVA = "0x4D82450", Offset = "0x4D82450", VA = "0x4D82450")]
	public static bool operator ==(LayoutData lhs, LayoutData rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001599")]
	[Address(RVA = "0x4D82830", Offset = "0x4D82830", VA = "0x4D82830", Slot = "6")]
	public bool Equals(LayoutData other)
	{
		return default(bool);
	}

	[Token(Token = "0x600159A")]
	[Address(RVA = "0x4D82890", Offset = "0x4D82890", VA = "0x4D82890", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600159B")]
	[Address(RVA = "0x4D82950", Offset = "0x4D82950", VA = "0x4D82950", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
