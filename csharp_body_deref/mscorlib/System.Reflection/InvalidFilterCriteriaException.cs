using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[Token(Token = "0x20004E0")]
public class InvalidFilterCriteriaException : ApplicationException
{
	[Token(Token = "0x6002424")]
	[Address(RVA = "0x4EEC660", Offset = "0x4EEC660", VA = "0x4EEC660")]
	public InvalidFilterCriteriaException()
	{
	}

	[Token(Token = "0x6002425")]
	[Address(RVA = "0x4EEC6A0", Offset = "0x4EEC6A0", VA = "0x4EEC6A0")]
	public InvalidFilterCriteriaException(string message)
	{
	}

	[Token(Token = "0x6002426")]
	[Address(RVA = "0x4EEC6C0", Offset = "0x4EEC6C0", VA = "0x4EEC6C0")]
	public InvalidFilterCriteriaException(string message, Exception inner)
	{
	}

	[Token(Token = "0x6002427")]
	[Address(RVA = "0x4EEC6E0", Offset = "0x4EEC6E0", VA = "0x4EEC6E0")]
	protected InvalidFilterCriteriaException(SerializationInfo info, StreamingContext context)
	{
	}
}
