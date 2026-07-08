using System.Globalization;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000C2")]
internal struct ParsingInfo
{
	[Token(Token = "0x4000309")]
	[FieldOffset(Offset = "0x0")]
	internal Calendar calendar;

	[Token(Token = "0x400030A")]
	[FieldOffset(Offset = "0x8")]
	internal int dayOfWeek;

	[Token(Token = "0x400030B")]
	[FieldOffset(Offset = "0xC")]
	internal System.DateTimeParse.TM timeMark;

	[Token(Token = "0x400030C")]
	[FieldOffset(Offset = "0x10")]
	internal bool fUseHour12;

	[Token(Token = "0x400030D")]
	[FieldOffset(Offset = "0x11")]
	internal bool fUseTwoDigitYear;

	[Token(Token = "0x400030E")]
	[FieldOffset(Offset = "0x12")]
	internal bool fAllowInnerWhite;

	[Token(Token = "0x400030F")]
	[FieldOffset(Offset = "0x13")]
	internal bool fAllowTrailingWhite;

	[Token(Token = "0x4000310")]
	[FieldOffset(Offset = "0x14")]
	internal bool fCustomNumberParser;

	[Token(Token = "0x4000311")]
	[FieldOffset(Offset = "0x18")]
	internal System.DateTimeParse.MatchNumberDelegate parseNumberDelegate;

	[Token(Token = "0x6000753")]
	[Address(RVA = "0x4FC8A70", Offset = "0x4FC8A70", VA = "0x4FC8A70")]
	internal void Init()
	{
	}
}
