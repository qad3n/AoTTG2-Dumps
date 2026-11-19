// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.PeerStateValue
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x2000028")]
public enum PeerStateValue : byte
{
	[Token(Token = "0x4000122")]
	Disconnected = 0,
	[Token(Token = "0x4000123")]
	Connecting = 1,
	[Token(Token = "0x4000124")]
	InitializingApplication = 10,
	[Token(Token = "0x4000125")]
	Connected = 3,
	[Token(Token = "0x4000126")]
	Disconnecting = 4
}
