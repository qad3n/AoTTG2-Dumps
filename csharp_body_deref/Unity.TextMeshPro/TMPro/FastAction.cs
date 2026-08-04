// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.FastAction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x2000004")]
public class FastAction
{
	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x10")]
	private LinkedList<Action> delegates;

	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x18")]
	private Dictionary<Action, LinkedListNode<Action>> lookup;

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x4C300C0", Offset = "0x4C300C0", VA = "0x4C300C0")]
	public void Add(Action rhs)
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x4C30170", Offset = "0x4C30170", VA = "0x4C30170")]
	public void Remove(Action rhs)
	{
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x4C30220", Offset = "0x4C30220", VA = "0x4C30220")]
	public void Call()
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x4C302C0", Offset = "0x4C302C0", VA = "0x4C302C0")]
	public FastAction()
	{
	}
}
[Token(Token = "0x2000005")]
public class FastAction<A>
{
	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x0")]
	private LinkedList<Action<A>> delegates;

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x0")]
	private Dictionary<Action<A>, LinkedListNode<Action<A>>> lookup;

	[Token(Token = "0x6000007")]
	public void Add(Action<A> rhs)
	{
	}

	[Token(Token = "0x6000008")]
	public void Remove(Action<A> rhs)
	{
	}

	[Token(Token = "0x6000009")]
	public void Call(A a)
	{
	}

	[Token(Token = "0x600000A")]
	public FastAction()
	{
	}
}
[Token(Token = "0x2000006")]
public class FastAction<A, B>
{
	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x0")]
	private LinkedList<Action<A, B>> delegates;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x0")]
	private Dictionary<Action<A, B>, LinkedListNode<Action<A, B>>> lookup;

	[Token(Token = "0x600000B")]
	public void Add(Action<A, B> rhs)
	{
	}

	[Token(Token = "0x600000C")]
	public void Remove(Action<A, B> rhs)
	{
	}

	[Token(Token = "0x600000D")]
	public void Call(A a, B b)
	{
	}

	[Token(Token = "0x600000E")]
	public FastAction()
	{
	}
}
[Token(Token = "0x2000007")]
public class FastAction<A, B, C>
{
	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x0")]
	private LinkedList<Action<A, B, C>> delegates;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x0")]
	private Dictionary<Action<A, B, C>, LinkedListNode<Action<A, B, C>>> lookup;

	[Token(Token = "0x600000F")]
	public void Add(Action<A, B, C> rhs)
	{
	}

	[Token(Token = "0x6000010")]
	public void Remove(Action<A, B, C> rhs)
	{
	}

	[Token(Token = "0x6000011")]
	public void Call(A a, B b, C c)
	{
	}

	[Token(Token = "0x6000012")]
	public FastAction()
	{
	}
}
