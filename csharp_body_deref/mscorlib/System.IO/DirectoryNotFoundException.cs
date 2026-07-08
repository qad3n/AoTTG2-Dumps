using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.IO;

[Serializable]
[Token(Token = "0x2000538")]
public class DirectoryNotFoundException : IOException
{
	[Token(Token = "0x60027E6")]
	[Address(RVA = "0x4F04290", Offset = "0x4F04290", VA = "0x4F04290")]
	public DirectoryNotFoundException()
	{
	}

	[Token(Token = "0x60027E7")]
	[Address(RVA = "0x4F042F0", Offset = "0x4F042F0", VA = "0x4F042F0")]
	public DirectoryNotFoundException(string message)
	{
	}

	[Token(Token = "0x60027E8")]
	[Address(RVA = "0x4F04310", Offset = "0x4F04310", VA = "0x4F04310")]
	protected DirectoryNotFoundException(SerializationInfo info, StreamingContext context)
	{
	}
}
