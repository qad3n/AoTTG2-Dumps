using System.Collections.Generic;
using Il2CppDummyDll;

namespace ApplicationManagers.Api;

[Token(Token = "0x2000768")]
public sealed class AottgApiTransportRequest
{
	[Token(Token = "0x40023CC")]
	[FieldOffset(Offset = "0x10")]
	public string Method;

	[Token(Token = "0x40023CD")]
	[FieldOffset(Offset = "0x18")]
	public string Url;

	[Token(Token = "0x40023CE")]
	[FieldOffset(Offset = "0x20")]
	public string JsonBody;

	[Token(Token = "0x40023CF")]
	[FieldOffset(Offset = "0x28")]
	public int? TimeoutSeconds;

	[Token(Token = "0x40023D0")]
	[FieldOffset(Offset = "0x30")]
	public Dictionary<string, string> Headers;

	[Token(Token = "0x60047AD")]
	[Address(RVA = "0x40AFBD0", Offset = "0x40AFBD0", VA = "0x40AFBD0")]
	public AottgApiTransportRequest()
	{
	}
}
