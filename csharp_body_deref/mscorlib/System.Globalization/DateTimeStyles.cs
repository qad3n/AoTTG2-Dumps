using Il2CppDummyDll;

namespace System.Globalization;

[Token(Token = "0x20005A1")]
[Flags]
public enum DateTimeStyles
{
	[Token(Token = "0x4001810")]
	None = 0,
	[Token(Token = "0x4001811")]
	AllowLeadingWhite = 1,
	[Token(Token = "0x4001812")]
	AllowTrailingWhite = 2,
	[Token(Token = "0x4001813")]
	AllowInnerWhite = 4,
	[Token(Token = "0x4001814")]
	AllowWhiteSpaces = 7,
	[Token(Token = "0x4001815")]
	NoCurrentDateDefault = 8,
	[Token(Token = "0x4001816")]
	AdjustToUniversal = 0x10,
	[Token(Token = "0x4001817")]
	AssumeLocal = 0x20,
	[Token(Token = "0x4001818")]
	AssumeUniversal = 0x40,
	[Token(Token = "0x4001819")]
	RoundtripKind = 0x80
}
