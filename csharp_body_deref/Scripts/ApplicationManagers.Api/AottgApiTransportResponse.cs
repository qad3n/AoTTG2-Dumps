using Il2CppDummyDll;

namespace ApplicationManagers.Api;

[Token(Token = "0x2000769")]
public sealed class AottgApiTransportResponse
{
	[Token(Token = "0x40023D1")]
	[FieldOffset(Offset = "0x10")]
	public AottgApiTransportResult Result;

	[Token(Token = "0x40023D2")]
	[FieldOffset(Offset = "0x18")]
	public long StatusCode;

	[Token(Token = "0x40023D3")]
	[FieldOffset(Offset = "0x20")]
	public string Text;

	[Token(Token = "0x40023D4")]
	[FieldOffset(Offset = "0x28")]
	public string Error;

	[Token(Token = "0x60047AE")]
	[Address(RVA = "0x40B1580", Offset = "0x40B1580", VA = "0x40B1580")]
	public AottgApiTransportResponse()
	{
	}
}
