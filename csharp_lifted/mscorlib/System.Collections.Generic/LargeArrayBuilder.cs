// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.LargeArrayBuilder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x2000609")]
internal struct LargeArrayBuilder<T>
{
	[Token(Token = "0x40018AF")]
	[FieldOffset(Offset = "0x0")]
	private readonly int _maxCapacity;

	[Token(Token = "0x40018B0")]
	[FieldOffset(Offset = "0x0")]
	private T[] _first;

	[Token(Token = "0x40018B1")]
	[FieldOffset(Offset = "0x0")]
	private System.Collections.Generic.ArrayBuilder<T[]> _buffers;

	[Token(Token = "0x40018B2")]
	[FieldOffset(Offset = "0x0")]
	private T[] _current;

	[Token(Token = "0x40018B3")]
	[FieldOffset(Offset = "0x0")]
	private int _index;

	[Token(Token = "0x40018B4")]
	[FieldOffset(Offset = "0x0")]
	private int _count;

	[Token(Token = "0x6002F63")]
	public LargeArrayBuilder(bool initialize)
	{
	}

	[Token(Token = "0x6002F64")]
	public LargeArrayBuilder(int maxCapacity)
	{
	}

	[Token(Token = "0x6002F65")]
	public void AddRange(IEnumerable<T> items)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002F66")]
	private void AddWithBufferAllocation(T item, ref T[] destination, ref int index)
	{
	}

	[Token(Token = "0x6002F67")]
	public void CopyTo(T[] array, int arrayIndex, int count)
	{
	}

	[Token(Token = "0x6002F68")]
	public T[] GetBuffer(int index)
	{
		return null;
	}

	[Token(Token = "0x6002F69")]
	public T[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6002F6A")]
	public bool TryMove(out T[] array)
	{
		return default(bool);
	}

	[Token(Token = "0x6002F6B")]
	private void AllocateBuffer()
	{
	}
}
