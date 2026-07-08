using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x200065A")]
internal struct LargeArrayBuilder<T>
{
	[Token(Token = "0x4001B42")]
	[FieldOffset(Offset = "0x0")]
	private readonly int _maxCapacity;

	[Token(Token = "0x4001B43")]
	[FieldOffset(Offset = "0x0")]
	private T[] _first;

	[Token(Token = "0x4001B44")]
	[FieldOffset(Offset = "0x0")]
	private System.Collections.Generic.ArrayBuilder<T[]> _buffers;

	[Token(Token = "0x4001B45")]
	[FieldOffset(Offset = "0x0")]
	private T[] _current;

	[Token(Token = "0x4001B46")]
	[FieldOffset(Offset = "0x0")]
	private int _index;

	[Token(Token = "0x4001B47")]
	[FieldOffset(Offset = "0x0")]
	private int _count;

	[Token(Token = "0x600326C")]
	public LargeArrayBuilder(bool initialize)
	{
	}

	[Token(Token = "0x600326D")]
	public LargeArrayBuilder(int maxCapacity)
	{
	}

	[Token(Token = "0x600326E")]
	public void AddRange(IEnumerable<T> items)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600326F")]
	private void AddWithBufferAllocation(T item, ref T[] destination, ref int index)
	{
	}

	[Token(Token = "0x6003270")]
	public void CopyTo(T[] array, int arrayIndex, int count)
	{
	}

	[Token(Token = "0x6003271")]
	public T[] GetBuffer(int index)
	{
		return null;
	}

	[Token(Token = "0x6003272")]
	public T[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6003273")]
	public bool TryMove(out T[] array)
	{
		return default(bool);
	}

	[Token(Token = "0x6003274")]
	private void AllocateBuffer()
	{
	}
}
