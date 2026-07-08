using Il2CppDummyDll;
using Photon.Realtime;

namespace Photon.Pun;

[Token(Token = "0x200000D")]
public interface IOnPhotonViewControllerChange : IPhotonViewCallback
{
	[Token(Token = "0x6000009")]
	void OnControllerChange(Player newController, Player previousController);
}
