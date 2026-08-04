// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ListPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200008B")]
public static class ListPool<T>
{
	[Token(Token = "0x4000223")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ObjectPool<List<T>> s_Pool;

	[Token(Token = "0x6000616")]
	public static List<T> Get()
	{
		return null;
	}

	[Token(Token = "0x6000617")]
	public static ObjectPool<List<T>>.PooledObject Get(out List<T> value)
	{
		return default(ObjectPool<List<T>>.PooledObject);
	}

	[Token(Token = "0x6000618")]
	public static void Release(List<T> toRelease)
	{
	}
}
