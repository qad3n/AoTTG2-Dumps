// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.UniTaskAsyncEnumerableExtensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000036")]
public static class UniTaskAsyncEnumerableExtensions
{
	[Token(Token = "0x6000118")]
	public static UniTaskCancelableAsyncEnumerable<T> WithCancellation<T>(this IUniTaskAsyncEnumerable<T> source, CancellationToken cancellationToken)
	{
		return default(UniTaskCancelableAsyncEnumerable<T>);
	}
}
