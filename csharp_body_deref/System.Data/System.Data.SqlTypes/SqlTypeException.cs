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
[Token(Token = "0x20000B1")]
public class SqlTypeException : SystemException
{
	[Token(Token = "0x6000AC8")]
	[Address(RVA = "0x461D170", Offset = "0x461D170", VA = "0x461D170")]
	public SqlTypeException()
	{
	}

	[Token(Token = "0x6000AC9")]
	[Address(RVA = "0x4606050", Offset = "0x4606050", VA = "0x4606050")]
	public SqlTypeException(string message)
	{
	}

	[Token(Token = "0x6000ACA")]
	[Address(RVA = "0x461D1B0", Offset = "0x461D1B0", VA = "0x461D1B0")]
	public SqlTypeException(string message, Exception e)
	{
	}

	[Token(Token = "0x6000ACB")]
	[Address(RVA = "0x461D1D0", Offset = "0x461D1D0", VA = "0x461D1D0")]
	protected SqlTypeException(SerializationInfo si, StreamingContext sc)
	{
	}

	[Token(Token = "0x6000ACC")]
	[Address(RVA = "0x461D200", Offset = "0x461D200", VA = "0x461D200")]
	private static SerializationInfo SqlTypeExceptionSerialization(SerializationInfo si, StreamingContext sc)
	{
		return null;
	}
}
