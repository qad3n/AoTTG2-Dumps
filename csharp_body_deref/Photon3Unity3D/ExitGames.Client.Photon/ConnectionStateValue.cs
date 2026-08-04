// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.ConnectionStateValue
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x200001F")]
public enum ConnectionStateValue : byte
{
	[Token(Token = "0x40000D4")]
	Disconnected = 0,
	[Token(Token = "0x40000D5")]
	Connecting = 1,
	[Token(Token = "0x40000D6")]
	Connected = 3,
	[Token(Token = "0x40000D7")]
	Disconnecting = 4,
	[Token(Token = "0x40000D8")]
	AcknowledgingDisconnect = 5,
	[Token(Token = "0x40000D9")]
	Zombie = 6
}
