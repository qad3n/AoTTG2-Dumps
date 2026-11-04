// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.HashSetPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000057")]
public static class HashSetPool<T>
{
	[Token(Token = "0x4000146")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ObjectPool<HashSet<T>> s_Pool;

	[Token(Token = "0x6000534")]
	public static HashSet<T> Get()
	{
		return null;
	}

	[Token(Token = "0x6000535")]
	public static ObjectPool<HashSet<T>>.PooledObject Get(out HashSet<T> value)
	{
		return default(ObjectPool<HashSet<T>>.PooledObject);
	}

	[Token(Token = "0x6000536")]
	public static void Release(HashSet<T> toRelease)
	{
	}
}
