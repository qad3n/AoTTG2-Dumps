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
[Token(Token = "0x2000544")]
public class PathTooLongException : IOException
{
	[Token(Token = "0x600283F")]
	[Address(RVA = "0x3BEE3F0", Offset = "0x3BEE3F0", VA = "0x3BEE3F0")]
	public PathTooLongException()
	{
	}

	[Token(Token = "0x6002840")]
	[Address(RVA = "0x3BEE430", Offset = "0x3BEE430", VA = "0x3BEE430")]
	public PathTooLongException(string message)
	{
	}

	[Token(Token = "0x6002841")]
	[Address(RVA = "0x3BEE450", Offset = "0x3BEE450", VA = "0x3BEE450")]
	protected PathTooLongException(SerializationInfo info, StreamingContext context)
	{
	}
}
