// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Sockets.ProtocolType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.Sockets;

[Token(Token = "0x2000344")]
public enum ProtocolType
{
	[Token(Token = "0x4000DE4")]
	IP = 0,
	[Token(Token = "0x4000DE5")]
	IPv6HopByHopOptions = IP,
	[Token(Token = "0x4000DE6")]
	Icmp = 1,
	[Token(Token = "0x4000DE7")]
	Igmp = 2,
	[Token(Token = "0x4000DE8")]
	Ggp = 3,
	[Token(Token = "0x4000DE9")]
	IPv4 = 4,
	[Token(Token = "0x4000DEA")]
	Tcp = 6,
	[Token(Token = "0x4000DEB")]
	Pup = 12,
	[Token(Token = "0x4000DEC")]
	Udp = 17,
	[Token(Token = "0x4000DED")]
	Idp = 22,
	[Token(Token = "0x4000DEE")]
	IPv6 = 41,
	[Token(Token = "0x4000DEF")]
	IPv6RoutingHeader = 43,
	[Token(Token = "0x4000DF0")]
	IPv6FragmentHeader = 44,
	[Token(Token = "0x4000DF1")]
	IPSecEncapsulatingSecurityPayload = 50,
	[Token(Token = "0x4000DF2")]
	IPSecAuthenticationHeader = 51,
	[Token(Token = "0x4000DF3")]
	IcmpV6 = 58,
	[Token(Token = "0x4000DF4")]
	IPv6NoNextHeader = 59,
	[Token(Token = "0x4000DF5")]
	IPv6DestinationOptions = 60,
	[Token(Token = "0x4000DF6")]
	ND = 77,
	[Token(Token = "0x4000DF7")]
	Raw = 255,
	[Token(Token = "0x4000DF8")]
	Unspecified = IP,
	[Token(Token = "0x4000DF9")]
	Ipx = 1000,
	[Token(Token = "0x4000DFA")]
	Spx = 1256,
	[Token(Token = "0x4000DFB")]
	SpxII = 1257,
	[Token(Token = "0x4000DFC")]
	Unknown = -1
}
