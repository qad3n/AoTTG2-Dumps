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

[Token(Token = "0x20001CD")]
internal class EventCallbackListPool
{
	[Token(Token = "0x40007A6")]
	[FieldOffset(Offset = "0x10")]
	private readonly Stack<EventCallbackList> m_Stack;

	[Token(Token = "0x6000C7A")]
	[Address(RVA = "0x325BF70", Offset = "0x325A570", VA = "0x18325BF70")]
	public EventCallbackList Get(EventCallbackList initializer)
	{
		return null;
	}

	[Token(Token = "0x6000C7B")]
	[Address(RVA = "0x325C140", Offset = "0x325A740", VA = "0x18325C140")]
	public void Release(EventCallbackList element)
	{
	}

	[Token(Token = "0x6000C7C")]
	[Address(RVA = "0x325C1C0", Offset = "0x325A7C0", VA = "0x18325C1C0")]
	public EventCallbackListPool()
	{
	}
}
