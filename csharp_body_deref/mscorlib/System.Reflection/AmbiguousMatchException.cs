// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.AmbiguousMatchException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[Token(Token = "0x20004F0")]
public sealed class AmbiguousMatchException : SystemException
{
	[Token(Token = "0x600244F")]
	[Address(RVA = "0x1A3EC20", Offset = "0x1A3D220", VA = "0x181A3EC20")]
	public AmbiguousMatchException()
	{
	}

	[Token(Token = "0x6002450")]
	[Address(RVA = "0x1A3EC00", Offset = "0x1A3D200", VA = "0x181A3EC00")]
	public AmbiguousMatchException(string message)
	{
	}

	[Token(Token = "0x6002451")]
	[Address(RVA = "0x19A1CD0", Offset = "0x19A02D0", VA = "0x1819A1CD0")]
	internal AmbiguousMatchException(SerializationInfo info, StreamingContext context)
	{
	}
}
