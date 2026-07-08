using ExitGames.Client.Photon;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x200001A")]
public interface IWebRpcCallback
{
	[Token(Token = "0x60000DB")]
	void OnWebRpcResponse(OperationResponse response);
}
