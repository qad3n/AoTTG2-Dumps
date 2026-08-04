// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.EventCallbackListPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x502CD60", Offset = "0x502CD60", VA = "0x502CD60")]
	public EventCallbackList Get(EventCallbackList initializer)
	{
		return null;
	}

	[Token(Token = "0x6000A6A")]
	[Address(RVA = "0x502CFF0", Offset = "0x502CFF0", VA = "0x502CFF0")]
	public void Release(EventCallbackList element)
	{
	}

	[Token(Token = "0x6000A6B")]
	[Address(RVA = "0x502D080", Offset = "0x502D080", VA = "0x502D080")]
	public EventCallbackListPool()
	{
	}
}
