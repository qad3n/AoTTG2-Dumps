using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Net;

[Serializable]
[Token(Token = "0x200014A")]
public class ProtocolViolationException : InvalidOperationException, ISerializable
{
	[Token(Token = "0x60007EE")]
	[Address(RVA = "0x4639FB0", Offset = "0x4639FB0", VA = "0x4639FB0")]
	public ProtocolViolationException()
	{
	}

	[Token(Token = "0x60007EF")]
	[Address(RVA = "0x4639FC0", Offset = "0x4639FC0", VA = "0x4639FC0")]
	public ProtocolViolationException(string message)
	{
	}

	[Token(Token = "0x60007F0")]
	[Address(RVA = "0x4639FD0", Offset = "0x4639FD0", VA = "0x4639FD0")]
	protected ProtocolViolationException(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60007F1")]
	[Address(RVA = "0x4639FE0", Offset = "0x4639FE0", VA = "0x4639FE0", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60007F2")]
	[Address(RVA = "0x4639FF0", Offset = "0x4639FF0", VA = "0x4639FF0", Slot = "11")]
	public override void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}
}
