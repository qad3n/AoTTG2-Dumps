using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Threading;

[Serializable]
[Token(Token = "0x20001CE")]
public class LockRecursionException : Exception
{
	[Token(Token = "0x6001166")]
	[Address(RVA = "0x5042600", Offset = "0x5042600", VA = "0x5042600")]
	public LockRecursionException()
	{
	}

	[Token(Token = "0x6001167")]
	[Address(RVA = "0x5042670", Offset = "0x5042670", VA = "0x5042670")]
	public LockRecursionException(string message)
	{
	}

	[Token(Token = "0x6001168")]
	[Address(RVA = "0x50426D0", Offset = "0x50426D0", VA = "0x50426D0")]
	protected LockRecursionException(SerializationInfo info, StreamingContext context)
	{
	}
}
