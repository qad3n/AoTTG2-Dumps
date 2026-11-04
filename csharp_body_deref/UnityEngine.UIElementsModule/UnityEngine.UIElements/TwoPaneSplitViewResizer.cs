// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TwoPaneSplitViewResizer
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000172")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal class TwoPaneSplitViewResizer : PointerManipulator
{
	[Token(Token = "0x40006C5")]
	[FieldOffset(Offset = "0x28")]
	private Vector3 m_Start;

	[Token(Token = "0x40006C6")]
	[FieldOffset(Offset = "0x34")]
	protected bool m_Active;

	[Token(Token = "0x40006C7")]
	[FieldOffset(Offset = "0x38")]
	private TwoPaneSplitView m_SplitView;

	[Token(Token = "0x40006C8")]
	[FieldOffset(Offset = "0x40")]
	private int m_Direction;

	[Token(Token = "0x40006C9")]
	[FieldOffset(Offset = "0x44")]
	private float m_Delta;

	[Token(Token = "0x170001FB")]
	private TwoPaneSplitViewOrientation orientation
	{
		[Token(Token = "0x6000A9D")]
		[Address(RVA = "0x324F890", Offset = "0x324DE90", VA = "0x18324F890")]
		get
		{
			return default(TwoPaneSplitViewOrientation);
		}
	}

	[Token(Token = "0x170001FC")]
	private VisualElement fixedPane
	{
		[Token(Token = "0x6000A9E")]
		[Address(RVA = "0x324F6A0", Offset = "0x324DCA0", VA = "0x18324F6A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001FD")]
	private VisualElement flexedPane
	{
		[Token(Token = "0x6000A9F")]
		[Address(RVA = "0x324F870", Offset = "0x324DE70", VA = "0x18324F870")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001FE")]
	private float fixedPaneMinDimension
	{
		[Token(Token = "0x6000AA0")]
		[Address(RVA = "0x324F600", Offset = "0x324DC00", VA = "0x18324F600")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170001FF")]
	private float fixedPaneMargins
	{
		[Token(Token = "0x6000AA1")]
		[Address(RVA = "0x324F4F0", Offset = "0x324DAF0", VA = "0x18324F4F0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000200")]
	private float flexedPaneMinDimension
	{
		[Token(Token = "0x6000AA2")]
		[Address(RVA = "0x324F7D0", Offset = "0x324DDD0", VA = "0x18324F7D0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000201")]
	private float flexedPaneMargin
	{
		[Token(Token = "0x6000AA3")]
		[Address(RVA = "0x324F6C0", Offset = "0x324DCC0", VA = "0x18324F6C0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000AA4")]
	[Address(RVA = "0x324F3F0", Offset = "0x324D9F0", VA = "0x18324F3F0")]
	public TwoPaneSplitViewResizer(TwoPaneSplitView splitView, int dir)
	{
	}

	[Token(Token = "0x6000AA5")]
	[Address(RVA = "0x324F0D0", Offset = "0x324D6D0", VA = "0x18324F0D0", Slot = "5")]
	protected override void RegisterCallbacksOnTarget()
	{
	}

	[Token(Token = "0x6000AA6")]
	[Address(RVA = "0x324F260", Offset = "0x324D860", VA = "0x18324F260", Slot = "6")]
	protected override void UnregisterCallbacksFromTarget()
	{
	}

	[Token(Token = "0x6000AA7")]
	[Address(RVA = "0x324E1F0", Offset = "0x324C7F0", VA = "0x18324E1F0")]
	public void ApplyDelta(float delta)
	{
	}

	[Token(Token = "0x6000AA8")]
	[Address(RVA = "0x324EB80", Offset = "0x324D180", VA = "0x18324EB80")]
	protected void OnPointerDown(PointerDownEvent e)
	{
	}

	[Token(Token = "0x6000AA9")]
	[Address(RVA = "0x324EC40", Offset = "0x324D240", VA = "0x18324EC40")]
	protected void OnPointerMove(PointerMoveEvent e)
	{
	}

	[Token(Token = "0x6000AAA")]
	[Address(RVA = "0x324F020", Offset = "0x324D620", VA = "0x18324F020")]
	protected void OnPointerUp(PointerUpEvent e)
	{
	}

	[Token(Token = "0x6000AAB")]
	[Address(RVA = "0x324EB00", Offset = "0x324D100", VA = "0x18324EB00")]
	protected void InterruptPointerMove(PointerMoveEvent e)
	{
	}
}
