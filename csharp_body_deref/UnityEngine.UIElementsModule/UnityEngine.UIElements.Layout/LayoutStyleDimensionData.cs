using Il2CppDummyDll;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x2000516")]
internal struct LayoutStyleDimensionData
{
	[Token(Token = "0x4001104")]
	[FieldOffset(Offset = "0x0")]
	public static LayoutStyleDimensionData Default;

	[Token(Token = "0x4001105")]
	[FieldOffset(Offset = "0x0")]
	public FixedBuffer2<LayoutValue> maxDimensions;

	[Token(Token = "0x4001106")]
	[FieldOffset(Offset = "0x10")]
	public FixedBuffer2<LayoutValue> minDimensions;

	[Token(Token = "0x4001107")]
	[FieldOffset(Offset = "0x20")]
	public FixedBuffer2<LayoutValue> dimensions;
}
