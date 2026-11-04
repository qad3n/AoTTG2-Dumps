// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Clickable
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200004F")]
public class Clickable : PointerManipulator
{
	[Token(Token = "0x40000ED")]
	[FieldOffset(Offset = "0x28")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<EventBase> m_clickedWithEventInfo;

	[Token(Token = "0x40000EE")]
	[FieldOffset(Offset = "0x30")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action m_clicked;

	[Token(Token = "0x40000EF")]
	[FieldOffset(Offset = "0x38")]
	private readonly long m_Delay;

	[Token(Token = "0x40000F0")]
	[FieldOffset(Offset = "0x40")]
	private readonly long m_Interval;

	[Token(Token = "0x40000F3")]
	[FieldOffset(Offset = "0x54")]
	private int m_ActivePointerId;

	[Token(Token = "0x40000F4")]
	[FieldOffset(Offset = "0x58")]
	private bool m_AcceptClicksIfDisabled;

	[Token(Token = "0x40000F5")]
	[FieldOffset(Offset = "0x60")]
	private IVisualElementScheduledItem m_Repeater;

	[Token(Token = "0x40000F6")]
	[FieldOffset(Offset = "0x68")]
	private IVisualElementScheduledItem m_PendingActivePseudoStateReset;

	[Token(Token = "0x17000053")]
	protected bool active
	{
		[Token(Token = "0x60001A7")]
		[Address(RVA = "0x58A530", Offset = "0x588B30", VA = "0x18058A530")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001A8")]
		[Address(RVA = "0x58A8C0", Offset = "0x588EC0", VA = "0x18058A8C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000054")]
	public Vector2 lastMousePosition
	{
		[Token(Token = "0x60001A9")]
		[Address(RVA = "0x308AC90", Offset = "0x3089290", VA = "0x18308AC90")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x60001AA")]
		[Address(RVA = "0x308AE70", Offset = "0x3089470", VA = "0x18308AE70")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000055")]
	internal bool acceptClicksIfDisabled
	{
		[Token(Token = "0x60001AB")]
		[Address(RVA = "0x1937790", Offset = "0x1935D90", VA = "0x181937790")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001AC")]
		[Address(RVA = "0x308AE00", Offset = "0x3089400", VA = "0x18308AE00")]
		set
		{
		}
	}

	[Token(Token = "0x17000056")]
	private CallbackOptions CallbackOptions
	{
		[Token(Token = "0x60001AD")]
		[Address(RVA = "0x308AC80", Offset = "0x3089280", VA = "0x18308AC80")]
		get
		{
			return default(CallbackOptions);
		}
	}

	[Token(Token = "0x14000004")]
	public event Action<EventBase> clickedWithEventInfo
	{
		[Token(Token = "0x60001A3")]
		[Address(RVA = "0x308AB30", Offset = "0x3089130", VA = "0x18308AB30")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60001A4")]
		[Address(RVA = "0x308ACB0", Offset = "0x30892B0", VA = "0x18308ACB0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000005")]
	public event Action clicked
	{
		[Token(Token = "0x60001A5")]
		[Address(RVA = "0x308ABE0", Offset = "0x30891E0", VA = "0x18308ABE0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60001A6")]
		[Address(RVA = "0x308AD60", Offset = "0x3089360", VA = "0x18308AD60")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x308A830", Offset = "0x3088E30", VA = "0x18308A830")]
	public Clickable(Action handler, long delay, long interval)
	{
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x308A930", Offset = "0x3088F30", VA = "0x18308A930")]
	public Clickable(Action<EventBase> handler)
	{
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x308AA30", Offset = "0x3089030", VA = "0x18308AA30")]
	public Clickable(Action handler)
	{
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x3089A40", Offset = "0x3088040", VA = "0x183089A40")]
	private void OnTimer(TimerState timerState)
	{
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x3089750", Offset = "0x3087D50", VA = "0x183089750")]
	private bool IsRepeatable()
	{
		return default(bool);
	}

	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x308A0E0", Offset = "0x30886E0", VA = "0x18308A0E0", Slot = "5")]
	protected override void RegisterCallbacksOnTarget()
	{
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x308A580", Offset = "0x3088B80", VA = "0x18308A580", Slot = "6")]
	protected override void UnregisterCallbacksFromTarget()
	{
	}

	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x3089860", Offset = "0x3087E60", VA = "0x183089860")]
	protected void OnPointerDown(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x60001B6")]
	[Address(RVA = "0x3089910", Offset = "0x3087F10", VA = "0x183089910")]
	protected void OnPointerMove(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x3089990", Offset = "0x3087F90", VA = "0x183089990")]
	protected void OnPointerUp(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x3089770", Offset = "0x3087D70", VA = "0x183089770")]
	private void OnPointerCancel(PointerCancelEvent evt)
	{
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x30897F0", Offset = "0x3087DF0", VA = "0x1830897F0")]
	private void OnPointerCaptureOut(PointerCaptureOutEvent evt)
	{
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x3089680", Offset = "0x3087C80", VA = "0x183089680")]
	private bool ContainsPointer(int pointerId)
	{
		return default(bool);
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x3089700", Offset = "0x3087D00", VA = "0x183089700")]
	protected void Invoke(EventBase evt)
	{
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x308A3C0", Offset = "0x30889C0", VA = "0x18308A3C0")]
	internal void SimulateSingleClick(EventBase evt, int delayMs = 100)
	{
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x308A370", Offset = "0x3088970", VA = "0x18308A370")]
	private void ResetActivePseudoState()
	{
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x3089C30", Offset = "0x3088230", VA = "0x183089C30", Slot = "8")]
	protected virtual void ProcessDownEvent(EventBase evt, Vector2 localPosition, int pointerId)
	{
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x3089F00", Offset = "0x3088500", VA = "0x183089F00", Slot = "9")]
	protected virtual void ProcessMoveEvent(EventBase evt, Vector2 localPosition)
	{
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x3089F70", Offset = "0x3088570", VA = "0x183089F70", Slot = "10")]
	protected virtual void ProcessUpEvent(EventBase evt, Vector2 localPosition, int pointerId)
	{
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x3089B20", Offset = "0x3088120", VA = "0x183089B20", Slot = "11")]
	protected virtual void ProcessCancelEvent(EventBase evt, int pointerId)
	{
	}
}
