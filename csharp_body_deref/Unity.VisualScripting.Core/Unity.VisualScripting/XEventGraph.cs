using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000061")]
public static class XEventGraph
{
	[Token(Token = "0x60002AD")]
	public static void TriggerEventHandler<TArgs>(this GraphReference reference, Func<EventHook, bool> predicate, TArgs args, Func<IGraphParentElement, bool> recurse, bool force)
	{
	}

	[Token(Token = "0x60002AE")]
	public static void TriggerEventHandler<TArgs>(this GraphStack stack, Func<EventHook, bool> predicate, TArgs args, Func<IGraphParentElement, bool> recurse, bool force)
	{
	}
}
