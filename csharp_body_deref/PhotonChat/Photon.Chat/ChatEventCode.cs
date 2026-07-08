using Il2CppDummyDll;

namespace Photon.Chat;

[Token(Token = "0x200000A")]
public class ChatEventCode
{
	[Token(Token = "0x400004A")]
	public const byte ChatMessages = 0;

	[Token(Token = "0x400004B")]
	public const byte Users = 1;

	[Token(Token = "0x400004C")]
	public const byte PrivateMessage = 2;

	[Token(Token = "0x400004D")]
	public const byte FriendsList = 3;

	[Token(Token = "0x400004E")]
	public const byte StatusUpdate = 4;

	[Token(Token = "0x400004F")]
	public const byte Subscribe = 5;

	[Token(Token = "0x4000050")]
	public const byte Unsubscribe = 6;

	[Token(Token = "0x4000051")]
	public const byte PropertiesChanged = 7;

	[Token(Token = "0x4000052")]
	public const byte UserSubscribed = 8;

	[Token(Token = "0x4000053")]
	public const byte UserUnsubscribed = 9;

	[Token(Token = "0x4000054")]
	public const byte ErrorInfo = 10;

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x3BC2EA0", Offset = "0x3BC2EA0", VA = "0x3BC2EA0")]
	public ChatEventCode()
	{
	}
}
