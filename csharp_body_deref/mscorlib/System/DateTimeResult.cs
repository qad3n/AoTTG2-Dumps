// ==================== AoTTG2 cross-reference ====================
// Type: System.DateTimeResult
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000E9")]
internal ref struct DateTimeResult
{
	[Token(Token = "0x4000382")]
	[FieldOffset(Offset = "0x0")]
	internal int Year;

	[Token(Token = "0x4000383")]
	[FieldOffset(Offset = "0x4")]
	internal int Month;

	[Token(Token = "0x4000384")]
	[FieldOffset(Offset = "0x8")]
	internal int Day;

	[Token(Token = "0x4000385")]
	[FieldOffset(Offset = "0xC")]
	internal int Hour;

	[Token(Token = "0x4000386")]
	[FieldOffset(Offset = "0x10")]
	internal int Minute;

	[Token(Token = "0x4000387")]
	[FieldOffset(Offset = "0x14")]
	internal int Second;

	[Token(Token = "0x4000388")]
	[FieldOffset(Offset = "0x18")]
	internal double fraction;

	[Token(Token = "0x4000389")]
	[FieldOffset(Offset = "0x20")]
	internal int era;

	[Token(Token = "0x400038A")]
	[FieldOffset(Offset = "0x24")]
	internal System.ParseFlags flags;

	[Token(Token = "0x400038B")]
	[FieldOffset(Offset = "0x28")]
	internal TimeSpan timeZoneOffset;

	[Token(Token = "0x400038C")]
	[FieldOffset(Offset = "0x30")]
	internal Calendar calendar;

	[Token(Token = "0x400038D")]
	[FieldOffset(Offset = "0x38")]
	internal DateTime parsedDate;

	[Token(Token = "0x400038E")]
	[FieldOffset(Offset = "0x40")]
	internal System.ParseFailureKind failure;

	[Token(Token = "0x400038F")]
	[FieldOffset(Offset = "0x48")]
	internal string failureMessageID;

	[Token(Token = "0x4000390")]
	[FieldOffset(Offset = "0x50")]
	internal object failureMessageFormatArgument;

	[Token(Token = "0x4000391")]
	[FieldOffset(Offset = "0x58")]
	internal string failureArgumentName;

	[Token(Token = "0x4000392")]
	[FieldOffset(Offset = "0x60")]
	internal ReadOnlySpan<char> originalDateTimeString;

	[Token(Token = "0x4000393")]
	[FieldOffset(Offset = "0x70")]
	internal ReadOnlySpan<char> failedFormatSpecifier;

	[Token(Token = "0x600077A")]
	[Address(RVA = "0x1B237C0", Offset = "0x1B21DC0", VA = "0x181B237C0")]
	internal void Init(ReadOnlySpan<char> originalDateTimeString)
	{
	}

	[Token(Token = "0x600077B")]
	[Address(RVA = "0x10467A0", Offset = "0x1044DA0", VA = "0x1810467A0")]
	internal void SetDate(int year, int month, int day)
	{
	}

	[Token(Token = "0x600077C")]
	[Address(RVA = "0x1B23890", Offset = "0x1B21E90", VA = "0x181B23890")]
	internal void SetBadFormatSpecifierFailure()
	{
	}

	[Token(Token = "0x600077D")]
	[Address(RVA = "0x1B23840", Offset = "0x1B21E40", VA = "0x181B23840")]
	internal void SetBadFormatSpecifierFailure(ReadOnlySpan<char> failedFormatSpecifier)
	{
	}

	[Token(Token = "0x600077E")]
	[Address(RVA = "0x1B237F0", Offset = "0x1B21DF0", VA = "0x181B237F0")]
	internal void SetBadDateTimeFailure()
	{
	}

	[Token(Token = "0x600077F")]
	[Address(RVA = "0x1B23940", Offset = "0x1B21F40", VA = "0x181B23940")]
	internal void SetFailure(System.ParseFailureKind failure, string failureMessageID)
	{
	}

	[Token(Token = "0x6000780")]
	[Address(RVA = "0x1B23910", Offset = "0x1B21F10", VA = "0x181B23910")]
	internal void SetFailure(System.ParseFailureKind failure, string failureMessageID, object failureMessageFormatArgument)
	{
	}

	[Token(Token = "0x6000781")]
	[Address(RVA = "0x1B23920", Offset = "0x1B21F20", VA = "0x181B23920")]
	internal void SetFailure(System.ParseFailureKind failure, string failureMessageID, object failureMessageFormatArgument, string failureArgumentName)
	{
	}
}
