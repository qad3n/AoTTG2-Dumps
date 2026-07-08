using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000188")]
internal class EventCallbackListPool
{
	[Token(Token = "0x4000672")]
	[FieldOffset(Offset = "0x10")]
	private readonly Stack<EventCallbackList> m_Stack;

	[Token(Token = "0x6000A69")]
	[Address(RVA = "0x4D05430", Offset = "0x4D05430", VA = "0x4D05430")]
	public EventCallbackList Get(EventCallbackList initializer)
	{
		return null;
	}

	[Token(Token = "0x6000A6A")]
	[Address(RVA = "0x4D056C0", Offset = "0x4D056C0", VA = "0x4D056C0")]
	public void Release(EventCallbackList element)
	{
	}

	[Token(Token = "0x6000A6B")]
	[Address(RVA = "0x4D05750", Offset = "0x4D05750", VA = "0x4D05750")]
	public EventCallbackListPool()
	{
	}
}
