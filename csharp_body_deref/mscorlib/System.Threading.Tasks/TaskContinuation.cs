using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x200024E")]
internal abstract class TaskContinuation
{
	[Token(Token = "0x60014A5")]
	internal abstract void Run(Task completedTask, bool bCanInlineContinuationTask);

	[Token(Token = "0x60014A6")]
	[Address(RVA = "0x5065400", Offset = "0x5065400", VA = "0x5065400")]
	protected static void InlineIfPossibleOrElseQueue(Task task, bool needsProtection)
	{
	}

	[Token(Token = "0x60014A7")]
	[Address(RVA = "0x50655D0", Offset = "0x50655D0", VA = "0x50655D0")]
	protected TaskContinuation()
	{
	}
}
