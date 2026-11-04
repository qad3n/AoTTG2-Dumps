// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.MaskedTextResultHint
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001CC")]
public enum MaskedTextResultHint
{
	[Token(Token = "0x4000708")]
	Unknown = 0,
	[Token(Token = "0x4000709")]
	CharacterEscaped = 1,
	[Token(Token = "0x400070A")]
	NoEffect = 2,
	[Token(Token = "0x400070B")]
	SideEffect = 3,
	[Token(Token = "0x400070C")]
	Success = 4,
	[Token(Token = "0x400070D")]
	AsciiCharacterExpected = -1,
	[Token(Token = "0x400070E")]
	AlphanumericCharacterExpected = -2,
	[Token(Token = "0x400070F")]
	DigitExpected = -3,
	[Token(Token = "0x4000710")]
	LetterExpected = -4,
	[Token(Token = "0x4000711")]
	SignedDigitExpected = -5,
	[Token(Token = "0x4000712")]
	InvalidInput = -51,
	[Token(Token = "0x4000713")]
	PromptCharNotAllowed = -52,
	[Token(Token = "0x4000714")]
	UnavailableEditPosition = -53,
	[Token(Token = "0x4000715")]
	NonEditPosition = -54,
	[Token(Token = "0x4000716")]
	PositionOutOfRange = -55
}
