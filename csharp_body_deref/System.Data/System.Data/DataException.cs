// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.DataException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Data;

[Serializable]
[Token(Token = "0x200000D")]
public class DataException : SystemException
{
	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x5E6BA90", Offset = "0x5E6AA90", VA = "0x5E6BA90")]
	protected DataException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x5E6BAA0", Offset = "0x5E6AAA0", VA = "0x5E6BAA0")]
	public DataException()
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x5E6BAE0", Offset = "0x5E6AAE0", VA = "0x5E6BAE0")]
	public DataException(string s)
	{
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x5E6BB00", Offset = "0x5E6AB00", VA = "0x5E6BB00")]
	public DataException(string s, Exception innerException)
	{
	}
}
