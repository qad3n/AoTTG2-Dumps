using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x200002F")]
public enum LobbySearchComparison
{
	[Token(Token = "0x400007D")]
	LessThanOrEqual = -2,
	[Token(Token = "0x400007E")]
	LessThan,
	[Token(Token = "0x400007F")]
	Equal,
	[Token(Token = "0x4000080")]
	GreaterThan,
	[Token(Token = "0x4000081")]
	GreaterThanOrEqual,
	[Token(Token = "0x4000082")]
	NotEqual
}
