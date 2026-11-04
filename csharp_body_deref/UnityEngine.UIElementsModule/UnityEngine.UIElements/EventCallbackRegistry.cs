// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.EventCallbackRegistry
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using JetBrains.Annotations;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001CF")]
internal class EventCallbackRegistry
{
	[Token(Token = "0x20001D0")]
	internal struct DynamicCallbackList
	{
		[Token(Token = "0x40007AE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private TrickleDown m_UseTrickleDown;

		[Token(Token = "0x40007AF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		[NotNull]
		private EventCallbackList m_Callbacks;

		[Token(Token = "0x40007B0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		[CanBeNull]
		private EventCallbackList m_TemporaryCallbacks;

		[Token(Token = "0x40007B1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		[CanBeNull]
		private List<EventCallbackFunctorBase> m_UnregisteredCallbacksDuringInvoke;

		[Token(Token = "0x40007B2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int m_IsInvoking;

		[Token(Token = "0x6000C8F")]
		[Address(RVA = "0x3259E50", Offset = "0x3258450", VA = "0x183259E50")]
		public static DynamicCallbackList Create(TrickleDown useTrickleDown)
		{
			return default(DynamicCallbackList);
		}

		[Token(Token = "0x6000C90")]
		[Address(RVA = "0x325A1B0", Offset = "0x32587B0", VA = "0x18325A1B0")]
		[NotNull]
		public EventCallbackList GetCallbackListForWriting()
		{
			return null;
		}

		[Token(Token = "0x6000C91")]
		[Address(RVA = "0x325A190", Offset = "0x3258790", VA = "0x18325A190")]
		[NotNull]
		public readonly EventCallbackList GetCallbackListForReading()
		{
			return null;
		}

		[Token(Token = "0x6000C92")]
		[Address(RVA = "0x325A550", Offset = "0x3258B50", VA = "0x18325A550")]
		public bool UnregisterCallback(long eventTypeId, [NotNull] Delegate callback)
		{
			return default(bool);
		}

		[Token(Token = "0x6000C93")]
		[Address(RVA = "0x325A2B0", Offset = "0x32588B0", VA = "0x18325A2B0")]
		public void Invoke(EventBase evt, BaseVisualElementPanel panel, VisualElement target)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C94")]
		[Address(RVA = "0x3259E40", Offset = "0x3258440", VA = "0x183259E40")]
		private void BeginInvoke()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C95")]
		[Address(RVA = "0x3259F30", Offset = "0x3258530", VA = "0x183259F30")]
		private void EndInvoke()
		{
		}
	}

	[Token(Token = "0x40007AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly EventCallbackListPool s_ListPool;

	[Token(Token = "0x40007AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal DynamicCallbackList m_TrickleDownCallbacks;

	[Token(Token = "0x40007AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal DynamicCallbackList m_BubbleUpCallbacks;

	[Token(Token = "0x6000C86")]
	[Address(RVA = "0x325C8E0", Offset = "0x325AEE0", VA = "0x18325C8E0")]
	private static EventCallbackList GetCallbackList([Optional] EventCallbackList initializer)
	{
		return null;
	}

	[Token(Token = "0x6000C87")]
	[Address(RVA = "0x325C970", Offset = "0x325AF70", VA = "0x18325C970")]
	private static void ReleaseCallbackList(EventCallbackList toRelease)
	{
	}

	[Token(Token = "0x6000C88")]
	[Address(RVA = "0x325C950", Offset = "0x325AF50", VA = "0x18325C950")]
	private unsafe ref DynamicCallbackList GetDynamicCallbackList(CallbackOptions callbackOptions)
	{
		return ref *(DynamicCallbackList*)null;
	}

	[Token(Token = "0x6000C89")]
	public void RegisterCallback<TEventType>([NotNull] EventCallback<TEventType> callback, CallbackOptions callbackOptions = CallbackOptions.Default) where TEventType : EventBase<TEventType>, new()
	{
	}

	[Token(Token = "0x6000C8A")]
	public void RegisterCallback<TEventType, TCallbackArgs>([NotNull] EventCallback<TEventType, TCallbackArgs> callback, TCallbackArgs userArgs, CallbackOptions callbackOptions = CallbackOptions.Default) where TEventType : EventBase<TEventType>, new()
	{
	}

	[Token(Token = "0x6000C8B")]
	public bool UnregisterCallback<TEventType>([NotNull] EventCallback<TEventType> callback, CallbackOptions callbackOptions = CallbackOptions.Default) where TEventType : EventBase<TEventType>, new()
	{
		return default(bool);
	}

	[Token(Token = "0x6000C8C")]
	public bool UnregisterCallback<TEventType, TCallbackArgs>([NotNull] EventCallback<TEventType, TCallbackArgs> callback, CallbackOptions callbackOptions = CallbackOptions.Default) where TEventType : EventBase<TEventType>, new()
	{
		return default(bool);
	}

	[Token(Token = "0x6000C8D")]
	[Address(RVA = "0x325CB10", Offset = "0x325B110", VA = "0x18325CB10")]
	public EventCallbackRegistry()
	{
	}
}
