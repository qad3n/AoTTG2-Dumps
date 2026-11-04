// ==================== AoTTG2 cross-reference ====================
// Type: System.NotSupportedException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000119")]
public class NotSupportedException : SystemException
{
	[Token(Token = "0x60008F7")]
	[Address(RVA = "0x1B2E400", Offset = "0x1B2CA00", VA = "0x181B2E400")]
	public NotSupportedException()
	{
	}

	[Token(Token = "0x60008F8")]
	[Address(RVA = "0x1B2E470", Offset = "0x1B2CA70", VA = "0x181B2E470")]
	public NotSupportedException(string message)
	{
	}

	[Token(Token = "0x60008F9")]
	[Address(RVA = "0x1B2E450", Offset = "0x1B2CA50", VA = "0x181B2E450")]
	public NotSupportedException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x60008FA")]
	[Address(RVA = "0x19A1CD0", Offset = "0x19A02D0", VA = "0x1819A1CD0")]
	protected NotSupportedException(SerializationInfo info, StreamingContext context)
	{
	}
}
