// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.TaskContinuation
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x200027E")]
internal abstract class TaskContinuation
{
	[Token(Token = "0x6001511")]
	internal abstract void Run(Task completedTask, bool bCanInlineContinuationTask);

	[Token(Token = "0x6001512")]
	[Address(RVA = "0x1BB4AC0", Offset = "0x1BB30C0", VA = "0x181BB4AC0")]
	protected static void InlineIfPossibleOrElseQueue(Task task, bool needsProtection)
	{
	}

	[Token(Token = "0x6001513")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected TaskContinuation()
	{
	}
}
