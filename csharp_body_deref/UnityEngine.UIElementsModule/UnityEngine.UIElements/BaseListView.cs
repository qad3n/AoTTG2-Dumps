using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000044")]
public abstract class BaseListView : BaseVerticalCollectionView
{
	[Token(Token = "0x2000045")]
	public new class UxmlTraits : BaseVerticalCollectionView.UxmlTraits
	{
		[Token(Token = "0x4000107")]
		[FieldOffset(Offset = "0xB0")]
		private readonly UxmlBoolAttributeDescription m_ShowFoldoutHeader;

		[Token(Token = "0x4000108")]
		[FieldOffset(Offset = "0xB8")]
		private readonly UxmlStringAttributeDescription m_HeaderTitle;

		[Token(Token = "0x4000109")]
		[FieldOffset(Offset = "0xC0")]
		private readonly UxmlBoolAttributeDescription m_ShowAddRemoveFooter;

		[Token(Token = "0x400010A")]
		[FieldOffset(Offset = "0xC8")]
		private readonly UxmlEnumAttributeDescription<ListViewReorderMode> m_ReorderMode;

		[Token(Token = "0x400010B")]
		[FieldOffset(Offset = "0xD0")]
		private readonly UxmlBoolAttributeDescription m_ShowBoundCollectionSize;

		[Token(Token = "0x6000245")]
		[Address(RVA = "0x4BFD630", Offset = "0x4BFD630", VA = "0x4BFD630", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000246")]
		[Address(RVA = "0x4BFD9C0", Offset = "0x4BFD9C0", VA = "0x4BFD9C0")]
		protected UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40000DD")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty showBoundCollectionSizeProperty;

	[Token(Token = "0x40000DE")]
	[FieldOffset(Offset = "0xA0")]
	internal static readonly DataBindingProperty showFoldoutHeaderProperty;

	[Token(Token = "0x40000DF")]
	[FieldOffset(Offset = "0x140")]
	internal static readonly DataBindingProperty headerTitleProperty;

	[Token(Token = "0x40000E0")]
	[FieldOffset(Offset = "0x1E0")]
	internal static readonly DataBindingProperty showAddRemoveFooterProperty;

	[Token(Token = "0x40000E1")]
	[FieldOffset(Offset = "0x280")]
	internal static readonly DataBindingProperty reorderModeProperty;

	[Token(Token = "0x40000E2")]
	[FieldOffset(Offset = "0x4BC")]
	private bool m_ShowBoundCollectionSize;

	[Token(Token = "0x40000E3")]
	[FieldOffset(Offset = "0x4BD")]
	private bool m_ShowFoldoutHeader;

	[Token(Token = "0x40000E4")]
	[FieldOffset(Offset = "0x4C0")]
	private string m_HeaderTitle;

	[Token(Token = "0x40000E5")]
	[FieldOffset(Offset = "0x4C8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<IEnumerable<int>> itemsAdded;

	[Token(Token = "0x40000E6")]
	[FieldOffset(Offset = "0x4D0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<IEnumerable<int>> itemsRemoved;

	[Token(Token = "0x40000E7")]
	[FieldOffset(Offset = "0x4D8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action itemsSourceSizeChanged;

	[Token(Token = "0x40000E8")]
	[FieldOffset(Offset = "0x4E0")]
	private Label m_ListViewLabel;

	[Token(Token = "0x40000E9")]
	[FieldOffset(Offset = "0x4E8")]
	private Foldout m_Foldout;

	[Token(Token = "0x40000EA")]
	[FieldOffset(Offset = "0x4F0")]
	private TextField m_ArraySizeField;

	[Token(Token = "0x40000EB")]
	[FieldOffset(Offset = "0x4F8")]
	private bool m_IsOverMultiEditLimit;

	[Token(Token = "0x40000EC")]
	[FieldOffset(Offset = "0x500")]
	private VisualElement m_Footer;

	[Token(Token = "0x40000ED")]
	[FieldOffset(Offset = "0x508")]
	private Button m_AddButton;

	[Token(Token = "0x40000EE")]
	[FieldOffset(Offset = "0x510")]
	private Button m_RemoveButton;

	[Token(Token = "0x40000EF")]
	[FieldOffset(Offset = "0x518")]
	private Action<IEnumerable<int>> m_ItemAddedCallback;

	[Token(Token = "0x40000F0")]
	[FieldOffset(Offset = "0x520")]
	private Action<IEnumerable<int>> m_ItemRemovedCallback;

	[Token(Token = "0x40000F1")]
	[FieldOffset(Offset = "0x528")]
	private Action m_ItemsSourceSizeChangedCallback;

	[Token(Token = "0x40000F2")]
	[FieldOffset(Offset = "0x530")]
	private ListViewReorderMode m_ReorderMode;

	[Token(Token = "0x40000F4")]
	[FieldOffset(Offset = "0x320")]
	public new static readonly string ussClassName;

	[Token(Token = "0x40000F5")]
	[FieldOffset(Offset = "0x328")]
	public new static readonly string itemUssClassName;

	[Token(Token = "0x40000F6")]
	[FieldOffset(Offset = "0x330")]
	public static readonly string emptyLabelUssClassName;

	[Token(Token = "0x40000F7")]
	[FieldOffset(Offset = "0x338")]
	public static readonly string overMaxMultiEditLimitClassName;

	[Token(Token = "0x40000F8")]
	[FieldOffset(Offset = "0x340")]
	public static readonly string reorderableUssClassName;

	[Token(Token = "0x40000F9")]
	[FieldOffset(Offset = "0x348")]
	public static readonly string reorderableItemUssClassName;

	[Token(Token = "0x40000FA")]
	[FieldOffset(Offset = "0x350")]
	public static readonly string reorderableItemContainerUssClassName;

	[Token(Token = "0x40000FB")]
	[FieldOffset(Offset = "0x358")]
	public static readonly string reorderableItemHandleUssClassName;

	[Token(Token = "0x40000FC")]
	[FieldOffset(Offset = "0x360")]
	public static readonly string reorderableItemHandleBarUssClassName;

	[Token(Token = "0x40000FD")]
	[FieldOffset(Offset = "0x368")]
	public static readonly string footerUssClassName;

	[Token(Token = "0x40000FE")]
	[FieldOffset(Offset = "0x370")]
	public static readonly string foldoutHeaderUssClassName;

	[Token(Token = "0x40000FF")]
	[FieldOffset(Offset = "0x378")]
	public static readonly string arraySizeFieldUssClassName;

	[Token(Token = "0x4000100")]
	[FieldOffset(Offset = "0x380")]
	public static readonly string listViewWithHeaderUssClassName;

	[Token(Token = "0x4000101")]
	[FieldOffset(Offset = "0x388")]
	public static readonly string listViewWithFooterUssClassName;

	[Token(Token = "0x4000102")]
	[FieldOffset(Offset = "0x390")]
	public static readonly string scrollViewWithFooterUssClassName;

	[Token(Token = "0x4000103")]
	[FieldOffset(Offset = "0x398")]
	public static readonly string footerAddButtonName;

	[Token(Token = "0x4000104")]
	[FieldOffset(Offset = "0x3A0")]
	public static readonly string footerRemoveButtonName;

	[Token(Token = "0x4000105")]
	[FieldOffset(Offset = "0x540")]
	private string m_MaxMultiEditStr;

	[Token(Token = "0x4000106")]
	[FieldOffset(Offset = "0x3A8")]
	private static readonly string k_EmptyListStr;

	[Token(Token = "0x17000052")]
	[CreateProperty]
	public bool showBoundCollectionSize
	{
		[Token(Token = "0x6000223")]
		[Address(RVA = "0x4BF95A0", Offset = "0x4BF95A0", VA = "0x4BF95A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000224")]
		[Address(RVA = "0x4BF95B0", Offset = "0x4BF95B0", VA = "0x4BF95B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000053")]
	internal override bool sourceIncludesArraySize
	{
		[Token(Token = "0x6000225")]
		[Address(RVA = "0x4BF9890", Offset = "0x4BF9890", VA = "0x4BF9890", Slot = "102")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000054")]
	[CreateProperty]
	public bool showFoldoutHeader
	{
		[Token(Token = "0x6000226")]
		[Address(RVA = "0x4BF98C0", Offset = "0x4BF98C0", VA = "0x4BF98C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000227")]
		[Address(RVA = "0x4BF98D0", Offset = "0x4BF98D0", VA = "0x4BF98D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000055")]
	[CreateProperty]
	public string headerTitle
	{
		[Token(Token = "0x6000229")]
		[Address(RVA = "0x4BFA5C0", Offset = "0x4BFA5C0", VA = "0x4BFA5C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600022A")]
		[Address(RVA = "0x4BFA5D0", Offset = "0x4BFA5D0", VA = "0x4BFA5D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000056")]
	[CreateProperty]
	public bool showAddRemoveFooter
	{
		[Token(Token = "0x600022B")]
		[Address(RVA = "0x4BFA080", Offset = "0x4BFA080", VA = "0x4BFA080")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600022C")]
		[Address(RVA = "0x4BFA6A0", Offset = "0x4BFA6A0", VA = "0x4BFA6A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000057")]
	internal VisualElement footer
	{
		[Token(Token = "0x6000234")]
		[Address(RVA = "0x4BFB430", Offset = "0x4BFB430", VA = "0x4BFB430")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000058")]
	public new BaseListViewController viewController
	{
		[Token(Token = "0x6000235")]
		[Address(RVA = "0x4BFA7C0", Offset = "0x4BFA7C0", VA = "0x4BFA7C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000059")]
	[CreateProperty]
	public ListViewReorderMode reorderMode
	{
		[Token(Token = "0x600023D")]
		[Address(RVA = "0x4BFBFB0", Offset = "0x4BFBFB0", VA = "0x4BFBFB0")]
		get
		{
			return default(ListViewReorderMode);
		}
		[Token(Token = "0x600023E")]
		[Address(RVA = "0x4BFBFC0", Offset = "0x4BFBFC0", VA = "0x4BFBFC0")]
		set
		{
		}
	}

	[Token(Token = "0x1400000C")]
	internal event Action reorderModeChanged
	{
		[Token(Token = "0x600023B")]
		[Address(RVA = "0x4BF4C50", Offset = "0x4BF4C50", VA = "0x4BF4C50")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600023C")]
		[Address(RVA = "0x4BF4EB0", Offset = "0x4BF4EB0", VA = "0x4BF4EB0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000228")]
	[Address(RVA = "0x4BF9670", Offset = "0x4BF9670", VA = "0x4BF9670")]
	private void SetupArraySizeField()
	{
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x4BFA090", Offset = "0x4BFA090", VA = "0x4BFA090")]
	private void EnableFooter(bool enabled)
	{
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x4BFA740", Offset = "0x4BFA740", VA = "0x4BFA740")]
	private void AddItems(int itemCount)
	{
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x4BFA830", Offset = "0x4BFA830", VA = "0x4BFA830")]
	private void OnArraySizeFieldChanged(ChangeEvent<string> evt)
	{
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x4BFA4A0", Offset = "0x4BFA4A0", VA = "0x4BFA4A0")]
	internal void UpdateArraySizeField()
	{
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x4BF9D60", Offset = "0x4BF9D60", VA = "0x4BF9D60")]
	internal void UpdateListViewLabel()
	{
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x4BFABA0", Offset = "0x4BFABA0", VA = "0x4BFABA0")]
	private void OnAddClicked()
	{
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x4BFB080", Offset = "0x4BFB080", VA = "0x4BFB080")]
	private void OnRemoveClicked()
	{
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x4BFB440", Offset = "0x4BFB440", VA = "0x4BFB440", Slot = "103")]
	private protected override void CreateVirtualizationController()
	{
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x4BFB480", Offset = "0x4BFB480", VA = "0x4BFB480", Slot = "105")]
	public override void SetViewController(CollectionViewController controller)
	{
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x4BFBEF0", Offset = "0x4BFBEF0", VA = "0x4BFBEF0")]
	private void OnItemAdded(IEnumerable<int> indices)
	{
	}

	[Token(Token = "0x6000239")]
	[Address(RVA = "0x4BFBF10", Offset = "0x4BFBF10", VA = "0x4BFBF10")]
	private void OnItemsRemoved(IEnumerable<int> indices)
	{
	}

	[Token(Token = "0x600023A")]
	[Address(RVA = "0x4BFBF30", Offset = "0x4BFBF30", VA = "0x4BFBF30")]
	private void OnItemsSourceSizeChanged()
	{
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x4BFC3A0", Offset = "0x4BFC3A0", VA = "0x4BFC3A0", Slot = "106")]
	internal override ListViewDragger CreateDragger()
	{
		return null;
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x4BFC430", Offset = "0x4BFC430", VA = "0x4BFC430", Slot = "107")]
	internal override ICollectionDragAndDropController CreateDragAndDropController()
	{
		return null;
	}

	[Token(Token = "0x6000241")]
	[Address(RVA = "0x4BFC480", Offset = "0x4BFC480", VA = "0x4BFC480")]
	public BaseListView()
	{
	}

	[Token(Token = "0x6000242")]
	[Address(RVA = "0x4BFCB80", Offset = "0x4BFCB80", VA = "0x4BFCB80", Slot = "109")]
	private protected override void PostRefresh()
	{
	}
}
