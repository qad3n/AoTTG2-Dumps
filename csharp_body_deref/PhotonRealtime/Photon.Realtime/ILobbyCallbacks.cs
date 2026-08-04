// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.ILobbyCallbacks
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/LoadBalancingClient.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000016")]
public interface ILobbyCallbacks
{
	[Token(Token = "0x60000CA")]
	void OnJoinedLobby();

	[Token(Token = "0x60000CB")]
	void OnLeftLobby();

	[Token(Token = "0x60000CC")]
	void OnRoomListUpdate(List<RoomInfo> roomList);

	[Token(Token = "0x60000CD")]
	void OnLobbyStatisticsUpdate(List<TypedLobbyInfo> lobbyStatistics);
}
