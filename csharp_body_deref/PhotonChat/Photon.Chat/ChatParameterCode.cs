using Il2CppDummyDll;

namespace Photon.Chat;

[Token(Token = "0x200000C")]
public class ChatParameterCode
{
	[Token(Token = "0x400005F")]
	public const byte Channels = 0;

	[Token(Token = "0x4000060")]
	public const byte Channel = 1;

	[Token(Token = "0x4000061")]
	public const byte Messages = 2;

	[Token(Token = "0x4000062")]
	public const byte Message = 3;

	[Token(Token = "0x4000063")]
	public const byte Senders = 4;

	[Token(Token = "0x4000064")]
	public const byte Sender = 5;

	[Token(Token = "0x4000065")]
	public const byte ChannelUserCount = 6;

	[Token(Token = "0x4000066")]
	public const byte UserId = 225;

	[Token(Token = "0x4000067")]
	public const byte MsgId = 8;

	[Token(Token = "0x4000068")]
	public const byte MsgIds = 9;

	[Token(Token = "0x4000069")]
	public const byte Secret = 221;

	[Token(Token = "0x400006A")]
	public const byte SubscribeResults = 15;

	[Token(Token = "0x400006B")]
	public const byte Status = 10;

	[Token(Token = "0x400006C")]
	public const byte Friends = 11;

	[Token(Token = "0x400006D")]
	public const byte SkipMessage = 12;

	[Token(Token = "0x400006E")]
	public const byte HistoryLength = 14;

	[Token(Token = "0x400006F")]
	public const byte DebugMessage = 17;

	[Token(Token = "0x4000070")]
	public const byte WebFlags = 21;

	[Token(Token = "0x4000071")]
	public const byte Properties = 22;

	[Token(Token = "0x4000072")]
	public const byte ChannelSubscribers = 23;

	[Token(Token = "0x4000073")]
	public const byte DebugData = 24;

	[Token(Token = "0x4000074")]
	public const byte ExpectedValues = 25;

	[Token(Token = "0x4000075")]
	public const byte Broadcast = 26;

	[Token(Token = "0x4000076")]
	public const byte UserProperties = 28;

	[Token(Token = "0x4000077")]
	public const byte UniqueRoomId = 29;

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x3BC2EC0", Offset = "0x3BC2EC0", VA = "0x3BC2EC0")]
	public ChatParameterCode()
	{
	}
}
