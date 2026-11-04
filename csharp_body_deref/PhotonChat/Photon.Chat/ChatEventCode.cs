// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Chat.ChatEventCode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonChat/Code/ChatEventCode.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Chat;

[Token(Token = "0x2000008")]
public class ChatEventCode
{
	[Token(Token = "0x4000045")]
	public const byte ChatMessages = 0;

	[Token(Token = "0x4000046")]
	public const byte Users = 1;

	[Token(Token = "0x4000047")]
	public const byte PrivateMessage = 2;

	[Token(Token = "0x4000048")]
	public const byte FriendsList = 3;

	[Token(Token = "0x4000049")]
	public const byte StatusUpdate = 4;

	[Token(Token = "0x400004A")]
	public const byte Subscribe = 5;

	[Token(Token = "0x400004B")]
	public const byte Unsubscribe = 6;

	[Token(Token = "0x400004C")]
	public const byte PropertiesChanged = 7;

	[Token(Token = "0x400004D")]
	public const byte UserSubscribed = 8;

	[Token(Token = "0x400004E")]
	public const byte UserUnsubscribed = 9;

	[Token(Token = "0x400004F")]
	public const byte ErrorInfo = 10;

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public ChatEventCode()
	{
	}
}
