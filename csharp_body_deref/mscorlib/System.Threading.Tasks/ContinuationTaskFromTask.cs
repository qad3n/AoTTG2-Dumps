// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.ContinuationTaskFromTask
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000253")]
internal sealed class ContinuationTaskFromTask : Task
{
	[Token(Token = "0x4000A8B")]
	[FieldOffset(Offset = "0x50")]
	private Task m_antecedent;

	[Token(Token = "0x60014E2")]
	[Address(RVA = "0x5549090", Offset = "0x5548090", VA = "0x5549090")]
	public ContinuationTaskFromTask(Task antecedent, Delegate action, object state, TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions)
	{
	}

	[Token(Token = "0x60014E3")]
	[Address(RVA = "0x554BD10", Offset = "0x554AD10", VA = "0x554BD10", Slot = "13")]
	internal override void InnerInvoke()
	{
	}
}
