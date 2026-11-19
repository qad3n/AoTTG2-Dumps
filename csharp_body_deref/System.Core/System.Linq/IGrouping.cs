// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.IGrouping
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Linq;

[Token(Token = "0x2000036")]
public interface IGrouping<out TKey, out TElement> : IEnumerable<TElement>, IEnumerable
{
	[Token(Token = "0x17000030")]
	TKey Key
	{
		[Token(Token = "0x600016E")]
		get;
	}
}
