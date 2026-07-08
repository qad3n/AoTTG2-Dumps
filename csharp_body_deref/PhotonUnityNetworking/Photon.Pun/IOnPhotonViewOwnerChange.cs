using Il2CppDummyDll;
using Photon.Realtime;

namespace Photon.Pun;

[Token(Token = "0x200000C")]
public interface IOnPhotonViewOwnerChange : IPhotonViewCallback
{
	[Token(Token = "0x6000008")]
	void OnOwnerChange(Player newOwner, Player previousOwner);
}
