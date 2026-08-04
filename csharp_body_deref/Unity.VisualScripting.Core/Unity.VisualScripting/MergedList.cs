// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.MergedList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000023")]
public class MergedList<T> : IMergedCollection<T>, ICollection<T>, IEnumerable<T>, IEnumerable
{
	[Token(Token = "0x2000024")]
	public struct Enumerator : IEnumerator<T>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400002D")]
		[FieldOffset(Offset = "0x0")]
		private Dictionary<Type, IList<T>>.Enumerator listsEnumerator;

		[Token(Token = "0x400002E")]
		[FieldOffset(Offset = "0x0")]
		private T currentItem;

		[Token(Token = "0x400002F")]
		[FieldOffset(Offset = "0x0")]
		private IList<T> currentList;

		[Token(Token = "0x4000030")]
		[FieldOffset(Offset = "0x0")]
		private int indexInCurrentList;

		[Token(Token = "0x4000031")]
		[FieldOffset(Offset = "0x0")]
		private bool exceeded;

		[Token(Token = "0x1700002B")]
		public T Current
		{
			[Token(Token = "0x60000FC")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x1700002C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000FD")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000F9")]
		public Enumerator(MergedList<T> merged)
		{
		}

		[Token(Token = "0x60000FA")]
		public void Dispose()
		{
		}

		[Token(Token = "0x60000FB")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000FE")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400002C")]
	[FieldOffset(Offset = "0x0")]
	protected readonly Dictionary<Type, IList<T>> lists;

	[Token(Token = "0x17000029")]
	public int Count
	{
		[Token(Token = "0x60000E9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700002A")]
	public bool IsReadOnly
	{
		[Token(Token = "0x60000EA")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000E8")]
	public MergedList()
	{
	}

	[Token(Token = "0x60000EB")]
	public virtual void Include<TI>(IList<TI> list) where TI : T
	{
	}

	[Token(Token = "0x60000EC")]
	public bool Includes<TI>() where TI : T
	{
		return default(bool);
	}

	[Token(Token = "0x60000ED")]
	public bool Includes(Type elementType)
	{
		return default(bool);
	}

	[Token(Token = "0x60000EE")]
	public IList<TI> ForType<TI>() where TI : T
	{
		return null;
	}

	[Token(Token = "0x60000EF")]
	protected IList<T> GetListForItem(T item)
	{
		return null;
	}

	[Token(Token = "0x60000F0")]
	protected IList<T> GetListForType(Type type, bool throwOnFail = true)
	{
		return null;
	}

	[Token(Token = "0x60000F1")]
	public bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F2")]
	public virtual void Add(T item)
	{
	}

	[Token(Token = "0x60000F3")]
	public virtual void Clear()
	{
	}

	[Token(Token = "0x60000F4")]
	public virtual bool Remove(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F5")]
	public void CopyTo(T[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x60000F6")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60000F7")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60000F8")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}
}
