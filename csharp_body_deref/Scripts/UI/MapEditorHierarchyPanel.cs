// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorHierarchyPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/MapEditorHierarchyPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorHierarchyPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using GameManagers;
using Il2CppDummyDll;
using Map;
using Settings;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000828")]
internal class MapEditorHierarchyPanel : MapEditorScaledPanel
{
	[Token(Token = "0x2000829")]
	private enum DropMode
	{
		[Token(Token = "0x4002919")]
		None,
		[Token(Token = "0x400291A")]
		Parent,
		[Token(Token = "0x400291B")]
		InsertBefore,
		[Token(Token = "0x400291C")]
		InsertAfter
	}

	[Token(Token = "0x200082A")]
	private struct RowData
	{
		[Token(Token = "0x400291D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int Id;

		[Token(Token = "0x400291E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		public int Depth;

		[Token(Token = "0x6004F0F")]
		[Address(RVA = "0xACCA30", Offset = "0xACB030", VA = "0x180ACCA30")]
		public RowData(int id, int depth)
		{
		}
	}

	[Token(Token = "0x40028E3")]
	private const int ObjectsPerPage = 30;

	[Token(Token = "0x40028E4")]
	private const float DragThreshold = 6f;

	[Token(Token = "0x40028E5")]
	private const float AutoScrollEdgeThreshold = 70f;

	[Token(Token = "0x40028E6")]
	private const float AutoScrollSpeed = 0.9f;

	[Token(Token = "0x40028E7")]
	private const int TreeIndentStep = 18;

	[Token(Token = "0x40028E8")]
	private const int TreeIndentBase = 6;

	[Token(Token = "0x40028E9")]
	private const int VirtualBufferRows = 14;

	[Token(Token = "0x40028EA")]
	private const float VirtualFallbackRowHeight = 22f;

	[Token(Token = "0x40028EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private List<GameObject> _itemPool;

	[Token(Token = "0x40028EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private List<RowData> _rows;

	[Token(Token = "0x40028ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private Dictionary<int, GameObject> _idToItem;

	[Token(Token = "0x40028EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Dictionary<int, int> _idToIndex;

	[Token(Token = "0x40028EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Dictionary<int, int> _indexToId;

	[Token(Token = "0x40028F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private HashSet<int> _selected;

	[Token(Token = "0x40028F1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private HashSet<int> _expanded;

	[Token(Token = "0x40028F2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private Dictionary<int, List<int>> _treeChildren;

	[Token(Token = "0x40028F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private List<int> _treeRoots;

	[Token(Token = "0x40028F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private int _lastClickedItem;

	[Token(Token = "0x40028F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xDC")]
	private float _lastclickedTime;

	[Token(Token = "0x40028F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private bool _draggingItem;

	[Token(Token = "0x40028F7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE1")]
	private bool _suppressClick;

	[Token(Token = "0x40028F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE4")]
	private int _dragSourceId;

	[Token(Token = "0x40028F9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private int _dropTargetId;

	[Token(Token = "0x40028FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xEC")]
	private bool _dropToRoot;

	[Token(Token = "0x40028FB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private Vector2 _dragStartMouse;

	[Token(Token = "0x40028FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private HashSet<int> _dragTopLevel;

	[Token(Token = "0x40028FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private DropMode _currentDropMode;

	[Token(Token = "0x40028FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private GameObject _insertLineIndicator;

	[Token(Token = "0x40028FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private RectTransform _insertLineRect;

	[Token(Token = "0x4002900")]
	private const float DoubleClickTime = 0.5f;

	[Token(Token = "0x4002901")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private MapEditorMenu _menu;

	[Token(Token = "0x4002902")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private ElementStyle _style;

	[Token(Token = "0x4002903")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private MapEditorGameManager _gameManager;

	[Token(Token = "0x4002904")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private InputSettingElement _searchInput;

	[Token(Token = "0x4002905")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	private StringSetting _searchSetting;

	[Token(Token = "0x4002906")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	private bool _treeViewEnabled;

	[Token(Token = "0x4002907")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private GameObject _modeButton;

	[Token(Token = "0x4002908")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private Text _pageLabel;

	[Token(Token = "0x4002909")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private int _currentPage;

	[Token(Token = "0x400290A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private GameObject _pageLeftButton;

	[Token(Token = "0x400290B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private GameObject _pageRightButton;

	[Token(Token = "0x400290C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	private ScrollRect _scrollRect;

	[Token(Token = "0x400290D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private LayoutElement _topSpacer;

	[Token(Token = "0x400290E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	private LayoutElement _bottomSpacer;

	[Token(Token = "0x400290F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	private float _virtualRowHeight;

	[Token(Token = "0x4002910")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18C")]
	private int _dropIndicatorId;

	[Token(Token = "0x4002911")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	private GameObject _rootDropOverlay;

	[Token(Token = "0x4002912")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x198")]
	private Text _rootDropOverlayText;

	[Token(Token = "0x4002913")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A0")]
	private GameObject _dragGhost;

	[Token(Token = "0x4002914")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A8")]
	private RectTransform _dragGhostRect;

	[Token(Token = "0x4002915")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B0")]
	private Text _dragGhostText;

	[Token(Token = "0x4002916")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B8")]
	private MapEditorContextMenu _contextMenu;

	[Token(Token = "0x4002917")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C0")]
	private int _contextTargetId;

	[Token(Token = "0x17000E83")]
	protected override float Width
	{
		[Token(Token = "0x6004EBF")]
		[Address(RVA = "0x21D9240", Offset = "0x21D7840", VA = "0x1821D9240", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E84")]
	protected override float Height
	{
		[Token(Token = "0x6004EC0")]
		[Address(RVA = "0x22B8870", Offset = "0x22B6E70", VA = "0x1822B8870", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E85")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6004EC1")]
		[Address(RVA = "0x22B8880", Offset = "0x22B6E80", VA = "0x1822B8880", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E86")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6004EC5")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E87")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004EC6")]
		[Address(RVA = "0x1D9F790", Offset = "0x1D9DD90", VA = "0x181D9F790", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E88")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004EC7")]
		[Address(RVA = "0x847040", Offset = "0x845640", VA = "0x180847040", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E89")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004EC8")]
		[Address(RVA = "0x1B56090", Offset = "0x1B54690", VA = "0x181B56090", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E8A")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004EC9")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004EC2")]
	[Address(RVA = "0x22B3500", Offset = "0x22B1B00", VA = "0x1822B3500", Slot = "33")]
	protected override float GetWidth()
	{
		return default(float);
	}

	[Token(Token = "0x6004EC3")]
	[Address(RVA = "0x22B21B0", Offset = "0x22B07B0", VA = "0x1822B21B0", Slot = "34")]
	protected override float GetHeight()
	{
		return default(float);
	}

	[Token(Token = "0x6004EC4")]
	[Address(RVA = "0x22B2E70", Offset = "0x22B1470", VA = "0x1822B2E70")]
	private static float GetTopOffset()
	{
		return default(float);
	}

	[Token(Token = "0x6004ECA")]
	[Address(RVA = "0x22B2B60", Offset = "0x22B1160", VA = "0x1822B2B60", Slot = "32")]
	public override float GetPanelVerticalOffset()
	{
		return default(float);
	}

	[Token(Token = "0x6004ECB")]
	[Address(RVA = "0x22B6570", Offset = "0x22B4B70", VA = "0x1822B6570", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004ECC")]
	[Address(RVA = "0x22AD620", Offset = "0x22ABC20", VA = "0x1822AD620")]
	private void AddResizeHandle()
	{
	}

	[Token(Token = "0x6004ECD")]
	[Address(RVA = "0x22B72B0", Offset = "0x22B58B0", VA = "0x1822B72B0", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6004ECE")]
	[Address(RVA = "0x22B7840", Offset = "0x22B5E40", VA = "0x1822B7840")]
	public void Sync()
	{
	}

	[Token(Token = "0x6004ECF")]
	[Address(RVA = "0x22B5200", Offset = "0x22B3800", VA = "0x1822B5200")]
	private void OnModeButtonClick()
	{
	}

	[Token(Token = "0x6004ED0")]
	[Address(RVA = "0x22B7FF0", Offset = "0x22B65F0", VA = "0x1822B7FF0")]
	private void UpdateModeButtonText()
	{
	}

	[Token(Token = "0x6004ED1")]
	[Address(RVA = "0x22AECD0", Offset = "0x22AD2D0", VA = "0x1822AECD0")]
	private void BuildRows()
	{
	}

	[Token(Token = "0x6004ED2")]
	[Address(RVA = "0x22AEA70", Offset = "0x22AD070", VA = "0x1822AEA70")]
	private void BuildFlatRows(string search)
	{
	}

	[Token(Token = "0x6004ED3")]
	[Address(RVA = "0x22AFA30", Offset = "0x22AE030", VA = "0x1822AFA30")]
	private void BuildTreeRows(string search)
	{
	}

	[Token(Token = "0x6004ED4")]
	[Address(RVA = "0x22AF1F0", Offset = "0x22AD7F0", VA = "0x1822AF1F0")]
	private void BuildTreeGraph()
	{
	}

	[Token(Token = "0x6004ED5")]
	[Address(RVA = "0x22AEEC0", Offset = "0x22AD4C0", VA = "0x1822AEEC0")]
	private HashSet<int> BuildSearchContext(HashSet<int> matches)
	{
		return null;
	}

	[Token(Token = "0x6004ED6")]
	[Address(RVA = "0x22AD480", Offset = "0x22ABA80", VA = "0x1822AD480")]
	private void AddDescendants(int id, HashSet<int> result)
	{
	}

	[Token(Token = "0x6004ED7")]
	[Address(RVA = "0x22AD840", Offset = "0x22ABE40", VA = "0x1822AD840")]
	private void AddTreeRowsRecursive(int id, int depth, HashSet<int> context, bool forceExpand)
	{
	}

	[Token(Token = "0x6004ED8")]
	[Address(RVA = "0x22B3B10", Offset = "0x22B2110", VA = "0x1822B3B10")]
	private bool MatchesSearch(MapObject obj, string search)
	{
		return default(bool);
	}

	[Token(Token = "0x6004ED9")]
	[Address(RVA = "0x22B0EB0", Offset = "0x22AF4B0", VA = "0x1822B0EB0")]
	private void EnsurePoolSize(int size)
	{
	}

	[Token(Token = "0x6004EDA")]
	[Address(RVA = "0x22ADE80", Offset = "0x22AC480", VA = "0x1822ADE80")]
	private void BindPooledItem(GameObject go, RowData row, int rowIndex)
	{
	}

	[Token(Token = "0x6004EDB")]
	[Address(RVA = "0x22B5EA0", Offset = "0x22B44A0", VA = "0x1822B5EA0")]
	private void SetTreeArrowIcon(GameObject arrowObject, string icon)
	{
	}

	[Token(Token = "0x6004EDC")]
	[Address(RVA = "0x22B2860", Offset = "0x22B0E60", VA = "0x1822B2860")]
	private GameObject GetOrCreateTreeArrowSpacer(GameObject row, int siblingIndex)
	{
		return null;
	}

	[Token(Token = "0x6004EDD")]
	[Address(RVA = "0x22B3000", Offset = "0x22B1600", VA = "0x1822B3000")]
	private RectTransform GetViewportRect()
	{
		return null;
	}

	[Token(Token = "0x6004EDE")]
	[Address(RVA = "0x22B1010", Offset = "0x22AF610", VA = "0x1822B1010")]
	private void EnsureVirtualizationElements()
	{
	}

	[Token(Token = "0x6004EDF")]
	[Address(RVA = "0x22AFE70", Offset = "0x22AE470", VA = "0x1822AFE70")]
	private LayoutElement CreateSpacer(string name)
	{
		return null;
	}

	[Token(Token = "0x6004EE0")]
	[Address(RVA = "0x22B6410", Offset = "0x22B4A10", VA = "0x1822B6410")]
	private void SetVirtualizationActive(bool active)
	{
	}

	[Token(Token = "0x6004EE1")]
	[Address(RVA = "0x22B5360", Offset = "0x22B3960", VA = "0x1822B5360")]
	private void OrderVirtualizedChildren()
	{
	}

	[Token(Token = "0x6004EE2")]
	[Address(RVA = "0x22B5340", Offset = "0x22B3940", VA = "0x1822B5340")]
	private void OnScrollValueChanged(Vector2 value)
	{
	}

	[Token(Token = "0x6004EE3")]
	[Address(RVA = "0x22B3430", Offset = "0x22B1A30", VA = "0x1822B3430")]
	private float GetVirtualStride()
	{
		return default(float);
	}

	[Token(Token = "0x6004EE4")]
	[Address(RVA = "0x22B3140", Offset = "0x22B1740", VA = "0x1822B3140")]
	private int GetVirtualPoolSize(int totalRows)
	{
		return default(int);
	}

	[Token(Token = "0x6004EE5")]
	[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480")]
	private float GetListHeaderOffset()
	{
		return default(float);
	}

	[Token(Token = "0x6004EE6")]
	[Address(RVA = "0x22B32C0", Offset = "0x22B18C0", VA = "0x1822B32C0")]
	private int GetVirtualStartIndex(int maxStart, int totalRows, int poolSize, float stride)
	{
		return default(int);
	}

	[Token(Token = "0x6004EE7")]
	[Address(RVA = "0x22B57C0", Offset = "0x22B3DC0", VA = "0x1822B57C0")]
	private void RenderVirtualizedRows(bool forceRebind = false)
	{
	}

	[Token(Token = "0x6004EE8")]
	[Address(RVA = "0x22B0150", Offset = "0x22AE750", VA = "0x1822B0150")]
	private void EnsureDragVisuals()
	{
	}

	[Token(Token = "0x6004EE9")]
	[Address(RVA = "0x22B0070", Offset = "0x22AE670", VA = "0x1822B0070")]
	private void EnsureContextMenu()
	{
	}

	[Token(Token = "0x6004EEA")]
	[Address(RVA = "0x22B4A70", Offset = "0x22B3070", VA = "0x1822B4A70")]
	private void OnItemRightClick(int id, PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004EEB")]
	[Address(RVA = "0x22B3560", Offset = "0x22B1B60", VA = "0x1822B3560")]
	private void HideContextMenu()
	{
	}

	[Token(Token = "0x6004EEC")]
	[Address(RVA = "0x22B2440", Offset = "0x22B0A40", VA = "0x1822B2440")]
	private GameObject GetOrCreateRowDropOverlay(GameObject row)
	{
		return null;
	}

	[Token(Token = "0x6004EED")]
	[Address(RVA = "0x22B54E0", Offset = "0x22B3AE0", VA = "0x1822B54E0")]
	private void RefreshDropIndicators()
	{
	}

	[Token(Token = "0x6004EEE")]
	[Address(RVA = "0x22B5E00", Offset = "0x22B4400", VA = "0x1822B5E00")]
	private void SetRootDropOverlay(bool active)
	{
	}

	[Token(Token = "0x6004EEF")]
	[Address(RVA = "0x22B6FE0", Offset = "0x22B55E0", VA = "0x1822B6FE0")]
	private void ShowInsertLine(int targetId, bool atTop)
	{
	}

	[Token(Token = "0x6004EF0")]
	[Address(RVA = "0x22B3640", Offset = "0x22B1C40", VA = "0x1822B3640")]
	private void HideInsertLine()
	{
	}

	[Token(Token = "0x6004EF1")]
	[Address(RVA = "0x22B6DE0", Offset = "0x22B53E0", VA = "0x1822B6DE0")]
	private void ShowDragGhost(int id, Vector2 mousePosition)
	{
	}

	[Token(Token = "0x6004EF2")]
	[Address(RVA = "0x22B3BD0", Offset = "0x22B21D0", VA = "0x1822B3BD0")]
	private void MoveDragGhost(Vector2 mousePosition)
	{
	}

	[Token(Token = "0x6004EF3")]
	[Address(RVA = "0x22B35B0", Offset = "0x22B1BB0", VA = "0x1822B35B0")]
	private void HideDragGhost()
	{
	}

	[Token(Token = "0x6004EF4")]
	[Address(RVA = "0x22B82D0", Offset = "0x22B68D0", VA = "0x1822B82D0")]
	private void Update()
	{
	}

	[Token(Token = "0x6004EF5")]
	[Address(RVA = "0x22ADB70", Offset = "0x22AC170", VA = "0x1822ADB70")]
	private bool AutoScrollDuringDrag()
	{
		return default(bool);
	}

	[Token(Token = "0x6004EF6")]
	[Address(RVA = "0x22B7CC0", Offset = "0x22B62C0", VA = "0x1822B7CC0")]
	private void ToggleExpanded(int id, bool expand)
	{
	}

	[Token(Token = "0x6004EF7")]
	[Address(RVA = "0x22B5320", Offset = "0x22B3920", VA = "0x1822B5320")]
	private void OnPageClick(bool left)
	{
	}

	[Token(Token = "0x6004EF8")]
	[Address(RVA = "0x22B1C60", Offset = "0x22B0260", VA = "0x1822B1C60")]
	public void FocusSelectionFromScene()
	{
	}

	[Token(Token = "0x6004EF9")]
	[Address(RVA = "0x22B18C0", Offset = "0x22AFEC0", VA = "0x1822B18C0")]
	private void FocusObject(int id)
	{
	}

	[Token(Token = "0x6004EFA")]
	[Address(RVA = "0x22B1FD0", Offset = "0x22B05D0", VA = "0x1822B1FD0")]
	private void FocusVirtualRow(int rowIndex, int totalRows)
	{
	}

	[Token(Token = "0x6004EFB")]
	[Address(RVA = "0x22B1380", Offset = "0x22AF980", VA = "0x1822B1380")]
	private bool ExpandAncestors(int id)
	{
		return default(bool);
	}

	[Token(Token = "0x6004EFC")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void OnButtonRelease(int id)
	{
	}

	[Token(Token = "0x6004EFD")]
	[Address(RVA = "0x22B42F0", Offset = "0x22B28F0", VA = "0x1822B42F0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6004EFE")]
	[Address(RVA = "0x22B4A20", Offset = "0x22B3020", VA = "0x1822B4A20")]
	private void OnItemPointerDown(int id, PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004EFF")]
	[Address(RVA = "0x22B43A0", Offset = "0x22B29A0", VA = "0x1822B43A0")]
	private void OnItemBeginDrag(int id, PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004F00")]
	[Address(RVA = "0x22B4720", Offset = "0x22B2D20", VA = "0x1822B4720")]
	private void OnItemDrag(int id, PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004F01")]
	[Address(RVA = "0x22B7E40", Offset = "0x22B6440", VA = "0x1822B7E40")]
	private void UpdateDropTargetFromPointer(Vector2 screenPosition, Camera eventCamera)
	{
	}

	[Token(Token = "0x6004F02")]
	[Address(RVA = "0x22B4800", Offset = "0x22B2E00", VA = "0x1822B4800")]
	private void OnItemEndDrag(int id, PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004F03")]
	[Address(RVA = "0x22B1510", Offset = "0x22AFB10", VA = "0x1822B1510")]
	private int FindHoveredItem(Vector2 screenPosition, Camera eventCamera, out DropMode mode)
	{
		return default(int);
	}

	[Token(Token = "0x6004F04")]
	[Address(RVA = "0x22B3840", Offset = "0x22B1E40", VA = "0x1822B3840")]
	private bool IsValidDropTarget(int targetId)
	{
		return default(bool);
	}

	[Token(Token = "0x6004F05")]
	[Address(RVA = "0x22B36C0", Offset = "0x22B1CC0", VA = "0x1822B36C0")]
	private bool IsDescendant(int id, int ancestorId)
	{
		return default(bool);
	}

	[Token(Token = "0x6004F06")]
	[Address(RVA = "0x22B2BB0", Offset = "0x22B11B0", VA = "0x1822B2BB0")]
	private HashSet<int> GetTopLevelIds(HashSet<int> ids)
	{
		return null;
	}

	[Token(Token = "0x6004F07")]
	[Address(RVA = "0x22B3CD0", Offset = "0x22B22D0", VA = "0x1822B3CD0")]
	private void OnButtonClick(int id)
	{
	}

	[Token(Token = "0x6004F08")]
	[Address(RVA = "0x22B72C0", Offset = "0x22B58C0", VA = "0x1822B72C0")]
	public void SyncSelectedItems()
	{
	}

	[Token(Token = "0x6004F09")]
	[Address(RVA = "0x22B84F0", Offset = "0x22B6AF0", VA = "0x1822B84F0")]
	public MapEditorHierarchyPanel()
	{
	}
}
