// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.ArrayPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20000D1")]
public static class ArrayPool<T>
{
	[Token(Token = "0x400013B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly object @lock;

	[Token(Token = "0x400013C")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<int, Stack<T[]>> free;

	[Token(Token = "0x400013D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly HashSet<T[]> busy;

	[Token(Token = "0x6000504")]
	public static T[] New(int length)
	{
		return null;
	}

	[Token(Token = "0x6000505")]
	public static void Free(T[] array)
	{
	}
}
