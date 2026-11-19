// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.MaskedTextResultHint
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200018D")]
public enum MaskedTextResultHint
{
	[Token(Token = "0x4000639")]
	Unknown = 0,
	[Token(Token = "0x400063A")]
	CharacterEscaped = 1,
	[Token(Token = "0x400063B")]
	NoEffect = 2,
	[Token(Token = "0x400063C")]
	SideEffect = 3,
	[Token(Token = "0x400063D")]
	Success = 4,
	[Token(Token = "0x400063E")]
	AsciiCharacterExpected = -1,
	[Token(Token = "0x400063F")]
	AlphanumericCharacterExpected = -2,
	[Token(Token = "0x4000640")]
	DigitExpected = -3,
	[Token(Token = "0x4000641")]
	LetterExpected = -4,
	[Token(Token = "0x4000642")]
	SignedDigitExpected = -5,
	[Token(Token = "0x4000643")]
	InvalidInput = -51,
	[Token(Token = "0x4000644")]
	PromptCharNotAllowed = -52,
	[Token(Token = "0x4000645")]
	UnavailableEditPosition = -53,
	[Token(Token = "0x4000646")]
	NonEditPosition = -54,
	[Token(Token = "0x4000647")]
	PositionOutOfRange = -55
}
