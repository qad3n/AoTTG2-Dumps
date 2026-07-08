using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.IO;

[Serializable]
[Token(Token = "0x2000544")]
public class PathTooLongException : IOException
{
	[Token(Token = "0x600283F")]
	[Address(RVA = "0x4F088D0", Offset = "0x4F088D0", VA = "0x4F088D0")]
	public PathTooLongException()
	{
	}

	[Token(Token = "0x6002840")]
	[Address(RVA = "0x4F08910", Offset = "0x4F08910", VA = "0x4F08910")]
	public PathTooLongException(string message)
	{
	}

	[Token(Token = "0x6002841")]
	[Address(RVA = "0x4F08930", Offset = "0x4F08930", VA = "0x4F08930")]
	protected PathTooLongException(SerializationInfo info, StreamingContext context)
	{
	}
}
