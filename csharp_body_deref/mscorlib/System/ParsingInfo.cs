// ==================== AoTTG2 cross-reference ====================
// Type: System.ParsingInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000EA")]
internal struct ParsingInfo
{
	[Token(Token = "0x4000394")]
	[FieldOffset(Offset = "0x0")]
	internal Calendar calendar;

	[Token(Token = "0x4000395")]
	[FieldOffset(Offset = "0x8")]
	internal int dayOfWeek;

	[Token(Token = "0x4000396")]
	[FieldOffset(Offset = "0xC")]
	internal System.DateTimeParse.TM timeMark;

	[Token(Token = "0x4000397")]
	[FieldOffset(Offset = "0x10")]
	internal bool fUseHour12;

	[Token(Token = "0x4000398")]
	[FieldOffset(Offset = "0x11")]
	internal bool fUseTwoDigitYear;

	[Token(Token = "0x4000399")]
	[FieldOffset(Offset = "0x12")]
	internal bool fAllowInnerWhite;

	[Token(Token = "0x400039A")]
	[FieldOffset(Offset = "0x13")]
	internal bool fAllowTrailingWhite;

	[Token(Token = "0x400039B")]
	[FieldOffset(Offset = "0x14")]
	internal bool fCustomNumberParser;

	[Token(Token = "0x400039C")]
	[FieldOffset(Offset = "0x18")]
	internal System.DateTimeParse.MatchNumberDelegate parseNumberDelegate;

	[Token(Token = "0x6000782")]
	[Address(RVA = "0x1B3BE20", Offset = "0x1B3A420", VA = "0x181B3BE20")]
	internal void Init()
	{
	}
}
