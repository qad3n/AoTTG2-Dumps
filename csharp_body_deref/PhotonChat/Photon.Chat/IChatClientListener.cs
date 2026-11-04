// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Chat.IChatClientListener
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonChat/Code/IChatClientListener.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using ExitGames.Client.Photon;
using Il2CppDummyDll;

namespace Photon.Chat;

[Token(Token = "0x2000012")]
public interface IChatClientListener
{
	[Token(Token = "0x6000087")]
	void DebugReturn(DebugLevel level, string message);

	[Token(Token = "0x6000088")]
	void OnDisconnected();

	[Token(Token = "0x6000089")]
	void OnConnected();

	[Token(Token = "0x600008A")]
	void OnChatStateChange(ChatState state);

	[Token(Token = "0x600008B")]
	void OnGetMessages(string channelName, string[] senders, object[] messages);

	[Token(Token = "0x600008C")]
	void OnPrivateMessage(string sender, object message, string channelName);

	[Token(Token = "0x600008D")]
	void OnSubscribed(string[] channels, bool[] results);

	[Token(Token = "0x600008E")]
	void OnUnsubscribed(string[] channels);

	[Token(Token = "0x600008F")]
	void OnStatusUpdate(string user, int status, bool gotMessage, object message);

	[Token(Token = "0x6000090")]
	void OnUserSubscribed(string channel, string user);

	[Token(Token = "0x6000091")]
	void OnUserUnsubscribed(string channel, string user);
}
