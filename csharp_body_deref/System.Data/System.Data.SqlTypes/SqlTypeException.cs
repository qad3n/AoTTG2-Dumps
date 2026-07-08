using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Data.SqlTypes;

[Serializable]
[Token(Token = "0x20000B1")]
public class SqlTypeException : SystemException
{
	[Token(Token = "0x6000AC8")]
	[Address(RVA = "0x42DFA10", Offset = "0x42DFA10", VA = "0x42DFA10")]
	public SqlTypeException()
	{
	}

	[Token(Token = "0x6000AC9")]
	[Address(RVA = "0x42C88F0", Offset = "0x42C88F0", VA = "0x42C88F0")]
	public SqlTypeException(string message)
	{
	}

	[Token(Token = "0x6000ACA")]
	[Address(RVA = "0x42DFA50", Offset = "0x42DFA50", VA = "0x42DFA50")]
	public SqlTypeException(string message, Exception e)
	{
	}

	[Token(Token = "0x6000ACB")]
	[Address(RVA = "0x42DFA70", Offset = "0x42DFA70", VA = "0x42DFA70")]
	protected SqlTypeException(SerializationInfo si, StreamingContext sc)
	{
	}

	[Token(Token = "0x6000ACC")]
	[Address(RVA = "0x42DFAA0", Offset = "0x42DFAA0", VA = "0x42DFAA0")]
	private static SerializationInfo SqlTypeExceptionSerialization(SerializationInfo si, StreamingContext sc)
	{
		return null;
	}
}
