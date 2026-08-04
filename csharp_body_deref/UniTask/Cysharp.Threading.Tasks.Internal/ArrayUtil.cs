// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Internal.ArrayUtil
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
