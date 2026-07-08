using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000073")]
internal static class IPv4AddressHelper
{
	[Token(Token = "0x600019B")]
	[Address(RVA = "0x454A930", Offset = "0x454A930", VA = "0x454A930")]
	internal static int ParseHostNumber(ReadOnlySpan<char> str, int start, int end)
	{
		return default(int);
	}

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x454AB30", Offset = "0x454AB30", VA = "0x454AB30")]
	internal unsafe static bool IsValid(char* name, int start, ref int end, bool allowIPv6, bool notImplicitFile, bool unknownScheme)
	{
		return default(bool);
	}

	[Token(Token = "0x600019D")]
	[Address(RVA = "0x454A950", Offset = "0x454A950", VA = "0x454A950")]
	private unsafe static bool ParseCanonical(ReadOnlySpan<char> name, byte* numbers, int start, int end)
	{
		return default(bool);
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x454AB60", Offset = "0x454AB60", VA = "0x454AB60")]
	internal unsafe static bool IsValidCanonical(char* name, int start, ref int end, bool allowIPv6, bool notImplicitFile)
	{
		return default(bool);
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x454AEA0", Offset = "0x454AEA0", VA = "0x454AEA0")]
	internal unsafe static long ParseNonCanonical(char* name, int start, ref int end, bool notImplicitFile)
	{
		return default(long);
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x454B320", Offset = "0x454B320", VA = "0x454B320")]
	internal static string ParseCanonicalName(string str, int start, int end, ref bool isLoopback)
	{
		return null;
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x454B520", Offset = "0x454B520", VA = "0x454B520")]
	private unsafe static bool Parse(string name, byte* numbers, int start, int end)
	{
		return default(bool);
	}
}
