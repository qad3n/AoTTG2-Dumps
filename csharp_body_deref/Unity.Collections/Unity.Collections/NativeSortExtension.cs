// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeSortExtension
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;

namespace Unity.Collections;

[Token(Token = "0x20000C1")]
[GenerateTestsForBurstCompatibility]
public static class NativeSortExtension
{
	[Token(Token = "0x20000C2")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public struct DefaultComparer<T> : IComparer<T> where T : IComparable<T>
	{
		[Token(Token = "0x6000944")]
		public int Compare(T x, T y)
		{
			return default(int);
		}
	}

	[Token(Token = "0x40003F1")]
	private const int k_IntrosortSizeThreshold = 16;

	[Token(Token = "0x6000910")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public unsafe static void Sort<T>(T* array, int length) where T : struct, IComparable<T>
	{
	}

	[Token(Token = "0x6000911")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(DefaultComparer<int>)
	})]
	public unsafe static void Sort<T, U>(T* array, int length, U comp) where T : struct where U : IComparer<T>
	{
	}

	[Token(Token = "0x6000912")]
	[GenerateTestsForBurstCompatibility(RequiredUnityDefine = "UNITY_2020_2_OR_NEWER", GenericTypeArguments = new Type[] { typeof(int) })]
	public unsafe static SortJob<T, DefaultComparer<T>> SortJob<T>(T* array, int length) where T : struct, IComparable<T>
	{
		return default(SortJob<T, DefaultComparer<T>>);
	}

	[Token(Token = "0x6000913")]
	[GenerateTestsForBurstCompatibility(RequiredUnityDefine = "UNITY_2020_2_OR_NEWER", GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(DefaultComparer<int>)
	})]
	public unsafe static SortJob<T, U> SortJob<T, U>(T* array, int length, U comp) where T : struct where U : IComparer<T>
	{
		return default(SortJob<T, U>);
	}

	[Token(Token = "0x6000914")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public unsafe static int BinarySearch<T>(T* ptr, int length, T value) where T : struct, IComparable<T>
	{
		return default(int);
	}

	[Token(Token = "0x6000915")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(DefaultComparer<int>)
	})]
	public unsafe static int BinarySearch<T, U>(T* ptr, int length, T value, U comp) where T : struct where U : IComparer<T>
	{
		return default(int);
	}

	[Token(Token = "0x6000916")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public static void Sort<T>(this NativeArray<T> array) where T : struct, IComparable<T>
	{
	}

	[Token(Token = "0x6000917")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(DefaultComparer<int>)
	})]
	public static void Sort<T, U>(this NativeArray<T> array, U comp) where T : struct where U : IComparer<T>
	{
	}

	[Token(Token = "0x6000918")]
	[GenerateTestsForBurstCompatibility(RequiredUnityDefine = "UNITY_2020_2_OR_NEWER", GenericTypeArguments = new Type[] { typeof(int) })]
	public static SortJob<T, DefaultComparer<T>> SortJob<T>(this NativeArray<T> array) where T : struct, IComparable<T>
	{
		return default(SortJob<T, DefaultComparer<T>>);
	}

	[Token(Token = "0x6000919")]
	[GenerateTestsForBurstCompatibility(RequiredUnityDefine = "UNITY_2020_2_OR_NEWER", GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(DefaultComparer<int>)
	})]
	public static SortJob<T, U> SortJob<T, U>(this NativeArray<T> array, U comp) where T : struct where U : IComparer<T>
	{
		return default(SortJob<T, U>);
	}

	[Token(Token = "0x600091A")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public static int BinarySearch<T>(this NativeArray<T> array, T value) where T : struct, IComparable<T>
	{
		return default(int);
	}

	[Token(Token = "0x600091B")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(DefaultComparer<int>)
	})]
	public static int BinarySearch<T, U>(this NativeArray<T> array, T value, U comp) where T : struct where U : IComparer<T>
	{
		return default(int);
	}

	[Token(Token = "0x600091C")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public static int BinarySearch<T>(this NativeArray<T>.ReadOnly array, T value) where T : struct, IComparable<T>
	{
		return default(int);
	}

	[Token(Token = "0x600091D")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(DefaultComparer<int>)
	})]
	public static int BinarySearch<T, U>(this NativeArray<T>.ReadOnly array, T value, U comp) where T : struct where U : IComparer<T>
	{
		return default(int);
	}

	[Token(Token = "0x600091E")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public static void Sort<T>(this NativeList<T> list) where T : struct, IComparable<T>
	{
	}

	[Token(Token = "0x600091F")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(DefaultComparer<int>)
	})]
	public static void Sort<T, U>(this NativeList<T> list, U comp) where T : struct where U : IComparer<T>
	{
	}

	[Token(Token = "0x6000920")]
	[GenerateTestsForBurstCompatibility(RequiredUnityDefine = "UNITY_2020_2_OR_NEWER", GenericTypeArguments = new Type[] { typeof(int) })]
	public static SortJob<T, DefaultComparer<T>> SortJob<T>(this NativeList<T> list) where T : struct, IComparable<T>
	{
		return default(SortJob<T, DefaultComparer<T>>);
	}

	[Token(Token = "0x6000921")]
	[GenerateTestsForBurstCompatibility(RequiredUnityDefine = "UNITY_2020_2_OR_NEWER", GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(DefaultComparer<int>)
	})]
	public static SortJob<T, U> SortJob<T, U>(this NativeList<T> list, U comp) where T : struct where U : IComparer<T>
	{
		return default(SortJob<T, U>);
	}

	[Token(Token = "0x6000922")]
	[GenerateTestsForBurstCompatibility(RequiredUnityDefine = "UNITY_2020_2_OR_NEWER", GenericTypeArguments = new Type[] { typeof(int) })]
	public static SortJobDefer<T, DefaultComparer<T>> SortJobDefer<T>(this NativeList<T> list) where T : struct, IComparable<T>
	{
		return default(SortJobDefer<T, DefaultComparer<T>>);
	}

	[Token(Token = "0x6000923")]
	[GenerateTestsForBurstCompatibility(RequiredUnityDefine = "UNITY_2020_2_OR_NEWER", GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(DefaultComparer<int>)
	})]
	public static SortJobDefer<T, U> SortJobDefer<T, U>(this NativeList<T> list, U comp) where T : struct where U : IComparer<T>
	{
		return default(SortJobDefer<T, U>);
	}

	[Token(Token = "0x6000924")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public static int BinarySearch<T>(this NativeList<T> list, T value) where T : struct, IComparable<T>
	{
		return default(int);
	}

	[Token(Token = "0x6000925")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(DefaultComparer<int>)
	})]
	public static int BinarySearch<T, U>(this NativeList<T> list, T value, U comp) where T : struct where U : IComparer<T>
	{
		return default(int);
	}

	[Token(Token = "0x6000926")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public static void Sort<T>(this UnsafeList<T> list) where T : struct, IComparable<T>
	{
	}

	[Token(Token = "0x6000927")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(DefaultComparer<int>)
	})]
	public static void Sort<T, U>(this UnsafeList<T> list, U comp) where T : struct where U : IComparer<T>
	{
	}

	[Token(Token = "0x6000928")]
	[GenerateTestsForBurstCompatibility(RequiredUnityDefine = "UNITY_2020_2_OR_NEWER", GenericTypeArguments = new Type[] { typeof(int) })]
	public static SortJob<T, DefaultComparer<T>> SortJob<T>(this UnsafeList<T> list) where T : struct, IComparable<T>
	{
		return default(SortJob<T, DefaultComparer<T>>);
	}

	[Token(Token = "0x6000929")]
	[GenerateTestsForBurstCompatibility(RequiredUnityDefine = "UNITY_2020_2_OR_NEWER", GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(DefaultComparer<int>)
	})]
	public static SortJob<T, U> SortJob<T, U>(this UnsafeList<T> list, U comp) where T : struct where U : IComparer<T>
	{
		return default(SortJob<T, U>);
	}

	[Token(Token = "0x600092A")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public static int BinarySearch<T>(this UnsafeList<T> list, T value) where T : struct, IComparable<T>
	{
		return default(int);
	}

	[Token(Token = "0x600092B")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(DefaultComparer<int>)
	})]
	public static int BinarySearch<T, U>(this UnsafeList<T> list, T value, U comp) where T : struct where U : IComparer<T>
	{
		return default(int);
	}

	[Token(Token = "0x600092C")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public static void Sort<T>(this NativeSlice<T> slice) where T : struct, IComparable<T>
	{
	}

	[Token(Token = "0x600092D")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(DefaultComparer<int>)
	})]
	public static void Sort<T, U>(this NativeSlice<T> slice, U comp) where T : struct where U : IComparer<T>
	{
	}

	[Token(Token = "0x600092E")]
	[GenerateTestsForBurstCompatibility(RequiredUnityDefine = "UNITY_2020_2_OR_NEWER", GenericTypeArguments = new Type[] { typeof(int) })]
	public static SortJob<T, DefaultComparer<T>> SortJob<T>(this NativeSlice<T> slice) where T : struct, IComparable<T>
	{
		return default(SortJob<T, DefaultComparer<T>>);
	}

	[Token(Token = "0x600092F")]
	[GenerateTestsForBurstCompatibility(RequiredUnityDefine = "UNITY_2020_2_OR_NEWER", GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(DefaultComparer<int>)
	})]
	public static SortJob<T, U> SortJob<T, U>(this NativeSlice<T> slice, U comp) where T : struct where U : IComparer<T>
	{
		return default(SortJob<T, U>);
	}

	[Token(Token = "0x6000930")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public static int BinarySearch<T>(this NativeSlice<T> slice, T value) where T : struct, IComparable<T>
	{
		return default(int);
	}

	[Token(Token = "0x6000931")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(DefaultComparer<int>)
	})]
	public static int BinarySearch<T, U>(this NativeSlice<T> slice, T value, U comp) where T : struct where U : IComparer<T>
	{
		return default(int);
	}

	[Token(Token = "0x6000932")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(DefaultComparer<int>)
	})]
	internal unsafe static void IntroSort<T, U>(void* array, int length, U comp) where T : struct where U : IComparer<T>
	{
	}

	[Token(Token = "0x6000933")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(DefaultComparer<int>)
	})]
	internal unsafe static void IntroSort_R<T, U>(void* array, int lo, int hi, int depth, U comp) where T : struct where U : IComparer<T>
	{
	}

	[Token(Token = "0x6000934")]
	private unsafe static void InsertionSort<T, U>(void* array, int lo, int hi, U comp) where T : struct where U : IComparer<T>
	{
	}

	[Token(Token = "0x6000935")]
	private unsafe static int Partition<T, U>(void* array, int lo, int hi, U comp) where T : struct where U : IComparer<T>
	{
		return default(int);
	}

	[Token(Token = "0x6000936")]
	private unsafe static void HeapSort<T, U>(void* array, int lo, int hi, U comp) where T : struct where U : IComparer<T>
	{
	}

	[Token(Token = "0x6000937")]
	private unsafe static void Heapify<T, U>(void* array, int i, int n, int lo, U comp) where T : struct where U : IComparer<T>
	{
	}

	[Token(Token = "0x6000938")]
	private unsafe static void Swap<T>(void* array, int lhs, int rhs) where T : struct
	{
	}

	[Token(Token = "0x6000939")]
	private unsafe static void SwapIfGreaterWithItems<T, U>(void* array, int lhs, int rhs, U comp) where T : struct where U : IComparer<T>
	{
	}

	[Token(Token = "0x600093A")]
	private unsafe static void IntroSortStruct<T, U>(void* array, int length, U comp) where T : struct where U : IComparer<T>
	{
	}

	[Token(Token = "0x600093B")]
	private unsafe static void IntroSortStruct_R<T, U>(void* array, in int lo, in int _hi, int depth, U comp) where T : struct where U : IComparer<T>
	{
	}

	[Token(Token = "0x600093C")]
	private unsafe static void InsertionSortStruct<T, U>(void* array, in int lo, in int hi, U comp) where T : struct where U : IComparer<T>
	{
	}

	[Token(Token = "0x600093D")]
	private unsafe static int PartitionStruct<T, U>(void* array, in int lo, in int hi, U comp) where T : struct where U : IComparer<T>
	{
		return default(int);
	}

	[Token(Token = "0x600093E")]
	private unsafe static void HeapSortStruct<T, U>(void* array, in int lo, in int hi, U comp) where T : struct where U : IComparer<T>
	{
	}

	[Token(Token = "0x600093F")]
	private unsafe static void HeapifyStruct<T, U>(void* array, int i, int n, in int lo, U comp) where T : struct where U : IComparer<T>
	{
	}

	[Token(Token = "0x6000940")]
	private unsafe static void SwapStruct<T>(void* array, int lhs, int rhs) where T : struct
	{
	}

	[Token(Token = "0x6000941")]
	private unsafe static void SwapIfGreaterWithItemsStruct<T, U>(void* array, int lhs, int rhs, U comp) where T : struct where U : IComparer<T>
	{
	}

	[Token(Token = "0x6000942")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckStrideMatchesSize<T>(int stride) where T : struct
	{
	}

	[Token(Token = "0x6000943")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private unsafe static void CheckComparer<T, U>(T* array, int length, U comp) where T : struct where U : IComparer<T>
	{
	}
}
