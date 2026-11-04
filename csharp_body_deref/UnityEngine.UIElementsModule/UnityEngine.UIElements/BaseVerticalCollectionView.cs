// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BaseVerticalCollectionView
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
		[Address(RVA = "0x30B5680", Offset = "0x30B3C80", VA = "0x1830B5680")]
		public UxmlTraits()
		{
		}

		[Token(Token = "0x60004C9")]
		[Address(RVA = "0x30B4BE0", Offset = "0x30B31E0", VA = "0x1830B4BE0", Slot = "4")]
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
			[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60004CB")]
			[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x170000E0")]
		public int indexCount
		{
			[Token(Token = "0x60004CC")]
			[Address(RVA = "0x30B29E0", Offset = "0x30B0FE0", VA = "0x1830B29E0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170000E1")]
		public int idCount
		{
			[Token(Token = "0x60004CD")]
			[Address(RVA = "0x30B29A0", Offset = "0x30B0FA0", VA = "0x1830B29A0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170000E2")]
		public int minIndex
		{
			[Token(Token = "0x60004CE")]
			[Address(RVA = "0x30B2A50", Offset = "0x30B1050", VA = "0x1830B2A50")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170000E3")]
		public int maxIndex
		{
			[Token(Token = "0x60004CF")]
			[Address(RVA = "0x30B2A20", Offset = "0x30B1020", VA = "0x1830B2A20")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170000E4")]
		public int capacity
		{
			[Token(Token = "0x60004D0")]
			[Address(RVA = "0x30B2950", Offset = "0x30B0F50", VA = "0x1830B2950")]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60004D1")]
			[Address(RVA = "0x30B2A80", Offset = "0x30B1080", VA = "0x1830B2A80")]
			set
			{
			}
		}

		[Token(Token = "0x60004D2")]
		[Address(RVA = "0x30B2570", Offset = "0x30B0B70", VA = "0x1830B2570")]
		public int FirstIndex()
		{
			return default(int);
		}

		[Token(Token = "0x60004D3")]
		[Address(RVA = "0x30B25E0", Offset = "0x30B0BE0", VA = "0x1830B25E0")]
		public object FirstObject()
		{
			return null;
		}

		[Token(Token = "0x60004D4")]
		[Address(RVA = "0x30B2510", Offset = "0x30B0B10", VA = "0x1830B2510")]
		public bool ContainsIndex(int index)
		{
			return default(bool);
		}

		[Token(Token = "0x60004D5")]
		[Address(RVA = "0x30B24B0", Offset = "0x30B0AB0", VA = "0x1830B24B0")]
		public bool ContainsId(int id)
		{
			return default(bool);
		}

		[Token(Token = "0x60004D6")]
		[Address(RVA = "0x30B20C0", Offset = "0x30B06C0", VA = "0x1830B20C0")]
		public void AddId(int id)
		{
		}

		[Token(Token = "0x60004D7")]
		[Address(RVA = "0x30B2180", Offset = "0x30B0780", VA = "0x1830B2180")]
		public void AddIndex(int index, object obj)
		{
		}

		[Token(Token = "0x60004D8")]
		[Address(RVA = "0x30B2720", Offset = "0x30B0D20", VA = "0x1830B2720")]
		public bool TryRemove(int index)
		{
			return default(bool);
		}

		[Token(Token = "0x60004D9")]
		[Address(RVA = "0x30B26A0", Offset = "0x30B0CA0", VA = "0x1830B26A0")]
		public void RemoveId(int id)
		{
		}

		[Token(Token = "0x60004DA")]
		[Address(RVA = "0x30B2360", Offset = "0x30B0960", VA = "0x1830B2360")]
		public void ClearItems()
		{
		}

		[Token(Token = "0x60004DB")]
		[Address(RVA = "0x30B2280", Offset = "0x30B0880", VA = "0x1830B2280")]
		public void ClearIds()
		{
		}

		[Token(Token = "0x60004DC")]
		[Address(RVA = "0x30B22F0", Offset = "0x30B08F0", VA = "0x1830B22F0")]
		public void ClearIndices()
		{
		}

		[Token(Token = "0x60004DD")]
		[Address(RVA = "0x30B23B0", Offset = "0x30B09B0", VA = "0x1830B23B0")]
		public void Clear()
		{
		}

		[Token(Token = "0x60004DE")]
		[Address(RVA = "0x30B2810", Offset = "0x30B0E10", VA = "0x1830B2810")]
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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60004E4")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003Cget_selectedItems_003Ed__88(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60004E5")]
		[Address(RVA = "0x30B42E0", Offset = "0x30B28E0", VA = "0x1830B42E0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60004E6")]
		[Address(RVA = "0x30B3F80", Offset = "0x30B2580", VA = "0x1830B3F80", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60004E7")]
		[Address(RVA = "0x30B4370", Offset = "0x30B2970", VA = "0x1830B4370")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60004E9")]
		[Address(RVA = "0x30B42A0", Offset = "0x30B28A0", VA = "0x1830B42A0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60004EB")]
		[Address(RVA = "0x30B4200", Offset = "0x30B2800", VA = "0x1830B4200", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<object> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EObject_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60004EC")]
		[Address(RVA = "0x30B4200", Offset = "0x30B2800", VA = "0x1830B4200", Slot = "5")]
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
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
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
	[DontCreateProperty]
	[SerializeField]
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
	[SerializeField]
	[DontCreateProperty]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal SerializedVirtualizationData serializedVirtualizationData;

	[Token(Token = "0x4000286")]
	[FieldOffset(Offset = "0x368")]
	[SerializeField]
	[DontCreateProperty]
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
		[Address(RVA = "0x30AC5B0", Offset = "0x30AABB0", VA = "0x1830AC5B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000469")]
		[Address(RVA = "0x30A5310", Offset = "0x30A3910", VA = "0x1830A5310")]
		set
		{
		}
	}

	[Token(Token = "0x170000CA")]
	public override VisualElement contentContainer
	{
		[Token(Token = "0x600046A")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "138")]
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
		[Address(RVA = "0x30AC8C0", Offset = "0x30AAEC0", VA = "0x1830AC8C0")]
		get
		{
			return default(SelectionType);
		}
		[Token(Token = "0x600046C")]
		[Address(RVA = "0x30ACC90", Offset = "0x30AB290", VA = "0x1830ACC90")]
		set
		{
		}
	}

	[Token(Token = "0x170000CC")]
	[CreateProperty(ReadOnly = true)]
	public object selectedItem
	{
		[Token(Token = "0x600046D")]
		[Address(RVA = "0x30AC760", Offset = "0x30AAD60", VA = "0x1830AC760")]
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
		[Address(RVA = "0x30AC840", Offset = "0x30AAE40", VA = "0x1830AC840")]
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
		[Address(RVA = "0x30AC680", Offset = "0x30AAC80", VA = "0x1830AC680")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000470")]
		[Address(RVA = "0x30A8880", Offset = "0x30A6E80", VA = "0x1830A8880")]
		set
		{
		}
	}

	[Token(Token = "0x170000CF")]
	[CreateProperty(ReadOnly = true)]
	public IEnumerable<int> selectedIndices
	{
		[Token(Token = "0x6000471")]
		[Address(RVA = "0x30AC740", Offset = "0x30AAD40", VA = "0x1830AC740")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D0")]
	public IEnumerable<int> selectedIds
	{
		[Token(Token = "0x6000472")]
		[Address(RVA = "0x30AC660", Offset = "0x30AAC60", VA = "0x1830AC660")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D1")]
	internal IEnumerable<ReusableCollectionItem> activeItems
	{
		[Token(Token = "0x6000473")]
		[Address(RVA = "0x30AC4C0", Offset = "0x30AAAC0", VA = "0x1830AC4C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D2")]
	internal ScrollView scrollView
	{
		[Token(Token = "0x6000474")]
		[Address(RVA = "0x2D24000", Offset = "0x2D22600", VA = "0x182D24000")]
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
		[Address(RVA = "0x12ADB20", Offset = "0x12AC120", VA = "0x1812ADB20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D4")]
	internal CollectionVirtualizationController virtualizationController
	{
		[Token(Token = "0x6000476")]
		[Address(RVA = "0x30A6BB0", Offset = "0x30A51B0", VA = "0x1830A6BB0")]
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
		[Address(RVA = "0x1000630", Offset = "0xFFEC30", VA = "0x181000630")]
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
		[Address(RVA = "0x30AC8E0", Offset = "0x30AAEE0", VA = "0x1830AC8E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600047A")]
		[Address(RVA = "0x30ACE30", Offset = "0x30AB430", VA = "0x1830ACE30")]
		set
		{
		}
	}

	[Token(Token = "0x170000D7")]
	[CreateProperty]
	public bool reorderable
	{
		[Token(Token = "0x600047B")]
		[Address(RVA = "0x30AC5D0", Offset = "0x30AABD0", VA = "0x1830AC5D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600047C")]
		[Address(RVA = "0x30ACB80", Offset = "0x30AB180", VA = "0x1830ACB80")]
		set
		{
		}
	}

	[Token(Token = "0x170000D8")]
	[CreateProperty]
	public bool horizontalScrollingEnabled
	{
		[Token(Token = "0x600047D")]
		[Address(RVA = "0x30AC550", Offset = "0x30AAB50", VA = "0x1830AC550")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600047E")]
		[Address(RVA = "0x30ACAB0", Offset = "0x30AB0B0", VA = "0x1830ACAB0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D9")]
	[CreateProperty]
	public AlternatingRowBackground showAlternatingRowBackgrounds
	{
		[Token(Token = "0x600047F")]
		[Address(RVA = "0x30AC8D0", Offset = "0x30AAED0", VA = "0x1830AC8D0")]
		get
		{
			return default(AlternatingRowBackground);
		}
		[Token(Token = "0x6000480")]
		[Address(RVA = "0x30ACDA0", Offset = "0x30AB3A0", VA = "0x1830ACDA0")]
		set
		{
		}
	}

	[Token(Token = "0x170000DA")]
	[CreateProperty]
	public CollectionVirtualizationMethod virtualizationMethod
	{
		[Token(Token = "0x6000481")]
		[Address(RVA = "0x645AC0", Offset = "0x6440C0", VA = "0x180645AC0")]
		get
		{
			return default(CollectionVirtualizationMethod);
		}
		[Token(Token = "0x6000482")]
		[Address(RVA = "0x30ACF10", Offset = "0x30AB510", VA = "0x1830ACF10")]
		set
		{
		}
	}

	[Token(Token = "0x170000DB")]
	[CreateProperty]
	public float fixedItemHeight
	{
		[Token(Token = "0x6000483")]
		[Address(RVA = "0x30AC540", Offset = "0x30AAB40", VA = "0x1830AC540")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000484")]
		[Address(RVA = "0x30AC970", Offset = "0x30AAF70", VA = "0x1830AC970")]
		set
		{
		}
	}

	[Token(Token = "0x170000DC")]
	internal bool isRebuildScheduled
	{
		[Token(Token = "0x6000485")]
		[Address(RVA = "0x30AC560", Offset = "0x30AAB60", VA = "0x1830AC560")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DD")]
	private pointerProcessingStateEnum pointerProcessingState
	{
		[Token(Token = "0x600048F")]
		[Address(RVA = "0x30ACB70", Offset = "0x30AB170", VA = "0x1830ACB70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000DE")]
	private int currentPointerButton
	{
		[Token(Token = "0x6000490")]
		[Address(RVA = "0x30AC960", Offset = "0x30AAF60", VA = "0x1830AC960")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000463")]
	[Address(RVA = "0x30A7050", Offset = "0x30A5650", VA = "0x1830A7050")]
	internal bool HasCanStartDrag()
	{
		return default(bool);
	}

	[Token(Token = "0x6000464")]
	[Address(RVA = "0x30A8890", Offset = "0x30A6E90", VA = "0x1830A8890")]
	internal bool RaiseCanStartDrag(ReusableCollectionItem item, IEnumerable<int> ids, EventModifiers modifiers)
	{
		return default(bool);
	}

	[Token(Token = "0x6000465")]
	[Address(RVA = "0x30A8AF0", Offset = "0x30A70F0", VA = "0x1830A8AF0")]
	internal StartDragArgs RaiseSetupDragAndDrop(ReusableCollectionItem item, IEnumerable<int> ids, StartDragArgs args)
	{
		return default(StartDragArgs);
	}

	[Token(Token = "0x6000466")]
	[Address(RVA = "0x30A8A50", Offset = "0x30A7050", VA = "0x1830A8A50")]
	internal DragVisualMode RaiseHandleDragAndDrop(Vector2 pointerPosition, DragAndDropArgs dragAndDropArgs)
	{
		return default(DragVisualMode);
	}

	[Token(Token = "0x6000467")]
	[Address(RVA = "0x30A89B0", Offset = "0x30A6FB0", VA = "0x1830A89B0")]
	internal DragVisualMode RaiseDrop(Vector2 pointerPosition, DragAndDropArgs dragAndDropArgs)
	{
		return default(DragVisualMode);
	}

	[Token(Token = "0x6000478")]
	[Address(RVA = "0x30A9A50", Offset = "0x30A8050", VA = "0x1830A9A50")]
	internal float ResolveItemHeight(float height = -1f)
	{
		return default(float);
	}

	[Token(Token = "0x6000486")]
	[Address(RVA = "0x30A6350", Offset = "0x30A4950", VA = "0x1830A6350", Slot = "145")]
	private protected virtual void CreateVirtualizationController()
	{
	}

	[Token(Token = "0x6000487")]
	[Address(RVA = "0x30A6BB0", Offset = "0x30A51B0", VA = "0x1830A6BB0")]
	internal CollectionVirtualizationController GetOrCreateVirtualizationController()
	{
		return null;
	}

	[Token(Token = "0x6000488")]
	internal void CreateVirtualizationController<T>() where T : ReusableCollectionItem, new()
	{
	}

	[Token(Token = "0x6000489")]
	[Address(RVA = "0x30A6B50", Offset = "0x30A5150", VA = "0x1830A6B50")]
	internal CollectionViewController GetOrCreateViewController()
	{
		return null;
	}

	[Token(Token = "0x600048A")]
	protected abstract CollectionViewController CreateViewController();

	[Token(Token = "0x600048B")]
	[Address(RVA = "0x30AA850", Offset = "0x30A8E50", VA = "0x1830AA850", Slot = "147")]
	public virtual void SetViewController(CollectionViewController controller)
	{
	}

	[Token(Token = "0x600048C")]
	[Address(RVA = "0x30A62F0", Offset = "0x30A48F0", VA = "0x1830A62F0", Slot = "148")]
	internal virtual ListViewDragger CreateDragger()
	{
		return null;
	}

	[Token(Token = "0x600048D")]
	[Address(RVA = "0x30A70A0", Offset = "0x30A56A0", VA = "0x1830A70A0")]
	internal void InitializeDragAndDropController(bool enableReordering)
	{
	}

	[Token(Token = "0x600048E")]
	internal abstract ICollectionDragAndDropController CreateDragAndDropController();

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x30ABB90", Offset = "0x30AA190", VA = "0x1830ABB90")]
	public BaseVerticalCollectionView()
	{
	}

	[Token(Token = "0x6000492")]
	[Address(RVA = "0x30AC3D0", Offset = "0x30AA9D0", VA = "0x1830AC3D0")]
	public BaseVerticalCollectionView(IList itemsSource, float itemHeight = -1f)
	{
	}

	[Token(Token = "0x6000493")]
	[Address(RVA = "0x30A6BF0", Offset = "0x30A51F0", VA = "0x1830A6BF0")]
	public VisualElement GetRootElementForId(int id)
	{
		return null;
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x30A7060", Offset = "0x30A5660", VA = "0x1830A7060", Slot = "150")]
	internal virtual bool HasValidDataAndBindings()
	{
		return default(bool);
	}

	[Token(Token = "0x6000495")]
	[Address(RVA = "0x30A7C70", Offset = "0x30A6270", VA = "0x1830A7C70")]
	private void OnItemIndexChanged(int srcIndex, int dstIndex)
	{
	}

	[Token(Token = "0x6000496")]
	[Address(RVA = "0x30A7CA0", Offset = "0x30A62A0", VA = "0x1830A7CA0")]
	private void OnItemsSourceChanged()
	{
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x30A8DC0", Offset = "0x30A73C0", VA = "0x1830A8DC0")]
	public void RefreshItems()
	{
	}

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x30A8C30", Offset = "0x30A7230", VA = "0x1830A8C30")]
	public void Rebuild()
	{
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x30A9A70", Offset = "0x30A8070", VA = "0x1830A9A70")]
	internal void ScheduleRebuild()
	{
	}

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x30A8F80", Offset = "0x30A7580", VA = "0x1830A8F80")]
	private void RefreshSelection()
	{
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x30A8010", Offset = "0x30A6610", VA = "0x1830A8010", Slot = "151")]
	private protected virtual void PostRefresh()
	{
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x30A9C20", Offset = "0x30A8220", VA = "0x1830A9C20")]
	public void ScrollToItem(int index)
	{
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x30A9B90", Offset = "0x30A8190", VA = "0x1830A9B90")]
	public void ScrollToItemById(int id)
	{
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x30A7E30", Offset = "0x30A6430", VA = "0x1830A7E30")]
	private void OnScroll(Vector2 offset)
	{
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x30A99A0", Offset = "0x30A7FA0", VA = "0x1830A99A0")]
	private void Resize(Vector2 size)
	{
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x30A74D0", Offset = "0x30A5AD0", VA = "0x1830A74D0")]
	private void OnAttachToPanel(AttachToPanelEvent evt)
	{
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x30A79C0", Offset = "0x30A5FC0", VA = "0x1830A79C0")]
	private void OnDetachFromPanel(DetachFromPanelEvent evt)
	{
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x30A5830", Offset = "0x30A3E30", VA = "0x1830A5830")]
	private bool Apply(KeyboardNavigationOperation op, bool shiftKey, bool altKey)
	{
		return default(bool);
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x30A5E10", Offset = "0x30A4410", VA = "0x1830A5E10")]
	private void Apply(KeyboardNavigationOperation op, EventBase sourceEvent)
	{
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x795DE0", Offset = "0x7943E0", VA = "0x180795DE0", Slot = "152")]
	private protected virtual bool HandleItemNavigation(bool moveIn, bool altKey)
	{
		return default(bool);
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x30A7DA0", Offset = "0x30A63A0", VA = "0x1830A7DA0")]
	private void OnPointerMove(PointerMoveEvent evt)
	{
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x30A7D90", Offset = "0x30A6390", VA = "0x1830A7D90")]
	private void OnPointerDown(PointerDownEvent evt)
	{
	}

	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x30A7D20", Offset = "0x30A6320", VA = "0x1830A7D20")]
	private void OnPointerCancel(PointerCancelEvent evt)
	{
	}

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x30A7E20", Offset = "0x30A6420", VA = "0x1830A7E20")]
	private void OnPointerUp(PointerUpEvent evt)
	{
	}

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x30A8100", Offset = "0x30A6700", VA = "0x1830A8100")]
	private void ProcessPointerDown(IPointerEvent evt)
	{
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x30A84E0", Offset = "0x30A6AE0", VA = "0x1830A84E0")]
	private void ProcessPointerUp(IPointerEvent evt)
	{
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x30A6630", Offset = "0x30A4C30", VA = "0x1830A6630")]
	private void DoSelect(Vector2 localPosition, int mouseButton, int clickCount, bool actionKey, bool shiftKey)
	{
	}

	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x30A6390", Offset = "0x30A4990", VA = "0x1830A6390")]
	internal void DoRangeSelection(int rangeSelectionFinalIndex)
	{
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x30A8880", Offset = "0x30A6E80", VA = "0x1830A8880")]
	private void ProcessSingleClick(int clickedIndex)
	{
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x30A9C90", Offset = "0x30A8290", VA = "0x1830A9C90")]
	internal void SelectAll()
	{
	}

	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x30A5670", Offset = "0x30A3C70", VA = "0x1830A5670")]
	public void AddToSelection(int index)
	{
	}

	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x30A5710", Offset = "0x30A3D10", VA = "0x1830A5710")]
	internal void AddToSelection(ReadOnlySpan<int> indexes)
	{
	}

	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x30A5390", Offset = "0x30A3990", VA = "0x1830A5390")]
	private void AddToSelectionWithoutValidation(int index)
	{
	}

	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x30A9950", Offset = "0x30A7F50", VA = "0x1830A9950")]
	public void RemoveFromSelection(int index)
	{
	}

	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x30A9600", Offset = "0x30A7C00", VA = "0x1830A9600")]
	private void RemoveFromSelectionWithoutValidation(int index)
	{
	}

	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x30AA790", Offset = "0x30A8D90", VA = "0x1830AA790")]
	public void SetSelection(int index)
	{
	}

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x30AA760", Offset = "0x30A8D60", VA = "0x1830AA760")]
	internal void SetSelection(ReadOnlySpan<int> indices)
	{
	}

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x30AA750", Offset = "0x30A8D50", VA = "0x1830AA750")]
	public void SetSelectionWithoutNotify(IEnumerable<int> indices)
	{
	}

	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x30A9F70", Offset = "0x30A8570", VA = "0x1830A9F70")]
	internal void SetSelectionInternal(IEnumerable<int> indices, bool sendNotification)
	{
	}

	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x30AA4C0", Offset = "0x30A8AC0", VA = "0x1830AA4C0")]
	internal void SetSelectionInternal(ReadOnlySpan<int> indices, bool sendNotification)
	{
	}

	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x30A71C0", Offset = "0x30A57C0", VA = "0x1830A71C0")]
	private bool MatchesExistingSelection(ReadOnlySpan<int> indices)
	{
		return default(bool);
	}

	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x30A7440", Offset = "0x30A5A40", VA = "0x1830A7440")]
	private void NotifyOfSelectionChange()
	{
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x30A6270", Offset = "0x30A4870", VA = "0x1830A6270")]
	public void ClearSelection()
	{
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x30A5FB0", Offset = "0x30A45B0", VA = "0x1830A5FB0")]
	private void ClearSelectionWithoutValidation()
	{
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x30A7FC0", Offset = "0x30A65C0", VA = "0x1830A7FC0", Slot = "135")]
	internal override void OnViewDataReady()
	{
	}

	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x30A6CF0", Offset = "0x30A52F0", VA = "0x1830A6CF0", Slot = "8")]
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
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "12")]
	[EventInterest(EventInterestOptions.Inherit)]
	[Obsolete("ExecuteDefaultAction override has been removed because default event handling was migrated to HandleEventBubbleUp. Please use HandleEventBubbleUp.", false)]
	protected override void ExecuteDefaultAction(EventBase evt)
	{
	}

	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x30A7EB0", Offset = "0x30A64B0", VA = "0x1830A7EB0")]
	private void OnSizeChanged(GeometryChangedEvent evt)
	{
	}

	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x30A7810", Offset = "0x30A5E10", VA = "0x1830A7810")]
	private void OnCustomStyleResolved(CustomStyleResolvedEvent e)
	{
	}

	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "143")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnBeforeSerialize()
	{
	}

	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x30AAC60", Offset = "0x30A9260", VA = "0x1830AAC60", Slot = "144")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnAfterDeserialize()
	{
	}
}
