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
