// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.IConnectionCallbacks
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/LoadBalancingClient.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000015")]
public interface IConnectionCallbacks
{
	[Token(Token = "0x60000C4")]
	void OnConnected();

	[Token(Token = "0x60000C5")]
	void OnConnectedToMaster();

	[Token(Token = "0x60000C6")]
	void OnDisconnected(DisconnectCause cause);

	[Token(Token = "0x60000C7")]
	void OnRegionListReceived(RegionHandler regionHandler);

	[Token(Token = "0x60000C8")]
	void OnCustomAuthenticationResponse(Dictionary<string, object> data);

	[Token(Token = "0x60000C9")]
	void OnCustomAuthenticationFailed(string debugMessage);
}
