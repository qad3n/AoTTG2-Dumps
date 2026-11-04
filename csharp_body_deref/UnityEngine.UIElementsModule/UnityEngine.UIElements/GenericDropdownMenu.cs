// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.GenericDropdownMenu
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
		[Address(RVA = "0x2510380", Offset = "0x250E980", VA = "0x182510380")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60005E8")]
		[Address(RVA = "0x2CBC330", Offset = "0x2CBA930", VA = "0x182CBC330")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000FB")]
	internal bool closeOnParentResize
	{
		[Token(Token = "0x60005E9")]
		[Address(RVA = "0x2510370", Offset = "0x250E970", VA = "0x182510370")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60005EA")]
		[Address(RVA = "0x31D8410", Offset = "0x31D6A10", VA = "0x1831D8410")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000FC")]
	public VisualElement contentContainer
	{
		[Token(Token = "0x60005EB")]
		[Address(RVA = "0x31D83E0", Offset = "0x31D69E0", VA = "0x1831D83E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x31D8080", Offset = "0x31D6680", VA = "0x1831D8080")]
	public GenericDropdownMenu()
	{
	}

	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x31D6DD0", Offset = "0x31D53D0", VA = "0x1831D6DD0")]
	private void OnAttachToPanel(AttachToPanelEvent evt)
	{
	}

	[Token(Token = "0x60005EE")]
	[Address(RVA = "0x31D71E0", Offset = "0x31D57E0", VA = "0x1831D71E0")]
	private void OnDetachFromPanel(DetachFromPanelEvent evt)
	{
	}

	[Token(Token = "0x60005EF")]
	[Address(RVA = "0x31D6C50", Offset = "0x31D5250", VA = "0x1831D6C50")]
	private void Hide(bool giveFocusBack = false)
	{
	}

	[Token(Token = "0x60005F0")]
	[Address(RVA = "0x31D48A0", Offset = "0x31D2EA0", VA = "0x1831D48A0")]
	private void Apply(KeyboardNavigationOperation op, EventBase sourceEvent)
	{
	}

	[Token(Token = "0x60005F1")]
	[Address(RVA = "0x31D4570", Offset = "0x31D2B70", VA = "0x1831D4570")]
	private bool Apply(KeyboardNavigationOperation op)
	{
		return default(bool);
	}

	[Token(Token = "0x60005F2")]
	[Address(RVA = "0x31D7680", Offset = "0x31D5C80", VA = "0x1831D7680")]
	private void OnPointerDown(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x60005F3")]
	[Address(RVA = "0x31D7790", Offset = "0x31D5D90", VA = "0x1831D7790")]
	private void OnPointerMove(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x31D78A0", Offset = "0x31D5EA0", VA = "0x1831D78A0")]
	private void OnPointerUp(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x60005F5")]
	[Address(RVA = "0x31D7500", Offset = "0x31D5B00", VA = "0x1831D7500")]
	private void OnFocusOut(FocusOutEvent evt)
	{
	}

	[Token(Token = "0x60005F6")]
	[Address(RVA = "0x31D7660", Offset = "0x31D5C60", VA = "0x1831D7660")]
	private void OnParentResized(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x60005F7")]
	[Address(RVA = "0x31D7BF0", Offset = "0x31D61F0", VA = "0x1831D7BF0")]
	private void UpdateSelection(VisualElement target)
	{
	}

	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x31D48E0", Offset = "0x31D2EE0", VA = "0x1831D48E0")]
	private void ChangeSelectedIndex(int newIndex, int previousIndex)
	{
	}

	[Token(Token = "0x60005F9")]
	[Address(RVA = "0x31D6BB0", Offset = "0x31D51B0", VA = "0x1831D6BB0")]
	private int GetSelectedIndex()
	{
		return default(int);
	}

	[Token(Token = "0x60005FA")]
	[Address(RVA = "0x31D4080", Offset = "0x31D2680", VA = "0x1831D4080", Slot = "4")]
	public override void AddItem(string itemName, bool isChecked, Action action)
	{
	}

	[Token(Token = "0x60005FB")]
	[Address(RVA = "0x31D4460", Offset = "0x31D2A60", VA = "0x1831D4460", Slot = "5")]
	public override void AddItem(string itemName, bool isChecked, Action<object> action, object data)
	{
	}

	[Token(Token = "0x60005FC")]
	[Address(RVA = "0x31D44B0", Offset = "0x31D2AB0", VA = "0x1831D44B0", Slot = "6")]
	public override void AddSeparator(string path)
	{
	}

	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x31D40C0", Offset = "0x31D26C0", VA = "0x1831D40C0")]
	private MenuItem AddItem(string itemName, bool isChecked, bool isEnabled, [Optional] object data)
	{
		return null;
	}

	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x31D5810", Offset = "0x31D3E10", VA = "0x1831D5810", Slot = "7")]
	public override void DropDown(Rect position, VisualElement targetElement, DropdownMenuSizeMode dropdownMenuSizeMode = DropdownMenuSizeMode.Auto)
	{
	}

	[Token(Token = "0x60005FF")]
	[Address(RVA = "0x31D4A10", Offset = "0x31D3010", VA = "0x1831D4A10")]
	private void DoDropDown(Rect position, VisualElement targetElement, bool anchored)
	{
	}

	[Token(Token = "0x6000600")]
	[Address(RVA = "0x31D7A10", Offset = "0x31D6010", VA = "0x1831D7A10")]
	private void SetFitContentWidth(bool fit)
	{
	}

	[Token(Token = "0x6000601")]
	[Address(RVA = "0x31D7A00", Offset = "0x31D6000", VA = "0x1831D7A00")]
	private void OnTargetElementDetachFromPanel(DetachFromPanelEvent evt)
	{
	}

	[Token(Token = "0x6000602")]
	[Address(RVA = "0x31D71D0", Offset = "0x31D57D0", VA = "0x1831D71D0")]
	private void OnContainerGeometryChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6000603")]
	[Address(RVA = "0x31D7630", Offset = "0x31D5C30", VA = "0x1831D7630")]
	private void OnInitialDisplay(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6000604")]
	[Address(RVA = "0x31D58A0", Offset = "0x31D3EA0", VA = "0x1831D58A0")]
	private void EnsureVisibilityInParent()
	{
	}

	[Token(Token = "0x6000605")]
	[Address(RVA = "0x31D64B0", Offset = "0x31D4AB0", VA = "0x1831D64B0")]
	private float GetLargestItemWidth()
	{
		return default(float);
	}
}
