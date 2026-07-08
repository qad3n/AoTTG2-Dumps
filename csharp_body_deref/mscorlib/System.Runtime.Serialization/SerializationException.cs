using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Serializable]
[Token(Token = "0x20003CB")]
public class SerializationException : SystemException
{
	[Token(Token = "0x4000FC7")]
	[FieldOffset(Offset = "0x0")]
	private static string s_nullMessage;

	[Token(Token = "0x6001F27")]
	[Address(RVA = "0x4EADF50", Offset = "0x4EADF50", VA = "0x4EADF50")]
	public SerializationException()
	{
	}

	[Token(Token = "0x6001F28")]
	[Address(RVA = "0x4EADFC0", Offset = "0x4EADFC0", VA = "0x4EADFC0")]
	public SerializationException(string message)
	{
	}

	[Token(Token = "0x6001F29")]
	[Address(RVA = "0x4EADFE0", Offset = "0x4EADFE0", VA = "0x4EADFE0")]
	public SerializationException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6001F2A")]
	[Address(RVA = "0x4EAE000", Offset = "0x4EAE000", VA = "0x4EAE000")]
	protected SerializationException(SerializationInfo info, StreamingContext context)
	{
	}
}
