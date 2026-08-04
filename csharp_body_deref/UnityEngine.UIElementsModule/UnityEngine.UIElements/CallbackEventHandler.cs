// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.CallbackEventHandler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x50300A0", Offset = "0x50300A0", VA = "0x50300A0", Slot = "7")]
	public bool HasTrickleDownHandlers()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AA3")]
	[Address(RVA = "0x50300D0", Offset = "0x50300D0", VA = "0x50300D0", Slot = "8")]
	public bool HasBubbleUpHandlers()
	{
		return default(bool);
	}

	[Token(Token = "0x6000AA4")]
	[Address(RVA = "0x5030100", Offset = "0x5030100", VA = "0x5030100", Slot = "9")]
	[EventInterest(EventInterestOptions.Inherit)]
	protected virtual void ExecuteDefaultActionAtTarget(EventBase evt)
	{
	}

	[Token(Token = "0x6000AA5")]
	[Address(RVA = "0x5030110", Offset = "0x5030110", VA = "0x5030110", Slot = "10")]
	[EventInterest(EventInterestOptions.Inherit)]
	protected virtual void ExecuteDefaultAction(EventBase evt)
	{
	}

	[Token(Token = "0x6000AA6")]
	[Address(RVA = "0x5030120", Offset = "0x5030120", VA = "0x5030120", Slot = "11")]
	[EventInterest(EventInterestOptions.Inherit)]
	internal virtual void ExecuteDefaultActionDisabledAtTarget(EventBase evt)
	{
	}

	[Token(Token = "0x6000AA7")]
	[Address(RVA = "0x5030130", Offset = "0x5030130", VA = "0x5030130", Slot = "12")]
	[EventInterest(EventInterestOptions.Inherit)]
	internal virtual void ExecuteDefaultActionDisabled(EventBase evt)
	{
	}

	[Token(Token = "0x6000AA8")]
	[Address(RVA = "0x5030140", Offset = "0x5030140", VA = "0x5030140")]
	internal void NotifyPropertyChanged(DataBindingProperty property)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AA9")]
	[Address(RVA = "0x5030150", Offset = "0x5030150", VA = "0x5030150")]
	internal void ExecuteDefaultActionInternal(EventBase evt)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AAA")]
	[Address(RVA = "0x5030170", Offset = "0x5030170", VA = "0x5030170")]
	internal void ExecuteDefaultActionAtTargetInternal(EventBase evt)
	{
	}

	[Token(Token = "0x6000AAB")]
	[Address(RVA = "0x5030190", Offset = "0x5030190", VA = "0x5030190")]
	protected CallbackEventHandler()
	{
	}
}
