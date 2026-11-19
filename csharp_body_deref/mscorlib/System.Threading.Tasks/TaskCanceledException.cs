// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.TaskCanceledException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Serializable]
[Token(Token = "0x200022D")]
public class TaskCanceledException : OperationCanceledException
{
	[NonSerialized]
	[Token(Token = "0x4000A0A")]
	[FieldOffset(Offset = "0x98")]
	private readonly Task _canceledTask;

	[Token(Token = "0x60013B9")]
	[Address(RVA = "0x55408F0", Offset = "0x553F8F0", VA = "0x55408F0")]
	public TaskCanceledException()
	{
	}

	[Token(Token = "0x60013BA")]
	[Address(RVA = "0x5540930", Offset = "0x553F930", VA = "0x5540930")]
	public TaskCanceledException(Task task)
	{
	}

	[Token(Token = "0x60013BB")]
	[Address(RVA = "0x55409E0", Offset = "0x553F9E0", VA = "0x55409E0")]
	protected TaskCanceledException(SerializationInfo info, StreamingContext context)
	{
	}
}
