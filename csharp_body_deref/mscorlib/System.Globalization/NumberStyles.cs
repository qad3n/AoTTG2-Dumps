// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.NumberStyles
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Globalization;

[Token(Token = "0x200057D")]
[Flags]
public enum NumberStyles
{
	[Token(Token = "0x400169B")]
	None = 0,
	[Token(Token = "0x400169C")]
	AllowLeadingWhite = 1,
	[Token(Token = "0x400169D")]
	AllowTrailingWhite = 2,
	[Token(Token = "0x400169E")]
	AllowLeadingSign = 4,
	[Token(Token = "0x400169F")]
	AllowTrailingSign = 8,
	[Token(Token = "0x40016A0")]
	AllowParentheses = 0x10,
	[Token(Token = "0x40016A1")]
	AllowDecimalPoint = 0x20,
	[Token(Token = "0x40016A2")]
	AllowThousands = 0x40,
	[Token(Token = "0x40016A3")]
	AllowExponent = 0x80,
	[Token(Token = "0x40016A4")]
	AllowCurrencySymbol = 0x100,
	[Token(Token = "0x40016A5")]
	AllowHexSpecifier = 0x200,
	[Token(Token = "0x40016A6")]
	Integer = AllowLeadingWhite | AllowTrailingWhite | AllowLeadingSign,
	[Token(Token = "0x40016A7")]
	HexNumber = AllowLeadingWhite | AllowTrailingWhite | AllowHexSpecifier,
	[Token(Token = "0x40016A8")]
	Number = Integer | AllowTrailingSign | AllowDecimalPoint | AllowThousands,
	[Token(Token = "0x40016A9")]
	Float = Integer | AllowDecimalPoint | AllowExponent,
	[Token(Token = "0x40016AA")]
	Currency = Number | AllowParentheses | AllowCurrencySymbol,
	[Token(Token = "0x40016AB")]
	Any = Currency | AllowExponent
}
