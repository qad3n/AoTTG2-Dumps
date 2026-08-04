// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.EventDispatcher
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using JetBrains.Annotations;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000166")]
public sealed class EventDispatcher
{
	[Token(Token = "0x2000167")]
	private struct EventRecord
	{
		[Token(Token = "0x4000627")]
		[FieldOffset(Offset = "0x0")]
		public EventBase m_Event;

		[Token(Token = "0x4000628")]
		[FieldOffset(Offset = "0x8")]
		public BaseVisualElementPanel m_Panel;
	}

	[Token(Token = "0x2000168")]
	private struct DispatchContext
	{
		[Token(Token = "0x4000629")]
		[FieldOffset(Offset = "0x0")]
		public uint m_GateCount;

		[Token(Token = "0x400062A")]
		[FieldOffset(Offset = "0x8")]
		public Queue<EventRecord> m_Queue;
	}

	[Token(Token = "0x400061F")]
	[FieldOffset(Offset = "0x10")]
	internal ClickDetector m_ClickDetector;

	[Token(Token = "0x4000620")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ObjectPool<Queue<EventRecord>> k_EventQueuePool;

	[Token(Token = "0x4000621")]
	[FieldOffset(Offset = "0x18")]
	private Queue<EventRecord> m_Queue;

	[Token(Token = "0x4000623")]
	[FieldOffset(Offset = "0x28")]
	private uint m_GateCount;

	[Token(Token = "0x4000624")]
	[FieldOffset(Offset = "0x30")]
	private Stack<DispatchContext> m_DispatchContexts;

	[Token(Token = "0x4000625")]
	[FieldOffset(Offset = "0x38")]
	private bool m_Immediate;

	[Token(Token = "0x170001B8")]
	internal PointerDispatchState pointerState
	{
		[Token(Token = "0x60009BD")]
		[Address(RVA = "0x50289E0", Offset = "0x50289E0", VA = "0x50289E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B9")]
	private bool dispatchImmediately
	{
		[Token(Token = "0x60009C0")]
		[Address(RVA = "0x5028B90", Offset = "0x5028B90", VA = "0x5028B90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001BA")]
	private bool processingEvents
	{
		[Token(Token = "0x60009C1")]
		[Address(RVA = "0x5028BB0", Offset = "0x5028BB0", VA = "0x5028BB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60009BE")]
	[Address(RVA = "0x50289F0", Offset = "0x50289F0", VA = "0x50289F0")]
	internal static EventDispatcher CreateDefault()
	{
		return null;
	}

	[Token(Token = "0x60009BF")]
	[Address(RVA = "0x5028A30", Offset = "0x5028A30", VA = "0x5028A30")]
	[Obsolete("Please use EventDispatcher.CreateDefault().")]
	internal EventDispatcher()
	{
	}

	[Token(Token = "0x60009C2")]
	[Address(RVA = "0x5028BC0", Offset = "0x5028BC0", VA = "0x5028BC0")]
	internal void Dispatch(EventBase evt, [NotNull] BaseVisualElementPanel panel, DispatchMode dispatchMode)
	{
	}

	[Token(Token = "0x60009C3")]
	[Address(RVA = "0x5028850", Offset = "0x5028850", VA = "0x5028850")]
	internal void CloseGate()
	{
	}

	[Token(Token = "0x60009C4")]
	[Address(RVA = "0x50288E0", Offset = "0x50288E0", VA = "0x50288E0")]
	internal void OpenGate()
	{
	}

	[Token(Token = "0x60009C5")]
	[Address(RVA = "0x5028FE0", Offset = "0x5028FE0", VA = "0x5028FE0")]
	private void ProcessEventQueue()
	{
	}

	[Token(Token = "0x60009C6")]
	[Address(RVA = "0x5028E10", Offset = "0x5028E10", VA = "0x5028E10")]
	private void ProcessEvent(EventBase evt, [NotNull] BaseVisualElementPanel panel)
	{
	}
}
