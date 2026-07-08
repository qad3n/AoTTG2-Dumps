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
		[Address(RVA = "0x4CDE0A0", Offset = "0x4CDE0A0", VA = "0x4CDE0A0")]
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
		[Address(RVA = "0x4CDE0E0", Offset = "0x4CDE0E0", VA = "0x4CDE0E0", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60007C5")]
		[Address(RVA = "0x4CDE280", Offset = "0x4CDE280", VA = "0x4CDE280")]
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
		[Address(RVA = "0x4CDAEB0", Offset = "0x4CDAEB0", VA = "0x4CDAEB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000164")]
	public VisualElement flexedPane
	{
		[Token(Token = "0x60007AF")]
		[Address(RVA = "0x4CDAEC0", Offset = "0x4CDAEC0", VA = "0x4CDAEC0")]
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
		[Address(RVA = "0x4CDAED0", Offset = "0x4CDAED0", VA = "0x4CDAED0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60007B1")]
		[Address(RVA = "0x4CDAEE0", Offset = "0x4CDAEE0", VA = "0x4CDAEE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000166")]
	[CreateProperty]
	public float fixedPaneInitialDimension
	{
		[Token(Token = "0x60007B2")]
		[Address(RVA = "0x4CDB320", Offset = "0x4CDB320", VA = "0x4CDB320")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60007B3")]
		[Address(RVA = "0x4CDB330", Offset = "0x4CDB330", VA = "0x4CDB330")]
		set
		{
		}
	}

	[Token(Token = "0x17000167")]
	[CreateProperty]
	public TwoPaneSplitViewOrientation orientation
	{
		[Token(Token = "0x60007B4")]
		[Address(RVA = "0x4CDB3E0", Offset = "0x4CDB3E0", VA = "0x4CDB3E0")]
		get
		{
			return default(TwoPaneSplitViewOrientation);
		}
		[Token(Token = "0x60007B5")]
		[Address(RVA = "0x4CDB3F0", Offset = "0x4CDB3F0", VA = "0x4CDB3F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000168")]
	internal float fixedPaneDimension
	{
		[Token(Token = "0x60007B6")]
		[Address(RVA = "0x4CDB4A0", Offset = "0x4CDB4A0", VA = "0x4CDB4A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60007B7")]
		[Address(RVA = "0x4CDB4D0", Offset = "0x4CDB4D0", VA = "0x4CDB4D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000169")]
	public override VisualElement contentContainer
	{
		[Token(Token = "0x60007BE")]
		[Address(RVA = "0x4CDDC90", Offset = "0x4CDDC90", VA = "0x4CDDC90", Slot = "97")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007B8")]
	[Address(RVA = "0x4CDB4F0", Offset = "0x4CDB4F0", VA = "0x4CDB4F0")]
	public TwoPaneSplitView()
	{
	}

	[Token(Token = "0x60007B9")]
	[Address(RVA = "0x4CDAFA0", Offset = "0x4CDAFA0", VA = "0x4CDAFA0")]
	internal void Init(int fixedPaneIndex, float fixedPaneInitialDimension, TwoPaneSplitViewOrientation orientation)
	{
	}

	[Token(Token = "0x60007BA")]
	[Address(RVA = "0x4CDCC00", Offset = "0x4CDCC00", VA = "0x4CDCC00")]
	private void OnPostDisplaySetup(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x60007BB")]
	[Address(RVA = "0x4CDB780", Offset = "0x4CDB780", VA = "0x4CDB780")]
	private void PostDisplaySetup()
	{
	}

	[Token(Token = "0x60007BC")]
	[Address(RVA = "0x4CDCDC0", Offset = "0x4CDCDC0", VA = "0x4CDCDC0")]
	private void OnSizeChange(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x60007BD")]
	[Address(RVA = "0x4CDCDD0", Offset = "0x4CDCDD0", VA = "0x4CDCDD0")]
	private void UpdateLayout(bool updateFixedPane, bool updateDragLine)
	{
	}

	[Token(Token = "0x60007BF")]
	[Address(RVA = "0x4CDDCA0", Offset = "0x4CDDCA0", VA = "0x4CDDCA0", Slot = "94")]
	internal override void OnViewDataReady()
	{
	}

	[Token(Token = "0x60007C0")]
	[Address(RVA = "0x4CDDA30", Offset = "0x4CDDA30", VA = "0x4CDDA30")]
	private void SetDragLineOffset(float offset)
	{
	}

	[Token(Token = "0x60007C1")]
	[Address(RVA = "0x4CDDB60", Offset = "0x4CDDB60", VA = "0x4CDDB60")]
	private void SetFixedPaneDimension(float dimension)
	{
	}
}
