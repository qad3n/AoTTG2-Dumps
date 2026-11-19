// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.TreeSet
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x2000229")]
internal sealed class TreeSet<T> : SortedSet<T>
{
	[Token(Token = "0x6000F0E")]
	public TreeSet()
	{
	}

	[Token(Token = "0x6000F0F")]
	public TreeSet(IComparer<T> comparer)
	{
	}

	[Token(Token = "0x6000F10")]
	public TreeSet(SerializationInfo siInfo, StreamingContext context)
	{
	}

	[Token(Token = "0x6000F11")]
	internal override bool AddIfNotPresent(T item)
	{
		return default(bool);
	}
}
