// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.IOnPhotonViewControllerChange
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/Code/Interfaces/IPhotonViewCallbacks.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Photon.Realtime;

namespace Photon.Pun;

[Token(Token = "0x200000D")]
public interface IOnPhotonViewControllerChange : IPhotonViewCallback
{
	[Token(Token = "0x6000009")]
	void OnControllerChange(Player newController, Player previousController);
}
