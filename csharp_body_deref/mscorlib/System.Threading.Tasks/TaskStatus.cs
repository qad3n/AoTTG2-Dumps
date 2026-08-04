// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.TaskStatus
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x200023A")]
public enum TaskStatus
{
	[Token(Token = "0x4000A7D")]
	Created,
	[Token(Token = "0x4000A7E")]
	WaitingForActivation,
	[Token(Token = "0x4000A7F")]
	WaitingToRun,
	[Token(Token = "0x4000A80")]
	Running,
	[Token(Token = "0x4000A81")]
	WaitingForChildrenToComplete,
	[Token(Token = "0x4000A82")]
	RanToCompletion,
	[Token(Token = "0x4000A83")]
	Canceled,
	[Token(Token = "0x4000A84")]
	Faulted
}
