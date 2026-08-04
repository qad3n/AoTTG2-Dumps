// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.ManualPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20000DA")]
public static class ManualPool<T> where T : class
{
	[Token(Token = "0x400014A")]
	[FieldOffset(Offset = "0x0")]
	private static readonly object @lock;

	[Token(Token = "0x400014B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Stack<T> free;

	[Token(Token = "0x400014C")]
	[FieldOffset(Offset = "0x0")]
	private static readonly HashSet<T> busy;

	[Token(Token = "0x600051B")]
	public static T New(Func<T> constructor)
	{
		return null;
	}

	[Token(Token = "0x600051C")]
	public static void Free(T item)
	{
	}
}
