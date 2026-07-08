using ExitGames.Client.Photon;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000019")]
public interface IOnEventCallback
{
	[Token(Token = "0x60000DA")]
	void OnEvent(EventData photonEvent);
}
