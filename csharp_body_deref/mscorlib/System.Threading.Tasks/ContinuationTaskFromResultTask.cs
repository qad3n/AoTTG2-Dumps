// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.ContinuationTaskFromResultTask
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x200027C")]
internal sealed class ContinuationTaskFromResultTask<TAntecedentResult> : Task
{
	[Token(Token = "0x4000B2E")]
	[FieldOffset(Offset = "0x0")]
	private Task<TAntecedentResult> m_antecedent;

	[Token(Token = "0x600150D")]
	public ContinuationTaskFromResultTask(Task<TAntecedentResult> antecedent, Delegate action, object state, TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions)
	{
	}

	[Token(Token = "0x600150E")]
	internal override void InnerInvoke()
	{
	}
}
