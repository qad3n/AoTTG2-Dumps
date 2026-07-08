using Il2CppDummyDll;

namespace System.Globalization;

[Token(Token = "0x20005A9")]
[Flags]
public enum NumberStyles
{
	[Token(Token = "0x400184A")]
	None = 0,
	[Token(Token = "0x400184B")]
	AllowLeadingWhite = 1,
	[Token(Token = "0x400184C")]
	AllowTrailingWhite = 2,
	[Token(Token = "0x400184D")]
	AllowLeadingSign = 4,
	[Token(Token = "0x400184E")]
	AllowTrailingSign = 8,
	[Token(Token = "0x400184F")]
	AllowParentheses = 0x10,
	[Token(Token = "0x4001850")]
	AllowDecimalPoint = 0x20,
	[Token(Token = "0x4001851")]
	AllowThousands = 0x40,
	[Token(Token = "0x4001852")]
	AllowExponent = 0x80,
	[Token(Token = "0x4001853")]
	AllowCurrencySymbol = 0x100,
	[Token(Token = "0x4001854")]
	AllowHexSpecifier = 0x200,
	[Token(Token = "0x4001855")]
	Integer = 7,
	[Token(Token = "0x4001856")]
	HexNumber = 0x203,
	[Token(Token = "0x4001857")]
	Number = 0x6F,
	[Token(Token = "0x4001858")]
	Float = 0xA7,
	[Token(Token = "0x4001859")]
	Currency = 0x17F,
	[Token(Token = "0x400185A")]
	Any = 0x1FF
}
