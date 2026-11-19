// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.LinkedListNode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x200021B")]
public sealed class LinkedListNode<T>
{
	[Token(Token = "0x4000791")]
	[FieldOffset(Offset = "0x0")]
	internal LinkedList<T> list;

	[Token(Token = "0x4000792")]
	[FieldOffset(Offset = "0x0")]
	internal LinkedListNode<T> next;

	[Token(Token = "0x4000793")]
	[FieldOffset(Offset = "0x0")]
	internal LinkedListNode<T> prev;

	[Token(Token = "0x4000794")]
	[FieldOffset(Offset = "0x0")]
	internal T item;

	[Token(Token = "0x17000317")]
	public LinkedListNode<T> Next
	{
		[Token(Token = "0x6000EA4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000318")]
	public T Value
	{
		[Token(Token = "0x6000EA5")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6000EA6")]
		set
		{
		}
	}

	[Token(Token = "0x6000EA2")]
	public LinkedListNode(T value)
	{
	}

	[Token(Token = "0x6000EA3")]
	internal LinkedListNode(LinkedList<T> list, T value)
	{
	}

	[Token(Token = "0x6000EA7")]
	internal void Invalidate()
	{
	}
}
