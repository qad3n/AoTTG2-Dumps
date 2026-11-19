// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TabView
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6C41410", Offset = "0x6C40410", VA = "0x6C41410")]
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
		[Address(RVA = "0x6C41450", Offset = "0x6C40450", VA = "0x6C41450", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000A09")]
		[Address(RVA = "0x6C41560", Offset = "0x6C40560", VA = "0x6C41560")]
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
		[Address(RVA = "0x6C40530", Offset = "0x6C3F530", VA = "0x6C40530")]
		internal void Save(TabView tabView)
		{
		}

		[Token(Token = "0x6000A0B")]
		[Address(RVA = "0x6C3F5D0", Offset = "0x6C3E5D0", VA = "0x6C3F5D0")]
		internal void Apply(TabView tabView)
		{
		}

		[Token(Token = "0x6000A0C")]
		[Address(RVA = "0x6C41610", Offset = "0x6C40610", VA = "0x6C41610", Slot = "4")]
		public void OnBeforeSerialize()
		{
		}

		[Token(Token = "0x6000A0D")]
		[Address(RVA = "0x6C41620", Offset = "0x6C40620", VA = "0x6C41620", Slot = "5")]
		public void OnAfterDeserialize()
		{
		}

		[Token(Token = "0x6000A0E")]
		[Address(RVA = "0x6C41630", Offset = "0x6C40630", VA = "0x6C41630")]
		public ViewState()
		{
		}
	}

	[Token(Token = "0x200015B")]
	private class TabViewContentContainer : VisualElement
	{
		[Token(Token = "0x6000A0F")]
		[Address(RVA = "0x6C416B0", Offset = "0x6C406B0", VA = "0x6C416B0", Slot = "139")]
		internal override void OnChildAdded(VisualElement ve)
		{
		}

		[Token(Token = "0x6000A10")]
		[Address(RVA = "0x6C41730", Offset = "0x6C40730", VA = "0x6C41730", Slot = "140")]
		internal override void OnChildRemoved(VisualElement ve)
		{
		}

		[Token(Token = "0x6000A11")]
		[Address(RVA = "0x6C417B0", Offset = "0x6C407B0", VA = "0x6C417B0")]
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
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<Tab, Tab> activeTabChanged;

	[Token(Token = "0x4000660")]
	[FieldOffset(Offset = "0x320")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action<int, int> tabReordered;

	[Token(Token = "0x4000661")]
	[FieldOffset(Offset = "0x328")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<Tab, int> tabClosed;

	[Token(Token = "0x4000662")]
	[FieldOffset(Offset = "0x330")]
	private bool m_Reorderable;

	[Token(Token = "0x170001D3")]
	public override VisualElement contentContainer
	{
		[Token(Token = "0x60009E6")]
		[Address(RVA = "0x6C3E9A0", Offset = "0x6C3D9A0", VA = "0x6C3E9A0", Slot = "138")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D4")]
	public VisualElement contentViewport
	{
		[Token(Token = "0x60009E7")]
		[Address(RVA = "0x6C3E9B0", Offset = "0x6C3D9B0", VA = "0x6C3E9B0")]
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
		[Address(RVA = "0x6C3E9C0", Offset = "0x6C3D9C0", VA = "0x6C3E9C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D6")]
	internal List<Tab> tabs
	{
		[Token(Token = "0x60009E9")]
		[Address(RVA = "0x6C3E9D0", Offset = "0x6C3D9D0", VA = "0x6C3E9D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D7")]
	internal List<VisualElement> tabHeaders
	{
		[Token(Token = "0x60009EA")]
		[Address(RVA = "0x6C3E9E0", Offset = "0x6C3D9E0", VA = "0x6C3E9E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D8")]
	internal RepeatButton nextButton
	{
		[Token(Token = "0x60009EB")]
		[Address(RVA = "0x6C3E9F0", Offset = "0x6C3D9F0", VA = "0x6C3E9F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60009EC")]
		[Address(RVA = "0x6C3EA00", Offset = "0x6C3DA00", VA = "0x6C3EA00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001D9")]
	internal RepeatButton previousButton
	{
		[Token(Token = "0x60009ED")]
		[Address(RVA = "0x6C3EA20", Offset = "0x6C3DA20", VA = "0x6C3EA20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60009EE")]
		[Address(RVA = "0x6C3EA30", Offset = "0x6C3DA30", VA = "0x6C3EA30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001DA")]
	internal float scrollableWidth
	{
		[Token(Token = "0x60009EF")]
		[Address(RVA = "0x6C3EA50", Offset = "0x6C3DA50", VA = "0x6C3EA50")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170001DB")]
	internal bool needsButtons
	{
		[Token(Token = "0x60009F0")]
		[Address(RVA = "0x6C3EAD0", Offset = "0x6C3DAD0", VA = "0x6C3EAD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001DC")]
	public Tab activeTab
	{
		[Token(Token = "0x60009F1")]
		[Address(RVA = "0x6C3EB60", Offset = "0x6C3DB60", VA = "0x6C3EB60")]
		get
		{
			return null;
		}
		[Token(Token = "0x60009F2")]
		[Address(RVA = "0x6C3DDD0", Offset = "0x6C3CDD0", VA = "0x6C3DDD0")]
		set
		{
		}
	}

	[Token(Token = "0x170001DD")]
	[CreateProperty]
	public bool reorderable
	{
		[Token(Token = "0x60009F3")]
		[Address(RVA = "0x6C3EBA0", Offset = "0x6C3DBA0", VA = "0x6C3EBA0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009F4")]
		[Address(RVA = "0x6C3EBB0", Offset = "0x6C3DBB0", VA = "0x6C3EBB0")]
		set
		{
		}
	}

	[Token(Token = "0x60009F5")]
	[Address(RVA = "0x6C3ED80", Offset = "0x6C3DD80", VA = "0x6C3ED80")]
	public TabView()
	{
	}

	[Token(Token = "0x60009F6")]
	[Address(RVA = "0x6C3F4D0", Offset = "0x6C3E4D0", VA = "0x6C3F4D0", Slot = "135")]
	internal override void OnViewDataReady()
	{
	}

	[Token(Token = "0x60009F7")]
	[Address(RVA = "0x6C3F750", Offset = "0x6C3E750", VA = "0x6C3F750")]
	private void OnDetachFromPanel(DetachFromPanelEvent evt)
	{
	}

	[Token(Token = "0x60009F8")]
	[Address(RVA = "0x6C3F860", Offset = "0x6C3E860", VA = "0x6C3F860")]
	private void OnGeometryChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x60009F9")]
	[Address(RVA = "0x6C3FF00", Offset = "0x6C3EF00", VA = "0x6C3FF00")]
	private void OnNextClicked()
	{
	}

	[Token(Token = "0x60009FA")]
	[Address(RVA = "0x6C40270", Offset = "0x6C3F270", VA = "0x6C40270")]
	private void OnPreviousClicked()
	{
	}

	[Token(Token = "0x60009FB")]
	[Address(RVA = "0x6C3FCD0", Offset = "0x6C3ECD0", VA = "0x6C3FCD0")]
	internal void UpdateButtons(Vector3 contentTransform)
	{
	}

	[Token(Token = "0x60009FC")]
	[Address(RVA = "0x6C3EB70", Offset = "0x6C3DB70", VA = "0x6C3EB70")]
	private void SaveViewState()
	{
	}

	[Token(Token = "0x60009FD")]
	[Address(RVA = "0x6C40750", Offset = "0x6C3F750", VA = "0x6C40750")]
	private void UpdateIndexes()
	{
	}

	[Token(Token = "0x60009FE")]
	[Address(RVA = "0x6C407E0", Offset = "0x6C3F7E0", VA = "0x6C407E0")]
	private void OnElementAdded(VisualElement ve)
	{
	}

	[Token(Token = "0x60009FF")]
	[Address(RVA = "0x6C40B40", Offset = "0x6C3FB40", VA = "0x6C40B40")]
	private void OnElementRemoved(VisualElement ve)
	{
	}

	[Token(Token = "0x6000A00")]
	[Address(RVA = "0x6C40D90", Offset = "0x6C3FD90", VA = "0x6C40D90")]
	private void OnTabSelected(Tab tab)
	{
	}

	[Token(Token = "0x6000A01")]
	[Address(RVA = "0x6C40DA0", Offset = "0x6C3FDA0", VA = "0x6C40DA0")]
	private void OnTabClosed(Tab tab)
	{
	}

	[Token(Token = "0x6000A02")]
	[Address(RVA = "0x6C3C530", Offset = "0x6C3B530", VA = "0x6C3C530")]
	public void ReorderTab(int from, int to)
	{
	}

	[Token(Token = "0x6000A03")]
	[Address(RVA = "0x6C40DD0", Offset = "0x6C3FDD0", VA = "0x6C40DD0")]
	internal Tab FindTabByKey(string key)
	{
		return null;
	}
}
