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

[Token(Token = "0x200062E")]
internal struct LargeArrayBuilder<T>
{
	[Token(Token = "0x4001948")]
	[FieldOffset(Offset = "0x0")]
	private readonly int _maxCapacity;

	[Token(Token = "0x4001949")]
	[FieldOffset(Offset = "0x0")]
	private T[] _first;

	[Token(Token = "0x400194A")]
	[FieldOffset(Offset = "0x0")]
	private System.Collections.Generic.ArrayBuilder<T[]> _buffers;

	[Token(Token = "0x400194B")]
	[FieldOffset(Offset = "0x0")]
	private T[] _current;

	[Token(Token = "0x400194C")]
	[FieldOffset(Offset = "0x0")]
	private int _index;

	[Token(Token = "0x400194D")]
	[FieldOffset(Offset = "0x0")]
	private int _count;

	[Token(Token = "0x6002F84")]
	public LargeArrayBuilder(bool initialize)
	{
	}

	[Token(Token = "0x6002F85")]
	public LargeArrayBuilder(int maxCapacity)
	{
	}

	[Token(Token = "0x6002F86")]
	public void AddRange(IEnumerable<T> items)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002F87")]
	private void AddWithBufferAllocation(T item, ref T[] destination, ref int index)
	{
	}

	[Token(Token = "0x6002F88")]
	public void CopyTo(T[] array, int arrayIndex, int count)
	{
	}

	[Token(Token = "0x6002F89")]
	public T[] GetBuffer(int index)
	{
		return null;
	}

	[Token(Token = "0x6002F8A")]
	public T[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6002F8B")]
	public bool TryMove(out T[] array)
	{
		return default(bool);
	}

	[Token(Token = "0x6002F8C")]
	private void AllocateBuffer()
	{
	}
}
