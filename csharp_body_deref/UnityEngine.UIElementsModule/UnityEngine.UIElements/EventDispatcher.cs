// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.EventDispatcher
// Update status: CHANGED in this game update
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

[Token(Token = "0x20001AB")]
public sealed class EventDispatcher
{
	[Token(Token = "0x20001AC")]
	private struct EventRecord
	{
		[Token(Token = "0x400075E")]
		[FieldOffset(Offset = "0x0")]
		public EventBase m_Event;

		[Token(Token = "0x400075F")]
		[FieldOffset(Offset = "0x8")]
		public BaseVisualElementPanel m_Panel;
	}

	[Token(Token = "0x20001AD")]
	private struct DispatchContext
	{
		[Token(Token = "0x4000760")]
		[FieldOffset(Offset = "0x0")]
		public uint m_GateCount;

		[Token(Token = "0x4000761")]
		[FieldOffset(Offset = "0x8")]
		public Queue<EventRecord> m_Queue;
	}

	[Token(Token = "0x4000750")]
	[FieldOffset(Offset = "0x10")]
	internal ClickDetector m_ClickDetector;

	[Token(Token = "0x4000751")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ObjectPool<Queue<EventRecord>> k_EventQueuePool;

	[Token(Token = "0x4000752")]
	[FieldOffset(Offset = "0x18")]
	private Queue<EventRecord> m_Queue;

	[Token(Token = "0x4000754")]
	[FieldOffset(Offset = "0x28")]
	private uint m_GateCount;

	[Token(Token = "0x4000755")]
	[FieldOffset(Offset = "0x2C")]
	private uint m_GateDepth;

	[Token(Token = "0x4000756")]
	internal const int k_MaxGateDepth = 500;

	[Token(Token = "0x4000757")]
	internal const int k_NumberOfEventsWithStackInfo = 10;

	[Token(Token = "0x4000758")]
	internal const int k_NumberOfEventsWithEventInfo = 100;

	[Token(Token = "0x4000759")]
	[FieldOffset(Offset = "0x30")]
	private int m_DispatchStackFrame;

	[Token(Token = "0x400075A")]
	[FieldOffset(Offset = "0x38")]
	private EventBase m_CurrentEvent;

	[Token(Token = "0x400075B")]
	[FieldOffset(Offset = "0x40")]
	private Stack<DispatchContext> m_DispatchContexts;

	[Token(Token = "0x400075C")]
	[FieldOffset(Offset = "0x48")]
	private bool m_Immediate;

	[Token(Token = "0x1700023E")]
	internal PointerDispatchState pointerState
	{
		[Token(Token = "0x6000BBF")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700023F")]
	private bool dispatchImmediately
	{
		[Token(Token = "0x6000BC2")]
		[Address(RVA = "0x32606B0", Offset = "0x325ECB0", VA = "0x1832606B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000240")]
	private bool processingEvents
	{
		[Token(Token = "0x6000BC3")]
		[Address(RVA = "0x58AA20", Offset = "0x589020", VA = "0x18058AA20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000BC0")]
	[Address(RVA = "0x325F630", Offset = "0x325DC30", VA = "0x18325F630")]
	internal static EventDispatcher CreateDefault()
	{
		return null;
	}

	[Token(Token = "0x6000BC1")]
	[Address(RVA = "0x3260550", Offset = "0x325EB50", VA = "0x183260550")]
	[Obsolete("Please use EventDispatcher.CreateDefault().")]
	internal EventDispatcher()
	{
	}

	[Token(Token = "0x6000BC4")]
	[Address(RVA = "0x325F7B0", Offset = "0x325DDB0", VA = "0x18325F7B0")]
	internal void Dispatch(EventBase evt, [NotNull] BaseVisualElementPanel panel, DispatchMode dispatchMode)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x325F9A0", Offset = "0x325DFA0", VA = "0x18325F9A0")]
	private bool HandleRecursiveState(EventBase evt)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BC6")]
	[Address(RVA = "0x325F610", Offset = "0x325DC10", VA = "0x18325F610")]
	internal void CloseGate()
	{
	}

	[Token(Token = "0x6000BC7")]
	[Address(RVA = "0x325FD80", Offset = "0x325E380", VA = "0x18325FD80")]
	internal void OpenGate()
	{
	}

	[Token(Token = "0x6000BC8")]
	[Address(RVA = "0x325FE60", Offset = "0x325E460", VA = "0x18325FE60")]
	private void ProcessEventQueue()
	{
	}

	[Token(Token = "0x6000BC9")]
	[Address(RVA = "0x3260100", Offset = "0x325E700", VA = "0x183260100")]
	private void ProcessEvent(EventBase evt, [NotNull] BaseVisualElementPanel panel)
	{
	}
}
