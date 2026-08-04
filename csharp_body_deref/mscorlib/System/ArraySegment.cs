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
			[Token(Token = "0x600040C")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x17000060")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600040D")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600040A")]
		internal Enumerator(ArraySegment<T> arraySegment)
		{
		}

		[Token(Token = "0x600040B")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600040E")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600040F")]
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
		[Token(Token = "0x60003F0")]
		[CompilerGenerated]
		get
		{
			return default(ArraySegment<T>);
		}
	}

	[Token(Token = "0x17000059")]
	public T[] Array
	{
		[Token(Token = "0x60003F3")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005A")]
	public int Offset
	{
		[Token(Token = "0x60003F4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700005B")]
	public int Count
	{
		[Token(Token = "0x60003F5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700005C")]
	private T System_002ECollections_002EGeneric_002EIList_003CT_003E_002EItem
	{
		[Token(Token = "0x60003FB")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x60003FC")]
		set
		{
		}
	}

	[Token(Token = "0x1700005D")]
	private T System_002ECollections_002EGeneric_002EIReadOnlyList_003CT_003E_002EItem
	{
		[Token(Token = "0x6000400")]
		get
		{
			return (T)null;
		}
	}

	[Token(Token = "0x1700005E")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EIsReadOnly
	{
		[Token(Token = "0x6000401")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60003F1")]
	public ArraySegment(T[] array)
	{
	}

	[Token(Token = "0x60003F2")]
	public ArraySegment(T[] array, int offset, int count)
	{
	}

	[Token(Token = "0x60003F6")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x60003F7")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60003F8")]
	public void CopyTo(T[] destination, int destinationIndex)
	{
	}

	[Token(Token = "0x60003F9")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60003FA")]
	public bool Equals(ArraySegment<T> obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60003FD")]
	private int System_002ECollections_002EGeneric_002EIList_003CT_003E_002EIndexOf(T item)
	{
		return default(int);
	}

	[Token(Token = "0x60003FE")]
	private void System_002ECollections_002EGeneric_002EIList_003CT_003E_002EInsert(int index, T item)
	{
	}

	[Token(Token = "0x60003FF")]
	private void System_002ECollections_002EGeneric_002EIList_003CT_003E_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x6000402")]
	private void System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EAdd(T item)
	{
	}

	[Token(Token = "0x6000403")]
	private void System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EClear()
	{
	}

	[Token(Token = "0x6000404")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EContains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000405")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CT_003E_002ERemove(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000406")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000407")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000408")]
	private void ThrowInvalidOperationIfDefault()
	{
	}
}
