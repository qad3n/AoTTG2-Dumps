// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TwoPaneSplitViewResizer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x5005D50", Offset = "0x5005D50", VA = "0x5005D50")]
		get
		{
			return default(TwoPaneSplitViewOrientation);
		}
	}

	[Token(Token = "0x1700016B")]
	private VisualElement fixedPane
	{
		[Token(Token = "0x60007C7")]
		[Address(RVA = "0x5005D70", Offset = "0x5005D70", VA = "0x5005D70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016C")]
	private VisualElement flexedPane
	{
		[Token(Token = "0x60007C8")]
		[Address(RVA = "0x5005D90", Offset = "0x5005D90", VA = "0x5005D90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016D")]
	private float fixedPaneMinDimension
	{
		[Token(Token = "0x60007C9")]
		[Address(RVA = "0x5005DB0", Offset = "0x5005DB0", VA = "0x5005DB0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700016E")]
	private float fixedPaneMargins
	{
		[Token(Token = "0x60007CA")]
		[Address(RVA = "0x5005EE0", Offset = "0x5005EE0", VA = "0x5005EE0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700016F")]
	private float flexedPaneMinDimension
	{
		[Token(Token = "0x60007CB")]
		[Address(RVA = "0x5006140", Offset = "0x5006140", VA = "0x5006140")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000170")]
	private float flexedPaneMargin
	{
		[Token(Token = "0x60007CC")]
		[Address(RVA = "0x5006270", Offset = "0x5006270", VA = "0x5006270")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60007CD")]
	[Address(RVA = "0x5004630", Offset = "0x5004630", VA = "0x5004630")]
	public TwoPaneSplitViewResizer(TwoPaneSplitView splitView, int dir)
	{
	}

	[Token(Token = "0x60007CE")]
	[Address(RVA = "0x50064D0", Offset = "0x50064D0", VA = "0x50064D0", Slot = "5")]
	protected override void RegisterCallbacksOnTarget()
	{
	}

	[Token(Token = "0x60007CF")]
	[Address(RVA = "0x5006660", Offset = "0x5006660", VA = "0x5006660", Slot = "6")]
	protected override void UnregisterCallbacksFromTarget()
	{
	}

	[Token(Token = "0x60007D0")]
	[Address(RVA = "0x50067F0", Offset = "0x50067F0", VA = "0x50067F0")]
	public void ApplyDelta(float delta)
	{
	}

	[Token(Token = "0x60007D1")]
	[Address(RVA = "0x5006F80", Offset = "0x5006F80", VA = "0x5006F80")]
	protected void OnPointerDown(PointerDownEvent e)
	{
	}

	[Token(Token = "0x60007D2")]
	[Address(RVA = "0x5007040", Offset = "0x5007040", VA = "0x5007040")]
	protected void OnPointerMove(PointerMoveEvent e)
	{
	}

	[Token(Token = "0x60007D3")]
	[Address(RVA = "0x5007100", Offset = "0x5007100", VA = "0x5007100")]
	protected void OnPointerUp(PointerUpEvent e)
	{
	}
}
