// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.ArrayBuilder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x2000658")]
internal struct ArrayBuilder<T>
{
	[Token(Token = "0x4001B40")]
	[FieldOffset(Offset = "0x0")]
	private T[] _array;

	[Token(Token = "0x4001B41")]
	[FieldOffset(Offset = "0x0")]
	private int _count;

	[Token(Token = "0x17000834")]
	public int Capacity
	{
		[Token(Token = "0x6003265")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000835")]
	public int Count
	{
		[Token(Token = "0x6003266")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000836")]
	public T this[int index]
	{
		[Token(Token = "0x6003267")]
		get
		{
			return (T)null;
		}
	}

	[Token(Token = "0x6003268")]
	public void Add(T item)
	{
	}

	[Token(Token = "0x6003269")]
	public void UncheckedAdd(T item)
	{
	}

	[Token(Token = "0x600326A")]
	private void EnsureCapacity(int minimum)
	{
	}
}
