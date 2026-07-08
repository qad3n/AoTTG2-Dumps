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
