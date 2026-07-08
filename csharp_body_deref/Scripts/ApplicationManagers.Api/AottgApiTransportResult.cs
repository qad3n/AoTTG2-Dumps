using Il2CppDummyDll;

namespace ApplicationManagers.Api;

[Token(Token = "0x2000767")]
public enum AottgApiTransportResult
{
	[Token(Token = "0x40023C8")]
	Success,
	[Token(Token = "0x40023C9")]
	ConnectionError,
	[Token(Token = "0x40023CA")]
	ProtocolError,
	[Token(Token = "0x40023CB")]
	DataProcessingError
}
