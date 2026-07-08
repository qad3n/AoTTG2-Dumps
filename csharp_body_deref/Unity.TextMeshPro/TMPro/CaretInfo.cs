using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x200008C")]
public struct CaretInfo
{
	[Token(Token = "0x40004FF")]
	[FieldOffset(Offset = "0x0")]
	public int index;

	[Token(Token = "0x4000500")]
	[FieldOffset(Offset = "0x4")]
	public CaretPosition position;

	[Token(Token = "0x6000528")]
	[Address(RVA = "0x49481E0", Offset = "0x49481E0", VA = "0x49481E0")]
	public CaretInfo(int index, CaretPosition position)
	{
	}
}
