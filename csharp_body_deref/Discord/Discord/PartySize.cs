using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x200003D")]
public struct PartySize
{
	[Token(Token = "0x40000B6")]
	[FieldOffset(Offset = "0x0")]
	public int CurrentSize;

	[Token(Token = "0x40000B7")]
	[FieldOffset(Offset = "0x4")]
	public int MaxSize;
}
