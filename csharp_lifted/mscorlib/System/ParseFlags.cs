// ==================== AoTTG2 cross-reference ====================
// Type: System.ParseFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000C0")]
[Flags]
internal enum ParseFlags
{
	[Token(Token = "0x40002CE")]
	HaveYear = 1,
	[Token(Token = "0x40002CF")]
	HaveMonth = 2,
	[Token(Token = "0x40002D0")]
	HaveDay = 4,
	[Token(Token = "0x40002D1")]
	HaveHour = 8,
	[Token(Token = "0x40002D2")]
	HaveMinute = 0x10,
	[Token(Token = "0x40002D3")]
	HaveSecond = 0x20,
	[Token(Token = "0x40002D4")]
	HaveTime = 0x40,
	[Token(Token = "0x40002D5")]
	HaveDate = 0x80,
	[Token(Token = "0x40002D6")]
	TimeZoneUsed = 0x100,
	[Token(Token = "0x40002D7")]
	TimeZoneUtc = 0x200,
	[Token(Token = "0x40002D8")]
	ParsedMonthName = 0x400,
	[Token(Token = "0x40002D9")]
	CaptureOffset = 0x800,
	[Token(Token = "0x40002DA")]
	YearDefault = 0x1000,
	[Token(Token = "0x40002DB")]
	Rfc1123Pattern = 0x2000,
	[Token(Token = "0x40002DC")]
	UtcSortPattern = 0x4000
}
