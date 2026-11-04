// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.ListExtensions
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.Collections;

[Token(Token = "0x2000080")]
public static class ListExtensions
{
	[Token(Token = "0x60006DC")]
	public static bool RemoveSwapBack<T>(this List<T> list, T value)
	{
		return default(bool);
	}

	[Token(Token = "0x60006DD")]
	public static bool RemoveSwapBack<T>(this List<T> list, Predicate<T> matcher)
	{
		return default(bool);
	}

	[Token(Token = "0x60006DE")]
	public static void RemoveAtSwapBack<T>(this List<T> list, int index)
	{
	}

	[Token(Token = "0x60006DF")]
	public static NativeList<T> ToNativeList<T>(this List<T> list, AllocatorManager.AllocatorHandle allocator) where T : struct
	{
		return default(NativeList<T>);
	}

	[Token(Token = "0x60006E0")]
	public static NativeArray<T> ToNativeArray<T>(this List<T> list, AllocatorManager.AllocatorHandle allocator) where T : struct
	{
		return default(NativeArray<T>);
	}
}
