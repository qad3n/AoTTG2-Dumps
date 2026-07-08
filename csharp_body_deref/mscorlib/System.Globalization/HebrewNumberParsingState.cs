using Il2CppDummyDll;

namespace System.Globalization;

[Token(Token = "0x20005A4")]
internal enum HebrewNumberParsingState
{
	[Token(Token = "0x4001820")]
	InvalidHebrewNumber,
	[Token(Token = "0x4001821")]
	NotHebrewDigit,
	[Token(Token = "0x4001822")]
	FoundEndOfHebrewNumber,
	[Token(Token = "0x4001823")]
	ContinueParsing
}
