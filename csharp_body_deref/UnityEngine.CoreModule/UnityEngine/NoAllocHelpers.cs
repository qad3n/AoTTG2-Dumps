// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.NoAllocHelpers
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20001A9")]
[UnityEngine.Bindings.VisibleToOtherModules]
internal static class NoAllocHelpers
{
	[Token(Token = "0x20001AA")]
	private class ListPrivateFieldAccess<T>
	{
		[Token(Token = "0x4000625")]
		[FieldOffset(Offset = "0x0")]
		internal T[] _items;

		[Token(Token = "0x4000626")]
		[FieldOffset(Offset = "0x0")]
		internal int _size;

		[Token(Token = "0x4000627")]
		[FieldOffset(Offset = "0x0")]
		internal int _version;
	}

	[Token(Token = "0x6000E15")]
	public static void EnsureListElemCount<T>(List<T> list, int count)
	{
	}

	[Token(Token = "0x6000E16")]
	[Address(RVA = "0x2F1E1B0", Offset = "0x2F1C7B0", VA = "0x182F1E1B0")]
	public static int SafeLength(Array values)
	{
		return default(int);
	}

	[Token(Token = "0x6000E17")]
	public static int SafeLength<T>(List<T> values)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000E18")]
	public static T[] ExtractArrayFromList<T>(List<T> list)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000E19")]
	public static ReadOnlySpan<T> CreateReadOnlySpan<T>(List<T> list)
	{
		return default(ReadOnlySpan<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000E1A")]
	public static void ResetListContents<T>(List<T> list, ReadOnlySpan<T> span)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000E1B")]
	public static void ResetListSize<T>(List<T> list, int size)
	{
	}

	[Token(Token = "0x6000E1C")]
	[Address(RVA = "0x2F1E0D0", Offset = "0x2F1C6D0", VA = "0x182F1E0D0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static Array PrepareListForNativeFill(object list, Type elementType, int newSize)
	{
		return null;
	}
}
