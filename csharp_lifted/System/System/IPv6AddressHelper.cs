// ==================== AoTTG2 cross-reference ====================
// Type: System.IPv6AddressHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000074")]
internal static class IPv6AddressHelper
{
	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x61D25B0", Offset = "0x61D15B0", VA = "0x61D25B0")]
	internal static (int, int) FindCompressionRange(ReadOnlySpan<ushort> numbers)
	{
		return default((int, int));
	}

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x61D26D0", Offset = "0x61D16D0", VA = "0x61D26D0")]
	internal static bool ShouldHaveIpv4Embedded(ReadOnlySpan<ushort> numbers)
	{
		return default(bool);
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x61D2770", Offset = "0x61D1770", VA = "0x61D2770")]
	internal unsafe static bool IsValidStrict(char* name, int start, ref int end)
	{
		return default(bool);
	}

	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x61D2AF0", Offset = "0x61D1AF0", VA = "0x61D2AF0")]
	internal unsafe static void Parse(ReadOnlySpan<char> address, ushort* numbers, int start, ref string scopeId)
	{
	}

	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x61D3070", Offset = "0x61D2070", VA = "0x61D3070")]
	internal static string ParseCanonicalName(string str, int start, ref bool isLoopback, ref string scopeId)
	{
		return null;
	}

	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x61D3720", Offset = "0x61D2720", VA = "0x61D3720")]
	private static bool IsLoopback(ReadOnlySpan<ushort> numbers)
	{
		return default(bool);
	}

	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x61D37D0", Offset = "0x61D27D0", VA = "0x61D37D0")]
	private unsafe static bool InternalIsValid(char* name, int start, ref int end, bool validateStrictAddress)
	{
		return default(bool);
	}

	[Token(Token = "0x60001A9")]
	[Address(RVA = "0x61D3A90", Offset = "0x61D2A90", VA = "0x61D3A90")]
	internal unsafe static bool IsValid(char* name, int start, ref int end)
	{
		return default(bool);
	}
}
