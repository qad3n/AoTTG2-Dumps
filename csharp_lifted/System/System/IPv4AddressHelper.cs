// ==================== AoTTG2 cross-reference ====================
// Type: System.IPv4AddressHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000073")]
internal static class IPv4AddressHelper
{
	[Token(Token = "0x600019B")]
	[Address(RVA = "0x5E43F00", Offset = "0x5E42F00", VA = "0x5E43F00")]
	internal static int ParseHostNumber(ReadOnlySpan<char> str, int start, int end)
	{
		return default(int);
	}

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x5E44120", Offset = "0x5E43120", VA = "0x5E44120")]
	internal unsafe static bool IsValid(char* name, int start, ref int end, bool allowIPv6, bool notImplicitFile, bool unknownScheme)
	{
		return default(bool);
	}

	[Token(Token = "0x600019D")]
	[Address(RVA = "0x5E43F20", Offset = "0x5E42F20", VA = "0x5E43F20")]
	private unsafe static bool ParseCanonical(ReadOnlySpan<char> name, byte* numbers, int start, int end)
	{
		return default(bool);
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x5E44150", Offset = "0x5E43150", VA = "0x5E44150")]
	internal unsafe static bool IsValidCanonical(char* name, int start, ref int end, bool allowIPv6, bool notImplicitFile)
	{
		return default(bool);
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x5E44430", Offset = "0x5E43430", VA = "0x5E44430")]
	internal unsafe static long ParseNonCanonical(char* name, int start, ref int end, bool notImplicitFile)
	{
		return default(long);
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x5E44730", Offset = "0x5E43730", VA = "0x5E44730")]
	internal static string ParseCanonicalName(string str, int start, int end, ref bool isLoopback)
	{
		return null;
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x5E44A00", Offset = "0x5E43A00", VA = "0x5E44A00")]
	private unsafe static bool Parse(string name, byte* numbers, int start, int end)
	{
		return default(bool);
	}
}
