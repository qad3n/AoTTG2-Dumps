using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000BE")]
internal struct DateTimeRawInfo
{
	[Token(Token = "0x40002D5")]
	[FieldOffset(Offset = "0x0")]
	private unsafe int* num;

	[Token(Token = "0x40002D6")]
	[FieldOffset(Offset = "0x8")]
	internal int numCount;

	[Token(Token = "0x40002D7")]
	[FieldOffset(Offset = "0xC")]
	internal int month;

	[Token(Token = "0x40002D8")]
	[FieldOffset(Offset = "0x10")]
	internal int year;

	[Token(Token = "0x40002D9")]
	[FieldOffset(Offset = "0x14")]
	internal int dayOfWeek;

	[Token(Token = "0x40002DA")]
	[FieldOffset(Offset = "0x18")]
	internal int era;

	[Token(Token = "0x40002DB")]
	[FieldOffset(Offset = "0x1C")]
	internal System.DateTimeParse.TM timeMark;

	[Token(Token = "0x40002DC")]
	[FieldOffset(Offset = "0x20")]
	internal double fraction;

	[Token(Token = "0x40002DD")]
	[FieldOffset(Offset = "0x28")]
	internal bool hasSameDateAndTimeSeparators;

	[Token(Token = "0x6000748")]
	[Address(RVA = "0x4FC8890", Offset = "0x4FC8890", VA = "0x4FC8890")]
	internal unsafe void Init(int* numberBuffer)
	{
	}

	[Token(Token = "0x6000749")]
	[Address(RVA = "0x4FC88C0", Offset = "0x4FC88C0", VA = "0x4FC88C0")]
	internal void AddNumber(int value)
	{
	}

	[Token(Token = "0x600074A")]
	[Address(RVA = "0x4FC88E0", Offset = "0x4FC88E0", VA = "0x4FC88E0")]
	internal int GetNumber(int index)
	{
		return default(int);
	}
}
