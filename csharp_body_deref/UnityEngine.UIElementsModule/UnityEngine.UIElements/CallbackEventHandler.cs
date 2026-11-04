// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.CallbackEventHandler
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001D4")]
public abstract class CallbackEventHandler : IEventHandler
{
	[Token(Token = "0x40007BA")]
	[FieldOffset(Offset = "0x10")]
	internal bool isIMGUIContainer;

	[Token(Token = "0x40007BB")]
	[FieldOffset(Offset = "0x18")]
	internal EventCallbackRegistry m_CallbackRegistry;

	[Token(Token = "0x40007BC")]
	internal const string HandleEventBubbleUpName = "HandleEventBubbleUp";

	[Token(Token = "0x40007BD")]
	internal const string HandleEventTrickleDownName = "HandleEventTrickleDown";

	[Token(Token = "0x40007BE")]
	internal const string ExecuteDefaultActionName = "ExecuteDefaultAction";

	[Token(Token = "0x40007BF")]
	internal const string ExecuteDefaultActionAtTargetName = "ExecuteDefaultActionAtTarget";

	[Token(Token = "0x6000CAD")]
	public void RegisterCallback<TEventType>(EventCallback<TEventType> callback, TrickleDown useTrickleDown = TrickleDown.NoTrickleDown) where TEventType : EventBase<TEventType>, new()
	{
	}

	[Token(Token = "0x6000CAE")]
	public void RegisterCallbackOnce<TEventType>(EventCallback<TEventType> callback, TrickleDown useTrickleDown = TrickleDown.NoTrickleDown) where TEventType : EventBase<TEventType>, new()
	{
	}

	[Token(Token = "0x6000CAF")]
	private void AddEventCategories<TEventType>(CallbackOptions callbackOptions) where TEventType : EventBase<TEventType>, new()
	{
	}

	[Token(Token = "0x6000CB0")]
	public void RegisterCallback<TEventType, TUserArgsType>(EventCallback<TEventType, TUserArgsType> callback, TUserArgsType userArgs, TrickleDown useTrickleDown = TrickleDown.NoTrickleDown) where TEventType : EventBase<TEventType>, new()
	{
	}

	[Token(Token = "0x6000CB1")]
	public void RegisterCallback<TEventType>(EventCallback<TEventType> callback, CallbackOptions callbackOptions) where TEventType : EventBase<TEventType>, new()
	{
	}

	[Token(Token = "0x6000CB2")]
	public void UnregisterCallback<TEventType>(EventCallback<TEventType> callback, TrickleDown useTrickleDown = TrickleDown.NoTrickleDown) where TEventType : EventBase<TEventType>, new()
	{
	}

	[Token(Token = "0x6000CB3")]
	public void UnregisterCallback<TEventType, TUserArgsType>(EventCallback<TEventType, TUserArgsType> callback, TrickleDown useTrickleDown = TrickleDown.NoTrickleDown) where TEventType : EventBase<TEventType>, new()
	{
	}

	[Token(Token = "0x6000CB4")]
	public abstract void SendEvent(EventBase e);

	[Token(Token = "0x6000CB5")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.HierarchyModule" })]
	internal abstract void SendEvent(EventBase e, DispatchMode dispatchMode);

	[Token(Token = "0x6000CB6")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
	[EventInterest(EventInterestOptions.Inherit)]
	[Obsolete("Use HandleEventBubbleUp. Before proceeding, make sure you understand the latest changes to UIToolkit event propagation rules by visiting Unity's manual page https://docs.unity3d.com/Manual/UIE-Events-Dispatching.html")]
	protected virtual void ExecuteDefaultActionAtTarget(EventBase evt)
	{
	}

	[Token(Token = "0x6000CB7")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
	[EventInterest(EventInterestOptions.Inherit)]
	protected virtual void HandleEventBubbleUp(EventBase evt)
	{
	}

	[Token(Token = "0x6000CB8")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	[EventInterest(EventInterestOptions.Inherit)]
	internal virtual void HandleEventBubbleUpDisabled(EventBase evt)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CB9")]
	[Address(RVA = "0x25EACE0", Offset = "0x25E92E0", VA = "0x1825EACE0")]
	internal void HandleEventBubbleUpInternal(EventBase evt)
	{
	}

	[Token(Token = "0x6000CBA")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "10")]
	[EventInterest(EventInterestOptions.Inherit)]
	protected virtual void HandleEventTrickleDown(EventBase evt)
	{
	}

	[Token(Token = "0x6000CBB")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "11")]
	[EventInterest(EventInterestOptions.Inherit)]
	internal virtual void HandleEventTrickleDownDisabled(EventBase evt)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CBC")]
	[Address(RVA = "0x270EA00", Offset = "0x270D000", VA = "0x18270EA00")]
	internal void HandleEventTrickleDownInternal(EventBase evt)
	{
	}

	[Token(Token = "0x6000CBD")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "12")]
	[Obsolete("Use HandleEventBubbleUp. Before proceeding, make sure you understand the latest changes to UIToolkit event propagation rules by visiting Unity's manual page https://docs.unity3d.com/Manual/UIE-Events-Dispatching.html")]
	[EventInterest(EventInterestOptions.Inherit)]
	protected virtual void ExecuteDefaultAction(EventBase evt)
	{
	}

	[Token(Token = "0x6000CBE")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "13")]
	[EventInterest(EventInterestOptions.Inherit)]
	[Obsolete("Use HandleEventBubbleUpDisabled.")]
	internal virtual void ExecuteDefaultActionDisabledAtTarget(EventBase evt)
	{
	}

	[Token(Token = "0x6000CBF")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "14")]
	[Obsolete("Use HandleEventBubbleUpDisabled.")]
	[EventInterest(EventInterestOptions.Inherit)]
	internal virtual void ExecuteDefaultActionDisabled(EventBase evt)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CC0")]
	[Address(RVA = "0x3256830", Offset = "0x3254E30", VA = "0x183256830")]
	internal void ExecuteDefaultActionInternal(EventBase evt)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CC1")]
	[Address(RVA = "0x3256810", Offset = "0x3254E10", VA = "0x183256810")]
	internal void ExecuteDefaultActionDisabledInternal(EventBase evt)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CC2")]
	[Address(RVA = "0x307D560", Offset = "0x307BB60", VA = "0x18307D560")]
	internal void ExecuteDefaultActionAtTargetInternal(EventBase evt)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CC3")]
	[Address(RVA = "0x1C7CE90", Offset = "0x1C7B490", VA = "0x181C7CE90")]
	internal void ExecuteDefaultActionDisabledAtTargetInternal(EventBase evt)
	{
	}

	[Token(Token = "0x6000CC4")]
	[Address(RVA = "0x3256850", Offset = "0x3254E50", VA = "0x183256850")]
	protected void NotifyPropertyChanged(in BindingId property)
	{
	}

	[Token(Token = "0x6000CC5")]
	[Address(RVA = "0x3256A00", Offset = "0x3255000", VA = "0x183256A00")]
	protected CallbackEventHandler()
	{
	}
}
