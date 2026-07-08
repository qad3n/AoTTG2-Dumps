using Il2CppDummyDll;

namespace Photon.Pun;

[Token(Token = "0x200000B")]
public interface IOnPhotonViewPreNetDestroy : IPhotonViewCallback
{
	[Token(Token = "0x6000007")]
	void OnPreNetDestroy(PhotonView rootView);
}
