// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Pool.GenericPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Pool;

[Token(Token = "0x20002EB")]
public class GenericPool<T> where T : class, new()
{
	[Token(Token = "0x400076F")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly ObjectPool<T> s_Pool;

	[Token(Token = "0x60011EE")]
	public static T Get()
	{
		return null;
	}

	[Token(Token = "0x60011EF")]
	public static PooledObject<T> Get(out T value)
	{
		return default(PooledObject<T>);
	}

	[Token(Token = "0x60011F0")]
	public static void Release(T toRelease)
	{
	}
}
