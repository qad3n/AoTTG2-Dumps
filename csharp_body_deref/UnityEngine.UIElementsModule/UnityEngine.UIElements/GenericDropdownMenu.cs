// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.GenericDropdownMenu
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000096")]
public class GenericDropdownMenu : IGenericMenu
{
	[Token(Token = "0x2000097")]
	internal class MenuItem
	{
		[Token(Token = "0x400025C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public string name;

		[Token(Token = "0x400025D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public VisualElement element;

		[Token(Token = "0x400025E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action action;

		[Token(Token = "0x400025F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Action<object> actionUserData;

		[Token(Token = "0x600042B")]
		[Address(RVA = "0x4F3DE00", Offset = "0x4F3DE00", VA = "0x4F3DE00")]
		public MenuItem()
		{
		}
	}

	[Token(Token = "0x400024A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly string ussClassName;

	[Token(Token = "0x400024B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly string itemUssClassName;

	[Token(Token = "0x400024C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static readonly string labelUssClassName;

	[Token(Token = "0x400024D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public static readonly string containerInnerUssClassName;

	[Token(Token = "0x400024E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public static readonly string containerOuterUssClassName;

	[Token(Token = "0x400024F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public static readonly string checkmarkUssClassName;

	[Token(Token = "0x4000250")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public static readonly string separatorUssClassName;

	[Token(Token = "0x4000251")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private List<MenuItem> m_Items;

	[Token(Token = "0x4000252")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private VisualElement m_MenuContainer;

	[Token(Token = "0x4000253")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private VisualElement m_OuterContainer;

	[Token(Token = "0x4000254")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private ScrollView m_ScrollView;

	[Token(Token = "0x4000255")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private VisualElement m_PanelRootVisualContainer;

	[Token(Token = "0x4000256")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private VisualElement m_TargetElement;

	[Token(Token = "0x4000257")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Rect m_DesiredRect;

	[Token(Token = "0x4000258")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private KeyboardNavigationManipulator m_NavigationManipulator;

	[Token(Token = "0x400025B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	private Vector2 m_MousePosition;

	[Token(Token = "0x17000093")]
	internal bool isSingleSelectionDropdown
	{
		[Token(Token = "0x600040D")]
		[Address(RVA = "0x4F3C4F0", Offset = "0x4F3C4F0", VA = "0x4F3C4F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600040E")]
		[Address(RVA = "0x4F3C500", Offset = "0x4F3C500", VA = "0x4F3C500")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000094")]
	internal bool closeOnParentResize
	{
		[Token(Token = "0x600040F")]
		[Address(RVA = "0x4F3C510", Offset = "0x4F3C510", VA = "0x4F3C510")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000410")]
		[Address(RVA = "0x4F3C520", Offset = "0x4F3C520", VA = "0x4F3C520")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000095")]
	public VisualElement contentContainer
	{
		[Token(Token = "0x6000411")]
		[Address(RVA = "0x4F3C530", Offset = "0x4F3C530", VA = "0x4F3C530")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x4F39B70", Offset = "0x4F39B70", VA = "0x4F39B70")]
	public GenericDropdownMenu()
	{
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x4F3C560", Offset = "0x4F3C560", VA = "0x4F3C560")]
	private void OnAttachToPanel(AttachToPanelEvent evt)
	{
	}

	[Token(Token = "0x6000414")]
	[Address(RVA = "0x4F3C970", Offset = "0x4F3C970", VA = "0x4F3C970")]
	private void OnDetachFromPanel(DetachFromPanelEvent evt)
	{
	}

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x4F3CD00", Offset = "0x4F3CD00", VA = "0x4F3CD00")]
	private void Hide(bool giveFocusBack = false)
	{
	}

	[Token(Token = "0x6000416")]
	[Address(RVA = "0x4F3CE00", Offset = "0x4F3CE00", VA = "0x4F3CE00")]
	private void Apply(KeyboardNavigationOperation op, EventBase sourceEvent)
	{
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x4F3CE30", Offset = "0x4F3CE30", VA = "0x4F3CE30")]
	private bool Apply(KeyboardNavigationOperation op)
	{
		return default(bool);
	}

	[Token(Token = "0x6000418")]
	[Address(RVA = "0x4F3D1B0", Offset = "0x4F3D1B0", VA = "0x4F3D1B0")]
	private void OnPointerDown(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x4F3D3E0", Offset = "0x4F3D3E0", VA = "0x4F3D3E0")]
	private void OnPointerMove(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x4F3D4D0", Offset = "0x4F3D4D0", VA = "0x4F3D4D0")]
	private void OnPointerUp(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x600041B")]
	[Address(RVA = "0x4F3D630", Offset = "0x4F3D630", VA = "0x4F3D630")]
	private void OnFocusOut(FocusOutEvent evt)
	{
	}

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x4F3D790", Offset = "0x4F3D790", VA = "0x4F3D790")]
	private void OnParentResized(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x4F3D2A0", Offset = "0x4F3D2A0", VA = "0x4F3D2A0")]
	private void UpdateSelection(VisualElement target)
	{
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x4F3D7B0", Offset = "0x4F3D7B0", VA = "0x4F3D7B0")]
	private void ChangeSelectedIndex(int newIndex, int previousIndex)
	{
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x4F3CFC0", Offset = "0x4F3CFC0", VA = "0x4F3CFC0")]
	private int GetSelectedIndex()
	{
		return default(int);
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x4F3D8E0", Offset = "0x4F3D8E0", VA = "0x4F3D8E0", Slot = "4")]
	public void AddItem(string itemName, bool isChecked, Action action)
	{
	}

	[Token(Token = "0x6000421")]
	[Address(RVA = "0x4F3DC70", Offset = "0x4F3DC70", VA = "0x4F3DC70", Slot = "5")]
	public void AddItem(string itemName, bool isChecked, Action<object> action, object data)
	{
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x4F3DCA0", Offset = "0x4F3DCA0", VA = "0x4F3DCA0", Slot = "7")]
	public void AddSeparator(string path)
	{
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x4F3D910", Offset = "0x4F3D910", VA = "0x4F3D910")]
	private MenuItem AddItem(string itemName, bool isChecked, bool isEnabled, [Optional] object data)
	{
		return null;
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x4F3DE10", Offset = "0x4F3DE10", VA = "0x4F3DE10", Slot = "6")]
	public void DropDown(Rect position, [Optional] VisualElement targetElement, bool anchored = false)
	{
	}

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x4F3EEE0", Offset = "0x4F3EEE0", VA = "0x4F3EEE0")]
	private void OnTargetElementDetachFromPanel(DetachFromPanelEvent evt)
	{
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x4F3EEF0", Offset = "0x4F3EEF0", VA = "0x4F3EEF0")]
	private void OnContainerGeometryChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x4F3E830", Offset = "0x4F3E830", VA = "0x4F3E830")]
	private void EnsureVisibilityInParent()
	{
	}
}
