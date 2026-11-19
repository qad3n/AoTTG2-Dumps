// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.AmbiguousImplementationException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Runtime;

[Serializable]
[Token(Token = "0x200033F")]
public sealed class AmbiguousImplementationException : Exception
{
	[Token(Token = "0x6001C4B")]
	[Address(RVA = "0x5368A90", Offset = "0x5367A90", VA = "0x5368A90")]
	public AmbiguousImplementationException()
	{
	}

	[Token(Token = "0x6001C4C")]
	[Address(RVA = "0x5368B00", Offset = "0x5367B00", VA = "0x5368B00")]
	public AmbiguousImplementationException(string message)
	{
	}

	[Token(Token = "0x6001C4D")]
	[Address(RVA = "0x5368B60", Offset = "0x5367B60", VA = "0x5368B60")]
	private AmbiguousImplementationException(SerializationInfo info, StreamingContext context)
	{
	}
}
