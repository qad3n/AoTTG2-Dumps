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
	[Address(RVA = "0x19A1CD0", Offset = "0x19A02D0", VA = "0x1819A1CD0")]
	protected DataException(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x24C8870", Offset = "0x24C6E70", VA = "0x1824C8870")]
	public DataException()
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x24C8850", Offset = "0x24C6E50", VA = "0x1824C8850")]
	public DataException(string s)
	{
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x19E0110", Offset = "0x19DE710", VA = "0x1819E0110")]
	public DataException(string s, Exception innerException)
	{
	}
}
