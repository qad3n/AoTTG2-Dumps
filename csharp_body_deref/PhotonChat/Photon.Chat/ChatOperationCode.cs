// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Chat.ChatOperationCode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonChat/Code/ChatOperationCode.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Chat;

[Token(Token = "0x2000009")]
public class ChatOperationCode
{
	[Token(Token = "0x4000050")]
	public const byte Authenticate = 230;

	[Token(Token = "0x4000051")]
	public const byte Subscribe = 0;

	[Token(Token = "0x4000052")]
	public const byte Unsubscribe = 1;

	[Token(Token = "0x4000053")]
	public const byte Publish = 2;

	[Token(Token = "0x4000054")]
	public const byte SendPrivate = 3;

	[Token(Token = "0x4000055")]
	public const byte ChannelHistory = 4;

	[Token(Token = "0x4000056")]
	public const byte UpdateStatus = 5;

	[Token(Token = "0x4000057")]
	public const byte AddFriends = 6;

	[Token(Token = "0x4000058")]
	public const byte RemoveFriends = 7;

	[Token(Token = "0x4000059")]
	public const byte SetProperties = 8;

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public ChatOperationCode()
	{
	}
}
