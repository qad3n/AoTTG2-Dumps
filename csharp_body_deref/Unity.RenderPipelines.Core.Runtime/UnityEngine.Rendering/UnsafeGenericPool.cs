// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnsafeGenericPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200008A")]
public static class UnsafeGenericPool<T> where T : new()
{
	[Token(Token = "0x4000222")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ObjectPool<T> s_Pool;

	[Token(Token = "0x6000612")]
	public static T Get()
	{
		return (T)null;
	}

	[Token(Token = "0x6000613")]
	public static ObjectPool<T>.PooledObject Get(out T value)
	{
		return default(ObjectPool<T>.PooledObject);
	}

	[Token(Token = "0x6000614")]
	public static void Release(T toRelease)
	{
	}
}
