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
	[Address(RVA = "0x2578490", Offset = "0x2576A90", VA = "0x182578490")]
	public SqlNullValueException()
	{
	}

	[Token(Token = "0x6000AED")]
	[Address(RVA = "0x25785E0", Offset = "0x2576BE0", VA = "0x1825785E0")]
	public SqlNullValueException(string message)
	{
	}

	[Token(Token = "0x6000AEE")]
	[Address(RVA = "0x25784C0", Offset = "0x2576AC0", VA = "0x1825784C0")]
	public SqlNullValueException(string message, Exception e)
	{
	}

	[Token(Token = "0x6000AEF")]
	[Address(RVA = "0x25784E0", Offset = "0x2576AE0", VA = "0x1825784E0")]
	private SqlNullValueException(SerializationInfo si, StreamingContext sc)
	{
	}

	[Token(Token = "0x6000AF0")]
	[Address(RVA = "0x25783B0", Offset = "0x25769B0", VA = "0x1825783B0")]
	private static SerializationInfo SqlNullValueExceptionSerialization(SerializationInfo si, StreamingContext sc)
	{
		return null;
	}
}
