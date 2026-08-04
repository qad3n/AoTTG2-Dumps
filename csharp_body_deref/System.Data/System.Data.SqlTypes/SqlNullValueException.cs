// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.SqlTypes.SqlNullValueException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Data.SqlTypes;

[Serializable]
[Token(Token = "0x20000B2")]
public sealed class SqlNullValueException : SqlTypeException
{
	[Token(Token = "0x6000ACD")]
	[Address(RVA = "0x4604550", Offset = "0x4604550", VA = "0x4604550")]
	public SqlNullValueException()
	{
	}

	[Token(Token = "0x6000ACE")]
	[Address(RVA = "0x461D2E0", Offset = "0x461D2E0", VA = "0x461D2E0")]
	public SqlNullValueException(string message)
	{
	}

	[Token(Token = "0x6000ACF")]
	[Address(RVA = "0x461D2C0", Offset = "0x461D2C0", VA = "0x461D2C0")]
	public SqlNullValueException(string message, Exception e)
	{
	}

	[Token(Token = "0x6000AD0")]
	[Address(RVA = "0x461D300", Offset = "0x461D300", VA = "0x461D300")]
	private SqlNullValueException(SerializationInfo si, StreamingContext sc)
	{
	}

	[Token(Token = "0x6000AD1")]
	[Address(RVA = "0x461D340", Offset = "0x461D340", VA = "0x461D340")]
	private static SerializationInfo SqlNullValueExceptionSerialization(SerializationInfo si, StreamingContext sc)
	{
		return null;
	}
}
