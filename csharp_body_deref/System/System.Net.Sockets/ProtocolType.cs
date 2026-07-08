using Il2CppDummyDll;

namespace System.Net.Sockets;

[Token(Token = "0x20001FB")]
public enum ProtocolType
{
	[Token(Token = "0x4000A9D")]
	IP = 0,
	[Token(Token = "0x4000A9E")]
	IPv6HopByHopOptions = 0,
	[Token(Token = "0x4000A9F")]
	Icmp = 1,
	[Token(Token = "0x4000AA0")]
	Igmp = 2,
	[Token(Token = "0x4000AA1")]
	Ggp = 3,
	[Token(Token = "0x4000AA2")]
	IPv4 = 4,
	[Token(Token = "0x4000AA3")]
	Tcp = 6,
	[Token(Token = "0x4000AA4")]
	Pup = 12,
	[Token(Token = "0x4000AA5")]
	Udp = 17,
	[Token(Token = "0x4000AA6")]
	Idp = 22,
	[Token(Token = "0x4000AA7")]
	IPv6 = 41,
	[Token(Token = "0x4000AA8")]
	IPv6RoutingHeader = 43,
	[Token(Token = "0x4000AA9")]
	IPv6FragmentHeader = 44,
	[Token(Token = "0x4000AAA")]
	IPSecEncapsulatingSecurityPayload = 50,
	[Token(Token = "0x4000AAB")]
	IPSecAuthenticationHeader = 51,
	[Token(Token = "0x4000AAC")]
	IcmpV6 = 58,
	[Token(Token = "0x4000AAD")]
	IPv6NoNextHeader = 59,
	[Token(Token = "0x4000AAE")]
	IPv6DestinationOptions = 60,
	[Token(Token = "0x4000AAF")]
	ND = 77,
	[Token(Token = "0x4000AB0")]
	Raw = 255,
	[Token(Token = "0x4000AB1")]
	Unspecified = 0,
	[Token(Token = "0x4000AB2")]
	Ipx = 1000,
	[Token(Token = "0x4000AB3")]
	Spx = 1256,
	[Token(Token = "0x4000AB4")]
	SpxII = 1257,
	[Token(Token = "0x4000AB5")]
	Unknown = -1
}
