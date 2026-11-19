// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.ConnectionProtocol
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x2000029")]
public enum ConnectionProtocol : byte
{
	[Token(Token = "0x4000128")]
	Udp = 0,
	[Token(Token = "0x4000129")]
	Tcp = 1,
	[Token(Token = "0x400012A")]
	WebSocket = 4,
	[Token(Token = "0x400012B")]
	WebSocketSecure = 5
}
