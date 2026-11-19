// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TwoPaneSplitViewResizer
// Update status: unchanged since the previous dump
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
	[FieldOffset(Offset = "0x24")]
	private Vector3 m_Start;

	[Token(Token = "0x40006C6")]
	[FieldOffset(Offset = "0x30")]
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
		[Address(RVA = "0x6C49A70", Offset = "0x6C48A70", VA = "0x6C49A70")]
		get
		{
			return default(TwoPaneSplitViewOrientation);
		}
	}

	[Token(Token = "0x170001FC")]
	private VisualElement fixedPane
	{
		[Token(Token = "0x6000A9E")]
		[Address(RVA = "0x6C49A90", Offset = "0x6C48A90", VA = "0x6C49A90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001FD")]
	private VisualElement flexedPane
	{
		[Token(Token = "0x6000A9F")]
		[Address(RVA = "0x6C49AB0", Offset = "0x6C48AB0", VA = "0x6C49AB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001FE")]
	private float fixedPaneMinDimension
	{
		[Token(Token = "0x6000AA0")]
		[Address(RVA = "0x6C49AD0", Offset = "0x6C48AD0", VA = "0x6C49AD0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170001FF")]
	private float fixedPaneMargins
	{
		[Token(Token = "0x6000AA1")]
		[Address(RVA = "0x6C49C30", Offset = "0x6C48C30", VA = "0x6C49C30")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000200")]
	private float flexedPaneMinDimension
	{
		[Token(Token = "0x6000AA2")]
		[Address(RVA = "0x6C49EC0", Offset = "0x6C48EC0", VA = "0x6C49EC0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000201")]
	private float flexedPaneMargin
	{
		[Token(Token = "0x6000AA3")]
		[Address(RVA = "0x6C4A020", Offset = "0x6C49020", VA = "0x6C4A020")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000AA4")]
	[Address(RVA = "0x6C48180", Offset = "0x6C47180", VA = "0x6C48180")]
	public TwoPaneSplitViewResizer(TwoPaneSplitView splitView, int dir)
	{
	}

	[Token(Token = "0x6000AA5")]
	[Address(RVA = "0x6C4A2B0", Offset = "0x6C492B0", VA = "0x6C4A2B0", Slot = "5")]
	protected override void RegisterCallbacksOnTarget()
	{
	}

	[Token(Token = "0x6000AA6")]
	[Address(RVA = "0x6C4A440", Offset = "0x6C49440", VA = "0x6C4A440", Slot = "6")]
	protected override void UnregisterCallbacksFromTarget()
	{
	}

	[Token(Token = "0x6000AA7")]
	[Address(RVA = "0x6C4A5D0", Offset = "0x6C495D0", VA = "0x6C4A5D0")]
	public void ApplyDelta(float delta)
	{
	}

	[Token(Token = "0x6000AA8")]
	[Address(RVA = "0x6C4B520", Offset = "0x6C4A520", VA = "0x6C4B520")]
	protected void OnPointerDown(PointerDownEvent e)
	{
	}

	[Token(Token = "0x6000AA9")]
	[Address(RVA = "0x6C4B5E0", Offset = "0x6C4A5E0", VA = "0x6C4B5E0")]
	protected void OnPointerMove(PointerMoveEvent e)
	{
	}

	[Token(Token = "0x6000AAA")]
	[Address(RVA = "0x6C4BB40", Offset = "0x6C4AB40", VA = "0x6C4BB40")]
	protected void OnPointerUp(PointerUpEvent e)
	{
	}

	[Token(Token = "0x6000AAB")]
	[Address(RVA = "0x6C4BAC0", Offset = "0x6C4AAC0", VA = "0x6C4BAC0")]
	protected void InterruptPointerMove(PointerMoveEvent e)
	{
	}
}
