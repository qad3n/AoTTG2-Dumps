// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.LayoutData
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20003F1")]
internal struct LayoutData : IStyleDataGroup<LayoutData>, IEquatable<LayoutData>
{
	[Token(Token = "0x4000C85")]
	[FieldOffset(Offset = "0x0")]
	public Align alignContent;

	[Token(Token = "0x4000C86")]
	[FieldOffset(Offset = "0x4")]
	public Align alignItems;

	[Token(Token = "0x4000C87")]
	[FieldOffset(Offset = "0x8")]
	public Align alignSelf;

	[Token(Token = "0x4000C88")]
	[FieldOffset(Offset = "0xC")]
	public Ratio aspectRatio;

	[Token(Token = "0x4000C89")]
	[FieldOffset(Offset = "0x10")]
	public float borderBottomWidth;

	[Token(Token = "0x4000C8A")]
	[FieldOffset(Offset = "0x14")]
	public float borderLeftWidth;

	[Token(Token = "0x4000C8B")]
	[FieldOffset(Offset = "0x18")]
	public float borderRightWidth;

	[Token(Token = "0x4000C8C")]
	[FieldOffset(Offset = "0x1C")]
	public float borderTopWidth;

	[Token(Token = "0x4000C8D")]
	[FieldOffset(Offset = "0x20")]
	public Length bottom;

	[Token(Token = "0x4000C8E")]
	[FieldOffset(Offset = "0x28")]
	public DisplayStyle display;

	[Token(Token = "0x4000C8F")]
	[FieldOffset(Offset = "0x2C")]
	public Length flexBasis;

	[Token(Token = "0x4000C90")]
	[FieldOffset(Offset = "0x34")]
	public FlexDirection flexDirection;

	[Token(Token = "0x4000C91")]
	[FieldOffset(Offset = "0x38")]
	public float flexGrow;

	[Token(Token = "0x4000C92")]
	[FieldOffset(Offset = "0x3C")]
	public float flexShrink;

	[Token(Token = "0x4000C93")]
	[FieldOffset(Offset = "0x40")]
	public Wrap flexWrap;

	[Token(Token = "0x4000C94")]
	[FieldOffset(Offset = "0x44")]
	public Length height;

	[Token(Token = "0x4000C95")]
	[FieldOffset(Offset = "0x4C")]
	public Justify justifyContent;

	[Token(Token = "0x4000C96")]
	[FieldOffset(Offset = "0x50")]
	public Length left;

	[Token(Token = "0x4000C97")]
	[FieldOffset(Offset = "0x58")]
	public Length marginBottom;

	[Token(Token = "0x4000C98")]
	[FieldOffset(Offset = "0x60")]
	public Length marginLeft;

	[Token(Token = "0x4000C99")]
	[FieldOffset(Offset = "0x68")]
	public Length marginRight;

	[Token(Token = "0x4000C9A")]
	[FieldOffset(Offset = "0x70")]
	public Length marginTop;

	[Token(Token = "0x4000C9B")]
	[FieldOffset(Offset = "0x78")]
	public Length maxHeight;

	[Token(Token = "0x4000C9C")]
	[FieldOffset(Offset = "0x80")]
	public Length maxWidth;

	[Token(Token = "0x4000C9D")]
	[FieldOffset(Offset = "0x88")]
	public Length minHeight;

	[Token(Token = "0x4000C9E")]
	[FieldOffset(Offset = "0x90")]
	public Length minWidth;

	[Token(Token = "0x4000C9F")]
	[FieldOffset(Offset = "0x98")]
	public Length paddingBottom;

	[Token(Token = "0x4000CA0")]
	[FieldOffset(Offset = "0xA0")]
	public Length paddingLeft;

	[Token(Token = "0x4000CA1")]
	[FieldOffset(Offset = "0xA8")]
	public Length paddingRight;

	[Token(Token = "0x4000CA2")]
	[FieldOffset(Offset = "0xB0")]
	public Length paddingTop;

	[Token(Token = "0x4000CA3")]
	[FieldOffset(Offset = "0xB8")]
	public Position position;

	[Token(Token = "0x4000CA4")]
	[FieldOffset(Offset = "0xBC")]
	public Length right;

	[Token(Token = "0x4000CA5")]
	[FieldOffset(Offset = "0xC4")]
	public Length top;

	[Token(Token = "0x4000CA6")]
	[FieldOffset(Offset = "0xCC")]
	public Length width;

	[Token(Token = "0x6001D7A")]
	[Address(RVA = "0x30EF2B0", Offset = "0x30ED8B0", VA = "0x1830EF2B0", Slot = "4")]
	public LayoutData Copy()
	{
		return default(LayoutData);
	}

	[Token(Token = "0x6001D7B")]
	[Address(RVA = "0x30EF1C0", Offset = "0x30ED7C0", VA = "0x1830EF1C0", Slot = "5")]
	public void CopyFrom(ref LayoutData other)
	{
	}

	[Token(Token = "0x6001D7C")]
	[Address(RVA = "0x30EF890", Offset = "0x30EDE90", VA = "0x1830EF890")]
	public static bool operator ==(LayoutData lhs, LayoutData rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D7D")]
	[Address(RVA = "0x30EF4A0", Offset = "0x30EDAA0", VA = "0x1830EF4A0", Slot = "6")]
	public bool Equals(LayoutData other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D7E")]
	[Address(RVA = "0x30EF350", Offset = "0x30ED950", VA = "0x1830EF350", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D7F")]
	[Address(RVA = "0x30EF5F0", Offset = "0x30EDBF0", VA = "0x1830EF5F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
