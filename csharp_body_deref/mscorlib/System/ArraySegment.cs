// ==================== AoTTG2 cross-reference ====================
// Type: System.ArraySegment
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000B7")]
[DefaultMember("Item")]
public readonly struct ArraySegment<T> : IList<T>, ICollection<T>, IEnumerable<T>, IEnumerable, IReadOnlyList<T>, IReadOnlyCollection<T>
{
	[Token(Token = "0x20000B8")]
	public struct Enumerator : IEnumerator<T>, IDisposable, IEnumerator
	{
		[Token(Token = "0x400028A")]
		[FieldOffset(Offset = "0x0")]
		private readonly T[] _array;

		[Token(Token = "0x400028B")]
		[FieldOffset(Offset = "0x0")]
		private readonly int _start;

		[Token(Token = "0x400028C")]
		[FieldOffset(Offset = "0x0")]
		private readonly int _end;

		[Token(Token = "0x400028D")]
		[FieldOffset(Offset = "0x0")]
		private int _current;

		[Token(Token = "0x1700005F")]
		public T Current
		{
			[Token(Token = "0x600043F")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x17000060")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000440")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600043D")]
		internal Enumerator(ArraySegment<T> arraySegment)
		{
		}

		[Token(Token = "0x600043E")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000441")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000442")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x4000287")]
	[FieldOffset(Offset = "0x0")]
	private readonly T[] _array;

	[Token(Token = "0x4000288")]
	[FieldOffset(Offset = "0x0")]
	private readonly int _offset;

	[Token(Token = "0x4000289")]
	[FieldOffset(Offset = "0x0")]
	private readonly int _count;

	[Token(Token = "0x17000058")]
	public static ArraySegment<T> Empty
	{
		[Token(Token = "0x6000423")]
		[CompilerGenerated]
		get
		{
			return default(ArraySegment<T>);
		}
	}

	[Token(Token = "0x17000059")]
	public T[] Array
	{
		[Token(Token = "0x6000426")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005A")]
	public int Offset
	{
		[Token(Token = "0x6000427")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700005B")]
	public int Count
	{
		[Token(Token = "0x6000428")]
		get
		{
			return default(int);
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.Generic.IList<T>.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x1700005C")]
	[Token(Token = "0x600042E")]
	private T System_002ECollections_002EGeneric_002EIList_003CT_003E_002Eget_Item(int index)
	{
		return (T)null;
	}

	[Token(Token = "0x600042F")]
	private void System_002ECollections_002EGeneric_002EIList_003CT_003E_002Eset_Item(int index, T value)
	{
	}

	// C# has no syntax for parameterized property 'System.Collections.Generic.IReadOnlyList<T>.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x1700005D")]
	[Token(Token = "0x6000433")]
	private T System_002ECollections_002EGeneric_002EIReadOnlyList_003CT_003E_002Eget_Item(int index)
	{
		return (T)null;
	}

	[Token(Token = "0x1700005E")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EIsReadOnly
	{
		[Token(Token = "0x6000434")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000424")]
	public ArraySegment(T[] array)
	{
	}

	[Token(Token = "0x6000425")]
	public ArraySegment(T[] array, int offset, int count)
	{
	}

	[Token(Token = "0x6000429")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x600042A")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600042B")]
	public void CopyTo(T[] destination, int destinationIndex)
	{
	}

	[Token(Token = "0x600042C")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600042D")]
	public bool Equals(ArraySegment<T> obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000430")]
	private int System_002ECollections_002EGeneric_002EIList_003CT_003E_002EIndexOf(T item)
	{
		return default(int);
	}

	[Token(Token = "0x6000431")]
	private void System_002ECollections_002EGeneric_002EIList_003CT_003E_002EInsert(int index, T item)
	{
	}

	[Token(Token = "0x6000432")]
	private void System_002ECollections_002EGeneric_002EIList_003CT_003E_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x6000435")]
	private void System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EAdd(T item)
	{
	}

	[Token(Token = "0x6000436")]
	private void System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EClear()
	{
	}

	[Token(Token = "0x6000437")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EContains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000438")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CT_003E_002ERemove(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000439")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600043A")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600043B")]
	private void ThrowInvalidOperationIfDefault()
	{
	}
}
