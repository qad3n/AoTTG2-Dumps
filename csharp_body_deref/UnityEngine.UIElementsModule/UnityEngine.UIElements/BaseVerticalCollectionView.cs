using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Profiling;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000052")]
public abstract class BaseVerticalCollectionView : BindableElement, ISerializationCallbackReceiver
{
	[Token(Token = "0x2000053")]
	public new class UxmlTraits : BindableElement.UxmlTraits
	{
		[Token(Token = "0x4000197")]
		[FieldOffset(Offset = "0x78")]
		private readonly UxmlEnumAttributeDescription<CollectionVirtualizationMethod> m_VirtualizationMethod;

		[Token(Token = "0x4000198")]
		[FieldOffset(Offset = "0x80")]
		private readonly UxmlIntAttributeDescription m_FixedItemHeight;

		[Token(Token = "0x4000199")]
		[FieldOffset(Offset = "0x88")]
		private readonly UxmlBoolAttributeDescription m_ShowBorder;

		[Token(Token = "0x400019A")]
		[FieldOffset(Offset = "0x90")]
		private readonly UxmlEnumAttributeDescription<SelectionType> m_SelectionType;

		[Token(Token = "0x400019B")]
		[FieldOffset(Offset = "0x98")]
		private readonly UxmlEnumAttributeDescription<AlternatingRowBackground> m_ShowAlternatingRowBackgrounds;

		[Token(Token = "0x400019C")]
		[FieldOffset(Offset = "0xA0")]
		private readonly UxmlBoolAttributeDescription m_Reorderable;

		[Token(Token = "0x400019D")]
		[FieldOffset(Offset = "0xA8")]
		private readonly UxmlBoolAttributeDescription m_HorizontalScrollingEnabled;

		[Token(Token = "0x6000321")]
		[Address(RVA = "0x4C072D0", Offset = "0x4C072D0", VA = "0x4C072D0")]
		public UxmlTraits()
		{
		}

		[Token(Token = "0x6000322")]
		[Address(RVA = "0x4C07720", Offset = "0x4C07720", VA = "0x4C07720", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}
	}

	[Token(Token = "0x400015D")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty itemsSourceProperty;

	[Token(Token = "0x400015E")]
	[FieldOffset(Offset = "0xA0")]
	internal static readonly DataBindingProperty selectionTypeProperty;

	[Token(Token = "0x400015F")]
	[FieldOffset(Offset = "0x140")]
	internal static readonly DataBindingProperty selectedItemProperty;

	[Token(Token = "0x4000160")]
	[FieldOffset(Offset = "0x1E0")]
	internal static readonly DataBindingProperty selectedItemsProperty;

	[Token(Token = "0x4000161")]
	[FieldOffset(Offset = "0x280")]
	internal static readonly DataBindingProperty selectedIndexProperty;

	[Token(Token = "0x4000162")]
	[FieldOffset(Offset = "0x320")]
	internal static readonly DataBindingProperty selectedIndicesProperty;

	[Token(Token = "0x4000163")]
	[FieldOffset(Offset = "0x3C0")]
	internal static readonly DataBindingProperty showBorderProperty;

	[Token(Token = "0x4000164")]
	[FieldOffset(Offset = "0x460")]
	internal static readonly DataBindingProperty reorderableProperty;

	[Token(Token = "0x4000165")]
	[FieldOffset(Offset = "0x500")]
	internal static readonly DataBindingProperty horizontalScrollingEnabledProperty;

	[Token(Token = "0x4000166")]
	[FieldOffset(Offset = "0x5A0")]
	internal static readonly DataBindingProperty showAlternatingRowBackgroundsProperty;

	[Token(Token = "0x4000167")]
	[FieldOffset(Offset = "0x640")]
	internal static readonly DataBindingProperty virtualizationMethodProperty;

	[Token(Token = "0x4000168")]
	[FieldOffset(Offset = "0x6E0")]
	internal static readonly DataBindingProperty fixedItemHeightProperty;

	[Token(Token = "0x4000169")]
	[FieldOffset(Offset = "0x780")]
	private static readonly ProfilerMarker k_RefreshMarker;

	[Token(Token = "0x400016A")]
	[FieldOffset(Offset = "0x788")]
	private static readonly ProfilerMarker k_RebuildMarker;

	[Token(Token = "0x400016B")]
	[FieldOffset(Offset = "0x3E8")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action<IEnumerable<object>> itemsChosen;

	[Token(Token = "0x400016C")]
	[FieldOffset(Offset = "0x3F0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action<IEnumerable<object>> selectionChanged;

	[Token(Token = "0x400016D")]
	[FieldOffset(Offset = "0x3F8")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action<IEnumerable<int>> selectedIndicesChanged;

	[Token(Token = "0x400016E")]
	[FieldOffset(Offset = "0x400")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action<int, int> itemIndexChanged;

	[Token(Token = "0x400016F")]
	[FieldOffset(Offset = "0x408")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action itemsSourceChanged;

	[Token(Token = "0x4000170")]
	[FieldOffset(Offset = "0x410")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action selectionNotChanged;

	[Token(Token = "0x4000171")]
	[FieldOffset(Offset = "0x418")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Func<CanStartDragArgs, bool> canStartDrag;

	[Token(Token = "0x4000172")]
	[FieldOffset(Offset = "0x420")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Func<SetupDragAndDropArgs, StartDragArgs> setupDragAndDrop;

	[Token(Token = "0x4000173")]
	[FieldOffset(Offset = "0x428")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Func<HandleDragAndDropArgs, DragVisualMode> dragAndDropUpdate;

	[Token(Token = "0x4000174")]
	[FieldOffset(Offset = "0x430")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Func<HandleDragAndDropArgs, DragVisualMode> handleDrop;

	[Token(Token = "0x4000175")]
	[FieldOffset(Offset = "0x438")]
	private SelectionType m_SelectionType;

	[Token(Token = "0x4000176")]
	[FieldOffset(Offset = "0x790")]
	private static readonly List<ReusableCollectionItem> k_EmptyItems;

	[Token(Token = "0x4000177")]
	[FieldOffset(Offset = "0x43C")]
	private bool m_HorizontalScrollingEnabled;

	[Token(Token = "0x4000178")]
	[FieldOffset(Offset = "0x440")]
	[DontCreateProperty]
	[SerializeField]
	private AlternatingRowBackground m_ShowAlternatingRowBackgrounds;

	[Token(Token = "0x4000179")]
	[FieldOffset(Offset = "0x798")]
	internal static readonly string k_InvalidTemplateError;

	[Token(Token = "0x400017A")]
	[FieldOffset(Offset = "0x7A0")]
	internal static readonly int s_DefaultItemHeight;

	[Token(Token = "0x400017B")]
	[FieldOffset(Offset = "0x444")]
	internal float m_FixedItemHeight;

	[Token(Token = "0x400017C")]
	[FieldOffset(Offset = "0x448")]
	internal bool m_ItemHeightIsInline;

	[Token(Token = "0x400017D")]
	[FieldOffset(Offset = "0x44C")]
	private CollectionVirtualizationMethod m_VirtualizationMethod;

	[Token(Token = "0x400017E")]
	[FieldOffset(Offset = "0x450")]
	private readonly ScrollView m_ScrollView;

	[Token(Token = "0x400017F")]
	[FieldOffset(Offset = "0x458")]
	private CollectionViewController m_ViewController;

	[Token(Token = "0x4000180")]
	[FieldOffset(Offset = "0x460")]
	private CollectionVirtualizationController m_VirtualizationController;

	[Token(Token = "0x4000181")]
	[FieldOffset(Offset = "0x468")]
	private KeyboardNavigationManipulator m_NavigationManipulator;

	[Token(Token = "0x4000182")]
	[FieldOffset(Offset = "0x470")]
	[SerializeField]
	[DontCreateProperty]
	internal SerializedVirtualizationData serializedVirtualizationData;

	[Token(Token = "0x4000183")]
	[FieldOffset(Offset = "0x478")]
	[SerializeField]
	[DontCreateProperty]
	private readonly List<int> m_SelectedIds;

	[Token(Token = "0x4000184")]
	[FieldOffset(Offset = "0x480")]
	private readonly List<int> m_SelectedIndices;

	[Token(Token = "0x4000185")]
	[FieldOffset(Offset = "0x488")]
	private readonly List<object> m_SelectedItems;

	[Token(Token = "0x4000186")]
	[FieldOffset(Offset = "0x490")]
	private float m_LastHeight;

	[Token(Token = "0x4000187")]
	[FieldOffset(Offset = "0x494")]
	private bool m_IsRangeSelectionDirectionUp;

	[Token(Token = "0x4000188")]
	[FieldOffset(Offset = "0x498")]
	private ListViewDragger m_Dragger;

	[Token(Token = "0x4000189")]
	[FieldOffset(Offset = "0x7A8")]
	internal static CustomStyleProperty<int> s_ItemHeightProperty;

	[Token(Token = "0x400018A")]
	[FieldOffset(Offset = "0x4A0")]
	private Action<int, int> m_ItemIndexChangedCallback;

	[Token(Token = "0x400018B")]
	[FieldOffset(Offset = "0x4A8")]
	private Action m_ItemsSourceChangedCallback;

	[Token(Token = "0x400018C")]
	[FieldOffset(Offset = "0x7B0")]
	public static readonly string ussClassName;

	[Token(Token = "0x400018D")]
	[FieldOffset(Offset = "0x7B8")]
	public static readonly string borderUssClassName;

	[Token(Token = "0x400018E")]
	[FieldOffset(Offset = "0x7C0")]
	public static readonly string itemUssClassName;

	[Token(Token = "0x400018F")]
	[FieldOffset(Offset = "0x7C8")]
	public static readonly string dragHoverBarUssClassName;

	[Token(Token = "0x4000190")]
	[FieldOffset(Offset = "0x7D0")]
	public static readonly string dragHoverMarkerUssClassName;

	[Token(Token = "0x4000191")]
	[FieldOffset(Offset = "0x7D8")]
	public static readonly string itemDragHoverUssClassName;

	[Token(Token = "0x4000192")]
	[FieldOffset(Offset = "0x7E0")]
	public static readonly string itemSelectedVariantUssClassName;

	[Token(Token = "0x4000193")]
	[FieldOffset(Offset = "0x7E8")]
	public static readonly string itemAlternativeBackgroundUssClassName;

	[Token(Token = "0x4000194")]
	[FieldOffset(Offset = "0x7F0")]
	public static readonly string listScrollViewUssClassName;

	[Token(Token = "0x4000195")]
	[FieldOffset(Offset = "0x7F8")]
	internal static readonly string backgroundFillUssClassName;

	[Token(Token = "0x4000196")]
	[FieldOffset(Offset = "0x4B0")]
	private Vector3 m_TouchDownPosition;

	[Token(Token = "0x17000070")]
	[CreateProperty]
	public IList itemsSource
	{
		[Token(Token = "0x60002C6")]
		[Address(RVA = "0x4BF4240", Offset = "0x4BF4240", VA = "0x4BF4240")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002C7")]
		[Address(RVA = "0x4C00290", Offset = "0x4C00290", VA = "0x4C00290")]
		set
		{
		}
	}

	[Token(Token = "0x17000071")]
	internal virtual bool sourceIncludesArraySize
	{
		[Token(Token = "0x60002C8")]
		[Address(RVA = "0x4C003E0", Offset = "0x4C003E0", VA = "0x4C003E0", Slot = "102")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000072")]
	public override VisualElement contentContainer
	{
		[Token(Token = "0x60002C9")]
		[Address(RVA = "0x4C003F0", Offset = "0x4C003F0", VA = "0x4C003F0", Slot = "97")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000073")]
	[CreateProperty]
	public SelectionType selectionType
	{
		[Token(Token = "0x60002CA")]
		[Address(RVA = "0x4C00400", Offset = "0x4C00400", VA = "0x4C00400")]
		get
		{
			return default(SelectionType);
		}
		[Token(Token = "0x60002CB")]
		[Address(RVA = "0x4C00410", Offset = "0x4C00410", VA = "0x4C00410")]
		set
		{
		}
	}

	[Token(Token = "0x17000074")]
	[CreateProperty(ReadOnly = true)]
	public object selectedItem
	{
		[Token(Token = "0x60002CC")]
		[Address(RVA = "0x4C00560", Offset = "0x4C00560", VA = "0x4C00560")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000075")]
	[CreateProperty(ReadOnly = true)]
	public IEnumerable<object> selectedItems
	{
		[Token(Token = "0x60002CD")]
		[Address(RVA = "0x4C005C0", Offset = "0x4C005C0", VA = "0x4C005C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000076")]
	[CreateProperty]
	public int selectedIndex
	{
		[Token(Token = "0x60002CE")]
		[Address(RVA = "0x4BFEDC0", Offset = "0x4BFEDC0", VA = "0x4BFEDC0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002CF")]
		[Address(RVA = "0x4C005D0", Offset = "0x4C005D0", VA = "0x4C005D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000077")]
	[CreateProperty(ReadOnly = true)]
	public IEnumerable<int> selectedIndices
	{
		[Token(Token = "0x60002D0")]
		[Address(RVA = "0x4C007D0", Offset = "0x4C007D0", VA = "0x4C007D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000078")]
	internal IEnumerable<int> selectedIds
	{
		[Token(Token = "0x60002D1")]
		[Address(RVA = "0x4C007E0", Offset = "0x4C007E0", VA = "0x4C007E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000079")]
	internal IEnumerable<ReusableCollectionItem> activeItems
	{
		[Token(Token = "0x60002D2")]
		[Address(RVA = "0x4C007F0", Offset = "0x4C007F0", VA = "0x4C007F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007A")]
	internal ScrollView scrollView
	{
		[Token(Token = "0x60002D3")]
		[Address(RVA = "0x4C00870", Offset = "0x4C00870", VA = "0x4C00870")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007B")]
	internal ListViewDragger dragger
	{
		[Token(Token = "0x60002D4")]
		[Address(RVA = "0x4C00880", Offset = "0x4C00880", VA = "0x4C00880")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007C")]
	internal CollectionVirtualizationController virtualizationController
	{
		[Token(Token = "0x60002D5")]
		[Address(RVA = "0x4C00890", Offset = "0x4C00890", VA = "0x4C00890")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007D")]
	public CollectionViewController viewController
	{
		[Token(Token = "0x60002D6")]
		[Address(RVA = "0x4C008F0", Offset = "0x4C008F0", VA = "0x4C008F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007E")]
	[CreateProperty]
	public bool showBorder
	{
		[Token(Token = "0x60002D8")]
		[Address(RVA = "0x4C00A00", Offset = "0x4C00A00", VA = "0x4C00A00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002D9")]
		[Address(RVA = "0x4C00A70", Offset = "0x4C00A70", VA = "0x4C00A70")]
		set
		{
		}
	}

	[Token(Token = "0x1700007F")]
	[CreateProperty]
	public bool reorderable
	{
		[Token(Token = "0x60002DA")]
		[Address(RVA = "0x4BEBFF0", Offset = "0x4BEBFF0", VA = "0x4BEBFF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002DB")]
		[Address(RVA = "0x4C00C20", Offset = "0x4C00C20", VA = "0x4C00C20")]
		set
		{
		}
	}

	[Token(Token = "0x17000080")]
	[CreateProperty]
	public bool horizontalScrollingEnabled
	{
		[Token(Token = "0x60002DC")]
		[Address(RVA = "0x4C00E70", Offset = "0x4C00E70", VA = "0x4C00E70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002DD")]
		[Address(RVA = "0x4C00E80", Offset = "0x4C00E80", VA = "0x4C00E80")]
		set
		{
		}
	}

	[Token(Token = "0x17000081")]
	[CreateProperty]
	public AlternatingRowBackground showAlternatingRowBackgrounds
	{
		[Token(Token = "0x60002DE")]
		[Address(RVA = "0x4C00F50", Offset = "0x4C00F50", VA = "0x4C00F50")]
		get
		{
			return default(AlternatingRowBackground);
		}
		[Token(Token = "0x60002DF")]
		[Address(RVA = "0x4C00F60", Offset = "0x4C00F60", VA = "0x4C00F60")]
		set
		{
		}
	}

	[Token(Token = "0x17000082")]
	[CreateProperty]
	public CollectionVirtualizationMethod virtualizationMethod
	{
		[Token(Token = "0x60002E0")]
		[Address(RVA = "0x4C01000", Offset = "0x4C01000", VA = "0x4C01000")]
		get
		{
			return default(CollectionVirtualizationMethod);
		}
		[Token(Token = "0x60002E1")]
		[Address(RVA = "0x4C01010", Offset = "0x4C01010", VA = "0x4C01010")]
		set
		{
		}
	}

	[Token(Token = "0x17000083")]
	[CreateProperty]
	public float fixedItemHeight
	{
		[Token(Token = "0x60002E2")]
		[Address(RVA = "0x4C010C0", Offset = "0x4C010C0", VA = "0x4C010C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002E3")]
		[Address(RVA = "0x4C010D0", Offset = "0x4C010D0", VA = "0x4C010D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000084")]
	internal float lastHeight
	{
		[Token(Token = "0x60002E4")]
		[Address(RVA = "0x4C01250", Offset = "0x4C01250", VA = "0x4C01250")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x4BFFFA0", Offset = "0x4BFFFA0", VA = "0x4BFFFA0")]
	internal bool HasCanStartDrag()
	{
		return default(bool);
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x4BFFFB0", Offset = "0x4BFFFB0", VA = "0x4BFFFB0")]
	internal bool RaiseCanStartDrag(ReusableCollectionItem item, IEnumerable<int> ids)
	{
		return default(bool);
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x4C00040", Offset = "0x4C00040", VA = "0x4C00040")]
	internal StartDragArgs RaiseSetupDragAndDrop(ReusableCollectionItem item, IEnumerable<int> ids, StartDragArgs args)
	{
		return default(StartDragArgs);
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x4C00190", Offset = "0x4C00190", VA = "0x4C00190")]
	internal DragVisualMode RaiseHandleDragAndDrop(Vector2 pointerPosition, DragAndDropArgs dragAndDropArgs)
	{
		return default(DragVisualMode);
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x4C00210", Offset = "0x4C00210", VA = "0x4C00210")]
	internal DragVisualMode RaiseDrop(Vector2 pointerPosition, DragAndDropArgs dragAndDropArgs)
	{
		return default(DragVisualMode);
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x4C00900", Offset = "0x4C00900", VA = "0x4C00900")]
	internal float ResolveItemHeight(float height = -1f)
	{
		return default(float);
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x4C01260", Offset = "0x4C01260", VA = "0x4C01260", Slot = "103")]
	private protected virtual void CreateVirtualizationController()
	{
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x4C008C0", Offset = "0x4C008C0", VA = "0x4C008C0")]
	internal CollectionVirtualizationController GetOrCreateVirtualizationController()
	{
		return null;
	}

	[Token(Token = "0x60002E7")]
	internal void CreateVirtualizationController<T>() where T : ReusableCollectionItem, new()
	{
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x4BFDDE0", Offset = "0x4BFDDE0", VA = "0x4BFDDE0")]
	internal CollectionViewController GetOrCreateViewController()
	{
		return null;
	}

	[Token(Token = "0x60002E9")]
	protected abstract CollectionViewController CreateViewController();

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x4BFBBF0", Offset = "0x4BFBBF0", VA = "0x4BFBBF0", Slot = "105")]
	public virtual void SetViewController(CollectionViewController controller)
	{
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x4C012A0", Offset = "0x4C012A0", VA = "0x4C012A0", Slot = "106")]
	internal virtual ListViewDragger CreateDragger()
	{
		return null;
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x4BFC090", Offset = "0x4BFC090", VA = "0x4BFC090")]
	internal void InitializeDragAndDropController(bool enableReordering)
	{
	}

	[Token(Token = "0x60002ED")]
	internal abstract ICollectionDragAndDropController CreateDragAndDropController();

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x4BFC520", Offset = "0x4BFC520", VA = "0x4BFC520")]
	public BaseVerticalCollectionView()
	{
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x4BFE4F0", Offset = "0x4BFE4F0", VA = "0x4BFE4F0")]
	public BaseVerticalCollectionView(IList itemsSource, float itemHeight = -1f)
	{
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x4C012F0", Offset = "0x4C012F0", VA = "0x4C012F0")]
	public VisualElement GetRootElementForId(int id)
	{
		return null;
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x4C01450", Offset = "0x4C01450", VA = "0x4C01450", Slot = "108")]
	internal virtual bool HasValidDataAndBindings()
	{
		return default(bool);
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x4C01480", Offset = "0x4C01480", VA = "0x4C01480")]
	private void OnItemIndexChanged(int srcIndex, int dstIndex)
	{
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x4C014B0", Offset = "0x4C014B0", VA = "0x4C014B0")]
	private void OnItemsSourceChanged()
	{
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x4BF0370", Offset = "0x4BF0370", VA = "0x4BF0370")]
	public void RefreshItems()
	{
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x4BFC200", Offset = "0x4BFC200", VA = "0x4BFC200")]
	public void Rebuild()
	{
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x4C014D0", Offset = "0x4C014D0", VA = "0x4C014D0")]
	private void RefreshSelection()
	{
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x4BFCBA0", Offset = "0x4BFCBA0", VA = "0x4BFCBA0", Slot = "109")]
	private protected virtual void PostRefresh()
	{
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x4BFB010", Offset = "0x4BFB010", VA = "0x4BFB010")]
	public void ScrollToItem(int index)
	{
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x4BFF220", Offset = "0x4BFF220", VA = "0x4BFF220")]
	public void ScrollToItemById(int id)
	{
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x4C018B0", Offset = "0x4C018B0", VA = "0x4C018B0")]
	private void OnScroll(Vector2 offset)
	{
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x4C01800", Offset = "0x4C01800", VA = "0x4C01800")]
	private void Resize(Vector2 size)
	{
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x4C01930", Offset = "0x4C01930", VA = "0x4C01930")]
	private void OnAttachToPanel(AttachToPanelEvent evt)
	{
	}

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x4C01C80", Offset = "0x4C01C80", VA = "0x4C01C80")]
	private void OnDetachFromPanel(DetachFromPanelEvent evt)
	{
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x4C01F40", Offset = "0x4C01F40", VA = "0x4C01F40")]
	private bool Apply(KeyboardNavigationOperation op, bool shiftKey, bool altKey)
	{
		return default(bool);
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x4C03010", Offset = "0x4C03010", VA = "0x4C03010")]
	private void Apply(KeyboardNavigationOperation op, EventBase sourceEvent)
	{
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x4C03260", Offset = "0x4C03260", VA = "0x4C03260", Slot = "110")]
	private protected virtual bool HandleItemNavigation(bool moveIn, bool altKey)
	{
		return default(bool);
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x4C03270", Offset = "0x4C03270", VA = "0x4C03270")]
	private void OnPointerMove(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x4C03E20", Offset = "0x4C03E20", VA = "0x4C03E20")]
	private void OnPointerDown(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x4C03EF0", Offset = "0x4C03EF0", VA = "0x4C03EF0")]
	private void OnPointerCancel(PointerCancelEvent evt)
	{
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x4C03F60", Offset = "0x4C03F60", VA = "0x4C03F60")]
	private void OnPointerUp(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x4C039F0", Offset = "0x4C039F0", VA = "0x4C039F0")]
	private void ProcessPointerDown(IPointerEvent evt)
	{
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x4C032F0", Offset = "0x4C032F0", VA = "0x4C032F0")]
	private void ProcessPointerUp(IPointerEvent evt)
	{
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x4C04030", Offset = "0x4C04030", VA = "0x4C04030")]
	private void DoSelect(Vector2 localPosition, int clickCount, bool actionKey, bool shiftKey)
	{
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x4C049E0", Offset = "0x4C049E0", VA = "0x4C049E0")]
	internal void DoRangeSelection(int rangeSelectionFinalIndex)
	{
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x4C04860", Offset = "0x4C04860", VA = "0x4C04860")]
	private void ProcessSingleClick(int clickedIndex)
	{
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x4C026E0", Offset = "0x4C026E0", VA = "0x4C026E0")]
	internal void SelectAll()
	{
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x4C04970", Offset = "0x4C04970", VA = "0x4C04970")]
	public void AddToSelection(int index)
	{
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x4C04FC0", Offset = "0x4C04FC0", VA = "0x4C04FC0")]
	internal void AddToSelection(IList<int> indexes)
	{
	}

	[Token(Token = "0x600030D")]
	[Address(RVA = "0x4C05450", Offset = "0x4C05450", VA = "0x4C05450")]
	private void AddToSelectionWithoutValidation(int index)
	{
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x4C048E0", Offset = "0x4C048E0", VA = "0x4C048E0")]
	public void RemoveFromSelection(int index)
	{
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x4C05A30", Offset = "0x4C05A30", VA = "0x4C05A30")]
	private void RemoveFromSelectionWithoutValidation(int index)
	{
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x4BFAF90", Offset = "0x4BFAF90", VA = "0x4BFAF90")]
	public void SetSelection(int index)
	{
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x4C05F30", Offset = "0x4C05F30", VA = "0x4C05F30")]
	public void SetSelection(IEnumerable<int> indices)
	{
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x4C05F40", Offset = "0x4C05F40", VA = "0x4C05F40")]
	public void SetSelectionWithoutNotify(IEnumerable<int> indices)
	{
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x4BFF390", Offset = "0x4BFF390", VA = "0x4BFF390")]
	internal void SetSelectionInternal(IEnumerable<int> indices, bool sendNotification)
	{
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x4C05F50", Offset = "0x4C05F50", VA = "0x4C05F50")]
	private bool MatchesExistingSelection(IEnumerable<int> indices)
	{
		return default(bool);
	}

	[Token(Token = "0x6000315")]
	[Address(RVA = "0x4C053F0", Offset = "0x4C053F0", VA = "0x4C053F0")]
	private void NotifyOfSelectionChange()
	{
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x4BFB380", Offset = "0x4BFB380", VA = "0x4BFB380")]
	public void ClearSelection()
	{
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x4C04B70", Offset = "0x4C04B70", VA = "0x4C04B70")]
	private void ClearSelectionWithoutValidation()
	{
	}

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x4BFE630", Offset = "0x4BFE630", VA = "0x4BFE630", Slot = "94")]
	internal override void OnViewDataReady()
	{
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x4C06190", Offset = "0x4C06190", VA = "0x4C06190", Slot = "10")]
	[EventInterest(new Type[]
	{
		typeof(PointerUpEvent),
		typeof(FocusEvent),
		typeof(NavigationSubmitEvent),
		typeof(BlurEvent)
	})]
	protected override void ExecuteDefaultAction(EventBase evt)
	{
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x4C064D0", Offset = "0x4C064D0", VA = "0x4C064D0")]
	private void OnSizeChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x4C06680", Offset = "0x4C06680", VA = "0x4C06680")]
	private void OnCustomStyleResolved(CustomStyleResolvedEvent e)
	{
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x4C06820", Offset = "0x4C06820", VA = "0x4C06820", Slot = "100")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnBeforeSerialize()
	{
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x4C06830", Offset = "0x4C06830", VA = "0x4C06830", Slot = "101")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnAfterDeserialize()
	{
	}
}
