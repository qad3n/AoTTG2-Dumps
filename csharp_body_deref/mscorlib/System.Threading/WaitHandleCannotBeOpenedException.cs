using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Threading;

[Serializable]
[Token(Token = "0x20001D8")]
public class WaitHandleCannotBeOpenedException : ApplicationException
{
	[Token(Token = "0x6001179")]
	[Address(RVA = "0x5042C10", Offset = "0x5042C10", VA = "0x5042C10")]
	public WaitHandleCannotBeOpenedException()
	{
	}

	[Token(Token = "0x600117A")]
	[Address(RVA = "0x5042C50", Offset = "0x5042C50", VA = "0x5042C50")]
	public WaitHandleCannotBeOpenedException(string message)
	{
	}

	[Token(Token = "0x600117B")]
	[Address(RVA = "0x5042C70", Offset = "0x5042C70", VA = "0x5042C70")]
	protected WaitHandleCannotBeOpenedException(SerializationInfo info, StreamingContext context)
	{
	}
}
