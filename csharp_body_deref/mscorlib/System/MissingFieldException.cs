using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000143")]
public class MissingFieldException : MissingMemberException, ISerializable
{
	[Token(Token = "0x17000114")]
	public override string Message
	{
		[Token(Token = "0x6000C86")]
		[Address(RVA = "0x4FF8420", Offset = "0x4FF8420", VA = "0x4FF8420", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C82")]
	[Address(RVA = "0x4FF8110", Offset = "0x4FF8110", VA = "0x4FF8110")]
	public MissingFieldException()
	{
	}

	[Token(Token = "0x6000C83")]
	[Address(RVA = "0x4FF8170", Offset = "0x4FF8170", VA = "0x4FF8170")]
	public MissingFieldException(string message)
	{
	}

	[Token(Token = "0x6000C84")]
	[Address(RVA = "0x4FF8190", Offset = "0x4FF8190", VA = "0x4FF8190")]
	public MissingFieldException(string className, string fieldName)
	{
	}

	[Token(Token = "0x6000C85")]
	[Address(RVA = "0x4FF8250", Offset = "0x4FF8250", VA = "0x4FF8250")]
	protected MissingFieldException(SerializationInfo info, StreamingContext context)
	{
	}
}
