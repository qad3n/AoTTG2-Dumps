using System.Reflection;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x2000288")]
[DefaultMember("Item")]
internal struct ArrayBuilder<T>
{
	[Token(Token = "0x40004AB")]
	[FieldOffset(Offset = "0x0")]
	private T[] _array;

	[Token(Token = "0x40004AC")]
	[FieldOffset(Offset = "0x0")]
	private int _count;

	[Token(Token = "0x6000CE6")]
	public ArrayBuilder(int capacity)
	{
	}

	[Token(Token = "0x6000CE7")]
	public T[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6000CE8")]
	public void UncheckedAdd(T item)
	{
	}
}
