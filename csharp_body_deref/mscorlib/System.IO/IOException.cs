using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.IO;

[Serializable]
[Token(Token = "0x2000541")]
public class IOException : SystemException
{
	[Token(Token = "0x6002803")]
	[Address(RVA = "0x4F04F20", Offset = "0x4F04F20", VA = "0x4F04F20")]
	public IOException()
	{
	}

	[Token(Token = "0x6002804")]
	[Address(RVA = "0x4F042D0", Offset = "0x4F042D0", VA = "0x4F042D0")]
	public IOException(string message)
	{
	}

	[Token(Token = "0x6002805")]
	[Address(RVA = "0x4F04F60", Offset = "0x4F04F60", VA = "0x4F04F60")]
	public IOException(string message, int hresult)
	{
	}

	[Token(Token = "0x6002806")]
	[Address(RVA = "0x4F04F80", Offset = "0x4F04F80", VA = "0x4F04F80")]
	public IOException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6002807")]
	[Address(RVA = "0x4F04320", Offset = "0x4F04320", VA = "0x4F04320")]
	protected IOException(SerializationInfo info, StreamingContext context)
	{
	}
}
