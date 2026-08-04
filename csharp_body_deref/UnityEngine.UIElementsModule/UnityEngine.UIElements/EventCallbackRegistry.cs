// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.EventCallbackRegistry
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
			[Address(RVA = "0x502DC70", Offset = "0x502DC70", VA = "0x502DC70")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6000A84")]
		[Address(RVA = "0x502DE10", Offset = "0x502DE10", VA = "0x502DE10")]
		public static DynamicCallbackList Create()
		{
			return default(DynamicCallbackList);
		}

		[Token(Token = "0x6000A85")]
		[Address(RVA = "0x502D6E0", Offset = "0x502D6E0", VA = "0x502D6E0")]
		[NotNull]
		public EventCallbackList GetCallbackListForWriting()
		{
			return null;
		}

		[Token(Token = "0x6000A86")]
		[Address(RVA = "0x502DF90", Offset = "0x502DF90", VA = "0x502DF90")]
		[NotNull]
		public readonly EventCallbackList GetCallbackListForReading()
		{
			return null;
		}

		[Token(Token = "0x6000A87")]
		[Address(RVA = "0x502D8F0", Offset = "0x502D8F0", VA = "0x502D8F0")]
		public void Invoke(EventBase evt, BaseVisualElementPanel panel, VisualElement target)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A88")]
		[Address(RVA = "0x502DFA0", Offset = "0x502DFA0", VA = "0x502DFA0")]
		private void BeginInvoke()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A89")]
		[Address(RVA = "0x502DFB0", Offset = "0x502DFB0", VA = "0x502DFB0")]
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
	[Address(RVA = "0x502D500", Offset = "0x502D500", VA = "0x502D500")]
	private static EventCallbackList GetCallbackList([Optional] EventCallbackList initializer)
	{
		return null;
	}

	[Token(Token = "0x6000A78")]
	[Address(RVA = "0x502D590", Offset = "0x502D590", VA = "0x502D590")]
	private static void ReleaseCallbackList(EventCallbackList toRelease)
	{
	}

	[Token(Token = "0x6000A79")]
	[Address(RVA = "0x502D680", Offset = "0x502D680", VA = "0x502D680")]
	private unsafe ref DynamicCallbackList GetDynamicCallbackList(CallbackPhase phase)
	{
		return ref *(DynamicCallbackList*)null;
	}

	[Token(Token = "0x6000A7A")]
	[Address(RVA = "0x502D690", Offset = "0x502D690", VA = "0x502D690")]
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
	[Address(RVA = "0x502D8D0", Offset = "0x502D8D0", VA = "0x502D8D0")]
	public void InvokeCallbacks(EventBase evt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement target, CallbackPhase phase)
	{
	}

	[Token(Token = "0x6000A7E")]
	[Address(RVA = "0x502DBF0", Offset = "0x502DBF0", VA = "0x502DBF0")]
	public void InvokeCallbacksAtTarget(EventBase evt, [NotNull] BaseVisualElementPanel panel, [NotNull] VisualElement target)
	{
	}

	[Token(Token = "0x6000A7F")]
	[Address(RVA = "0x502DC50", Offset = "0x502DC50", VA = "0x502DC50")]
	public bool HasTrickleDownHandlers()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A80")]
	[Address(RVA = "0x502DC90", Offset = "0x502DC90", VA = "0x502DC90")]
	public bool HasBubbleHandlers()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A81")]
	[Address(RVA = "0x502DCB0", Offset = "0x502DCB0", VA = "0x502DCB0")]
	public EventCallbackRegistry()
	{
	}
}
