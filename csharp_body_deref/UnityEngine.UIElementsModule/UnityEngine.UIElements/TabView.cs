// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TabView
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000157")]
[UxmlElement(null, new Type[] { typeof(Tab) })]
public class TabView : VisualElement
{
	[Token(Token = "0x2000158")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<TabView, UxmlTraits>
	{
		[Token(Token = "0x6000A07")]
		[Address(RVA = "0x323AFC0", Offset = "0x32395C0", VA = "0x18323AFC0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000159")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : VisualElement.UxmlTraits
	{
		[Token(Token = "0x4000663")]
		[FieldOffset(Offset = "0x88")]
		private readonly UxmlBoolAttributeDescription m_Reorderable;

		[Token(Token = "0x6000A08")]
		[Address(RVA = "0x323BDF0", Offset = "0x323A3F0", VA = "0x18323BDF0", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000A09")]
		[Address(RVA = "0x323D790", Offset = "0x323BD90", VA = "0x18323D790")]
		public UxmlTraits()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x200015A")]
	private class ViewState : ISerializationCallbackReceiver
	{
		[Token(Token = "0x4000664")]
		[FieldOffset(Offset = "0x10")]
		private bool m_HasPersistedData;

		[Token(Token = "0x4000665")]
		[FieldOffset(Offset = "0x18")]
		[SerializeField]
		private List<string> m_TabOrder;

		[Token(Token = "0x4000666")]
		[FieldOffset(Offset = "0x20")]
		[SerializeField]
		private string m_ActiveTabKey;

		[Token(Token = "0x6000A0A")]
		[Address(RVA = "0x323DDB0", Offset = "0x323C3B0", VA = "0x18323DDB0")]
		internal void Save(TabView tabView)
		{
		}

		[Token(Token = "0x6000A0B")]
		[Address(RVA = "0x323DC00", Offset = "0x323C200", VA = "0x18323DC00")]
		internal void Apply(TabView tabView)
		{
		}

		[Token(Token = "0x6000A0C")]
		[Address(RVA = "0xB3C020", Offset = "0xB3A620", VA = "0x180B3C020", Slot = "4")]
		public void OnBeforeSerialize()
		{
		}

		[Token(Token = "0x6000A0D")]
		[Address(RVA = "0xB3C020", Offset = "0xB3A620", VA = "0x180B3C020", Slot = "5")]
		public void OnAfterDeserialize()
		{
		}

		[Token(Token = "0x6000A0E")]
		[Address(RVA = "0x323DFD0", Offset = "0x323C5D0", VA = "0x18323DFD0")]
		public ViewState()
		{
		}
	}

	[Token(Token = "0x200015B")]
	private class TabViewContentContainer : VisualElement
	{
		[Token(Token = "0x6000A0F")]
		[Address(RVA = "0x3248B80", Offset = "0x3247180", VA = "0x183248B80", Slot = "139")]
		internal override void OnChildAdded(VisualElement ve)
		{
		}

		[Token(Token = "0x6000A10")]
		[Address(RVA = "0x3248C20", Offset = "0x3247220", VA = "0x183248C20", Slot = "140")]
		internal override void OnChildRemoved(VisualElement ve)
		{
		}

		[Token(Token = "0x6000A11")]
		[Address(RVA = "0x3248CC0", Offset = "0x32472C0", VA = "0x183248CC0")]
		public TabViewContentContainer()
		{
		}
	}

	[Token(Token = "0x400064B")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId reorderableProperty;

	[Token(Token = "0x400064C")]
	[FieldOffset(Offset = "0x98")]
	public static readonly string ussClassName;

	[Token(Token = "0x400064D")]
	[FieldOffset(Offset = "0xA0")]
	public static readonly string headerContainerClassName;

	[Token(Token = "0x400064E")]
	[FieldOffset(Offset = "0xA8")]
	public static readonly string contentContainerUssClassName;

	[Token(Token = "0x400064F")]
	[FieldOffset(Offset = "0xB0")]
	public static readonly string reorderableUssClassName;

	[Token(Token = "0x4000650")]
	[FieldOffset(Offset = "0xB8")]
	public static readonly string verticalUssClassName;

	[Token(Token = "0x4000651")]
	[FieldOffset(Offset = "0xC0")]
	public static readonly string viewportUssClassName;

	[Token(Token = "0x4000652")]
	[FieldOffset(Offset = "0xC8")]
	public static readonly string nextButtonUssClassName;

	[Token(Token = "0x4000653")]
	[FieldOffset(Offset = "0xD0")]
	public static readonly string previousButtonUssClassName;

	[Token(Token = "0x4000655")]
	[FieldOffset(Offset = "0x2D0")]
	private VisualElement m_HeaderContainer;

	[Token(Token = "0x4000656")]
	[FieldOffset(Offset = "0x2D8")]
	private VisualElement m_ContentContainer;

	[Token(Token = "0x4000657")]
	[FieldOffset(Offset = "0x2E0")]
	private List<Tab> m_Tabs;

	[Token(Token = "0x4000658")]
	[FieldOffset(Offset = "0x2E8")]
	private List<VisualElement> m_TabHeaders;

	[Token(Token = "0x4000659")]
	[FieldOffset(Offset = "0x2F0")]
	private Tab m_ActiveTab;

	[Token(Token = "0x400065A")]
	[FieldOffset(Offset = "0x2F8")]
	private ViewState m_ViewState;

	[Token(Token = "0x400065B")]
	[FieldOffset(Offset = "0x300")]
	private bool m_ApplyingViewState;

	[Token(Token = "0x400065C")]
	[FieldOffset(Offset = "0x301")]
	private bool m_Reordering;

	[Token(Token = "0x400065F")]
	[FieldOffset(Offset = "0x318")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action<Tab, Tab> activeTabChanged;

	[Token(Token = "0x4000660")]
	[FieldOffset(Offset = "0x320")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action<int, int> tabReordered;

	[Token(Token = "0x4000661")]
	[FieldOffset(Offset = "0x328")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action<Tab, int> tabClosed;

	[Token(Token = "0x4000662")]
	[FieldOffset(Offset = "0x330")]
	private bool m_Reorderable;

	[Token(Token = "0x170001D3")]
	public override VisualElement contentContainer
	{
		[Token(Token = "0x60009E6")]
		[Address(RVA = "0x312F010", Offset = "0x312D610", VA = "0x18312F010", Slot = "138")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D4")]
	public VisualElement contentViewport
	{
		[Token(Token = "0x60009E7")]
		[Address(RVA = "0xDB75F0", Offset = "0xDB5BF0", VA = "0x180DB75F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D5")]
	internal VisualElement header
	{
		[Token(Token = "0x60009E8")]
		[Address(RVA = "0x31DC9F0", Offset = "0x31DAFF0", VA = "0x1831DC9F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D6")]
	internal List<Tab> tabs
	{
		[Token(Token = "0x60009E9")]
		[Address(RVA = "0x2D076E0", Offset = "0x2D05CE0", VA = "0x182D076E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D7")]
	internal List<VisualElement> tabHeaders
	{
		[Token(Token = "0x60009EA")]
		[Address(RVA = "0x312F020", Offset = "0x312D620", VA = "0x18312F020")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D8")]
	internal RepeatButton nextButton
	{
		[Token(Token = "0x60009EB")]
		[Address(RVA = "0x3136460", Offset = "0x3134A60", VA = "0x183136460")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60009EC")]
		[Address(RVA = "0x31371F0", Offset = "0x31357F0", VA = "0x1831371F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001D9")]
	internal RepeatButton previousButton
	{
		[Token(Token = "0x60009ED")]
		[Address(RVA = "0x32036F0", Offset = "0x3201CF0", VA = "0x1832036F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60009EE")]
		[Address(RVA = "0x32381B0", Offset = "0x32367B0", VA = "0x1832381B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001DA")]
	internal float scrollableWidth
	{
		[Token(Token = "0x60009EF")]
		[Address(RVA = "0x3237F40", Offset = "0x3236540", VA = "0x183237F40")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170001DB")]
	internal bool needsButtons
	{
		[Token(Token = "0x60009F0")]
		[Address(RVA = "0x3237F20", Offset = "0x3236520", VA = "0x183237F20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001DC")]
	public Tab activeTab
	{
		[Token(Token = "0x60009F1")]
		[Address(RVA = "0x2B08510", Offset = "0x2B06B10", VA = "0x182B08510")]
		get
		{
			return null;
		}
		[Token(Token = "0x60009F2")]
		[Address(RVA = "0x3237FE0", Offset = "0x32365E0", VA = "0x183237FE0")]
		set
		{
		}
	}

	[Token(Token = "0x170001DD")]
	[CreateProperty]
	public bool reorderable
	{
		[Token(Token = "0x60009F3")]
		[Address(RVA = "0x100BDD0", Offset = "0x100A3D0", VA = "0x18100BDD0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009F4")]
		[Address(RVA = "0x32381D0", Offset = "0x32367D0", VA = "0x1832381D0")]
		set
		{
		}
	}

	[Token(Token = "0x60009F5")]
	[Address(RVA = "0x32377A0", Offset = "0x3235DA0", VA = "0x1832377A0")]
	public TabView()
	{
	}

	[Token(Token = "0x60009F6")]
	[Address(RVA = "0x3236A50", Offset = "0x3235050", VA = "0x183236A50", Slot = "135")]
	internal override void OnViewDataReady()
	{
	}

	[Token(Token = "0x60009F7")]
	[Address(RVA = "0x3235830", Offset = "0x3233E30", VA = "0x183235830")]
	private void OnDetachFromPanel(DetachFromPanelEvent evt)
	{
	}

	[Token(Token = "0x60009F8")]
	[Address(RVA = "0x3235E70", Offset = "0x3234470", VA = "0x183235E70")]
	private void OnGeometryChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x60009F9")]
	[Address(RVA = "0x32362A0", Offset = "0x32348A0", VA = "0x1832362A0")]
	private void OnNextClicked()
	{
	}

	[Token(Token = "0x60009FA")]
	[Address(RVA = "0x32366A0", Offset = "0x3234CA0", VA = "0x1832366A0")]
	private void OnPreviousClicked()
	{
	}

	[Token(Token = "0x60009FB")]
	[Address(RVA = "0x32371E0", Offset = "0x32357E0", VA = "0x1832371E0")]
	internal void UpdateButtons(Vector3 contentTransform)
	{
	}

	[Token(Token = "0x60009FC")]
	[Address(RVA = "0x3236EF0", Offset = "0x32354F0", VA = "0x183236EF0")]
	private void SaveViewState()
	{
	}

	[Token(Token = "0x60009FD")]
	[Address(RVA = "0x32372E0", Offset = "0x32358E0", VA = "0x1832372E0")]
	private void UpdateIndexes()
	{
	}

	[Token(Token = "0x60009FE")]
	[Address(RVA = "0x3235940", Offset = "0x3233F40", VA = "0x183235940")]
	private void OnElementAdded(VisualElement ve)
	{
	}

	[Token(Token = "0x60009FF")]
	[Address(RVA = "0x3235C40", Offset = "0x3234240", VA = "0x183235C40")]
	private void OnElementRemoved(VisualElement ve)
	{
	}

	[Token(Token = "0x6000A00")]
	[Address(RVA = "0x3236A40", Offset = "0x3235040", VA = "0x183236A40")]
	private void OnTabSelected(Tab tab)
	{
	}

	[Token(Token = "0x6000A01")]
	[Address(RVA = "0x3236A00", Offset = "0x3235000", VA = "0x183236A00")]
	private void OnTabClosed(Tab tab)
	{
	}

	[Token(Token = "0x6000A02")]
	[Address(RVA = "0x3236CD0", Offset = "0x32352D0", VA = "0x183236CD0")]
	public void ReorderTab(int from, int to)
	{
	}

	[Token(Token = "0x6000A03")]
	[Address(RVA = "0x3235750", Offset = "0x3233D50", VA = "0x183235750")]
	internal Tab FindTabByKey(string key)
	{
		return null;
	}
}
