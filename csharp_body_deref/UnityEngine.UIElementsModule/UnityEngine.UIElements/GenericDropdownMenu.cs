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
		[Address(RVA = "0x4C164D0", Offset = "0x4C164D0", VA = "0x4C164D0")]
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
		[Address(RVA = "0x4C14BC0", Offset = "0x4C14BC0", VA = "0x4C14BC0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600040E")]
		[Address(RVA = "0x4C14BD0", Offset = "0x4C14BD0", VA = "0x4C14BD0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000094")]
	internal bool closeOnParentResize
	{
		[Token(Token = "0x600040F")]
		[Address(RVA = "0x4C14BE0", Offset = "0x4C14BE0", VA = "0x4C14BE0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000410")]
		[Address(RVA = "0x4C14BF0", Offset = "0x4C14BF0", VA = "0x4C14BF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000095")]
	public VisualElement contentContainer
	{
		[Token(Token = "0x6000411")]
		[Address(RVA = "0x4C14C00", Offset = "0x4C14C00", VA = "0x4C14C00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x4C12240", Offset = "0x4C12240", VA = "0x4C12240")]
	public GenericDropdownMenu()
	{
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x4C14C30", Offset = "0x4C14C30", VA = "0x4C14C30")]
	private void OnAttachToPanel(AttachToPanelEvent evt)
	{
	}

	[Token(Token = "0x6000414")]
	[Address(RVA = "0x4C15040", Offset = "0x4C15040", VA = "0x4C15040")]
	private void OnDetachFromPanel(DetachFromPanelEvent evt)
	{
	}

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x4C153D0", Offset = "0x4C153D0", VA = "0x4C153D0")]
	private void Hide(bool giveFocusBack = false)
	{
	}

	[Token(Token = "0x6000416")]
	[Address(RVA = "0x4C154D0", Offset = "0x4C154D0", VA = "0x4C154D0")]
	private void Apply(KeyboardNavigationOperation op, EventBase sourceEvent)
	{
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x4C15500", Offset = "0x4C15500", VA = "0x4C15500")]
	private bool Apply(KeyboardNavigationOperation op)
	{
		return default(bool);
	}

	[Token(Token = "0x6000418")]
	[Address(RVA = "0x4C15880", Offset = "0x4C15880", VA = "0x4C15880")]
	private void OnPointerDown(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x4C15AB0", Offset = "0x4C15AB0", VA = "0x4C15AB0")]
	private void OnPointerMove(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x4C15BA0", Offset = "0x4C15BA0", VA = "0x4C15BA0")]
	private void OnPointerUp(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x600041B")]
	[Address(RVA = "0x4C15D00", Offset = "0x4C15D00", VA = "0x4C15D00")]
	private void OnFocusOut(FocusOutEvent evt)
	{
	}

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x4C15E60", Offset = "0x4C15E60", VA = "0x4C15E60")]
	private void OnParentResized(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x4C15970", Offset = "0x4C15970", VA = "0x4C15970")]
	private void UpdateSelection(VisualElement target)
	{
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x4C15E80", Offset = "0x4C15E80", VA = "0x4C15E80")]
	private void ChangeSelectedIndex(int newIndex, int previousIndex)
	{
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x4C15690", Offset = "0x4C15690", VA = "0x4C15690")]
	private int GetSelectedIndex()
	{
		return default(int);
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x4C15FB0", Offset = "0x4C15FB0", VA = "0x4C15FB0", Slot = "4")]
	public void AddItem(string itemName, bool isChecked, Action action)
	{
	}

	[Token(Token = "0x6000421")]
	[Address(RVA = "0x4C16340", Offset = "0x4C16340", VA = "0x4C16340", Slot = "5")]
	public void AddItem(string itemName, bool isChecked, Action<object> action, object data)
	{
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x4C16370", Offset = "0x4C16370", VA = "0x4C16370", Slot = "7")]
	public void AddSeparator(string path)
	{
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x4C15FE0", Offset = "0x4C15FE0", VA = "0x4C15FE0")]
	private MenuItem AddItem(string itemName, bool isChecked, bool isEnabled, [Optional] object data)
	{
		return null;
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x4C164E0", Offset = "0x4C164E0", VA = "0x4C164E0", Slot = "6")]
	public void DropDown(Rect position, [Optional] VisualElement targetElement, bool anchored = false)
	{
	}

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x4C175B0", Offset = "0x4C175B0", VA = "0x4C175B0")]
	private void OnTargetElementDetachFromPanel(DetachFromPanelEvent evt)
	{
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x4C175C0", Offset = "0x4C175C0", VA = "0x4C175C0")]
	private void OnContainerGeometryChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x4C16F00", Offset = "0x4C16F00", VA = "0x4C16F00")]
	private void EnsureVisibilityInParent()
	{
	}
}
