// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TwoPaneSplitView
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000122")]
public class TwoPaneSplitView : VisualElement
{
	[Token(Token = "0x2000123")]
	public new class UxmlFactory : UxmlFactory<TwoPaneSplitView, UxmlTraits>
	{
		[Token(Token = "0x60007C3")]
		[Address(RVA = "0x50059D0", Offset = "0x50059D0", VA = "0x50059D0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000124")]
	public new class UxmlTraits : VisualElement.UxmlTraits
	{
		[Token(Token = "0x40004DA")]
		[FieldOffset(Offset = "0x70")]
		private UxmlIntAttributeDescription m_FixedPaneIndex;

		[Token(Token = "0x40004DB")]
		[FieldOffset(Offset = "0x78")]
		private UxmlIntAttributeDescription m_FixedPaneInitialDimension;

		[Token(Token = "0x40004DC")]
		[FieldOffset(Offset = "0x80")]
		private UxmlEnumAttributeDescription<TwoPaneSplitViewOrientation> m_Orientation;

		[Token(Token = "0x60007C4")]
		[Address(RVA = "0x5005A10", Offset = "0x5005A10", VA = "0x5005A10", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60007C5")]
		[Address(RVA = "0x5005BB0", Offset = "0x5005BB0", VA = "0x5005BB0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40004C0")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty fixedPaneIndexProperty;

	[Token(Token = "0x40004C1")]
	[FieldOffset(Offset = "0xA0")]
	internal static readonly DataBindingProperty fixedPaneInitialDimensionProperty;

	[Token(Token = "0x40004C2")]
	[FieldOffset(Offset = "0x140")]
	internal static readonly DataBindingProperty orientationProperty;

	[Token(Token = "0x40004C3")]
	[FieldOffset(Offset = "0x1E0")]
	private static readonly string s_UssClassName;

	[Token(Token = "0x40004C4")]
	[FieldOffset(Offset = "0x1E8")]
	private static readonly string s_ContentContainerClassName;

	[Token(Token = "0x40004C5")]
	[FieldOffset(Offset = "0x1F0")]
	private static readonly string s_HandleDragLineClassName;

	[Token(Token = "0x40004C6")]
	[FieldOffset(Offset = "0x1F8")]
	private static readonly string s_HandleDragLineVerticalClassName;

	[Token(Token = "0x40004C7")]
	[FieldOffset(Offset = "0x200")]
	private static readonly string s_HandleDragLineHorizontalClassName;

	[Token(Token = "0x40004C8")]
	[FieldOffset(Offset = "0x208")]
	private static readonly string s_HandleDragLineAnchorClassName;

	[Token(Token = "0x40004C9")]
	[FieldOffset(Offset = "0x210")]
	private static readonly string s_HandleDragLineAnchorVerticalClassName;

	[Token(Token = "0x40004CA")]
	[FieldOffset(Offset = "0x218")]
	private static readonly string s_HandleDragLineAnchorHorizontalClassName;

	[Token(Token = "0x40004CB")]
	[FieldOffset(Offset = "0x220")]
	private static readonly string s_VerticalClassName;

	[Token(Token = "0x40004CC")]
	[FieldOffset(Offset = "0x228")]
	private static readonly string s_HorizontalClassName;

	[Token(Token = "0x40004CD")]
	[FieldOffset(Offset = "0x3D8")]
	private VisualElement m_LeftPane;

	[Token(Token = "0x40004CE")]
	[FieldOffset(Offset = "0x3E0")]
	private VisualElement m_RightPane;

	[Token(Token = "0x40004CF")]
	[FieldOffset(Offset = "0x3E8")]
	private VisualElement m_FixedPane;

	[Token(Token = "0x40004D0")]
	[FieldOffset(Offset = "0x3F0")]
	private VisualElement m_FlexedPane;

	[Token(Token = "0x40004D1")]
	[FieldOffset(Offset = "0x3F8")]
	[DontCreateProperty]
	[SerializeField]
	private float m_FixedPaneDimension;

	[Token(Token = "0x40004D2")]
	[FieldOffset(Offset = "0x400")]
	private VisualElement m_DragLine;

	[Token(Token = "0x40004D3")]
	[FieldOffset(Offset = "0x408")]
	private VisualElement m_DragLineAnchor;

	[Token(Token = "0x40004D4")]
	[FieldOffset(Offset = "0x410")]
	private bool m_CollapseMode;

	[Token(Token = "0x40004D5")]
	[FieldOffset(Offset = "0x418")]
	private VisualElement m_Content;

	[Token(Token = "0x40004D6")]
	[FieldOffset(Offset = "0x420")]
	private TwoPaneSplitViewOrientation m_Orientation;

	[Token(Token = "0x40004D7")]
	[FieldOffset(Offset = "0x424")]
	private int m_FixedPaneIndex;

	[Token(Token = "0x40004D8")]
	[FieldOffset(Offset = "0x428")]
	private float m_FixedPaneInitialDimension;

	[Token(Token = "0x40004D9")]
	[FieldOffset(Offset = "0x430")]
	internal TwoPaneSplitViewResizer m_Resizer;

	[Token(Token = "0x17000163")]
	public VisualElement fixedPane
	{
		[Token(Token = "0x60007AE")]
		[Address(RVA = "0x50027E0", Offset = "0x50027E0", VA = "0x50027E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000164")]
	public VisualElement flexedPane
	{
		[Token(Token = "0x60007AF")]
		[Address(RVA = "0x50027F0", Offset = "0x50027F0", VA = "0x50027F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000165")]
	[CreateProperty]
	public int fixedPaneIndex
	{
		[Token(Token = "0x60007B0")]
		[Address(RVA = "0x5002800", Offset = "0x5002800", VA = "0x5002800")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60007B1")]
		[Address(RVA = "0x5002810", Offset = "0x5002810", VA = "0x5002810")]
		set
		{
		}
	}

	[Token(Token = "0x17000166")]
	[CreateProperty]
	public float fixedPaneInitialDimension
	{
		[Token(Token = "0x60007B2")]
		[Address(RVA = "0x5002C50", Offset = "0x5002C50", VA = "0x5002C50")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60007B3")]
		[Address(RVA = "0x5002C60", Offset = "0x5002C60", VA = "0x5002C60")]
		set
		{
		}
	}

	[Token(Token = "0x17000167")]
	[CreateProperty]
	public TwoPaneSplitViewOrientation orientation
	{
		[Token(Token = "0x60007B4")]
		[Address(RVA = "0x5002D10", Offset = "0x5002D10", VA = "0x5002D10")]
		get
		{
			return default(TwoPaneSplitViewOrientation);
		}
		[Token(Token = "0x60007B5")]
		[Address(RVA = "0x5002D20", Offset = "0x5002D20", VA = "0x5002D20")]
		set
		{
		}
	}

	[Token(Token = "0x17000168")]
	internal float fixedPaneDimension
	{
		[Token(Token = "0x60007B6")]
		[Address(RVA = "0x5002DD0", Offset = "0x5002DD0", VA = "0x5002DD0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60007B7")]
		[Address(RVA = "0x5002E00", Offset = "0x5002E00", VA = "0x5002E00")]
		set
		{
		}
	}

	[Token(Token = "0x17000169")]
	public override VisualElement contentContainer
	{
		[Token(Token = "0x60007BE")]
		[Address(RVA = "0x50055C0", Offset = "0x50055C0", VA = "0x50055C0", Slot = "97")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007B8")]
	[Address(RVA = "0x5002E20", Offset = "0x5002E20", VA = "0x5002E20")]
	public TwoPaneSplitView()
	{
	}

	[Token(Token = "0x60007B9")]
	[Address(RVA = "0x50028D0", Offset = "0x50028D0", VA = "0x50028D0")]
	internal void Init(int fixedPaneIndex, float fixedPaneInitialDimension, TwoPaneSplitViewOrientation orientation)
	{
	}

	[Token(Token = "0x60007BA")]
	[Address(RVA = "0x5004530", Offset = "0x5004530", VA = "0x5004530")]
	private void OnPostDisplaySetup(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x60007BB")]
	[Address(RVA = "0x50030B0", Offset = "0x50030B0", VA = "0x50030B0")]
	private void PostDisplaySetup()
	{
	}

	[Token(Token = "0x60007BC")]
	[Address(RVA = "0x50046F0", Offset = "0x50046F0", VA = "0x50046F0")]
	private void OnSizeChange(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x60007BD")]
	[Address(RVA = "0x5004700", Offset = "0x5004700", VA = "0x5004700")]
	private void UpdateLayout(bool updateFixedPane, bool updateDragLine)
	{
	}

	[Token(Token = "0x60007BF")]
	[Address(RVA = "0x50055D0", Offset = "0x50055D0", VA = "0x50055D0", Slot = "94")]
	internal override void OnViewDataReady()
	{
	}

	[Token(Token = "0x60007C0")]
	[Address(RVA = "0x5005360", Offset = "0x5005360", VA = "0x5005360")]
	private void SetDragLineOffset(float offset)
	{
	}

	[Token(Token = "0x60007C1")]
	[Address(RVA = "0x5005490", Offset = "0x5005490", VA = "0x5005490")]
	private void SetFixedPaneDimension(float dimension)
	{
	}
}
