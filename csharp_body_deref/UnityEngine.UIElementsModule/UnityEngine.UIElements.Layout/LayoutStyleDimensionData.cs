// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Layout.LayoutStyleDimensionData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
