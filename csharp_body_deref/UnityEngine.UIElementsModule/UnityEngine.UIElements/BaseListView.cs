// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BaseListView
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000077")]
public abstract class BaseListView : BaseVerticalCollectionView
{
	[Token(Token = "0x2000078")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : BaseVerticalCollectionView.UxmlTraits
	{
		[Token(Token = "0x40001F1")]
		[FieldOffset(Offset = "0xC8")]
		private readonly UxmlBoolAttributeDescription m_ShowFoldoutHeader;

		[Token(Token = "0x40001F2")]
		[FieldOffset(Offset = "0xD0")]
		private readonly UxmlStringAttributeDescription m_HeaderTitle;

		[Token(Token = "0x40001F3")]
		[FieldOffset(Offset = "0xD8")]
		private readonly UxmlBoolAttributeDescription m_ShowAddRemoveFooter;

		[Token(Token = "0x40001F4")]
		[FieldOffset(Offset = "0xE0")]
		private readonly UxmlBoolAttributeDescription m_AllowAdd;

		[Token(Token = "0x40001F5")]
		[FieldOffset(Offset = "0xE8")]
		private readonly UxmlBoolAttributeDescription m_AllowRemove;

		[Token(Token = "0x40001F6")]
		[FieldOffset(Offset = "0xF0")]
		private readonly UxmlEnumAttributeDescription<ListViewReorderMode> m_ReorderMode;

		[Token(Token = "0x40001F7")]
		[FieldOffset(Offset = "0xF8")]
		private readonly UxmlBoolAttributeDescription m_ShowBoundCollectionSize;

		[Token(Token = "0x40001F8")]
		[FieldOffset(Offset = "0x100")]
		private readonly UxmlEnumAttributeDescription<BindingSourceSelectionMode> m_BindingSourceSelectionMode;

		[Token(Token = "0x60003D2")]
		[Address(RVA = "0x30B43C0", Offset = "0x30B29C0", VA = "0x1830B43C0", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60003D3")]
		[Address(RVA = "0x30B52A0", Offset = "0x30B38A0", VA = "0x1830B52A0")]
		protected UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40001AB")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string k_SizeFieldLabel;

	[Token(Token = "0x40001AC")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly BindingId showBoundCollectionSizeProperty;

	[Token(Token = "0x40001AD")]
	[FieldOffset(Offset = "0xA0")]
	internal static readonly BindingId showFoldoutHeaderProperty;

	[Token(Token = "0x40001AE")]
	[FieldOffset(Offset = "0x138")]
	internal static readonly BindingId headerTitleProperty;

	[Token(Token = "0x40001AF")]
	[FieldOffset(Offset = "0x1D0")]
	internal static readonly BindingId makeHeaderProperty;

	[Token(Token = "0x40001B0")]
	[FieldOffset(Offset = "0x268")]
	internal static readonly BindingId makeFooterProperty;

	[Token(Token = "0x40001B1")]
	[FieldOffset(Offset = "0x300")]
	internal static readonly BindingId showAddRemoveFooterProperty;

	[Token(Token = "0x40001B2")]
	[FieldOffset(Offset = "0x398")]
	internal static readonly BindingId bindingSourceSelectionModeProperty;

	[Token(Token = "0x40001B3")]
	[FieldOffset(Offset = "0x430")]
	internal static readonly BindingId reorderModeProperty;

	[Token(Token = "0x40001B4")]
	[FieldOffset(Offset = "0x4C8")]
	internal static readonly BindingId makeNoneElementProperty;

	[Token(Token = "0x40001B5")]
	[FieldOffset(Offset = "0x560")]
	internal static readonly BindingId allowAddProperty;

	[Token(Token = "0x40001B6")]
	[FieldOffset(Offset = "0x5F8")]
	internal static readonly BindingId overridingAddButtonBehaviorProperty;

	[Token(Token = "0x40001B7")]
	[FieldOffset(Offset = "0x690")]
	internal static readonly BindingId onAddProperty;

	[Token(Token = "0x40001B8")]
	[FieldOffset(Offset = "0x728")]
	internal static readonly BindingId allowRemoveProperty;

	[Token(Token = "0x40001B9")]
	[FieldOffset(Offset = "0x7C0")]
	internal static readonly BindingId onRemoveProperty;

	[Token(Token = "0x40001BA")]
	[FieldOffset(Offset = "0x3C8")]
	private bool m_ShowBoundCollectionSize;

	[Token(Token = "0x40001BB")]
	[FieldOffset(Offset = "0x3C9")]
	private bool m_ShowFoldoutHeader;

	[Token(Token = "0x40001BC")]
	[FieldOffset(Offset = "0x3D0")]
	private string m_HeaderTitle;

	[Token(Token = "0x40001BD")]
	[FieldOffset(Offset = "0x3D8")]
	private VisualElement drawnHeader;

	[Token(Token = "0x40001BE")]
	[FieldOffset(Offset = "0x3E0")]
	private Func<VisualElement> m_MakeHeader;

	[Token(Token = "0x40001BF")]
	[FieldOffset(Offset = "0x3E8")]
	private VisualElement drawnFooter;

	[Token(Token = "0x40001C0")]
	[FieldOffset(Offset = "0x3F0")]
	private Func<VisualElement> m_MakeFooter;

	[Token(Token = "0x40001C1")]
	[FieldOffset(Offset = "0x3F8")]
	private bool m_ShowAddRemoveFooter;

	[Token(Token = "0x40001C2")]
	[FieldOffset(Offset = "0x400")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<IEnumerable<int>> itemsAdded;

	[Token(Token = "0x40001C3")]
	[FieldOffset(Offset = "0x408")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<IEnumerable<int>> itemsRemoved;

	[Token(Token = "0x40001C4")]
	[FieldOffset(Offset = "0x410")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action itemsSourceSizeChanged;

	[Token(Token = "0x40001C5")]
	[FieldOffset(Offset = "0x418")]
	private IVisualElementScheduledItem m_TrackedItem;

	[Token(Token = "0x40001C6")]
	[FieldOffset(Offset = "0x420")]
	private Action m_TrackCount;

	[Token(Token = "0x40001C7")]
	[FieldOffset(Offset = "0x428")]
	private Func<bool> m_WhileAutoAssign;

	[Token(Token = "0x40001C8")]
	[FieldOffset(Offset = "0x430")]
	private BindingSourceSelectionMode m_BindingSourceSelectionMode;

	[Token(Token = "0x40001C9")]
	[FieldOffset(Offset = "0x438")]
	private Label m_ListViewLabel;

	[Token(Token = "0x40001CA")]
	[FieldOffset(Offset = "0x440")]
	private Foldout m_Foldout;

	[Token(Token = "0x40001CB")]
	[FieldOffset(Offset = "0x448")]
	private TextField m_ArraySizeField;

	[Token(Token = "0x40001CC")]
	[FieldOffset(Offset = "0x450")]
	private bool m_IsOverMultiEditLimit;

	[Token(Token = "0x40001CD")]
	[FieldOffset(Offset = "0x458")]
	private VisualElement m_Footer;

	[Token(Token = "0x40001CE")]
	[FieldOffset(Offset = "0x460")]
	private Button m_AddButton;

	[Token(Token = "0x40001CF")]
	[FieldOffset(Offset = "0x468")]
	private Button m_RemoveButton;

	[Token(Token = "0x40001D0")]
	[FieldOffset(Offset = "0x470")]
	private Action<IEnumerable<int>> m_ItemAddedCallback;

	[Token(Token = "0x40001D1")]
	[FieldOffset(Offset = "0x478")]
	private Action<IEnumerable<int>> m_ItemRemovedCallback;

	[Token(Token = "0x40001D2")]
	[FieldOffset(Offset = "0x480")]
	private Action m_ItemsSourceSizeChangedCallback;

	[Token(Token = "0x40001D3")]
	[FieldOffset(Offset = "0x488")]
	private ListViewReorderMode m_ReorderMode;

	[Token(Token = "0x40001D4")]
	[FieldOffset(Offset = "0x490")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action m_reorderModeChanged;

	[Token(Token = "0x40001D5")]
	[FieldOffset(Offset = "0x498")]
	private VisualElement m_NoneElement;

	[Token(Token = "0x40001D6")]
	[FieldOffset(Offset = "0x4A0")]
	private Func<VisualElement> m_MakeNoneElement;

	[Token(Token = "0x40001D7")]
	[FieldOffset(Offset = "0x4A8")]
	private bool m_AllowAdd;

	[Token(Token = "0x40001D8")]
	[FieldOffset(Offset = "0x4B0")]
	private Action<BaseListView, Button> m_OverridingAddButtonBehavior;

	[Token(Token = "0x40001D9")]
	[FieldOffset(Offset = "0x4B8")]
	private Action<BaseListView> m_OnAdd;

	[Token(Token = "0x40001DA")]
	[FieldOffset(Offset = "0x4C0")]
	private bool m_AllowRemove;

	[Token(Token = "0x40001DB")]
	[FieldOffset(Offset = "0x4C8")]
	private Action<BaseListView> m_OnRemove;

	[Token(Token = "0x40001DC")]
	[FieldOffset(Offset = "0x858")]
	public new static readonly string ussClassName;

	[Token(Token = "0x40001DD")]
	[FieldOffset(Offset = "0x860")]
	public new static readonly string itemUssClassName;

	[Token(Token = "0x40001DE")]
	[FieldOffset(Offset = "0x868")]
	public static readonly string emptyLabelUssClassName;

	[Token(Token = "0x40001DF")]
	[FieldOffset(Offset = "0x870")]
	public static readonly string overMaxMultiEditLimitClassName;

	[Token(Token = "0x40001E0")]
	[FieldOffset(Offset = "0x878")]
	public static readonly string reorderableUssClassName;

	[Token(Token = "0x40001E1")]
	[FieldOffset(Offset = "0x880")]
	public static readonly string reorderableItemUssClassName;

	[Token(Token = "0x40001E2")]
	[FieldOffset(Offset = "0x888")]
	public static readonly string reorderableItemContainerUssClassName;

	[Token(Token = "0x40001E3")]
	[FieldOffset(Offset = "0x890")]
	public static readonly string reorderableItemHandleUssClassName;

	[Token(Token = "0x40001E4")]
	[FieldOffset(Offset = "0x898")]
	public static readonly string reorderableItemHandleBarUssClassName;

	[Token(Token = "0x40001E5")]
	[FieldOffset(Offset = "0x8A0")]
	public static readonly string footerUssClassName;

	[Token(Token = "0x40001E6")]
	[FieldOffset(Offset = "0x8A8")]
	public static readonly string foldoutHeaderUssClassName;

	[Token(Token = "0x40001E7")]
	[FieldOffset(Offset = "0x8B0")]
	public static readonly string arraySizeFieldUssClassName;

	[Token(Token = "0x40001E8")]
	[FieldOffset(Offset = "0x8B8")]
	public static readonly string arraySizeFieldWithHeaderUssClassName;

	[Token(Token = "0x40001E9")]
	[FieldOffset(Offset = "0x8C0")]
	public static readonly string arraySizeFieldWithFooterUssClassName;

	[Token(Token = "0x40001EA")]
	[FieldOffset(Offset = "0x8C8")]
	public static readonly string listViewWithHeaderUssClassName;

	[Token(Token = "0x40001EB")]
	[FieldOffset(Offset = "0x8D0")]
	public static readonly string listViewWithFooterUssClassName;

	[Token(Token = "0x40001EC")]
	[FieldOffset(Offset = "0x8D8")]
	public static readonly string scrollViewWithFooterUssClassName;

	[Token(Token = "0x40001ED")]
	[FieldOffset(Offset = "0x8E0")]
	public static readonly string footerAddButtonName;

	[Token(Token = "0x40001EE")]
	[FieldOffset(Offset = "0x8E8")]
	public static readonly string footerRemoveButtonName;

	[Token(Token = "0x40001EF")]
	[FieldOffset(Offset = "0x4D0")]
	private string m_MaxMultiEditStr;

	[Token(Token = "0x40001F0")]
	[FieldOffset(Offset = "0x8F0")]
	private static readonly string k_EmptyListStr;

	[Token(Token = "0x17000098")]
	[CreateProperty]
	public bool showBoundCollectionSize
	{
		[Token(Token = "0x6000394")]
		[Address(RVA = "0x30A2550", Offset = "0x30A0B50", VA = "0x1830A2550")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000395")]
		[Address(RVA = "0x30A3650", Offset = "0x30A1C50", VA = "0x1830A3650")]
		set
		{
		}
	}

	[Token(Token = "0x17000099")]
	[CreateProperty]
	public bool showFoldoutHeader
	{
		[Token(Token = "0x6000396")]
		[Address(RVA = "0x30A2560", Offset = "0x30A0B60", VA = "0x1830A2560")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000397")]
		[Address(RVA = "0x30A36E0", Offset = "0x30A1CE0", VA = "0x1830A36E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700009A")]
	[CreateProperty]
	public string headerTitle
	{
		[Token(Token = "0x600039B")]
		[Address(RVA = "0x30A24C0", Offset = "0x30A0AC0", VA = "0x1830A24C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600039C")]
		[Address(RVA = "0x30A2BC0", Offset = "0x30A11C0", VA = "0x1830A2BC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700009B")]
	[CreateProperty]
	public Func<VisualElement> makeHeader
	{
		[Token(Token = "0x600039D")]
		[Address(RVA = "0x30A24E0", Offset = "0x30A0AE0", VA = "0x1830A24E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600039E")]
		[Address(RVA = "0x30A2EE0", Offset = "0x30A14E0", VA = "0x1830A2EE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700009C")]
	[CreateProperty]
	public Func<VisualElement> makeFooter
	{
		[Token(Token = "0x600039F")]
		[Address(RVA = "0x30A24D0", Offset = "0x30A0AD0", VA = "0x1830A24D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003A0")]
		[Address(RVA = "0x30A2C90", Offset = "0x30A1290", VA = "0x1830A2C90")]
		set
		{
		}
	}

	[Token(Token = "0x1700009D")]
	[CreateProperty]
	public bool showAddRemoveFooter
	{
		[Token(Token = "0x60003A1")]
		[Address(RVA = "0x30A2540", Offset = "0x30A0B40", VA = "0x1830A2540")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003A2")]
		[Address(RVA = "0x30A3540", Offset = "0x30A1B40", VA = "0x1830A3540")]
		set
		{
		}
	}

	[Token(Token = "0x1700009E")]
	private IVisualElementScheduledItem trackItemCount
	{
		[Token(Token = "0x60003A4")]
		[Address(RVA = "0x30A2600", Offset = "0x30A0C00", VA = "0x1830A2600")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009F")]
	private Action trackCount
	{
		[Token(Token = "0x60003A5")]
		[Address(RVA = "0x30A2570", Offset = "0x30A0B70", VA = "0x1830A2570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A0")]
	private Func<bool> untilManualBindingSourceSelectionMode
	{
		[Token(Token = "0x60003A6")]
		[Address(RVA = "0x30A2810", Offset = "0x30A0E10", VA = "0x1830A2810")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A1")]
	[CreateProperty]
	public BindingSourceSelectionMode bindingSourceSelectionMode
	{
		[Token(Token = "0x60003A7")]
		[Address(RVA = "0x30A24A0", Offset = "0x30A0AA0", VA = "0x1830A24A0")]
		get
		{
			return default(BindingSourceSelectionMode);
		}
		[Token(Token = "0x60003A8")]
		[Address(RVA = "0x30A2AF0", Offset = "0x30A10F0", VA = "0x1830A2AF0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A2")]
	internal bool autoAssignSource
	{
		[Token(Token = "0x60003A9")]
		[Address(RVA = "0x30A2490", Offset = "0x30A0A90", VA = "0x1830A2490")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A3")]
	internal VisualElement footer
	{
		[Token(Token = "0x60003B2")]
		[Address(RVA = "0x30A24B0", Offset = "0x30A0AB0", VA = "0x1830A24B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A4")]
	public new BaseListViewController viewController
	{
		[Token(Token = "0x60003B3")]
		[Address(RVA = "0x30A28A0", Offset = "0x30A0EA0", VA = "0x1830A28A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A5")]
	[CreateProperty]
	public ListViewReorderMode reorderMode
	{
		[Token(Token = "0x60003BB")]
		[Address(RVA = "0x30A2530", Offset = "0x30A0B30", VA = "0x1830A2530")]
		get
		{
			return default(ListViewReorderMode);
		}
		[Token(Token = "0x60003BC")]
		[Address(RVA = "0x30A3480", Offset = "0x30A1A80", VA = "0x1830A3480")]
		set
		{
		}
	}

	[Token(Token = "0x170000A6")]
	[CreateProperty]
	public Func<VisualElement> makeNoneElement
	{
		[Token(Token = "0x60003BD")]
		[Address(RVA = "0x30A24F0", Offset = "0x30A0AF0", VA = "0x1830A24F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003BE")]
		[Address(RVA = "0x30A3190", Offset = "0x30A1790", VA = "0x1830A3190")]
		set
		{
		}
	}

	[Token(Token = "0x170000A7")]
	[CreateProperty]
	public bool allowAdd
	{
		[Token(Token = "0x60003BF")]
		[Address(RVA = "0x30A2470", Offset = "0x30A0A70", VA = "0x1830A2470")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003C0")]
		[Address(RVA = "0x30A29C0", Offset = "0x30A0FC0", VA = "0x1830A29C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A8")]
	[CreateProperty]
	public Action<BaseListView, Button> overridingAddButtonBehavior
	{
		[Token(Token = "0x60003C1")]
		[Address(RVA = "0x30A2520", Offset = "0x30A0B20", VA = "0x1830A2520")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003C2")]
		[Address(RVA = "0x30A33D0", Offset = "0x30A19D0", VA = "0x1830A33D0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A9")]
	[CreateProperty]
	public Action<BaseListView> onAdd
	{
		[Token(Token = "0x60003C3")]
		[Address(RVA = "0x30A2500", Offset = "0x30A0B00", VA = "0x1830A2500")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003C4")]
		[Address(RVA = "0x30A3270", Offset = "0x30A1870", VA = "0x1830A3270")]
		set
		{
		}
	}

	[Token(Token = "0x170000AA")]
	[CreateProperty]
	public bool allowRemove
	{
		[Token(Token = "0x60003C5")]
		[Address(RVA = "0x30A2480", Offset = "0x30A0A80", VA = "0x1830A2480")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003C6")]
		[Address(RVA = "0x30A2A60", Offset = "0x30A1060", VA = "0x1830A2A60")]
		set
		{
		}
	}

	[Token(Token = "0x170000AB")]
	[CreateProperty]
	public Action<BaseListView> onRemove
	{
		[Token(Token = "0x60003C7")]
		[Address(RVA = "0x30A2510", Offset = "0x30A0B10", VA = "0x1830A2510")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003C8")]
		[Address(RVA = "0x30A3320", Offset = "0x30A1920", VA = "0x1830A3320")]
		set
		{
		}
	}

	[Token(Token = "0x14000010")]
	internal event Action reorderModeChanged
	{
		[Token(Token = "0x60003B9")]
		[Address(RVA = "0x30A23D0", Offset = "0x30A09D0", VA = "0x1830A23D0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60003BA")]
		[Address(RVA = "0x30A2920", Offset = "0x30A0F20", VA = "0x1830A2920")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000398")]
	[Address(RVA = "0x309EB40", Offset = "0x309D140", VA = "0x18309EB40")]
	private void AddFoldout()
	{
	}

	[Token(Token = "0x6000399")]
	[Address(RVA = "0x30A01D0", Offset = "0x309E7D0", VA = "0x1830A01D0")]
	private void RemoveFoldout()
	{
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x30A0490", Offset = "0x309EA90", VA = "0x1830A0490")]
	internal void SetupArraySizeField()
	{
	}

	[Token(Token = "0x60003A3")]
	[Address(RVA = "0x309EEF0", Offset = "0x309D4F0", VA = "0x18309EEF0")]
	private void EnableFooter(bool enabled)
	{
	}

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x309ECF0", Offset = "0x309D2F0", VA = "0x18309ECF0")]
	private void AddItems(int itemCount)
	{
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x309FB90", Offset = "0x309E190", VA = "0x18309FB90")]
	private void OnArraySizeFieldChanged(ChangeEvent<string> evt)
	{
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x30A0DD0", Offset = "0x309F3D0", VA = "0x1830A0DD0")]
	private void UpdateRemoveButton()
	{
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x30A0900", Offset = "0x309EF00", VA = "0x1830A0900")]
	internal void UpdateArraySizeField()
	{
	}

	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x30A09F0", Offset = "0x309EFF0", VA = "0x1830A09F0")]
	internal void UpdateListViewLabel()
	{
	}

	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x309F690", Offset = "0x309DC90", VA = "0x18309F690")]
	private void OnAddClicked()
	{
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x309F9E0", Offset = "0x309DFE0", VA = "0x18309F9E0")]
	private void OnAfterAddClicked(int itemsCountPreCallback)
	{
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x309FE90", Offset = "0x309E490", VA = "0x18309FE90")]
	private void OnRemoveClicked()
	{
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x309EEB0", Offset = "0x309D4B0", VA = "0x18309EEB0", Slot = "145")]
	private protected override void CreateVirtualizationController()
	{
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x30A0240", Offset = "0x309E840", VA = "0x1830A0240", Slot = "147")]
	public override void SetViewController(CollectionViewController controller)
	{
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x309FDD0", Offset = "0x309E3D0", VA = "0x18309FDD0")]
	private void OnItemAdded(IEnumerable<int> indices)
	{
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x309FDF0", Offset = "0x309E3F0", VA = "0x18309FDF0")]
	private void OnItemsRemoved(IEnumerable<int> indices)
	{
	}

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x309FE10", Offset = "0x309E410", VA = "0x18309FE10")]
	private void OnItemsSourceSizeChanged()
	{
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x309EE10", Offset = "0x309D410", VA = "0x18309EE10", Slot = "148")]
	internal override ListViewDragger CreateDragger()
	{
		return null;
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x309EDB0", Offset = "0x309D3B0", VA = "0x18309EDB0", Slot = "149")]
	internal override ICollectionDragAndDropController CreateDragAndDropController()
	{
		return null;
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x30A20F0", Offset = "0x30A06F0", VA = "0x1830A20F0")]
	public BaseListView()
	{
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x30A2110", Offset = "0x30A0710", VA = "0x1830A2110")]
	public BaseListView(IList itemsSource, float itemHeight = -1f)
	{
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x30A0080", Offset = "0x309E680", VA = "0x1830A0080", Slot = "151")]
	private protected override void PostRefresh()
	{
	}

	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x309F350", Offset = "0x309D950", VA = "0x18309F350", Slot = "152")]
	private protected override bool HandleItemNavigation(bool moveIn, bool altPressed)
	{
		return default(bool);
	}
}
