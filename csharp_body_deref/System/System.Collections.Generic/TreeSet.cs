// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.TreeSet
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x2000268")]
internal sealed class TreeSet<T> : SortedSet<T>
{
	[Token(Token = "0x60010CE")]
	public TreeSet()
	{
	}

	[Token(Token = "0x60010CF")]
	public TreeSet(IComparer<T> comparer)
	{
	}

	[Token(Token = "0x60010D0")]
	public TreeSet(SerializationInfo siInfo, StreamingContext context)
	{
	}

	[Token(Token = "0x60010D1")]
	internal override bool AddIfNotPresent(T item)
	{
		return default(bool);
	}
}
