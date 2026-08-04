// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.StateExtensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000014")]
public static class StateExtensions
{
	[Token(Token = "0x600007F")]
	public static ReadOnlyAsyncReactiveProperty<T> ToReadOnlyAsyncReactiveProperty<T>(this IUniTaskAsyncEnumerable<T> source, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000080")]
	public static ReadOnlyAsyncReactiveProperty<T> ToReadOnlyAsyncReactiveProperty<T>(this IUniTaskAsyncEnumerable<T> source, T initialValue, CancellationToken cancellationToken)
	{
		return null;
	}
}
