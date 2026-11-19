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

[Token(Token = "0x20000C2")]
internal struct ParsingInfo
{
	[Token(Token = "0x40002EF")]
	[FieldOffset(Offset = "0x0")]
	internal Calendar calendar;

	[Token(Token = "0x40002F0")]
	[FieldOffset(Offset = "0x8")]
	internal int dayOfWeek;

	[Token(Token = "0x40002F1")]
	[FieldOffset(Offset = "0xC")]
	internal System.DateTimeParse.TM timeMark;

	[Token(Token = "0x40002F2")]
	[FieldOffset(Offset = "0x10")]
	internal bool fUseHour12;

	[Token(Token = "0x40002F3")]
	[FieldOffset(Offset = "0x11")]
	internal bool fUseTwoDigitYear;

	[Token(Token = "0x40002F4")]
	[FieldOffset(Offset = "0x12")]
	internal bool fAllowInnerWhite;

	[Token(Token = "0x40002F5")]
	[FieldOffset(Offset = "0x13")]
	internal bool fAllowTrailingWhite;

	[Token(Token = "0x40002F6")]
	[FieldOffset(Offset = "0x14")]
	internal bool fCustomNumberParser;

	[Token(Token = "0x40002F7")]
	[FieldOffset(Offset = "0x18")]
	internal System.DateTimeParse.MatchNumberDelegate parseNumberDelegate;

	[Token(Token = "0x600075D")]
	[Address(RVA = "0x54B1780", Offset = "0x54B0780", VA = "0x54B1780")]
	internal void Init()
	{
	}
}
