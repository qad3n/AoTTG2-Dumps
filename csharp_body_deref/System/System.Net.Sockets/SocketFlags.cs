// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Sockets.SocketFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.Sockets;

[Token(Token = "0x200038C")]
[Flags]
public enum SocketFlags
{
	[Token(Token = "0x4000F25")]
	None = 0,
	[Token(Token = "0x4000F26")]
	OutOfBand = 1,
	[Token(Token = "0x4000F27")]
	Peek = 2,
	[Token(Token = "0x4000F28")]
	DontRoute = 4,
	[Token(Token = "0x4000F29")]
	MaxIOVectorLength = 0x10,
	[Token(Token = "0x4000F2A")]
	Truncated = 0x100,
	[Token(Token = "0x4000F2B")]
	ControlDataTruncated = 0x200,
	[Token(Token = "0x4000F2C")]
	Broadcast = 0x400,
	[Token(Token = "0x4000F2D")]
	Multicast = 0x800,
	[Token(Token = "0x4000F2E")]
	Partial = 0x8000
}
