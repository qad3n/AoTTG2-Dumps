using Il2CppDummyDll;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x2000503")]
internal struct LayoutCachedMeasurement
{
	[Token(Token = "0x40010B2")]
	[FieldOffset(Offset = "0x0")]
	public static LayoutCachedMeasurement Default;

	[Token(Token = "0x40010B3")]
	[FieldOffset(Offset = "0x0")]
	public float AvailableWidth;

	[Token(Token = "0x40010B4")]
	[FieldOffset(Offset = "0x4")]
	public float AvailableHeight;

	[Token(Token = "0x40010B5")]
	[FieldOffset(Offset = "0x8")]
	public float ParentWidth;

	[Token(Token = "0x40010B6")]
	[FieldOffset(Offset = "0xC")]
	public float ParentHeight;

	[Token(Token = "0x40010B7")]
	[FieldOffset(Offset = "0x10")]
	public LayoutMeasureMode WidthMeasureMode;

	[Token(Token = "0x40010B8")]
	[FieldOffset(Offset = "0x14")]
	public LayoutMeasureMode HeightMeasureMode;

	[Token(Token = "0x40010B9")]
	[FieldOffset(Offset = "0x18")]
	public float ComputedWidth;

	[Token(Token = "0x40010BA")]
	[FieldOffset(Offset = "0x1C")]
	public float ComputedHeight;
}
