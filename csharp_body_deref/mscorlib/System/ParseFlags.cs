// ==================== AoTTG2 cross-reference ====================
// Type: System.ParseFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000E8")]
[Flags]
internal enum ParseFlags
{
	[Token(Token = "0x4000373")]
	HaveYear = 1,
	[Token(Token = "0x4000374")]
	HaveMonth = 2,
	[Token(Token = "0x4000375")]
	HaveDay = 4,
	[Token(Token = "0x4000376")]
	HaveHour = 8,
	[Token(Token = "0x4000377")]
	HaveMinute = 0x10,
	[Token(Token = "0x4000378")]
	HaveSecond = 0x20,
	[Token(Token = "0x4000379")]
	HaveTime = 0x40,
	[Token(Token = "0x400037A")]
	HaveDate = 0x80,
	[Token(Token = "0x400037B")]
	TimeZoneUsed = 0x100,
	[Token(Token = "0x400037C")]
	TimeZoneUtc = 0x200,
	[Token(Token = "0x400037D")]
	ParsedMonthName = 0x400,
	[Token(Token = "0x400037E")]
	CaptureOffset = 0x800,
	[Token(Token = "0x400037F")]
	YearDefault = 0x1000,
	[Token(Token = "0x4000380")]
	Rfc1123Pattern = 0x2000,
	[Token(Token = "0x4000381")]
	UtcSortPattern = 0x4000
}
