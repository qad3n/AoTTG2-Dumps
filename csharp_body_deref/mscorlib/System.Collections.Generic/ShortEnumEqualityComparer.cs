// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.ShortEnumEqualityComparer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x2000678")]
internal sealed class ShortEnumEqualityComparer<T> : System.Collections.Generic.EnumEqualityComparer<T>, ISerializable where T : struct
{
	[Token(Token = "0x6003333")]
	public ShortEnumEqualityComparer()
	{
	}

	[Token(Token = "0x6003334")]
	public ShortEnumEqualityComparer(SerializationInfo information, StreamingContext context)
	{
	}

	[Token(Token = "0x6003335")]
	public override int GetHashCode(T obj)
	{
		return default(int);
	}
}
