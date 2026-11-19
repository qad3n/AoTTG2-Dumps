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
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000088")]
public abstract class BaseVerticalCollectionView : BindableElement, ISerializationCallbackReceiver
{
	[Token(Token = "0x2000089")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : BindableElement.UxmlTraits
	{
		[Token(Token = "0x400029F")]
		[FieldOffset(Offset = "0x90")]
		private readonly UxmlEnumAttributeDescription<CollectionVirtualizationMethod> m_VirtualizationMethod;

		[Token(Token = "0x40002A0")]
		[FieldOffset(Offset = "0x98")]
		private readonly UxmlIntAttributeDescription m_FixedItemHeight;

		[Token(Token = "0x40002A1")]
		[FieldOffset(Offset = "0xA0")]
		private readonly UxmlBoolAttributeDescription m_ShowBorder;

		[Token(Token = "0x40002A2")]
		[FieldOffset(Offset = "0xA8")]
		private readonly UxmlEnumAttributeDescription<SelectionType> m_SelectionType;

		[Token(Token = "0x40002A3")]
		[FieldOffset(Offset = "0xB0")]
		private readonly UxmlEnumAttributeDescription<AlternatingRowBackground> m_ShowAlternatingRowBackgrounds;

		[Token(Token = "0x40002A4")]
		[FieldOffset(Offset = "0xB8")]
		private readonly UxmlBoolAttributeDescription m_Reorderable;

		[Token(Token = "0x40002A5")]
		[FieldOffset(Offset = "0xC0")]
		private readonly UxmlBoolAttributeDescription m_HorizontalScrollingEnabled;

		[Token(Token = "0x60004C8")]
		[Address(RVA = "0x6AA6920", Offset = "0x6AA5920", VA = "0x6AA6920")]
		public UxmlTraits()
		{
		}

		[Token(Token = "0x60004C9")]
		[Address(RVA = "0x6AA6100", Offset = "0x6AA5100", VA = "0x6AA6100", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}
	}

	[Token(Token = "0x200008A")]
	private class Selection
	{
		[Token(Token = "0x40002A6")]
		[FieldOffset(Offset = "0x10")]
		private readonly HashSet<int> m_IndexLookup;

		[Token(Token = "0x40002A7")]
		[FieldOffset(Offset = "0x18")]
		private readonly HashSet<int> m_IdLookup;

		[Token(Token = "0x40002A8")]
		[FieldOffset(Offset = "0x20")]
		private int m_MinIndex;

		[Token(Token = "0x40002A9")]
		[FieldOffset(Offset = "0x24")]
		private int m_MaxIndex;

		[Token(Token = "0x40002AB")]
		[FieldOffset(Offset = "0x30")]
		public readonly List<int> indices;

		[Token(Token = "0x40002AC")]
		[FieldOffset(Offset = "0x38")]
		public readonly Dictionary<int, object> items;

		[Token(Token = "0x170000DF")]
		public List<int> selectedIds
		{
			[Token(Token = "0x60004CA")]
			[Address(RVA = "0x6AB2060", Offset = "0x6AB1060", VA = "0x6AB2060")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60004CB")]
			[Address(RVA = "0x6AB2070", Offset = "0x6AB1070", VA = "0x6AB2070")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170000E0")]
		public int indexCount
		{
			[Token(Token = "0x60004CC")]
			[Address(RVA = "0x6AAA030", Offset = "0x6AA9030", VA = "0x6AAA030")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170000E1")]
		public int idCount
		{
			[Token(Token = "0x60004CD")]
			[Address(RVA = "0x6AAC220", Offset = "0x6AAB220", VA = "0x6AAC220")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170000E2")]
		public int minIndex
		{
			[Token(Token = "0x60004CE")]
			[Address(RVA = "0x6AAD950", Offset = "0x6AAC950", VA = "0x6AAD950")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170000E3")]
		public int maxIndex
		{
			[Token(Token = "0x60004CF")]
			[Address(RVA = "0x6AAD930", Offset = "0x6AAC930", VA = "0x6AAD930")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170000E4")]
		public int capacity
		{
			[Token(Token = "0x60004D0")]
			[Address(RVA = "0x6AB0D80", Offset = "0x6AAFD80", VA = "0x6AB0D80")]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60004D1")]
			[Address(RVA = "0x6AB0DC0", Offset = "0x6AAFDC0", VA = "0x6AB0DC0")]
			set
			{
			}
		}

		[Token(Token = "0x60004D2")]
		[Address(RVA = "0x6AAA070", Offset = "0x6AA9070", VA = "0x6AAA070")]
		public int FirstIndex()
		{
			return default(int);
		}

		[Token(Token = "0x60004D3")]
		[Address(RVA = "0x6AAA0F0", Offset = "0x6AA90F0", VA = "0x6AAA0F0")]
		public object FirstObject()
		{
			return null;
		}

		[Token(Token = "0x60004D4")]
		[Address(RVA = "0x6AAC260", Offset = "0x6AAB260", VA = "0x6AAC260")]
		public bool ContainsIndex(int index)
		{
			return default(bool);
		}

		[Token(Token = "0x60004D5")]
		[Address(RVA = "0x6AAF3D0", Offset = "0x6AAE3D0", VA = "0x6AAF3D0")]
		public bool ContainsId(int id)
		{
			return default(bool);
		}

		[Token(Token = "0x60004D6")]
		[Address(RVA = "0x6AAFF30", Offset = "0x6AAEF30", VA = "0x6AAFF30")]
		public void AddId(int id)
		{
		}

		[Token(Token = "0x60004D7")]
		[Address(RVA = "0x6AAC2B0", Offset = "0x6AAB2B0", VA = "0x6AAC2B0")]
		public void AddIndex(int index, object obj)
		{
		}

		[Token(Token = "0x60004D8")]
		[Address(RVA = "0x6AB0930", Offset = "0x6AAF930", VA = "0x6AB0930")]
		public bool TryRemove(int index)
		{
			return default(bool);
		}

		[Token(Token = "0x60004D9")]
		[Address(RVA = "0x6AB0A20", Offset = "0x6AAFA20", VA = "0x6AB0A20")]
		public void RemoveId(int id)
		{
		}

		[Token(Token = "0x60004DA")]
		[Address(RVA = "0x6AB2080", Offset = "0x6AB1080", VA = "0x6AB2080")]
		public void ClearItems()
		{
		}

		[Token(Token = "0x60004DB")]
		[Address(RVA = "0x6AB20C0", Offset = "0x6AB10C0", VA = "0x6AB20C0")]
		public void ClearIds()
		{
		}

		[Token(Token = "0x60004DC")]
		[Address(RVA = "0x6AAC140", Offset = "0x6AAB140", VA = "0x6AAC140")]
		public void ClearIndices()
		{
		}

		[Token(Token = "0x60004DD")]
		[Address(RVA = "0x6AB0E50", Offset = "0x6AAFE50", VA = "0x6AB0E50")]
		public void Clear()
		{
		}

		[Token(Token = "0x60004DE")]
		[Address(RVA = "0x6AAB350", Offset = "0x6AAA350", VA = "0x6AAB350")]
		public Selection()
		{
		}
	}

	[Token(Token = "0x200008B")]
	private enum RangeSelectionDirection
	{
		[Token(Token = "0x40002AE")]
		Up = -1,
		[Token(Token = "0x40002AF")]
		None,
		[Token(Token = "0x40002B0")]
		Down
	}

	[Token(Token = "0x200008C")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.HierarchyModule" })]
	internal enum pointerProcessingStateEnum
	{
		[Token(Token = "0x40002B2")]
		None,
		[Token(Token = "0x40002B3")]
		PointerDown
	}

	[Token(Token = "0x2000091")]
	[CompilerGenerated]
	private sealed class _003Cget_selectedItems_003Ed__88 : IEnumerable<object>, IEnumerable, IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40002BC")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40002BD")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40002BE")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40002BF")]
		[FieldOffset(Offset = "0x28")]
		public BaseVerticalCollectionView _003C_003E4__this;

		[Token(Token = "0x40002C0")]
		[FieldOffset(Offset = "0x30")]
		private List<int>.Enumerator _003C_003Es__1;

		[Token(Token = "0x40002C1")]
		[FieldOffset(Offset = "0x48")]
		private int _003Cindex_003E5__2;

		[Token(Token = "0x40002C2")]
		[FieldOffset(Offset = "0x50")]
		private object _003Citem_003E5__3;

		[Token(Token = "0x170000E5")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60004E8")]
			[Address(RVA = "0x6AB2510", Offset = "0x6AB1510", VA = "0x6AB2510", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000E6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60004EA")]
			[Address(RVA = "0x6AB2560", Offset = "0x6AB1560", VA = "0x6AB2560", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60004E4")]
		[Address(RVA = "0x6AAA240", Offset = "0x6AA9240", VA = "0x6AAA240")]
		[DebuggerHidden]
		public _003Cget_selectedItems_003Ed__88(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60004E5")]
		[Address(RVA = "0x6AB21D0", Offset = "0x6AB11D0", VA = "0x6AB21D0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60004E6")]
		[Address(RVA = "0x6AB2230", Offset = "0x6AB1230", VA = "0x6AB2230", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60004E7")]
		[Address(RVA = "0x6AB24D0", Offset = "0x6AB14D0", VA = "0x6AB24D0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60004E9")]
		[Address(RVA = "0x6AB2520", Offset = "0x6AB1520", VA = "0x6AB2520", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60004EB")]
		[Address(RVA = "0x6AB2570", Offset = "0x6AB1570", VA = "0x6AB2570", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<object> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EObject_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60004EC")]
		[Address(RVA = "0x6AB2610", Offset = "0x6AB1610", VA = "0x6AB2610", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4000260")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId itemsSourceProperty;

	[Token(Token = "0x4000261")]
	[FieldOffset(Offset = "0x98")]
	internal static readonly BindingId selectionTypeProperty;

	[Token(Token = "0x4000262")]
	[FieldOffset(Offset = "0x130")]
	internal static readonly BindingId selectedItemProperty;

	[Token(Token = "0x4000263")]
	[FieldOffset(Offset = "0x1C8")]
	internal static readonly BindingId selectedItemsProperty;

	[Token(Token = "0x4000264")]
	[FieldOffset(Offset = "0x260")]
	internal static readonly BindingId selectedIndexProperty;

	[Token(Token = "0x4000265")]
	[FieldOffset(Offset = "0x2F8")]
	internal static readonly BindingId selectedIndicesProperty;

	[Token(Token = "0x4000266")]
	[FieldOffset(Offset = "0x390")]
	internal static readonly BindingId showBorderProperty;

	[Token(Token = "0x4000267")]
	[FieldOffset(Offset = "0x428")]
	internal static readonly BindingId reorderableProperty;

	[Token(Token = "0x4000268")]
	[FieldOffset(Offset = "0x4C0")]
	internal static readonly BindingId horizontalScrollingEnabledProperty;

	[Token(Token = "0x4000269")]
	[FieldOffset(Offset = "0x558")]
	internal static readonly BindingId showAlternatingRowBackgroundsProperty;

	[Token(Token = "0x400026A")]
	[FieldOffset(Offset = "0x5F0")]
	internal static readonly BindingId virtualizationMethodProperty;

	[Token(Token = "0x400026B")]
	[FieldOffset(Offset = "0x688")]
	internal static readonly BindingId fixedItemHeightProperty;

	[Token(Token = "0x400026C")]
	[FieldOffset(Offset = "0x720")]
	private static readonly ProfilerMarker k_RefreshMarker;

	[Token(Token = "0x400026D")]
	[FieldOffset(Offset = "0x728")]
	private static readonly ProfilerMarker k_RebuildMarker;

	[Token(Token = "0x400026E")]
	[FieldOffset(Offset = "0x2D8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<IEnumerable<object>> itemsChosen;

	[Token(Token = "0x400026F")]
	[FieldOffset(Offset = "0x2E0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<IEnumerable<object>> selectionChanged;

	[Token(Token = "0x4000270")]
	[FieldOffset(Offset = "0x2E8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<IEnumerable<int>> selectedIndicesChanged;

	[Token(Token = "0x4000271")]
	[FieldOffset(Offset = "0x2F0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action<int, int> itemIndexChanged;

	[Token(Token = "0x4000272")]
	[FieldOffset(Offset = "0x2F8")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action itemsSourceChanged;

	[Token(Token = "0x4000273")]
	[FieldOffset(Offset = "0x300")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action m_SelectionNotChanged;

	[Token(Token = "0x4000274")]
	[FieldOffset(Offset = "0x308")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Func<CanStartDragArgs, bool> canStartDrag;

	[Token(Token = "0x4000275")]
	[FieldOffset(Offset = "0x310")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Func<SetupDragAndDropArgs, StartDragArgs> setupDragAndDrop;

	[Token(Token = "0x4000276")]
	[FieldOffset(Offset = "0x318")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Func<HandleDragAndDropArgs, DragVisualMode> dragAndDropUpdate;

	[Token(Token = "0x4000277")]
	[FieldOffset(Offset = "0x320")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Func<HandleDragAndDropArgs, DragVisualMode> handleDrop;

	[Token(Token = "0x4000278")]
	[FieldOffset(Offset = "0x328")]
	private SelectionType m_SelectionType;

	[Token(Token = "0x4000279")]
	[FieldOffset(Offset = "0x730")]
	private static readonly List<ReusableCollectionItem> k_EmptyItems;

	[Token(Token = "0x400027A")]
	[FieldOffset(Offset = "0x32C")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal bool allowSingleClickChoice;

	[Token(Token = "0x400027B")]
	[FieldOffset(Offset = "0x32D")]
	private bool m_HorizontalScrollingEnabled;

	[Token(Token = "0x400027C")]
	[FieldOffset(Offset = "0x330")]
	[SerializeField]
	[DontCreateProperty]
	private AlternatingRowBackground m_ShowAlternatingRowBackgrounds;

	[Token(Token = "0x400027D")]
	[FieldOffset(Offset = "0x738")]
	internal static readonly string k_InvalidTemplateError;

	[Token(Token = "0x400027E")]
	[FieldOffset(Offset = "0x334")]
	internal float m_FixedItemHeight;

	[Token(Token = "0x400027F")]
	[FieldOffset(Offset = "0x338")]
	internal bool m_ItemHeightIsInline;

	[Token(Token = "0x4000280")]
	[FieldOffset(Offset = "0x33C")]
	private CollectionVirtualizationMethod m_VirtualizationMethod;

	[Token(Token = "0x4000281")]
	[FieldOffset(Offset = "0x340")]
	private readonly ScrollView m_ScrollView;

	[Token(Token = "0x4000282")]
	[FieldOffset(Offset = "0x348")]
	private CollectionViewController m_ViewController;

	[Token(Token = "0x4000283")]
	[FieldOffset(Offset = "0x350")]
	private CollectionVirtualizationController m_VirtualizationController;

	[Token(Token = "0x4000284")]
	[FieldOffset(Offset = "0x358")]
	private KeyboardNavigationManipulator m_NavigationManipulator;

	[Token(Token = "0x4000285")]
	[FieldOffset(Offset = "0x360")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	[DontCreateProperty]
	[SerializeField]
	internal SerializedVirtualizationData serializedVirtualizationData;

	[Token(Token = "0x4000286")]
	[FieldOffset(Offset = "0x368")]
	[DontCreateProperty]
	[SerializeField]
	private List<int> m_SelectedIds;

	[Token(Token = "0x4000287")]
	[FieldOffset(Offset = "0x370")]
	private readonly Selection m_Selection;

	[Token(Token = "0x4000288")]
	[FieldOffset(Offset = "0x378")]
	private float m_LastHeight;

	[Token(Token = "0x4000289")]
	[FieldOffset(Offset = "0x37C")]
	private RangeSelectionDirection m_RangeSelectionDirection;

	[Token(Token = "0x400028A")]
	[FieldOffset(Offset = "0x380")]
	private ListViewDragger m_Dragger;

	[Token(Token = "0x400028B")]
	[FieldOffset(Offset = "0x740")]
	internal static CustomStyleProperty<int> s_ItemHeightProperty;

	[Token(Token = "0x400028C")]
	[FieldOffset(Offset = "0x388")]
	private readonly Action<int, int> m_ItemIndexChangedCallback;

	[Token(Token = "0x400028D")]
	[FieldOffset(Offset = "0x390")]
	private readonly Action m_ItemsSourceChangedCallback;

	[Token(Token = "0x400028E")]
	[FieldOffset(Offset = "0x398")]
	private IVisualElementScheduledItem m_RebuildScheduled;

	[Token(Token = "0x400028F")]
	[FieldOffset(Offset = "0x748")]
	public static readonly string ussClassName;

	[Token(Token = "0x4000290")]
	[FieldOffset(Offset = "0x750")]
	public static readonly string borderUssClassName;

	[Token(Token = "0x4000291")]
	[FieldOffset(Offset = "0x758")]
	public static readonly string itemUssClassName;

	[Token(Token = "0x4000292")]
	[FieldOffset(Offset = "0x760")]
	public static readonly string dragHoverBarUssClassName;

	[Token(Token = "0x4000293")]
	[FieldOffset(Offset = "0x768")]
	public static readonly string dragHoverMarkerUssClassName;

	[Token(Token = "0x4000294")]
	[FieldOffset(Offset = "0x770")]
	public static readonly string itemDragHoverUssClassName;

	[Token(Token = "0x4000295")]
	[FieldOffset(Offset = "0x778")]
	public static readonly string itemSelectedVariantUssClassName;

	[Token(Token = "0x4000296")]
	[FieldOffset(Offset = "0x780")]
	public static readonly string itemAlternativeBackgroundUssClassName;

	[Token(Token = "0x4000297")]
	[FieldOffset(Offset = "0x788")]
	public static readonly string listScrollViewUssClassName;

	[Token(Token = "0x4000298")]
	[FieldOffset(Offset = "0x790")]
	internal static readonly string backgroundFillUssClassName;

	[Token(Token = "0x400029B")]
	[FieldOffset(Offset = "0x3A8")]
	internal int m_PreviousRefreshedCount;

	[Token(Token = "0x400029C")]
	[FieldOffset(Offset = "0x3AC")]
	private Vector3 m_TouchDownPosition;

	[Token(Token = "0x400029D")]
	[FieldOffset(Offset = "0x3B8")]
	private long m_LastPointerDownTimeStamp;

	[Token(Token = "0x400029E")]
	[FieldOffset(Offset = "0x3C0")]
	private int m_PointerDownCount;

	[Token(Token = "0x170000C9")]
	[CreateProperty]
	public IList itemsSource
	{
		[Token(Token = "0x6000468")]
		[Address(RVA = "0x6A99C60", Offset = "0x6A98C60", VA = "0x6A99C60")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000469")]
		[Address(RVA = "0x6AA9DF0", Offset = "0x6AA8DF0", VA = "0x6AA9DF0")]
		set
		{
		}
	}

	[Token(Token = "0x170000CA")]
	public override VisualElement contentContainer
	{
		[Token(Token = "0x600046A")]
		[Address(RVA = "0x6AA9E60", Offset = "0x6AA8E60", VA = "0x6AA9E60", Slot = "138")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CB")]
	[CreateProperty]
	public SelectionType selectionType
	{
		[Token(Token = "0x600046B")]
		[Address(RVA = "0x6AA9E70", Offset = "0x6AA8E70", VA = "0x6AA9E70")]
		get
		{
			return default(SelectionType);
		}
		[Token(Token = "0x600046C")]
		[Address(RVA = "0x6AA9E80", Offset = "0x6AA8E80", VA = "0x6AA9E80")]
		set
		{
		}
	}

	[Token(Token = "0x170000CC")]
	[CreateProperty(ReadOnly = true)]
	public object selectedItem
	{
		[Token(Token = "0x600046D")]
		[Address(RVA = "0x6AAA0D0", Offset = "0x6AA90D0", VA = "0x6AAA0D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CD")]
	[CreateProperty(ReadOnly = true)]
	public IEnumerable<object> selectedItems
	{
		[Token(Token = "0x600046E")]
		[Address(RVA = "0x6AAA1D0", Offset = "0x6AA91D0", VA = "0x6AAA1D0")]
		[IteratorStateMachine(typeof(_003Cget_selectedItems_003Ed__88))]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CE")]
	[CreateProperty]
	public int selectedIndex
	{
		[Token(Token = "0x600046F")]
		[Address(RVA = "0x6AA8530", Offset = "0x6AA7530", VA = "0x6AA8530")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000470")]
		[Address(RVA = "0x6AAA270", Offset = "0x6AA9270", VA = "0x6AAA270")]
		set
		{
		}
	}

	[Token(Token = "0x170000CF")]
	[CreateProperty(ReadOnly = true)]
	public IEnumerable<int> selectedIndices
	{
		[Token(Token = "0x6000471")]
		[Address(RVA = "0x6A99790", Offset = "0x6A98790", VA = "0x6A99790")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D0")]
	public IEnumerable<int> selectedIds
	{
		[Token(Token = "0x6000472")]
		[Address(RVA = "0x6AA8280", Offset = "0x6AA7280", VA = "0x6AA8280")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D1")]
	internal IEnumerable<ReusableCollectionItem> activeItems
	{
		[Token(Token = "0x6000473")]
		[Address(RVA = "0x6AA4FC0", Offset = "0x6AA3FC0", VA = "0x6AA4FC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D2")]
	internal ScrollView scrollView
	{
		[Token(Token = "0x6000474")]
		[Address(RVA = "0x6AAA280", Offset = "0x6AA9280", VA = "0x6AAA280")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule", "UnityEngine.HierarchyModule" })]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D3")]
	internal ListViewDragger dragger
	{
		[Token(Token = "0x6000475")]
		[Address(RVA = "0x6AAA290", Offset = "0x6AA9290", VA = "0x6AAA290")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D4")]
	internal CollectionVirtualizationController virtualizationController
	{
		[Token(Token = "0x6000476")]
		[Address(RVA = "0x6AA7840", Offset = "0x6AA6840", VA = "0x6AA7840")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule", "UnityEngine.HierarchyModule" })]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D5")]
	public CollectionViewController viewController
	{
		[Token(Token = "0x6000477")]
		[Address(RVA = "0x6AAA2D0", Offset = "0x6AA92D0", VA = "0x6AAA2D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D6")]
	[CreateProperty]
	public bool showBorder
	{
		[Token(Token = "0x6000479")]
		[Address(RVA = "0x6AAA300", Offset = "0x6AA9300", VA = "0x6AAA300")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600047A")]
		[Address(RVA = "0x6AAA370", Offset = "0x6AA9370", VA = "0x6AAA370")]
		set
		{
		}
	}

	[Token(Token = "0x170000D7")]
	[CreateProperty]
	public bool reorderable
	{
		[Token(Token = "0x600047B")]
		[Address(RVA = "0x6A9AC70", Offset = "0x6A99C70", VA = "0x6A9AC70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600047C")]
		[Address(RVA = "0x6AAA510", Offset = "0x6AA9510", VA = "0x6AAA510")]
		set
		{
		}
	}

	[Token(Token = "0x170000D8")]
	[CreateProperty]
	public bool horizontalScrollingEnabled
	{
		[Token(Token = "0x600047D")]
		[Address(RVA = "0x6AAA730", Offset = "0x6AA9730", VA = "0x6AAA730")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600047E")]
		[Address(RVA = "0x6AAA740", Offset = "0x6AA9740", VA = "0x6AAA740")]
		set
		{
		}
	}

	[Token(Token = "0x170000D9")]
	[CreateProperty]
	public AlternatingRowBackground showAlternatingRowBackgrounds
	{
		[Token(Token = "0x600047F")]
		[Address(RVA = "0x6AAA7F0", Offset = "0x6AA97F0", VA = "0x6AAA7F0")]
		get
		{
			return default(AlternatingRowBackground);
		}
		[Token(Token = "0x6000480")]
		[Address(RVA = "0x6AAA800", Offset = "0x6AA9800", VA = "0x6AAA800")]
		set
		{
		}
	}

	[Token(Token = "0x170000DA")]
	[CreateProperty]
	public CollectionVirtualizationMethod virtualizationMethod
	{
		[Token(Token = "0x6000481")]
		[Address(RVA = "0x6AAA890", Offset = "0x6AA9890", VA = "0x6AAA890")]
		get
		{
			return default(CollectionVirtualizationMethod);
		}
		[Token(Token = "0x6000482")]
		[Address(RVA = "0x6AAA8A0", Offset = "0x6AA98A0", VA = "0x6AAA8A0")]
		set
		{
		}
	}

	[Token(Token = "0x170000DB")]
	[CreateProperty]
	public float fixedItemHeight
	{
		[Token(Token = "0x6000483")]
		[Address(RVA = "0x6AAA940", Offset = "0x6AA9940", VA = "0x6AAA940")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000484")]
		[Address(RVA = "0x6AAA950", Offset = "0x6AA9950", VA = "0x6AAA950")]
		set
		{
		}
	}

	[Token(Token = "0x170000DC")]
	internal bool isRebuildScheduled
	{
		[Token(Token = "0x6000485")]
		[Address(RVA = "0x6AAAAB0", Offset = "0x6AA9AB0", VA = "0x6AAAAB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DD")]
	private pointerProcessingStateEnum pointerProcessingState
	{
		[Token(Token = "0x600048F")]
		[Address(RVA = "0x6AAABE0", Offset = "0x6AA9BE0", VA = "0x6AAABE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000DE")]
	private int currentPointerButton
	{
		[Token(Token = "0x6000490")]
		[Address(RVA = "0x6AAABF0", Offset = "0x6AA9BF0", VA = "0x6AAABF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000463")]
	[Address(RVA = "0x6AA9AA0", Offset = "0x6AA8AA0", VA = "0x6AA9AA0")]
	internal bool HasCanStartDrag()
	{
		return default(bool);
	}

	[Token(Token = "0x6000464")]
	[Address(RVA = "0x6AA9AB0", Offset = "0x6AA8AB0", VA = "0x6AA9AB0")]
	internal bool RaiseCanStartDrag(ReusableCollectionItem item, IEnumerable<int> ids, EventModifiers modifiers)
	{
		return default(bool);
	}

	[Token(Token = "0x6000465")]
	[Address(RVA = "0x6AA9B90", Offset = "0x6AA8B90", VA = "0x6AA9B90")]
	internal StartDragArgs RaiseSetupDragAndDrop(ReusableCollectionItem item, IEnumerable<int> ids, StartDragArgs args)
	{
		return default(StartDragArgs);
	}

	[Token(Token = "0x6000466")]
	[Address(RVA = "0x6AA9CD0", Offset = "0x6AA8CD0", VA = "0x6AA9CD0")]
	internal DragVisualMode RaiseHandleDragAndDrop(Vector2 pointerPosition, DragAndDropArgs dragAndDropArgs)
	{
		return default(DragVisualMode);
	}

	[Token(Token = "0x6000467")]
	[Address(RVA = "0x6AA9D60", Offset = "0x6AA8D60", VA = "0x6AA9D60")]
	internal DragVisualMode RaiseDrop(Vector2 pointerPosition, DragAndDropArgs dragAndDropArgs)
	{
		return default(DragVisualMode);
	}

	[Token(Token = "0x6000478")]
	[Address(RVA = "0x6AAA2E0", Offset = "0x6AA92E0", VA = "0x6AAA2E0")]
	internal float ResolveItemHeight(float height = -1f)
	{
		return default(float);
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x6AAAB50", Offset = "0x6AA9B50", VA = "0x6AAAB50", Slot = "145")]
	private protected virtual void CreateVirtualizationController()
	{
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x6AAA2A0", Offset = "0x6AA92A0", VA = "0x6AAA2A0")]
	internal CollectionVirtualizationController GetOrCreateVirtualizationController()
	{
		return null;
	}

	[Token(Token = "0x6000488")]
	internal void CreateVirtualizationController<T>() where T : ReusableCollectionItem, new()
	{
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x6AA24C0", Offset = "0x6AA14C0", VA = "0x6AA24C0")]
	internal CollectionViewController GetOrCreateViewController()
	{
		return null;
	}

	[Token(Token = "0x600048A")]
	protected abstract CollectionViewController CreateViewController();

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x6AA3980", Offset = "0x6AA2980", VA = "0x6AA3980", Slot = "147")]
	public virtual void SetViewController(CollectionViewController controller)
	{
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x6AAAB90", Offset = "0x6AA9B90", VA = "0x6AAAB90", Slot = "148")]
	internal virtual ListViewDragger CreateDragger()
	{
		return null;
	}

	[Token(Token = "0x600048D")]
	[Address(RVA = "0x6AA3D60", Offset = "0x6AA2D60", VA = "0x6AA3D60")]
	internal void InitializeDragAndDropController(bool enableReordering)
	{
	}

	[Token(Token = "0x600048E")]
	internal abstract ICollectionDragAndDropController CreateDragAndDropController();

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x6AAAC00", Offset = "0x6AA9C00", VA = "0x6AAAC00")]
	public BaseVerticalCollectionView()
	{
	}

	[Token(Token = "0x6000492")]
	[Address(RVA = "0x6AA45C0", Offset = "0x6AA35C0", VA = "0x6AA45C0")]
	public BaseVerticalCollectionView(IList itemsSource, float itemHeight = -1f)
	{
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x6AAB4A0", Offset = "0x6AAA4A0", VA = "0x6AAB4A0")]
	public VisualElement GetRootElementForId(int id)
	{
		return null;
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x6AAB610", Offset = "0x6AAA610", VA = "0x6AAB610", Slot = "150")]
	internal virtual bool HasValidDataAndBindings()
	{
		return default(bool);
	}

	[Token(Token = "0x6000495")]
	[Address(RVA = "0x6AAB640", Offset = "0x6AAA640", VA = "0x6AAB640")]
	private void OnItemIndexChanged(int srcIndex, int dstIndex)
	{
	}

	[Token(Token = "0x6000496")]
	[Address(RVA = "0x6AAB670", Offset = "0x6AAA670", VA = "0x6AAB670")]
	private void OnItemsSourceChanged()
	{
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x6A99060", Offset = "0x6A98060", VA = "0x6A99060")]
	public void RefreshItems()
	{
	}

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x6AA21E0", Offset = "0x6AA11E0", VA = "0x6AA21E0")]
	public void Rebuild()
	{
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x6AABF10", Offset = "0x6AAAF10", VA = "0x6AABF10")]
	internal void ScheduleRebuild()
	{
	}

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x6AAB6E0", Offset = "0x6AAA6E0", VA = "0x6AAB6E0")]
	private void RefreshSelection()
	{
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x6AA4760", Offset = "0x6AA3760", VA = "0x6AA4760", Slot = "151")]
	private protected virtual void PostRefresh()
	{
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x6AA3080", Offset = "0x6AA2080", VA = "0x6AA3080")]
	public void ScrollToItem(int index)
	{
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x6AA8650", Offset = "0x6AA7650", VA = "0x6AA8650")]
	public void ScrollToItemById(int id)
	{
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x6AAC450", Offset = "0x6AAB450", VA = "0x6AAC450")]
	private void OnScroll(Vector2 offset)
	{
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x6AAC3A0", Offset = "0x6AAB3A0", VA = "0x6AAC3A0")]
	private void Resize(Vector2 size)
	{
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x6AAC4D0", Offset = "0x6AAB4D0", VA = "0x6AAC4D0")]
	private void OnAttachToPanel(AttachToPanelEvent evt)
	{
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x6AAC820", Offset = "0x6AAB820", VA = "0x6AAC820")]
	private void OnDetachFromPanel(DetachFromPanelEvent evt)
	{
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x6AACAE0", Offset = "0x6AABAE0", VA = "0x6AACAE0")]
	private bool Apply(KeyboardNavigationOperation op, bool shiftKey, bool altKey)
	{
		return default(bool);
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x6AADB40", Offset = "0x6AACB40", VA = "0x6AADB40")]
	private void Apply(KeyboardNavigationOperation op, EventBase sourceEvent)
	{
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x6AADDC0", Offset = "0x6AACDC0", VA = "0x6AADDC0", Slot = "152")]
	private protected virtual bool HandleItemNavigation(bool moveIn, bool altKey)
	{
		return default(bool);
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x6AADDD0", Offset = "0x6AACDD0", VA = "0x6AADDD0")]
	private void OnPointerMove(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x6AAEB10", Offset = "0x6AADB10", VA = "0x6AAEB10")]
	private void OnPointerDown(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x6AAEB20", Offset = "0x6AADB20", VA = "0x6AAEB20")]
	private void OnPointerCancel(PointerCancelEvent evt)
	{
	}

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x6AAEBE0", Offset = "0x6AADBE0", VA = "0x6AAEBE0")]
	private void OnPointerUp(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x6AAE4F0", Offset = "0x6AAD4F0", VA = "0x6AAE4F0")]
	private void ProcessPointerDown(IPointerEvent evt)
	{
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x6AADE50", Offset = "0x6AACE50", VA = "0x6AADE50")]
	private void ProcessPointerUp(IPointerEvent evt)
	{
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x6AAEBF0", Offset = "0x6AADBF0", VA = "0x6AAEBF0")]
	private void DoSelect(Vector2 localPosition, int mouseButton, int clickCount, bool actionKey, bool shiftKey)
	{
	}

	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x6AAF550", Offset = "0x6AAE550", VA = "0x6AAF550")]
	internal void DoRangeSelection(int rangeSelectionFinalIndex)
	{
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x6AAF3C0", Offset = "0x6AAE3C0", VA = "0x6AAF3C0")]
	private void ProcessSingleClick(int clickedIndex)
	{
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x6AAD390", Offset = "0x6AAC390", VA = "0x6AAD390")]
	internal void SelectAll()
	{
	}

	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x6AAF470", Offset = "0x6AAE470", VA = "0x6AAF470")]
	public void AddToSelection(int index)
	{
	}

	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x6AAFEA0", Offset = "0x6AAEEA0", VA = "0x6AAFEA0")]
	internal void AddToSelection(ReadOnlySpan<int> indexes)
	{
	}

	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x6AB00A0", Offset = "0x6AAF0A0", VA = "0x6AB00A0")]
	private void AddToSelectionWithoutValidation(int index)
	{
	}

	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x6AAF420", Offset = "0x6AAE420", VA = "0x6AAF420")]
	public void RemoveFromSelection(int index)
	{
	}

	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x6AB0500", Offset = "0x6AAF500", VA = "0x6AB0500")]
	private void RemoveFromSelectionWithoutValidation(int index)
	{
	}

	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x6AA2FA0", Offset = "0x6AA1FA0", VA = "0x6AA2FA0")]
	public void SetSelection(int index)
	{
	}

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x6AB0A90", Offset = "0x6AAFA90", VA = "0x6AB0A90")]
	internal void SetSelection(ReadOnlySpan<int> indices)
	{
	}

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x6AB0C30", Offset = "0x6AAFC30", VA = "0x6AB0C30")]
	public void SetSelectionWithoutNotify(IEnumerable<int> indices)
	{
	}

	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x6AA87C0", Offset = "0x6AA77C0", VA = "0x6AA87C0")]
	internal void SetSelectionInternal(IEnumerable<int> indices, bool sendNotification)
	{
	}

	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x6AB0AA0", Offset = "0x6AAFAA0", VA = "0x6AB0AA0")]
	internal void SetSelectionInternal(ReadOnlySpan<int> indices, bool sendNotification)
	{
	}

	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x6AB0C40", Offset = "0x6AAFC40", VA = "0x6AB0C40")]
	private bool MatchesExistingSelection(ReadOnlySpan<int> indices)
	{
		return default(bool);
	}

	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x6AAFFD0", Offset = "0x6AAEFD0", VA = "0x6AAFFD0")]
	private void NotifyOfSelectionChange()
	{
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x6AA3490", Offset = "0x6AA2490", VA = "0x6AA3490")]
	public void ClearSelection()
	{
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x6AAFB00", Offset = "0x6AAEB00", VA = "0x6AAFB00")]
	private void ClearSelectionWithoutValidation()
	{
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x6AA7920", Offset = "0x6AA6920", VA = "0x6AA7920", Slot = "135")]
	internal override void OnViewDataReady()
	{
	}

	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x6AB0F50", Offset = "0x6AAFF50", VA = "0x6AB0F50", Slot = "8")]
	[EventInterest(new Type[]
	{
		typeof(PointerUpEvent),
		typeof(FocusInEvent),
		typeof(FocusOutEvent),
		typeof(NavigationSubmitEvent)
	})]
	protected override void HandleEventBubbleUp(EventBase evt)
	{
	}

	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x6AB1270", Offset = "0x6AB0270", VA = "0x6AB1270", Slot = "12")]
	[EventInterest(EventInterestOptions.Inherit)]
	[Obsolete("ExecuteDefaultAction override has been removed because default event handling was migrated to HandleEventBubbleUp. Please use HandleEventBubbleUp.", false)]
	protected override void ExecuteDefaultAction(EventBase evt)
	{
	}

	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x6AB1280", Offset = "0x6AB0280", VA = "0x6AB1280")]
	private void OnSizeChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x6AB1530", Offset = "0x6AB0530", VA = "0x6AB1530")]
	private void OnCustomStyleResolved(CustomStyleResolvedEvent e)
	{
	}

	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x6AB16C0", Offset = "0x6AB06C0", VA = "0x6AB16C0", Slot = "143")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnBeforeSerialize()
	{
	}

	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x6AB16D0", Offset = "0x6AB06D0", VA = "0x6AB16D0", Slot = "144")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnAfterDeserialize()
	{
	}
}
