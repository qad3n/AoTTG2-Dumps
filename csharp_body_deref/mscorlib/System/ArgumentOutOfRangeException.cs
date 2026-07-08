using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200008C")]
public class ArgumentOutOfRangeException : ArgumentException
{
	[Token(Token = "0x40001DC")]
	[FieldOffset(Offset = "0x98")]
	private object _actualValue;

	[Token(Token = "0x17000057")]
	public override string Message
	{
		[Token(Token = "0x60003EB")]
		[Address(RVA = "0x4F2E140", Offset = "0x4F2E140", VA = "0x4F2E140", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x4F2DEF0", Offset = "0x4F2DEF0", VA = "0x4F2DEF0")]
	public ArgumentOutOfRangeException()
	{
	}

	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x4F2DF30", Offset = "0x4F2DF30", VA = "0x4F2DF30")]
	public ArgumentOutOfRangeException(string paramName)
	{
	}

	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x4F29030", Offset = "0x4F29030", VA = "0x4F29030")]
	public ArgumentOutOfRangeException(string paramName, string message)
	{
	}

	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x4F2A8B0", Offset = "0x4F2A8B0", VA = "0x4F2A8B0")]
	public ArgumentOutOfRangeException(string paramName, object actualValue, string message)
	{
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x4F2DF90", Offset = "0x4F2DF90", VA = "0x4F2DF90")]
	protected ArgumentOutOfRangeException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x4F2E090", Offset = "0x4F2E090", VA = "0x4F2E090", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
