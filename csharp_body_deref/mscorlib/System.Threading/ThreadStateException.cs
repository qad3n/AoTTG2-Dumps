using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Threading;

[Serializable]
[Token(Token = "0x20001D6")]
public class ThreadStateException : SystemException
{
	[Token(Token = "0x6001175")]
	[Address(RVA = "0x5042B30", Offset = "0x5042B30", VA = "0x5042B30")]
	public ThreadStateException()
	{
	}

	[Token(Token = "0x6001176")]
	[Address(RVA = "0x5042B70", Offset = "0x5042B70", VA = "0x5042B70")]
	public ThreadStateException(string message)
	{
	}

	[Token(Token = "0x6001177")]
	[Address(RVA = "0x5042B90", Offset = "0x5042B90", VA = "0x5042B90")]
	protected ThreadStateException(SerializationInfo info, StreamingContext context)
	{
	}
}
