// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.IPhotonPeerListener
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
