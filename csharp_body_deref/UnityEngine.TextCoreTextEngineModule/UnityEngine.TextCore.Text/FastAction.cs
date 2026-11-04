// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.FastAction
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x200001C")]
public class FastAction
{
	[Token(Token = "0x40000C3")]
	[FieldOffset(Offset = "0x10")]
	private LinkedList<Action> delegates;

	[Token(Token = "0x40000C4")]
	[FieldOffset(Offset = "0x18")]
	private Dictionary<Action, LinkedListNode<Action>> lookup;

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x3003540", Offset = "0x3001B40", VA = "0x183003540")]
	public FastAction()
	{
	}
}
[Token(Token = "0x200001D")]
public class FastAction<A>
{
	[Token(Token = "0x40000C5")]
	[FieldOffset(Offset = "0x0")]
	private LinkedList<Action<A>> delegates;

	[Token(Token = "0x40000C6")]
	[FieldOffset(Offset = "0x0")]
	private Dictionary<Action<A>, LinkedListNode<Action<A>>> lookup;

	[Token(Token = "0x600005A")]
	public FastAction()
	{
	}
}
[Token(Token = "0x200001E")]
public class FastAction<A, B>
{
	[Token(Token = "0x40000C7")]
	[FieldOffset(Offset = "0x0")]
	private LinkedList<Action<A, B>> delegates;

	[Token(Token = "0x40000C8")]
	[FieldOffset(Offset = "0x0")]
	private Dictionary<Action<A, B>, LinkedListNode<Action<A, B>>> lookup;

	[Token(Token = "0x600005B")]
	public void Call(A a, B b)
	{
	}

	[Token(Token = "0x600005C")]
	public FastAction()
	{
	}
}
[Token(Token = "0x200001F")]
public class FastAction<A, B, C>
{
	[Token(Token = "0x40000C9")]
	[FieldOffset(Offset = "0x0")]
	private LinkedList<Action<A, B, C>> delegates;

	[Token(Token = "0x40000CA")]
	[FieldOffset(Offset = "0x0")]
	private Dictionary<Action<A, B, C>, LinkedListNode<Action<A, B, C>>> lookup;

	[Token(Token = "0x600005D")]
	public FastAction()
	{
	}
}
