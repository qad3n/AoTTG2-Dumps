// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DictionaryPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200008F")]
public static class DictionaryPool<TKey, TValue>
{
	[Token(Token = "0x4000227")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ObjectPool<Dictionary<TKey, TValue>> s_Pool;

	[Token(Token = "0x6000624")]
	public static Dictionary<TKey, TValue> Get()
	{
		return null;
	}

	[Token(Token = "0x6000625")]
	public static ObjectPool<Dictionary<TKey, TValue>>.PooledObject Get(out Dictionary<TKey, TValue> value)
	{
		return default(ObjectPool<Dictionary<TKey, TValue>>.PooledObject);
	}

	[Token(Token = "0x6000626")]
	public static void Release(Dictionary<TKey, TValue> toRelease)
	{
	}
}
