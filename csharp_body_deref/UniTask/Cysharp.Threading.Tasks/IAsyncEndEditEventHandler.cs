// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.IAsyncEndEditEventHandler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000170")]
public interface IAsyncEndEditEventHandler<T> : IDisposable
{
	[Token(Token = "0x60008DD")]
	UniTask<T> OnEndEditAsync();
}
