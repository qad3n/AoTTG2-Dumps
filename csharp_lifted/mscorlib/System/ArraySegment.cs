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
[Token(Token = "0x200008E")]
[DefaultMember("Item")]
public readonly struct ArraySegment<T> : IList<T>, ICollection<T>, IEnumerable<T>, IEnumerable, IReadOnlyList<T>, IReadOnlyCollection<T>
{
	[Token(Token = "0x200008F")]
	public struct Enumerator : IEnumerator<T>, IDisposable, IEnumerator
	{
		[Token(Token = "0x40001E1")]
		[FieldOffset(Offset = "0x0")]
		private readonly T[] _array;

		[Token(Token = "0x40001E2")]
		[FieldOffset(Offset = "0x0")]
		private readonly int _start;

		[Token(Token = "0x40001E3")]
		[FieldOffset(Offset = "0x0")]
		private readonly int _end;

		[Token(Token = "0x40001E4")]
		[FieldOffset(Offset = "0x0")]
		private int _current;

		[Token(Token = "0x1700005F")]
		public T Current
		{
			[Token(Token = "0x6000414")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x17000060")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000415")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000412")]
		internal Enumerator(ArraySegment<T> arraySegment)
		{
		}

		[Token(Token = "0x6000413")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000416")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000417")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x40001DE")]
	[FieldOffset(Offset = "0x0")]
	private readonly T[] _array;

	[Token(Token = "0x40001DF")]
	[FieldOffset(Offset = "0x0")]
	private readonly int _offset;

	[Token(Token = "0x40001E0")]
	[FieldOffset(Offset = "0x0")]
	private readonly int _count;

	[Token(Token = "0x17000058")]
	public static ArraySegment<T> Empty
	{
		[Token(Token = "0x60003F8")]
		[CompilerGenerated]
		get
		{
			return default(ArraySegment<T>);
		}
	}

	[Token(Token = "0x17000059")]
	public T[] Array
	{
		[Token(Token = "0x60003FB")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005A")]
	public int Offset
	{
		[Token(Token = "0x60003FC")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700005B")]
	public int Count
	{
		[Token(Token = "0x60003FD")]
		get
		{
			return default(int);
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.Generic.IList<T>.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x1700005C")]
	[Token(Token = "0x6000403")]
	private T System_002ECollections_002EGeneric_002EIList_003CT_003E_002Eget_Item(int index)
	{
		return (T)null;
	}

	[Token(Token = "0x6000404")]
	private void System_002ECollections_002EGeneric_002EIList_003CT_003E_002Eset_Item(int index, T value)
	{
	}

	// C# has no syntax for parameterized property 'System.Collections.Generic.IReadOnlyList<T>.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x1700005D")]
	[Token(Token = "0x6000408")]
	private T System_002ECollections_002EGeneric_002EIReadOnlyList_003CT_003E_002Eget_Item(int index)
	{
		return (T)null;
	}

	[Token(Token = "0x1700005E")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EIsReadOnly
	{
		[Token(Token = "0x6000409")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60003F9")]
	public ArraySegment(T[] array)
	{
	}

	[Token(Token = "0x60003FA")]
	public ArraySegment(T[] array, int offset, int count)
	{
	}

	[Token(Token = "0x60003FE")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x60003FF")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000400")]
	public void CopyTo(T[] destination, int destinationIndex)
	{
	}

	[Token(Token = "0x6000401")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000402")]
	public bool Equals(ArraySegment<T> obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000405")]
	private int System_002ECollections_002EGeneric_002EIList_003CT_003E_002EIndexOf(T item)
	{
		return default(int);
	}

	[Token(Token = "0x6000406")]
	private void System_002ECollections_002EGeneric_002EIList_003CT_003E_002EInsert(int index, T item)
	{
	}

	[Token(Token = "0x6000407")]
	private void System_002ECollections_002EGeneric_002EIList_003CT_003E_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x600040A")]
	private void System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EAdd(T item)
	{
	}

	[Token(Token = "0x600040B")]
	private void System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EClear()
	{
	}

	[Token(Token = "0x600040C")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EContains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x600040D")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CT_003E_002ERemove(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x600040E")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600040F")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000410")]
	private void ThrowInvalidOperationIfDefault()
	{
	}
}
