using Il2CppDummyDll;

namespace System.Net.Sockets;

[Token(Token = "0x2000200")]
public enum SocketOptionLevel
{
	[Token(Token = "0x4000B01")]
	Socket = 65535,
	[Token(Token = "0x4000B02")]
	IP = 0,
	[Token(Token = "0x4000B03")]
	IPv6 = 41,
	[Token(Token = "0x4000B04")]
	Tcp = 6,
	[Token(Token = "0x4000B05")]
	Udp = 17
}
