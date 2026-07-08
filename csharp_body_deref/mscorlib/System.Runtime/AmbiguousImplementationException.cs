using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Runtime;

[Serializable]
[Token(Token = "0x2000337")]
public sealed class AmbiguousImplementationException : Exception
{
	[Token(Token = "0x6001C06")]
	[Address(RVA = "0x4E79780", Offset = "0x4E79780", VA = "0x4E79780")]
	public AmbiguousImplementationException()
	{
	}

	[Token(Token = "0x6001C07")]
	[Address(RVA = "0x4E797F0", Offset = "0x4E797F0", VA = "0x4E797F0")]
	public AmbiguousImplementationException(string message)
	{
	}

	[Token(Token = "0x6001C08")]
	[Address(RVA = "0x4E79850", Offset = "0x4E79850", VA = "0x4E79850")]
	private AmbiguousImplementationException(SerializationInfo info, StreamingContext context)
	{
	}
}
