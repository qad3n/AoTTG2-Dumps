using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000C0")]
[Flags]
internal enum ParseFlags
{
	[Token(Token = "0x40002E8")]
	HaveYear = 1,
	[Token(Token = "0x40002E9")]
	HaveMonth = 2,
	[Token(Token = "0x40002EA")]
	HaveDay = 4,
	[Token(Token = "0x40002EB")]
	HaveHour = 8,
	[Token(Token = "0x40002EC")]
	HaveMinute = 0x10,
	[Token(Token = "0x40002ED")]
	HaveSecond = 0x20,
	[Token(Token = "0x40002EE")]
	HaveTime = 0x40,
	[Token(Token = "0x40002EF")]
	HaveDate = 0x80,
	[Token(Token = "0x40002F0")]
	TimeZoneUsed = 0x100,
	[Token(Token = "0x40002F1")]
	TimeZoneUtc = 0x200,
	[Token(Token = "0x40002F2")]
	ParsedMonthName = 0x400,
	[Token(Token = "0x40002F3")]
	CaptureOffset = 0x800,
	[Token(Token = "0x40002F4")]
	YearDefault = 0x1000,
	[Token(Token = "0x40002F5")]
	Rfc1123Pattern = 0x2000,
	[Token(Token = "0x40002F6")]
	UtcSortPattern = 0x4000
}
