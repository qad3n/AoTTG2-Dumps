// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TwoPaneSplitView
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6C496D0", Offset = "0x6C486D0", VA = "0x6C496D0")]
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
		[Address(RVA = "0x6C49710", Offset = "0x6C48710", VA = "0x6C49710", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000A9C")]
		[Address(RVA = "0x6C498D0", Offset = "0x6C488D0", VA = "0x6C498D0")]
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
		[Address(RVA = "0x6C451B0", Offset = "0x6C441B0", VA = "0x6C451B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F4")]
	public VisualElement flexedPane
	{
		[Token(Token = "0x6000A81")]
		[Address(RVA = "0x6C451C0", Offset = "0x6C441C0", VA = "0x6C451C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F5")]
	internal VisualElement dragLine
	{
		[Token(Token = "0x6000A82")]
		[Address(RVA = "0x6C451D0", Offset = "0x6C441D0", VA = "0x6C451D0")]
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
		[Address(RVA = "0x6C451E0", Offset = "0x6C441E0", VA = "0x6C451E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000A84")]
		[Address(RVA = "0x6C451F0", Offset = "0x6C441F0", VA = "0x6C451F0")]
		set
		{
		}
	}

	[Token(Token = "0x170001F7")]
	[CreateProperty]
	public float fixedPaneInitialDimension
	{
		[Token(Token = "0x6000A85")]
		[Address(RVA = "0x6C45290", Offset = "0x6C44290", VA = "0x6C45290")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000A86")]
		[Address(RVA = "0x6C452A0", Offset = "0x6C442A0", VA = "0x6C452A0")]
		set
		{
		}
	}

	[Token(Token = "0x170001F8")]
	[CreateProperty]
	public TwoPaneSplitViewOrientation orientation
	{
		[Token(Token = "0x6000A87")]
		[Address(RVA = "0x6C45340", Offset = "0x6C44340", VA = "0x6C45340")]
		get
		{
			return default(TwoPaneSplitViewOrientation);
		}
		[Token(Token = "0x6000A88")]
		[Address(RVA = "0x6C45350", Offset = "0x6C44350", VA = "0x6C45350")]
		set
		{
		}
	}

	[Token(Token = "0x170001F9")]
	internal float fixedPaneDimension
	{
		[Token(Token = "0x6000A89")]
		[Address(RVA = "0x6C453F0", Offset = "0x6C443F0", VA = "0x6C453F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000A8A")]
		[Address(RVA = "0x6C45420", Offset = "0x6C44420", VA = "0x6C45420")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		set
		{
		}
	}

	[Token(Token = "0x170001FA")]
	public override VisualElement contentContainer
	{
		[Token(Token = "0x6000A95")]
		[Address(RVA = "0x6C492E0", Offset = "0x6C482E0", VA = "0x6C492E0", Slot = "138")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A8B")]
	[Address(RVA = "0x6C45440", Offset = "0x6C44440", VA = "0x6C45440")]
	public TwoPaneSplitView()
	{
	}

	[Token(Token = "0x6000A8C")]
	[Address(RVA = "0x6C454E0", Offset = "0x6C444E0", VA = "0x6C454E0")]
	private void SetupSplitView()
	{
	}

	[Token(Token = "0x6000A8D")]
	[Address(RVA = "0x6C45740", Offset = "0x6C44740", VA = "0x6C45740")]
	public void CollapseChild(int index)
	{
	}

	[Token(Token = "0x6000A8E")]
	[Address(RVA = "0x6C465C0", Offset = "0x6C455C0", VA = "0x6C465C0", Slot = "141")]
	internal virtual void Init(int fixedPaneIndex, float fixedPaneInitialDimension, TwoPaneSplitViewOrientation orientation)
	{
	}

	[Token(Token = "0x6000A8F")]
	[Address(RVA = "0x6C47F90", Offset = "0x6C46F90", VA = "0x6C47F90")]
	private void OnPostDisplaySetup(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6000A90")]
	[Address(RVA = "0x6C45E60", Offset = "0x6C44E60", VA = "0x6C45E60")]
	private void AdjustPanesBasedOnAnchor()
	{
	}

	[Token(Token = "0x6000A91")]
	[Address(RVA = "0x6C480C0", Offset = "0x6C470C0", VA = "0x6C480C0")]
	private void IdentifyLeftAndRightPane()
	{
	}

	[Token(Token = "0x6000A92")]
	[Address(RVA = "0x6C46940", Offset = "0x6C45940", VA = "0x6C46940")]
	private void PostDisplaySetup()
	{
	}

	[Token(Token = "0x6000A93")]
	[Address(RVA = "0x6C48240", Offset = "0x6C47240", VA = "0x6C48240")]
	private void OnSizeChange(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6000A94")]
	[Address(RVA = "0x6C48250", Offset = "0x6C47250", VA = "0x6C48250")]
	private void UpdateLayout(bool updateFixedPane, bool updateDragLine)
	{
	}

	[Token(Token = "0x6000A96")]
	[Address(RVA = "0x6C492F0", Offset = "0x6C482F0", VA = "0x6C492F0", Slot = "135")]
	internal override void OnViewDataReady()
	{
	}

	[Token(Token = "0x6000A97")]
	[Address(RVA = "0x6C48FA0", Offset = "0x6C47FA0", VA = "0x6C48FA0")]
	private void SetDragLineOffset(float offset)
	{
	}

	[Token(Token = "0x6000A98")]
	[Address(RVA = "0x6C49140", Offset = "0x6C48140", VA = "0x6C49140")]
	private void SetFixedPaneDimension(float dimension)
	{
	}
}
