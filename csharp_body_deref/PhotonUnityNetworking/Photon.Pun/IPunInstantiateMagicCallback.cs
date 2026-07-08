using Il2CppDummyDll;

namespace Photon.Pun;

[Token(Token = "0x2000010")]
public interface IPunInstantiateMagicCallback
{
	[Token(Token = "0x600000E")]
	void OnPhotonInstantiate(PhotonMessageInfo info);
}
