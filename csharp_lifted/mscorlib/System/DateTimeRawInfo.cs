// ==================== AoTTG2 cross-reference ====================
// Type: System.DateTimeRawInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000BE")]
internal struct DateTimeRawInfo
{
	[Token(Token = "0x40002BB")]
	[FieldOffset(Offset = "0x0")]
	private unsafe int* num;

	[Token(Token = "0x40002BC")]
	[FieldOffset(Offset = "0x8")]
	internal int numCount;

	[Token(Token = "0x40002BD")]
	[FieldOffset(Offset = "0xC")]
	internal int month;

	[Token(Token = "0x40002BE")]
	[FieldOffset(Offset = "0x10")]
	internal int year;

	[Token(Token = "0x40002BF")]
	[FieldOffset(Offset = "0x14")]
	internal int dayOfWeek;

	[Token(Token = "0x40002C0")]
	[FieldOffset(Offset = "0x18")]
	internal int era;

	[Token(Token = "0x40002C1")]
	[FieldOffset(Offset = "0x1C")]
	internal System.DateTimeParse.TM timeMark;

	[Token(Token = "0x40002C2")]
	[FieldOffset(Offset = "0x20")]
	internal double fraction;

	[Token(Token = "0x40002C3")]
	[FieldOffset(Offset = "0x28")]
	internal bool hasSameDateAndTimeSeparators;

	[Token(Token = "0x6000752")]
	[Address(RVA = "0x54B15A0", Offset = "0x54B05A0", VA = "0x54B15A0")]
	internal unsafe void Init(int* numberBuffer)
	{
	}

	[Token(Token = "0x6000753")]
	[Address(RVA = "0x54B15D0", Offset = "0x54B05D0", VA = "0x54B15D0")]
	internal void AddNumber(int value)
	{
	}

	[Token(Token = "0x6000754")]
	[Address(RVA = "0x54B15F0", Offset = "0x54B05F0", VA = "0x54B15F0")]
	internal int GetNumber(int index)
	{
		return default(int);
	}
}
