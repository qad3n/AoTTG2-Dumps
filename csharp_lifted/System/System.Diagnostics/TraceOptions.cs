// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.TraceOptions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Diagnostics;

[Token(Token = "0x20000CE")]
[Flags]
public enum TraceOptions
{
	[Token(Token = "0x40003A9")]
	None = 0,
	[Token(Token = "0x40003AA")]
	LogicalOperationStack = 1,
	[Token(Token = "0x40003AB")]
	DateTime = 2,
	[Token(Token = "0x40003AC")]
	Timestamp = 4,
	[Token(Token = "0x40003AD")]
	ProcessId = 8,
	[Token(Token = "0x40003AE")]
	ThreadId = 0x10,
	[Token(Token = "0x40003AF")]
	Callstack = 0x20
}
