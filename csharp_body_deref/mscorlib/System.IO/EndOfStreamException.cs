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
[Token(Token = "0x2000539")]
public class EndOfStreamException : IOException
{
	[Token(Token = "0x60027E9")]
	[Address(RVA = "0x3BE9E50", Offset = "0x3BE9E50", VA = "0x3BE9E50")]
	public EndOfStreamException()
	{
	}

	[Token(Token = "0x60027EA")]
	[Address(RVA = "0x3BE9E90", Offset = "0x3BE9E90", VA = "0x3BE9E90")]
	public EndOfStreamException(string message)
	{
	}

	[Token(Token = "0x60027EB")]
	[Address(RVA = "0x3BE9EB0", Offset = "0x3BE9EB0", VA = "0x3BE9EB0")]
	protected EndOfStreamException(SerializationInfo info, StreamingContext context)
	{
	}
}
