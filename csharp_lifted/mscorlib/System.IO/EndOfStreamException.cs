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
[Token(Token = "0x200063B")]
public class EndOfStreamException : IOException
{
	[Token(Token = "0x600307D")]
	[Address(RVA = "0x5464770", Offset = "0x5463770", VA = "0x5464770")]
	public EndOfStreamException()
	{
	}

	[Token(Token = "0x600307E")]
	[Address(RVA = "0x54647B0", Offset = "0x54637B0", VA = "0x54647B0")]
	public EndOfStreamException(string message)
	{
	}

	[Token(Token = "0x600307F")]
	[Address(RVA = "0x54647D0", Offset = "0x54637D0", VA = "0x54647D0")]
	protected EndOfStreamException(SerializationInfo info, StreamingContext context)
	{
	}
}
