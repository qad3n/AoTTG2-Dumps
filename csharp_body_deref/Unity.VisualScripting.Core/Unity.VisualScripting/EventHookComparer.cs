using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200005C")]
public class EventHookComparer : IEqualityComparer<EventHook>
{
	[Token(Token = "0x6000291")]
	[Address(RVA = "0x4983A10", Offset = "0x4983A10", VA = "0x4983A10", Slot = "4")]
	public bool Equals(EventHook x, EventHook y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x4983A70", Offset = "0x4983A70", VA = "0x4983A70", Slot = "5")]
	public int GetHashCode(EventHook obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x4983370", Offset = "0x4983370", VA = "0x4983370")]
	public EventHookComparer()
	{
	}
}
