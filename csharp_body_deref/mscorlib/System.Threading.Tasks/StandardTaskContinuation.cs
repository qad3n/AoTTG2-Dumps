// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.StandardTaskContinuation
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x200024F")]
internal class StandardTaskContinuation : System.Threading.Tasks.TaskContinuation
{
	[Token(Token = "0x4000AE6")]
	[FieldOffset(Offset = "0x10")]
	internal readonly Task m_task;

	[Token(Token = "0x4000AE7")]
	[FieldOffset(Offset = "0x18")]
	internal readonly TaskContinuationOptions m_options;

	[Token(Token = "0x4000AE8")]
	[FieldOffset(Offset = "0x20")]
	private readonly TaskScheduler m_taskScheduler;

	[Token(Token = "0x60014A8")]
	[Address(RVA = "0x3D47560", Offset = "0x3D47560", VA = "0x3D47560")]
	internal StandardTaskContinuation(Task task, TaskContinuationOptions options, TaskScheduler scheduler)
	{
	}

	[Token(Token = "0x60014A9")]
	[Address(RVA = "0x3D4B100", Offset = "0x3D4B100", VA = "0x3D4B100", Slot = "4")]
	internal override void Run(Task completedTask, bool bCanInlineContinuationTask)
	{
	}
}
