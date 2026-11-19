// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Clickable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000051")]
public class Clickable : PointerManipulator
{
	[Token(Token = "0x40000F3")]
	[FieldOffset(Offset = "0x28")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action<EventBase> m_clickedWithEventInfo;

	[Token(Token = "0x40000F4")]
	[FieldOffset(Offset = "0x30")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action m_clicked;

	[Token(Token = "0x40000F5")]
	[FieldOffset(Offset = "0x38")]
	private readonly long m_Delay;

	[Token(Token = "0x40000F6")]
	[FieldOffset(Offset = "0x40")]
	private readonly long m_Interval;

	[Token(Token = "0x40000F9")]
	[FieldOffset(Offset = "0x54")]
	private int m_ActivePointerId;

	[Token(Token = "0x40000FA")]
	[FieldOffset(Offset = "0x58")]
	private bool m_AcceptClicksIfDisabled;

	[Token(Token = "0x40000FB")]
	[FieldOffset(Offset = "0x60")]
	private IVisualElementScheduledItem m_Repeater;

	[Token(Token = "0x40000FC")]
	[FieldOffset(Offset = "0x68")]
	private IVisualElementScheduledItem m_PendingActivePseudoStateReset;

	[Token(Token = "0x17000054")]
	protected bool active
	{
		[Token(Token = "0x60001B3")]
		[Address(RVA = "0x6A8F260", Offset = "0x6A8E260", VA = "0x6A8F260")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001B4")]
		[Address(RVA = "0x6A8F270", Offset = "0x6A8E270", VA = "0x6A8F270")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000055")]
	public Vector2 lastMousePosition
	{
		[Token(Token = "0x60001B5")]
		[Address(RVA = "0x6A8F280", Offset = "0x6A8E280", VA = "0x6A8F280")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x60001B6")]
		[Address(RVA = "0x6A8F290", Offset = "0x6A8E290", VA = "0x6A8F290")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000056")]
	internal bool acceptClicksIfDisabled
	{
		[Token(Token = "0x60001B7")]
		[Address(RVA = "0x6A8F2A0", Offset = "0x6A8E2A0", VA = "0x6A8F2A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001B8")]
		[Address(RVA = "0x6A8F2B0", Offset = "0x6A8E2B0", VA = "0x6A8F2B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000057")]
	private CallbackOptions CallbackOptions
	{
		[Token(Token = "0x60001B9")]
		[Address(RVA = "0x6A8F320", Offset = "0x6A8E320", VA = "0x6A8F320")]
		get
		{
			return default(CallbackOptions);
		}
	}

	[Token(Token = "0x14000004")]
	public event Action<EventBase> clickedWithEventInfo
	{
		[Token(Token = "0x60001AF")]
		[Address(RVA = "0x6A8F000", Offset = "0x6A8E000", VA = "0x6A8F000")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60001B0")]
		[Address(RVA = "0x6A8F0A0", Offset = "0x6A8E0A0", VA = "0x6A8F0A0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000005")]
	public event Action clicked
	{
		[Token(Token = "0x60001B1")]
		[Address(RVA = "0x6A8F140", Offset = "0x6A8E140", VA = "0x6A8F140")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60001B2")]
		[Address(RVA = "0x6A8F1D0", Offset = "0x6A8E1D0", VA = "0x6A8F1D0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x6A8F330", Offset = "0x6A8E330", VA = "0x6A8F330")]
	public Clickable(Action handler, long delay, long interval)
	{
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x6A8F420", Offset = "0x6A8E420", VA = "0x6A8F420")]
	public Clickable(Action<EventBase> handler)
	{
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x6A8F360", Offset = "0x6A8E360", VA = "0x6A8F360")]
	public Clickable(Action handler)
	{
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x6A8F4E0", Offset = "0x6A8E4E0", VA = "0x6A8F4E0")]
	private void OnTimer(TimerState timerState)
	{
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x6A8F5B0", Offset = "0x6A8E5B0", VA = "0x6A8F5B0")]
	private bool IsRepeatable()
	{
		return default(bool);
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x6A8F690", Offset = "0x6A8E690", VA = "0x6A8F690", Slot = "5")]
	protected override void RegisterCallbacksOnTarget()
	{
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x6A8F930", Offset = "0x6A8E930", VA = "0x6A8F930", Slot = "6")]
	protected override void UnregisterCallbacksFromTarget()
	{
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x6A8FC40", Offset = "0x6A8EC40", VA = "0x6A8FC40")]
	protected void OnPointerDown(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x6A8FCD0", Offset = "0x6A8ECD0", VA = "0x6A8FCD0")]
	protected void OnPointerMove(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x6A8FD40", Offset = "0x6A8ED40", VA = "0x6A8FD40")]
	protected void OnPointerUp(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x6A8FDD0", Offset = "0x6A8EDD0", VA = "0x6A8FDD0")]
	private void OnPointerCancel(PointerCancelEvent evt)
	{
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x6A8FE50", Offset = "0x6A8EE50", VA = "0x6A8FE50")]
	private void OnPointerCaptureOut(PointerCaptureOutEvent evt)
	{
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x6A8F5D0", Offset = "0x6A8E5D0", VA = "0x6A8F5D0")]
	private bool ContainsPointer(int pointerId)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x6A8F640", Offset = "0x6A8E640", VA = "0x6A8F640")]
	protected void Invoke(EventBase evt)
	{
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x6A8FEC0", Offset = "0x6A8EEC0", VA = "0x6A8FEC0")]
	internal void SimulateSingleClick(EventBase evt, int delayMs = 100)
	{
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x6A8FC00", Offset = "0x6A8EC00", VA = "0x6A8FC00")]
	private void ResetActivePseudoState()
	{
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x6A900D0", Offset = "0x6A8F0D0", VA = "0x6A900D0", Slot = "8")]
	protected virtual void ProcessDownEvent(EventBase evt, Vector2 localPosition, int pointerId)
	{
	}

	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x6A904C0", Offset = "0x6A8F4C0", VA = "0x6A904C0", Slot = "9")]
	protected virtual void ProcessMoveEvent(EventBase evt, Vector2 localPosition)
	{
	}

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x6A90510", Offset = "0x6A8F510", VA = "0x6A90510", Slot = "10")]
	protected virtual void ProcessUpEvent(EventBase evt, Vector2 localPosition, int pointerId)
	{
	}

	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x6A906D0", Offset = "0x6A8F6D0", VA = "0x6A906D0", Slot = "11")]
	protected virtual void ProcessCancelEvent(EventBase evt, int pointerId)
	{
	}
}
