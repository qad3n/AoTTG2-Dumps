// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.TaskContinuationOptions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000275")]
[Flags]
public enum TaskContinuationOptions
{
	[Token(Token = "0x4000B19")]
	None = 0,
	[Token(Token = "0x4000B1A")]
	PreferFairness = 1,
	[Token(Token = "0x4000B1B")]
	LongRunning = 2,
	[Token(Token = "0x4000B1C")]
	AttachedToParent = 4,
	[Token(Token = "0x4000B1D")]
	DenyChildAttach = 8,
	[Token(Token = "0x4000B1E")]
	HideScheduler = 0x10,
	[Token(Token = "0x4000B1F")]
	LazyCancellation = 0x20,
	[Token(Token = "0x4000B20")]
	RunContinuationsAsynchronously = 0x40,
	[Token(Token = "0x4000B21")]
	NotOnRanToCompletion = 0x10000,
	[Token(Token = "0x4000B22")]
	NotOnFaulted = 0x20000,
	[Token(Token = "0x4000B23")]
	NotOnCanceled = 0x40000,
	[Token(Token = "0x4000B24")]
	OnlyOnRanToCompletion = NotOnFaulted | NotOnCanceled,
	[Token(Token = "0x4000B25")]
	OnlyOnFaulted = NotOnRanToCompletion | NotOnCanceled,
	[Token(Token = "0x4000B26")]
	OnlyOnCanceled = NotOnRanToCompletion | NotOnFaulted,
	[Token(Token = "0x4000B27")]
	ExecuteSynchronously = 0x80000
}
