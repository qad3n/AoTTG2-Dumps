// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Pool.IObjectPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Pool;

[Token(Token = "0x2000291")]
public interface IObjectPool<T> where T : class
{
	[Token(Token = "0x6000DDA")]
	void Release(T element);
}
