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
[Token(Token = "0x20000BC")]
public sealed class SqlNullValueException : SqlTypeException
{
	[Token(Token = "0x6000AEC")]
	[Address(RVA = "0x5F079D0", Offset = "0x5F069D0", VA = "0x5F079D0")]
	public SqlNullValueException()
	{
	}

	[Token(Token = "0x6000AED")]
	[Address(RVA = "0x5F209F0", Offset = "0x5F1F9F0", VA = "0x5F209F0")]
	public SqlNullValueException(string message)
	{
	}

	[Token(Token = "0x6000AEE")]
	[Address(RVA = "0x5F209D0", Offset = "0x5F1F9D0", VA = "0x5F209D0")]
	public SqlNullValueException(string message, Exception e)
	{
	}

	[Token(Token = "0x6000AEF")]
	[Address(RVA = "0x5F20A10", Offset = "0x5F1FA10", VA = "0x5F20A10")]
	private SqlNullValueException(SerializationInfo si, StreamingContext sc)
	{
	}

	[Token(Token = "0x6000AF0")]
	[Address(RVA = "0x5F20A60", Offset = "0x5F1FA60", VA = "0x5F20A60")]
	private static SerializationInfo SqlNullValueExceptionSerialization(SerializationInfo si, StreamingContext sc)
	{
		return null;
	}
}
