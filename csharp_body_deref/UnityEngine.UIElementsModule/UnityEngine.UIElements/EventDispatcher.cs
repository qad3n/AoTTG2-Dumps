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
		[Address(RVA = "0x4D010B0", Offset = "0x4D010B0", VA = "0x4D010B0")]
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
		[Address(RVA = "0x4D01260", Offset = "0x4D01260", VA = "0x4D01260")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001BA")]
	private bool processingEvents
	{
		[Token(Token = "0x60009C1")]
		[Address(RVA = "0x4D01280", Offset = "0x4D01280", VA = "0x4D01280")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60009BE")]
	[Address(RVA = "0x4D010C0", Offset = "0x4D010C0", VA = "0x4D010C0")]
	internal static EventDispatcher CreateDefault()
	{
		return null;
	}

	[Token(Token = "0x60009BF")]
	[Address(RVA = "0x4D01100", Offset = "0x4D01100", VA = "0x4D01100")]
	[Obsolete("Please use EventDispatcher.CreateDefault().")]
	internal EventDispatcher()
	{
	}

	[Token(Token = "0x60009C2")]
	[Address(RVA = "0x4D01290", Offset = "0x4D01290", VA = "0x4D01290")]
	internal void Dispatch(EventBase evt, [NotNull] BaseVisualElementPanel panel, DispatchMode dispatchMode)
	{
	}

	[Token(Token = "0x60009C3")]
	[Address(RVA = "0x4D00F20", Offset = "0x4D00F20", VA = "0x4D00F20")]
	internal void CloseGate()
	{
	}

	[Token(Token = "0x60009C4")]
	[Address(RVA = "0x4D00FB0", Offset = "0x4D00FB0", VA = "0x4D00FB0")]
	internal void OpenGate()
	{
	}

	[Token(Token = "0x60009C5")]
	[Address(RVA = "0x4D016B0", Offset = "0x4D016B0", VA = "0x4D016B0")]
	private void ProcessEventQueue()
	{
	}

	[Token(Token = "0x60009C6")]
	[Address(RVA = "0x4D014E0", Offset = "0x4D014E0", VA = "0x4D014E0")]
	private void ProcessEvent(EventBase evt, [NotNull] BaseVisualElementPanel panel)
	{
	}
}
