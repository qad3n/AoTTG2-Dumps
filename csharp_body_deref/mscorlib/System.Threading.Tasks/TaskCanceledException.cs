using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Serializable]
[Token(Token = "0x2000224")]
public class TaskCanceledException : OperationCanceledException
{
	[NonSerialized]
	[Token(Token = "0x4000A4F")]
	[FieldOffset(Offset = "0x98")]
	private readonly Task _canceledTask;

	[Token(Token = "0x6001371")]
	[Address(RVA = "0x5058510", Offset = "0x5058510", VA = "0x5058510")]
	public TaskCanceledException()
	{
	}

	[Token(Token = "0x6001372")]
	[Address(RVA = "0x5058550", Offset = "0x5058550", VA = "0x5058550")]
	public TaskCanceledException(Task task)
	{
	}

	[Token(Token = "0x6001373")]
	[Address(RVA = "0x5058600", Offset = "0x5058600", VA = "0x5058600")]
	protected TaskCanceledException(SerializationInfo info, StreamingContext context)
	{
	}
}
