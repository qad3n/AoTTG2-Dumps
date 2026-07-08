using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x2000041")]
public struct Presence
{
	[Token(Token = "0x40000C9")]
	[FieldOffset(Offset = "0x0")]
	public Status Status;

	[Token(Token = "0x40000CA")]
	[FieldOffset(Offset = "0x8")]
	public Activity Activity;
}
