// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Pool.GenericPool
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Pool;

[Token(Token = "0x20002EB")]
public class GenericPool<T> where T : class, new()
{
	[Token(Token = "0x4000771")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly ObjectPool<T> s_Pool;

	[Token(Token = "0x60011DA")]
	public static T Get()
	{
		return null;
	}

	[Token(Token = "0x60011DB")]
	public static PooledObject<T> Get(out T value)
	{
		return default(PooledObject<T>);
	}

	[Token(Token = "0x60011DC")]
	public static void Release(T toRelease)
	{
	}
}
