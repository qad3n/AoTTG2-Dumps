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

[Token(Token = "0x20000C1")]
internal ref struct DateTimeResult
{
	[Token(Token = "0x40002DD")]
	[FieldOffset(Offset = "0x0")]
	internal int Year;

	[Token(Token = "0x40002DE")]
	[FieldOffset(Offset = "0x4")]
	internal int Month;

	[Token(Token = "0x40002DF")]
	[FieldOffset(Offset = "0x8")]
	internal int Day;

	[Token(Token = "0x40002E0")]
	[FieldOffset(Offset = "0xC")]
	internal int Hour;

	[Token(Token = "0x40002E1")]
	[FieldOffset(Offset = "0x10")]
	internal int Minute;

	[Token(Token = "0x40002E2")]
	[FieldOffset(Offset = "0x14")]
	internal int Second;

	[Token(Token = "0x40002E3")]
	[FieldOffset(Offset = "0x18")]
	internal double fraction;

	[Token(Token = "0x40002E4")]
	[FieldOffset(Offset = "0x20")]
	internal int era;

	[Token(Token = "0x40002E5")]
	[FieldOffset(Offset = "0x24")]
	internal System.ParseFlags flags;

	[Token(Token = "0x40002E6")]
	[FieldOffset(Offset = "0x28")]
	internal TimeSpan timeZoneOffset;

	[Token(Token = "0x40002E7")]
	[FieldOffset(Offset = "0x30")]
	internal Calendar calendar;

	[Token(Token = "0x40002E8")]
	[FieldOffset(Offset = "0x38")]
	internal DateTime parsedDate;

	[Token(Token = "0x40002E9")]
	[FieldOffset(Offset = "0x40")]
	internal System.ParseFailureKind failure;

	[Token(Token = "0x40002EA")]
	[FieldOffset(Offset = "0x48")]
	internal string failureMessageID;

	[Token(Token = "0x40002EB")]
	[FieldOffset(Offset = "0x50")]
	internal object failureMessageFormatArgument;

	[Token(Token = "0x40002EC")]
	[FieldOffset(Offset = "0x58")]
	internal string failureArgumentName;

	[Token(Token = "0x40002ED")]
	[FieldOffset(Offset = "0x60")]
	internal ReadOnlySpan<char> originalDateTimeString;

	[Token(Token = "0x40002EE")]
	[FieldOffset(Offset = "0x70")]
	internal ReadOnlySpan<char> failedFormatSpecifier;

	[Token(Token = "0x6000755")]
	[Address(RVA = "0x54B1600", Offset = "0x54B0600", VA = "0x54B1600")]
	internal void Init(ReadOnlySpan<char> originalDateTimeString)
	{
	}

	[Token(Token = "0x6000756")]
	[Address(RVA = "0x54B1630", Offset = "0x54B0630", VA = "0x54B1630")]
	internal void SetDate(int year, int month, int day)
	{
	}

	[Token(Token = "0x6000757")]
	[Address(RVA = "0x54B1640", Offset = "0x54B0640", VA = "0x54B1640")]
	internal void SetBadFormatSpecifierFailure()
	{
	}

	[Token(Token = "0x6000758")]
	[Address(RVA = "0x54B16C0", Offset = "0x54B06C0", VA = "0x54B16C0")]
	internal void SetBadFormatSpecifierFailure(ReadOnlySpan<char> failedFormatSpecifier)
	{
	}

	[Token(Token = "0x6000759")]
	[Address(RVA = "0x54B1710", Offset = "0x54B0710", VA = "0x54B1710")]
	internal void SetBadDateTimeFailure()
	{
	}

	[Token(Token = "0x600075A")]
	[Address(RVA = "0x54B1750", Offset = "0x54B0750", VA = "0x54B1750")]
	internal void SetFailure(System.ParseFailureKind failure, string failureMessageID)
	{
	}

	[Token(Token = "0x600075B")]
	[Address(RVA = "0x54B1760", Offset = "0x54B0760", VA = "0x54B1760")]
	internal void SetFailure(System.ParseFailureKind failure, string failureMessageID, object failureMessageFormatArgument)
	{
	}

	[Token(Token = "0x600075C")]
	[Address(RVA = "0x54B1770", Offset = "0x54B0770", VA = "0x54B1770")]
	internal void SetFailure(System.ParseFailureKind failure, string failureMessageID, object failureMessageFormatArgument, string failureArgumentName)
	{
	}
}
