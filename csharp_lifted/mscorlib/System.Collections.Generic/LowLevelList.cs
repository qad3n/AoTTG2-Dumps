// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.LowLevelList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x2000616")]
[DebuggerDisplay("Count = {Count}")]
internal class LowLevelList<T>
{
	[Token(Token = "0x40018CE")]
	[FieldOffset(Offset = "0x0")]
	protected T[] _items;

	[Token(Token = "0x40018CF")]
	[FieldOffset(Offset = "0x0")]
	protected int _size;

	[Token(Token = "0x40018D0")]
	[FieldOffset(Offset = "0x0")]
	protected int _version;

	[Token(Token = "0x40018D1")]
	[FieldOffset(Offset = "0x0")]
	private static readonly T[] s_emptyArray;

	[Token(Token = "0x170007D0")]
	public int Capacity
	{
		[Token(Token = "0x6002FB1")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002FB2")]
		set
		{
		}
	}

	[Token(Token = "0x170007D1")]
	public int Count
	{
		[Token(Token = "0x6002FB3")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170007D2")]
	public T this[int index]
	{
		[Token(Token = "0x6002FB4")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6002FB5")]
		set
		{
		}
	}

	[Token(Token = "0x6002FAF")]
	public LowLevelList()
	{
	}

	[Token(Token = "0x6002FB0")]
	public LowLevelList(int capacity)
	{
	}

	[Token(Token = "0x6002FB6")]
	public void Add(T item)
	{
	}

	[Token(Token = "0x6002FB7")]
	private void EnsureCapacity(int min)
	{
	}

	[Token(Token = "0x6002FB8")]
	public void AddRange(IEnumerable<T> collection)
	{
	}

	[Token(Token = "0x6002FB9")]
	public void Clear()
	{
	}

	[Token(Token = "0x6002FBA")]
	public bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6002FBB")]
	public void CopyTo(T[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x6002FBC")]
	public int IndexOf(T item)
	{
		return default(int);
	}

	[Token(Token = "0x6002FBD")]
	public void Insert(int index, T item)
	{
	}

	[Token(Token = "0x6002FBE")]
	public void InsertRange(int index, IEnumerable<T> collection)
	{
	}

	[Token(Token = "0x6002FBF")]
	public bool Remove(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6002FC0")]
	public int RemoveAll(Predicate<T> match)
	{
		return default(int);
	}

	[Token(Token = "0x6002FC1")]
	public void RemoveAt(int index)
	{
	}
}
