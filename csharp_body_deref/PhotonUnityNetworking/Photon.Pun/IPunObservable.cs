using Il2CppDummyDll;

namespace Photon.Pun;

[Token(Token = "0x200000E")]
public interface IPunObservable
{
	[Token(Token = "0x600000A")]
	void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info);
}
