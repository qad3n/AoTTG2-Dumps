// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.SqlTypes.SqlTruncateException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Data.SqlTypes;

[Serializable]
[Token(Token = "0x20000B3")]
public sealed class SqlTruncateException : SqlTypeException
{
	[Token(Token = "0x6000AD2")]
	[Address(RVA = "0x460EB80", Offset = "0x460EB80", VA = "0x460EB80")]
	public SqlTruncateException()
	{
	}

	[Token(Token = "0x6000AD3")]
	[Address(RVA = "0x461D420", Offset = "0x461D420", VA = "0x461D420")]
	public SqlTruncateException(string message)
	{
	}

	[Token(Token = "0x6000AD4")]
	[Address(RVA = "0x461D400", Offset = "0x461D400", VA = "0x461D400")]
	public SqlTruncateException(string message, Exception e)
	{
	}

	[Token(Token = "0x6000AD5")]
	[Address(RVA = "0x461D440", Offset = "0x461D440", VA = "0x461D440")]
	private SqlTruncateException(SerializationInfo si, StreamingContext sc)
	{
	}

	[Token(Token = "0x6000AD6")]
	[Address(RVA = "0x461D480", Offset = "0x461D480", VA = "0x461D480")]
	private static SerializationInfo SqlTruncateExceptionSerialization(SerializationInfo si, StreamingContext sc)
	{
		return null;
	}
}
