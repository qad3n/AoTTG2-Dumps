using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering;

[Token(Token = "0x200006F")]
public static class CoreUnsafeUtils
{
	[Token(Token = "0x2000070")]
	public struct FixedBufferStringQueue
	{
		[Token(Token = "0x40001C1")]
		[FieldOffset(Offset = "0x0")]
		private unsafe byte* m_ReadCursor;

		[Token(Token = "0x40001C2")]
		[FieldOffset(Offset = "0x8")]
		private unsafe byte* m_WriteCursor;

		[Token(Token = "0x40001C3")]
		[FieldOffset(Offset = "0x10")]
		private unsafe readonly byte* m_BufferEnd;

		[Token(Token = "0x40001C4")]
		[FieldOffset(Offset = "0x18")]
		private unsafe readonly byte* m_BufferStart;

		[Token(Token = "0x40001C5")]
		[FieldOffset(Offset = "0x20")]
		private readonly int m_BufferLength;

		[Token(Token = "0x17000051")]
		public int Count
		{
			[Token(Token = "0x600059B")]
			[Address(RVA = "0x4872520", Offset = "0x4872520", VA = "0x4872520")]
			[CompilerGenerated]
			readonly get
			{
				return default(int);
			}
			[Token(Token = "0x600059C")]
			[Address(RVA = "0x4872530", Offset = "0x4872530", VA = "0x4872530")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x600059D")]
		[Address(RVA = "0x4872540", Offset = "0x4872540", VA = "0x4872540")]
		public unsafe FixedBufferStringQueue(byte* ptr, int length)
		{
		}

		[Token(Token = "0x600059E")]
		[Address(RVA = "0x4872590", Offset = "0x4872590", VA = "0x4872590")]
		public bool TryPush(string v)
		{
			return default(bool);
		}

		[Token(Token = "0x600059F")]
		[Address(RVA = "0x4872630", Offset = "0x4872630", VA = "0x4872630")]
		public bool TryPop(out string v)
		{
			return default(bool);
		}

		[Token(Token = "0x60005A0")]
		[Address(RVA = "0x4872570", Offset = "0x4872570", VA = "0x4872570")]
		public void Clear()
		{
		}
	}

	[Token(Token = "0x2000071")]
	public interface IKeyGetter<TValue, TKey>
	{
		[Token(Token = "0x60005A1")]
		TKey Get(ref TValue v);
	}

	[Token(Token = "0x2000072")]
	internal struct DefaultKeyGetter<T> : IKeyGetter<T, T>
	{
		[Token(Token = "0x60005A2")]
		public T Get(ref T v)
		{
			return (T)null;
		}
	}

	[Token(Token = "0x2000073")]
	internal struct UintKeyGetter : IKeyGetter<uint, uint>
	{
		[Token(Token = "0x60005A3")]
		[Address(RVA = "0x4872690", Offset = "0x4872690", VA = "0x4872690", Slot = "4")]
		public uint Get(ref uint v)
		{
			return default(uint);
		}
	}

	[Token(Token = "0x6000582")]
	public unsafe static void CopyTo<T>(this List<T> list, void* dest, int count) where T : struct
	{
	}

	[Token(Token = "0x6000583")]
	public unsafe static void CopyTo<T>(this T[] list, void* dest, int count) where T : struct
	{
	}

	[Token(Token = "0x6000584")]
	[Address(RVA = "0x4871460", Offset = "0x4871460", VA = "0x4871460")]
	private static void CalculateRadixParams(int radixBits, out int bitStates)
	{
	}

	[Token(Token = "0x6000585")]
	[Address(RVA = "0x48714D0", Offset = "0x48714D0", VA = "0x48714D0")]
	private static int CalculateRadixSupportSize(int bitStates, int arrayLength)
	{
		return default(int);
	}

	[Token(Token = "0x6000586")]
	[Address(RVA = "0x48714E0", Offset = "0x48714E0", VA = "0x48714E0")]
	private unsafe static void CalculateRadixSortSupportArrays(int bitStates, int arrayLength, uint* supportArray, out uint* bucketIndices, out uint* bucketSizes, out uint* bucketPrefix, out uint* arrayOutput)
	{
	}

	[Token(Token = "0x6000587")]
	[Address(RVA = "0x4871510", Offset = "0x4871510", VA = "0x4871510")]
	private unsafe static void MergeSort(uint* array, uint* support, int length)
	{
	}

	[Token(Token = "0x6000588")]
	[Address(RVA = "0x48717E0", Offset = "0x48717E0", VA = "0x48717E0")]
	public static void MergeSort(uint[] arr, int sortSize, ref uint[] supportArray)
	{
	}

	[Token(Token = "0x6000589")]
	[Address(RVA = "0x48718C0", Offset = "0x48718C0", VA = "0x48718C0")]
	public static void MergeSort(NativeArray<uint> arr, int sortSize, ref NativeArray<uint> supportArray)
	{
	}

	[Token(Token = "0x600058A")]
	[Address(RVA = "0x48719B0", Offset = "0x48719B0", VA = "0x48719B0")]
	private unsafe static void InsertionSort(uint* arr, int length)
	{
	}

	[Token(Token = "0x600058B")]
	[Address(RVA = "0x4871A10", Offset = "0x4871A10", VA = "0x4871A10")]
	public static void InsertionSort(uint[] arr, int sortSize)
	{
	}

	[Token(Token = "0x600058C")]
	[Address(RVA = "0x4871AD0", Offset = "0x4871AD0", VA = "0x4871AD0")]
	public static void InsertionSort(NativeArray<uint> arr, int sortSize)
	{
	}

	[Token(Token = "0x600058D")]
	[Address(RVA = "0x4871BB0", Offset = "0x4871BB0", VA = "0x4871BB0")]
	private unsafe static void RadixSort(uint* array, uint* support, int radixBits, int bitStates, int length)
	{
	}

	[Token(Token = "0x600058E")]
	[Address(RVA = "0x4871FC0", Offset = "0x4871FC0", VA = "0x4871FC0")]
	public static void RadixSort(uint[] arr, int sortSize, ref uint[] supportArray, int radixBits = 8)
	{
	}

	[Token(Token = "0x600058F")]
	[Address(RVA = "0x4872130", Offset = "0x4872130", VA = "0x4872130")]
	public static void RadixSort(NativeArray<uint> array, int sortSize, ref NativeArray<uint> supportArray, int radixBits = 8)
	{
	}

	[Token(Token = "0x6000590")]
	[Address(RVA = "0x48722B0", Offset = "0x48722B0", VA = "0x48722B0")]
	public static void QuickSort(uint[] arr, int left, int right)
	{
	}

	[Token(Token = "0x6000591")]
	public unsafe static void QuickSort<T>(int count, void* data) where T : struct, IComparable<T>
	{
	}

	[Token(Token = "0x6000592")]
	public unsafe static void QuickSort<TValue, TKey, TGetter>(int count, void* data) where TValue : struct where TKey : struct, IComparable<TKey> where TGetter : struct, IKeyGetter<TValue, TKey>
	{
	}

	[Token(Token = "0x6000593")]
	public unsafe static void QuickSort<TValue, TKey, TGetter>(void* data, int left, int right) where TValue : struct where TKey : struct, IComparable<TKey> where TGetter : struct, IKeyGetter<TValue, TKey>
	{
	}

	[Token(Token = "0x6000594")]
	public unsafe static int IndexOf<T>(void* data, int count, T v) where T : struct, IEquatable<T>
	{
		return default(int);
	}

	[Token(Token = "0x6000595")]
	public unsafe static int CompareHashes<TOldValue, TOldGetter, TNewValue, TNewGetter>(int oldHashCount, void* oldHashes, int newHashCount, void* newHashes, int* addIndices, int* removeIndices, out int addCount, out int remCount) where TOldValue : struct where TOldGetter : struct, IKeyGetter<TOldValue, Hash128> where TNewValue : struct where TNewGetter : struct, IKeyGetter<TNewValue, Hash128>
	{
		return default(int);
	}

	[Token(Token = "0x6000596")]
	[Address(RVA = "0x4872310", Offset = "0x4872310", VA = "0x4872310")]
	public unsafe static int CompareHashes(int oldHashCount, Hash128* oldHashes, int newHashCount, Hash128* newHashes, int* addIndices, int* removeIndices, out int addCount, out int remCount)
	{
		return default(int);
	}

	[Token(Token = "0x6000597")]
	public unsafe static void CombineHashes<TValue, TGetter>(int count, void* hashes, Hash128* outHash) where TValue : struct where TGetter : struct, IKeyGetter<TValue, Hash128>
	{
	}

	[Token(Token = "0x6000598")]
	[Address(RVA = "0x48723A0", Offset = "0x48723A0", VA = "0x48723A0")]
	public unsafe static void CombineHashes(int count, Hash128* hashes, Hash128* outHash)
	{
	}

	[Token(Token = "0x6000599")]
	private unsafe static int Partition<TValue, TKey, TGetter>(void* data, int left, int right) where TValue : struct where TKey : struct, IComparable<TKey> where TGetter : struct, IKeyGetter<TValue, TKey>
	{
		return default(int);
	}

	[Token(Token = "0x600059A")]
	[Address(RVA = "0x48723F0", Offset = "0x48723F0", VA = "0x48723F0")]
	public static bool HaveDuplicates(int[] arr)
	{
		return default(bool);
	}
}
