// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.DirectoryNotFoundException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.IO;

[Serializable]
[Token(Token = "0x2000661")]
public class DirectoryNotFoundException : IOException
{
	[Token(Token = "0x60030B5")]
	[Address(RVA = "0x1ACD680", Offset = "0x1ACBC80", VA = "0x181ACD680")]
	public DirectoryNotFoundException()
	{
	}

	[Token(Token = "0x60030B6")]
	[Address(RVA = "0x1ACD6D0", Offset = "0x1ACBCD0", VA = "0x181ACD6D0")]
	public DirectoryNotFoundException(string message)
	{
	}

	[Token(Token = "0x60030B7")]
	[Address(RVA = "0x19A1CD0", Offset = "0x19A02D0", VA = "0x1819A1CD0")]
	protected DirectoryNotFoundException(SerializationInfo info, StreamingContext context)
	{
	}
}
