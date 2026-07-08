using Il2CppDummyDll;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x2000514")]
internal struct LayoutStyleBorderData
{
	[Token(Token = "0x40010FE")]
	[FieldOffset(Offset = "0x0")]
	public static LayoutStyleBorderData Default;

	[Token(Token = "0x40010FF")]
	[FieldOffset(Offset = "0x0")]
	public FixedBuffer9<LayoutValue> border;

	[Token(Token = "0x4001100")]
	[FieldOffset(Offset = "0x48")]
	public FixedBuffer9<LayoutValue> position;
}
