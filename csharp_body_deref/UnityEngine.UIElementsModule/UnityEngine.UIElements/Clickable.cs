// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Clickable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000021")]
public class Clickable : PointerManipulator
{
	[Token(Token = "0x4000050")]
	[FieldOffset(Offset = "0x40")]
	private readonly long m_Delay;

	[Token(Token = "0x4000051")]
	[FieldOffset(Offset = "0x48")]
	private readonly long m_Interval;

	[Token(Token = "0x4000054")]
	[FieldOffset(Offset = "0x5C")]
	private int m_ActivePointerId;

	[Token(Token = "0x4000055")]
	[FieldOffset(Offset = "0x60")]
	private bool m_AcceptClicksIfDisabled;

	[Token(Token = "0x4000056")]
	[FieldOffset(Offset = "0x68")]
	private IVisualElementScheduledItem m_Repeater;

	[Token(Token = "0x1700001B")]
	protected bool active
	{
		[Token(Token = "0x6000091")]
		[Address(RVA = "0x4F11480", Offset = "0x4F11480", VA = "0x4F11480")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000092")]
		[Address(RVA = "0x4F11490", Offset = "0x4F11490", VA = "0x4F11490")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public Vector2 lastMousePosition
	{
		[Token(Token = "0x6000093")]
		[Address(RVA = "0x4F114A0", Offset = "0x4F114A0", VA = "0x4F114A0")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000094")]
		[Address(RVA = "0x4F114B0", Offset = "0x4F114B0", VA = "0x4F114B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	internal bool acceptClicksIfDisabled
	{
		[Token(Token = "0x6000095")]
		[Address(RVA = "0x4F114C0", Offset = "0x4F114C0", VA = "0x4F114C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000096")]
		[Address(RVA = "0x4F114D0", Offset = "0x4F114D0", VA = "0x4F114D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	private InvokePolicy invokePolicy
	{
		[Token(Token = "0x6000097")]
		[Address(RVA = "0x4F11520", Offset = "0x4F11520", VA = "0x4F11520")]
		get
		{
			return default(InvokePolicy);
		}
	}

	[Token(Token = "0x14000002")]
	public event Action<EventBase> clickedWithEventInfo
	{
		[Token(Token = "0x600008D")]
		[Address(RVA = "0x4F11200", Offset = "0x4F11200", VA = "0x4F11200")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600008E")]
		[Address(RVA = "0x4F112B0", Offset = "0x4F112B0", VA = "0x4F112B0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000003")]
	public event Action clicked
	{
		[Token(Token = "0x600008F")]
		[Address(RVA = "0x4F11360", Offset = "0x4F11360", VA = "0x4F11360")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000090")]
		[Address(RVA = "0x4F113F0", Offset = "0x4F113F0", VA = "0x4F113F0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x4F11530", Offset = "0x4F11530", VA = "0x4F11530")]
	public Clickable(Action handler, long delay, long interval)
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x4F11620", Offset = "0x4F11620", VA = "0x4F11620")]
	public Clickable(Action<EventBase> handler)
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x4F11560", Offset = "0x4F11560", VA = "0x4F11560")]
	public Clickable(Action handler)
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x4F116E0", Offset = "0x4F116E0", VA = "0x4F116E0")]
	private void OnTimer(TimerState timerState)
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x4F117C0", Offset = "0x4F117C0", VA = "0x4F117C0")]
	private bool IsRepeatable()
	{
		return default(bool);
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x4F118A0", Offset = "0x4F118A0", VA = "0x4F118A0", Slot = "5")]
	protected override void RegisterCallbacksOnTarget()
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x4F11D40", Offset = "0x4F11D40", VA = "0x4F11D40", Slot = "6")]
	protected override void UnregisterCallbacksFromTarget()
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x4F121B0", Offset = "0x4F121B0", VA = "0x4F121B0")]
	protected void OnMouseDown(MouseDownEvent evt)
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x4F12270", Offset = "0x4F12270", VA = "0x4F12270")]
	protected void OnMouseMove(MouseMoveEvent evt)
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x4F122E0", Offset = "0x4F122E0", VA = "0x4F122E0")]
	protected void OnMouseUp(MouseUpEvent evt)
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x4F123A0", Offset = "0x4F123A0", VA = "0x4F123A0")]
	private void OnMouseCaptureOut(MouseCaptureOutEvent evt)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x4F12420", Offset = "0x4F12420", VA = "0x4F12420")]
	private void OnPointerDown(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x4F12530", Offset = "0x4F12530", VA = "0x4F12530")]
	private void OnPointerMove(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x4F12640", Offset = "0x4F12640", VA = "0x4F12640")]
	private void OnPointerUp(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x4F12760", Offset = "0x4F12760", VA = "0x4F12760")]
	private void OnPointerCancel(PointerCancelEvent evt)
	{
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x4F128B0", Offset = "0x4F128B0", VA = "0x4F128B0")]
	private void OnPointerCaptureOut(PointerCaptureOutEvent evt)
	{
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x4F117E0", Offset = "0x4F117E0", VA = "0x4F117E0")]
	private bool ContainsPointer(int pointerId)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x4F12850", Offset = "0x4F12850", VA = "0x4F12850")]
	private static bool IsNotMouseEvent(int pointerId)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x4F11850", Offset = "0x4F11850", VA = "0x4F11850")]
	protected void Invoke(EventBase evt)
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x4F12990", Offset = "0x4F12990", VA = "0x4F12990")]
	internal void SimulateSingleClick(EventBase evt, int delayMs = 100)
	{
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x4F12BA0", Offset = "0x4F12BA0", VA = "0x4F12BA0", Slot = "8")]
	protected virtual void ProcessDownEvent(EventBase evt, Vector2 localPosition, int pointerId)
	{
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x4F12F90", Offset = "0x4F12F90", VA = "0x4F12F90", Slot = "9")]
	protected virtual void ProcessMoveEvent(EventBase evt, Vector2 localPosition)
	{
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x4F13000", Offset = "0x4F13000", VA = "0x4F13000", Slot = "10")]
	protected virtual void ProcessUpEvent(EventBase evt, Vector2 localPosition, int pointerId)
	{
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x4F131D0", Offset = "0x4F131D0", VA = "0x4F131D0", Slot = "11")]
	protected virtual void ProcessCancelEvent(EventBase evt, int pointerId)
	{
	}
}
