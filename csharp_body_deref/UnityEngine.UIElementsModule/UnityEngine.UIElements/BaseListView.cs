// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BaseListView
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6AA5C90", Offset = "0x6AA4C90", VA = "0x6AA5C90", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x60003D3")]
		[Address(RVA = "0x6AA6510", Offset = "0x6AA5510", VA = "0x6AA6510")]
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
	[FieldOffset(Offset = "0x3C4")]
	private bool m_ShowBoundCollectionSize;

	[Token(Token = "0x40001BB")]
	[FieldOffset(Offset = "0x3C5")]
	private bool m_ShowFoldoutHeader;

	[Token(Token = "0x40001BC")]
	[FieldOffset(Offset = "0x3C8")]
	private string m_HeaderTitle;

	[Token(Token = "0x40001BD")]
	[FieldOffset(Offset = "0x3D0")]
	private VisualElement drawnHeader;

	[Token(Token = "0x40001BE")]
	[FieldOffset(Offset = "0x3D8")]
	private Func<VisualElement> m_MakeHeader;

	[Token(Token = "0x40001BF")]
	[FieldOffset(Offset = "0x3E0")]
	private VisualElement drawnFooter;

	[Token(Token = "0x40001C0")]
	[FieldOffset(Offset = "0x3E8")]
	private Func<VisualElement> m_MakeFooter;

	[Token(Token = "0x40001C1")]
	[FieldOffset(Offset = "0x3F0")]
	private bool m_ShowAddRemoveFooter;

	[Token(Token = "0x40001C2")]
	[FieldOffset(Offset = "0x3F8")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action<IEnumerable<int>> itemsAdded;

	[Token(Token = "0x40001C3")]
	[FieldOffset(Offset = "0x400")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action<IEnumerable<int>> itemsRemoved;

	[Token(Token = "0x40001C4")]
	[FieldOffset(Offset = "0x408")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action itemsSourceSizeChanged;

	[Token(Token = "0x40001C5")]
	[FieldOffset(Offset = "0x410")]
	private IVisualElementScheduledItem m_TrackedItem;

	[Token(Token = "0x40001C6")]
	[FieldOffset(Offset = "0x418")]
	private Action m_TrackCount;

	[Token(Token = "0x40001C7")]
	[FieldOffset(Offset = "0x420")]
	private Func<bool> m_WhileAutoAssign;

	[Token(Token = "0x40001C8")]
	[FieldOffset(Offset = "0x428")]
	private BindingSourceSelectionMode m_BindingSourceSelectionMode;

	[Token(Token = "0x40001C9")]
	[FieldOffset(Offset = "0x430")]
	private Label m_ListViewLabel;

	[Token(Token = "0x40001CA")]
	[FieldOffset(Offset = "0x438")]
	private Foldout m_Foldout;

	[Token(Token = "0x40001CB")]
	[FieldOffset(Offset = "0x440")]
	private TextField m_ArraySizeField;

	[Token(Token = "0x40001CC")]
	[FieldOffset(Offset = "0x448")]
	private bool m_IsOverMultiEditLimit;

	[Token(Token = "0x40001CD")]
	[FieldOffset(Offset = "0x450")]
	private VisualElement m_Footer;

	[Token(Token = "0x40001CE")]
	[FieldOffset(Offset = "0x458")]
	private Button m_AddButton;

	[Token(Token = "0x40001CF")]
	[FieldOffset(Offset = "0x460")]
	private Button m_RemoveButton;

	[Token(Token = "0x40001D0")]
	[FieldOffset(Offset = "0x468")]
	private Action<IEnumerable<int>> m_ItemAddedCallback;

	[Token(Token = "0x40001D1")]
	[FieldOffset(Offset = "0x470")]
	private Action<IEnumerable<int>> m_ItemRemovedCallback;

	[Token(Token = "0x40001D2")]
	[FieldOffset(Offset = "0x478")]
	private Action m_ItemsSourceSizeChangedCallback;

	[Token(Token = "0x40001D3")]
	[FieldOffset(Offset = "0x480")]
	private ListViewReorderMode m_ReorderMode;

	[Token(Token = "0x40001D4")]
	[FieldOffset(Offset = "0x488")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action m_reorderModeChanged;

	[Token(Token = "0x40001D5")]
	[FieldOffset(Offset = "0x490")]
	private VisualElement m_NoneElement;

	[Token(Token = "0x40001D6")]
	[FieldOffset(Offset = "0x498")]
	private Func<VisualElement> m_MakeNoneElement;

	[Token(Token = "0x40001D7")]
	[FieldOffset(Offset = "0x4A0")]
	private bool m_AllowAdd;

	[Token(Token = "0x40001D8")]
	[FieldOffset(Offset = "0x4A8")]
	private Action<BaseListView, Button> m_OverridingAddButtonBehavior;

	[Token(Token = "0x40001D9")]
	[FieldOffset(Offset = "0x4B0")]
	private Action<BaseListView> m_OnAdd;

	[Token(Token = "0x40001DA")]
	[FieldOffset(Offset = "0x4B8")]
	private bool m_AllowRemove;

	[Token(Token = "0x40001DB")]
	[FieldOffset(Offset = "0x4C0")]
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
	[FieldOffset(Offset = "0x4C8")]
	private string m_MaxMultiEditStr;

	[Token(Token = "0x40001F0")]
	[FieldOffset(Offset = "0x8F0")]
	private static readonly string k_EmptyListStr;

	[Token(Token = "0x17000098")]
	[CreateProperty]
	public bool showBoundCollectionSize
	{
		[Token(Token = "0x6000394")]
		[Address(RVA = "0x6AA0230", Offset = "0x6A9F230", VA = "0x6AA0230")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000395")]
		[Address(RVA = "0x6AA0240", Offset = "0x6A9F240", VA = "0x6AA0240")]
		set
		{
		}
	}

	[Token(Token = "0x17000099")]
	[CreateProperty]
	public bool showFoldoutHeader
	{
		[Token(Token = "0x6000396")]
		[Address(RVA = "0x6AA0660", Offset = "0x6A9F660", VA = "0x6AA0660")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000397")]
		[Address(RVA = "0x6AA0670", Offset = "0x6A9F670", VA = "0x6AA0670")]
		set
		{
		}
	}

	[Token(Token = "0x1700009A")]
	[CreateProperty]
	public string headerTitle
	{
		[Token(Token = "0x600039B")]
		[Address(RVA = "0x6AA1550", Offset = "0x6AA0550", VA = "0x6AA1550")]
		get
		{
			return null;
		}
		[Token(Token = "0x600039C")]
		[Address(RVA = "0x6AA1560", Offset = "0x6AA0560", VA = "0x6AA1560")]
		set
		{
		}
	}

	[Token(Token = "0x1700009B")]
	[CreateProperty]
	public Func<VisualElement> makeHeader
	{
		[Token(Token = "0x600039D")]
		[Address(RVA = "0x6AA1620", Offset = "0x6AA0620", VA = "0x6AA1620")]
		get
		{
			return null;
		}
		[Token(Token = "0x600039E")]
		[Address(RVA = "0x6AA1630", Offset = "0x6AA0630", VA = "0x6AA1630")]
		set
		{
		}
	}

	[Token(Token = "0x1700009C")]
	[CreateProperty]
	public Func<VisualElement> makeFooter
	{
		[Token(Token = "0x600039F")]
		[Address(RVA = "0x6AA18D0", Offset = "0x6AA08D0", VA = "0x6AA18D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003A0")]
		[Address(RVA = "0x6AA18E0", Offset = "0x6AA08E0", VA = "0x6AA18E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700009D")]
	[CreateProperty]
	public bool showAddRemoveFooter
	{
		[Token(Token = "0x60003A1")]
		[Address(RVA = "0x6AA0F50", Offset = "0x6A9FF50", VA = "0x6AA0F50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003A2")]
		[Address(RVA = "0x6AA1B40", Offset = "0x6AA0B40", VA = "0x6AA1B40")]
		set
		{
		}
	}

	[Token(Token = "0x1700009E")]
	private IVisualElementScheduledItem trackItemCount
	{
		[Token(Token = "0x60003A4")]
		[Address(RVA = "0x6AA1CF0", Offset = "0x6AA0CF0", VA = "0x6AA1CF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009F")]
	private Action trackCount
	{
		[Token(Token = "0x60003A5")]
		[Address(RVA = "0x6AA1F90", Offset = "0x6AA0F90", VA = "0x6AA1F90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A0")]
	private Func<bool> untilManualBindingSourceSelectionMode
	{
		[Token(Token = "0x60003A6")]
		[Address(RVA = "0x6AA2020", Offset = "0x6AA1020", VA = "0x6AA2020")]
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
		[Address(RVA = "0x6AA20B0", Offset = "0x6AA10B0", VA = "0x6AA20B0")]
		get
		{
			return default(BindingSourceSelectionMode);
		}
		[Token(Token = "0x60003A8")]
		[Address(RVA = "0x6AA20C0", Offset = "0x6AA10C0", VA = "0x6AA20C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A2")]
	internal bool autoAssignSource
	{
		[Token(Token = "0x60003A9")]
		[Address(RVA = "0x6A99C50", Offset = "0x6A98C50", VA = "0x6A99C50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A3")]
	internal VisualElement footer
	{
		[Token(Token = "0x60003B2")]
		[Address(RVA = "0x6AA3510", Offset = "0x6AA2510", VA = "0x6AA3510")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A4")]
	public new BaseListViewController viewController
	{
		[Token(Token = "0x60003B3")]
		[Address(RVA = "0x6AA2830", Offset = "0x6AA1830", VA = "0x6AA2830")]
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
		[Address(RVA = "0x6AA3CA0", Offset = "0x6AA2CA0", VA = "0x6AA3CA0")]
		get
		{
			return default(ListViewReorderMode);
		}
		[Token(Token = "0x60003BC")]
		[Address(RVA = "0x6AA3CB0", Offset = "0x6AA2CB0", VA = "0x6AA3CB0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A6")]
	[CreateProperty]
	public Func<VisualElement> makeNoneElement
	{
		[Token(Token = "0x60003BD")]
		[Address(RVA = "0x6AA3ED0", Offset = "0x6AA2ED0", VA = "0x6AA3ED0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003BE")]
		[Address(RVA = "0x6AA3EE0", Offset = "0x6AA2EE0", VA = "0x6AA3EE0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A7")]
	[CreateProperty]
	public bool allowAdd
	{
		[Token(Token = "0x60003BF")]
		[Address(RVA = "0x6AA3FB0", Offset = "0x6AA2FB0", VA = "0x6AA3FB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003C0")]
		[Address(RVA = "0x6AA3FC0", Offset = "0x6AA2FC0", VA = "0x6AA3FC0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A8")]
	[CreateProperty]
	public Action<BaseListView, Button> overridingAddButtonBehavior
	{
		[Token(Token = "0x60003C1")]
		[Address(RVA = "0x6AA4060", Offset = "0x6AA3060", VA = "0x6AA4060")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003C2")]
		[Address(RVA = "0x6AA4070", Offset = "0x6AA3070", VA = "0x6AA4070")]
		set
		{
		}
	}

	[Token(Token = "0x170000A9")]
	[CreateProperty]
	public Action<BaseListView> onAdd
	{
		[Token(Token = "0x60003C3")]
		[Address(RVA = "0x6AA4110", Offset = "0x6AA3110", VA = "0x6AA4110")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003C4")]
		[Address(RVA = "0x6AA4120", Offset = "0x6AA3120", VA = "0x6AA4120")]
		set
		{
		}
	}

	[Token(Token = "0x170000AA")]
	[CreateProperty]
	public bool allowRemove
	{
		[Token(Token = "0x60003C5")]
		[Address(RVA = "0x6AA41C0", Offset = "0x6AA31C0", VA = "0x6AA41C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003C6")]
		[Address(RVA = "0x6AA41D0", Offset = "0x6AA31D0", VA = "0x6AA41D0")]
		set
		{
		}
	}

	[Token(Token = "0x170000AB")]
	[CreateProperty]
	public Action<BaseListView> onRemove
	{
		[Token(Token = "0x60003C7")]
		[Address(RVA = "0x6AA42D0", Offset = "0x6AA32D0", VA = "0x6AA42D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003C8")]
		[Address(RVA = "0x6AA42E0", Offset = "0x6AA32E0", VA = "0x6AA42E0")]
		set
		{
		}
	}

	[Token(Token = "0x14000010")]
	internal event Action reorderModeChanged
	{
		[Token(Token = "0x60003B9")]
		[Address(RVA = "0x6A9A920", Offset = "0x6A99920", VA = "0x6A9A920")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60003BA")]
		[Address(RVA = "0x6A9AB20", Offset = "0x6A99B20", VA = "0x6A9AB20")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000398")]
	[Address(RVA = "0x6AA0970", Offset = "0x6A9F970", VA = "0x6AA0970")]
	private void AddFoldout()
	{
	}

	[Token(Token = "0x6000399")]
	[Address(RVA = "0x6AA0B00", Offset = "0x6A9FB00", VA = "0x6AA0B00")]
	private void RemoveFoldout()
	{
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x6AA02D0", Offset = "0x6A9F2D0", VA = "0x6AA02D0")]
	internal void SetupArraySizeField()
	{
	}

	[Token(Token = "0x60003A3")]
	[Address(RVA = "0x6AA0F60", Offset = "0x6A9FF60", VA = "0x6AA0F60")]
	private void EnableFooter(bool enabled)
	{
	}

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x6AA2410", Offset = "0x6AA1410", VA = "0x6AA2410")]
	private void AddItems(int itemCount)
	{
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x6AA2510", Offset = "0x6AA1510", VA = "0x6AA2510")]
	private void OnArraySizeFieldChanged(ChangeEvent<string> evt)
	{
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x6AA1C50", Offset = "0x6AA0C50", VA = "0x6AA1C50")]
	private void UpdateRemoveButton()
	{
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x6AA1430", Offset = "0x6AA0430", VA = "0x6AA1430")]
	internal void UpdateArraySizeField()
	{
	}

	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x6AA0B60", Offset = "0x6A9FB60", VA = "0x6AA0B60")]
	internal void UpdateListViewLabel()
	{
	}

	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x6AA28A0", Offset = "0x6AA18A0", VA = "0x6AA28A0")]
	private void OnAddClicked()
	{
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x6AA2CB0", Offset = "0x6AA1CB0", VA = "0x6AA2CB0")]
	private void OnAfterAddClicked(int itemsCountPreCallback)
	{
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x6AA30F0", Offset = "0x6AA20F0", VA = "0x6AA30F0")]
	private void OnRemoveClicked()
	{
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x6AA3520", Offset = "0x6AA2520", VA = "0x6AA3520", Slot = "145")]
	private protected override void CreateVirtualizationController()
	{
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x6AA3560", Offset = "0x6AA2560", VA = "0x6AA3560", Slot = "147")]
	public override void SetViewController(CollectionViewController controller)
	{
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x6AA3C60", Offset = "0x6AA2C60", VA = "0x6AA3C60")]
	private void OnItemAdded(IEnumerable<int> indices)
	{
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x6AA3C80", Offset = "0x6AA2C80", VA = "0x6AA3C80")]
	private void OnItemsRemoved(IEnumerable<int> indices)
	{
	}

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x6AA2F20", Offset = "0x6AA1F20", VA = "0x6AA2F20")]
	private void OnItemsSourceSizeChanged()
	{
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x6AA4380", Offset = "0x6AA3380", VA = "0x6AA4380", Slot = "148")]
	internal override ListViewDragger CreateDragger()
	{
		return null;
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x6AA4410", Offset = "0x6AA3410", VA = "0x6AA4410", Slot = "149")]
	internal override ICollectionDragAndDropController CreateDragAndDropController()
	{
		return null;
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x6AA4460", Offset = "0x6AA3460", VA = "0x6AA4460")]
	public BaseListView()
	{
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x6AA4470", Offset = "0x6AA3470", VA = "0x6AA4470")]
	public BaseListView(IList itemsSource, float itemHeight = -1f)
	{
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x6AA46B0", Offset = "0x6AA36B0", VA = "0x6AA46B0", Slot = "151")]
	private protected override void PostRefresh()
	{
	}

	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x6AA48B0", Offset = "0x6AA38B0", VA = "0x6AA48B0", Slot = "152")]
	private protected override bool HandleItemNavigation(bool moveIn, bool altPressed)
	{
		return default(bool);
	}
}
