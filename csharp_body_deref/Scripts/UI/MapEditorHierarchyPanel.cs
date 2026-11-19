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

[Token(Token = "0x20008A6")]
internal class MapEditorHierarchyPanel : MapEditorScaledPanel
{
	[Token(Token = "0x20008A7")]
	private enum DropMode
	{
		[Token(Token = "0x4002BD2")]
		None,
		[Token(Token = "0x4002BD3")]
		Parent,
		[Token(Token = "0x4002BD4")]
		InsertBefore,
		[Token(Token = "0x4002BD5")]
		InsertAfter
	}

	[Token(Token = "0x20008A8")]
	private struct RowData
	{
		[Token(Token = "0x4002BD6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int Id;

		[Token(Token = "0x4002BD7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		public int Depth;

		[Token(Token = "0x60052AD")]
		[Address(RVA = "0x5C77070", Offset = "0x5C76070", VA = "0x5C77070")]
		public RowData(int id, int depth)
		{
		}
	}

	[Token(Token = "0x4002B9C")]
	private const int ObjectsPerPage = 30;

	[Token(Token = "0x4002B9D")]
	private const float DragThreshold = 6f;

	[Token(Token = "0x4002B9E")]
	private const float AutoScrollEdgeThreshold = 70f;

	[Token(Token = "0x4002B9F")]
	private const float AutoScrollSpeed = 0.9f;

	[Token(Token = "0x4002BA0")]
	private const int TreeIndentStep = 18;

	[Token(Token = "0x4002BA1")]
	private const int TreeIndentBase = 6;

	[Token(Token = "0x4002BA2")]
	private const int VirtualBufferRows = 14;

	[Token(Token = "0x4002BA3")]
	private const float VirtualFallbackRowHeight = 22f;

	[Token(Token = "0x4002BA4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private List<GameObject> _itemPool;

	[Token(Token = "0x4002BA5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private List<RowData> _rows;

	[Token(Token = "0x4002BA6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private Dictionary<int, GameObject> _idToItem;

	[Token(Token = "0x4002BA7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Dictionary<int, int> _idToIndex;

	[Token(Token = "0x4002BA8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Dictionary<int, int> _indexToId;

	[Token(Token = "0x4002BA9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private HashSet<int> _selected;

	[Token(Token = "0x4002BAA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private HashSet<int> _expanded;

	[Token(Token = "0x4002BAB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private Dictionary<int, List<int>> _treeChildren;

	[Token(Token = "0x4002BAC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private List<int> _treeRoots;

	[Token(Token = "0x4002BAD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private int _lastClickedItem;

	[Token(Token = "0x4002BAE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xDC")]
	private float _lastclickedTime;

	[Token(Token = "0x4002BAF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private bool _draggingItem;

	[Token(Token = "0x4002BB0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE1")]
	private bool _suppressClick;

	[Token(Token = "0x4002BB1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE4")]
	private int _dragSourceId;

	[Token(Token = "0x4002BB2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private int _dropTargetId;

	[Token(Token = "0x4002BB3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xEC")]
	private bool _dropToRoot;

	[Token(Token = "0x4002BB4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private Vector2 _dragStartMouse;

	[Token(Token = "0x4002BB5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private HashSet<int> _dragTopLevel;

	[Token(Token = "0x4002BB6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private DropMode _currentDropMode;

	[Token(Token = "0x4002BB7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private GameObject _insertLineIndicator;

	[Token(Token = "0x4002BB8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private RectTransform _insertLineRect;

	[Token(Token = "0x4002BB9")]
	private const float DoubleClickTime = 0.5f;

	[Token(Token = "0x4002BBA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private MapEditorMenu _menu;

	[Token(Token = "0x4002BBB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private ElementStyle _style;

	[Token(Token = "0x4002BBC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private MapEditorGameManager _gameManager;

	[Token(Token = "0x4002BBD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private InputSettingElement _searchInput;

	[Token(Token = "0x4002BBE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	private StringSetting _searchSetting;

	[Token(Token = "0x4002BBF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	private bool _treeViewEnabled;

	[Token(Token = "0x4002BC0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private GameObject _modeButton;

	[Token(Token = "0x4002BC1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private Text _pageLabel;

	[Token(Token = "0x4002BC2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private int _currentPage;

	[Token(Token = "0x4002BC3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private GameObject _pageLeftButton;

	[Token(Token = "0x4002BC4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private GameObject _pageRightButton;

	[Token(Token = "0x4002BC5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	private ScrollRect _scrollRect;

	[Token(Token = "0x4002BC6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private LayoutElement _topSpacer;

	[Token(Token = "0x4002BC7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	private LayoutElement _bottomSpacer;

	[Token(Token = "0x4002BC8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	private float _virtualRowHeight;

	[Token(Token = "0x4002BC9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18C")]
	private int _dropIndicatorId;

	[Token(Token = "0x4002BCA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	private GameObject _rootDropOverlay;

	[Token(Token = "0x4002BCB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x198")]
	private Text _rootDropOverlayText;

	[Token(Token = "0x4002BCC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A0")]
	private GameObject _dragGhost;

	[Token(Token = "0x4002BCD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A8")]
	private RectTransform _dragGhostRect;

	[Token(Token = "0x4002BCE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B0")]
	private Text _dragGhostText;

	[Token(Token = "0x4002BCF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B8")]
	private MapEditorContextMenu _contextMenu;

	[Token(Token = "0x4002BD0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C0")]
	private int _contextTargetId;

	[Token(Token = "0x17000E84")]
	protected override float Width
	{
		[Token(Token = "0x600525C")]
		[Address(RVA = "0x5C71B30", Offset = "0x5C70B30", VA = "0x5C71B30", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E85")]
	protected override float Height
	{
		[Token(Token = "0x600525D")]
		[Address(RVA = "0x5C71B40", Offset = "0x5C70B40", VA = "0x5C71B40", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E86")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x600525E")]
		[Address(RVA = "0x5C71B50", Offset = "0x5C70B50", VA = "0x5C71B50", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E87")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6005262")]
		[Address(RVA = "0x5C71EB0", Offset = "0x5C70EB0", VA = "0x5C71EB0", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E88")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6005263")]
		[Address(RVA = "0x5C71EC0", Offset = "0x5C70EC0", VA = "0x5C71EC0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E89")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6005264")]
		[Address(RVA = "0x5C71ED0", Offset = "0x5C70ED0", VA = "0x5C71ED0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E8A")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6005265")]
		[Address(RVA = "0x5C71EE0", Offset = "0x5C70EE0", VA = "0x5C71EE0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E8B")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6005266")]
		[Address(RVA = "0x5C71EF0", Offset = "0x5C70EF0", VA = "0x5C71EF0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600525F")]
	[Address(RVA = "0x5C71B60", Offset = "0x5C70B60", VA = "0x5C71B60", Slot = "33")]
	protected override float GetWidth()
	{
		return default(float);
	}

	[Token(Token = "0x6005260")]
	[Address(RVA = "0x5C71BC0", Offset = "0x5C70BC0", VA = "0x5C71BC0", Slot = "34")]
	protected override float GetHeight()
	{
		return default(float);
	}

	[Token(Token = "0x6005261")]
	[Address(RVA = "0x5C71CF0", Offset = "0x5C70CF0", VA = "0x5C71CF0")]
	private static float GetTopOffset()
	{
		return default(float);
	}

	[Token(Token = "0x6005267")]
	[Address(RVA = "0x5C71F00", Offset = "0x5C70F00", VA = "0x5C71F00", Slot = "32")]
	public override float GetPanelVerticalOffset()
	{
		return default(float);
	}

	[Token(Token = "0x6005268")]
	[Address(RVA = "0x5C71F50", Offset = "0x5C70F50", VA = "0x5C71F50", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6005269")]
	[Address(RVA = "0x5C74150", Offset = "0x5C73150", VA = "0x5C74150")]
	private void AddResizeHandle()
	{
	}

	[Token(Token = "0x600526A")]
	[Address(RVA = "0x5C747D0", Offset = "0x5C737D0", VA = "0x5C747D0", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x600526B")]
	[Address(RVA = "0x5C74330", Offset = "0x5C73330", VA = "0x5C74330")]
	public void Sync()
	{
	}

	[Token(Token = "0x600526C")]
	[Address(RVA = "0x5C76570", Offset = "0x5C75570", VA = "0x5C76570")]
	private void OnModeButtonClick()
	{
	}

	[Token(Token = "0x600526D")]
	[Address(RVA = "0x5C76330", Offset = "0x5C75330", VA = "0x5C76330")]
	private void UpdateModeButtonText()
	{
	}

	[Token(Token = "0x600526E")]
	[Address(RVA = "0x5C76820", Offset = "0x5C75820", VA = "0x5C76820")]
	private Color IconColor()
	{
		return default(Color);
	}

	[Token(Token = "0x600526F")]
	[Address(RVA = "0x5C74870", Offset = "0x5C73870", VA = "0x5C74870")]
	private void BuildRows()
	{
	}

	[Token(Token = "0x6005270")]
	[Address(RVA = "0x5C768C0", Offset = "0x5C758C0", VA = "0x5C768C0")]
	private void BuildFlatRows(string search)
	{
	}

	[Token(Token = "0x6005271")]
	[Address(RVA = "0x5C76BB0", Offset = "0x5C75BB0", VA = "0x5C76BB0")]
	private void BuildTreeRows(string search)
	{
	}

	[Token(Token = "0x6005272")]
	[Address(RVA = "0x5C72740", Offset = "0x5C71740", VA = "0x5C72740")]
	private void BuildTreeGraph()
	{
	}

	[Token(Token = "0x6005273")]
	[Address(RVA = "0x5C77080", Offset = "0x5C76080", VA = "0x5C77080")]
	private HashSet<int> BuildSearchContext(HashSet<int> matches)
	{
		return null;
	}

	[Token(Token = "0x6005274")]
	[Address(RVA = "0x5C77780", Offset = "0x5C76780", VA = "0x5C77780")]
	private void AddDescendants(int id, HashSet<int> result)
	{
	}

	[Token(Token = "0x6005275")]
	[Address(RVA = "0x5C77450", Offset = "0x5C76450", VA = "0x5C77450")]
	private void AddTreeRowsRecursive(int id, int depth, HashSet<int> context, bool forceExpand)
	{
	}

	[Token(Token = "0x6005276")]
	[Address(RVA = "0x5C76FC0", Offset = "0x5C75FC0", VA = "0x5C76FC0")]
	private bool MatchesSearch(MapObject obj, string search)
	{
		return default(bool);
	}

	[Token(Token = "0x6005277")]
	[Address(RVA = "0x5C74F60", Offset = "0x5C73F60", VA = "0x5C74F60")]
	private void EnsurePoolSize(int size)
	{
	}

	[Token(Token = "0x6005278")]
	[Address(RVA = "0x5C75130", Offset = "0x5C74130", VA = "0x5C75130")]
	private void BindPooledItem(GameObject go, RowData row, int rowIndex)
	{
	}

	[Token(Token = "0x6005279")]
	[Address(RVA = "0x5C78200", Offset = "0x5C77200", VA = "0x5C78200")]
	private void SetTreeArrowIcon(GameObject arrowObject, string icon)
	{
	}

	[Token(Token = "0x600527A")]
	[Address(RVA = "0x5C77F10", Offset = "0x5C76F10", VA = "0x5C77F10")]
	private GameObject GetOrCreateTreeArrowSpacer(GameObject row, int siblingIndex)
	{
		return null;
	}

	[Token(Token = "0x600527B")]
	[Address(RVA = "0x5C78740", Offset = "0x5C77740", VA = "0x5C78740")]
	private RectTransform GetViewportRect()
	{
		return null;
	}

	[Token(Token = "0x600527C")]
	[Address(RVA = "0x5C73150", Offset = "0x5C72150", VA = "0x5C73150")]
	private void EnsureVirtualizationElements()
	{
	}

	[Token(Token = "0x600527D")]
	[Address(RVA = "0x5C78870", Offset = "0x5C77870", VA = "0x5C78870")]
	private LayoutElement CreateSpacer(string name)
	{
		return null;
	}

	[Token(Token = "0x600527E")]
	[Address(RVA = "0x5C74A50", Offset = "0x5C73A50", VA = "0x5C74A50")]
	private void SetVirtualizationActive(bool active)
	{
	}

	[Token(Token = "0x600527F")]
	[Address(RVA = "0x5C77980", Offset = "0x5C76980", VA = "0x5C77980")]
	private void OrderVirtualizedChildren()
	{
	}

	[Token(Token = "0x6005280")]
	[Address(RVA = "0x5C78A80", Offset = "0x5C77A80", VA = "0x5C78A80")]
	private void OnScrollValueChanged(Vector2 value)
	{
	}

	[Token(Token = "0x6005281")]
	[Address(RVA = "0x5C78AA0", Offset = "0x5C77AA0", VA = "0x5C78AA0")]
	private float GetVirtualStride()
	{
		return default(float);
	}

	[Token(Token = "0x6005282")]
	[Address(RVA = "0x5C78B60", Offset = "0x5C77B60", VA = "0x5C78B60")]
	private int GetVirtualPoolSize(int totalRows)
	{
		return default(int);
	}

	[Token(Token = "0x6005283")]
	[Address(RVA = "0x5C78E80", Offset = "0x5C77E80", VA = "0x5C78E80")]
	private float GetListHeaderOffset()
	{
		return default(float);
	}

	[Token(Token = "0x6005284")]
	[Address(RVA = "0x5C78E90", Offset = "0x5C77E90", VA = "0x5C78E90")]
	private int GetVirtualStartIndex(int maxStart, int totalRows, int poolSize, float stride)
	{
		return default(int);
	}

	[Token(Token = "0x6005285")]
	[Address(RVA = "0x5C74BA0", Offset = "0x5C73BA0", VA = "0x5C74BA0")]
	private void RenderVirtualizedRows(bool forceRebind = false)
	{
	}

	[Token(Token = "0x6005286")]
	[Address(RVA = "0x5C734A0", Offset = "0x5C724A0", VA = "0x5C734A0")]
	private void EnsureDragVisuals()
	{
	}

	[Token(Token = "0x6005287")]
	[Address(RVA = "0x5C792C0", Offset = "0x5C782C0", VA = "0x5C792C0")]
	private void EnsureContextMenu()
	{
	}

	[Token(Token = "0x6005288")]
	[Address(RVA = "0x5C79390", Offset = "0x5C78390", VA = "0x5C79390")]
	private void OnItemRightClick(int id, PointerEventData eventData)
	{
	}

	[Token(Token = "0x6005289")]
	[Address(RVA = "0x5C79F00", Offset = "0x5C78F00", VA = "0x5C79F00")]
	private void HideContextMenu()
	{
	}

	[Token(Token = "0x600528A")]
	[Address(RVA = "0x5C77B00", Offset = "0x5C76B00", VA = "0x5C77B00")]
	private GameObject GetOrCreateRowDropOverlay(GameObject row)
	{
		return null;
	}

	[Token(Token = "0x600528B")]
	[Address(RVA = "0x5C79F90", Offset = "0x5C78F90", VA = "0x5C79F90")]
	private void RefreshDropIndicators()
	{
	}

	[Token(Token = "0x600528C")]
	[Address(RVA = "0x5C747E0", Offset = "0x5C737E0", VA = "0x5C747E0")]
	private void SetRootDropOverlay(bool active)
	{
	}

	[Token(Token = "0x600528D")]
	[Address(RVA = "0x5C7A2F0", Offset = "0x5C792F0", VA = "0x5C7A2F0")]
	private void ShowInsertLine(int targetId, bool atTop)
	{
	}

	[Token(Token = "0x600528E")]
	[Address(RVA = "0x5C767A0", Offset = "0x5C757A0", VA = "0x5C767A0")]
	private void HideInsertLine()
	{
	}

	[Token(Token = "0x600528F")]
	[Address(RVA = "0x5C7A620", Offset = "0x5C79620", VA = "0x5C7A620")]
	private void ShowDragGhost(int id, Vector2 mousePosition)
	{
	}

	[Token(Token = "0x6005290")]
	[Address(RVA = "0x5C7A880", Offset = "0x5C79880", VA = "0x5C7A880")]
	private void MoveDragGhost(Vector2 mousePosition)
	{
	}

	[Token(Token = "0x6005291")]
	[Address(RVA = "0x5C766C0", Offset = "0x5C756C0", VA = "0x5C766C0")]
	private void HideDragGhost()
	{
	}

	[Token(Token = "0x6005292")]
	[Address(RVA = "0x5C7A970", Offset = "0x5C79970", VA = "0x5C7A970")]
	private void Update()
	{
	}

	[Token(Token = "0x6005293")]
	[Address(RVA = "0x5C7AB80", Offset = "0x5C79B80", VA = "0x5C7AB80")]
	private bool AutoScrollDuringDrag()
	{
		return default(bool);
	}

	[Token(Token = "0x6005294")]
	[Address(RVA = "0x5C7AFB0", Offset = "0x5C79FB0", VA = "0x5C7AFB0")]
	private void ToggleExpanded(int id, bool expand)
	{
	}

	[Token(Token = "0x6005295")]
	[Address(RVA = "0x5C7B040", Offset = "0x5C7A040", VA = "0x5C7B040")]
	private void OnPageClick(bool left)
	{
	}

	[Token(Token = "0x6005296")]
	[Address(RVA = "0x5C7B060", Offset = "0x5C7A060", VA = "0x5C7B060")]
	public void FocusSelectionFromScene()
	{
	}

	[Token(Token = "0x6005297")]
	[Address(RVA = "0x5C7B3E0", Offset = "0x5C7A3E0", VA = "0x5C7B3E0")]
	private void FocusObject(int id)
	{
	}

	[Token(Token = "0x6005298")]
	[Address(RVA = "0x5C7B7D0", Offset = "0x5C7A7D0", VA = "0x5C7B7D0")]
	private void FocusVirtualRow(int rowIndex, int totalRows)
	{
	}

	[Token(Token = "0x6005299")]
	[Address(RVA = "0x5C7B620", Offset = "0x5C7A620", VA = "0x5C7B620")]
	private bool ExpandAncestors(int id)
	{
		return default(bool);
	}

	[Token(Token = "0x600529A")]
	[Address(RVA = "0x5C7BAC0", Offset = "0x5C7AAC0", VA = "0x5C7BAC0")]
	private void OnButtonRelease(int id)
	{
	}

	[Token(Token = "0x600529B")]
	[Address(RVA = "0x5C7BAD0", Offset = "0x5C7AAD0", VA = "0x5C7BAD0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600529C")]
	[Address(RVA = "0x5C7BB60", Offset = "0x5C7AB60", VA = "0x5C7BB60")]
	private void OnItemPointerDown(int id, PointerEventData eventData)
	{
	}

	[Token(Token = "0x600529D")]
	[Address(RVA = "0x5C7BB90", Offset = "0x5C7AB90", VA = "0x5C7BB90")]
	private void OnItemBeginDrag(int id, PointerEventData eventData)
	{
	}

	[Token(Token = "0x600529E")]
	[Address(RVA = "0x5C7C240", Offset = "0x5C7B240", VA = "0x5C7C240")]
	private void OnItemDrag(int id, PointerEventData eventData)
	{
	}

	[Token(Token = "0x600529F")]
	[Address(RVA = "0x5C7AE20", Offset = "0x5C79E20", VA = "0x5C7AE20")]
	private void UpdateDropTargetFromPointer(Vector2 screenPosition, Camera eventCamera)
	{
	}

	[Token(Token = "0x60052A0")]
	[Address(RVA = "0x5C7C8F0", Offset = "0x5C7B8F0", VA = "0x5C7C8F0")]
	private void OnItemEndDrag(int id, PointerEventData eventData)
	{
	}

	[Token(Token = "0x60052A1")]
	[Address(RVA = "0x5C7C350", Offset = "0x5C7B350", VA = "0x5C7C350")]
	private int FindHoveredItem(Vector2 screenPosition, Camera eventCamera, out DropMode mode)
	{
		return default(int);
	}

	[Token(Token = "0x60052A2")]
	[Address(RVA = "0x5C7C760", Offset = "0x5C7B760", VA = "0x5C7C760")]
	private bool IsValidDropTarget(int targetId)
	{
		return default(bool);
	}

	[Token(Token = "0x60052A3")]
	[Address(RVA = "0x5C7CB60", Offset = "0x5C7BB60", VA = "0x5C7CB60")]
	private bool IsDescendant(int id, int ancestorId)
	{
		return default(bool);
	}

	[Token(Token = "0x60052A4")]
	[Address(RVA = "0x5C7BF20", Offset = "0x5C7AF20", VA = "0x5C7BF20")]
	private HashSet<int> GetTopLevelIds(HashSet<int> ids)
	{
		return null;
	}

	[Token(Token = "0x60052A5")]
	[Address(RVA = "0x5C7CCD0", Offset = "0x5C7BCD0", VA = "0x5C7CCD0")]
	private void OnButtonClick(int id)
	{
	}

	[Token(Token = "0x60052A6")]
	[Address(RVA = "0x5C75CC0", Offset = "0x5C74CC0", VA = "0x5C75CC0")]
	public void SyncSelectedItems()
	{
	}

	[Token(Token = "0x60052A7")]
	[Address(RVA = "0x5C7D2D0", Offset = "0x5C7C2D0", VA = "0x5C7D2D0")]
	public MapEditorHierarchyPanel()
	{
	}
}
