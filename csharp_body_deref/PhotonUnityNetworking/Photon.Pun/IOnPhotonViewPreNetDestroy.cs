// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.IOnPhotonViewPreNetDestroy
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/Code/Interfaces/IPhotonViewCallbacks.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Pun;

[Token(Token = "0x200000B")]
public interface IOnPhotonViewPreNetDestroy : IPhotonViewCallback
{
	[Token(Token = "0x6000007")]
	void OnPreNetDestroy(PhotonView rootView);
}
