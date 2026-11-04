// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.LinkedListNode
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x200025A")]
public sealed class LinkedListNode<T>
{
	[Token(Token = "0x4000860")]
	[FieldOffset(Offset = "0x0")]
	internal LinkedList<T> list;

	[Token(Token = "0x4000861")]
	[FieldOffset(Offset = "0x0")]
	internal LinkedListNode<T> next;

	[Token(Token = "0x4000862")]
	[FieldOffset(Offset = "0x0")]
	internal LinkedListNode<T> prev;

	[Token(Token = "0x4000863")]
	[FieldOffset(Offset = "0x0")]
	internal T item;

	[Token(Token = "0x17000346")]
	public LinkedListNode<T> Next
	{
		[Token(Token = "0x6001064")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000347")]
	public T Value
	{
		[Token(Token = "0x6001065")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6001066")]
		set
		{
		}
	}

	[Token(Token = "0x6001062")]
	public LinkedListNode(T value)
	{
	}

	[Token(Token = "0x6001063")]
	internal LinkedListNode(LinkedList<T> list, T value)
	{
	}

	[Token(Token = "0x6001067")]
	internal void Invalidate()
	{
	}
}
