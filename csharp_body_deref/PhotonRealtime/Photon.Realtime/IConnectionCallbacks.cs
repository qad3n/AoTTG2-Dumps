using System.Collections.Generic;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000015")]
public interface IConnectionCallbacks
{
	[Token(Token = "0x60000C4")]
	void OnConnected();

	[Token(Token = "0x60000C5")]
	void OnConnectedToMaster();

	[Token(Token = "0x60000C6")]
	void OnDisconnected(DisconnectCause cause);

	[Token(Token = "0x60000C7")]
	void OnRegionListReceived(RegionHandler regionHandler);

	[Token(Token = "0x60000C8")]
	void OnCustomAuthenticationResponse(Dictionary<string, object> data);

	[Token(Token = "0x60000C9")]
	void OnCustomAuthenticationFailed(string debugMessage);
}
