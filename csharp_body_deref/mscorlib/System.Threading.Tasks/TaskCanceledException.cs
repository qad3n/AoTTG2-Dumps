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
[Token(Token = "0x2000255")]
public class TaskCanceledException : OperationCanceledException
{
	[NonSerialized]
	[Token(Token = "0x4000AAC")]
	[FieldOffset(Offset = "0x98")]
	private readonly Task _canceledTask;

	[Token(Token = "0x60013E2")]
	[Address(RVA = "0x1BB4A80", Offset = "0x1BB3080", VA = "0x181BB4A80")]
	public TaskCanceledException()
	{
	}

	[Token(Token = "0x60013E3")]
	[Address(RVA = "0x1BB49E0", Offset = "0x1BB2FE0", VA = "0x181BB49E0")]
	public TaskCanceledException(Task task)
	{
	}

	[Token(Token = "0x60013E4")]
	[Address(RVA = "0x19A1CD0", Offset = "0x19A02D0", VA = "0x1819A1CD0")]
	protected TaskCanceledException(SerializationInfo info, StreamingContext context)
	{
	}
}
