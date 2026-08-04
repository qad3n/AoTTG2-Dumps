// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000032")]
public interface IUniTaskAsyncEnumerator<out T> : IUniTaskAsyncDisposable
{
	[Token(Token = "0x17000023")]
	T Current
	{
		[Token(Token = "0x6000111")]
		get;
	}

	[Token(Token = "0x6000112")]
	UniTask<bool> MoveNextAsync();
}
