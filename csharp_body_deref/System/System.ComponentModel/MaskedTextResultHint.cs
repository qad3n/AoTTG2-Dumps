// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.MaskedTextResultHint
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002C1")]
public enum MaskedTextResultHint
{
	[Token(Token = "0x4000DD1")]
	Unknown = 0,
	[Token(Token = "0x4000DD2")]
	CharacterEscaped = 1,
	[Token(Token = "0x4000DD3")]
	NoEffect = 2,
	[Token(Token = "0x4000DD4")]
	SideEffect = 3,
	[Token(Token = "0x4000DD5")]
	Success = 4,
	[Token(Token = "0x4000DD6")]
	AsciiCharacterExpected = -1,
	[Token(Token = "0x4000DD7")]
	AlphanumericCharacterExpected = -2,
	[Token(Token = "0x4000DD8")]
	DigitExpected = -3,
	[Token(Token = "0x4000DD9")]
	LetterExpected = -4,
	[Token(Token = "0x4000DDA")]
	SignedDigitExpected = -5,
	[Token(Token = "0x4000DDB")]
	InvalidInput = -51,
	[Token(Token = "0x4000DDC")]
	PromptCharNotAllowed = -52,
	[Token(Token = "0x4000DDD")]
	UnavailableEditPosition = -53,
	[Token(Token = "0x4000DDE")]
	NonEditPosition = -54,
	[Token(Token = "0x4000DDF")]
	PositionOutOfRange = -55
}
