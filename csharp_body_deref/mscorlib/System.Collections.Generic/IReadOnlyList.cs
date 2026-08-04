// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.IReadOnlyList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x2000651")]
public interface IReadOnlyList<out T> : IReadOnlyCollection<T>, IEnumerable<T>, IEnumerable
{
	[Token(Token = "0x17000825")]
	T this[int index]
	{
		[Token(Token = "0x6003210")]
		get;
	}
}
