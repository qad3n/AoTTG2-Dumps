using Il2CppDummyDll;

namespace Photon.Chat;

[Token(Token = "0x2000005")]
public class ChannelWellKnownProperties
{
	[Token(Token = "0x4000009")]
	public const byte MaxSubscribers = byte.MaxValue;

	[Token(Token = "0x400000A")]
	public const byte PublishSubscribers = 254;

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x3BBBDB0", Offset = "0x3BBBDB0", VA = "0x3BBBDB0")]
	public ChannelWellKnownProperties()
	{
	}
}
