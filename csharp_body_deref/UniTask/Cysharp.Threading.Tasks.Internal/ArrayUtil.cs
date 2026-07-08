using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.Internal;

[Token(Token = "0x2000228")]
internal static class ArrayUtil
{
	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C74")]
	public static void EnsureCapacity<T>(ref T[] array, int index)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000C75")]
	private static void EnsureCore<T>(ref T[] array, int index)
	{
	}

	[Token(Token = "0x6000C76")]
	public static (T[], int) Materialize<T>(IEnumerable<T> source)
	{
		return default((T[], int));
	}
}
