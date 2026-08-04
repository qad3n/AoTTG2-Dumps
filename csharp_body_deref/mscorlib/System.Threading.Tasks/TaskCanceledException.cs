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
[Token(Token = "0x2000224")]
public class TaskCanceledException : OperationCanceledException
{
	[NonSerialized]
	[Token(Token = "0x4000A4F")]
	[FieldOffset(Offset = "0x98")]
	private readonly Task _canceledTask;

	[Token(Token = "0x6001371")]
	[Address(RVA = "0x3D3E030", Offset = "0x3D3E030", VA = "0x3D3E030")]
	public TaskCanceledException()
	{
	}

	[Token(Token = "0x6001372")]
	[Address(RVA = "0x3D3E070", Offset = "0x3D3E070", VA = "0x3D3E070")]
	public TaskCanceledException(Task task)
	{
	}

	[Token(Token = "0x6001373")]
	[Address(RVA = "0x3D3E120", Offset = "0x3D3E120", VA = "0x3D3E120")]
	protected TaskCanceledException(SerializationInfo info, StreamingContext context)
	{
	}
}
