// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.IMatchmakingCallbacks
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/LoadBalancingClient.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000017")]
public interface IMatchmakingCallbacks
{
	[Token(Token = "0x60000CE")]
	void OnFriendListUpdate(List<FriendInfo> friendList);

	[Token(Token = "0x60000CF")]
	void OnCreatedRoom();

	[Token(Token = "0x60000D0")]
	void OnCreateRoomFailed(short returnCode, string message);

	[Token(Token = "0x60000D1")]
	void OnJoinedRoom();

	[Token(Token = "0x60000D2")]
	void OnJoinRoomFailed(short returnCode, string message);

	[Token(Token = "0x60000D3")]
	void OnJoinRandomFailed(short returnCode, string message);

	[Token(Token = "0x60000D4")]
	void OnLeftRoom();
}
