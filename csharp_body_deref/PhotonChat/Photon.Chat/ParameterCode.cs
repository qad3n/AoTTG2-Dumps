using Il2CppDummyDll;

namespace Photon.Chat;

[Token(Token = "0x2000010")]
public class ParameterCode
{
	[Token(Token = "0x400008F")]
	public const byte ApplicationId = 224;

	[Token(Token = "0x4000090")]
	public const byte Secret = 221;

	[Token(Token = "0x4000091")]
	public const byte AppVersion = 220;

	[Token(Token = "0x4000092")]
	public const byte ClientAuthenticationType = 217;

	[Token(Token = "0x4000093")]
	public const byte ClientAuthenticationParams = 216;

	[Token(Token = "0x4000094")]
	public const byte ClientAuthenticationData = 214;

	[Token(Token = "0x4000095")]
	public const byte Region = 210;

	[Token(Token = "0x4000096")]
	public const byte Address = 230;

	[Token(Token = "0x4000097")]
	public const byte UserId = 225;

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x3BC3950", Offset = "0x3BC3950", VA = "0x3BC3950")]
	public ParameterCode()
	{
	}
}
