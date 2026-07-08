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
		[Address(RVA = "0x4BE9B50", Offset = "0x4BE9B50", VA = "0x4BE9B50")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000092")]
		[Address(RVA = "0x4BE9B60", Offset = "0x4BE9B60", VA = "0x4BE9B60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public Vector2 lastMousePosition
	{
		[Token(Token = "0x6000093")]
		[Address(RVA = "0x4BE9B70", Offset = "0x4BE9B70", VA = "0x4BE9B70")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000094")]
		[Address(RVA = "0x4BE9B80", Offset = "0x4BE9B80", VA = "0x4BE9B80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	internal bool acceptClicksIfDisabled
	{
		[Token(Token = "0x6000095")]
		[Address(RVA = "0x4BE9B90", Offset = "0x4BE9B90", VA = "0x4BE9B90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000096")]
		[Address(RVA = "0x4BE9BA0", Offset = "0x4BE9BA0", VA = "0x4BE9BA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	private InvokePolicy invokePolicy
	{
		[Token(Token = "0x6000097")]
		[Address(RVA = "0x4BE9BF0", Offset = "0x4BE9BF0", VA = "0x4BE9BF0")]
		get
		{
			return default(InvokePolicy);
		}
	}

	[Token(Token = "0x14000002")]
	public event Action<EventBase> clickedWithEventInfo
	{
		[Token(Token = "0x600008D")]
		[Address(RVA = "0x4BE98D0", Offset = "0x4BE98D0", VA = "0x4BE98D0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600008E")]
		[Address(RVA = "0x4BE9980", Offset = "0x4BE9980", VA = "0x4BE9980")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000003")]
	public event Action clicked
	{
		[Token(Token = "0x600008F")]
		[Address(RVA = "0x4BE9A30", Offset = "0x4BE9A30", VA = "0x4BE9A30")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000090")]
		[Address(RVA = "0x4BE9AC0", Offset = "0x4BE9AC0", VA = "0x4BE9AC0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x4BE9C00", Offset = "0x4BE9C00", VA = "0x4BE9C00")]
	public Clickable(Action handler, long delay, long interval)
	{
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x4BE9CF0", Offset = "0x4BE9CF0", VA = "0x4BE9CF0")]
	public Clickable(Action<EventBase> handler)
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x4BE9C30", Offset = "0x4BE9C30", VA = "0x4BE9C30")]
	public Clickable(Action handler)
	{
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x4BE9DB0", Offset = "0x4BE9DB0", VA = "0x4BE9DB0")]
	private void OnTimer(TimerState timerState)
	{
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x4BE9E90", Offset = "0x4BE9E90", VA = "0x4BE9E90")]
	private bool IsRepeatable()
	{
		return default(bool);
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x4BE9F70", Offset = "0x4BE9F70", VA = "0x4BE9F70", Slot = "5")]
	protected override void RegisterCallbacksOnTarget()
	{
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x4BEA410", Offset = "0x4BEA410", VA = "0x4BEA410", Slot = "6")]
	protected override void UnregisterCallbacksFromTarget()
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x4BEA880", Offset = "0x4BEA880", VA = "0x4BEA880")]
	protected void OnMouseDown(MouseDownEvent evt)
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x4BEA940", Offset = "0x4BEA940", VA = "0x4BEA940")]
	protected void OnMouseMove(MouseMoveEvent evt)
	{
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x4BEA9B0", Offset = "0x4BEA9B0", VA = "0x4BEA9B0")]
	protected void OnMouseUp(MouseUpEvent evt)
	{
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x4BEAA70", Offset = "0x4BEAA70", VA = "0x4BEAA70")]
	private void OnMouseCaptureOut(MouseCaptureOutEvent evt)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x4BEAAF0", Offset = "0x4BEAAF0", VA = "0x4BEAAF0")]
	private void OnPointerDown(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x4BEAC00", Offset = "0x4BEAC00", VA = "0x4BEAC00")]
	private void OnPointerMove(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x4BEAD10", Offset = "0x4BEAD10", VA = "0x4BEAD10")]
	private void OnPointerUp(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x4BEAE30", Offset = "0x4BEAE30", VA = "0x4BEAE30")]
	private void OnPointerCancel(PointerCancelEvent evt)
	{
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x4BEAF80", Offset = "0x4BEAF80", VA = "0x4BEAF80")]
	private void OnPointerCaptureOut(PointerCaptureOutEvent evt)
	{
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x4BE9EB0", Offset = "0x4BE9EB0", VA = "0x4BE9EB0")]
	private bool ContainsPointer(int pointerId)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x4BEAF20", Offset = "0x4BEAF20", VA = "0x4BEAF20")]
	private static bool IsNotMouseEvent(int pointerId)
	{
		return default(bool);
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x4BE9F20", Offset = "0x4BE9F20", VA = "0x4BE9F20")]
	protected void Invoke(EventBase evt)
	{
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x4BEB060", Offset = "0x4BEB060", VA = "0x4BEB060")]
	internal void SimulateSingleClick(EventBase evt, int delayMs = 100)
	{
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x4BEB270", Offset = "0x4BEB270", VA = "0x4BEB270", Slot = "8")]
	protected virtual void ProcessDownEvent(EventBase evt, Vector2 localPosition, int pointerId)
	{
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x4BEB660", Offset = "0x4BEB660", VA = "0x4BEB660", Slot = "9")]
	protected virtual void ProcessMoveEvent(EventBase evt, Vector2 localPosition)
	{
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x4BEB6D0", Offset = "0x4BEB6D0", VA = "0x4BEB6D0", Slot = "10")]
	protected virtual void ProcessUpEvent(EventBase evt, Vector2 localPosition, int pointerId)
	{
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x4BEB8A0", Offset = "0x4BEB8A0", VA = "0x4BEB8A0", Slot = "11")]
	protected virtual void ProcessCancelEvent(EventBase evt, int pointerId)
	{
	}
}
