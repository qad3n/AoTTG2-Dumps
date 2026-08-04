// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.IPunOwnershipCallbacks
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/Code/Interfaces/IPunCallbacks.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Photon.Realtime;

namespace Photon.Pun;

[Token(Token = "0x200000F")]
public interface IPunOwnershipCallbacks
{
	[Token(Token = "0x600000B")]
	void OnOwnershipRequest(PhotonView targetView, Player requestingPlayer);

	[Token(Token = "0x600000C")]
	void OnOwnershipTransfered(PhotonView targetView, Player previousOwner);

	[Token(Token = "0x600000D")]
	void OnOwnershipTransferFailed(PhotonView targetView, Player senderOfFailedRequest);
}
