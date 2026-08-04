// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.ReadState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20001B7")]
internal enum ReadState
{
	[Token(Token = "0x40008CC")]
	None,
	[Token(Token = "0x40008CD")]
	Status,
	[Token(Token = "0x40008CE")]
	Headers,
	[Token(Token = "0x40008CF")]
	Content,
	[Token(Token = "0x40008D0")]
	Aborted
}
