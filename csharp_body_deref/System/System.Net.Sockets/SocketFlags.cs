// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Sockets.SocketFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.Sockets;

[Token(Token = "0x20001FF")]
[Flags]
public enum SocketFlags
{
	[Token(Token = "0x4000AF6")]
	None = 0,
	[Token(Token = "0x4000AF7")]
	OutOfBand = 1,
	[Token(Token = "0x4000AF8")]
	Peek = 2,
	[Token(Token = "0x4000AF9")]
	DontRoute = 4,
	[Token(Token = "0x4000AFA")]
	MaxIOVectorLength = 0x10,
	[Token(Token = "0x4000AFB")]
	Truncated = 0x100,
	[Token(Token = "0x4000AFC")]
	ControlDataTruncated = 0x200,
	[Token(Token = "0x4000AFD")]
	Broadcast = 0x400,
	[Token(Token = "0x4000AFE")]
	Multicast = 0x800,
	[Token(Token = "0x4000AFF")]
	Partial = 0x8000
}
