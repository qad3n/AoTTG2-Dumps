using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Pool;

[Token(Token = "0x200028C")]
public class CollectionPool<TCollection, TItem> where TCollection : class, ICollection<TItem>, new()
{
	[Token(Token = "0x40006C5")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly ObjectPool<TCollection> s_Pool;

	[Token(Token = "0x6000DD0")]
	public static TCollection Get()
	{
		return null;
	}

	[Token(Token = "0x6000DD1")]
	public static PooledObject<TCollection> Get(out TCollection value)
	{
		return default(PooledObject<TCollection>);
	}

	[Token(Token = "0x6000DD2")]
	public static void Release(TCollection toRelease)
	{
	}
}
