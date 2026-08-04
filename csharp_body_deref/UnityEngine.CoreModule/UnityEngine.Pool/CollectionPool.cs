// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Pool.CollectionPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Pool;

[Token(Token = "0x200028F")]
public class CollectionPool<TCollection, TItem> where TCollection : class, ICollection<TItem>, new()
{
	[Token(Token = "0x40006C5")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly ObjectPool<TCollection> s_Pool;

	[Token(Token = "0x6000DD2")]
	public static TCollection Get()
	{
		return null;
	}

	[Token(Token = "0x6000DD3")]
	public static PooledObject<TCollection> Get(out TCollection value)
	{
		return default(PooledObject<TCollection>);
	}

	[Token(Token = "0x6000DD4")]
	public static void Release(TCollection toRelease)
	{
	}
}
