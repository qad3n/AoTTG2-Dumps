// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.GenericPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20000D4")]
public static class GenericPool<T> where T : class, IPoolable
{
	[Token(Token = "0x4000141")]
	[FieldOffset(Offset = "0x0")]
	private static readonly object @lock;

	[Token(Token = "0x4000142")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Stack<T> free;

	[Token(Token = "0x4000143")]
	[FieldOffset(Offset = "0x0")]
	private static readonly HashSet<T> busy;

	[Token(Token = "0x600050C")]
	public static T New(Func<T> constructor)
	{
		return null;
	}

	[Token(Token = "0x600050D")]
	public static void Free(T item)
	{
	}
}
