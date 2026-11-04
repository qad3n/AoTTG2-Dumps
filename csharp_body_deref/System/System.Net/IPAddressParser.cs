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

[Token(Token = "0x20002A6")]
internal class IPAddressParser
{
	[Token(Token = "0x6001296")]
	[Address(RVA = "0x29008A0", Offset = "0x28FEEA0", VA = "0x1829008A0")]
	internal static IPAddress Parse(ReadOnlySpan<char> ipSpan, bool tryParse)
	{
		return null;
	}

	[Token(Token = "0x6001297")]
	[Address(RVA = "0x29001A0", Offset = "0x28FE7A0", VA = "0x1829001A0")]
	internal static string IPv4AddressToString(uint address)
	{
		return null;
	}

	[Token(Token = "0x6001298")]
	[Address(RVA = "0x2900200", Offset = "0x28FE800", VA = "0x182900200")]
	internal static void IPv4AddressToString(uint address, StringBuilder destination)
	{
	}

	[Token(Token = "0x6001299")]
	[Address(RVA = "0x28FFE90", Offset = "0x28FE490", VA = "0x1828FFE90")]
	private unsafe static int IPv4AddressToStringHelper(uint address, char* addressString)
	{
		return default(int);
	}

	[Token(Token = "0x600129A")]
	[Address(RVA = "0x2900630", Offset = "0x28FEC30", VA = "0x182900630")]
	internal static string IPv6AddressToString(ushort[] address, uint scopeId)
	{
		return null;
	}

	[Token(Token = "0x600129B")]
	[Address(RVA = "0x2900270", Offset = "0x28FE870", VA = "0x182900270")]
	internal static StringBuilder IPv6AddressToStringHelper(ushort[] address, uint scopeId)
	{
		return null;
	}

	[Token(Token = "0x600129C")]
	[Address(RVA = "0x28FFDF0", Offset = "0x28FE3F0", VA = "0x1828FFDF0")]
	private unsafe static void FormatIPv4AddressNumber(int number, char* addressString, ref int offset)
	{
	}

	[Token(Token = "0x600129D")]
	[Address(RVA = "0x2900650", Offset = "0x28FEC50", VA = "0x182900650")]
	public static bool Ipv4StringToAddress(ReadOnlySpan<char> ipSpan, out long address)
	{
		return default(bool);
	}

	[Token(Token = "0x600129E")]
	[Address(RVA = "0x2900730", Offset = "0x28FED30", VA = "0x182900730")]
	public unsafe static bool Ipv6StringToAddress(ReadOnlySpan<char> ipSpan, ushort* numbers, int numbersLength, out uint scope)
	{
		return default(bool);
	}

	[Token(Token = "0x600129F")]
	[Address(RVA = "0x28FFC00", Offset = "0x28FE200", VA = "0x1828FFC00")]
	private static void AppendSections(ushort[] address, int fromInclusive, int toExclusive, StringBuilder buffer)
	{
	}

	[Token(Token = "0x60012A0")]
	[Address(RVA = "0x28FFB50", Offset = "0x28FE150", VA = "0x1828FFB50")]
	private static void AppendHex(ushort value, StringBuilder buffer)
	{
	}

	[Token(Token = "0x60012A1")]
	[Address(RVA = "0x28FFDA0", Offset = "0x28FE3A0", VA = "0x1828FFDA0")]
	private static uint ExtractIPv4Address(ushort[] address)
	{
		return default(uint);
	}

	[Token(Token = "0x60012A2")]
	[Address(RVA = "0x1ACCF30", Offset = "0x1ACB530", VA = "0x181ACCF30")]
	private static ushort Reverse(ushort number)
	{
		return default(ushort);
	}
}
