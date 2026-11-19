// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.ArrayBuilder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x2000607")]
internal struct ArrayBuilder<T>
{
	[Token(Token = "0x40018AD")]
	[FieldOffset(Offset = "0x0")]
	private T[] _array;

	[Token(Token = "0x40018AE")]
	[FieldOffset(Offset = "0x0")]
	private int _count;

	[Token(Token = "0x170007C2")]
	public int Capacity
	{
		[Token(Token = "0x6002F5B")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170007C3")]
	public int Count
	{
		[Token(Token = "0x6002F5C")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170007C4")]
	public T this[int index]
	{
		[Token(Token = "0x6002F5D")]
		get
		{
			return (T)null;
		}
	}

	[Token(Token = "0x6002F5E")]
	public void Add(T item)
	{
	}

	[Token(Token = "0x6002F5F")]
	public void UncheckedAdd(T item)
	{
	}

	[Token(Token = "0x6002F60")]
	private void EnsureCapacity(int minimum)
	{
	}
}
