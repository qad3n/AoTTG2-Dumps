// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.TaskStatus
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000243")]
public enum TaskStatus
{
	[Token(Token = "0x4000A38")]
	Created,
	[Token(Token = "0x4000A39")]
	WaitingForActivation,
	[Token(Token = "0x4000A3A")]
	WaitingToRun,
	[Token(Token = "0x4000A3B")]
	Running,
	[Token(Token = "0x4000A3C")]
	WaitingForChildrenToComplete,
	[Token(Token = "0x4000A3D")]
	RanToCompletion,
	[Token(Token = "0x4000A3E")]
	Canceled,
	[Token(Token = "0x4000A3F")]
	Faulted
}
