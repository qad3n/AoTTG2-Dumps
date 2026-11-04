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
	[Address(RVA = "0x257C780", Offset = "0x257AD80", VA = "0x18257C780")]
	public SqlTruncateException()
	{
	}

	[Token(Token = "0x6000AF2")]
	[Address(RVA = "0x257C8B0", Offset = "0x257AEB0", VA = "0x18257C8B0")]
	public SqlTruncateException(string message)
	{
	}

	[Token(Token = "0x6000AF3")]
	[Address(RVA = "0x257C760", Offset = "0x257AD60", VA = "0x18257C760")]
	public SqlTruncateException(string message, Exception e)
	{
	}

	[Token(Token = "0x6000AF4")]
	[Address(RVA = "0x257C7B0", Offset = "0x257ADB0", VA = "0x18257C7B0")]
	private SqlTruncateException(SerializationInfo si, StreamingContext sc)
	{
	}

	[Token(Token = "0x6000AF5")]
	[Address(RVA = "0x257C680", Offset = "0x257AC80", VA = "0x18257C680")]
	private static SerializationInfo SqlTruncateExceptionSerialization(SerializationInfo si, StreamingContext sc)
	{
		return null;
	}
}
