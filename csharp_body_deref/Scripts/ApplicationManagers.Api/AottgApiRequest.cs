using Il2CppDummyDll;

namespace ApplicationManagers.Api;

[Token(Token = "0x2000765")]
public sealed class AottgApiRequest
{
	[Token(Token = "0x40023B9")]
	[FieldOffset(Offset = "0x10")]
	public string Method;

	[Token(Token = "0x40023BA")]
	[FieldOffset(Offset = "0x18")]
	public string Path;

	[Token(Token = "0x40023BB")]
	[FieldOffset(Offset = "0x20")]
	public string JsonBody;

	[Token(Token = "0x40023BC")]
	[FieldOffset(Offset = "0x28")]
	public string BearerToken;

	[Token(Token = "0x40023BD")]
	[FieldOffset(Offset = "0x30")]
	public int? TimeoutSeconds;

	[Token(Token = "0x40023BE")]
	[FieldOffset(Offset = "0x38")]
	public bool ParseJson;

	[Token(Token = "0x40023BF")]
	[FieldOffset(Offset = "0x39")]
	public bool ReportNetworkError;

	[Token(Token = "0x600479B")]
	[Address(RVA = "0x40AC0C0", Offset = "0x40AC0C0", VA = "0x40AC0C0")]
	public AottgApiRequest()
	{
	}
}
