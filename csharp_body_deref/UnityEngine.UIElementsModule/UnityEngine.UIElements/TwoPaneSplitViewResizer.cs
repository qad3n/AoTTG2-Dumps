using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000126")]
internal class TwoPaneSplitViewResizer : PointerManipulator
{
	[Token(Token = "0x40004E0")]
	[FieldOffset(Offset = "0x30")]
	private Vector3 m_Start;

	[Token(Token = "0x40004E1")]
	[FieldOffset(Offset = "0x3C")]
	protected bool m_Active;

	[Token(Token = "0x40004E2")]
	[FieldOffset(Offset = "0x40")]
	private TwoPaneSplitView m_SplitView;

	[Token(Token = "0x40004E3")]
	[FieldOffset(Offset = "0x48")]
	private int m_Direction;

	[Token(Token = "0x40004E4")]
	[FieldOffset(Offset = "0x4C")]
	private float m_Delta;

	[Token(Token = "0x1700016A")]
	private TwoPaneSplitViewOrientation orientation
	{
		[Token(Token = "0x60007C6")]
		[Address(RVA = "0x4CDE420", Offset = "0x4CDE420", VA = "0x4CDE420")]
		get
		{
			return default(TwoPaneSplitViewOrientation);
		}
	}

	[Token(Token = "0x1700016B")]
	private VisualElement fixedPane
	{
		[Token(Token = "0x60007C7")]
		[Address(RVA = "0x4CDE440", Offset = "0x4CDE440", VA = "0x4CDE440")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016C")]
	private VisualElement flexedPane
	{
		[Token(Token = "0x60007C8")]
		[Address(RVA = "0x4CDE460", Offset = "0x4CDE460", VA = "0x4CDE460")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016D")]
	private float fixedPaneMinDimension
	{
		[Token(Token = "0x60007C9")]
		[Address(RVA = "0x4CDE480", Offset = "0x4CDE480", VA = "0x4CDE480")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700016E")]
	private float fixedPaneMargins
	{
		[Token(Token = "0x60007CA")]
		[Address(RVA = "0x4CDE5B0", Offset = "0x4CDE5B0", VA = "0x4CDE5B0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700016F")]
	private float flexedPaneMinDimension
	{
		[Token(Token = "0x60007CB")]
		[Address(RVA = "0x4CDE810", Offset = "0x4CDE810", VA = "0x4CDE810")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000170")]
	private float flexedPaneMargin
	{
		[Token(Token = "0x60007CC")]
		[Address(RVA = "0x4CDE940", Offset = "0x4CDE940", VA = "0x4CDE940")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60007CD")]
	[Address(RVA = "0x4CDCD00", Offset = "0x4CDCD00", VA = "0x4CDCD00")]
	public TwoPaneSplitViewResizer(TwoPaneSplitView splitView, int dir)
	{
	}

	[Token(Token = "0x60007CE")]
	[Address(RVA = "0x4CDEBA0", Offset = "0x4CDEBA0", VA = "0x4CDEBA0", Slot = "5")]
	protected override void RegisterCallbacksOnTarget()
	{
	}

	[Token(Token = "0x60007CF")]
	[Address(RVA = "0x4CDED30", Offset = "0x4CDED30", VA = "0x4CDED30", Slot = "6")]
	protected override void UnregisterCallbacksFromTarget()
	{
	}

	[Token(Token = "0x60007D0")]
	[Address(RVA = "0x4CDEEC0", Offset = "0x4CDEEC0", VA = "0x4CDEEC0")]
	public void ApplyDelta(float delta)
	{
	}

	[Token(Token = "0x60007D1")]
	[Address(RVA = "0x4CDF650", Offset = "0x4CDF650", VA = "0x4CDF650")]
	protected void OnPointerDown(PointerDownEvent e)
	{
	}

	[Token(Token = "0x60007D2")]
	[Address(RVA = "0x4CDF710", Offset = "0x4CDF710", VA = "0x4CDF710")]
	protected void OnPointerMove(PointerMoveEvent e)
	{
	}

	[Token(Token = "0x60007D3")]
	[Address(RVA = "0x4CDF7D0", Offset = "0x4CDF7D0", VA = "0x4CDF7D0")]
	protected void OnPointerUp(PointerUpEvent e)
	{
	}
}
