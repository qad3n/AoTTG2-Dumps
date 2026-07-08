using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000184")]
internal class EventCallbackFunctor<TEventType> : EventCallbackFunctorBase where TEventType : EventBase<TEventType>, new()
{
	[Token(Token = "0x4000668")]
	[FieldOffset(Offset = "0x0")]
	private readonly EventCallback<TEventType> m_Callback;

	[Token(Token = "0x6000A66")]
	public EventCallbackFunctor(EventCallback<TEventType> callback, CallbackPhase phase, InvokePolicy invokePolicy = InvokePolicy.Default)
	{
	}

	[Token(Token = "0x6000A67")]
	public override void Invoke(EventBase evt)
	{
	}

	[Token(Token = "0x6000A68")]
	public override bool IsEquivalentTo(long eventTypeId, Delegate callback, CallbackPhase phase)
	{
		return default(bool);
	}
}
