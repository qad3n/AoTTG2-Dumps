// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.UtilityScripts.IPunTurnManagerCallbacks
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/UtilityScripts/TurnBased/PunTurnManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Photon.Realtime;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x200002A")]
public interface IPunTurnManagerCallbacks
{
	[Token(Token = "0x60000E6")]
	void OnTurnBegins(int turn);

	[Token(Token = "0x60000E7")]
	void OnTurnCompleted(int turn);

	[Token(Token = "0x60000E8")]
	void OnPlayerMove(Player player, int turn, object move);

	[Token(Token = "0x60000E9")]
	void OnPlayerFinished(Player player, int turn, object move);

	[Token(Token = "0x60000EA")]
	void OnTurnTimeEnds(int turn);
}
