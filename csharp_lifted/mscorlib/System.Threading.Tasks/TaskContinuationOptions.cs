// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.TaskContinuationOptions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x200024D")]
[Flags]
public enum TaskContinuationOptions
{
	[Token(Token = "0x4000A77")]
	None = 0,
	[Token(Token = "0x4000A78")]
	PreferFairness = 1,
	[Token(Token = "0x4000A79")]
	LongRunning = 2,
	[Token(Token = "0x4000A7A")]
	AttachedToParent = 4,
	[Token(Token = "0x4000A7B")]
	DenyChildAttach = 8,
	[Token(Token = "0x4000A7C")]
	HideScheduler = 0x10,
	[Token(Token = "0x4000A7D")]
	LazyCancellation = 0x20,
	[Token(Token = "0x4000A7E")]
	RunContinuationsAsynchronously = 0x40,
	[Token(Token = "0x4000A7F")]
	NotOnRanToCompletion = 0x10000,
	[Token(Token = "0x4000A80")]
	NotOnFaulted = 0x20000,
	[Token(Token = "0x4000A81")]
	NotOnCanceled = 0x40000,
	[Token(Token = "0x4000A82")]
	OnlyOnRanToCompletion = NotOnFaulted | NotOnCanceled,
	[Token(Token = "0x4000A83")]
	OnlyOnFaulted = NotOnRanToCompletion | NotOnCanceled,
	[Token(Token = "0x4000A84")]
	OnlyOnCanceled = NotOnRanToCompletion | NotOnFaulted,
	[Token(Token = "0x4000A85")]
	ExecuteSynchronously = 0x80000
}
