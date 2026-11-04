// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.InternalTaskOptions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000274")]
[Flags]
internal enum InternalTaskOptions
{
	[Token(Token = "0x4000B11")]
	None = 0,
	[Token(Token = "0x4000B12")]
	InternalOptionsMask = 0xFF00,
	[Token(Token = "0x4000B13")]
	ContinuationTask = 0x200,
	[Token(Token = "0x4000B14")]
	PromiseTask = 0x400,
	[Token(Token = "0x4000B15")]
	LazyCancellation = 0x1000,
	[Token(Token = "0x4000B16")]
	QueuedByRuntime = 0x2000,
	[Token(Token = "0x4000B17")]
	DoNotDispose = 0x4000
}
