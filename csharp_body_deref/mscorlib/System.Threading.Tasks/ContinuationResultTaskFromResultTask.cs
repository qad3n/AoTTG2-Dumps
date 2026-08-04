// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.ContinuationResultTaskFromResultTask
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x200024D")]
internal sealed class ContinuationResultTaskFromResultTask<TAntecedentResult, TResult> : Task<TResult>
{
	[Token(Token = "0x4000AE5")]
	[FieldOffset(Offset = "0x0")]
	private Task<TAntecedentResult> m_antecedent;

	[Token(Token = "0x60014A3")]
	public ContinuationResultTaskFromResultTask(Task<TAntecedentResult> antecedent, Delegate function, object state, TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions)
	{
	}

	[Token(Token = "0x60014A4")]
	internal override void InnerInvoke()
	{
	}
}
