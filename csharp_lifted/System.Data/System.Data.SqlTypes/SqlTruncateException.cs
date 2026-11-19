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
[Token(Token = "0x20000BD")]
public sealed class SqlTruncateException : SqlTypeException
{
	[Token(Token = "0x6000AF1")]
	[Address(RVA = "0x5F122C0", Offset = "0x5F112C0", VA = "0x5F122C0")]
	public SqlTruncateException()
	{
	}

	[Token(Token = "0x6000AF2")]
	[Address(RVA = "0x5F20B30", Offset = "0x5F1FB30", VA = "0x5F20B30")]
	public SqlTruncateException(string message)
	{
	}

	[Token(Token = "0x6000AF3")]
	[Address(RVA = "0x5F20B10", Offset = "0x5F1FB10", VA = "0x5F20B10")]
	public SqlTruncateException(string message, Exception e)
	{
	}

	[Token(Token = "0x6000AF4")]
	[Address(RVA = "0x5F20B50", Offset = "0x5F1FB50", VA = "0x5F20B50")]
	private SqlTruncateException(SerializationInfo si, StreamingContext sc)
	{
	}

	[Token(Token = "0x6000AF5")]
	[Address(RVA = "0x5F20BA0", Offset = "0x5F1FBA0", VA = "0x5F20BA0")]
	private static SerializationInfo SqlTruncateExceptionSerialization(SerializationInfo si, StreamingContext sc)
	{
		return null;
	}
}
