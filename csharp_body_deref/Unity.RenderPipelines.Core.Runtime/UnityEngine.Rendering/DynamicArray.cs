// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DynamicArray
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000074")]
[DebuggerDisplay("Size = {size} Capacity = {capacity}")]
public class DynamicArray<T> where T : new()
{
	[Token(Token = "0x2000075")]
	public struct Iterator
	{
		[Token(Token = "0x40001C9")]
		[FieldOffset(Offset = "0x0")]
		private readonly DynamicArray<T> owner;

		[Token(Token = "0x40001CA")]
		[FieldOffset(Offset = "0x0")]
		private int index;

		[Token(Token = "0x17000055")]
		public unsafe ref T Current
		{
			[Token(Token = "0x60005BC")]
			get
			{
				return ref *(T*)null;
			}
		}

		[Token(Token = "0x60005BB")]
		public Iterator(DynamicArray<T> setOwner)
		{
		}

		[Token(Token = "0x60005BD")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60005BE")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x2000076")]
	public struct RangeEnumerable
	{
		[Token(Token = "0x2000077")]
		public struct RangeIterator
		{
			[Token(Token = "0x40001CC")]
			[FieldOffset(Offset = "0x0")]
			private readonly DynamicArray<T> owner;

			[Token(Token = "0x40001CD")]
			[FieldOffset(Offset = "0x0")]
			private int index;

			[Token(Token = "0x40001CE")]
			[FieldOffset(Offset = "0x0")]
			private int first;

			[Token(Token = "0x40001CF")]
			[FieldOffset(Offset = "0x0")]
			private int last;

			[Token(Token = "0x17000056")]
			public unsafe ref T Current
			{
				[Token(Token = "0x60005C1")]
				get
				{
					return ref *(T*)null;
				}
			}

			[Token(Token = "0x60005C0")]
			public RangeIterator(DynamicArray<T> setOwner, int first, int numItems)
			{
			}

			[Token(Token = "0x60005C2")]
			public bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x60005C3")]
			public void Reset()
			{
			}
		}

		[Token(Token = "0x40001CB")]
		[FieldOffset(Offset = "0x0")]
		public RangeIterator iterator;

		[Token(Token = "0x60005BF")]
		public RangeIterator GetEnumerator()
		{
			return default(RangeIterator);
		}
	}

	[Token(Token = "0x2000078")]
	public delegate int SortComparer(T x, T y);

	[Token(Token = "0x40001C7")]
	[FieldOffset(Offset = "0x0")]
	private T[] m_Array;

	[Token(Token = "0x17000052")]
	public int size
	{
		[Token(Token = "0x60005A4")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60005A5")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000053")]
	public int capacity
	{
		[Token(Token = "0x60005A6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000054")]
	public unsafe ref T this[int index]
	{
		[Token(Token = "0x60005B6")]
		get
		{
			return ref *(T*)null;
		}
	}

	[Token(Token = "0x60005A7")]
	public DynamicArray()
	{
	}

	[Token(Token = "0x60005A8")]
	public DynamicArray(int size)
	{
	}

	[Token(Token = "0x60005A9")]
	public void Clear()
	{
	}

	[Token(Token = "0x60005AA")]
	public bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x60005AB")]
	public int Add(in T value)
	{
		return default(int);
	}

	[Token(Token = "0x60005AC")]
	public void AddRange(DynamicArray<T> array)
	{
	}

	[Token(Token = "0x60005AD")]
	public bool Remove(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x60005AE")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x60005AF")]
	public void RemoveRange(int index, int count)
	{
	}

	[Token(Token = "0x60005B0")]
	public int FindIndex(int startIndex, int count, Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x60005B1")]
	public int IndexOf(T item, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60005B2")]
	public int IndexOf(T item, int index)
	{
		return default(int);
	}

	[Token(Token = "0x60005B3")]
	public int IndexOf(T item)
	{
		return default(int);
	}

	[Token(Token = "0x60005B4")]
	public void Resize(int newSize, bool keepContent = false)
	{
	}

	[Token(Token = "0x60005B5")]
	public void Reserve(int newCapacity, bool keepContent = false)
	{
	}

	[Token(Token = "0x60005B7")]
	public static implicit operator T[](DynamicArray<T> array)
	{
		return null;
	}

	[Token(Token = "0x60005B8")]
	public Iterator GetEnumerator()
	{
		return default(Iterator);
	}

	[Token(Token = "0x60005B9")]
	public RangeEnumerable SubRange(int first, int numItems)
	{
		return default(RangeEnumerable);
	}

	[Token(Token = "0x60005BA")]
	internal void BumpVersion()
	{
	}
}
