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
[Token(Token = "0x20000F1")]
public class NotSupportedException : SystemException
{
	[Token(Token = "0x60008D2")]
	[Address(RVA = "0x54BCB20", Offset = "0x54BBB20", VA = "0x54BCB20")]
	public NotSupportedException()
	{
	}

	[Token(Token = "0x60008D3")]
	[Address(RVA = "0x54B5310", Offset = "0x54B4310", VA = "0x54B5310")]
	public NotSupportedException(string message)
	{
	}

	[Token(Token = "0x60008D4")]
	[Address(RVA = "0x54BCB60", Offset = "0x54BBB60", VA = "0x54BCB60")]
	public NotSupportedException(string message, Exception innerException)
	{
	}

	[Token(Token = "0x60008D5")]
	[Address(RVA = "0x54BCB80", Offset = "0x54BBB80", VA = "0x54BCB80")]
	protected NotSupportedException(SerializationInfo info, StreamingContext context)
	{
	}
}
