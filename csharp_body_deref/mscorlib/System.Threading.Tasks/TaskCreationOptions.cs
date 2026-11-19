// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.TaskCreationOptions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x200024B")]
[Flags]
public enum TaskCreationOptions
{
	[Token(Token = "0x4000A67")]
	None = 0,
	[Token(Token = "0x4000A68")]
	PreferFairness = 1,
	[Token(Token = "0x4000A69")]
	LongRunning = 2,
	[Token(Token = "0x4000A6A")]
	AttachedToParent = 4,
	[Token(Token = "0x4000A6B")]
	DenyChildAttach = 8,
	[Token(Token = "0x4000A6C")]
	HideScheduler = 0x10,
	[Token(Token = "0x4000A6D")]
	RunContinuationsAsynchronously = 0x40
}
