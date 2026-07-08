using System.Globalization;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000C1")]
internal ref struct DateTimeResult
{
	[Token(Token = "0x40002F7")]
	[FieldOffset(Offset = "0x0")]
	internal int Year;

	[Token(Token = "0x40002F8")]
	[FieldOffset(Offset = "0x4")]
	internal int Month;

	[Token(Token = "0x40002F9")]
	[FieldOffset(Offset = "0x8")]
	internal int Day;

	[Token(Token = "0x40002FA")]
	[FieldOffset(Offset = "0xC")]
	internal int Hour;

	[Token(Token = "0x40002FB")]
	[FieldOffset(Offset = "0x10")]
	internal int Minute;

	[Token(Token = "0x40002FC")]
	[FieldOffset(Offset = "0x14")]
	internal int Second;

	[Token(Token = "0x40002FD")]
	[FieldOffset(Offset = "0x18")]
	internal double fraction;

	[Token(Token = "0x40002FE")]
	[FieldOffset(Offset = "0x20")]
	internal int era;

	[Token(Token = "0x40002FF")]
	[FieldOffset(Offset = "0x24")]
	internal System.ParseFlags flags;

	[Token(Token = "0x4000300")]
	[FieldOffset(Offset = "0x28")]
	internal TimeSpan timeZoneOffset;

	[Token(Token = "0x4000301")]
	[FieldOffset(Offset = "0x30")]
	internal Calendar calendar;

	[Token(Token = "0x4000302")]
	[FieldOffset(Offset = "0x38")]
	internal DateTime parsedDate;

	[Token(Token = "0x4000303")]
	[FieldOffset(Offset = "0x40")]
	internal System.ParseFailureKind failure;

	[Token(Token = "0x4000304")]
	[FieldOffset(Offset = "0x48")]
	internal string failureMessageID;

	[Token(Token = "0x4000305")]
	[FieldOffset(Offset = "0x50")]
	internal object failureMessageFormatArgument;

	[Token(Token = "0x4000306")]
	[FieldOffset(Offset = "0x58")]
	internal string failureArgumentName;

	[Token(Token = "0x4000307")]
	[FieldOffset(Offset = "0x60")]
	internal ReadOnlySpan<char> originalDateTimeString;

	[Token(Token = "0x4000308")]
	[FieldOffset(Offset = "0x70")]
	internal ReadOnlySpan<char> failedFormatSpecifier;

	[Token(Token = "0x600074B")]
	[Address(RVA = "0x4FC88F0", Offset = "0x4FC88F0", VA = "0x4FC88F0")]
	internal void Init(ReadOnlySpan<char> originalDateTimeString)
	{
	}

	[Token(Token = "0x600074C")]
	[Address(RVA = "0x4FC8920", Offset = "0x4FC8920", VA = "0x4FC8920")]
	internal void SetDate(int year, int month, int day)
	{
	}

	[Token(Token = "0x600074D")]
	[Address(RVA = "0x4FC8930", Offset = "0x4FC8930", VA = "0x4FC8930")]
	internal void SetBadFormatSpecifierFailure()
	{
	}

	[Token(Token = "0x600074E")]
	[Address(RVA = "0x4FC89B0", Offset = "0x4FC89B0", VA = "0x4FC89B0")]
	internal void SetBadFormatSpecifierFailure(ReadOnlySpan<char> failedFormatSpecifier)
	{
	}

	[Token(Token = "0x600074F")]
	[Address(RVA = "0x4FC8A00", Offset = "0x4FC8A00", VA = "0x4FC8A00")]
	internal void SetBadDateTimeFailure()
	{
	}

	[Token(Token = "0x6000750")]
	[Address(RVA = "0x4FC8A40", Offset = "0x4FC8A40", VA = "0x4FC8A40")]
	internal void SetFailure(System.ParseFailureKind failure, string failureMessageID)
	{
	}

	[Token(Token = "0x6000751")]
	[Address(RVA = "0x4FC8A50", Offset = "0x4FC8A50", VA = "0x4FC8A50")]
	internal void SetFailure(System.ParseFailureKind failure, string failureMessageID, object failureMessageFormatArgument)
	{
	}

	[Token(Token = "0x6000752")]
	[Address(RVA = "0x4FC8A60", Offset = "0x4FC8A60", VA = "0x4FC8A60")]
	internal void SetFailure(System.ParseFailureKind failure, string failureMessageID, object failureMessageFormatArgument, string failureArgumentName)
	{
	}
}
