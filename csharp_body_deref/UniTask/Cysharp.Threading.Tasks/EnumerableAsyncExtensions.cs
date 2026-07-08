using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000027")]
public static class EnumerableAsyncExtensions
{
	[Token(Token = "0x60000D8")]
	public static IEnumerable<UniTask> Select<T>(this IEnumerable<T> source, Func<T, UniTask> selector)
	{
		return null;
	}

	[Token(Token = "0x60000D9")]
	public static IEnumerable<UniTask<TR>> Select<T, TR>(this IEnumerable<T> source, Func<T, UniTask<TR>> selector)
	{
		return null;
	}

	[Token(Token = "0x60000DA")]
	public static IEnumerable<UniTask> Select<T>(this IEnumerable<T> source, Func<T, int, UniTask> selector)
	{
		return null;
	}

	[Token(Token = "0x60000DB")]
	public static IEnumerable<UniTask<TR>> Select<T, TR>(this IEnumerable<T> source, Func<T, int, UniTask<TR>> selector)
	{
		return null;
	}
}
