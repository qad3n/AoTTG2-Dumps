// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.EndOfStreamException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.IO;

[Serializable]
[Token(Token = "0x2000662")]
public class EndOfStreamException : IOException
{
	[Token(Token = "0x60030B8")]
	[Address(RVA = "0x1ACD7A0", Offset = "0x1ACBDA0", VA = "0x181ACD7A0")]
	public EndOfStreamException()
	{
	}

	[Token(Token = "0x60030B9")]
	[Address(RVA = "0x1ACD7F0", Offset = "0x1ACBDF0", VA = "0x181ACD7F0")]
	public EndOfStreamException(string message)
	{
	}

	[Token(Token = "0x60030BA")]
	[Address(RVA = "0x19A1CD0", Offset = "0x19A02D0", VA = "0x1819A1CD0")]
	protected EndOfStreamException(SerializationInfo info, StreamingContext context)
	{
	}
}
