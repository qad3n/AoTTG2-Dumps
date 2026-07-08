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
