using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Serializable]
[Token(Token = "0x200034A")]
[ComVisible(true)]
public class RemotingException : SystemException
{
	[Token(Token = "0x6001C79")]
	[Address(RVA = "0x4E84A60", Offset = "0x4E84A60", VA = "0x4E84A60")]
	public RemotingException()
	{
	}

	[Token(Token = "0x6001C7A")]
	[Address(RVA = "0x4E79B60", Offset = "0x4E79B60", VA = "0x4E79B60")]
	public RemotingException(string message)
	{
	}

	[Token(Token = "0x6001C7B")]
	[Address(RVA = "0x4E84A70", Offset = "0x4E84A70", VA = "0x4E84A70")]
	protected RemotingException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001C7C")]
	[Address(RVA = "0x4E81930", Offset = "0x4E81930", VA = "0x4E81930")]
	public RemotingException(string message, Exception InnerException)
	{
	}
}
