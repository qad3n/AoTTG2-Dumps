// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.IPromise
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x200011C")]
public interface IPromise<T> : IResolvePromise<T>, IRejectPromise, ICancelPromise
{
}
[Token(Token = "0x200011D")]
public interface IPromise : IResolvePromise, IRejectPromise, ICancelPromise
{
}
