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
