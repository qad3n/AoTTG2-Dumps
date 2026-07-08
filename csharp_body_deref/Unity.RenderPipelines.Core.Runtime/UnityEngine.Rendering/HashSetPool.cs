using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200008D")]
public static class HashSetPool<T>
{
	[Token(Token = "0x4000225")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ObjectPool<HashSet<T>> s_Pool;

	[Token(Token = "0x600061D")]
	public static HashSet<T> Get()
	{
		return null;
	}

	[Token(Token = "0x600061E")]
	public static ObjectPool<HashSet<T>>.PooledObject Get(out HashSet<T> value)
	{
		return default(ObjectPool<HashSet<T>>.PooledObject);
	}

	[Token(Token = "0x600061F")]
	public static void Release(HashSet<T> toRelease)
	{
	}
}
