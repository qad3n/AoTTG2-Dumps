// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.TaskContinuation
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000256")]
internal abstract class TaskContinuation
{
	[Token(Token = "0x60014E8")]
	internal abstract void Run(Task completedTask, bool bCanInlineContinuationTask);

	[Token(Token = "0x60014E9")]
	[Address(RVA = "0x554BE00", Offset = "0x554AE00", VA = "0x554BE00")]
	protected static void InlineIfPossibleOrElseQueue(Task task, bool needsProtection)
	{
	}

	[Token(Token = "0x60014EA")]
	[Address(RVA = "0x554BF50", Offset = "0x554AF50", VA = "0x554BF50")]
	protected TaskContinuation()
	{
	}
}
