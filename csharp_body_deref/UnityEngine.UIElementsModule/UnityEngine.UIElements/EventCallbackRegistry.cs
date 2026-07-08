using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using JetBrains.Annotations;

namespace UnityEngine.UIElements;

[Token(Token = "0x200018A")]
internal class EventCallbackRegistry
{
	[Token(Token = "0x200018B")]
	private struct DynamicCallbackList
	{
		[Token(Token = "0x400067A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		[NotNull]
		private EventCallbackList m_Callbacks;

		[Token(Token = "0x400067B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		[CanBeNull]
		private EventCallbackList m_TemporaryCallbacks;

		[Token(Token = "0x400067C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int m_IsInvoking;

		[Token(Token = "0x170001E1")]
		public int Count
		{
			[Token(Token = "0x6000A83")]
			[Address(RVA = "0x4D06340", Offset = "0x4D06340", VA = "0x4D06340")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000A84")]
		[Address(RVA = "0x4D064E0", Offset = "0x4D064E0", VA = "0x4D064E0")]
		public static DynamicCallbackList Create()
		{
			return default(DynamicCallbackList);
		}

		[Token(Token = "0x6000A85")]
		[Address(RVA = "0x4D05DB0", Offset = "0x4D05DB0", VA = "0x4D05DB0")]
		[NotNull]
		public EventCallbackList GetCallbackListForWriting()
		{
			return null;
		}

		[Token(Token = "0x6000A86")]
		[Address(RVA = "0x4D06660", Offset = "0x4D06660", VA = "0x4D06660")]
		[NotNull]
		public readonly EventCallbackList GetCallbackListForReading()
		{
			return null;
		}

		[Token(Token = "0x6000A87")]
		[Address(RVA = "0x4D05FC0", Offset = "0x4D05FC0", VA = "0x4D05FC0")]
		public void Invoke(EventBase evt, BaseVisualElementPanel panel, VisualElement target)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A88")]
		[Address(RVA = "0x4D06670", Offset = "0x4D06670", VA = "0x4D06670")]
		private void BeginInvoke()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A89")]
		[Address(RVA = "0x4D06680", Offset = "0x4D06680", VA = "0x4D06680")]
		private void EndInvoke()
		{
		}
	}

	[Token(Token = "0x4000677")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly EventCallbackListPool s_ListPool;

	[Token(Token = "0x4000678")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private DynamicCallbackList m_TrickleDownCallbacks;

	[Token(Token = "0x4000679")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private DynamicCallbackList m_BubbleUpCallbacks;

	[Token(Token = "0x6000A77")]
	[Address(RVA = "0x4D05BD0", Offset = "0x4D05BD0", VA = "0x4D05BD0")]
	private static EventCallbackList GetCallbackList([Optional] EventCallbackList initializer)
	{
		return null;
	}

	[Token(Token = "0x6000A78")]
	[Address(RVA = "0x4D05C60", Offset = "0x4D05C60", VA = "0x4D05C60")]
	private static void ReleaseCallbackList(EventCallbackList toRelease)
	{
	}

	[Token(Token = "0x6000A79")]
	[Address(RVA = "0x4D05D50", Offset = "0x4D05D50", VA = "0x4D05D50")]
	private unsafe ref DynamicCallbackList GetDynamicCallbackList(CallbackPhase phase)
	{
		return ref *(DynamicCallbackList*)null;
	}

	[Token(Token = "0x6000A7A")]
	[Address(RVA = "0x4D05D60", Offset = "0x4D05D60", VA = "0x4D05D60")]
	private bool UnregisterCallback(long eventTypeId, [NotNull] Delegate callback, TrickleDown useTrickleDown)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A7B")]
	public void RegisterCallback<TEventType>([NotNull] EventCallback<TEventType> callback, TrickleDown useTrickleDown = TrickleDown.NoTrickleDown, InvokePolicy invokePolicy = InvokePolicy.Default) where TEventType : EventBase<TEventType>, new()
	{
	}

	[Token(Token = "0x6000A7C")]
	public bool UnregisterCallback<TEventType>([NotNull] EventCallback<TEventType> callback, TrickleDown useTrickleDown = TrickleDown.NoTrickleDown) where TEventType : EventBase<TEventType>, new()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A7D")]
	[Address(RVA = "0x4D05FA0", Offset = "0x4D05FA0", VA = "0x4D05FA0")]
	public void InvokeCallbacks(EventBase evt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement target, CallbackPhase phase)
	{
	}

	[Token(Token = "0x6000A7E")]
	[Address(RVA = "0x4D062C0", Offset = "0x4D062C0", VA = "0x4D062C0")]
	public void InvokeCallbacksAtTarget(EventBase evt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement target)
	{
	}

	[Token(Token = "0x6000A7F")]
	[Address(RVA = "0x4D06320", Offset = "0x4D06320", VA = "0x4D06320")]
	public bool HasTrickleDownHandlers()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A80")]
	[Address(RVA = "0x4D06360", Offset = "0x4D06360", VA = "0x4D06360")]
	public bool HasBubbleHandlers()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A81")]
	[Address(RVA = "0x4D06380", Offset = "0x4D06380", VA = "0x4D06380")]
	public EventCallbackRegistry()
	{
	}
}
