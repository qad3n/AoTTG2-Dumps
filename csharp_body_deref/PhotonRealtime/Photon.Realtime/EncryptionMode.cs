// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.EncryptionMode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/LoadBalancingClient.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000010")]
public enum EncryptionMode
{
	[Token(Token = "0x4000086")]
	PayloadEncryption = 0,
	[Token(Token = "0x4000087")]
	DatagramEncryption = 10,
	[Token(Token = "0x4000088")]
	DatagramEncryptionRandomSequence = 11,
	[Token(Token = "0x4000089")]
	DatagramEncryptionGCM = 13
}
