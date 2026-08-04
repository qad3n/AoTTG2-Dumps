// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.EventCallbackFunctorBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x502CD20", Offset = "0x502CD20", VA = "0x502CD20")]
	protected EventCallbackFunctorBase(long eventTypeId, CallbackPhase phase, InvokePolicy invokePolicy)
	{
	}

	[Token(Token = "0x6000A64")]
	public abstract void Invoke(EventBase evt);

	[Token(Token = "0x6000A65")]
	public abstract bool IsEquivalentTo(long eventTypeId, Delegate callback, CallbackPhase phase);
}
