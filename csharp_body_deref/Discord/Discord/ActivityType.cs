using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x2000028")]
public enum ActivityType
{
	[Token(Token = "0x400005E")]
	Playing,
	[Token(Token = "0x400005F")]
	Streaming,
	[Token(Token = "0x4000060")]
	Listening,
	[Token(Token = "0x4000061")]
	Watching
}
