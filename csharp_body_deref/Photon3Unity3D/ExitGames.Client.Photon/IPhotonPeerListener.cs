using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x200000F")]
public interface IPhotonPeerListener
{
	[Token(Token = "0x6000088")]
	void DebugReturn(DebugLevel level, string message);

	[Token(Token = "0x6000089")]
	void OnOperationResponse(OperationResponse operationResponse);

	[Token(Token = "0x600008A")]
	void OnStatusChanged(StatusCode statusCode);

	[Token(Token = "0x600008B")]
	void OnEvent(EventData eventData);
}
