// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.IResolvePromise
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000118")]
public interface IResolvePromise
{
	[Token(Token = "0x60006CD")]
	bool TrySetResult();
}
[Token(Token = "0x2000119")]
public interface IResolvePromise<T>
{
	[Token(Token = "0x60006CE")]
	bool TrySetResult(T value);
}
