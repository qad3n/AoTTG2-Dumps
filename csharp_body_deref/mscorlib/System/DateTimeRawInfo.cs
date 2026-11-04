// ==================== AoTTG2 cross-reference ====================
// Type: System.DateTimeRawInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000E6")]
internal struct DateTimeRawInfo
{
	[Token(Token = "0x4000360")]
	[FieldOffset(Offset = "0x0")]
	private unsafe int* num;

	[Token(Token = "0x4000361")]
	[FieldOffset(Offset = "0x8")]
	internal int numCount;

	[Token(Token = "0x4000362")]
	[FieldOffset(Offset = "0xC")]
	internal int month;

	[Token(Token = "0x4000363")]
	[FieldOffset(Offset = "0x10")]
	internal int year;

	[Token(Token = "0x4000364")]
	[FieldOffset(Offset = "0x14")]
	internal int dayOfWeek;

	[Token(Token = "0x4000365")]
	[FieldOffset(Offset = "0x18")]
	internal int era;

	[Token(Token = "0x4000366")]
	[FieldOffset(Offset = "0x1C")]
	internal System.DateTimeParse.TM timeMark;

	[Token(Token = "0x4000367")]
	[FieldOffset(Offset = "0x20")]
	internal double fraction;

	[Token(Token = "0x4000368")]
	[FieldOffset(Offset = "0x28")]
	internal bool hasSameDateAndTimeSeparators;

	[Token(Token = "0x6000777")]
	[Address(RVA = "0x1B23790", Offset = "0x1B21D90", VA = "0x181B23790")]
	internal unsafe void Init(int* numberBuffer)
	{
	}

	[Token(Token = "0x6000778")]
	[Address(RVA = "0x1B23770", Offset = "0x1B21D70", VA = "0x181B23770")]
	internal void AddNumber(int value)
	{
	}

	[Token(Token = "0x6000779")]
	[Address(RVA = "0xECBF00", Offset = "0xECA500", VA = "0x180ECBF00")]
	internal int GetNumber(int index)
	{
		return default(int);
	}
}
