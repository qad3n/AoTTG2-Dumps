// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.PathTooLongException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.IO;

[Serializable]
[Token(Token = "0x2000646")]
public class PathTooLongException : IOException
{
	[Token(Token = "0x60030D2")]
	[Address(RVA = "0x5468970", Offset = "0x5467970", VA = "0x5468970")]
	public PathTooLongException()
	{
	}

	[Token(Token = "0x60030D3")]
	[Address(RVA = "0x54689B0", Offset = "0x54679B0", VA = "0x54689B0")]
	public PathTooLongException(string message)
	{
	}

	[Token(Token = "0x60030D4")]
	[Address(RVA = "0x54689D0", Offset = "0x54679D0", VA = "0x54689D0")]
	protected PathTooLongException(SerializationInfo info, StreamingContext context)
	{
	}
}
