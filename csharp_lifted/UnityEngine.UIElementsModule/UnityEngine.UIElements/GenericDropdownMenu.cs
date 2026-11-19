// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.GenericDropdownMenu
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000D3")]
public class GenericDropdownMenu : AbstractGenericMenu
{
	[Token(Token = "0x20000D4")]
	internal class MenuItem
	{
		[Token(Token = "0x4000396")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public string name;

		[Token(Token = "0x4000397")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public VisualElement element;

		[Token(Token = "0x4000398")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action action;

		[Token(Token = "0x4000399")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Action<object> actionUserData;

		[Token(Token = "0x6000609")]
		[Address(RVA = "0x6BE2300", Offset = "0x6BE1300", VA = "0x6BE2300")]
		public MenuItem()
		{
		}
	}

	[Token(Token = "0x400037B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly string ussClassName;

	[Token(Token = "0x400037C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly string itemUssClassName;

	[Token(Token = "0x400037D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static readonly string itemContentUssClassName;

	[Token(Token = "0x400037E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public static readonly string labelUssClassName;

	[Token(Token = "0x400037F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public static readonly string containerInnerUssClassName;

	[Token(Token = "0x4000380")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public static readonly string containerOuterUssClassName;

	[Token(Token = "0x4000381")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public static readonly string checkmarkUssClassName;

	[Token(Token = "0x4000382")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public static readonly string separatorUssClassName;

	[Token(Token = "0x4000383")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public static readonly string contentWidthUssClassName;

	[Token(Token = "0x4000384")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private List<MenuItem> m_Items;

	[Token(Token = "0x4000385")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private VisualElement m_MenuContainer;

	[Token(Token = "0x4000386")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private VisualElement m_OuterContainer;

	[Token(Token = "0x4000387")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private ScrollView m_ScrollView;

	[Token(Token = "0x4000388")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private VisualElement m_PanelRootVisualContainer;

	[Token(Token = "0x4000389")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private VisualElement m_TargetElement;

	[Token(Token = "0x400038A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Rect m_DesiredRect;

	[Token(Token = "0x400038B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private KeyboardNavigationManipulator m_NavigationManipulator;

	[Token(Token = "0x400038C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private float m_PositionTop;

	[Token(Token = "0x400038D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	private float m_PositionLeft;

	[Token(Token = "0x400038E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private float m_ContentWidth;

	[Token(Token = "0x400038F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
	private bool m_FitContentWidth;

	[Token(Token = "0x4000390")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x65")]
	private bool m_ShownAboveTarget;

	[Token(Token = "0x4000393")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action onOpen;

	[Token(Token = "0x4000394")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action onClose;

	[Token(Token = "0x4000395")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private Vector2 m_MousePosition;

	[Token(Token = "0x170000FA")]
	internal bool isSingleSelectionDropdown
	{
		[Token(Token = "0x60005E7")]
		[Address(RVA = "0x6BE0640", Offset = "0x6BDF640", VA = "0x6BE0640")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60005E8")]
		[Address(RVA = "0x6BE0650", Offset = "0x6BDF650", VA = "0x6BE0650")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000FB")]
	internal bool closeOnParentResize
	{
		[Token(Token = "0x60005E9")]
		[Address(RVA = "0x6BE0660", Offset = "0x6BDF660", VA = "0x6BE0660")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60005EA")]
		[Address(RVA = "0x6BE0670", Offset = "0x6BDF670", VA = "0x6BE0670")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000FC")]
	public VisualElement contentContainer
	{
		[Token(Token = "0x60005EB")]
		[Address(RVA = "0x6BE0680", Offset = "0x6BDF680", VA = "0x6BE0680")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x6BE06B0", Offset = "0x6BDF6B0", VA = "0x6BE06B0")]
	public GenericDropdownMenu()
	{
	}

	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x6BE0A20", Offset = "0x6BDFA20", VA = "0x6BE0A20")]
	private void OnAttachToPanel(AttachToPanelEvent evt)
	{
	}

	[Token(Token = "0x60005EE")]
	[Address(RVA = "0x6BE0E80", Offset = "0x6BDFE80", VA = "0x6BE0E80")]
	private void OnDetachFromPanel(DetachFromPanelEvent evt)
	{
	}

	[Token(Token = "0x60005EF")]
	[Address(RVA = "0x6BE1210", Offset = "0x6BE0210", VA = "0x6BE1210")]
	private void Hide(bool giveFocusBack = false)
	{
	}

	[Token(Token = "0x60005F0")]
	[Address(RVA = "0x6BE1380", Offset = "0x6BE0380", VA = "0x6BE1380")]
	private void Apply(KeyboardNavigationOperation op, EventBase sourceEvent)
	{
	}

	[Token(Token = "0x60005F1")]
	[Address(RVA = "0x6BE13B0", Offset = "0x6BE03B0", VA = "0x6BE13B0")]
	private bool Apply(KeyboardNavigationOperation op)
	{
		return default(bool);
	}

	[Token(Token = "0x60005F2")]
	[Address(RVA = "0x6BE1730", Offset = "0x6BE0730", VA = "0x6BE1730")]
	private void OnPointerDown(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x60005F3")]
	[Address(RVA = "0x6BE1950", Offset = "0x6BE0950", VA = "0x6BE1950")]
	private void OnPointerMove(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x6BE1A30", Offset = "0x6BE0A30", VA = "0x6BE1A30")]
	private void OnPointerUp(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x60005F5")]
	[Address(RVA = "0x6BE1B80", Offset = "0x6BE0B80", VA = "0x6BE1B80")]
	private void OnFocusOut(FocusOutEvent evt)
	{
	}

	[Token(Token = "0x60005F6")]
	[Address(RVA = "0x6BE1CE0", Offset = "0x6BE0CE0", VA = "0x6BE1CE0")]
	private void OnParentResized(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x60005F7")]
	[Address(RVA = "0x6BE1810", Offset = "0x6BE0810", VA = "0x6BE1810")]
	private void UpdateSelection(VisualElement target)
	{
	}

	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x6BE1D00", Offset = "0x6BE0D00", VA = "0x6BE1D00")]
	private void ChangeSelectedIndex(int newIndex, int previousIndex)
	{
	}

	[Token(Token = "0x60005F9")]
	[Address(RVA = "0x6BE1540", Offset = "0x6BE0540", VA = "0x6BE1540")]
	private int GetSelectedIndex()
	{
		return default(int);
	}

	[Token(Token = "0x60005FA")]
	[Address(RVA = "0x6BE1E30", Offset = "0x6BE0E30", VA = "0x6BE1E30", Slot = "4")]
	public override void AddItem(string itemName, bool isChecked, Action action)
	{
	}

	[Token(Token = "0x60005FB")]
	[Address(RVA = "0x6BE2220", Offset = "0x6BE1220", VA = "0x6BE2220", Slot = "5")]
	public override void AddItem(string itemName, bool isChecked, Action<object> action, object data)
	{
	}

	[Token(Token = "0x60005FC")]
	[Address(RVA = "0x6BE2250", Offset = "0x6BE1250", VA = "0x6BE2250", Slot = "6")]
	public override void AddSeparator(string path)
	{
	}

	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x6BE1E60", Offset = "0x6BE0E60", VA = "0x6BE1E60")]
	private MenuItem AddItem(string itemName, bool isChecked, bool isEnabled, [Optional] object data)
	{
		return null;
	}

	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x6BE2310", Offset = "0x6BE1310", VA = "0x6BE2310", Slot = "7")]
	public override void DropDown(Rect position, VisualElement targetElement, DropdownMenuSizeMode dropdownMenuSizeMode = DropdownMenuSizeMode.Auto)
	{
	}

	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x6BE24C0", Offset = "0x6BE14C0", VA = "0x6BE24C0")]
	private void DoDropDown(Rect position, VisualElement targetElement, bool anchored)
	{
	}

	[Token(Token = "0x6000600")]
	[Address(RVA = "0x6BE2440", Offset = "0x6BE1440", VA = "0x6BE2440")]
	private void SetFitContentWidth(bool fit)
	{
	}

	[Token(Token = "0x6000601")]
	[Address(RVA = "0x6BE3E80", Offset = "0x6BE2E80", VA = "0x6BE3E80")]
	private void OnTargetElementDetachFromPanel(DetachFromPanelEvent evt)
	{
	}

	[Token(Token = "0x6000602")]
	[Address(RVA = "0x6BE3E90", Offset = "0x6BE2E90", VA = "0x6BE3E90")]
	private void OnContainerGeometryChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6000603")]
	[Address(RVA = "0x6BE3EA0", Offset = "0x6BE2EA0", VA = "0x6BE3EA0")]
	private void OnInitialDisplay(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6000604")]
	[Address(RVA = "0x6BE31E0", Offset = "0x6BE21E0", VA = "0x6BE31E0")]
	private void EnsureVisibilityInParent()
	{
	}

	[Token(Token = "0x6000605")]
	[Address(RVA = "0x6BE3EC0", Offset = "0x6BE2EC0", VA = "0x6BE3EC0")]
	private float GetLargestItemWidth()
	{
		return default(float);
	}
}
