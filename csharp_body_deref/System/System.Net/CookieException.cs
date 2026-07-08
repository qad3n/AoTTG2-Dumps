using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Net;

[Serializable]
[Token(Token = "0x2000178")]
public class CookieException : FormatException, ISerializable
{
	[Token(Token = "0x6000918")]
	[Address(RVA = "0x46513A0", Offset = "0x46513A0", VA = "0x46513A0")]
	public CookieException()
	{
	}

	[Token(Token = "0x6000919")]
	[Address(RVA = "0x4647450", Offset = "0x4647450", VA = "0x4647450")]
	internal CookieException(string message)
	{
	}

	[Token(Token = "0x600091A")]
	[Address(RVA = "0x464E520", Offset = "0x464E520", VA = "0x464E520")]
	internal CookieException(string message, Exception inner)
	{
	}

	[Token(Token = "0x600091B")]
	[Address(RVA = "0x46513B0", Offset = "0x46513B0", VA = "0x46513B0")]
	protected CookieException(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600091C")]
	[Address(RVA = "0x46513C0", Offset = "0x46513C0", VA = "0x46513C0", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600091D")]
	[Address(RVA = "0x46513D0", Offset = "0x46513D0", VA = "0x46513D0", Slot = "11")]
	public override void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}
}
