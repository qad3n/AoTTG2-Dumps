// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_ListPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x2000066")]
internal static class TMP_ListPool<T>
{
	[Token(Token = "0x40002DC")]
	[FieldOffset(Offset = "0x0")]
	private static readonly TMP_ObjectPool<List<T>> s_ListPool;

	[Token(Token = "0x6000388")]
	public static List<T> Get()
	{
		return null;
	}

	[Token(Token = "0x6000389")]
	public static void Release(List<T> toRelease)
	{
	}
}
