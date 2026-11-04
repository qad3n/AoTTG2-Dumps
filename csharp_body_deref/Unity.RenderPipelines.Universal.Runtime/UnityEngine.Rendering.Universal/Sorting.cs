// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.Sorting
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20000F2")]
internal struct Sorting
{
	[Token(Token = "0x400058D")]
	[FieldOffset(Offset = "0x0")]
	public static ProfilingSampler s_QuickSortSampler;

	[Token(Token = "0x400058E")]
	[FieldOffset(Offset = "0x8")]
	public static ProfilingSampler s_InsertionSortSampler;

	[Token(Token = "0x60006A0")]
	public static void QuickSort<T>(T[] data, Func<T, T, int> compare)
	{
	}

	[Token(Token = "0x60006A1")]
	public static void QuickSort<T>(T[] data, int start, int end, Func<T, T, int> compare)
	{
	}

	[Token(Token = "0x60006A2")]
	private static T Median3Pivot<T>(T[] data, int start, int pivot, int end, Func<T, T, int> compare)
	{
		return (T)null;
	}

	[Token(Token = "0x60006A3")]
	private static int Partition<T>(T[] data, int start, int end, Func<T, T, int> compare)
	{
		return default(int);
	}

	[Token(Token = "0x60006A4")]
	public static void InsertionSort<T>(T[] data, Func<T, T, int> compare)
	{
	}

	[Token(Token = "0x60006A5")]
	public static void InsertionSort<T>(T[] data, int start, int end, Func<T, T, int> compare)
	{
	}
}
