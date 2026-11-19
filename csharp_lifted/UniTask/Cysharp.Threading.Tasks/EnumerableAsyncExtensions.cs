// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.EnumerableAsyncExtensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000025")]
public static class EnumerableAsyncExtensions
{
	[Token(Token = "0x60000D6")]
	public static IEnumerable<UniTask> Select<T>(this IEnumerable<T> source, Func<T, UniTask> selector)
	{
		return null;
	}

	[Token(Token = "0x60000D7")]
	public static IEnumerable<UniTask<TR>> Select<T, TR>(this IEnumerable<T> source, Func<T, UniTask<TR>> selector)
	{
		return null;
	}

	[Token(Token = "0x60000D8")]
	public static IEnumerable<UniTask> Select<T>(this IEnumerable<T> source, Func<T, int, UniTask> selector)
	{
		return null;
	}

	[Token(Token = "0x60000D9")]
	public static IEnumerable<UniTask<TR>> Select<T, TR>(this IEnumerable<T> source, Func<T, int, UniTask<TR>> selector)
	{
		return null;
	}
}
