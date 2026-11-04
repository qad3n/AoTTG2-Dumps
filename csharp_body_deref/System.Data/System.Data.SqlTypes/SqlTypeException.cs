// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.SqlTypes.SqlTypeException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Data.SqlTypes;

[Serializable]
[Token(Token = "0x20000BB")]
public class SqlTypeException : SystemException
{
	[Token(Token = "0x6000AE7")]
	[Address(RVA = "0x257CA10", Offset = "0x257B010", VA = "0x18257CA10")]
	public SqlTypeException()
	{
	}

	[Token(Token = "0x6000AE8")]
	[Address(RVA = "0x257C9E0", Offset = "0x257AFE0", VA = "0x18257C9E0")]
	public SqlTypeException(string message)
	{
	}

	[Token(Token = "0x6000AE9")]
	[Address(RVA = "0x257C9C0", Offset = "0x257AFC0", VA = "0x18257C9C0")]
	public SqlTypeException(string message, Exception e)
	{
	}

	[Token(Token = "0x6000AEA")]
	[Address(RVA = "0x257CA60", Offset = "0x257B060", VA = "0x18257CA60")]
	protected SqlTypeException(SerializationInfo si, StreamingContext sc)
	{
	}

	[Token(Token = "0x6000AEB")]
	[Address(RVA = "0x257C8E0", Offset = "0x257AEE0", VA = "0x18257C8E0")]
	private static SerializationInfo SqlTypeExceptionSerialization(SerializationInfo si, StreamingContext sc)
	{
		return null;
	}
}
