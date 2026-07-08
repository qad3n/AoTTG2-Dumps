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
