// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.TaskSchedulerException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Serializable]
[Token(Token = "0x2000257")]
public class TaskSchedulerException : Exception
{
	[Token(Token = "0x60013EF")]
	[Address(RVA = "0x1BB6700", Offset = "0x1BB4D00", VA = "0x181BB6700")]
	public TaskSchedulerException()
	{
	}

	[Token(Token = "0x60013F0")]
	[Address(RVA = "0x1BB6760", Offset = "0x1BB4D60", VA = "0x181BB6760")]
	public TaskSchedulerException(Exception innerException)
	{
	}

	[Token(Token = "0x60013F1")]
	[Address(RVA = "0x1BB6680", Offset = "0x1BB4C80", VA = "0x181BB6680")]
	protected TaskSchedulerException(SerializationInfo info, StreamingContext context)
	{
	}
}
