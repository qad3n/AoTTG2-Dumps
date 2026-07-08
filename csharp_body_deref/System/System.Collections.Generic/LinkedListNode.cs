using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x200034F")]
public sealed class LinkedListNode<T>
{
	[Token(Token = "0x4000F29")]
	[FieldOffset(Offset = "0x0")]
	internal LinkedList<T> list;

	[Token(Token = "0x4000F2A")]
	[FieldOffset(Offset = "0x0")]
	internal LinkedListNode<T> next;

	[Token(Token = "0x4000F2B")]
	[FieldOffset(Offset = "0x0")]
	internal LinkedListNode<T> prev;

	[Token(Token = "0x4000F2C")]
	[FieldOffset(Offset = "0x0")]
	internal T item;

	[Token(Token = "0x170004D7")]
	public LinkedListNode<T> Next
	{
		[Token(Token = "0x600161D")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004D8")]
	public T Value
	{
		[Token(Token = "0x600161E")]
		get
		{
			return (T)null;
		}
	}

	[Token(Token = "0x600161B")]
	public LinkedListNode(T value)
	{
	}

	[Token(Token = "0x600161C")]
	internal LinkedListNode(LinkedList<T> list, T value)
	{
	}

	[Token(Token = "0x600161F")]
	internal void Invalidate()
	{
	}
}
