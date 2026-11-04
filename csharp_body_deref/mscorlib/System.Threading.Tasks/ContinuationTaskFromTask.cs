// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.ContinuationTaskFromTask
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x200027B")]
internal sealed class ContinuationTaskFromTask : Task
{
	[Token(Token = "0x4000B2D")]
	[FieldOffset(Offset = "0x50")]
	private Task m_antecedent;

	[Token(Token = "0x600150B")]
	[Address(RVA = "0x1BAD570", Offset = "0x1BABB70", VA = "0x181BAD570")]
	public ContinuationTaskFromTask(Task antecedent, Delegate action, object state, TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions)
	{
	}

	[Token(Token = "0x600150C")]
	[Address(RVA = "0x1BAD470", Offset = "0x1BABA70", VA = "0x181BAD470", Slot = "13")]
	internal override void InnerInvoke()
	{
	}
}
