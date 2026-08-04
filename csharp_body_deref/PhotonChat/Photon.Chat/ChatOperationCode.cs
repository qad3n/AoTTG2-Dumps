// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Chat.ChatOperationCode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonChat/Code/ChatOperationCode.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Chat;

[Token(Token = "0x200000B")]
public class ChatOperationCode
{
	[Token(Token = "0x4000055")]
	public const byte Authenticate = 230;

	[Token(Token = "0x4000056")]
	public const byte Subscribe = 0;

	[Token(Token = "0x4000057")]
	public const byte Unsubscribe = 1;

	[Token(Token = "0x4000058")]
	public const byte Publish = 2;

	[Token(Token = "0x4000059")]
	public const byte SendPrivate = 3;

	[Token(Token = "0x400005A")]
	public const byte ChannelHistory = 4;

	[Token(Token = "0x400005B")]
	public const byte UpdateStatus = 5;

	[Token(Token = "0x400005C")]
	public const byte AddFriends = 6;

	[Token(Token = "0x400005D")]
	public const byte RemoveFriends = 7;

	[Token(Token = "0x400005E")]
	public const byte SetProperties = 8;

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x3EB8800", Offset = "0x3EB8800", VA = "0x3EB8800")]
	public ChatOperationCode()
	{
	}
}
