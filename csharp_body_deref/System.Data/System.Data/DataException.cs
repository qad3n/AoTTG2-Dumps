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
[Token(Token = "0x2000019")]
public class DataException : SystemException
{
	[Token(Token = "0x6000149")]
	[Address(RVA = "0x4547790", Offset = "0x4547790", VA = "0x4547790")]
	protected DataException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x45477A0", Offset = "0x45477A0", VA = "0x45477A0")]
	public DataException()
	{
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x45477E0", Offset = "0x45477E0", VA = "0x45477E0")]
	public DataException(string s)
	{
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x4547800", Offset = "0x4547800", VA = "0x4547800")]
	public DataException(string s, Exception innerException)
	{
	}
}
