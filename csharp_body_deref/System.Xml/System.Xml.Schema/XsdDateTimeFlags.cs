using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200027D")]
[Flags]
internal enum XsdDateTimeFlags
{
	[Token(Token = "0x4000D79")]
	DateTime = 1,
	[Token(Token = "0x4000D7A")]
	Time = 2,
	[Token(Token = "0x4000D7B")]
	Date = 4,
	[Token(Token = "0x4000D7C")]
	GYearMonth = 8,
	[Token(Token = "0x4000D7D")]
	GYear = 0x10,
	[Token(Token = "0x4000D7E")]
	GMonthDay = 0x20,
	[Token(Token = "0x4000D7F")]
	GDay = 0x40,
	[Token(Token = "0x4000D80")]
	GMonth = 0x80,
	[Token(Token = "0x4000D81")]
	XdrDateTimeNoTz = 0x100,
	[Token(Token = "0x4000D82")]
	XdrDateTime = 0x200,
	[Token(Token = "0x4000D83")]
	XdrTimeNoTz = 0x400,
	[Token(Token = "0x4000D84")]
	AllXsd = 0xFF
}
