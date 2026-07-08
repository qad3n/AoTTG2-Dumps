using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Data.SqlTypes;

[Serializable]
[Token(Token = "0x20000B2")]
public sealed class SqlNullValueException : SqlTypeException
{
	[Token(Token = "0x6000ACD")]
	[Address(RVA = "0x42C6DF0", Offset = "0x42C6DF0", VA = "0x42C6DF0")]
	public SqlNullValueException()
	{
	}

	[Token(Token = "0x6000ACE")]
	[Address(RVA = "0x42DFB80", Offset = "0x42DFB80", VA = "0x42DFB80")]
	public SqlNullValueException(string message)
	{
	}

	[Token(Token = "0x6000ACF")]
	[Address(RVA = "0x42DFB60", Offset = "0x42DFB60", VA = "0x42DFB60")]
	public SqlNullValueException(string message, Exception e)
	{
	}

	[Token(Token = "0x6000AD0")]
	[Address(RVA = "0x42DFBA0", Offset = "0x42DFBA0", VA = "0x42DFBA0")]
	private SqlNullValueException(SerializationInfo si, StreamingContext sc)
	{
	}

	[Token(Token = "0x6000AD1")]
	[Address(RVA = "0x42DFBE0", Offset = "0x42DFBE0", VA = "0x42DFBE0")]
	private static SerializationInfo SqlNullValueExceptionSerialization(SerializationInfo si, StreamingContext sc)
	{
		return null;
	}
}
