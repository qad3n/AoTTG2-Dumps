// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.TaskContinuation
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x200024E")]
internal abstract class TaskContinuation
{
	[Token(Token = "0x60014A5")]
	internal abstract void Run(Task completedTask, bool bCanInlineContinuationTask);

	[Token(Token = "0x60014A6")]
	[Address(RVA = "0x3D4AF20", Offset = "0x3D4AF20", VA = "0x3D4AF20")]
	protected static void InlineIfPossibleOrElseQueue(Task task, bool needsProtection)
	{
	}

	[Token(Token = "0x60014A7")]
	[Address(RVA = "0x3D4B0F0", Offset = "0x3D4B0F0", VA = "0x3D4B0F0")]
	protected TaskContinuation()
	{
	}
}
