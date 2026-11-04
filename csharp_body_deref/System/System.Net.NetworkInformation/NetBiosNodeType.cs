// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.NetworkInformation.NetBiosNodeType
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.NetworkInformation;

[Token(Token = "0x200035F")]
public enum NetBiosNodeType
{
	[Token(Token = "0x4000DDC")]
	Unknown = 0,
	[Token(Token = "0x4000DDD")]
	Broadcast = 1,
	[Token(Token = "0x4000DDE")]
	Peer2Peer = 2,
	[Token(Token = "0x4000DDF")]
	Mixed = 4,
	[Token(Token = "0x4000DE0")]
	Hybrid = 8
}
