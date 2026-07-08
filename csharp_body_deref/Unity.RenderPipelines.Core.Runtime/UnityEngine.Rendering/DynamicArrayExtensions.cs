using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000079")]
public static class DynamicArrayExtensions
{
	[Token(Token = "0x60005C8")]
	private static int Partition<T>(T[] data, int left, int right) where T : IComparable<T>, new()
	{
		return default(int);
	}

	[Token(Token = "0x60005C9")]
	private static void QuickSort<T>(T[] data, int left, int right) where T : IComparable<T>, new()
	{
	}

	[Token(Token = "0x60005CA")]
	private static int Partition<T>(T[] data, int left, int right, DynamicArray<T>.SortComparer comparer) where T : new()
	{
		return default(int);
	}

	[Token(Token = "0x60005CB")]
	private static void QuickSort<T>(T[] data, int left, int right, DynamicArray<T>.SortComparer comparer) where T : new()
	{
	}

	[Token(Token = "0x60005CC")]
	public static void QuickSort<T>(this DynamicArray<T> array) where T : IComparable<T>, new()
	{
	}

	[Token(Token = "0x60005CD")]
	public static void QuickSort<T>(this DynamicArray<T> array, DynamicArray<T>.SortComparer comparer) where T : new()
	{
	}
}
