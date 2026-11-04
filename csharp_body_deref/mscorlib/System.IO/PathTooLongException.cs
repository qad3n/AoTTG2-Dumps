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
[Token(Token = "0x200066D")]
public class PathTooLongException : IOException
{
	[Token(Token = "0x6003114")]
	[Address(RVA = "0x1AD9E30", Offset = "0x1AD8430", VA = "0x181AD9E30")]
	public PathTooLongException()
	{
	}

	[Token(Token = "0x6003115")]
	[Address(RVA = "0x1AD9E80", Offset = "0x1AD8480", VA = "0x181AD9E80")]
	public PathTooLongException(string message)
	{
	}

	[Token(Token = "0x6003116")]
	[Address(RVA = "0x19A1CD0", Offset = "0x19A02D0", VA = "0x1819A1CD0")]
	protected PathTooLongException(SerializationInfo info, StreamingContext context)
	{
	}
}
