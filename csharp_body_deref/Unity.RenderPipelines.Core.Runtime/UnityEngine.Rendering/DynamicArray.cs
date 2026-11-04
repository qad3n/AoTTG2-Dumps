// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DynamicArray
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200003C")]
[DebuggerDisplay("Size = {size} Capacity = {capacity}")]
public class DynamicArray<T> where T : new()
{
	[Token(Token = "0x200003D")]
	public struct Iterator
	{
		[Token(Token = "0x40000D5")]
		[FieldOffset(Offset = "0x0")]
		private readonly DynamicArray<T> owner;

		[Token(Token = "0x40000D6")]
		[FieldOffset(Offset = "0x0")]
		private int index;

		[Token(Token = "0x17000033")]
		public unsafe ref T Current
		{
			[Token(Token = "0x60004CB")]
			get
			{
				return ref *(T*)null;
			}
		}

		[Token(Token = "0x60004CA")]
		public Iterator(DynamicArray<T> setOwner)
		{
		}

		[Token(Token = "0x60004CC")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60004CD")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x200003E")]
	public struct RangeEnumerable
	{
		[Token(Token = "0x200003F")]
		public struct RangeIterator
		{
			[Token(Token = "0x40000D8")]
			[FieldOffset(Offset = "0x0")]
			private readonly DynamicArray<T> owner;

			[Token(Token = "0x40000D9")]
			[FieldOffset(Offset = "0x0")]
			private int index;

			[Token(Token = "0x40000DA")]
			[FieldOffset(Offset = "0x0")]
			private int first;

			[Token(Token = "0x40000DB")]
			[FieldOffset(Offset = "0x0")]
			private int last;

			[Token(Token = "0x17000034")]
			public unsafe ref T Current
			{
				[Token(Token = "0x60004D0")]
				get
				{
					return ref *(T*)null;
				}
			}

			[Token(Token = "0x60004CF")]
			public RangeIterator(DynamicArray<T> setOwner, int first, int numItems)
			{
			}

			[Token(Token = "0x60004D1")]
			public bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x60004D2")]
			public void Reset()
			{
			}
		}

		[Token(Token = "0x40000D7")]
		[FieldOffset(Offset = "0x0")]
		public RangeIterator iterator;

		[Token(Token = "0x60004CE")]
		public RangeIterator GetEnumerator()
		{
			return default(RangeIterator);
		}
	}

	[Token(Token = "0x2000040")]
	public delegate int SortComparer(T x, T y);

	[Token(Token = "0x40000D3")]
	[FieldOffset(Offset = "0x0")]
	protected T[] m_Array;

	[Token(Token = "0x17000030")]
	public int size
	{
		[Token(Token = "0x60004AC")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60004AD")]
		[CompilerGenerated]
		protected set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public int capacity
	{
		[Token(Token = "0x60004AE")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000032")]
	public unsafe ref T this[int index]
	{
		[Token(Token = "0x60004C3")]
		get
		{
			return ref *(T*)null;
		}
	}

	[Token(Token = "0x60004AF")]
	public DynamicArray()
	{
	}

	[Token(Token = "0x60004B0")]
	public DynamicArray(int size)
	{
	}

	[Token(Token = "0x60004B1")]
	public DynamicArray(int capacity, bool resize)
	{
	}

	[Token(Token = "0x60004B2")]
	public DynamicArray(DynamicArray<T> deepCopy)
	{
	}

	[Token(Token = "0x60004B3")]
	public void Clear()
	{
	}

	[Token(Token = "0x60004B4")]
	public bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B5")]
	public int Add(in T value)
	{
		return default(int);
	}

	[Token(Token = "0x60004B6")]
	public void AddRange(DynamicArray<T> array)
	{
	}

	[Token(Token = "0x60004B7")]
	public void Insert(int index, T item)
	{
	}

	[Token(Token = "0x60004B8")]
	public bool Remove(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B9")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x60004BA")]
	public void RemoveRange(int index, int count)
	{
	}

	[Token(Token = "0x60004BB")]
	public int FindIndex(int startIndex, int count, Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x60004BC")]
	public int FindIndex(Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x60004BD")]
	public int IndexOf(T item, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60004BE")]
	public int IndexOf(T item, int index)
	{
		return default(int);
	}

	[Token(Token = "0x60004BF")]
	public int IndexOf(T item)
	{
		return default(int);
	}

	[Token(Token = "0x60004C0")]
	public void Resize(int newSize, bool keepContent = false)
	{
	}

	[Token(Token = "0x60004C1")]
	public void ResizeAndClear(int newSize)
	{
	}

	[Token(Token = "0x60004C2")]
	public void Reserve(int newCapacity, bool keepContent = false)
	{
	}

	[Token(Token = "0x60004C4")]
	[Obsolete("This is deprecated because it returns an incorrect value. It may returns an array with elements beyond the size. Please use Span/ReadOnly if you want safe raw access to the DynamicArray memory. #from(2023.2)")]
	public static implicit operator T[](DynamicArray<T> array)
	{
		return null;
	}

	[Token(Token = "0x60004C5")]
	public static implicit operator ReadOnlySpan<T>(DynamicArray<T> array)
	{
		return default(ReadOnlySpan<T>);
	}

	[Token(Token = "0x60004C6")]
	public static implicit operator Span<T>(DynamicArray<T> array)
	{
		return default(Span<T>);
	}

	[Token(Token = "0x60004C7")]
	public Iterator GetEnumerator()
	{
		return default(Iterator);
	}

	[Token(Token = "0x60004C8")]
	public RangeEnumerable SubRange(int first, int numItems)
	{
		return default(RangeEnumerable);
	}

	[Token(Token = "0x60004C9")]
	protected internal void BumpVersion()
	{
	}
}
