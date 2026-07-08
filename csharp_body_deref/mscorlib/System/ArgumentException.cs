using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200008A")]
public class ArgumentException : SystemException
{
	[Token(Token = "0x40001DB")]
	[FieldOffset(Offset = "0x90")]
	private string _paramName;

	[Token(Token = "0x17000056")]
	public override string Message
	{
		[Token(Token = "0x60003E0")]
		[Address(RVA = "0x4F2DD50", Offset = "0x4F2DD50", VA = "0x4F2DD50", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x4F2DB70", Offset = "0x4F2DB70", VA = "0x4F2DB70")]
	public ArgumentException()
	{
	}

	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x4F2C970", Offset = "0x4F2C970", VA = "0x4F2C970")]
	public ArgumentException(string message)
	{
	}

	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x4F2DBB0", Offset = "0x4F2DBB0", VA = "0x4F2DBB0")]
	public ArgumentException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x4F2DBD0", Offset = "0x4F2DBD0", VA = "0x4F2DBD0")]
	public ArgumentException(string message, string paramName, Exception innerException)
	{
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x4F252A0", Offset = "0x4F252A0", VA = "0x4F252A0")]
	public ArgumentException(string message, string paramName)
	{
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x4F2DC10", Offset = "0x4F2DC10", VA = "0x4F2DC10")]
	protected ArgumentException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x4F2DCA0", Offset = "0x4F2DCA0", VA = "0x4F2DCA0", Slot = "11")]
	public override void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
