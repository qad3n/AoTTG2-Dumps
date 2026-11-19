// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.IPAddressParser
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000267")]
internal class IPAddressParser
{
	[Token(Token = "0x60010D8")]
	[Address(RVA = "0x6292D00", Offset = "0x6291D00", VA = "0x6292D00")]
	internal static IPAddress Parse(ReadOnlySpan<char> ipSpan, bool tryParse)
	{
		return null;
	}

	[Token(Token = "0x60010D9")]
	[Address(RVA = "0x6293480", Offset = "0x6292480", VA = "0x6293480")]
	internal static string IPv4AddressToString(uint address)
	{
		return null;
	}

	[Token(Token = "0x60010DA")]
	[Address(RVA = "0x62944E0", Offset = "0x62934E0", VA = "0x62944E0")]
	internal static void IPv4AddressToString(uint address, StringBuilder destination)
	{
	}

	[Token(Token = "0x60010DB")]
	[Address(RVA = "0x6294210", Offset = "0x6293210", VA = "0x6294210")]
	private unsafe static int IPv4AddressToStringHelper(uint address, char* addressString)
	{
		return default(int);
	}

	[Token(Token = "0x60010DC")]
	[Address(RVA = "0x6293460", Offset = "0x6292460", VA = "0x6293460")]
	internal static string IPv6AddressToString(ushort[] address, uint scopeId)
	{
		return null;
	}

	[Token(Token = "0x60010DD")]
	[Address(RVA = "0x62945E0", Offset = "0x62935E0", VA = "0x62945E0")]
	internal static StringBuilder IPv6AddressToStringHelper(ushort[] address, uint scopeId)
	{
		return null;
	}

	[Token(Token = "0x60010DE")]
	[Address(RVA = "0x6294520", Offset = "0x6293520", VA = "0x6294520")]
	private unsafe static void FormatIPv4AddressNumber(int number, char* addressString, ref int offset)
	{
	}

	[Token(Token = "0x60010DF")]
	[Address(RVA = "0x6294180", Offset = "0x6293180", VA = "0x6294180")]
	public static bool Ipv4StringToAddress(ReadOnlySpan<char> ipSpan, out long address)
	{
		return default(bool);
	}

	[Token(Token = "0x60010E0")]
	[Address(RVA = "0x6294040", Offset = "0x6293040", VA = "0x6294040")]
	public unsafe static bool Ipv6StringToAddress(ReadOnlySpan<char> ipSpan, ushort* numbers, int numbersLength, out uint scope)
	{
		return default(bool);
	}

	[Token(Token = "0x60010E1")]
	[Address(RVA = "0x6294730", Offset = "0x6293730", VA = "0x6294730")]
	private static void AppendSections(ushort[] address, int fromInclusive, int toExclusive, StringBuilder buffer)
	{
	}

	[Token(Token = "0x60010E2")]
	[Address(RVA = "0x6294AB0", Offset = "0x6293AB0", VA = "0x6294AB0")]
	private static void AppendHex(ushort value, StringBuilder buffer)
	{
	}

	[Token(Token = "0x60010E3")]
	[Address(RVA = "0x6294A80", Offset = "0x6293A80", VA = "0x6294A80")]
	private static uint ExtractIPv4Address(ushort[] address)
	{
		return default(uint);
	}

	[Token(Token = "0x60010E4")]
	[Address(RVA = "0x6294B10", Offset = "0x6293B10", VA = "0x6294B10")]
	private static ushort Reverse(ushort number)
	{
		return default(ushort);
	}
}
