using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Serializable]
[Token(Token = "0x2000226")]
public class TaskSchedulerException : Exception
{
	[Token(Token = "0x600137E")]
	[Address(RVA = "0x5058610", Offset = "0x5058610", VA = "0x5058610")]
	public TaskSchedulerException()
	{
	}

	[Token(Token = "0x600137F")]
	[Address(RVA = "0x5058670", Offset = "0x5058670", VA = "0x5058670")]
	public TaskSchedulerException(Exception innerException)
	{
	}

	[Token(Token = "0x6001380")]
	[Address(RVA = "0x50586E0", Offset = "0x50586E0", VA = "0x50586E0")]
	protected TaskSchedulerException(SerializationInfo info, StreamingContext context)
	{
	}
}
