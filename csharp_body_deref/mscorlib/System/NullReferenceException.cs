// ==================== AoTTG2 cross-reference ====================
// Type: System.NullReferenceException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000F2")]
public class NullReferenceException : SystemException
{
	[Token(Token = "0x60008D6")]
	[Address(RVA = "0x54BCB90", Offset = "0x54BBB90", VA = "0x54BCB90")]
	public NullReferenceException()
	{
	}

	[Token(Token = "0x60008D7")]
	[Address(RVA = "0x54BCBD0", Offset = "0x54BBBD0", VA = "0x54BCBD0")]
	public NullReferenceException(string message)
	{
	}

	[Token(Token = "0x60008D8")]
	[Address(RVA = "0x54BCBF0", Offset = "0x54BBBF0", VA = "0x54BCBF0")]
	protected NullReferenceException(SerializationInfo info, StreamingContext context)
	{
	}
}
