// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.IInRoomCallbacks
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/LoadBalancingClient.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using ExitGames.Client.Photon;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000018")]
public interface IInRoomCallbacks
{
	[Token(Token = "0x60000D5")]
	void OnPlayerEnteredRoom(Player newPlayer);

	[Token(Token = "0x60000D6")]
	void OnPlayerLeftRoom(Player otherPlayer);

	[Token(Token = "0x60000D7")]
	void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged);

	[Token(Token = "0x60000D8")]
	void OnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProps);

	[Token(Token = "0x60000D9")]
	void OnMasterClientSwitched(Player newMasterClient);
}
