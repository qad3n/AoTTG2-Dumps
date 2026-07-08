using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000074")]
internal static class IPv6AddressHelper
{
	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x45D09C0", Offset = "0x45D09C0", VA = "0x45D09C0")]
	internal static (int, int) FindCompressionRange(ReadOnlySpan<ushort> numbers)
	{
		return default((int, int));
	}

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x45D0AF0", Offset = "0x45D0AF0", VA = "0x45D0AF0")]
	internal static bool ShouldHaveIpv4Embedded(ReadOnlySpan<ushort> numbers)
	{
		return default(bool);
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x45D0B90", Offset = "0x45D0B90", VA = "0x45D0B90")]
	internal unsafe static bool IsValidStrict(char* name, int start, ref int end)
	{
		return default(bool);
	}

	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x45D0FC0", Offset = "0x45D0FC0", VA = "0x45D0FC0")]
	internal unsafe static void Parse(ReadOnlySpan<char> address, ushort* numbers, int start, ref string scopeId)
	{
	}

	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x45D16B0", Offset = "0x45D16B0", VA = "0x45D16B0")]
	internal static string ParseCanonicalName(string str, int start, ref bool isLoopback, ref string scopeId)
	{
		return null;
	}

	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x45D1F80", Offset = "0x45D1F80", VA = "0x45D1F80")]
	private static bool IsLoopback(ReadOnlySpan<ushort> numbers)
	{
		return default(bool);
	}

	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x45D2030", Offset = "0x45D2030", VA = "0x45D2030")]
	private unsafe static bool InternalIsValid(char* name, int start, ref int end, bool validateStrictAddress)
	{
		return default(bool);
	}

	[Token(Token = "0x60001A9")]
	[Address(RVA = "0x45D23A0", Offset = "0x45D23A0", VA = "0x45D23A0")]
	internal unsafe static bool IsValid(char* name, int start, ref int end)
	{
		return default(bool);
	}
}
