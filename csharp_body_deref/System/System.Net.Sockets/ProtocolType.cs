// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Sockets.ProtocolType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.Sockets;

[Token(Token = "0x2000388")]
public enum ProtocolType
{
	[Token(Token = "0x4000ECC")]
	IP = 0,
	[Token(Token = "0x4000ECD")]
	IPv6HopByHopOptions = IP,
	[Token(Token = "0x4000ECE")]
	Icmp = 1,
	[Token(Token = "0x4000ECF")]
	Igmp = 2,
	[Token(Token = "0x4000ED0")]
	Ggp = 3,
	[Token(Token = "0x4000ED1")]
	IPv4 = 4,
	[Token(Token = "0x4000ED2")]
	Tcp = 6,
	[Token(Token = "0x4000ED3")]
	Pup = 12,
	[Token(Token = "0x4000ED4")]
	Udp = 17,
	[Token(Token = "0x4000ED5")]
	Idp = 22,
	[Token(Token = "0x4000ED6")]
	IPv6 = 41,
	[Token(Token = "0x4000ED7")]
	IPv6RoutingHeader = 43,
	[Token(Token = "0x4000ED8")]
	IPv6FragmentHeader = 44,
	[Token(Token = "0x4000ED9")]
	IPSecEncapsulatingSecurityPayload = 50,
	[Token(Token = "0x4000EDA")]
	IPSecAuthenticationHeader = 51,
	[Token(Token = "0x4000EDB")]
	IcmpV6 = 58,
	[Token(Token = "0x4000EDC")]
	IPv6NoNextHeader = 59,
	[Token(Token = "0x4000EDD")]
	IPv6DestinationOptions = 60,
	[Token(Token = "0x4000EDE")]
	ND = 77,
	[Token(Token = "0x4000EDF")]
	Raw = 255,
	[Token(Token = "0x4000EE0")]
	Unspecified = IP,
	[Token(Token = "0x4000EE1")]
	Ipx = 1000,
	[Token(Token = "0x4000EE2")]
	Spx = 1256,
	[Token(Token = "0x4000EE3")]
	SpxII = 1257,
	[Token(Token = "0x4000EE4")]
	Unknown = -1
}
