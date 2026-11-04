// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CoreUnsafeUtils
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000036")]
public static class CoreUnsafeUtils
{
	[Token(Token = "0x2000037")]
	public struct FixedBufferStringQueue
	{
		[Token(Token = "0x40000CD")]
		[FieldOffset(Offset = "0x0")]
		private unsafe byte* m_ReadCursor;

		[Token(Token = "0x40000CE")]
		[FieldOffset(Offset = "0x8")]
		private unsafe byte* m_WriteCursor;

		[Token(Token = "0x40000CF")]
		[FieldOffset(Offset = "0x10")]
		private unsafe readonly byte* m_BufferEnd;

		[Token(Token = "0x40000D0")]
		[FieldOffset(Offset = "0x18")]
		private unsafe readonly byte* m_BufferStart;

		[Token(Token = "0x40000D1")]
		[FieldOffset(Offset = "0x20")]
		private readonly int m_BufferLength;

		[Token(Token = "0x1700002F")]
		public int Count
		{
			[Token(Token = "0x60004A2")]
			[Address(RVA = "0xBDB280", Offset = "0xBD9880", VA = "0x180BDB280")]
			[CompilerGenerated]
			readonly get
			{
				return default(int);
			}
			[Token(Token = "0x60004A3")]
			[Address(RVA = "0xD23EF0", Offset = "0xD224F0", VA = "0x180D23EF0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x60004A4")]
		[Address(RVA = "0x2AC12E0", Offset = "0x2ABF8E0", VA = "0x182AC12E0")]
		public unsafe FixedBufferStringQueue(byte* ptr, int length)
		{
		}

		[Token(Token = "0x60004A5")]
		[Address(RVA = "0x2AC1230", Offset = "0x2ABF830", VA = "0x182AC1230")]
		public bool TryPush(string v)
		{
			return default(bool);
		}

		[Token(Token = "0x60004A6")]
		[Address(RVA = "0x2AC1170", Offset = "0x2ABF770", VA = "0x182AC1170")]
		public bool TryPop(out string v)
		{
			return default(bool);
		}

		[Token(Token = "0x60004A7")]
		[Address(RVA = "0x2AC1140", Offset = "0x2ABF740", VA = "0x182AC1140")]
		public void Clear()
		{
		}
	}

	[Token(Token = "0x2000038")]
	public interface IKeyGetter<TValue, TKey>
	{
		[Token(Token = "0x60004A8")]
		TKey Get(ref TValue v);
	}

	[Token(Token = "0x2000039")]
	internal struct DefaultKeyGetter<T> : IKeyGetter<T, T>
	{
		[Token(Token = "0x60004A9")]
		public T Get(ref T v)
		{
			return (T)null;
		}
	}

	[Token(Token = "0x200003A")]
	internal struct UintKeyGetter : IKeyGetter<uint, uint>
	{
		[Token(Token = "0x60004AA")]
		[Address(RVA = "0x1392600", Offset = "0x1390C00", VA = "0x181392600", Slot = "4")]
		public uint Get(ref uint v)
		{
			return default(uint);
		}
	}

	[Token(Token = "0x200003B")]
	internal struct UlongKeyGetter : IKeyGetter<ulong, ulong>
	{
		[Token(Token = "0x60004AB")]
		[Address(RVA = "0x8EBC10", Offset = "0x8EA210", VA = "0x1808EBC10", Slot = "4")]
		public ulong Get(ref ulong v)
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x6000488")]
	public unsafe static void CopyTo<T>(this List<T> list, void* dest, int count) where T : struct
	{
	}

	[Token(Token = "0x6000489")]
	public unsafe static void CopyTo<T>(this T[] list, void* dest, int count) where T : struct
	{
	}

	[Token(Token = "0x600048A")]
	[Address(RVA = "0x2ABE140", Offset = "0x2ABC740", VA = "0x182ABE140")]
	private static void CalculateRadixParams(int radixBits, out int bitStates)
	{
	}

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x2ABE190", Offset = "0x2ABC790", VA = "0x182ABE190")]
	private static int CalculateRadixSupportSize(int bitStates, int arrayLength)
	{
		return default(int);
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x2ABE150", Offset = "0x2ABC750", VA = "0x182ABE150")]
	private unsafe static void CalculateRadixSortSupportArrays(int bitStates, int arrayLength, uint* supportArray, out uint* bucketIndices, out uint* bucketSizes, out uint* bucketPrefix, out uint* arrayOutput)
	{
	}

	[Token(Token = "0x600048D")]
	[Address(RVA = "0x2ABE6C0", Offset = "0x2ABCCC0", VA = "0x182ABE6C0")]
	private unsafe static void MergeSort(uint* array, uint* support, int length)
	{
	}

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x2ABE840", Offset = "0x2ABCE40", VA = "0x182ABE840")]
	public static void MergeSort(uint[] arr, int sortSize, ref uint[] supportArray)
	{
	}

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x2ABE5C0", Offset = "0x2ABCBC0", VA = "0x182ABE5C0")]
	public static void MergeSort(NativeArray<uint> arr, int sortSize, ref NativeArray<uint> supportArray)
	{
	}

	[Token(Token = "0x6000490")]
	[Address(RVA = "0x2ABE470", Offset = "0x2ABCA70", VA = "0x182ABE470")]
	private unsafe static void InsertionSort(uint* arr, int length)
	{
	}

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x2ABE4D0", Offset = "0x2ABCAD0", VA = "0x182ABE4D0")]
	public static void InsertionSort(uint[] arr, int sortSize)
	{
	}

	[Token(Token = "0x6000492")]
	[Address(RVA = "0x2ABE390", Offset = "0x2ABC990", VA = "0x182ABE390")]
	public static void InsertionSort(NativeArray<uint> arr, int sortSize)
	{
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x2ABEA10", Offset = "0x2ABD010", VA = "0x182ABEA10")]
	private unsafe static void RadixSort(uint* array, uint* support, int radixBits, int bitStates, int length)
	{
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x2ABEB90", Offset = "0x2ABD190", VA = "0x182ABEB90")]
	public static void RadixSort(uint[] arr, int sortSize, ref uint[] supportArray, int radixBits = 8)
	{
	}

	[Token(Token = "0x6000495")]
	[Address(RVA = "0x2ABECB0", Offset = "0x2ABD2B0", VA = "0x182ABECB0")]
	public static void RadixSort(NativeArray<uint> array, int sortSize, ref NativeArray<uint> supportArray, int radixBits = 8)
	{
	}

	[Token(Token = "0x6000496")]
	[Address(RVA = "0x2ABE9A0", Offset = "0x2ABCFA0", VA = "0x182ABE9A0")]
	public static void QuickSort(uint[] arr, int left, int right)
	{
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x2ABE930", Offset = "0x2ABCF30", VA = "0x182ABE930")]
	public static void QuickSort(ulong[] arr, int left, int right)
	{
	}

	[Token(Token = "0x6000498")]
	public unsafe static void QuickSort<T>(int count, void* data) where T : struct, IComparable<T>
	{
	}

	[Token(Token = "0x6000499")]
	public unsafe static void QuickSort<TValue, TKey, TGetter>(int count, void* data) where TValue : struct where TKey : struct, IComparable<TKey> where TGetter : struct, IKeyGetter<TValue, TKey>
	{
	}

	[Token(Token = "0x600049A")]
	public unsafe static void QuickSort<TValue, TKey, TGetter>(void* data, int left, int right) where TValue : struct where TKey : struct, IComparable<TKey> where TGetter : struct, IKeyGetter<TValue, TKey>
	{
	}

	[Token(Token = "0x600049B")]
	public unsafe static int IndexOf<T>(void* data, int count, T v) where T : struct, IEquatable<T>
	{
		return default(int);
	}

	[Token(Token = "0x600049C")]
	public unsafe static int CompareHashes<TOldValue, TOldGetter, TNewValue, TNewGetter>(int oldHashCount, void* oldHashes, int newHashCount, void* newHashes, int* addIndices, int* removeIndices, out int addCount, out int remCount) where TOldValue : struct where TOldGetter : struct, IKeyGetter<TOldValue, Hash128> where TNewValue : struct where TNewGetter : struct, IKeyGetter<TNewValue, Hash128>
	{
		return default(int);
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x2ABE200", Offset = "0x2ABC800", VA = "0x182ABE200")]
	public unsafe static int CompareHashes(int oldHashCount, Hash128* oldHashes, int newHashCount, Hash128* newHashes, int* addIndices, int* removeIndices, out int addCount, out int remCount)
	{
		return default(int);
	}

	[Token(Token = "0x600049E")]
	public unsafe static void CombineHashes<TValue, TGetter>(int count, void* hashes, Hash128* outHash) where TValue : struct where TGetter : struct, IKeyGetter<TValue, Hash128>
	{
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x2ABE1A0", Offset = "0x2ABC7A0", VA = "0x182ABE1A0")]
	public unsafe static void CombineHashes(int count, Hash128* hashes, Hash128* outHash)
	{
	}

	[Token(Token = "0x60004A0")]
	private unsafe static int Partition<TValue, TKey, TGetter>(void* data, int left, int right) where TValue : struct where TKey : struct, IComparable<TKey> where TGetter : struct, IKeyGetter<TValue, TKey>
	{
		return default(int);
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x2ABE260", Offset = "0x2ABC860", VA = "0x182ABE260")]
	public static bool HaveDuplicates(int[] arr)
	{
		return default(bool);
	}
}
