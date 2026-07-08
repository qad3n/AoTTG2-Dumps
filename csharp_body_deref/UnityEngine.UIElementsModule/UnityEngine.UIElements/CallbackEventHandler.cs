using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200018F")]
public abstract class CallbackEventHandler : IEventHandler
{
	[Token(Token = "0x4000684")]
	[FieldOffset(Offset = "0x10")]
	internal bool isIMGUIContainer;

	[Token(Token = "0x4000685")]
	[FieldOffset(Offset = "0x18")]
	internal EventCallbackRegistry m_CallbackRegistry;

	[Token(Token = "0x4000686")]
	internal const string ExecuteDefaultActionName = "ExecuteDefaultAction";

	[Token(Token = "0x4000687")]
	internal const string ExecuteDefaultActionAtTargetName = "ExecuteDefaultActionAtTarget";

	[Token(Token = "0x6000A9C")]
	public void RegisterCallback<TEventType>(EventCallback<TEventType> callback, TrickleDown useTrickleDown = TrickleDown.NoTrickleDown) where TEventType : EventBase<TEventType>, new()
	{
	}

	[Token(Token = "0x6000A9D")]
	private void AddEventCategories<TEventType>() where TEventType : EventBase<TEventType>, new()
	{
	}

	[Token(Token = "0x6000A9E")]
	internal void RegisterCallback<TEventType>(EventCallback<TEventType> callback, InvokePolicy invokePolicy, TrickleDown useTrickleDown = TrickleDown.NoTrickleDown) where TEventType : EventBase<TEventType>, new()
	{
	}

	[Token(Token = "0x6000A9F")]
	public void UnregisterCallback<TEventType>(EventCallback<TEventType> callback, TrickleDown useTrickleDown = TrickleDown.NoTrickleDown) where TEventType : EventBase<TEventType>, new()
	{
	}

	[Token(Token = "0x6000AA0")]
	public abstract void SendEvent(EventBase e);

	[Token(Token = "0x6000AA1")]
	internal abstract void SendEvent(EventBase e, DispatchMode dispatchMode);

	[Token(Token = "0x6000AA2")]
	[Address(RVA = "0x4D08770", Offset = "0x4D08770", VA = "0x4D08770", Slot = "7")]
	public bool HasTrickleDownHandlers()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AA3")]
	[Address(RVA = "0x4D087A0", Offset = "0x4D087A0", VA = "0x4D087A0", Slot = "8")]
	public bool HasBubbleUpHandlers()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AA4")]
	[Address(RVA = "0x4D087D0", Offset = "0x4D087D0", VA = "0x4D087D0", Slot = "9")]
	[EventInterest(EventInterestOptions.Inherit)]
	protected virtual void ExecuteDefaultActionAtTarget(EventBase evt)
	{
	}

	[Token(Token = "0x6000AA5")]
	[Address(RVA = "0x4D087E0", Offset = "0x4D087E0", VA = "0x4D087E0", Slot = "10")]
	[EventInterest(EventInterestOptions.Inherit)]
	protected virtual void ExecuteDefaultAction(EventBase evt)
	{
	}

	[Token(Token = "0x6000AA6")]
	[Address(RVA = "0x4D087F0", Offset = "0x4D087F0", VA = "0x4D087F0", Slot = "11")]
	[EventInterest(EventInterestOptions.Inherit)]
	internal virtual void ExecuteDefaultActionDisabledAtTarget(EventBase evt)
	{
	}

	[Token(Token = "0x6000AA7")]
	[Address(RVA = "0x4D08800", Offset = "0x4D08800", VA = "0x4D08800", Slot = "12")]
	[EventInterest(EventInterestOptions.Inherit)]
	internal virtual void ExecuteDefaultActionDisabled(EventBase evt)
	{
	}

	[Token(Token = "0x6000AA8")]
	[Address(RVA = "0x4D08810", Offset = "0x4D08810", VA = "0x4D08810")]
	internal void NotifyPropertyChanged(DataBindingProperty property)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AA9")]
	[Address(RVA = "0x4D08820", Offset = "0x4D08820", VA = "0x4D08820")]
	internal void ExecuteDefaultActionInternal(EventBase evt)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AAA")]
	[Address(RVA = "0x4D08840", Offset = "0x4D08840", VA = "0x4D08840")]
	internal void ExecuteDefaultActionAtTargetInternal(EventBase evt)
	{
	}

	[Token(Token = "0x6000AAB")]
	[Address(RVA = "0x4D08860", Offset = "0x4D08860", VA = "0x4D08860")]
	protected CallbackEventHandler()
	{
	}
}
