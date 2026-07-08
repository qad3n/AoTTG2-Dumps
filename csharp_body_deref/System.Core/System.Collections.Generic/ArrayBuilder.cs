using System.Reflection;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x2000287")]
[DefaultMember("Item")]
internal struct ArrayBuilder<T>
{
	[Token(Token = "0x40004A2")]
	[FieldOffset(Offset = "0x0")]
	private T[] _array;

	[Token(Token = "0x40004A3")]
	[FieldOffset(Offset = "0x0")]
	private int _count;

	[Token(Token = "0x6000CDC")]
	public ArrayBuilder(int capacity)
	{
	}

	[Token(Token = "0x6000CDD")]
	public T[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6000CDE")]
	public void UncheckedAdd(T item)
	{
	}
}
