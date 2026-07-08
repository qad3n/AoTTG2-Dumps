using System.Text;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200011E")]
internal class IPAddressParser
{
	[Token(Token = "0x60006D7")]
	[Address(RVA = "0x4624A40", Offset = "0x4624A40", VA = "0x4624A40")]
	internal static IPAddress Parse(ReadOnlySpan<char> ipSpan, bool tryParse)
	{
		return null;
	}

	[Token(Token = "0x60006D8")]
	[Address(RVA = "0x46251F0", Offset = "0x46251F0", VA = "0x46251F0")]
	internal static string IPv4AddressToString(uint address)
	{
		return null;
	}

	[Token(Token = "0x60006D9")]
	[Address(RVA = "0x4626320", Offset = "0x4626320", VA = "0x4626320")]
	internal static void IPv4AddressToString(uint address, StringBuilder destination)
	{
	}

	[Token(Token = "0x60006DA")]
	[Address(RVA = "0x4626000", Offset = "0x4626000", VA = "0x4626000")]
	private unsafe static int IPv4AddressToStringHelper(uint address, char* addressString)
	{
		return default(int);
	}

	[Token(Token = "0x60006DB")]
	[Address(RVA = "0x46251D0", Offset = "0x46251D0", VA = "0x46251D0")]
	internal static string IPv6AddressToString(ushort[] address, uint scopeId)
	{
		return null;
	}

	[Token(Token = "0x60006DC")]
	[Address(RVA = "0x4626430", Offset = "0x4626430", VA = "0x4626430")]
	internal static StringBuilder IPv6AddressToStringHelper(ushort[] address, uint scopeId)
	{
		return null;
	}

	[Token(Token = "0x60006DD")]
	[Address(RVA = "0x4626360", Offset = "0x4626360", VA = "0x4626360")]
	private unsafe static void FormatIPv4AddressNumber(int number, char* addressString, ref int offset)
	{
	}

	[Token(Token = "0x60006DE")]
	[Address(RVA = "0x4625F40", Offset = "0x4625F40", VA = "0x4625F40")]
	public static bool Ipv4StringToAddress(ReadOnlySpan<char> ipSpan, out long address)
	{
		return default(bool);
	}

	[Token(Token = "0x60006DF")]
	[Address(RVA = "0x4625DF0", Offset = "0x4625DF0", VA = "0x4625DF0")]
	public unsafe static bool Ipv6StringToAddress(ReadOnlySpan<char> ipSpan, ushort* numbers, int numbersLength, out uint scope)
	{
		return default(bool);
	}

	[Token(Token = "0x60006E0")]
	[Address(RVA = "0x4626590", Offset = "0x4626590", VA = "0x4626590")]
	private static void AppendSections(ushort[] address, int fromInclusive, int toExclusive, StringBuilder buffer)
	{
	}

	[Token(Token = "0x60006E1")]
	[Address(RVA = "0x46268F0", Offset = "0x46268F0", VA = "0x46268F0")]
	private static void AppendHex(ushort value, StringBuilder buffer)
	{
	}

	[Token(Token = "0x60006E2")]
	[Address(RVA = "0x46268C0", Offset = "0x46268C0", VA = "0x46268C0")]
	private static uint ExtractIPv4Address(ushort[] address)
	{
		return default(uint);
	}

	[Token(Token = "0x60006E3")]
	[Address(RVA = "0x4626960", Offset = "0x4626960", VA = "0x4626960")]
	private static ushort Reverse(ushort number)
	{
		return default(ushort);
	}
}
