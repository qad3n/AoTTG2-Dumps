using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Data.SqlTypes;

[Serializable]
[Token(Token = "0x20000B3")]
public sealed class SqlTruncateException : SqlTypeException
{
	[Token(Token = "0x6000AD2")]
	[Address(RVA = "0x42D1420", Offset = "0x42D1420", VA = "0x42D1420")]
	public SqlTruncateException()
	{
	}

	[Token(Token = "0x6000AD3")]
	[Address(RVA = "0x42DFCC0", Offset = "0x42DFCC0", VA = "0x42DFCC0")]
	public SqlTruncateException(string message)
	{
	}

	[Token(Token = "0x6000AD4")]
	[Address(RVA = "0x42DFCA0", Offset = "0x42DFCA0", VA = "0x42DFCA0")]
	public SqlTruncateException(string message, Exception e)
	{
	}

	[Token(Token = "0x6000AD5")]
	[Address(RVA = "0x42DFCE0", Offset = "0x42DFCE0", VA = "0x42DFCE0")]
	private SqlTruncateException(SerializationInfo si, StreamingContext sc)
	{
	}

	[Token(Token = "0x6000AD6")]
	[Address(RVA = "0x42DFD20", Offset = "0x42DFD20", VA = "0x42DFD20")]
	private static SerializationInfo SqlTruncateExceptionSerialization(SerializationInfo si, StreamingContext sc)
	{
		return null;
	}
}
