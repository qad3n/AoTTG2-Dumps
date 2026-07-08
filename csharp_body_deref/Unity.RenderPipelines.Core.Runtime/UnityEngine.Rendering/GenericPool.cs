using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000089")]
public static class GenericPool<T> where T : new()
{
	[Token(Token = "0x4000221")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ObjectPool<T> s_Pool;

	[Token(Token = "0x600060E")]
	public static T Get()
	{
		return (T)null;
	}

	[Token(Token = "0x600060F")]
	public static ObjectPool<T>.PooledObject Get(out T value)
	{
		return default(ObjectPool<T>.PooledObject);
	}

	[Token(Token = "0x6000610")]
	public static void Release(T toRelease)
	{
	}
}
