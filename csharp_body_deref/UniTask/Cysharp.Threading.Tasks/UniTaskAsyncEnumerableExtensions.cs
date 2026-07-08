using System.Threading;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000035")]
public static class UniTaskAsyncEnumerableExtensions
{
	[Token(Token = "0x6000112")]
	public static UniTaskCancelableAsyncEnumerable<T> WithCancellation<T>(this IUniTaskAsyncEnumerable<T> source, CancellationToken cancellationToken)
	{
		return default(UniTaskCancelableAsyncEnumerable<T>);
	}
}
