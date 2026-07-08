using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x200024B")]
internal sealed class ContinuationTaskFromTask : Task
{
	[Token(Token = "0x4000AE3")]
	[FieldOffset(Offset = "0x50")]
	private Task m_antecedent;

	[Token(Token = "0x600149F")]
	[Address(RVA = "0x5061540", Offset = "0x5061540", VA = "0x5061540")]
	public ContinuationTaskFromTask(Task antecedent, Delegate action, object state, TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions)
	{
	}

	[Token(Token = "0x60014A0")]
	[Address(RVA = "0x5065310", Offset = "0x5065310", VA = "0x5065310", Slot = "13")]
	internal override void InnerInvoke()
	{
	}
}
