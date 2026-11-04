// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.EventCallbackFunctor
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001C9")]
internal class EventCallbackFunctor<TEventType> : EventCallbackFunctorBase where TEventType : EventBase<TEventType>, new()
{
	[Token(Token = "0x400079A")]
	[FieldOffset(Offset = "0x0")]
	private EventCallback<TEventType> m_Callback;

	[Token(Token = "0x6000C6C")]
	public static EventCallbackFunctor<TEventType> GetPooled(long eventTypeId, EventCallback<TEventType> callback, CallbackOptions callbackOptions = CallbackOptions.Default)
	{
		return null;
	}

	[Token(Token = "0x6000C6D")]
	public override void Dispose()
	{
	}

	[Token(Token = "0x6000C6E")]
	public override void Invoke(EventBase evt)
	{
	}

	[Token(Token = "0x6000C6F")]
	public override void UnregisterCallback(CallbackEventHandler target, TrickleDown useTrickleDown)
	{
	}

	[Token(Token = "0x6000C70")]
	public override bool IsEquivalentTo(long eventTypeId, Delegate callback)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C71")]
	public EventCallbackFunctor()
	{
	}
}
[Token(Token = "0x20001CA")]
internal class EventCallbackFunctor<TEventType, TCallbackArgs> : EventCallbackFunctorBase where TEventType : EventBase<TEventType>, new()
{
	[Token(Token = "0x400079B")]
	[FieldOffset(Offset = "0x0")]
	private EventCallback<TEventType, TCallbackArgs> m_Callback;

	[Token(Token = "0x17000261")]
	internal TCallbackArgs userArgs
	{
		[Token(Token = "0x6000C72")]
		[CompilerGenerated]
		get
		{
			return (TCallbackArgs)null;
		}
		[Token(Token = "0x6000C73")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000C74")]
	public static EventCallbackFunctor<TEventType, TCallbackArgs> GetPooled(long eventTypeId, EventCallback<TEventType, TCallbackArgs> callback, TCallbackArgs userArgs, CallbackOptions callbackOptions = CallbackOptions.Default)
	{
		return null;
	}

	[Token(Token = "0x6000C75")]
	public override void Dispose()
	{
	}

	[Token(Token = "0x6000C76")]
	public override void Invoke(EventBase evt)
	{
	}

	[Token(Token = "0x6000C77")]
	public override void UnregisterCallback(CallbackEventHandler target, TrickleDown useTrickleDown)
	{
	}

	[Token(Token = "0x6000C78")]
	public override bool IsEquivalentTo(long eventTypeId, Delegate callback)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C79")]
	public EventCallbackFunctor()
	{
	}
}
