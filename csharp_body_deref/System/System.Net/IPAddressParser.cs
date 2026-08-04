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

[Token(Token = "0x200011E")]
internal class IPAddressParser
{
	[Token(Token = "0x60006D7")]
	[Address(RVA = "0x4949B40", Offset = "0x4949B40", VA = "0x4949B40")]
	internal static IPAddress Parse(ReadOnlySpan<char> ipSpan, bool tryParse)
	{
		return null;
	}

	[Token(Token = "0x60006D8")]
	[Address(RVA = "0x494A2F0", Offset = "0x494A2F0", VA = "0x494A2F0")]
	internal static string IPv4AddressToString(uint address)
	{
		return null;
	}

	[Token(Token = "0x60006D9")]
	[Address(RVA = "0x494B420", Offset = "0x494B420", VA = "0x494B420")]
	internal static void IPv4AddressToString(uint address, StringBuilder destination)
	{
	}

	[Token(Token = "0x60006DA")]
	[Address(RVA = "0x494B100", Offset = "0x494B100", VA = "0x494B100")]
	private unsafe static int IPv4AddressToStringHelper(uint address, char* addressString)
	{
		return default(int);
	}

	[Token(Token = "0x60006DB")]
	[Address(RVA = "0x494A2D0", Offset = "0x494A2D0", VA = "0x494A2D0")]
	internal static string IPv6AddressToString(ushort[] address, uint scopeId)
	{
		return null;
	}

	[Token(Token = "0x60006DC")]
	[Address(RVA = "0x494B530", Offset = "0x494B530", VA = "0x494B530")]
	internal static StringBuilder IPv6AddressToStringHelper(ushort[] address, uint scopeId)
	{
		return null;
	}

	[Token(Token = "0x60006DD")]
	[Address(RVA = "0x494B460", Offset = "0x494B460", VA = "0x494B460")]
	private unsafe static void FormatIPv4AddressNumber(int number, char* addressString, ref int offset)
	{
	}

	[Token(Token = "0x60006DE")]
	[Address(RVA = "0x494B040", Offset = "0x494B040", VA = "0x494B040")]
	public static bool Ipv4StringToAddress(ReadOnlySpan<char> ipSpan, out long address)
	{
		return default(bool);
	}

	[Token(Token = "0x60006DF")]
	[Address(RVA = "0x494AEF0", Offset = "0x494AEF0", VA = "0x494AEF0")]
	public unsafe static bool Ipv6StringToAddress(ReadOnlySpan<char> ipSpan, ushort* numbers, int numbersLength, out uint scope)
	{
		return default(bool);
	}

	[Token(Token = "0x60006E0")]
	[Address(RVA = "0x494B690", Offset = "0x494B690", VA = "0x494B690")]
	private static void AppendSections(ushort[] address, int fromInclusive, int toExclusive, StringBuilder buffer)
	{
	}

	[Token(Token = "0x60006E1")]
	[Address(RVA = "0x494B9F0", Offset = "0x494B9F0", VA = "0x494B9F0")]
	private static void AppendHex(ushort value, StringBuilder buffer)
	{
	}

	[Token(Token = "0x60006E2")]
	[Address(RVA = "0x494B9C0", Offset = "0x494B9C0", VA = "0x494B9C0")]
	private static uint ExtractIPv4Address(ushort[] address)
	{
		return default(uint);
	}

	[Token(Token = "0x60006E3")]
	[Address(RVA = "0x494BA60", Offset = "0x494BA60", VA = "0x494BA60")]
	private static ushort Reverse(ushort number)
	{
		return default(ushort);
	}
}
