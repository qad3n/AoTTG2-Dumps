// ==================== AoTTG2 cross-reference ====================
// Type: System.IPv6AddressHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000B3")]
internal static class IPv6AddressHelper
{
	[Token(Token = "0x6000356")]
	[Address(RVA = "0x282F710", Offset = "0x282DD10", VA = "0x18282F710")]
	internal static (int, int) FindCompressionRange(ReadOnlySpan<ushort> numbers)
	{
		return default((int, int));
	}

	[Token(Token = "0x6000357")]
	[Address(RVA = "0x2830A90", Offset = "0x282F090", VA = "0x182830A90")]
	internal static bool ShouldHaveIpv4Embedded(ReadOnlySpan<ushort> numbers)
	{
		return default(bool);
	}

	[Token(Token = "0x6000358")]
	[Address(RVA = "0x282FB60", Offset = "0x282E160", VA = "0x18282FB60")]
	internal unsafe static bool IsValidStrict(char* name, int start, ref int end)
	{
		return default(bool);
	}

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x28306A0", Offset = "0x282ECA0", VA = "0x1828306A0")]
	internal unsafe static void Parse(ReadOnlySpan<char> address, ushort* numbers, int start, ref string scopeId)
	{
	}

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x282FEC0", Offset = "0x282E4C0", VA = "0x18282FEC0")]
	internal static string ParseCanonicalName(string str, int start, ref bool isLoopback, ref string scopeId)
	{
		return null;
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x282FA90", Offset = "0x282E090", VA = "0x18282FA90")]
	private static bool IsLoopback(ReadOnlySpan<ushort> numbers)
	{
		return default(bool);
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x282F7E0", Offset = "0x282DDE0", VA = "0x18282F7E0")]
	private unsafe static bool InternalIsValid(char* name, int start, ref int end, bool validateStrictAddress)
	{
		return default(bool);
	}

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x282FEA0", Offset = "0x282E4A0", VA = "0x18282FEA0")]
	internal unsafe static bool IsValid(char* name, int start, ref int end)
	{
		return default(bool);
	}
}
