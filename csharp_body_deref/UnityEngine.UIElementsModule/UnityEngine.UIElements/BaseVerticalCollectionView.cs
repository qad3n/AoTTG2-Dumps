// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BaseVerticalCollectionView
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
		[Address(RVA = "0x4F2EC00", Offset = "0x4F2EC00", VA = "0x4F2EC00")]
		public UxmlTraits()
		{
		}

		[Token(Token = "0x6000322")]
		[Address(RVA = "0x4F2F050", Offset = "0x4F2F050", VA = "0x4F2F050", Slot = "4")]
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
		[Address(RVA = "0x4F1BB70", Offset = "0x4F1BB70", VA = "0x4F1BB70")]
		get
		{
			return null;
		}
		[Token(Token = "0x60002C7")]
		[Address(RVA = "0x4F27BC0", Offset = "0x4F27BC0", VA = "0x4F27BC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000071")]
	internal virtual bool sourceIncludesArraySize
	{
		[Token(Token = "0x60002C8")]
		[Address(RVA = "0x4F27D10", Offset = "0x4F27D10", VA = "0x4F27D10", Slot = "102")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000072")]
	public override VisualElement contentContainer
	{
		[Token(Token = "0x60002C9")]
		[Address(RVA = "0x4F27D20", Offset = "0x4F27D20", VA = "0x4F27D20", Slot = "97")]
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
		[Address(RVA = "0x4F27D30", Offset = "0x4F27D30", VA = "0x4F27D30")]
		get
		{
			return default(SelectionType);
		}
		[Token(Token = "0x60002CB")]
		[Address(RVA = "0x4F27D40", Offset = "0x4F27D40", VA = "0x4F27D40")]
		set
		{
		}
	}

	[Token(Token = "0x17000074")]
	[CreateProperty(ReadOnly = true)]
	public object selectedItem
	{
		[Token(Token = "0x60002CC")]
		[Address(RVA = "0x4F27E90", Offset = "0x4F27E90", VA = "0x4F27E90")]
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
		[Address(RVA = "0x4F27EF0", Offset = "0x4F27EF0", VA = "0x4F27EF0")]
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
		[Address(RVA = "0x4F266F0", Offset = "0x4F266F0", VA = "0x4F266F0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60002CF")]
		[Address(RVA = "0x4F27F00", Offset = "0x4F27F00", VA = "0x4F27F00")]
		set
		{
		}
	}

	[Token(Token = "0x17000077")]
	[CreateProperty(ReadOnly = true)]
	public IEnumerable<int> selectedIndices
	{
		[Token(Token = "0x60002D0")]
		[Address(RVA = "0x4F28100", Offset = "0x4F28100", VA = "0x4F28100")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000078")]
	internal IEnumerable<int> selectedIds
	{
		[Token(Token = "0x60002D1")]
		[Address(RVA = "0x4F28110", Offset = "0x4F28110", VA = "0x4F28110")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000079")]
	internal IEnumerable<ReusableCollectionItem> activeItems
	{
		[Token(Token = "0x60002D2")]
		[Address(RVA = "0x4F28120", Offset = "0x4F28120", VA = "0x4F28120")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007A")]
	internal ScrollView scrollView
	{
		[Token(Token = "0x60002D3")]
		[Address(RVA = "0x4F281A0", Offset = "0x4F281A0", VA = "0x4F281A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007B")]
	internal ListViewDragger dragger
	{
		[Token(Token = "0x60002D4")]
		[Address(RVA = "0x4F281B0", Offset = "0x4F281B0", VA = "0x4F281B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007C")]
	internal CollectionVirtualizationController virtualizationController
	{
		[Token(Token = "0x60002D5")]
		[Address(RVA = "0x4F281C0", Offset = "0x4F281C0", VA = "0x4F281C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007D")]
	public CollectionViewController viewController
	{
		[Token(Token = "0x60002D6")]
		[Address(RVA = "0x4F28220", Offset = "0x4F28220", VA = "0x4F28220")]
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
		[Address(RVA = "0x4F28330", Offset = "0x4F28330", VA = "0x4F28330")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002D9")]
		[Address(RVA = "0x4F283A0", Offset = "0x4F283A0", VA = "0x4F283A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007F")]
	[CreateProperty]
	public bool reorderable
	{
		[Token(Token = "0x60002DA")]
		[Address(RVA = "0x4F13920", Offset = "0x4F13920", VA = "0x4F13920")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002DB")]
		[Address(RVA = "0x4F28550", Offset = "0x4F28550", VA = "0x4F28550")]
		set
		{
		}
	}

	[Token(Token = "0x17000080")]
	[CreateProperty]
	public bool horizontalScrollingEnabled
	{
		[Token(Token = "0x60002DC")]
		[Address(RVA = "0x4F287A0", Offset = "0x4F287A0", VA = "0x4F287A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002DD")]
		[Address(RVA = "0x4F287B0", Offset = "0x4F287B0", VA = "0x4F287B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000081")]
	[CreateProperty]
	public AlternatingRowBackground showAlternatingRowBackgrounds
	{
		[Token(Token = "0x60002DE")]
		[Address(RVA = "0x4F28880", Offset = "0x4F28880", VA = "0x4F28880")]
		get
		{
			return default(AlternatingRowBackground);
		}
		[Token(Token = "0x60002DF")]
		[Address(RVA = "0x4F28890", Offset = "0x4F28890", VA = "0x4F28890")]
		set
		{
		}
	}

	[Token(Token = "0x17000082")]
	[CreateProperty]
	public CollectionVirtualizationMethod virtualizationMethod
	{
		[Token(Token = "0x60002E0")]
		[Address(RVA = "0x4F28930", Offset = "0x4F28930", VA = "0x4F28930")]
		get
		{
			return default(CollectionVirtualizationMethod);
		}
		[Token(Token = "0x60002E1")]
		[Address(RVA = "0x4F28940", Offset = "0x4F28940", VA = "0x4F28940")]
		set
		{
		}
	}

	[Token(Token = "0x17000083")]
	[CreateProperty]
	public float fixedItemHeight
	{
		[Token(Token = "0x60002E2")]
		[Address(RVA = "0x4F289F0", Offset = "0x4F289F0", VA = "0x4F289F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60002E3")]
		[Address(RVA = "0x4F28A00", Offset = "0x4F28A00", VA = "0x4F28A00")]
		set
		{
		}
	}

	[Token(Token = "0x17000084")]
	internal float lastHeight
	{
		[Token(Token = "0x60002E4")]
		[Address(RVA = "0x4F28B80", Offset = "0x4F28B80", VA = "0x4F28B80")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x4F278D0", Offset = "0x4F278D0", VA = "0x4F278D0")]
	internal bool HasCanStartDrag()
	{
		return default(bool);
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x4F278E0", Offset = "0x4F278E0", VA = "0x4F278E0")]
	internal bool RaiseCanStartDrag(ReusableCollectionItem item, IEnumerable<int> ids)
	{
		return default(bool);
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x4F27970", Offset = "0x4F27970", VA = "0x4F27970")]
	internal StartDragArgs RaiseSetupDragAndDrop(ReusableCollectionItem item, IEnumerable<int> ids, StartDragArgs args)
	{
		return default(StartDragArgs);
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x4F27AC0", Offset = "0x4F27AC0", VA = "0x4F27AC0")]
	internal DragVisualMode RaiseHandleDragAndDrop(Vector2 pointerPosition, DragAndDropArgs dragAndDropArgs)
	{
		return default(DragVisualMode);
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x4F27B40", Offset = "0x4F27B40", VA = "0x4F27B40")]
	internal DragVisualMode RaiseDrop(Vector2 pointerPosition, DragAndDropArgs dragAndDropArgs)
	{
		return default(DragVisualMode);
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x4F28230", Offset = "0x4F28230", VA = "0x4F28230")]
	internal float ResolveItemHeight(float height = -1f)
	{
		return default(float);
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x4F28B90", Offset = "0x4F28B90", VA = "0x4F28B90", Slot = "103")]
	private protected virtual void CreateVirtualizationController()
	{
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x4F281F0", Offset = "0x4F281F0", VA = "0x4F281F0")]
	internal CollectionVirtualizationController GetOrCreateVirtualizationController()
	{
		return null;
	}

	[Token(Token = "0x60002E7")]
	internal void CreateVirtualizationController<T>() where T : ReusableCollectionItem, new()
	{
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x4F25710", Offset = "0x4F25710", VA = "0x4F25710")]
	internal CollectionViewController GetOrCreateViewController()
	{
		return null;
	}

	[Token(Token = "0x60002E9")]
	protected abstract CollectionViewController CreateViewController();

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x4F23520", Offset = "0x4F23520", VA = "0x4F23520", Slot = "105")]
	public virtual void SetViewController(CollectionViewController controller)
	{
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x4F28BD0", Offset = "0x4F28BD0", VA = "0x4F28BD0", Slot = "106")]
	internal virtual ListViewDragger CreateDragger()
	{
		return null;
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x4F239C0", Offset = "0x4F239C0", VA = "0x4F239C0")]
	internal void InitializeDragAndDropController(bool enableReordering)
	{
	}

	[Token(Token = "0x60002ED")]
	internal abstract ICollectionDragAndDropController CreateDragAndDropController();

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x4F23E50", Offset = "0x4F23E50", VA = "0x4F23E50")]
	public BaseVerticalCollectionView()
	{
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x4F25E20", Offset = "0x4F25E20", VA = "0x4F25E20")]
	public BaseVerticalCollectionView(IList itemsSource, float itemHeight = -1f)
	{
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x4F28C20", Offset = "0x4F28C20", VA = "0x4F28C20")]
	public VisualElement GetRootElementForId(int id)
	{
		return null;
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x4F28D80", Offset = "0x4F28D80", VA = "0x4F28D80", Slot = "108")]
	internal virtual bool HasValidDataAndBindings()
	{
		return default(bool);
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x4F28DB0", Offset = "0x4F28DB0", VA = "0x4F28DB0")]
	private void OnItemIndexChanged(int srcIndex, int dstIndex)
	{
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x4F28DE0", Offset = "0x4F28DE0", VA = "0x4F28DE0")]
	private void OnItemsSourceChanged()
	{
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x4F17CA0", Offset = "0x4F17CA0", VA = "0x4F17CA0")]
	public void RefreshItems()
	{
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x4F23B30", Offset = "0x4F23B30", VA = "0x4F23B30")]
	public void Rebuild()
	{
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x4F28E00", Offset = "0x4F28E00", VA = "0x4F28E00")]
	private void RefreshSelection()
	{
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x4F244D0", Offset = "0x4F244D0", VA = "0x4F244D0", Slot = "109")]
	private protected virtual void PostRefresh()
	{
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x4F22940", Offset = "0x4F22940", VA = "0x4F22940")]
	public void ScrollToItem(int index)
	{
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x4F26B50", Offset = "0x4F26B50", VA = "0x4F26B50")]
	public void ScrollToItemById(int id)
	{
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x4F291E0", Offset = "0x4F291E0", VA = "0x4F291E0")]
	private void OnScroll(Vector2 offset)
	{
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x4F29130", Offset = "0x4F29130", VA = "0x4F29130")]
	private void Resize(Vector2 size)
	{
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x4F29260", Offset = "0x4F29260", VA = "0x4F29260")]
	private void OnAttachToPanel(AttachToPanelEvent evt)
	{
	}

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x4F295B0", Offset = "0x4F295B0", VA = "0x4F295B0")]
	private void OnDetachFromPanel(DetachFromPanelEvent evt)
	{
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x4F29870", Offset = "0x4F29870", VA = "0x4F29870")]
	private bool Apply(KeyboardNavigationOperation op, bool shiftKey, bool altKey)
	{
		return default(bool);
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x4F2A940", Offset = "0x4F2A940", VA = "0x4F2A940")]
	private void Apply(KeyboardNavigationOperation op, EventBase sourceEvent)
	{
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x4F2AB90", Offset = "0x4F2AB90", VA = "0x4F2AB90", Slot = "110")]
	private protected virtual bool HandleItemNavigation(bool moveIn, bool altKey)
	{
		return default(bool);
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x4F2ABA0", Offset = "0x4F2ABA0", VA = "0x4F2ABA0")]
	private void OnPointerMove(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x4F2B750", Offset = "0x4F2B750", VA = "0x4F2B750")]
	private void OnPointerDown(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x4F2B820", Offset = "0x4F2B820", VA = "0x4F2B820")]
	private void OnPointerCancel(PointerCancelEvent evt)
	{
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x4F2B890", Offset = "0x4F2B890", VA = "0x4F2B890")]
	private void OnPointerUp(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x4F2B320", Offset = "0x4F2B320", VA = "0x4F2B320")]
	private void ProcessPointerDown(IPointerEvent evt)
	{
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x4F2AC20", Offset = "0x4F2AC20", VA = "0x4F2AC20")]
	private void ProcessPointerUp(IPointerEvent evt)
	{
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x4F2B960", Offset = "0x4F2B960", VA = "0x4F2B960")]
	private void DoSelect(Vector2 localPosition, int clickCount, bool actionKey, bool shiftKey)
	{
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x4F2C310", Offset = "0x4F2C310", VA = "0x4F2C310")]
	internal void DoRangeSelection(int rangeSelectionFinalIndex)
	{
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x4F2C190", Offset = "0x4F2C190", VA = "0x4F2C190")]
	private void ProcessSingleClick(int clickedIndex)
	{
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x4F2A010", Offset = "0x4F2A010", VA = "0x4F2A010")]
	internal void SelectAll()
	{
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x4F2C2A0", Offset = "0x4F2C2A0", VA = "0x4F2C2A0")]
	public void AddToSelection(int index)
	{
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x4F2C8F0", Offset = "0x4F2C8F0", VA = "0x4F2C8F0")]
	internal void AddToSelection(IList<int> indexes)
	{
	}

	[Token(Token = "0x600030D")]
	[Address(RVA = "0x4F2CD80", Offset = "0x4F2CD80", VA = "0x4F2CD80")]
	private void AddToSelectionWithoutValidation(int index)
	{
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x4F2C210", Offset = "0x4F2C210", VA = "0x4F2C210")]
	public void RemoveFromSelection(int index)
	{
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x4F2D360", Offset = "0x4F2D360", VA = "0x4F2D360")]
	private void RemoveFromSelectionWithoutValidation(int index)
	{
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x4F228C0", Offset = "0x4F228C0", VA = "0x4F228C0")]
	public void SetSelection(int index)
	{
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x4F2D860", Offset = "0x4F2D860", VA = "0x4F2D860")]
	public void SetSelection(IEnumerable<int> indices)
	{
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x4F2D870", Offset = "0x4F2D870", VA = "0x4F2D870")]
	public void SetSelectionWithoutNotify(IEnumerable<int> indices)
	{
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x4F26CC0", Offset = "0x4F26CC0", VA = "0x4F26CC0")]
	internal void SetSelectionInternal(IEnumerable<int> indices, bool sendNotification)
	{
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x4F2D880", Offset = "0x4F2D880", VA = "0x4F2D880")]
	private bool MatchesExistingSelection(IEnumerable<int> indices)
	{
		return default(bool);
	}

	[Token(Token = "0x6000315")]
	[Address(RVA = "0x4F2CD20", Offset = "0x4F2CD20", VA = "0x4F2CD20")]
	private void NotifyOfSelectionChange()
	{
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x4F22CB0", Offset = "0x4F22CB0", VA = "0x4F22CB0")]
	public void ClearSelection()
	{
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x4F2C4A0", Offset = "0x4F2C4A0", VA = "0x4F2C4A0")]
	private void ClearSelectionWithoutValidation()
	{
	}

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x4F25F60", Offset = "0x4F25F60", VA = "0x4F25F60", Slot = "94")]
	internal override void OnViewDataReady()
	{
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x4F2DAC0", Offset = "0x4F2DAC0", VA = "0x4F2DAC0", Slot = "10")]
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
	[Address(RVA = "0x4F2DE00", Offset = "0x4F2DE00", VA = "0x4F2DE00")]
	private void OnSizeChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x4F2DFB0", Offset = "0x4F2DFB0", VA = "0x4F2DFB0")]
	private void OnCustomStyleResolved(CustomStyleResolvedEvent e)
	{
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x4F2E150", Offset = "0x4F2E150", VA = "0x4F2E150", Slot = "100")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnBeforeSerialize()
	{
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x4F2E160", Offset = "0x4F2E160", VA = "0x4F2E160", Slot = "101")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnAfterDeserialize()
	{
	}
}
