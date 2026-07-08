using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000183")]
internal abstract class EventCallbackFunctorBase
{
	[Token(Token = "0x4000665")]
	[FieldOffset(Offset = "0x10")]
	public readonly long eventTypeId;

	[Token(Token = "0x4000666")]
	[FieldOffset(Offset = "0x18")]
	public readonly CallbackPhase phase;

	[Token(Token = "0x4000667")]
	[FieldOffset(Offset = "0x1C")]
	public readonly InvokePolicy invokePolicy;

	[Token(Token = "0x6000A63")]
	[Address(RVA = "0x4D053F0", Offset = "0x4D053F0", VA = "0x4D053F0")]
	protected EventCallbackFunctorBase(long eventTypeId, CallbackPhase phase, InvokePolicy invokePolicy)
	{
	}

	[Token(Token = "0x6000A64")]
	public abstract void Invoke(EventBase evt);

	[Token(Token = "0x6000A65")]
	public abstract bool IsEquivalentTo(long eventTypeId, Delegate callback, CallbackPhase phase);
}
