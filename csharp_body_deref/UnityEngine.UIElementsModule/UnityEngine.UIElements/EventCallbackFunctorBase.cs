// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.EventCallbackFunctorBase
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001C8")]
internal abstract class EventCallbackFunctorBase : IDisposable
{
	[Token(Token = "0x4000798")]
	[FieldOffset(Offset = "0x10")]
	public long eventTypeId;

	[Token(Token = "0x4000799")]
	[FieldOffset(Offset = "0x18")]
	public CallbackOptions callbackOptions;

	[Token(Token = "0x6000C67")]
	public abstract void Invoke(EventBase evt);

	[Token(Token = "0x6000C68")]
	public abstract void UnregisterCallback(CallbackEventHandler target, TrickleDown useTrickleDown);

	[Token(Token = "0x6000C69")]
	public abstract void Dispose();

	[Token(Token = "0x6000C6A")]
	public abstract bool IsEquivalentTo(long eventTypeId, Delegate callback);

	[Token(Token = "0x6000C6B")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected EventCallbackFunctorBase()
	{
	}
}
