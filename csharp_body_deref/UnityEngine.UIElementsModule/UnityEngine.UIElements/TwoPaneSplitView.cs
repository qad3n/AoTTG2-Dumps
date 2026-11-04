// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TwoPaneSplitView
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Properties;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x200016E")]
public class TwoPaneSplitView : VisualElement
{
	[Token(Token = "0x200016F")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<TwoPaneSplitView, UxmlTraits>
	{
		[Token(Token = "0x6000A9A")]
		[Address(RVA = "0x3254CC0", Offset = "0x32532C0", VA = "0x183254CC0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000170")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : VisualElement.UxmlTraits
	{
		[Token(Token = "0x40006BF")]
		[FieldOffset(Offset = "0x88")]
		private UxmlIntAttributeDescription m_FixedPaneIndex;

		[Token(Token = "0x40006C0")]
		[FieldOffset(Offset = "0x90")]
		private UxmlIntAttributeDescription m_FixedPaneInitialDimension;

		[Token(Token = "0x40006C1")]
		[FieldOffset(Offset = "0x98")]
		private UxmlEnumAttributeDescription<TwoPaneSplitViewOrientation> m_Orientation;

		[Token(Token = "0x6000A9B")]
		[Address(RVA = "0x3254E70", Offset = "0x3253470", VA = "0x183254E70", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000A9C")]
		[Address(RVA = "0x3255430", Offset = "0x3253A30", VA = "0x183255430")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40006A3")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId fixedPaneIndexProperty;

	[Token(Token = "0x40006A4")]
	[FieldOffset(Offset = "0x98")]
	internal static readonly BindingId fixedPaneInitialDimensionProperty;

	[Token(Token = "0x40006A5")]
	[FieldOffset(Offset = "0x130")]
	internal static readonly BindingId orientationProperty;

	[Token(Token = "0x40006A6")]
	[FieldOffset(Offset = "0x1C8")]
	private static readonly string s_UssClassName;

	[Token(Token = "0x40006A7")]
	[FieldOffset(Offset = "0x1D0")]
	private static readonly string s_ContentContainerClassName;

	[Token(Token = "0x40006A8")]
	[FieldOffset(Offset = "0x1D8")]
	private static readonly string s_HandleDragLineClassName;

	[Token(Token = "0x40006A9")]
	[FieldOffset(Offset = "0x1E0")]
	private static readonly string s_HandleDragLineVerticalClassName;

	[Token(Token = "0x40006AA")]
	[FieldOffset(Offset = "0x1E8")]
	private static readonly string s_HandleDragLineHorizontalClassName;

	[Token(Token = "0x40006AB")]
	[FieldOffset(Offset = "0x1F0")]
	private static readonly string s_HandleDragLineAnchorClassName;

	[Token(Token = "0x40006AC")]
	[FieldOffset(Offset = "0x1F8")]
	private static readonly string s_HandleDragLineAnchorVerticalClassName;

	[Token(Token = "0x40006AD")]
	[FieldOffset(Offset = "0x200")]
	private static readonly string s_HandleDragLineAnchorHorizontalClassName;

	[Token(Token = "0x40006AE")]
	[FieldOffset(Offset = "0x208")]
	private static readonly string s_VerticalClassName;

	[Token(Token = "0x40006AF")]
	[FieldOffset(Offset = "0x210")]
	private static readonly string s_HorizontalClassName;

	[Token(Token = "0x40006B0")]
	[FieldOffset(Offset = "0x2C8")]
	private VisualElement m_LeftPane;

	[Token(Token = "0x40006B1")]
	[FieldOffset(Offset = "0x2D0")]
	private VisualElement m_RightPane;

	[Token(Token = "0x40006B2")]
	[FieldOffset(Offset = "0x2D8")]
	private VisualElement m_FixedPane;

	[Token(Token = "0x40006B3")]
	[FieldOffset(Offset = "0x2E0")]
	private VisualElement m_FlexedPane;

	[Token(Token = "0x40006B4")]
	[FieldOffset(Offset = "0x2E8")]
	[DontCreateProperty]
	[SerializeField]
	private float m_FixedPaneDimension;

	[Token(Token = "0x40006B5")]
	[FieldOffset(Offset = "0x2F0")]
	private VisualElement m_DragLine;

	[Token(Token = "0x40006B6")]
	[FieldOffset(Offset = "0x2F8")]
	private VisualElement m_DragLineAnchor;

	[Token(Token = "0x40006B7")]
	[FieldOffset(Offset = "0x300")]
	private bool m_CollapseMode;

	[Token(Token = "0x40006B8")]
	[FieldOffset(Offset = "0x301")]
	private bool m_PendingCollapseToExecute;

	[Token(Token = "0x40006B9")]
	[FieldOffset(Offset = "0x304")]
	private int m_CollapsedChildIndex;

	[Token(Token = "0x40006BA")]
	[FieldOffset(Offset = "0x308")]
	private VisualElement m_Content;

	[Token(Token = "0x40006BB")]
	[FieldOffset(Offset = "0x310")]
	private TwoPaneSplitViewOrientation m_Orientation;

	[Token(Token = "0x40006BC")]
	[FieldOffset(Offset = "0x314")]
	private int m_FixedPaneIndex;

	[Token(Token = "0x40006BD")]
	[FieldOffset(Offset = "0x318")]
	private float m_FixedPaneInitialDimension;

	[Token(Token = "0x40006BE")]
	[FieldOffset(Offset = "0x320")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal TwoPaneSplitViewResizer m_Resizer;

	[Token(Token = "0x170001F3")]
	public VisualElement fixedPane
	{
		[Token(Token = "0x6000A80")]
		[Address(RVA = "0x312F010", Offset = "0x312D610", VA = "0x18312F010")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F4")]
	public VisualElement flexedPane
	{
		[Token(Token = "0x6000A81")]
		[Address(RVA = "0x2D076E0", Offset = "0x2D05CE0", VA = "0x182D076E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F5")]
	internal VisualElement dragLine
	{
		[Token(Token = "0x6000A82")]
		[Address(RVA = "0x2B08510", Offset = "0x2B06B10", VA = "0x182B08510")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F6")]
	[CreateProperty]
	public int fixedPaneIndex
	{
		[Token(Token = "0x6000A83")]
		[Address(RVA = "0x3253050", Offset = "0x3251650", VA = "0x183253050")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000A84")]
		[Address(RVA = "0x3253080", Offset = "0x3251680", VA = "0x183253080")]
		set
		{
		}
	}

	[Token(Token = "0x170001F7")]
	[CreateProperty]
	public float fixedPaneInitialDimension
	{
		[Token(Token = "0x6000A85")]
		[Address(RVA = "0x2D24C90", Offset = "0x2D23290", VA = "0x182D24C90")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000A86")]
		[Address(RVA = "0x3253120", Offset = "0x3251720", VA = "0x183253120")]
		set
		{
		}
	}

	[Token(Token = "0x170001F8")]
	[CreateProperty]
	public TwoPaneSplitViewOrientation orientation
	{
		[Token(Token = "0x6000A87")]
		[Address(RVA = "0x100AE70", Offset = "0x1009470", VA = "0x18100AE70")]
		get
		{
			return default(TwoPaneSplitViewOrientation);
		}
		[Token(Token = "0x6000A88")]
		[Address(RVA = "0x32531D0", Offset = "0x32517D0", VA = "0x1832531D0")]
		set
		{
		}
	}

	[Token(Token = "0x170001F9")]
	internal float fixedPaneDimension
	{
		[Token(Token = "0x6000A89")]
		[Address(RVA = "0x3253020", Offset = "0x3251620", VA = "0x183253020")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000A8A")]
		[Address(RVA = "0x3253060", Offset = "0x3251660", VA = "0x183253060")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		set
		{
		}
	}

	[Token(Token = "0x170001FA")]
	public override VisualElement contentContainer
	{
		[Token(Token = "0x6000A95")]
		[Address(RVA = "0x3253010", Offset = "0x3251610", VA = "0x183253010", Slot = "138")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A8B")]
	[Address(RVA = "0x3252F70", Offset = "0x3251570", VA = "0x183252F70")]
	public TwoPaneSplitView()
	{
	}

	[Token(Token = "0x6000A8C")]
	[Address(RVA = "0x3252030", Offset = "0x3250630", VA = "0x183252030")]
	private void SetupSplitView()
	{
	}

	[Token(Token = "0x6000A8D")]
	[Address(RVA = "0x3250050", Offset = "0x324E650", VA = "0x183250050")]
	public void CollapseChild(int index)
	{
	}

	[Token(Token = "0x6000A8E")]
	[Address(RVA = "0x3250520", Offset = "0x324EB20", VA = "0x183250520", Slot = "141")]
	internal virtual void Init(int fixedPaneIndex, float fixedPaneInitialDimension, TwoPaneSplitViewOrientation orientation)
	{
	}

	[Token(Token = "0x6000A8F")]
	[Address(RVA = "0x3250930", Offset = "0x324EF30", VA = "0x183250930")]
	private void OnPostDisplaySetup(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6000A90")]
	[Address(RVA = "0x324F8B0", Offset = "0x324DEB0", VA = "0x18324F8B0")]
	private void AdjustPanesBasedOnAnchor()
	{
	}

	[Token(Token = "0x6000A91")]
	[Address(RVA = "0x3250430", Offset = "0x324EA30", VA = "0x183250430")]
	private void IdentifyLeftAndRightPane()
	{
	}

	[Token(Token = "0x6000A92")]
	[Address(RVA = "0x3250AB0", Offset = "0x324F0B0", VA = "0x183250AB0")]
	private void PostDisplaySetup()
	{
	}

	[Token(Token = "0x6000A93")]
	[Address(RVA = "0x3250A60", Offset = "0x324F060", VA = "0x183250A60")]
	private void OnSizeChange(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6000A94")]
	[Address(RVA = "0x32522A0", Offset = "0x32508A0", VA = "0x1832522A0")]
	private void UpdateLayout(bool updateFixedPane, bool updateDragLine)
	{
	}

	[Token(Token = "0x6000A96")]
	[Address(RVA = "0x3250A70", Offset = "0x324F070", VA = "0x183250A70", Slot = "135")]
	internal override void OnViewDataReady()
	{
	}

	[Token(Token = "0x6000A97")]
	[Address(RVA = "0x3251D10", Offset = "0x3250310", VA = "0x183251D10")]
	private void SetDragLineOffset(float offset)
	{
	}

	[Token(Token = "0x6000A98")]
	[Address(RVA = "0x3251EA0", Offset = "0x32504A0", VA = "0x183251EA0")]
	private void SetFixedPaneDimension(float dimension)
	{
	}
}
