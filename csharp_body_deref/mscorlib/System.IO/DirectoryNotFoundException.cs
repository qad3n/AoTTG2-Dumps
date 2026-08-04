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
[Token(Token = "0x2000538")]
public class DirectoryNotFoundException : IOException
{
	[Token(Token = "0x60027E6")]
	[Address(RVA = "0x3BE9DB0", Offset = "0x3BE9DB0", VA = "0x3BE9DB0")]
	public DirectoryNotFoundException()
	{
	}

	[Token(Token = "0x60027E7")]
	[Address(RVA = "0x3BE9E10", Offset = "0x3BE9E10", VA = "0x3BE9E10")]
	public DirectoryNotFoundException(string message)
	{
	}

	[Token(Token = "0x60027E8")]
	[Address(RVA = "0x3BE9E30", Offset = "0x3BE9E30", VA = "0x3BE9E30")]
	protected DirectoryNotFoundException(SerializationInfo info, StreamingContext context)
	{
	}
}
