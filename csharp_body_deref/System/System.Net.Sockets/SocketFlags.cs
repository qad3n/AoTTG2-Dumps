// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Sockets.SocketFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.Sockets;

[Token(Token = "0x2000348")]
[Flags]
public enum SocketFlags
{
	[Token(Token = "0x4000E3D")]
	None = 0,
	[Token(Token = "0x4000E3E")]
	OutOfBand = 1,
	[Token(Token = "0x4000E3F")]
	Peek = 2,
	[Token(Token = "0x4000E40")]
	DontRoute = 4,
	[Token(Token = "0x4000E41")]
	MaxIOVectorLength = 0x10,
	[Token(Token = "0x4000E42")]
	Truncated = 0x100,
	[Token(Token = "0x4000E43")]
	ControlDataTruncated = 0x200,
	[Token(Token = "0x4000E44")]
	Broadcast = 0x400,
	[Token(Token = "0x4000E45")]
	Multicast = 0x800,
	[Token(Token = "0x4000E46")]
	Partial = 0x8000
}
