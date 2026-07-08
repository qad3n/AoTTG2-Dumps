using Il2CppDummyDll;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x2000513")]
internal struct LayoutStyleData
{
	[Token(Token = "0x40010EE")]
	[FieldOffset(Offset = "0x0")]
	public static LayoutStyleData Default;

	[Token(Token = "0x40010EF")]
	[FieldOffset(Offset = "0x0")]
	public LayoutDirection Direction;

	[Token(Token = "0x40010F0")]
	[FieldOffset(Offset = "0x4")]
	public LayoutFlexDirection FlexDirection;

	[Token(Token = "0x40010F1")]
	[FieldOffset(Offset = "0x8")]
	public LayoutJustify JustifyContent;

	[Token(Token = "0x40010F2")]
	[FieldOffset(Offset = "0xC")]
	public LayoutAlign AlignContent;

	[Token(Token = "0x40010F3")]
	[FieldOffset(Offset = "0x10")]
	public LayoutAlign AlignItems;

	[Token(Token = "0x40010F4")]
	[FieldOffset(Offset = "0x14")]
	public LayoutAlign AlignSelf;

	[Token(Token = "0x40010F5")]
	[FieldOffset(Offset = "0x18")]
	public LayoutPositionType PositionType;

	[Token(Token = "0x40010F6")]
	[FieldOffset(Offset = "0x1C")]
	public float AspectRatio;

	[Token(Token = "0x40010F7")]
	[FieldOffset(Offset = "0x20")]
	public LayoutWrap FlexWrap;

	[Token(Token = "0x40010F8")]
	[FieldOffset(Offset = "0x24")]
	public LayoutOverflow Overflow;

	[Token(Token = "0x40010F9")]
	[FieldOffset(Offset = "0x28")]
	public LayoutDisplay Display;

	[Token(Token = "0x40010FA")]
	[FieldOffset(Offset = "0x2C")]
	public float Flex;

	[Token(Token = "0x40010FB")]
	[FieldOffset(Offset = "0x30")]
	public float FlexGrow;

	[Token(Token = "0x40010FC")]
	[FieldOffset(Offset = "0x34")]
	public float FlexShrink;

	[Token(Token = "0x40010FD")]
	[FieldOffset(Offset = "0x38")]
	public LayoutValue FlexBasis;
}
