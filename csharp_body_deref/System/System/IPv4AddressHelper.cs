// ==================== AoTTG2 cross-reference ====================
// Type: System.IPv4AddressHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000B2")]
internal static class IPv4AddressHelper
{
	[Token(Token = "0x600034F")]
	[Address(RVA = "0x282F290", Offset = "0x282D890", VA = "0x18282F290")]
	internal static int ParseHostNumber(ReadOnlySpan<char> str, int start, int end)
	{
		return default(int);
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x282EE10", Offset = "0x282D410", VA = "0x18282EE10")]
	internal unsafe static bool IsValid(char* name, int start, ref int end, bool allowIPv6, bool notImplicitFile, bool unknownScheme)
	{
		return default(bool);
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x282F200", Offset = "0x282D800", VA = "0x18282F200")]
	private unsafe static bool ParseCanonical(ReadOnlySpan<char> name, byte* numbers, int start, int end)
	{
		return default(bool);
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x282ED00", Offset = "0x282D300", VA = "0x18282ED00")]
	internal unsafe static bool IsValidCanonical(char* name, int start, ref int end, bool allowIPv6, bool notImplicitFile)
	{
		return default(bool);
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x282F400", Offset = "0x282DA00", VA = "0x18282F400")]
	internal unsafe static long ParseNonCanonical(char* name, int start, ref int end, bool notImplicitFile)
	{
		return default(long);
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x282EF70", Offset = "0x282D570", VA = "0x18282EF70")]
	internal static string ParseCanonicalName(string str, int start, int end, ref bool isLoopback)
	{
		return null;
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x282F690", Offset = "0x282DC90", VA = "0x18282F690")]
	private unsafe static bool Parse(string name, byte* numbers, int start, int end)
	{
		return default(bool);
	}
}
