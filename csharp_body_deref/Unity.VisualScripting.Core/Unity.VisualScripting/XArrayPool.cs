// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.XArrayPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20000D2")]
public static class XArrayPool
{
	[Token(Token = "0x6000507")]
	public static T[] ToArrayPooled<T>(this IEnumerable<T> source)
	{
		return null;
	}

	[Token(Token = "0x6000508")]
	public static void Free<T>(this T[] array)
	{
	}
}
