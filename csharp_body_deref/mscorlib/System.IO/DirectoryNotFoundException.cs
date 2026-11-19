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
[Token(Token = "0x200063A")]
public class DirectoryNotFoundException : IOException
{
	[Token(Token = "0x600307A")]
	[Address(RVA = "0x54646F0", Offset = "0x54636F0", VA = "0x54646F0")]
	public DirectoryNotFoundException()
	{
	}

	[Token(Token = "0x600307B")]
	[Address(RVA = "0x5464730", Offset = "0x5463730", VA = "0x5464730")]
	public DirectoryNotFoundException(string message)
	{
	}

	[Token(Token = "0x600307C")]
	[Address(RVA = "0x5464750", Offset = "0x5463750", VA = "0x5464750")]
	protected DirectoryNotFoundException(SerializationInfo info, StreamingContext context)
	{
	}
}
