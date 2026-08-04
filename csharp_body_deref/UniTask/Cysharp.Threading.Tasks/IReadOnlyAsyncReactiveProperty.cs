// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.IReadOnlyAsyncReactiveProperty
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Threading;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000007")]
public interface IReadOnlyAsyncReactiveProperty<T> : IUniTaskAsyncEnumerable<T>
{
	[Token(Token = "0x17000004")]
	T Value
	{
		[Token(Token = "0x6000017")]
		get;
	}

	[Token(Token = "0x6000018")]
	IUniTaskAsyncEnumerable<T> WithoutCurrent();

	[Token(Token = "0x6000019")]
	UniTask<T> WaitAsync([Optional] CancellationToken cancellationToken);
}
