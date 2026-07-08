using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x200024C")]
internal sealed class ContinuationTaskFromResultTask<TAntecedentResult> : Task
{
	[Token(Token = "0x4000AE4")]
	[FieldOffset(Offset = "0x0")]
	private Task<TAntecedentResult> m_antecedent;

	[Token(Token = "0x60014A1")]
	public ContinuationTaskFromResultTask(Task<TAntecedentResult> antecedent, Delegate action, object state, TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions)
	{
	}

	[Token(Token = "0x60014A2")]
	internal override void InnerInvoke()
	{
	}
}
