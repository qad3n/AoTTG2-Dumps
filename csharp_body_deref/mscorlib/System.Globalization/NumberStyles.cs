// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.NumberStyles
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Globalization;

[Token(Token = "0x2000556")]
[Flags]
public enum NumberStyles
{
	[Token(Token = "0x40015FB")]
	None = 0,
	[Token(Token = "0x40015FC")]
	AllowLeadingWhite = 1,
	[Token(Token = "0x40015FD")]
	AllowTrailingWhite = 2,
	[Token(Token = "0x40015FE")]
	AllowLeadingSign = 4,
	[Token(Token = "0x40015FF")]
	AllowTrailingSign = 8,
	[Token(Token = "0x4001600")]
	AllowParentheses = 0x10,
	[Token(Token = "0x4001601")]
	AllowDecimalPoint = 0x20,
	[Token(Token = "0x4001602")]
	AllowThousands = 0x40,
	[Token(Token = "0x4001603")]
	AllowExponent = 0x80,
	[Token(Token = "0x4001604")]
	AllowCurrencySymbol = 0x100,
	[Token(Token = "0x4001605")]
	AllowHexSpecifier = 0x200,
	[Token(Token = "0x4001606")]
	Integer = AllowLeadingWhite | AllowTrailingWhite | AllowLeadingSign,
	[Token(Token = "0x4001607")]
	HexNumber = AllowLeadingWhite | AllowTrailingWhite | AllowHexSpecifier,
	[Token(Token = "0x4001608")]
	Number = Integer | AllowTrailingSign | AllowDecimalPoint | AllowThousands,
	[Token(Token = "0x4001609")]
	Float = Integer | AllowDecimalPoint | AllowExponent,
	[Token(Token = "0x400160A")]
	Currency = Number | AllowParentheses | AllowCurrencySymbol,
	[Token(Token = "0x400160B")]
	Any = Currency | AllowExponent
}
