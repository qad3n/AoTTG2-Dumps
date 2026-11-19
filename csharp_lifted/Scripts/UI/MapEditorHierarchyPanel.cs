// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorHierarchyPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/MapEditorHierarchyPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorHierarchyPanel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
			// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel.RowData$$.ctor): clean
			this.Id = id;
			this.Depth = depth;
			return;
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
			// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$get_Width): clean
			return 325.0;
		}
	}

	[Token(Token = "0x17000E85")]
	protected override float Height
	{
		[Token(Token = "0x600525D")]
		[Address(RVA = "0x5C71B40", Offset = "0x5C70B40", VA = "0x5C71B40", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$get_Height): clean
			return 1005.0;
		}
	}

	[Token(Token = "0x17000E86")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x600525E")]
		[Address(RVA = "0x5C71B50", Offset = "0x5C70B50", VA = "0x5C71B50", Slot = "36")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$get_TopBarHeight): clean
			return 56.0;
		}
	}

	[Token(Token = "0x17000E87")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6005262")]
		[Address(RVA = "0x5C71EB0", Offset = "0x5C70EB0", VA = "0x5C71EB0", Slot = "37")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$get_BottomBarHeight): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000E88")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6005263")]
		[Address(RVA = "0x5C71EC0", Offset = "0x5C70EC0", VA = "0x5C71EC0", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$get_VerticalSpacing): clean
			return 2.0;
		}
	}

	[Token(Token = "0x17000E89")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6005264")]
		[Address(RVA = "0x5C71ED0", Offset = "0x5C70ED0", VA = "0x5C71ED0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$get_HorizontalPadding): clean
			return 0x14;
		}
	}

	[Token(Token = "0x17000E8A")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6005265")]
		[Address(RVA = "0x5C71EE0", Offset = "0x5C70EE0", VA = "0x5C71EE0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$get_VerticalPadding): clean
			return 10;
		}
	}

	[Token(Token = "0x17000E8B")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6005266")]
		[Address(RVA = "0x5C71EF0", Offset = "0x5C70EF0", VA = "0x5C71EF0", Slot = "15")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$get_ScrollBar): clean
			return true;
		}
	}

	[Token(Token = "0x600525F")]
	[Address(RVA = "0x5C71B60", Offset = "0x5C70B60", VA = "0x5C71B60", Slot = "33")]
	protected override float GetWidth()
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$GetWidth): clean
		MapEditorSettings pSVar1;
		FloatSetting pSVar2;

		pSVar1 = SettingsManager.MapEditorSettings;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.HierarchyPanelWidth, pSVar2 == null)) {
			throw new NullReferenceException();
		}
		return pSVar2._value;
	}

	[Token(Token = "0x6005260")]
	[Address(RVA = "0x5C71BC0", Offset = "0x5C70BC0", VA = "0x5C71BC0", Slot = "34")]
	protected override float GetHeight()
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$GetHeight): clean
		bool bVar1;
		Canvas x;
		RectTransform __this_00;
		float fVar2;
		Rect UVar3;

		x = this.GetComponentInParent<Canvas>();
		bVar1 = ((Object)x != null);
		if (bVar1) {
			if ((x == null) ||(__this_00 = x.GetComponent<RectTransform>(), __this_00 == null)) {
				throw new NullReferenceException();
			}
			UVar3 = __this_00.rect;
			if (0.0 < UVar3.m_Height) {
				fVar2 = MapEditorHierarchyPanel.GetTopOffset();
				return UVar3.m_Height - fVar2;
			}
		}
		fVar2 = this.get_Height();
		return fVar2;
	}

	[Token(Token = "0x6005261")]
	[Address(RVA = "0x5C71CF0", Offset = "0x5C70CF0", VA = "0x5C71CF0")]
	private static float GetTopOffset()
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$GetTopOffset): 2 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		List<BasePopup> pSVar3;
		Vector2 UVar4;
		Vector2 UVar5;
		bool bVar6;
		BaseMenu pUVar7;
		RectTransform __this;
		BaseMenu x;
		float fVar8;
		float fStack_24;

		if (Il2CppMethodInitialized_07547fc3 == false) {
			Il2CppMethodInitialized_07547fc3 = true;
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) goto label_05d71d74;
	label_05d71d15: ;
			pUVar7 = UIManager.CurrentMenu;
			if (pUVar7 == null) goto label_05d71dac;
	label_05d71d8c: ;
			bVar1 = (typeof(MapEditorMenu)._2).typeHierarchyDepth;
			if ((pUVar7.klass._2).typeHierarchyDepth < bVar1) goto label_05d71dac;
			x = null;
			if ((pUVar7.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(MapEditorMenu)) {
				x = pUVar7;
			}
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor != 0) goto label_05d71d15;
	label_05d71d74: ;
			pUVar7 = UIManager.CurrentMenu;
			if (pUVar7 != null) goto label_05d71d8c;
	label_05d71dac: ;
			x = null;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		bVar6 = ((Object)x != null);
		if (bVar6) {
			if (x == null) {
	label_05d71ea0: ;
				throw new NullReferenceException();
			}
			pSVar3 = (*(ulong)((sbyte)x + 0xb8));
			bVar6 = ((Object)pSVar3 != null);
			if (bVar6) {
				pSVar3 = (*(ulong)((sbyte)x + 0xb8));
				if ((pSVar3 == null) ||(__this = pSVar3.GetComponent<RectTransform>(), __this == null)) goto label_05d71ea0;
				UVar4 = __this.sizeDelta;
				UVar5 = __this.anchoredPosition;
				fStack_24 = UVar4.y;
				fStack_24 = fStack_24 - UVar5.y;
				if (0.0 <= fStack_24) {
				}
			}
		}
		return fVar8;
	}

	[Token(Token = "0x6005267")]
	[Address(RVA = "0x5C71F00", Offset = "0x5C70F00", VA = "0x5C71F00", Slot = "32")]
	public override float GetPanelVerticalOffset()
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$GetPanelVerticalOffset): clean
		float fVar1;
		float fVar2;

		fVar1 = this.get_BottomBarHeight();
		fVar2 = this.get_TopBarHeight();
		return (fVar1 - fVar2) * 0.5;
	}

	[Token(Token = "0x6005268")]
	[Address(RVA = "0x5C71F50", Offset = "0x5C70F50", VA = "0x5C71F50", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$Setup): 8 lines keep C-only constructs
		byte bVar1;
		StringSetting setting;
		ElementStyle pUVar2;
		MapEditorGameManager pGVar3;
		bool bVar4;
		String pSVar5;
		ElementStyle pUVar6;
		Transform pUVar7;
		GameObject pUVar8;
		HorizontalLayoutGroup __this_00;
		RectOffset __this_01;
		RectTransform __this_02;
		UnityAction pUVar9;
		InputSettingElement pUVar10;
		Text method_00;
		MapEditorGameManager pGVar11;
		MapEditorMenu pUVar12;
		float size;

		this.Setup(parent);
		pGVar11 = typeof(MapEditorGameManager);
		pUVar12 = (MapEditorMenu)SceneLoader.CurrentGameManager;
		if (pUVar12 == null) {
			this._gameManager = null;
		}
		else {
			bVar1 = (typeof(MapEditorGameManager)._2).typeHierarchyDepth;
			if (((((BaseGameManager)pUVar12.klass)._2).typeHierarchyDepth < bVar1) ||((((BaseGameManager)pUVar12.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(MapEditorGameManager))) goto label_05d7272d;
			this._gameManager = (MapEditorGameManager)pUVar12;
			if (((((BaseGameManager)pUVar12.klass)._2).typeHierarchyDepth < bVar1) ||((((BaseGameManager)pUVar12.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=(Il2CppClass)pGVar11)) goto label_05d7272d;
		}
		if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
			pUVar12 = (MapEditorMenu)UIManager.CurrentMenu;
			if (pUVar12 != null) goto label_05d72144;
	label_05d721bf: ;
			this._menu = null;
		}
		else {
			pUVar12 = (MapEditorMenu)UIManager.CurrentMenu;
			if (pUVar12 == null) goto label_05d721bf;
	label_05d72144: ;
			pGVar11 = (MapEditorGameManager)typeof(MapEditorMenu);
			bVar1 = (typeof(MapEditorMenu)._2).typeHierarchyDepth;
			if (((((BaseGameManager)pUVar12.klass)._2).typeHierarchyDepth < bVar1) ||((((BaseGameManager)pUVar12.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(MapEditorMenu))) {
	label_05d7272d: ;
				throw new InvalidCastException();
			}
			this._menu = pUVar12;
			if (((((BaseGameManager)pUVar12.klass)._2).typeHierarchyDepth < bVar1) ||((((BaseGameManager)pUVar12.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=(Il2CppClass)pGVar11)) goto label_05d7272d;
		}
		pSVar5 = this.get_ThemePanel();
		pUVar6 = new ElementStyle(0x12, 0.0, 20.0, pSVar5);
		this._style = pUVar6;
		pSVar5 = this.get_ThemePanel();
		pUVar6 = new ElementStyle(0x12, 0.0, 20.0, pSVar5);
		pUVar7 = this.TopBar;
		bVar4 = ((Object)pUVar7 != null);
		if (bVar4) {
			pUVar7 = this.TopBar;
			if (pUVar7 == null) goto label_05d72728;
			pUVar7 = pUVar7.Find("Label");
			bVar4 = ((Object)pUVar7 != null);
			if (bVar4) {
				pUVar7 = this.TopBar;
				if (((pUVar7 == null) ||(pUVar7 = pUVar7.Find("Label"), pUVar7 == null)) ||(pUVar8 = pUVar7.gameObject, pUVar8 == null)) goto label_05d72728;
				pUVar8.SetActive(false);
			}
		}
		pUVar7 = this.TopBar;
		if (pUVar7 == null) goto label_05d72728;
		__this_00 = pUVar7.GetComponent<HorizontalLayoutGroup>();
		bVar4 = ((Object)__this_00 != null);
		if (bVar4) {
			if (__this_00 == null) goto label_05d72728;
			__this_00.childAlignment = 3;
			__this_00.childControlWidth = true;
			__this_00.childControlHeight = true;
			__this_00.childForceExpandWidth = false;
			__this_00.childForceExpandHeight = false;
			__this_00.spacing = 8.0;
			__this_01 = new RectOffset(8, 8, 4, 4);
			__this_00.padding = __this_01;
		}
		pUVar7 = this.TopBar;
		bVar4 = ((Object)pUVar7 != null);
		if (bVar4) {
			pUVar7 = this.TopBar;
			if (pUVar7 == null) goto label_05d72728;
			__this_02 = pUVar7.GetComponent<RectTransform>();
			size = this.get_TopBarHeight();
			if (__this_02 == null) goto label_05d72728;
			__this_02.SetInsetAndSizeFromParentEdge(2, 0.0, size);
		}
		pUVar7 = this.TopBar;
		setting = this._searchSetting;
		pUVar9 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_Setup_b__75_0);
		pUVar8 = ElementFactory.CreateInputSetting(pUVar7, pUVar6, (BaseSetting)setting, "", "", 120.0, 28.0, false, null, pUVar9, null, null);
		if (pUVar8 != null) {
			pUVar10 = pUVar8.GetComponent<InputSettingElement>();
			this._searchInput = pUVar10;
			pUVar7 = this.TopBar;
			pUVar2 = this._style;
			pUVar9 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_Setup_b__75_1);
			pUVar8 = ElementFactory.CreateIconButton(pUVar7, pUVar2, "Icons/Navigation/TreeView", 28.0, 28.0, pUVar9, null);
			this._modeButton = pUVar8;
			pUVar7 = this.TopBar;
			pUVar2 = this._style;
			pUVar9 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_Setup_b__75_2);
			pUVar8 = ElementFactory.CreateIconButton(pUVar7, pUVar2, "Icons/Navigation/ArrowLeftIcon", 18.0, 18.0, pUVar9, null);
			this._pageLeftButton = pUVar8;
			pUVar7 = this.TopBar;
			pUVar2 = this._style;
			pUVar9 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_Setup_b__75_3);
			pUVar8 = ElementFactory.CreateIconButton(pUVar7, pUVar2, "Icons/Navigation/ArrowRightIcon", 18.0, 18.0, pUVar9, null);
			this._pageRightButton = pUVar8;
			pUVar8 = ElementFactory.CreateDefaultLabel(this.TopBar, pUVar6, "0/0", 0, 4);
			if (pUVar8 != null) {
				method_00 = pUVar8.GetComponent<Text>() ;
				this._pageLabel = method_00;
				this._currentPage = 1;
				pGVar3 = this._gameManager;
				if (pGVar3 != null) {
					bVar4 = pGVar3.HierarchyTreeViewEnabled;
					this._treeViewEnabled = bVar4;
					if (bVar4 != false) {
						this.BuildTreeGraph();
					}
					this.EnsureVirtualizationElements();
					this.EnsureDragVisuals();
					this.AddResizeHandle();
					this.Sync();
					return;
				}
			}
		}
	label_05d72728: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005269")]
	[Address(RVA = "0x5C74150", Offset = "0x5C73150", VA = "0x5C74150")]
	private void AddResizeHandle()
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$AddResizeHandle): 2 lines keep C-only constructs
		GameObject __this_00;
		Transform __this_01;
		Transform parent;
		RectTransform __this_02;
		Image pUVar1;
		PanelResizeHandle pUVar2;
		Action<float> __this_03;
		Color UVar3;

		if (Il2CppMethodInitialized_07547fc5 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorHierarchyPanel_AddResizeHandle_b__76_0) ;
			Il2CppMethodInitialized_07547fc5 = true;
		}
		__this_00 = new GameObject("ResizeHandle");
		if (__this_00 != null) {
			__this_01 = __this_00.transform;
			parent = this.transform;
			if (__this_01 != null) {
				__this_01.SetParent(parent, false);
				__this_02 = __this_00.AddComponent<RectTransform>();
				if (__this_02 != null) {
					__this_02.anchorMin = (Vector2)0x3f800000;
					__this_02.anchorMax = (Vector2)0x3f8000003f800000;
					__this_02.offsetMin = (Vector2)0x0;
					__this_02.offsetMax = (Vector2)0x41000000;
					pUVar1 = __this_00.AddComponent<Image>();
					if (pUVar1 != null) {
						UVar3.b = 1.0;
						UVar3.a = 0.04;
						UVar3.r = 1.0;
						UVar3.g = 1.0;
						pUVar1.set_color(UVar3);
						pUVar2 = __this_00.AddComponent<PanelResizeHandle>();
						if (pUVar2 != null) {
							pUVar2.IsRightEdge = true;
							pUVar2.MinWidth = 150.0;
							pUVar2.MaxWidth = 600.0;
							__this_03 = new Action<float>((object)this, (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_AddResizeHandle_b__76_0);
							pUVar2.OnResize = __this_03;
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600526A")]
	[Address(RVA = "0x5C747D0", Offset = "0x5C737D0", VA = "0x5C747D0", Slot = "21")]
	public override void Show()
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$Show): clean
		this.Show();
		return;
	}

	[Token(Token = "0x600526B")]
	[Address(RVA = "0x5C74330", Offset = "0x5C73330", VA = "0x5C74330")]
	public void Sync()
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$Sync): 10 lines keep C-only constructs
		int iVar1;
		Dictionary<int, object> __this_00;
		Dictionary<int, int> pSVar2;
		Object pUVar3;
		GameObject pUVar4;
		List<MapEditorHierarchyPanel.RowData> pSVar5;
		Text pUVar6;
		bool bVar7;
		int iVar8;
		String pSVar9;
		String str2;
		MethodInfo pMVar10;
		MapEditorHierarchyPanel.RowData row;
		int iVar11;
		Text pUVar12;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo extraout_RDX_01;
		MethodInfo extraout_RDX_02;
		uint uVar13;
		uint uVar14;
		List<GameObject> __this_01;
		int local_38;
		int local_34;

		local_38 = 0;
		local_34 = 0;
		__this_00 = (Dictionary<int, object>)this._idToItem;
		if (__this_00 != null) {
			__this_00.Clear();
			pSVar2 = this._idToIndex;
			if (pSVar2 != null) {
				pSVar2.Clear();
				pSVar2 = this._indexToId;
				if (pSVar2 != null) {
					pMVar10 = MethodInfo_System_Collections_Generic_Dictionary_int_int_Clear;
					pSVar2.Clear();
					this._dropIndicatorId = -1;
					this._dropToRoot = false;
					this.EnsureDragVisuals();
					pUVar3 = (Object)this._rootDropOverlay;
					pMVar10 = null;
					bVar7 = (pUVar3 != null);
					if (bVar7) {
						pUVar4 = this._rootDropOverlay;
						if (pUVar4 == null) goto label_05d747c3;
						pMVar10 = null;
						pUVar4.SetActive(false);
					}
					this.BuildRows();
					pSVar5 = this._rows;
					if (pSVar5 != null) {
						iVar1 = pSVar5._size;
						local_34 = iVar1;
						if (this._treeViewEnabled == false) {
							this.SetVirtualizationActive(false);
							iVar8 = (int)((ulong)((long)(iVar1 + 0x1d) * -0x77777777) >> 0x20) + iVar1 + 0x1d;
							local_38 = (iVar8 >> 4) - (iVar8 >> 0x1f);
							if (local_38 < 2) {
								local_38 = 1;
							}
							iVar8 = this._currentPage;
							iVar11 = 1;
							if (1 < iVar8) {
								iVar11 = iVar8;
							}
							if (local_38 <= iVar11) {
								iVar11 = local_38;
							}
							this._currentPage = iVar11;
							pUVar6 = this._pageLabel;
							pSVar9 = (this._currentPage).ToString();
							str2 = local_38.ToString();
							pSVar9 = String.Concat(pSVar9, "/", str2);
							if (pUVar6 != null) {
								pUVar12 = pUVar6.klass;
								pUVar6.set_text(pSVar9) ;
								pUVar3 = (Object)this._pageLeftButton;
								bVar7 = (pUVar3 != null);
								if (bVar7) {
									pUVar4 = this._pageLeftButton;
									if (pUVar4 == null) goto label_05d747c3;
									pUVar4.SetActive(true);
								}
								pUVar3 = (Object)this._pageRightButton;
								bVar7 = (pUVar3 != null);
								pMVar10 = extraout_RDX_01;
								if (bVar7) {
									pUVar4 = this._pageRightButton;
									if (pUVar4 == null) goto label_05d747c3;
									pUVar4.SetActive(true);
									pMVar10 = extraout_RDX_02;
								}
								iVar8 = this._currentPage * 0x1e + -0x1e;
								uVar14 = iVar1 - iVar8;
								uVar13 = 0;
								if (0 < (int)uVar14) {
									uVar13 = uVar14;
								}
								uVar14 = 0x1e;
								if ((int)uVar13 < 0x1e) {
									uVar14 = uVar13;
								}
								this.EnsurePoolSize(uVar14);
								__this_01 = this._itemPool;
								if (__this_01 != null) {
									uVar13 = 0;
									do {
										if (__this_01._size <= (int)uVar13) goto label_05d745aa;
										pMVar10 = (MethodInfo)__this_01.get_Item(uVar13);
										if (uVar13 < uVar14) {
											pSVar5 = this._rows;
											if (pSVar5 == null) break;
											row = pSVar5.get_Item(iVar8 + uVar13);
											this.BindPooledItem((GameObject)pMVar10, row, (int32_t)pUVar12);
										}
										else {
											if (pMVar10 == null) break;
											pMVar10.SetActive(false);
										}
										uVar13 = uVar13 + 1;
										__this_01 = this._itemPool;
									} while (__this_01 != null);
								}
							}
						}
						else {
							this.SetVirtualizationActive(true);
							pUVar6 = this._pageLabel;
							pSVar9 = local_34.ToString();
							pSVar9 = String.Concat(pSVar9, " items");
							if (pUVar6 != null) {
								pUVar6.set_text(pSVar9);
								pUVar3 = (Object)this._pageLeftButton;
								bVar7 = (pUVar3 != null);
								if (bVar7) {
									pUVar4 = this._pageLeftButton;
									if (pUVar4 == null) goto label_05d747c3;
									pUVar4.SetActive(false);
								}
								pUVar3 = (Object)this._pageRightButton;
								bVar7 = (pUVar3 != null);
								pMVar10 = extraout_RDX;
								if (bVar7) {
									pUVar4 = this._pageRightButton;
									if (pUVar4 == null) goto label_05d747c3;
									pUVar4.SetActive(false);
									pMVar10 = extraout_RDX_00;
								}
								this.RenderVirtualizedRows(false);
	label_05d745aa: ;
								this.SyncSelectedItems();
								this.UpdateModeButtonText();
								return;
							}
						}
					}
				}
			}
		}
	label_05d747c3: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600526C")]
	[Address(RVA = "0x5C76570", Offset = "0x5C75570", VA = "0x5C76570")]
	private void OnModeButtonClick()
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$OnModeButtonClick): clean
		Object x;
		GameObject __this_00;
		MapEditorGameManager pGVar1;
		ScrollRect pUVar2;
		bool bVar3;

		this._draggingItem = false;
		this._dropTargetId = -1;
		this._dropIndicatorId = -1;
		this._dropToRoot = false;
		this._currentDropMode = 0;
		this.HideDragGhost();
		x = (Object)this._insertLineIndicator;
		bVar3 = (x != null);
		if (bVar3) {
			__this_00 = this._insertLineIndicator;
			if (__this_00 == null) goto label_05d766b9;
			__this_00.SetActive(false);
		}
		bVar3 = (bool)(this._treeViewEnabled ^ 1);
		this._treeViewEnabled = bVar3;
		this._currentPage = 1;
		pGVar1 = this._gameManager;
		if (pGVar1 == null) {
	label_05d766b9: ;
			throw new NullReferenceException();
		}
		pGVar1.HierarchyTreeViewEnabled = bVar3;
		if (bVar3 != false) {
			this.BuildTreeGraph();
			if (this._treeViewEnabled != false) {
				pUVar2 = this._scrollRect;
				bVar3 = ((Object)pUVar2 != null);
				if (bVar3) {
					pUVar2 = this._scrollRect;
					if (pUVar2 == null) goto label_05d766b9;
					pUVar2.verticalNormalizedPosition = 1.0;
				}
			}
		}
		this.Sync();
		return;
	}

	[Token(Token = "0x600526D")]
	[Address(RVA = "0x5C76330", Offset = "0x5C75330", VA = "0x5C76330")]
	private void UpdateModeButtonText()
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$UpdateModeButtonText): 2 lines keep C-only constructs
		uint uVar1;
		Object x;
		GameObject pUVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		ColorBlock value;
		ColorBlock pUVar8;
		bool bVar9;
		Button __this_00;
		RawImage pUVar10;
		float fVar11;
		Color UVar12;
		Color UVar13;

		x = (Object)this._modeButton;
		bVar9 = (x == null);
		if (bVar9) {
			return;
		}
		pUVar2 = this._modeButton;
		if (pUVar2 != null) {
			__this_00 = pUVar2.GetComponent<Button>() ;
			bVar9 = ((Object)__this_00 != null);
			if (bVar9) {
				if (__this_00 == null) goto label_05d76563;
				uVar1 = __this_00.m_Colors.m_ColorMultiplier;
				uVar3 = __this_00.m_Colors.m_FadeDuration;
				value.m_FadeDuration = (float)uVar3;
				value.m_ColorMultiplier = (float)uVar1;
				pUVar8 = &__this_00.m_Colors;
				uVar4 = pUVar8.m_DisabledColor.r;
				uVar5 = pUVar8.m_DisabledColor.g;
				value.m_DisabledColor.g = (float)uVar5;
				value.m_DisabledColor.r = (float)uVar4;
				pUVar8 = &__this_00.m_Colors;
				uVar6 = pUVar8.m_DisabledColor.b;
				uVar7 = pUVar8.m_DisabledColor.a;
				value.m_DisabledColor.a = (float)uVar7;
				value.m_DisabledColor.b = (float)uVar6;
				value.m_NormalColor.b = 1.0;
				value.m_NormalColor.a = 1.0;
				value.m_NormalColor.r = 1.0;
				value.m_NormalColor.g = 1.0;
				value.m_HighlightedColor.r = 1.0;
				value.m_HighlightedColor.g = 1.0;
				value.m_HighlightedColor.b = 1.0;
				value.m_HighlightedColor.a = 1.0;
				value.m_PressedColor.r = 1.0;
				value.m_PressedColor.g = 1.0;
				value.m_PressedColor.b = 1.0;
				value.m_PressedColor.a = 1.0;
				value.m_SelectedColor.r = 1.0;
				value.m_SelectedColor.g = 1.0;
				value.m_SelectedColor.b = 1.0;
				value.m_SelectedColor.a = 1.0;
				__this_00.colors = value;
			}
			UVar12 = this.IconColor();
			UVar13.b = UVar12.b;
			fVar11 = UVar12.a;
			if (this._treeViewEnabled == false) {
				fVar11 = fVar11 * 0.6;
			}
			pUVar2 = this._modeButton;
			if (pUVar2 != null) {
				pUVar10 = pUVar2.GetComponent<RawImage>();
				if (pUVar10 != null) {
					UVar13.a = fVar11;
					UVar13.r = UVar12.r;
					UVar13.g = UVar12.g;
					pUVar10.set_color(UVar13);
					return;
				}
			}
		}
	label_05d76563: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600526E")]
	[Address(RVA = "0x5C76820", Offset = "0x5C75820", VA = "0x5C76820")]
	private Color IconColor()
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$IconColor): clean
		String panel;
		Color UVar1;

		panel = this.get_ThemePanel();
		UVar1 = (Color)UIManager.GetThemeColor(panel, "IconButton", "TextColor", "DefaultPanel");
		return (Color)UVar1;
	}

	[Token(Token = "0x600526F")]
	[Address(RVA = "0x5C74870", Offset = "0x5C73870", VA = "0x5C74870")]
	private void BuildRows()
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$BuildRows): 2 lines keep C-only constructs
		int piVar1;
		Dictionary<int, int> pSVar2;
		StringSetting pSVar3;
		String pSVar4;
		MapEditorHierarchyPanel.RowData UVar5;
		int index;
		List<MapEditorHierarchyPanel.RowData> pSVar6;

		pSVar6 = this._rows;
		if (pSVar6 != null) {
			piVar1 = &pSVar6._version;
			*piVar1 = *piVar1 + 1;
			pSVar6._size = 0;
			pSVar2 = this._idToIndex;
			if (pSVar2 != null) {
				pSVar2.Clear();
				pSVar2 = this._indexToId;
				if (pSVar2 != null) {
					pSVar2.Clear();
					pSVar3 = this._searchSetting;
					if ((pSVar3 != null) &&(((pSVar4 = pSVar3._value, pSVar4 != null ||(pSVar4 = (String)**(long*)(g_data_07556758 + 0xb8), pSVar4 != null)) && (pSVar4 = pSVar4.Trim(), pSVar4 != null)))) {
						pSVar4 = pSVar4.ToLower();
						if (this._treeViewEnabled == false) {
							this.BuildFlatRows(pSVar4);
							pSVar6 = this._rows;
						}
						else {
							this.BuildTreeRows(pSVar4);
							pSVar6 = this._rows;
						}
						if (pSVar6 != null) {
							index = 0;
							do {
								if (pSVar6._size <= index) {
									return;
								}
								pSVar2 = this._idToIndex;
								UVar5 = pSVar6.get_Item(index);
								if (pSVar2 == null) break;
								pSVar2.set_Item(UVar5.Id, index);
								pSVar6 = this._rows;
								if (pSVar6 == null) break;
								pSVar2 = this._indexToId;
								UVar5 = pSVar6.get_Item(index);
								if (pSVar2 == null) break;
								pSVar2.set_Item(index, UVar5.Id);
								index = index + 1;
								pSVar6 = this._rows;
							} while (pSVar6 != null);
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005270")]
	[Address(RVA = "0x5C768C0", Offset = "0x5C758C0", VA = "0x5C768C0")]
	private void BuildFlatRows(string search)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$BuildFlatRows): 11 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		List<int> __this_00;
		Dictionary<int, object> __this_01;
		List<MapEditorHierarchyPanel.RowData> __this_02;
		MapEditorHierarchyPanel.RowData[] pUVar4;
		uint key;
		bool bVar5;
		MapObject obj;
		MethodInfo in_RCX;
		MapEditorHierarchyPanel.RowData item;
		MapEditorHierarchyPanel __this_03;
		byte[] local_70 = new byte[16];
		object local_60;
		byte[] local_58 = new byte[32];
		MapEditorHierarchyPanel local_38;

		local_38 = this;
		if (Il2CppMethodInitialized_07547fcb == false) {
			Il2CppMethodInitialized_07547fcb = true;
			uVar2 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			__this_00 = MapLoader.ObjectOrder;
		}
		else {
			__this_00 = *(List<int>*)((long)(typeof(MapLoader)).static_fields + 0x10);
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		local_70.GetEnumerator(__this_00);
		local_58._16_8_ = local_60;
		local_58._0_8_ = local_70._0_8_;
		local_58._8_8_ = local_70._8_8_;
		local_70._0_8_ = null;
		local_70._8_8_ = (System_Collections_Generic_List_Enumerator_int__o)local_58;
		while(true) {
			do {
				do {
					bVar5 = local_58.MoveNext();
					if (!bVar5) {
						local_58.Dispose();
						return;
					}
					key = local_58._16_4_;
					item = (MapEditorHierarchyPanel.RowData)(local_58._16_8_ & 0xffffffff);
					__this_01 = (Dictionary<int, object>)MapLoader.IdToMapObject;
					if (__this_01 == null) {
						throw new NullReferenceException();
					}
					bVar5 = __this_01.ContainsKey(key);
				} while (!bVar5);
				__this_03 = (MapEditorHierarchyPanel)MapLoader.IdToMapObject;
				if (__this_03 == null) {
					throw new NullReferenceException();
				}
				obj = __this_03.get_Item(key);
				bVar5 = __this_03.MatchesSearch(obj, search);
			} while (!bVar5);
			__this_02 = local_38._rows;
			if (__this_02 == null) break;
			piVar1 = &__this_02._version;
			*piVar1 = *piVar1 + 1;
			pUVar4 = __this_02._items;
			if (pUVar4 == null) break;
			uVar3 = __this_02._size;
			if (uVar3 < (uint)pUVar4.Length) {
				in_RCX = (MethodInfo)(ulong)(uVar3 + 1);
				__this_02._size = uVar3 + 1;
				pUVar4[(int)uVar3] = item;
			}
			else {
				__this_02.AddWithResize((MapEditorHierarchyPanel.RowData)item);
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005271")]
	[Address(RVA = "0x5C76BB0", Offset = "0x5C75BB0", VA = "0x5C76BB0")]
	private void BuildTreeRows(string search)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$BuildTreeRows): 13 lines keep C-only constructs
		Dictionary<int, object> __this_00;
		MapScriptBaseObject pMVar1;
		List<int> __this_01;
		Transform UVar2;
		bool forceExpand;
		bool bVar3;
		HashSet<int> pSVar4;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_02;
		MethodInfo* method_00;
		MapEditorHierarchyPanel pUVar5;
		Transform local_78;
		byte[] local_60 = new byte[16];
		MapObject local_50;
		Transform local_48;

		local_78.klass = null;
		local_78.monitor = null;
		local_78.m_CachedPtr = 0;
		local_48.klass = null;
		local_48.monitor = null;
		local_48.m_CachedPtr = 0;
		this.BuildTreeGraph();
		pSVar4 = null;
		forceExpand = (search != (String)**(ulong*)(g_data_07556758 + 0xb8)) ;
		if (forceExpand) {
			pSVar4 = new HashSet<int>();
			__this_00 = (Dictionary<int, object>)MapLoader.IdToMapObject;
			if (__this_00 == null) goto label_05d76ef4;
			__this_02 = __this_00.Values;
			if (__this_02 == null) goto label_05d76ef4;
			method_00 = &MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_MapObject_GetEnumerator;
			local_60.GetEnumerator(__this_02);
			local_78.m_CachedPtr = (intptr_t)local_50;
			local_78.klass = (Transform)local_60._0_8_;
			local_78.monitor = (IntPtr)local_60._8_8_;
			local_60._0_8_ = null;
			local_60._8_8_ = &local_78;
			if (pSVar4 == null) {
				do {
					pUVar5 = (MapEditorHierarchyPanel)&local_78;
					bVar3 = local_78.MoveNext();
					UVar2.m_CachedPtr = local_78.m_CachedPtr;
					if (!bVar3) goto label_05d76e31;
					bVar3 = pUVar5.MatchesSearch((MapObject)local_78.m_CachedPtr, search);
				} while (!bVar3);
				if ((MapObject)UVar2.m_CachedPtr != null) {
					if (*(MapScriptBaseObject*)(UVar2.m_CachedPtr + 0x20) != null) {
						throw new NullReferenceException();
					}
	label_05d76eef: ;
					throw new NullReferenceException();
				}
	label_05d76e2c: ;
				throw new NullReferenceException();
			}
			while(true) {
				pUVar5 = (MapEditorHierarchyPanel)&local_78;
				bVar3 = local_78.MoveNext();
				UVar2.m_CachedPtr = local_78.m_CachedPtr;
				if (!bVar3) break;
				bVar3 = pUVar5.MatchesSearch((MapObject)local_78.m_CachedPtr, search) ;
				if (bVar3) {
					if ((MapObject)UVar2.m_CachedPtr == null) goto label_05d76e2c;
					pMVar1 = *(MapScriptBaseObject*)(UVar2.m_CachedPtr + 0x20);
					if (pMVar1 == null) goto label_05d76eef;
					pSVar4.Add(pMVar1.Id);
				}
			}
	label_05d76e31: ;
			local_78.Dispose();
			pSVar4 = this.BuildSearchContext(pSVar4);
		}
		__this_01 = this._treeRoots;
		if (__this_01 != null) {
			local_48 = __this_01.GetEnumerator();
			local_60._0_8_ = null;
			local_60._8_8_ = &local_48;
			while(true) {
				bVar3 = local_48.MoveNext();
				if (!bVar3) break;
				this.AddTreeRowsRecursive((int32_t)local_48.m_CachedPtr, 0, pSVar4, forceExpand);
			}
			local_48.Dispose();
			return;
		}
	label_05d76ef4: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005272")]
	[Address(RVA = "0x5C72740", Offset = "0x5C71740", VA = "0x5C72740")]
	private void BuildTreeGraph()
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$BuildTreeGraph): 38 lines keep C-only constructs
		int piVar1;
		int item;
		Dictionary<int, object> pSVar2;
		MapScriptBaseObject pMVar3;
		MapObject obj;
		bool bVar5;
		int iVar6;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o pSVar7;
		List<int> pSVar8;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_00;
		System_Collections_Generic_IEnumerable_TSource__o pSVar9;
		Func<int, int> pSVar10;
		System_Linq_IOrderedEnumerable_TSource__o pSVar11;
		System_Collections_Generic_List_TSource__o pSVar12;
		object pIVar13;
		UI_MapEditorHierarchyPanel___c_StaticFields pUVar14;
		Int32[] pSVar15;
		uint uVar16;
		byte[] local_a8 = new byte[16];
		MapObject local_98;
		List<int>* local_90;
		byte[] local_88 = new byte[8];
		ulong uStack_80;
		MapObject local_78;
		byte[] local_68 = new byte[8];
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o pSStack_60;
		MapObject local_58;
		byte[] local_48 = new byte[8];
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o pSStack_40;
		MapObject local_38;

		local_48 = (byte[])0x0;
		local_38 = null;
		local_68 = (byte[])0x0;
		local_58 = null;
		local_88 = (byte[])0x0;
		uStack_80._0_4_ = 0;
		uStack_80._4_4_ = 0;
		local_78 = null;
		pSVar2 = (Dictionary<int, object>)this._treeChildren;
		if (pSVar2 != null) {
			pSVar2.Clear();
			pSVar8 = this._treeRoots;
			if (pSVar8 != null) {
				piVar1 = &pSVar8._version;
				*piVar1 = *piVar1 + 1;
				pSVar8._size = 0;
				pSVar2 = (Dictionary<int, object>)MapLoader.IdToMapObject;
				if ((pSVar2 != null) &&(pSVar7 = pSVar2.Keys, pSVar7 != null)) {
					local_90 = &this._treeRoots;
					local_a8.GetEnumerator(pSVar7);
					local_38 = local_98;
					local_48 = (byte[])local_a8._0_8_;
					pSStack_40 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_a8._8_8_;
					local_a8._0_8_ = null;
					local_a8._8_8_ =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_48;
					while (bVar5 = local_48.MoveNext()) {
						pSVar2 = (Dictionary<int, object>)this._treeChildren;
						if (pSVar2 == null) {
							throw new NullReferenceException();
						}
						iVar6 = (int32_t)local_38;
						bVar5 = pSVar2.ContainsKey((int32_t)local_38);
						if (!bVar5) {
							pSVar2 = (Dictionary<int, object>)this._treeChildren;
							pSVar8 = new List<int>();
							if (pSVar2 == null) {
								throw new NullReferenceException();
							}
							pSVar2.set_Item(iVar6, (object)pSVar8);
						}
					}
					local_48.Dispose();
					pSVar2 = (Dictionary<int, object>)MapLoader.IdToMapObject;
					if ((pSVar2 != null) &&(__this_00 = pSVar2.Values, __this_00 != null)) {
						local_a8.GetEnumerator(__this_00);
						local_58 = local_98;
						local_68 = (byte[])local_a8._0_8_;
						pSStack_60 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_a8._8_8_;
						local_a8._0_8_ = null;
						local_a8._8_8_ =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_68;
						while (true) {
							bVar5 = local_68.MoveNext();
							obj = local_58;
							if (!(bVar5)) break;
							if (local_58 == null) {
								throw new NullReferenceException();
							}
							pMVar3 = local_58.ScriptObject;
							if (pMVar3 == null) {
								throw new NullReferenceException();
							}
							item = pMVar3.Id;
							iVar6 = MapLoader.GetLogicalParentId(obj);
							if ((iVar6 < 0) || (iVar6 == item)) {
	label_05d72c80: ;
								pSVar8 = *local_90;
								if (pSVar8 == null) {
	label_05d72fb5: ;
									throw new NullReferenceException();
								}
								piVar1 = &pSVar8._version;
								*piVar1 = *piVar1 + 1;
								pSVar15 = pSVar8._items;
								if (pSVar15 == null) goto label_05d72fb5;
								uVar16 = pSVar8._size;
								if (uVar16 < (uint)pSVar15.Length) goto label_05d72b50;
								pSVar8.AddWithResize(item);
							}
							else {
								pSVar2 = (Dictionary<int, object>)MapLoader.IdToMapObject;
								if (pSVar2 == null) {
									throw new NullReferenceException();
								}
								bVar5 = pSVar2.ContainsKey(iVar6);
								if (!bVar5) goto label_05d72c80;
								pSVar2 = (Dictionary<int, object>)this._treeChildren;
								if (pSVar2 == null) {
									throw new NullReferenceException();
								}
								pSVar8 = (List<int>)pSVar2.get_Item(iVar6);
								if (pSVar8 == null) {
	label_05d72fd8: ;
									throw new NullReferenceException();
								}
								piVar1 = &pSVar8._version;
								*piVar1 = *piVar1 + 1;
								pSVar15 = pSVar8._items;
								if (pSVar15 == null) goto label_05d72fd8;
								uVar16 = pSVar8._size;
								if (uVar16 < (uint)pSVar15.Length) {
	label_05d72b50: ;
									pSVar8._size = uVar16 + 1;
									pSVar15[(int)uVar16] = item;
								}
								else {
									pSVar8.AddWithResize(item);
								}
							}
						}
						local_68.Dispose();
						pSVar9 = Enumerable.Distinct<int>((System_Collections_Generic_IEnumerable_TSource__o)*local_90);
						if ((typeof(MapEditorHierarchyPanel.c)._2).cctor_finished_or_no_cctor == 0) {
							pUVar14 = typeof(MapEditorHierarchyPanel.c).static_fields;
							pSVar10 = pUVar14.__9__85_0;
						}
						else {
							pUVar14 = typeof(MapEditorHierarchyPanel.c).static_fields;
							pSVar10 = pUVar14.__9__85_0;
						}
						if (pSVar10 == null) {
							if (((typeof(MapEditorHierarchyPanel.c))._2).cctor_finished_or_no_cctor == 0) {
								pUVar14 = typeof(MapEditorHierarchyPanel.c).static_fields;
							}
							pIVar13 = (object)pUVar14.__9;
							pSVar10 = new Func<int, int>(pIVar13, (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_c_BuildTreeGraph_b__85_0);
							pUVar14 = typeof(MapEditorHierarchyPanel.c).static_fields;
							pUVar14.__9__85_0 = pSVar10;
						}
						pSVar11 = Enumerable.OrderBy<int, int>(pSVar9, (System_Func_TSource__TKey__o)pSVar10);
						pSVar12 = Enumerable.ToList<int>((System_Collections_Generic_IEnumerable_TSource__o)pSVar11);
						this._treeRoots = (List<int>)pSVar12;
						pSVar2 = (Dictionary<int, object>)this._treeChildren;
						if (pSVar2 != null) {
							pSVar7 = pSVar2.Keys ;
							pSVar12 = Enumerable.ToList<int>((System_Collections_Generic_IEnumerable_TSource__o)pSVar7);
							if (pSVar12 != null) {
								local_a8.GetEnumerator((List<int>)pSVar12);
								local_78 = local_98;
								local_88 = (byte[])local_a8._0_8_;
								uStack_80 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_a8._8_8_;
								local_a8._0_8_ = null;
								local_a8._8_8_ = local_88;
								while(true) {
									bVar5 = local_88.MoveNext();
									if (!bVar5) {
										local_88.Dispose();
										return;
									}
									pSVar2 = (Dictionary<int, object>)this._treeChildren;
									if (pSVar2 == null) break;
									iVar6 = (int32_t)local_78;
									pIVar13 = pSVar2.get_Item((int32_t)local_78);
									pSVar9 = Enumerable.Distinct<int>((System_Collections_Generic_IEnumerable_TSource__o)pIVar13);
									if ((typeof(MapEditorHierarchyPanel.c)._2).cctor_finished_or_no_cctor == 0) {
										pUVar14 = typeof(MapEditorHierarchyPanel.c).static_fields;
										pSVar10 = pUVar14.__9__85_1;
									}
									else {
										pUVar14 = typeof(MapEditorHierarchyPanel.c).static_fields;
										pSVar10 = pUVar14.__9__85_1;
									}
									if (pSVar10 == null) {
										if (((typeof(MapEditorHierarchyPanel.c))._2).cctor_finished_or_no_cctor == 0) {
											pUVar14 = typeof(MapEditorHierarchyPanel.c).static_fields;
										}
										pIVar13 = (object)pUVar14.__9;
										pSVar10 = new Func<int, int>(pIVar13, (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_c_BuildTreeGraph_b__85_1);
										pUVar14 = typeof(MapEditorHierarchyPanel.c).static_fields;
										pUVar14.__9__85_1 = pSVar10;
									}
									pSVar11 = Enumerable.OrderBy<int, int>(pSVar9, (System_Func_TSource__TKey__o)pSVar10);
									pSVar12 = Enumerable.ToList<int>((System_Collections_Generic_IEnumerable_TSource__o)pSVar11);
									pSVar2.set_Item(iVar6, (object)pSVar12);
								}
								throw new NullReferenceException();
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005273")]
	[Address(RVA = "0x5C77080", Offset = "0x5C76080", VA = "0x5C77080")]
	private HashSet<int> BuildSearchContext(HashSet<int> matches)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$BuildSearchContext): 10 lines keep C-only constructs
		Dictionary<int, object> pSVar1;
		int iVar2;
		System_Collections_Generic_HashSet_Enumerator_T__o pSVar3;
		bool bVar4;
		int key;
		HashSet<int> __this_00;
		MapObject pMVar5;
		System_Collections_Generic_HashSet_Enumerator_T__o local_68;
		byte[] local_50 = new byte[16];
		object local_40;
		MapEditorHierarchyPanel local_38;

		local_38 = this;
		local_68._set = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._current = null;
		__this_00 = new HashSet<int>();
		if (matches == null) {
			throw new NullReferenceException();
		}
		local_50.GetEnumerator(matches);
		local_68._current = local_40;
		local_68._set = (HashSet<T>)local_50._0_8_;
		local_68._index = local_50._8_4_;
		local_68._version = local_50._12_4_;
		local_50._0_8_ = null;
		local_50._8_8_ = &local_68;
		pSVar3 = &local_68;
		if (__this_00 == null) {
			while (true) {
				local_50._8_8_ = pSVar3;
				bVar4 = local_68.MoveNext();
				if (!(bVar4)) break;
				iVar2 = (int32_t)local_68._current;
				pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
				if (pSVar1 == null) goto label_05d773b8;
				bVar4 = pSVar1.ContainsKey(iVar2);
				pSVar3 = (System_Collections_Generic_HashSet_Enumerator_T__o)local_50._8_8_;
				if (bVar4) {
					throw new NullReferenceException();
				}
			}
		}
		else {
			while (bVar4 = local_68.MoveNext()) {
				iVar2 = (int32_t)local_68._current;
				pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
				if (pSVar1 == null) {
	label_05d773b8: ;
					throw new NullReferenceException();
				}
				bVar4 = pSVar1.ContainsKey(iVar2);
				if (bVar4) {
					__this_00.Add(iVar2);
					pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
					if (pSVar1 == null) {
						throw new NullReferenceException();
					}
					pMVar5 = pSVar1.get_Item(iVar2);
					key = MapLoader.GetLogicalParentId(pMVar5);
					while (-1 < key) {
						pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
						if (pSVar1 == null) {
							throw new NullReferenceException();
						}
						bVar4 = pSVar1.ContainsKey(key);
						if ((!bVar4) ||(bVar4 = __this_00.Add(key), !bVar4)) break;
						pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
						if (pSVar1 == null) {
							throw new NullReferenceException();
						}
						pMVar5 = pSVar1.get_Item(key);
						key = MapLoader.GetLogicalParentId(pMVar5);
					}
					local_38.AddDescendants(iVar2, __this_00);
				}
			}
		}
		local_68.Dispose();
		return __this_00;
	}

	[Token(Token = "0x6005274")]
	[Address(RVA = "0x5C77780", Offset = "0x5C76780", VA = "0x5C77780")]
	private void AddDescendants(int id, HashSet<int> result)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$AddDescendants): 8 lines keep C-only constructs
		Dictionary<int, object> pSVar1;
		int id_00;
		System_Collections_Generic_List_Enumerator_T__o pSVar2;
		bool bVar3;
		List<int> __this_00;
		MethodInfo* method_00;
		System_Collections_Generic_List_Enumerator_T__o local_58;
		byte local_38;

		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		pSVar1 = (Dictionary<int, object>)this._treeChildren;
		if (pSVar1 != null) {
			bVar3 = pSVar1.ContainsKey(id);
			if (!bVar3) {
				return;
			}
			pSVar1 = (Dictionary<int, object>)this._treeChildren;
			if (pSVar1 != null) {
				__this_00 = (List<int>)pSVar1.get_Item(id);
				local_38 = (byte)&local_58;
				if (__this_00 != null) {
					method_00 = &MethodInfo_System_Collections_Generic_List_int_GetEnumerator;
					local_58 = __this_00.GetEnumerator();
					pSVar2 = &local_58;
					if (result == null) {
						bVar3 = local_58.MoveNext();
						if (bVar3) {
							throw new NullReferenceException();
						}
					}
					else {
						while (true) {
							local_38 = (byte)pSVar2;
							bVar3 = local_58.MoveNext();
							if (!(bVar3)) break;
							id_00 = (int32_t)local_58._current;
							bVar3 = result.Add((int32_t)local_58._current);
							pSVar2 = (System_Collections_Generic_List_Enumerator_T__o)local_38;
							if (bVar3) {
								this.AddDescendants(id_00, result);
								pSVar2 = (System_Collections_Generic_List_Enumerator_T__o)local_38;
							}
						}
					}
					local_58.Dispose();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005275")]
	[Address(RVA = "0x5C77450", Offset = "0x5C76450", VA = "0x5C77450")]
	private void AddTreeRowsRecursive(int id, int depth, HashSet<int> context, bool forceExpand)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$AddTreeRowsRecursive): 6 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Dictionary<int, object> pSVar3;
		List<MapEditorHierarchyPanel.RowData> __this_00;
		MapEditorHierarchyPanel.RowData[] pUVar4;
		HashSet<int> __this_01;
		bool bVar6;
		object pIVar7;
		List<int> __this_02;
		MapEditorHierarchyPanel.RowData item;
		System_Collections_Generic_List_Enumerator_T__o local_58;
		System_Collections_Generic_List_Enumerator_T__o local_38;

		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		pSVar3 = (Dictionary<int, object>)MapLoader.IdToMapObject;
		if (pSVar3 != null) {
			bVar6 = pSVar3.ContainsKey(id);
			if (!bVar6) {
				return;
			}
			if ((context != null) &&(bVar6 = context.Contains(id), !bVar6)) {
				return;
			}
			__this_00 = this._rows;
			if (__this_00 != null) {
				piVar1 = &__this_00._version;
				*piVar1 = *piVar1 + 1;
				pUVar4 = __this_00._items;
				if (pUVar4 != null) {
					item.Depth = depth;
					item.Id = id;
					uVar2 = __this_00._size;
					if (uVar2 < (uint)pUVar4.Length) {
						__this_00._size = uVar2 + 1;
						pUVar4[(int)uVar2] = item;
					}
					else {
						__this_00.AddWithResize((MapEditorHierarchyPanel.RowData)item);
					}
					pSVar3 = (Dictionary<int, object>)this._treeChildren;
					if (pSVar3 != null) {
						bVar6 = pSVar3.ContainsKey(id);
						if (!bVar6) {
							return;
						}
						pSVar3 = (Dictionary<int, object>)this._treeChildren;
						if ((pSVar3 != null) &&(pIVar7 = pSVar3.get_Item(id), pIVar7 != null)) {
							if (*(int)&pIVar7[1].monitor == 0) {
								return;
							}
							if (!forceExpand) {
								__this_01 = this._expanded;
								if (__this_01 == null) goto label_05d7771a;
								bVar6 = __this_01.Contains(id);
								if (!bVar6) {
									return;
								}
							}
							pSVar3 = (Dictionary<int, object>)this._treeChildren;
							if ((pSVar3 != null) &&(__this_02 = (List<int>)pSVar3.get_Item(id) , __this_02 != null)) {
								local_58 = __this_02.GetEnumerator();
								local_38 = &local_58;
								while (bVar6 = local_58.MoveNext()) {
									this.AddTreeRowsRecursive((int32_t)local_58._current, depth + 1, context, forceExpand);
								}
								local_58.Dispose();
								return;
							}
						}
					}
				}
			}
		}
	label_05d7771a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005276")]
	[Address(RVA = "0x5C76FC0", Offset = "0x5C75FC0", VA = "0x5C76FC0")]
	private bool MatchesSearch(MapObject obj, string search)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$MatchesSearch): clean
		MapScriptBaseObject pMVar1;
		bool bVar2;
		String pSVar3;

		bVar2 = (search == (String)**(ulong*)(g_data_07556758 + 0xb8));
		if (bVar2) {
			return true;
		}
		if ((obj != null) &&(pMVar1 = obj.ScriptObject, pMVar1 != null)) {
			pSVar3 = pMVar1.Name;
			if (pSVar3 == null) {
				pSVar3 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				pSVar3 = pSVar3.ToLower();
			}
			if (pSVar3 != null) {
				bVar2 = pSVar3.Contains(search);
				if (bVar2) {
					return true;
				}
				pMVar1 = obj.ScriptObject;
				if (pMVar1 != null) {
					pSVar3 = (pMVar1.Id).ToString();
					bVar2 = (pSVar3 == search);
					return bVar2;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005277")]
	[Address(RVA = "0x5C74F60", Offset = "0x5C73F60", VA = "0x5C74F60")]
	private void EnsurePoolSize(int size)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$EnsurePoolSize): 4 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		GameObject[] pUVar3;
		bool bVar5;
		MethodInfo method_00;
		RectMask2D x;
		List<GameObject> pSVar6;
		uint in_register_00000034;

		method_00 = (MethodInfo)CONCAT44(in_register_00000034, size);
		pSVar6 = this._itemPool;
		while (pSVar6 != null) {
			while(true) {
				if (size <= pSVar6._size) {
					if (this._treeViewEnabled == false) {
						return;
					}
					this.OrderVirtualizedChildren();
					return;
				}
				method_00 = (MethodInfo)ElementFactory.InstantiateAndBind(this.SinglePanel, "Prefabs/Misc/MapEditorHierarchyButton");
				if (method_00 == null) goto label_05d7511f;
				method_00.SetActive(false);
				x = method_00.GetComponent<RectMask2D>();
				bVar5 = ((Object)x == null);
				if (bVar5) {
					method_00.AddComponent<RectMask2D>();
				}
				pSVar6 = this._itemPool;
				if (pSVar6 == null) goto label_05d7511f;
				piVar1 = &pSVar6._version;
				*piVar1 = *piVar1 + 1;
				pUVar3 = pSVar6._items;
				if (pUVar3 == null) goto label_05d7511f;
				uVar2 = pSVar6._size;
				if ((uint)pUVar3.Length <= uVar2) break;
				pSVar6._size = uVar2 + 1;
				pUVar3[(int)uVar2] = (GameObject)method_00;
				pSVar6 = this._itemPool;
				if (pSVar6 == null) goto label_05d7511f;
			}
			pSVar6.AddWithResize((object)method_00);
			pSVar6 = this._itemPool;
		}
	label_05d7511f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005278")]
	[Address(RVA = "0x5C75130", Offset = "0x5C74130", VA = "0x5C75130")]
	private void BindPooledItem(GameObject go, RowData row, int rowIndex)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$BindPooledItem): 18 lines keep C-only constructs
		Dictionary<int, object> pSVar1;
		HashSet<int> pSVar2;
		MapScriptBaseObject pMVar3;
		Button.ButtonClickedEvent pUVar4;
		UnityEvent pUVar5;
		bool value;
		bool bVar6;
		bool bVar7;
		MapEditorHierarchyPanel.c__DisplayClass91_0 __this_00;
		MapObject pMVar8;
		Transform pUVar9;
		MapEditorHierarchyPanel pUVar10;
		Object x;
		Text __this_01;
		LayoutElement pUVar11;
		HorizontalLayoutGroup __this_02;
		RectOffset __this_03;
		MapEditorHirarchyButton __this_04;
		UnityAction pUVar12;
		UnityAction __this_05;
		UnityAction<T0> __this_06;
		UnityAction<T0> __this_07;
		UnityAction<T0> __this_08;
		UnityAction<T0> __this_09;
		UnityAction<T0> __this_10;
		object pIVar13;
		GameObject arrowObject;
		GameObject __this_11;
		GameObject __this_12;
		Button x_00;
		Button x_01;
		String* method_00;
		int iVar14;
		float fVar15;
		float fVar16;
		Color UVar17;

		__this_00 = new MapEditorHierarchyPanel.c__DisplayClass91_0();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			__this_00.row = row;
			pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
			if (pSVar1 != null) {
				value = pSVar1.ContainsKey(__this_00.row.Id);
				if (!value) {
					if (go == null) goto label_05d75cac;
					goto label_05d75c90;
				}
				pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
				if (pSVar1 != null) {
					pMVar8 = pSVar1.get_Item(__this_00.row.Id);
					pSVar1 = (Dictionary<int, object>)this._idToItem;
					if ((((pSVar1 != null) &&(pSVar1.set_Item(__this_00.row.Id, (object)go), go != null)) &&(pUVar9 = go.transform, pUVar9 != null)) &&(pUVar9 = pUVar9.Find("Highlight"), pUVar9 != null)) {
						pUVar10 = (MapEditorHierarchyPanel)pUVar9.gameObject ;
						pSVar2 = this._selected;
						if ((pSVar2 != null) &&(bVar6 = pSVar2.Contains(__this_00.row.Id), pUVar10 != null)) {
							pUVar10.SetActive(bVar6);
							x = (Object)pUVar10.GetOrCreateRowDropOverlay(go);
							bVar6 = (x != null);
							if (bVar6) {
								if (x == null) goto label_05d75cac;
								x.SetActive(__this_00.row.Id == this._dropIndicatorId);
							}
							pUVar9 = go.transform;
							if (((pUVar9 != null) &&(pUVar9 = pUVar9.Find("Text"), pUVar9 != null)) &&((__this_01 = pUVar9.GetComponent<Text>(), pMVar8 != null &&((pMVar3 = pMVar8.ScriptObject, pMVar3 != null &&(__this_01 != null)))))) {
								__this_01.set_text(pMVar3.Name);
								__this_01.horizontalOverflow = 1;
								UVar17 = UIManager.GetThemeColor("DefaultPanel", "DefaultLabel", "TextColor", "DefaultPanel");
								__this_01.set_color(UVar17);
								pUVar11 = __this_01.GetComponent<LayoutElement>();
								if (pUVar11 != null) {
									pUVar11.set_minWidth(0.0);
									pUVar11.set_preferredWidth(0.0);
									pUVar11.set_flexibleWidth(1.0);
									if (this._treeViewEnabled == false) {
										iVar14 = 10;
									}
									else {
										iVar14 = __this_00.row.Depth * 0x12 + 6;
									}
									__this_02 = go.GetComponent<HorizontalLayoutGroup>();
									__this_03 = new RectOffset(iVar14, 0, 0, 0);
									if (__this_02 != null) {
										__this_02.padding = __this_03;
										__this_02.spacing = 2.0;
										pUVar11 = go.GetComponent<LayoutElement>();
										if (pUVar11 != null) {
											pUVar11.set_minWidth(0.0);
											fVar15 = this.GetPanelWidth();
											iVar14 = this.get_HorizontalPadding();
											fVar15 = fVar15 - ((float)iVar14 + (float)iVar14);
											fVar16 = 0.0;
											if (0.0 <= fVar15) {
												fVar16 = fVar15;
											}
											pUVar11.set_preferredWidth(fVar16);
											pUVar11.set_preferredHeight(22.0);
											pUVar11.set_minHeight(22.0);
											this._virtualRowHeight = 22.0;
											__this_04 = go.GetComponent<MapEditorHirarchyButton>();
											bVar6 = ((Object)__this_04 == null);
											if (bVar6) {
												__this_04 = go.AddComponent<MapEditorHirarchyButton>();
											}
											pUVar12 = new UnityAction((object)__this_00, (intptr_t) MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass91_0_BindPooledItem_b__0);
											__this_05 = new UnityAction((object)__this_00, (intptr_t) MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass91_0_BindPooledItem_b__1);
											__this_06 = (UnityAction<T0>)il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction<PointerEventData>));
											__this_06 = new UnityAction<object>((object)__this_00, (intptr_t) MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass91_0_BindPooledItem_b__2);
											__this_07 = (UnityAction<T0>)il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction<PointerEventData>));
											__this_07 = new UnityAction<object>((object)__this_00, (intptr_t) MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass91_0_BindPooledItem_b__3);
											__this_08 = (UnityAction<T0>)il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction<PointerEventData>));
											__this_08 = new UnityAction<object>((object)__this_00, (intptr_t) MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass91_0_BindPooledItem_b__4);
											__this_09 = (UnityAction<T0>)il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction<PointerEventData>));
											__this_09 = new UnityAction<object>((object)__this_00, (intptr_t) MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass91_0_BindPooledItem_b__5);
											__this_10 = (UnityAction<T0>)il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction<PointerEventData>));
											__this_10 = new UnityAction<object>((object)__this_00, (intptr_t) MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass91_0_BindPooledItem_b__6);
											if (__this_04 != null) {
												__this_04.Setup(pUVar12, __this_05, (UnityAction<PointerEventData>)__this_06, (UnityAction<PointerEventData>)__this_07, (UnityAction<PointerEventData>)__this_08, (UnityAction<PointerEventData>)__this_09, (UnityAction<PointerEventData>)__this_10);
												pSVar1 = (Dictionary<int, object>)this._treeChildren;
												if (pSVar1 != null) {
													bVar7 = pSVar1.ContainsKey(__this_00.row.Id);
													bVar6 = false;
													if (bVar7) {
														pSVar1 = (Dictionary<int, object>)this._treeChildren;
														if ((pSVar1 == null) ||(pIVar13 = pSVar1.get_Item(__this_00.row.Id), pIVar13 == null)) goto label_05d75cac;
														bVar6 = 0 < *(int)&pIVar13[1].monitor;
													}
													pSVar2 = this._expanded;
													if (pSVar2 != null) {
														bVar7 = pSVar2.Contains(__this_00.row.Id);
														pUVar9 = go.transform;
														if ((pUVar9 != null) &&(pUVar9 = pUVar9.Find("ArrowRightButton"), pUVar9 != null)) {
															arrowObject = pUVar9.gameObject;
															pUVar9 = go.transform;
															if (pUVar9 != null) {
																method_00 = &"ArrowDownButton";
																pUVar9 = pUVar9.Find("ArrowDownButton");
																if (((pUVar9 != null) &&(__this_11 = pUVar9.gameObject , __this_11 != null)) &&(pUVar10 = (MapEditorHierarchyPanel)__this_11.transform , pUVar10 != null)) {
																	iVar14 = pUVar10.GetSiblingIndex();
																	__this_12 = pUVar10.GetOrCreateTreeArrowSpacer(go, iVar14);
																	this.SetTreeArrowIcon(arrowObject, "Icons/Navigation/ArrowRight");
																	this.SetTreeArrowIcon(__this_11, "Icons/Navigation/ArrowDown");
																	if ((bVar6 & this._treeViewEnabled) == 0) {
																		if (arrowObject != null) {
																			arrowObject.SetActive(false);
																			__this_11.SetActive(false);
																			if (__this_12 != null) {
																				__this_12.SetActive(this._treeViewEnabled);
																				goto label_05d75c90;
																			}
																		}
																	}
																	else if ((__this_12 != null) &&(__this_12.SetActive(false), arrowObject != null)) {
																		arrowObject.SetActive(!bVar7);
																		__this_11.SetActive(bVar7);
																		x_00 = arrowObject.GetComponent<Button>();
																		x_01 = __this_11.GetComponent<Button>();
																		bVar6 = ((Object)x_00 != null);
																		if (bVar6) {
																			if ((x_00 == null) ||(pUVar4 = x_00.m_OnClick, pUVar4 == null)) goto label_05d75cac;
																			pUVar4.RemoveAllListeners();
																			pUVar5 = (UnityEvent)x_00.m_OnClick;
																			pUVar12 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																			pUVar12 = new UnityAction((object)__this_00, (intptr_t) MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass91_0_BindPooledItem_b__7);
																			if (pUVar5 == null) goto label_05d75cac;
																			pUVar5.AddListener(pUVar12);
																		}
																		bVar6 = ((Object)x_01 != null);
																		if (!bVar6) {
	label_05d75c90: ;
																			go.SetActive(value);
																			return;
																		}
																		if ((x_01 != null) &&(pUVar4 = x_01.m_OnClick, pUVar4 != null)) {
																			pUVar4.RemoveAllListeners();
																			pUVar5 = (UnityEvent)x_01.m_OnClick;
																			pUVar12 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																			pUVar12 = new UnityAction((object)__this_00, (intptr_t) MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass91_0_BindPooledItem_b__8);
																			if (pUVar5 != null) {
																				pUVar5.AddListener(pUVar12);
																				goto label_05d75c90;
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	label_05d75cac: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005279")]
	[Address(RVA = "0x5C78200", Offset = "0x5C77200", VA = "0x5C78200")]
	private void SetTreeArrowIcon(GameObject arrowObject, string icon)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$SetTreeArrowIcon): 6 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		byte bVar3;
		uint uVar4;
		uint uVar5;
		RawImage pUVar7;
		String path;
		uint uVar8;
		ColorBlock value;
		bool bVar9;
		Transform pUVar10;
		LayoutElement x;
		Button __this_00;
		RawImage __this_01;
		MethodInfo method_00;
		Color UVar11;
		Vector3 value_00;

		if (arrowObject == null) goto label_05d78727;
		pUVar10 = arrowObject.transform;
		if (pUVar10 == null) goto label_05d78727;
		pUVar10.localRotation = (UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields;
		pUVar10 = arrowObject.transform;
		if (pUVar10 == null) goto label_05d78727;
		value_00.z = (Vector3.oneVector).z * 2.25;
		uVar1 = (Vector3.oneVector).x;
		uVar2 = (Vector3.oneVector).y;
		value_00.x = (float)uVar1 * 2.25;
		value_00.y = (float)uVar2 * 2.25;
		pUVar10.localScale = value_00;
		x = arrowObject.GetComponent<LayoutElement>();
		bVar9 = ((Object)x != null);
		if (bVar9) {
			if (x == null) goto label_05d78727;
			x.set_minWidth(16.0);
			x.set_minHeight(18.0);
			x.set_preferredWidth(16.0);
			x.set_preferredHeight(18.0);
		}
		__this_00 = arrowObject.GetComponent<Button>();
		bVar9 = ((Object)__this_00 != null);
		if (bVar9) {
			if (__this_00 == null) goto label_05d78727;
			pUVar7 = (RawImage)__this_00.m_TargetGraphic;
			if (pUVar7 == null) goto label_05d7849f;
			bVar3 = (typeof(RawImage)._2).typeHierarchyDepth;
			if ((pUVar7.klass._2).typeHierarchyDepth < bVar3) {
				__this_01 = null;
				uVar4 = (typeof(Object)._2).cctor_finished_or_no_cctor;
			}
			else {
				__this_01 = null;
				if ((pUVar7.klass._2).typeHierarchy[(ulong)bVar3 - 1] ==typeof(RawImage)) {
					__this_01 = pUVar7;
				}
				uVar4 = (typeof(Object)._2).cctor_finished_or_no_cctor;
			}
		}
		else {
	label_05d7849f: ;
			__this_01 = null;
			uVar4 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar4 == 0) {
		}
		bVar9 = ((Object)__this_01 == null);
		if (bVar9) {
			__this_01 = arrowObject.GetComponent<RawImage>();
			bVar9 = ((Object)__this_01 == null);
			if (bVar9) {
				__this_01 = arrowObject.AddComponent<RawImage>();
			}
			bVar9 = ((Object)__this_00 != null);
			if (bVar9) {
				if (__this_00 == null) goto label_05d78727;
				__this_00.targetGraphic = (Graphic)__this_01;
			}
		}
		path = ResourcePaths.UI;
		method_00 = (MethodInfo)ResourceManager.LoadAsset(path, icon, true, false);
		if (__this_01 == null) {
	label_05d78727: ;
			throw new NullReferenceException();
		}
		if ((method_00 != null) &&((Texture)method_00.methodPointer !=(Texture)typeof(Texture2D))) {
			throw new InvalidCastException();
		}
		__this_01.texture = (Texture)method_00;
		UVar11 = this.IconColor();
		__this_01.set_color(UVar11);
		__this_01.set_raycastTarget(true);
		bVar9 = ((Object)__this_00 != null);
		if (bVar9) {
			if (__this_00 == null) goto label_05d78727;
			__this_00.transition = 1;
			uVar5 = __this_00.m_Colors.m_ColorMultiplier;
			uVar8 = __this_00.m_Colors.m_FadeDuration;
			value.m_FadeDuration = (float)uVar8;
			value.m_ColorMultiplier = (float)uVar5;
			value.m_NormalColor.b = 0.65;
			value.m_NormalColor.a = 1.0;
			value.m_NormalColor._0_8_ = 0x3f2666663f266666;
			value.m_HighlightedColor.r = 0.8;
			value.m_HighlightedColor.g = 0.8;
			value.m_HighlightedColor.b = 0.8;
			value.m_HighlightedColor.a = 1.0;
			value.m_PressedColor._0_8_ = 0x3f2666663f266666;
			value.m_PressedColor.b = 0.65;
			value.m_PressedColor.a = 1.0;
			value.m_SelectedColor._0_8_ = 0x3f2666663f266666;
			value.m_SelectedColor.b = 0.65;
			value.m_SelectedColor.a = 1.0;
			value.m_DisabledColor.r = 0.45;
			value.m_DisabledColor.g = 0.45;
			value.m_DisabledColor.b = 0.45;
			value.m_DisabledColor.a = 1.0;
			__this_00.colors = value;
		}
		return;
	}

	[Token(Token = "0x600527A")]
	[Address(RVA = "0x5C77F10", Offset = "0x5C76F10", VA = "0x5C77F10")]
	private GameObject GetOrCreateTreeArrowSpacer(GameObject row, int siblingIndex)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$GetOrCreateTreeArrowSpacer): 2 lines keep C-only constructs
		Il2CppType handle;
		bool bVar1;
		Transform pUVar2;
		GameObject pUVar3;
		Type[] components;
		Type pSVar4;
		object pIVar5;
		Transform parent;
		LayoutElement pUVar6;

		if (row == null) {
	label_05d781e1: ;
			throw new NullReferenceException();
		}
		pUVar2 = row.transform;
		if (pUVar2 == null) goto label_05d781e1;
		pUVar2 = pUVar2.Find("TreeArrowSpacer");
		bVar1 = ((Object)pUVar2 != null);
		if (bVar1) {
			if (pUVar2 != null) {
				pUVar3 = pUVar2.gameObject;
				return pUVar3;
			}
			goto label_05d781e1;
		}
		components = (Type[])new Type[2];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar4 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components == null) goto label_05d781e1;
		if (pSVar4 != null) {
			pIVar5 = il2cpp_vm_Object_IsInst((object)pSVar4, (((components.obj).klass)._1).element_class);
			if (pIVar5 == null) goto label_05d781eb;
		}
		if ((int)components.Length != 0) {
			components[0] = pSVar4;
			pSVar4 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_LayoutElement);
			if (pSVar4 != null) {
				pIVar5 = il2cpp_vm_Object_IsInst((object)pSVar4, (((components.obj).klass)._1).element_class);
				if (pIVar5 == null) {
	label_05d781eb: ;
					pIVar5 = new ArrayTypeMismatchException();
					throw pIVar5;
				}
			}
			if ((components.Length & 0xfffffffe) != 0) {
				components[1] = pSVar4;
				pUVar3 = new GameObject("TreeArrowSpacer", components);
				if (pUVar3 != null) {
					pUVar2 = pUVar3.transform;
					parent = row.transform;
					if (pUVar2 != null) {
						pUVar2.SetParent(parent, false);
						pUVar2 = pUVar3.transform;
						if (pUVar2 != null) {
							pUVar2.SetSiblingIndex(siblingIndex);
							pUVar6 = pUVar3.GetComponent<LayoutElement>();
							if (pUVar6 != null) {
								pUVar6.set_minWidth(16.0);
								pUVar6.set_minHeight(18.0);
								pUVar6.set_preferredWidth(16.0);
								pUVar6.set_preferredHeight(18.0);
								return pUVar3;
							}
						}
					}
				}
				goto label_05d781e1;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x600527B")]
	[Address(RVA = "0x5C78740", Offset = "0x5C77740", VA = "0x5C78740")]
	private RectTransform GetViewportRect()
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$GetViewportRect): clean
		bool bVar1;
		Transform pUVar2;
		RectTransform pUVar3;

		pUVar2 = this.SinglePanel;
		bVar1 = ((Object)pUVar2 != null);
		if (!bVar1) {
			return null;
		}
		pUVar2 = this.SinglePanel;
		if (pUVar2 != null) {
			pUVar2 = pUVar2.parent;
			bVar1 = ((Object)pUVar2 != null);
			if (!bVar1) {
				return null;
			}
			pUVar2 = this.SinglePanel;
			if ((pUVar2 != null) &&(pUVar2 = pUVar2.parent, pUVar2 != null)) {
				pUVar2 = pUVar2.parent;
				bVar1 = ((Object)pUVar2 != null);
				if (!bVar1) {
					return null;
				}
				pUVar2 = this.SinglePanel;
				if (((pUVar2 != null) &&(pUVar2 = pUVar2.parent, pUVar2 != null)) &&(pUVar2 = pUVar2.parent, pUVar2 != null)) {
					pUVar3 = pUVar2.GetComponent<RectTransform>() ;
					return pUVar3;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600527C")]
	[Address(RVA = "0x5C73150", Offset = "0x5C72150", VA = "0x5C73150")]
	private void EnsureVirtualizationElements()
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$EnsureVirtualizationElements): 11 lines keep C-only constructs
		ScrollRect* targetAddress;
		UnityEngine_Events_UnityEvent_Vector2__o pUVar1;
		bool bVar2;
		Transform pUVar3;
		ScrollRect pUVar4;
		UnityAction<T0> pUVar5;
		LayoutElement pUVar6;
		MethodInfo method_00;

		pUVar4 = this._scrollRect;
		bVar2 = ((Object)pUVar4 == null);
		if (bVar2) {
			pUVar3 = this.SinglePanel;
			targetAddress = &this._scrollRect;
			bVar2 = ((Object)pUVar3 != null);
			if (bVar2) {
				pUVar3 = this.SinglePanel;
				if (pUVar3 == null) goto label_05d7349a;
				pUVar3 = pUVar3.parent;
				bVar2 = ((Object)pUVar3 != null);
				if (bVar2) {
					pUVar3 = this.SinglePanel;
					if (pUVar3 == null) goto label_05d7349a;
					pUVar3 = pUVar3.parent;
					if (pUVar3 == null) goto label_05d7349a;
					pUVar3 = pUVar3.parent;
					bVar2 = ((Object)pUVar3 != null);
					if (bVar2) {
						pUVar3 = this.SinglePanel;
						if (pUVar3 == null) goto label_05d7349a;
						pUVar3 = pUVar3.parent;
						if (pUVar3 == null) goto label_05d7349a;
						pUVar3 = pUVar3.parent;
						if (pUVar3 == null) goto label_05d7349a;
						pUVar4 = pUVar3.GetComponent<ScrollRect>();
						*targetAddress = pUVar4;
					}
				}
			}
			pUVar4 = *targetAddress;
			bVar2 = ((Object)pUVar4 != null);
			if (bVar2) {
				if (*targetAddress != null) {
					pUVar1 = (UnityEngine_Events_UnityEvent_Vector2__o)((*targetAddress).fields).m_OnValueChanged;
					pUVar5 = new UnityAction<Vector2>((object)this, (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_OnScrollValueChanged);
					if (pUVar1 != null) {
						pUVar1.RemoveListener(pUVar5);
						if (*targetAddress != null) {
							pUVar1 = (UnityEngine_Events_UnityEvent_Vector2__o)((*targetAddress).fields).m_OnValueChanged;
							pUVar5 = (UnityAction<T0>)il2cpp_codegen_object_new(typeof(UnityAction<Vector2>)) ;
							pUVar5 = new UnityAction<Vector2>((object)this, (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_OnScrollValueChanged);
							if (pUVar1 != null) {
								pUVar1.AddListener(pUVar5);
								goto label_05d733dc;
							}
						}
					}
				}
	label_05d7349a: ;
				throw new NullReferenceException();
			}
		}
	label_05d733dc: ;
		pUVar6 = this._topSpacer;
		bVar2 = ((Object)pUVar6 == null);
		if (bVar2) {
			pUVar6 = this.CreateSpacer("TreeVirtualTopSpacer");
			this._topSpacer = pUVar6;
		}
		pUVar6 = this._bottomSpacer;
		method_00 = null;
		bVar2 = ((Object)pUVar6 == null);
		if (bVar2) {
			method_00 = (MethodInfo)this.CreateSpacer("TreeVirtualBottomSpacer") ;
			this._bottomSpacer = (LayoutElement)method_00;
		}
		this.OrderVirtualizedChildren();
		return;
	}

	[Token(Token = "0x600527D")]
	[Address(RVA = "0x5C78870", Offset = "0x5C77870", VA = "0x5C78870")]
	private LayoutElement CreateSpacer(string name)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$CreateSpacer): 2 lines keep C-only constructs
		Il2CppType handle;
		Type[] components;
		Type pSVar1;
		object pIVar2;
		GameObject __this_00;
		Transform __this_01;
		LayoutElement pUVar3;

		components = (Type[])new Type[2];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar1 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components == null) {
	label_05d78a5d: ;
			throw new NullReferenceException();
		}
		if (pSVar1 != null) {
			pIVar2 = il2cpp_vm_Object_IsInst((object)pSVar1, (((components.obj).klass)._1).element_class);
			if (pIVar2 == null) goto label_05d78a67;
		}
		if ((int)components.Length != 0) {
			components[0] = pSVar1;
			pSVar1 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_LayoutElement);
			if (pSVar1 != null) {
				pIVar2 = il2cpp_vm_Object_IsInst((object)pSVar1, (((components.obj).klass)._1).element_class);
				if (pIVar2 == null) {
	label_05d78a67: ;
					pIVar2 = new ArrayTypeMismatchException();
					throw pIVar2;
				}
			}
			if ((components.Length & 0xfffffffe) != 0) {
				components[1] = pSVar1;
				__this_00 = new GameObject(name, components);
				if (__this_00 != null) {
					__this_01 = __this_00.transform;
					if (__this_01 != null) {
						__this_01.SetParent(this.SinglePanel, false);
						pUVar3 = __this_00.GetComponent<LayoutElement>();
						if (pUVar3 != null) {
							pUVar3.set_minHeight(0.0);
							pUVar3.set_preferredHeight(0.0);
							pUVar3.set_flexibleHeight(0.0);
							return pUVar3;
						}
					}
				}
				goto label_05d78a5d;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x600527E")]
	[Address(RVA = "0x5C74A50", Offset = "0x5C73A50", VA = "0x5C74A50")]
	private void SetVirtualizationActive(bool active)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$SetVirtualizationActive): 2 lines keep C-only constructs
		LayoutElement pUVar1;
		bool bVar2;
		GameObject pUVar3;
		undefined7 in_register_00000031;
		MethodInfo pMVar4;

		pMVar4 = (MethodInfo)CONCAT71(in_register_00000031, active);
		this.EnsureVirtualizationElements();
		pUVar1 = this._topSpacer;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._topSpacer;
			if (pUVar1 == null) goto label_05d74b90;
			pUVar3 = pUVar1.gameObject;
			if (pUVar3 == null) goto label_05d74b90;
			pUVar3.SetActive(active);
			pUVar1 = this._topSpacer;
			if (pUVar1 == null) goto label_05d74b90;
			pUVar1.set_preferredHeight(0.0);
		}
		pUVar1 = this._bottomSpacer;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._bottomSpacer;
			if (pUVar1 != null) {
				pUVar3 = pUVar1.gameObject;
				if (pUVar3 != null) {
					pUVar3.SetActive(active);
					pUVar1 = this._bottomSpacer;
					if (pUVar1 != null) {
						pUVar1.set_preferredHeight(0.0);
						goto label_05d74b6e;
					}
				}
			}
	label_05d74b90: ;
			throw new NullReferenceException();
		}
	label_05d74b6e: ;
		if (active) {
			this.OrderVirtualizedChildren();
			return;
		}
		return;
	}

	[Token(Token = "0x600527F")]
	[Address(RVA = "0x5C77980", Offset = "0x5C76980", VA = "0x5C77980")]
	private void OrderVirtualizedChildren()
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$OrderVirtualizedChildren): clean
		LayoutElement pUVar1;
		bool bVar2;
		int iVar3;
		Transform pUVar4;
		GameObject __this_00;
		int index;
		List<GameObject> __this_01;

		pUVar1 = this._topSpacer;
		bVar2 = ((Object)pUVar1 == null);
		if (!bVar2) {
			pUVar1 = this._bottomSpacer;
			bVar2 = ((Object)pUVar1 == null);
			if (!bVar2) {
				pUVar1 = this._topSpacer;
				if ((pUVar1 != null) &&(pUVar4 = pUVar1.transform, pUVar4 != null)) {
					index = 0;
					iVar3 = pUVar4.GetSiblingIndex();
					__this_01 = this._itemPool;
					if (__this_01 != null) {
						while (index < __this_01._size) {
							__this_00 = __this_01.get_Item(index);
							if ((__this_00 == null) ||(pUVar4 = __this_00.transform, pUVar4 == null)) goto label_05d77ae3;
							pUVar4.SetSiblingIndex(iVar3 + 1 + index);
							index = index + 1;
							__this_01 = this._itemPool;
							if (__this_01 == null) goto label_05d77ae3;
						}
						pUVar1 = this._bottomSpacer;
						if ((pUVar1 != null) &&(pUVar4 = pUVar1.transform, pUVar4 != null)) {
							pUVar4.SetSiblingIndex(iVar3 + index + 1);
							return;
						}
					}
				}
	label_05d77ae3: ;
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6005280")]
	[Address(RVA = "0x5C78A80", Offset = "0x5C77A80", VA = "0x5C78A80")]
	private void OnScrollValueChanged(Vector2 value)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$OnScrollValueChanged): clean


		if (this._treeViewEnabled == false) {
			return;
		}
		this.RenderVirtualizedRows(false);
		return;
	}

	[Token(Token = "0x6005281")]
	[Address(RVA = "0x5C78AA0", Offset = "0x5C77AA0", VA = "0x5C78AA0")]
	private float GetVirtualStride()
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$GetVirtualStride): clean
		Transform __this_00;
		bool bVar1;
		VerticalLayoutGroup x;
		float fVar2;
		float fVar3;

		fVar2 = this.get_VerticalSpacing();
		__this_00 = this.SinglePanel;
		if (__this_00 == null) {
	label_05d78b58: ;
			throw new NullReferenceException();
		}
		x = __this_00.GetComponent<VerticalLayoutGroup>();
		bVar1 = ((Object)x != null);
		if (bVar1) {
			if (x == null) goto label_05d78b58;
			fVar2 = x.m_Spacing;
		}
		fVar2 = fVar2 + this._virtualRowHeight;
		if (1.0 <= fVar2) {
		}
		return fVar3;
	}

	[Token(Token = "0x6005282")]
	[Address(RVA = "0x5C78B60", Offset = "0x5C77B60", VA = "0x5C78B60")]
	private int GetVirtualPoolSize(int totalRows)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$GetVirtualPoolSize): clean
		float fVar1;
		uint uVar2;
		Transform __this_00;
		bool bVar3;
		int iVar4;
		RectTransform __this_01;
		VerticalLayoutGroup x;
		int iVar5;
		float fVar6;
		float fVar7;
		Rect UVar8;
		float local_3c;

		fVar6 = this.GetPanelHeight();
		__this_01 = this.GetViewportRect();
		bVar3 = ((Object)__this_01 != null);
		if (bVar3) {
			if (__this_01 == null) goto label_05d78d65;
			UVar8 = __this_01.rect;
			fVar6 = UVar8.m_Height;
		}
		local_3c = this.get_VerticalSpacing();
		__this_00 = this.SinglePanel;
		if (__this_00 == null) {
	label_05d78d65: ;
			throw new NullReferenceException();
		}
		x = __this_00.GetComponent<VerticalLayoutGroup>();
		bVar3 = ((Object)x != null);
		if (bVar3) {
			if (x == null) goto label_05d78d65;
			local_3c = x.m_Spacing;
		}
		fVar1 = this._virtualRowHeight;
		if (Il2CppMethodInitialized_0753e7f9 == false) {
			Il2CppMethodInitialized_0753e7f9 = true;
			uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		fVar7 = 1.0;
		if (1.0 <= fVar6) {
			fVar7 = fVar6;
		}
		local_3c = local_3c + fVar1;
		fVar6 = 1.0;
		if (1.0 <= local_3c) {
			fVar6 = local_3c;
		}
		fVar6 = ceilf(fVar7 / fVar6);
		iVar5 = 0x28;
		if (0x28 < (int)fVar6 + 0xe) {
			iVar5 = (int)fVar6 + 0xe;
		}
		iVar4 = 1;
		if (1 < totalRows) {
			iVar4 = totalRows;
		}
		if (iVar5 < iVar4) {
			iVar4 = iVar5;
		}
		return iVar4;
	}

	[Token(Token = "0x6005283")]
	[Address(RVA = "0x5C78E80", Offset = "0x5C77E80", VA = "0x5C78E80")]
	private float GetListHeaderOffset()
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$GetListHeaderOffset): clean
		return 0.0;
	}

	[Token(Token = "0x6005284")]
	[Address(RVA = "0x5C78E90", Offset = "0x5C77E90", VA = "0x5C78E90")]
	private int GetVirtualStartIndex(int maxStart, int totalRows, int poolSize, float stride)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$GetVirtualStartIndex): clean
		ScrollRect pUVar1;
		RectTransform pUVar2;
		bool bVar3;
		uint uVar4;
		int iVar5;
		uint uVar6;
		float fVar7;
		float fVar8;
		Vector2 UVar9;

		pUVar1 = this._scrollRect;
		bVar3 = ((Object)pUVar1 != null);
		if (bVar3) {
			pUVar1 = this._scrollRect;
			if (pUVar1 == null) goto label_05d79076;
			pUVar2 = pUVar1.m_Content;
			bVar3 = ((Object)pUVar2 != null);
			if (bVar3) {
				pUVar1 = this._scrollRect;
				if ((pUVar1 == null) ||(pUVar2 = pUVar1.m_Content, pUVar2 == null)) goto label_05d79076;
				UVar9 = pUVar2.anchoredPosition;
				uVar6 = totalRows - poolSize;
				if (0 < (int)uVar6) {
					fVar8 = 0.0;
					if (0.0 <= UVar9.y) {
						fVar8 = UVar9.y;
					}
					fVar7 = 1.0;
					if (1.0 <= stride) {
						fVar7 = stride;
					}
					fVar8 = floorf(fVar8 / fVar7);
					uVar4 = (int)fVar8 - 7;
					if (-1 < (int)uVar4) {
						if ((int)uVar4 < (int)uVar6) {
							uVar6 = uVar4;
						}
						if ((int)uVar6 < maxStart) {
							maxStart = uVar6;
						}
						uVar4 = 0;
						if (-1 < (int)uVar6) {
							uVar4 = maxStart;
						}
						goto label_05d79067;
					}
				}
				uVar4 = maxStart >> 0x1f & maxStart;
				goto label_05d79067;
			}
		}
		pUVar1 = this._scrollRect;
		bVar3 = ((Object)pUVar1 != null);
		uVar4 = 0;
		if (!bVar3) {
	label_05d79067: ;
			return uVar4;
		}
		pUVar1 = this._scrollRect;
		if (pUVar1 != null) {
			fVar8 = pUVar1.verticalNormalizedPosition;
			iVar5 = MapEditorHierarchyVirtualization.ComputeStartIndexFromNormalized(fVar8, maxStart);
			return iVar5;
		}
	label_05d79076: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005285")]
	[Address(RVA = "0x5C74BA0", Offset = "0x5C73BA0", VA = "0x5C74BA0")]
	private void RenderVirtualizedRows(bool forceRebind = false)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$RenderVirtualizedRows): 2 lines keep C-only constructs
		Dictionary<int, object> __this_00;
		List<MapEditorHierarchyPanel.RowData> pSVar1;
		LayoutElement pUVar2;
		uint uVar3;
		bool bVar4;
		uint uVar5;
		int iVar6;
		GameObject pUVar7;
		MapEditorHierarchyPanel.RowData row;
		ulong uVar8;
		uint uVar9;
		int iVar10;
		undefined7 in_register_00000031;
		MethodInfo pMVar11;
		List<GameObject> pSVar12;
		int iVar13;
		float fVar14;
		float fVar15;
		float fVar16;

		pMVar11 = (MethodInfo)CONCAT71(in_register_00000031, forceRebind);
		this.EnsureVirtualizationElements();
		__this_00 = (Dictionary<int, object>)this._idToItem;
		if (__this_00 != null) {
			__this_00.Clear();
			pSVar1 = this._rows;
			if (pSVar1 != null) {
				uVar9 = pSVar1._size;
				uVar5 = this.GetVirtualPoolSize(uVar9);
				if ((int)uVar9 < (int)uVar5) {
					uVar5 = uVar9;
				}
				this.EnsurePoolSize(uVar5);
				if (uVar9 == 0) {
					pUVar2 = this._topSpacer;
					bVar4 = ((Object)pUVar2 != null);
					if (bVar4) {
						pUVar2 = this._topSpacer;
						if (pUVar2 == null) goto label_05d74f53;
						pUVar2.set_preferredHeight(0.0);
					}
					pUVar2 = this._bottomSpacer;
					bVar4 = ((Object)pUVar2 != null);
					if (bVar4) {
						pUVar2 = this._bottomSpacer;
						if (pUVar2 == null) goto label_05d74f53;
						pUVar2.set_preferredHeight(0.0);
					}
					pSVar12 = this._itemPool;
					if (pSVar12 != null) {
						iVar10 = 0;
						do {
							if (pSVar12._size <= iVar10) {
								return;
							}
							pUVar7 = pSVar12.get_Item(iVar10);
							if (pUVar7 == null) break;
							pUVar7.SetActive(false);
							iVar10 = iVar10 + 1;
							pSVar12 = this._itemPool;
						} while (pSVar12 != null);
					}
				}
				else {
					fVar14 = this.GetVirtualStride();
					iVar6 = 0;
					if (0 < (int)(uVar9 - uVar5)) {
						iVar6 = uVar9 - uVar5;
					}
					iVar6 = this.GetVirtualStartIndex(iVar6, uVar9, uVar5, fVar14);
					uVar3 = uVar9 - iVar6;
					if ((int)uVar5 < (int)(uVar9 - iVar6)) {
						uVar3 = uVar5;
					}
					uVar8 = (ulong)uVar3;
					uVar5 = 1;
					if (1 < (int)uVar3) {
						uVar5 = uVar3;
					}
					pUVar2 = this._topSpacer;
					bVar4 = ((Object)pUVar2 != null);
					if (bVar4) {
						pUVar2 = this._topSpacer;
						if (pUVar2 == null) goto label_05d74f53;
						fVar16 = 1.0;
						if (1.0 <= fVar14) {
							fVar16 = fVar14;
						}
						fVar15 = 0.0;
						if (0.0 <= (float)iVar6 * fVar16) {
							fVar15 = (float)iVar6 * fVar16;
						}
						pUVar2.set_preferredHeight(fVar15);
					}
					pUVar2 = this._bottomSpacer;
					bVar4 = ((Object)pUVar2 != null);
					if (bVar4) {
						pUVar2 = this._bottomSpacer;
						if (pUVar2 == null) goto label_05d74f53;
						fVar16 = 1.0;
						if (1.0 <= fVar14) {
							fVar16 = fVar14;
						}
						iVar13 = uVar9 - (iVar6 + uVar5);
						iVar10 = 0;
						if (0 < iVar13) {
							iVar10 = iVar13;
						}
						fVar14 = 0.0;
						if (0.0 <= (float)iVar10 * fVar16) {
							fVar14 = (float)iVar10 * fVar16;
						}
						pUVar2.set_preferredHeight(fVar14);
					}
					pSVar12 = this._itemPool;
					if (pSVar12 != null) {
						uVar9 = 0;
						do {
							while(true) {
								if (pSVar12._size <= (int)uVar9) {
									return;
								}
								pUVar7 = pSVar12.get_Item(uVar9);
								if (uVar5 <= uVar9) break;
								pSVar1 = this._rows;
								if (pSVar1 == null) goto label_05d74f53;
								row = pSVar1.get_Item(iVar6 + uVar9);
								this.BindPooledItem(pUVar7, row, (int32_t)uVar8);
								uVar9 = uVar9 + 1;
								pSVar12 = this._itemPool;
								if (pSVar12 == null) goto label_05d74f53;
							}
							if (pUVar7 == null) break;
							pUVar7.SetActive(false);
							uVar9 = uVar9 + 1;
							pSVar12 = this._itemPool;
						} while (pSVar12 != null);
					}
				}
			}
		}
	label_05d74f53: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005286")]
	[Address(RVA = "0x5C734A0", Offset = "0x5C724A0", VA = "0x5C734A0")]
	private void EnsureDragVisuals()
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$EnsureDragVisuals): 63 lines keep C-only constructs
		GameObject* ppUVar1;
		RectTransform* ppUVar2;
		Text* targetAddress;
		byte bVar3;
		Object pUVar4;
		MapEditorMenu __this_00;
		ElementStyle style;
		Il2CppType pIVar5;
		bool bVar6;
		Transform pUVar7;
		GameObject pUVar8;
		RectTransform pUVar9;
		LayoutElement pUVar10;
		Button __this_01;
		Image pUVar11;
		Canvas __this_02;
		GraphicRaycaster __this_03;
		Text pUVar12;
		RectTransform pUVar13;
		Type[] pSVar14;
		Type pSVar15;
		object pIVar16;
		String title;
		Color UVar18;
		Color UVar19;
		Color UVar20;
		Color UVar21;

		pUVar4 = (Object)this._dragGhost;
		bVar6 = (pUVar4 == null);
		if (bVar6) {
			__this_00 = this._menu;
			if (__this_00 == null) goto label_05d74122;
			ppUVar1 = &this._dragGhost;
			pUVar7 = __this_00.transform;
			pUVar8 = ElementFactory.InstantiateAndBind(pUVar7, "Prefabs/Elements/DefaultButton");
			*ppUVar1 = pUVar8;
			if ((Object)*ppUVar1 == null) goto label_05d74122;
			(*ppUVar1).name = "HierarchyDragGhost";
			if (*ppUVar1 == null) goto label_05d74122;
			pUVar9 = (*ppUVar1).GetComponent<RectTransform>();
			ppUVar2 = &this._dragGhostRect;
			this._dragGhostRect = pUVar9;
			pUVar9 = this._dragGhostRect;
			if (pUVar9 == null) goto label_05d74122;
			pUVar9.anchorMax = (Vector2)0x0;
			pUVar9.anchorMin = (Vector2)0x0;
			if (*ppUVar2 == null) goto label_05d74122;
			(*ppUVar2).pivot = (Vector2)0x3f80000000000000 ;
			if (*ppUVar1 == null) goto label_05d74122;
			pUVar10 = (*ppUVar1).GetComponent<LayoutElement>();
			if (pUVar10 == null) goto label_05d74122;
			pUVar10.set_ignoreLayout(true);
			if (*ppUVar2 == null) goto label_05d74122;
			(*ppUVar2).sizeDelta = (Vector2)0x41f00000435c0000;
			if (*ppUVar1 == null) goto label_05d74122;
			__this_01 = (*ppUVar1).GetComponent<Button>();
			bVar6 = ((Object)__this_01 != null);
			if (bVar6) {
				if (__this_01 == null) goto label_05d74122;
				__this_01.interactable = false;
				__this_01.transition = 0;
			}
			bVar6 = ((Object)__this_01 != null);
			if (!bVar6) goto label_05d7381d;
			if (__this_01 == null) goto label_05d74122;
			pUVar11 = (Image)__this_01.m_TargetGraphic;
			if (pUVar11 == null) {
	label_05d7381d: ;
				if (*ppUVar1 == null) goto label_05d74122;
				pUVar11 = (*ppUVar1).GetComponentInChildren<Image>();
			}
			else {
				bVar3 = (typeof(Image)._2).typeHierarchyDepth;
				if (((pUVar11.klass._2).typeHierarchyDepth < bVar3) ||((pUVar11.klass._2).typeHierarchy[(ulong)bVar3 - 1] != typeof(Image) )) goto label_05d7381d;
			}
			bVar6 = ((Object)pUVar11 != null);
			if (bVar6) {
				if (pUVar11 == null) goto label_05d74122;
				pUVar11.set_raycastTarget(false);
				UVar18.b = 0.18;
				UVar18.a = 0.75;
				UVar18.r = 0.18;
				UVar18.g = 0.18;
				pUVar11.set_color(UVar18);
			}
			if (*ppUVar1 == null) goto label_05d74122;
			__this_02 = (*ppUVar1).AddComponent<Canvas>();
			if (__this_02 == null) goto label_05d74122;
			__this_02.overrideSorting = true;
			__this_02.sortingOrder = 0x7fff;
			if (*ppUVar1 == null) goto label_05d74122;
			__this_03 = (*ppUVar1).AddComponent<GraphicRaycaster>();
			if (__this_03 == null) goto label_05d74122;
			__this_03.enabled = false;
			if (*ppUVar1 == null) goto label_05d74122;
			pUVar7 = (*ppUVar1).transform;
			if (pUVar7 == null) goto label_05d74122;
			pUVar7 = pUVar7.Find("Text");
			if (pUVar7 == null) goto label_05d74122;
			pUVar12 = pUVar7.GetComponent<Text>();
			targetAddress = &this._dragGhostText;
			this._dragGhostText = pUVar12;
			pUVar12 = this._dragGhostText;
			bVar6 = ((Object)pUVar12 != null);
			if (bVar6) {
				pUVar12 = *targetAddress;
				if (pUVar12 == null) goto label_05d74122;
				pUVar12.set_raycastTarget(false);
				pUVar12 = *targetAddress;
				if (pUVar12 == null) goto label_05d74122;
				UVar19.b = 1.0;
				UVar19.a = 1.0;
				UVar19.r = 1.0;
				UVar19.g = 1.0;
				pUVar12.set_color(UVar19);
			}
			if (*ppUVar1 == null) goto label_05d74122;
			(*ppUVar1).SetActive(false);
		}
		pUVar4 = (Object)this._rootDropOverlay;
		bVar6 = (pUVar4 == null);
		if (bVar6) {
			pUVar9 = this.GetViewportRect();
			if (pUVar9 == null) {
				pUVar7 = this.SinglePanel;
				if (pUVar7 == null) goto label_05d74122;
				pUVar13 = (RectTransform)pUVar7.parent;
				pUVar9 = null;
				if (pUVar13 != null) {
					if (pUVar13.klass != typeof(RectTransform)) goto label_05d7413b;
					pUVar9 = pUVar13;
				}
			}
			pSVar14 = (Type[])new Type[2];
			pIVar5 = TypeRef_UnityEngine_RectTransform;
			pSVar15 = Type.GetTypeFromHandle((RuntimeTypeHandle)pIVar5);
			if (pSVar14 == null) goto label_05d74122;
			if (pSVar15 != null) {
				pIVar16 = il2cpp_vm_Object_IsInst((object)pSVar15, (((pSVar14.obj).klass)._1).element_class);
				if (pIVar16 == null) goto label_05d7412c;
			}
			if ((int)pSVar14.Length == 0) goto label_05d74127;
			pSVar14[0] = pSVar15;
			pSVar15 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Image);
			if (pSVar15 != null) {
				pIVar16 = il2cpp_vm_Object_IsInst((object)pSVar15, (((pSVar14.obj).klass)._1).element_class);
				if (pIVar16 == null) goto label_05d7412c;
			}
			if ((pSVar14.Length & 0xfffffffe) == 0) goto label_05d74127;
			ppUVar1 = &this._rootDropOverlay;
			pSVar14[1] = pSVar15;
			pUVar8 = new GameObject("HierarchyRootDropOverlay", pSVar14);
			*ppUVar1 = pUVar8;
			if (*ppUVar1 == null) goto label_05d74122;
			pUVar7 = (*ppUVar1).transform;
			if (pUVar7 == null) goto label_05d74122;
			pUVar7.SetParent((Transform)pUVar9, false) ;
			if (*ppUVar1 == null) goto label_05d74122;
			pUVar9 = (*ppUVar1).GetComponent<RectTransform>();
			if (pUVar9 == null) goto label_05d74122;
			pUVar9.anchorMin = (Vector2)(Vector2.zeroVector);
			pUVar9.anchorMax = (Vector2)(Vector2.oneVector);
			pUVar9.offsetMin = (Vector2)(Vector2.zeroVector);
			pUVar9.offsetMax = (Vector2)(Vector2.zeroVector);
			if (*ppUVar1 == null) goto label_05d74122;
			pUVar11 = (*ppUVar1).GetComponent<Image>();
			if (pUVar11 == null) goto label_05d74122;
			UVar20.b = 0.15;
			UVar20.a = 0.14;
			UVar20.r = 0.95;
			UVar20.g = 0.64;
			pUVar11.set_color(UVar20);
			pUVar11.set_raycastTarget(false);
			if (*ppUVar1 == null) goto label_05d74122;
			pUVar7 = (*ppUVar1).transform;
			style = this._style;
			title = UIManager.GetLocale("MapEditor", "Hierarchy", "DropToRoot", "", "");
			pUVar8 = ElementFactory.CreateDefaultLabel(pUVar7, style, title, 0, 1);
			if (pUVar8 == null) goto label_05d74122;
			pUVar12 = pUVar8.GetComponent<Text>();
			this._rootDropOverlayText = pUVar12;
			pUVar9 = pUVar8.GetComponent<RectTransform>();
			if (pUVar9 == null) goto label_05d74122;
			pUVar9.anchorMin = (Vector2)0x3f8000003f000000;
			pUVar9.anchorMax = (Vector2)0x3f8000003f000000;
			pUVar9.pivot = (Vector2)0x3f8000003f000000;
			pUVar9.anchoredPosition = (Vector2)0xc0c0000000000000;
			if (*ppUVar1 == null) goto label_05d74122;
			(*ppUVar1).SetActive(false);
		}
		pUVar4 = (Object)this._insertLineIndicator;
		bVar6 = (pUVar4 == null);
		if (!bVar6) {
			return;
		}
		pUVar9 = this.GetViewportRect();
		if (pUVar9 == null) {
			pUVar7 = this.SinglePanel;
			if (pUVar7 == null) goto label_05d74122;
			pUVar13 = (RectTransform)pUVar7.parent;
			pUVar9 = null;
			if (pUVar13 != null) {
				if (pUVar13.klass != typeof(RectTransform)) {
	label_05d7413b: ;
					throw new InvalidCastException();
				}
				pUVar9 = pUVar13;
			}
		}
		pSVar14 = (Type[])new Type[2];
		pIVar5 = TypeRef_UnityEngine_RectTransform;
		pSVar15 = Type.GetTypeFromHandle((RuntimeTypeHandle)pIVar5);
		if (pSVar14 == null) {
	label_05d74122: ;
			throw new NullReferenceException();
		}
		if (pSVar15 != null) {
			pIVar16 = il2cpp_vm_Object_IsInst((object)pSVar15, (((pSVar14.obj).klass)._1).element_class);
			if (pIVar16 == null) goto label_05d7412c;
		}
		if ((int)pSVar14.Length != 0) {
			pSVar14[0] = pSVar15;
			pSVar15 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Image);
			if (pSVar15 != null) {
				pIVar16 = il2cpp_vm_Object_IsInst((object)pSVar15, (((pSVar14.obj).klass)._1).element_class);
				if (pIVar16 == null) {
	label_05d7412c: ;
					pIVar16 = new ArrayTypeMismatchException();
					throw pIVar16;
				}
			}
			if ((pSVar14.Length & 0xfffffffe) != 0) {
				ppUVar1 = &this._insertLineIndicator;
				pSVar14[1] = pSVar15;
				pUVar8 = new GameObject("HierarchyInsertLine", pSVar14);
				*ppUVar1 = pUVar8;
				if (*ppUVar1 != null) {
					pUVar7 = (*ppUVar1).transform;
					if (pUVar7 != null) {
						pUVar7.SetParent((Transform)pUVar9, false);
						if (*ppUVar1 != null) {
							pUVar9 = (*ppUVar1).GetComponent<RectTransform>();
							ppUVar2 = &this._insertLineRect;
							this._insertLineRect = pUVar9;
							pUVar9 = this._insertLineRect;
							if (pUVar9 != null) {
								pUVar9.anchorMin = (Vector2)0x3f00000000000000;
								if (*ppUVar2 != null) {
									(*ppUVar2).anchorMax = (Vector2)0x3f0000003f800000;
									if (*ppUVar2 != null) {
										(*ppUVar2).pivot = (Vector2)0x3f0000003f000000;
										if (*ppUVar2 != null) {
											(*ppUVar2).sizeDelta = (Vector2)0x4000000000000000;
											if (*ppUVar1 != null) {
												pUVar11 = (*ppUVar1).GetComponent<Image>();
												if (pUVar11 != null) {
													UVar21.b = 0.15;
													UVar21.a = 0.9;
													UVar21.r = 0.95;
													UVar21.g = 0.64;
													pUVar11.set_color(UVar21);
													pUVar11.set_raycastTarget(false);
													if (*ppUVar1 != null) {
														(*ppUVar1).SetActive(false);
														return;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
				goto label_05d74122;
			}
		}
	label_05d74127: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6005287")]
	[Address(RVA = "0x5C792C0", Offset = "0x5C782C0", VA = "0x5C792C0")]
	private void EnsureContextMenu()
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$EnsureContextMenu): clean
		MapEditorMenu __this_00;
		Transform pUVar1;
		String pSVar2;
		MapEditorContextMenu __this_01;

		if (this._contextMenu != null) {
			return;
		}
		__this_00 = this._menu;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		pUVar1 = __this_00.transform;
		pSVar2 = this.get_ThemePanel();
		__this_01 = new MapEditorContextMenu();
		__this_01._parent = pUVar1;
		__this_01._themePanel = pSVar2;
		this._contextMenu = __this_01;
		return;
	}

	[Token(Token = "0x6005288")]
	[Address(RVA = "0x5C79390", Offset = "0x5C78390", VA = "0x5C79390")]
	private void OnItemRightClick(int id, PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$OnItemRightClick): 102 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		MapEditorMenu __this_00;
		Dictionary<int, object> pSVar3;
		MapEditorGameManager pGVar4;
		HashSet<MapObject> source;
		MapEditorContextMenu pUVar5;
		MapEditorContextMenu.Item[] pUVar6;
		MapEditorContextMenu.Item item;
		MapEditorContextMenu.Item item_00;
		MapEditorContextMenu.Item item_01;
		MapEditorContextMenu.Item item_02;
		MapEditorContextMenu.Item item_03;
		MapEditorContextMenu.Item item_04;
		MapEditorContextMenu.Item item_05;
		MapEditorContextMenu.Item pUVar7;
		bool bVar8;
		MapEditorHierarchyPanel.c__DisplayClass107_0 __this_01;
		Func<MapObject, bool> __this_02;
		MapObject obj;
		List<MapEditorContextMenu.Item> __this_03;
		String pSVar9;
		Action pSVar10;
		MethodInfo pMVar11;
		long lVar12;
		String pSStack_e8;
		Action pSStack_e0;
		ulong uStack_d8;
		String pSStack_d0;
		Action pSStack_c8;
		ulong uStack_c0;
		String pSStack_b8;
		Action pSStack_b0;
		ulong uStack_a8;
		String pSStack_a0;
		Action pSStack_98;
		ulong uStack_90;
		String pSStack_88;
		Action pSStack_80;
		ulong uStack_78;
		String pSStack_70;
		Action pSStack_68;
		ulong uStack_60;
		String pSStack_58;
		Action pSStack_50;
		ulong uStack_48;
		MapEditorContextMenu pUStack_40;
		PointerEventData pUStack_38;

		__this_01 = new MapEditorHierarchyPanel.c__DisplayClass107_0();
		if (__this_01 != null) {
			__this_01.id = id;
			__this_01.__4__this = this;
			__this_00 = this._menu;
			if (__this_00 != null) {
				bVar8 = __this_00.IsPopupActive();
				if (bVar8) {
					return;
				}
				pSVar3 = (Dictionary<int, object>)MapLoader.IdToMapObject;
				if (pSVar3 != null) {
					bVar8 = pSVar3.ContainsKey(__this_01.id);
					if (!bVar8) {
						return;
					}
					pGVar4 = this._gameManager;
					if (pGVar4 != null) {
						source = pGVar4.SelectedObjects;
						__this_02 = new Func<MapObject, bool>((object)__this_01, (intptr_t) MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass107_0_OnItemRightClick_b__0);
						bVar8 = Enumerable.Any<MapObject>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_02);
						if (!bVar8) {
							pGVar4 = this._gameManager;
							if (pGVar4 == null) goto label_05d79ee1;
							pGVar4.DeselectAll();
							pGVar4 = this._gameManager;
							pSVar3 = (Dictionary<int, object>)MapLoader.IdToMapObject;
							if ((pSVar3 == null) ||(obj = pSVar3.get_Item(__this_01.id), pGVar4 == null)) goto label_05d79ee1;
							pGVar4.SelectObject(obj);
							pGVar4 = this._gameManager;
							if (pGVar4 == null) goto label_05d79ee1;
							__this_02 = null;
							pGVar4.OnSelectionChange(false);
						}
						pUStack_38 = eventData;
						this.EnsureContextMenu();
						this._contextTargetId = __this_01.id;
						pUVar5 = this._contextMenu;
						__this_03 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<MapEditorContextMenu.Item>));
						__this_03 = new List<MapEditorContextMenu.Item>();
						pSVar9 = UIManager.GetLocaleCommon("Copy");
						pSVar10 = new Action((object)__this_01, (intptr_t) MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass107_0_OnItemRightClick_b__1);
						pSStack_50 = null;
						uStack_48 = 0;
						pSStack_58 = pSVar9;
						pSStack_50 = pSVar10;
						uStack_48 = CONCAT62(uStack_48._2_6_, 1);
						if (__this_03 != null) {
							piVar1 = &__this_03._version;
							*piVar1 = *piVar1 + 1;
							pUVar6 = __this_03._items;
							if (pUVar6 != null) {
								uVar2 = __this_03._size;
								pUStack_40 = pUVar5;
								if (uVar2 < (uint)pUVar6.Length) {
									__this_03._size = uVar2 + 1;
									pUVar7 = pUVar6.m_Items + (int)uVar2;
									uStack_48._0_1_ = (undefined1)1;
									uStack_48._1_1_ = (undefined1)(1 >> 8);
									pUVar7.Enabled = (bool)(undefined1)uStack_48;
									pUVar7.SeparatorBefore = (bool)uStack_48._1_1_;
									*(undefined6)&pUVar7.field_0x12 = uStack_48._2_6_;
									pUVar6[(int)uVar2].Label = pSStack_58;
									pUVar6[(int)uVar2].Action = pSStack_50;
								}
								else {
									item.Action = pSStack_50;
									item.Label = pSStack_58;
									uStack_48._0_1_ = (undefined1)1;
									uStack_48._1_1_ = (undefined1)(1 >> 8);
									item.Enabled = (bool)(undefined1)uStack_48;
									item.SeparatorBefore = (bool)uStack_48._1_1_;
									item._18_6_ = uStack_48._2_6_;
									__this_03.AddWithResize(item);
								}
								pSVar9 = UIManager.GetLocale("MapEditorSettings", "Keybinds", "Cut", "", "");
								pSVar10 = new Action((object)__this_01, (intptr_t) MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass107_0_OnItemRightClick_b__2);
								pSStack_68 = null;
								uStack_60 = 0;
								pSStack_70 = pSVar9;
								pSStack_68 = pSVar10;
								uStack_60 = CONCAT62(uStack_60._2_6_, 1);
								piVar1 = &__this_03._version;
								*piVar1 = *piVar1 + 1;
								pUVar6 = __this_03._items;
								if (pUVar6 != null) {
									uVar2 = __this_03._size;
									if (uVar2 < (uint)pUVar6.Length) {
										__this_03._size = uVar2 + 1;
										pUVar7 = pUVar6.m_Items + (int)uVar2;
										uStack_60._0_1_ = (undefined1)1;
										uStack_60._1_1_ = (undefined1)(1 >> 8);
										pUVar7.Enabled = (bool)(undefined1)uStack_60;
										pUVar7.SeparatorBefore = (bool)uStack_60._1_1_;
										*(undefined6)&pUVar7.field_0x12 = uStack_60._2_6_;
										pUVar6[(int)uVar2].Label = pSStack_70;
										pUVar6[(int)uVar2].Action = pSStack_68;
									}
									else {
										item_00.Action = pSStack_68;
										item_00.Label = pSStack_70;
										uStack_60._0_1_ = (undefined1)1;
										uStack_60._1_1_ = (undefined1)(1 >> 8);
										item_00.Enabled = (bool)(undefined1)uStack_60;
										item_00.SeparatorBefore = (bool)uStack_60._1_1_;
										item_00._18_6_ = uStack_60._2_6_;
										__this_03.AddWithResize(item_00);
									}
									pSVar9 = UIManager.GetLocale("MapEditorSettings", "Keybinds", "Paste", "", "");
									pSVar10 = new Action((object)__this_01, (intptr_t) MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass107_0_OnItemRightClick_b__3);
									pSStack_80 = null;
									uStack_78 = 0;
									pSStack_88 = pSVar9;
									pSStack_80 = pSVar10;
									uStack_78 = CONCAT62(uStack_78._2_6_, 1);
									piVar1 = &__this_03._version;
									*piVar1 = *piVar1 + 1;
									pUVar6 = __this_03._items;
									if (pUVar6 != null) {
										uVar2 = __this_03._size;
										if (uVar2 < (uint)pUVar6.Length) {
											__this_03._size = uVar2 + 1;
											pUVar7 = pUVar6.m_Items + (int)uVar2;
											uStack_78._0_1_ = (undefined1)1;
											uStack_78._1_1_ = (undefined1)(1 >> 8);
											pUVar7.Enabled = (bool)(undefined1)uStack_78;
											pUVar7.SeparatorBefore = (bool)uStack_78._1_1_;
											*(undefined6)&pUVar7.field_0x12 = uStack_78._2_6_;
											pUVar6[(int)uVar2].Label = pSStack_88;
											pUVar6[(int)uVar2].Action = pSStack_80;
										}
										else {
											item_01.Action = pSStack_80;
											item_01.Label = pSStack_88;
											uStack_78._0_1_ = (undefined1)1;
											uStack_78._1_1_ = (undefined1)(1 >> 8);
											item_01.Enabled = (bool)(undefined1)uStack_78;
											item_01.SeparatorBefore = (bool)uStack_78._1_1_;
											item_01._18_6_ = uStack_78._2_6_;
											__this_03.AddWithResize(item_01) ;
										}
										pSVar9 = UIManager.GetLocale("MapEditor", "Hierarchy", "PasteAsChild", "", "");
										pSVar10 = new Action((object)__this_01, (intptr_t) MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass107_0_OnItemRightClick_b__4);
										pSStack_98 = null;
										uStack_90 = 0;
										pSStack_a0 = pSVar9;
										pSStack_98 = pSVar10;
										uStack_90 = CONCAT62(uStack_90._2_6_, 1);
										piVar1 = &__this_03._version;
										*piVar1 = *piVar1 + 1;
										pUVar6 = __this_03._items;
										if (pUVar6 != null) {
											uVar2 = __this_03._size;
											if (uVar2 < (uint)pUVar6.Length) {
												__this_03._size = uVar2 + 1;
												pUVar7 = pUVar6.m_Items + (int)uVar2;
												uStack_90._0_1_ = (undefined1)1;
												uStack_90._1_1_ = (undefined1)(1 >> 8);
												pUVar7.Enabled = (bool)(undefined1)uStack_90;
												pUVar7.SeparatorBefore = (bool)uStack_90._1_1_;
												*(undefined6)&pUVar7.field_0x12 = uStack_90._2_6_;
												pUVar6[(int)uVar2].Label = pSStack_a0;
												pUVar6[(int)uVar2].Action = pSStack_98;
											}
											else {
												item_02.Action = pSStack_98;
												item_02.Label = pSStack_a0;
												uStack_90._0_1_ = (undefined1)1;
												uStack_90._1_1_ = (undefined1)(1 >> 8);
												item_02.Enabled = (bool)(undefined1)uStack_90;
												item_02.SeparatorBefore = (bool)uStack_90._1_1_;
												item_02._18_6_ = uStack_90._2_6_;
												__this_03.AddWithResize(item_02);
											}
											pSVar9 = UIManager.GetLocale("MapEditor", "Hierarchy", "CreateEmptyParent", "", "");
											pSVar10 = new Action((object)__this_01, (intptr_t) MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass107_0_OnItemRightClick_b__5);
											pSStack_b0 = null;
											uStack_a8 = 0;
											pSStack_b8 = pSVar9;
											pSStack_b0 = pSVar10;
											uStack_a8 = CONCAT62(uStack_a8._2_6_, 1);
											piVar1 = &__this_03._version;
											*piVar1 = *piVar1 + 1;
											pUVar6 = __this_03._items;
											if (pUVar6 != null) {
												uVar2 = __this_03._size;
												if (uVar2 < (uint)pUVar6.Length) {
													__this_03._size = uVar2 + 1;
													pUVar7 = pUVar6.m_Items + (int)uVar2;
													uStack_a8._0_1_ = (undefined1)1;
													uStack_a8._1_1_ = (undefined1)(1 >> 8);
													pUVar7.Enabled = (bool)(undefined1)uStack_a8;
													pUVar7.SeparatorBefore = (bool)uStack_a8._1_1_;
													*(undefined6)&pUVar7.field_0x12 = uStack_a8._2_6_;
													pUVar6[(int)uVar2].Label = pSStack_b8;
													pUVar6[(int)uVar2].Action = pSStack_b0;
												}
												else {
													item_03.Action = pSStack_b0;
													item_03.Label = pSStack_b8;
													uStack_a8._0_1_ = (undefined1)1;
													uStack_a8._1_1_ = (undefined1)(1 >> 8);
													item_03.Enabled = (bool)(undefined1)uStack_a8;
													item_03.SeparatorBefore = (bool)uStack_a8._1_1_;
													item_03._18_6_ = uStack_a8._2_6_;
													__this_03.AddWithResize(item_03);
												}
												pSVar9 = UIManager.GetLocale("MapEditor", "Hierarchy", "ResetOrigin", "", "");
												pSVar10 = new Action((object)__this_01, (intptr_t) MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass107_0_OnItemRightClick_b__6);
												pSStack_c8 = null;
												uStack_c0 = 0;
												pSStack_d0 = pSVar9;
												pSStack_c8 = pSVar10;
												pUVar5 = pUStack_40;
												uStack_c0 = CONCAT62(uStack_c0._2_6_, 1);
												piVar1 = &__this_03._version;
												*piVar1 = *piVar1 + 1;
												pUVar6 = __this_03._items;
												if (pUVar6 != null) {
													uVar2 = __this_03._size;
													if (uVar2 < (uint)pUVar6.Length) {
														__this_03._size = uVar2 + 1;
														pUVar7 = pUVar6.m_Items + (int)uVar2;
														uStack_c0._0_1_ = (undefined1)1;
														uStack_c0._1_1_ = (undefined1)(1 >> 8);
														pUVar7.Enabled = (bool)(undefined1)uStack_c0;
														pUVar7.SeparatorBefore = (bool)uStack_c0._1_1_;
														*(undefined6)&pUVar7.field_0x12 = uStack_c0._2_6_;
														pUVar6[(int)uVar2].Label = pSStack_d0;
														pUVar6[(int)uVar2].Action = pSStack_c8;
													}
													else {
														item_04.Action = pSStack_c8;
														item_04.Label = pSStack_d0;
														uStack_c0._0_1_ = (undefined1)1;
														uStack_c0._1_1_ = (undefined1)(1 >> 8);
														item_04.Enabled = (bool)(undefined1)uStack_c0;
														item_04.SeparatorBefore = (bool)uStack_c0._1_1_;
														item_04._18_6_ = uStack_c0._2_6_;
														__this_03.AddWithResize(item_04);
													}
													pSVar9 = UIManager.GetLocaleCommon("Delete");
													pSVar10 = new Action((object)__this_01, (intptr_t) MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass107_0_OnItemRightClick_b__7);
													pSStack_e0 = null;
													uStack_d8 = 0;
													pSStack_e8 = pSVar9;
													pSStack_e0 = pSVar10;
													uStack_d8 = CONCAT62(uStack_d8._2_6_, 0x101);
													piVar1 = &__this_03._version;
													*piVar1 = *piVar1 + 1;
													pUVar6 = __this_03._items;
													if (pUVar6 != null) {
														uVar2 = __this_03._size;
														lVar12 = (long)(int)uVar2;
														if (uVar2 < (uint)pUVar6.Length) {
															__this_03._size = uVar2 + 1;
															pMVar11 = (MethodInfo)(lVar12 * 3);
															pUVar7 = pUVar6.m_Items + lVar12;
															uStack_d8._0_1_ = (undefined1)0x101;
															uStack_d8._1_1_ = (undefined1)(0x101 >> 8);
															pUVar7.Enabled = (bool)(undefined1)uStack_d8;
															pUVar7.SeparatorBefore = (bool)uStack_d8._1_1_;
															*(undefined6)&pUVar7.field_0x12 = uStack_d8._2_6_;
															pUVar6[lVar12].Label = pSStack_e8;
															pUVar6[lVar12].Action = pSStack_e0;
														}
														else {
															item_05.Action = pSStack_e0;
															item_05.Label = pSStack_e8;
															uStack_d8._0_1_ = (undefined1)0x101;
															uStack_d8._1_1_ = (undefined1)(0x101 >> 8);
															item_05.Enabled = (bool)(undefined1)uStack_d8;
															item_05.SeparatorBefore = (bool)uStack_d8._1_1_;
															item_05._18_6_ = uStack_d8._2_6_;
															__this_03.AddWithResize(item_05);
														}
														if (pUVar5 != null) {
															pUVar5.Show(pUStack_38, (System_Collections_Generic_IList_MapEditorContextMenu_Item__o)__this_03);
															return;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	label_05d79ee1: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005289")]
	[Address(RVA = "0x5C79F00", Offset = "0x5C78F00", VA = "0x5C79F00")]
	private void HideContextMenu()
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$HideContextMenu): clean
		MapEditorContextMenu pUVar1;
		Object x;
		GameObject __this_00;
		bool bVar2;

		pUVar1 = this._contextMenu;
		if (pUVar1 != null) {
			x = (Object)pUVar1._root;
			bVar2 = (x != null);
			if (bVar2) {
				__this_00 = pUVar1._root;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00.SetActive(false);
			}
		}
		this._contextTargetId = -1;
		return;
	}

	[Token(Token = "0x600528A")]
	[Address(RVA = "0x5C77B00", Offset = "0x5C76B00", VA = "0x5C77B00")]
	private GameObject GetOrCreateRowDropOverlay(GameObject row)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$GetOrCreateRowDropOverlay): 2 lines keep C-only constructs
		Il2CppType handle;
		bool bVar1;
		Transform pUVar2;
		GameObject pUVar3;
		Type[] components;
		Type pSVar4;
		object pIVar5;
		Transform parent;
		RectTransform __this_00;
		Image pUVar6;
		LayoutElement pUVar7;
		Color UVar8;

		if (row == null) {
	label_05d77eee: ;
			throw new NullReferenceException();
		}
		pUVar2 = row.transform;
		if (pUVar2 == null) goto label_05d77eee;
		pUVar2 = pUVar2.Find("DropOverlay");
		bVar1 = ((Object)pUVar2 != null);
		if (bVar1) {
			if (pUVar2 != null) {
				pUVar3 = pUVar2.gameObject;
				return pUVar3;
			}
			goto label_05d77eee;
		}
		components = (Type[])new Type[2];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar4 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components == null) goto label_05d77eee;
		if (pSVar4 != null) {
			pIVar5 = il2cpp_vm_Object_IsInst((object)pSVar4, (((components.obj).klass)._1).element_class);
			if (pIVar5 == null) goto label_05d77ef8;
		}
		if ((int)components.Length != 0) {
			components[0] = pSVar4;
			pSVar4 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Image);
			if (pSVar4 != null) {
				pIVar5 = il2cpp_vm_Object_IsInst((object)pSVar4, (((components.obj).klass)._1).element_class);
				if (pIVar5 == null) {
	label_05d77ef8: ;
					pIVar5 = new ArrayTypeMismatchException();
					throw pIVar5;
				}
			}
			if ((components.Length & 0xfffffffe) != 0) {
				components[1] = pSVar4;
				pUVar3 = new GameObject("DropOverlay", components);
				if (pUVar3 != null) {
					pUVar2 = pUVar3.transform;
					parent = row.transform;
					if (pUVar2 != null) {
						pUVar2.SetParent(parent, false);
						pUVar2 = pUVar3.transform;
						if (pUVar2 != null) {
							pUVar2.SetAsLastSibling();
							__this_00 = pUVar3.GetComponent<RectTransform>();
							if (__this_00 != null) {
								__this_00.anchorMin = (Vector2)(Vector2.zeroVector);
								__this_00.anchorMax = (Vector2)(Vector2.oneVector);
								__this_00.offsetMin = (Vector2)(Vector2.zeroVector);
								__this_00.offsetMax = (Vector2)(Vector2.zeroVector);
								pUVar6 = pUVar3.GetComponent<Image>();
								if (pUVar6 != null) {
									UVar8.b = 0.15;
									UVar8.a = 0.24;
									UVar8.r = 0.95;
									UVar8.g = 0.64;
									pUVar6.set_color(UVar8);
									pUVar6.set_raycastTarget(false);
									pUVar7 = pUVar3.AddComponent<LayoutElement>();
									if (pUVar7 != null) {
										pUVar7.set_ignoreLayout(true);
										pUVar3.SetActive(false);
										return pUVar3;
									}
								}
							}
						}
					}
				}
				goto label_05d77eee;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x600528B")]
	[Address(RVA = "0x5C79F90", Offset = "0x5C78F90", VA = "0x5C79F90")]
	private void RefreshDropIndicators()
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$RefreshDropIndicators): 3 lines keep C-only constructs
		int key;
		Dictionary<int, object> pSVar1;
		GameObject pUVar2;
		int iVar3;
		bool bVar4;
		bool bVar5;
		Object pUVar6;
		int iVar7;
		MethodInfo method_00;
		MapEditorHierarchyPanel __this_00;
		byte[] auStack_88 = new byte[8];
		GameObject pUStack_78;
		CancellationTokenSource pSStack_70;
		byte[] auStack_58 = new byte[16];
		GameObject pUStack_48;
		CancellationTokenSource pSStack_40;

		pUStack_78 = null;
		pSStack_70 = null;
		auStack_88 = (byte[])0x0;
		method_00 = null;
		if (((this._currentDropMode & 0xfffffffeU) == 2) &&(key = this._dropTargetId, 0 < key)) {
			pSVar1 = (Dictionary<int, object>)this._idToItem;
			if (pSVar1 == null) goto label_05d7a27f;
			bVar4 = pSVar1.ContainsKey(key);
			method_00 = (MethodInfo)(ulong)bVar4;
		}
		iVar7 = (int)method_00;
		pSVar1 = (Dictionary<int, object>)this._idToItem;
		if (pSVar1 == null) {
	label_05d7a27f: ;
			throw new NullReferenceException();
		}
		auStack_58.GetEnumerator(pSVar1);
		pUStack_78 = pUStack_48;
		pSStack_70 = pSStack_40;
		auStack_88 = (byte[])auStack_58._0_8_;
		auStack_58._0_8_ = null;
		auStack_58._8_8_ = (MapEditorHierarchyPanel)auStack_88;
		while (true) {
			__this_00 = (MapEditorHierarchyPanel)auStack_88;
			bVar4 = auStack_88.MoveNext();
			if (!(bVar4)) break;
			iVar3 = (int)pUStack_78;
			pUVar6 = (Object)__this_00.GetOrCreateRowDropOverlay((GameObject)pSStack_70);
			bVar4 = (pUVar6 != null);
			if (bVar4) {
				bVar4 = false;
				if (this._currentDropMode == 1) {
					bVar4 = iVar3 == this._dropIndicatorId;
				}
				if (pUVar6 == null) {
					throw new NullReferenceException();
				}
				pUVar6.SetActive(bVar4);
			}
		}
		auStack_88.Dispose();
		if (this._dropToRoot == false) {
			bVar4 = false;
		}
		else {
			bVar4 = this._currentDropMode == 0;
		}
		this.EnsureDragVisuals();
		pUVar6 = (Object)this._rootDropOverlay;
		bVar5 = (pUVar6 != null);
		if (bVar5) {
			pUVar2 = this._rootDropOverlay;
			if (pUVar2 == null) goto label_05d7a27f;
			pUVar2.SetActive(bVar4);
		}
		if (iVar7 == 0) {
			pUVar6 = (Object)this._insertLineIndicator;
			bVar4 = (pUVar6 != null);
			if (bVar4) {
				pUVar2 = this._insertLineIndicator;
				if (pUVar2 == null) goto label_05d7a27f;
				pUVar2.SetActive(false);
			}
		}
		else {
			this.ShowInsertLine(this._dropTargetId, this._currentDropMode == 2);
		}
		return;
	}

	[Token(Token = "0x600528C")]
	[Address(RVA = "0x5C747E0", Offset = "0x5C737E0", VA = "0x5C747E0")]
	private void SetRootDropOverlay(bool active)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$SetRootDropOverlay): 2 lines keep C-only constructs
		Object x;
		GameObject __this_00;
		bool bVar1;
		undefined7 in_register_00000031;
		MethodInfo method_00;

		method_00 = (MethodInfo)CONCAT71(in_register_00000031, active);
		this.EnsureDragVisuals();
		x = (Object)this._rootDropOverlay;
		bVar1 = (x != null);
		if (bVar1) {
			__this_00 = this._rootDropOverlay;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.SetActive(active);
			return;
		}
		return;
	}

	[Token(Token = "0x600528D")]
	[Address(RVA = "0x5C7A2F0", Offset = "0x5C792F0", VA = "0x5C7A2F0")]
	private void ShowInsertLine(int targetId, bool atTop)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$ShowInsertLine): 7 lines keep C-only constructs
		Object pUVar1;
		Dictionary<int, object> pSVar2;
		Transform __this_00;
		bool bVar3;
		GameObject pUVar4;
		RectTransform pUVar5;
		Vector3[] fourCornersArray;
		RectTransform pUVar6;
		Vector3 pUVar7;
		Vector2 screenPoint;
		byte[] auVar8 = new byte[16];
		Vector2 local_40;
		byte[] local_38 = new byte[16];

		local_40.x = 0.0;
		local_40.y = 0.0;
		pUVar1 = (Object)this._insertLineIndicator;
		bVar3 = (pUVar1 == null);
		if (bVar3) {
			this.EnsureDragVisuals();
		}
		pUVar1 = (Object)this._insertLineIndicator;
		bVar3 = (pUVar1 == null);
		if (!bVar3) {
			pSVar2 = (Dictionary<int, object>)this._idToItem;
			if (pSVar2 == null) goto label_05d7a606;
			bVar3 = pSVar2.ContainsKey(targetId);
			if (bVar3) {
				pSVar2 = (Dictionary<int, object>)this._idToItem;
				if ((pSVar2 == null) ||(pUVar4 = pSVar2.get_Item(targetId), pUVar4 == null)) goto label_05d7a606;
				pUVar5 = pUVar4.GetComponent<RectTransform>();
				bVar3 = ((Object)pUVar5 == null);
				if (!bVar3) {
					pUVar4 = this._insertLineIndicator;
					if (pUVar4 != null) {
						pUVar4.SetActive(true);
						fourCornersArray = (Vector3[])new Vector3[4];
						if (pUVar5 != null) {
							pUVar5.GetWorldCorners(fourCornersArray);
							if (atTop) {
								if (fourCornersArray == null) goto label_05d7a606;
								if ((fourCornersArray.Length & 0xfffffffe) == 0) {
	label_05d7a60b: ;
									throw new IndexOutOfRangeException();
								}
								pUVar7 = fourCornersArray.m_Items + 1;
							}
							else {
								if (fourCornersArray == null) goto label_05d7a606;
								if ((int)fourCornersArray.Length == 0) goto label_05d7a60b;
								pUVar7 = fourCornersArray.m_Items;
							}
							local_38 = ZEXT416((uint)pUVar7.y);
							pUVar5 = this.GetViewportRect();
							if (pUVar5 == null) {
								__this_00 = this.SinglePanel;
								if (__this_00 == null) goto label_05d7a606;
								pUVar6 = (RectTransform)__this_00.parent;
								pUVar5 = null;
								if (pUVar6 != null) {
									if (pUVar6.klass != typeof(RectTransform)) {
										throw new InvalidCastException();
									}
									pUVar5 = pUVar6;
								}
							}
							auVar8 = ZEXT416(local_38._0_4_) << 0x20;
							screenPoint = auVar8._0_8_;
							if ((typeof(RectTransformUtility)._2).cctor_finished_or_no_cctor == 0) {
								local_38 = auVar8;
								screenPoint = (Vector2)local_38._0_8_;
							}
							RectTransformUtility.ScreenPointToLocalPointInRectangle(pUVar5, screenPoint, null, ref local_40);
							pUVar5 = this._insertLineRect;
							if (pUVar5 != null) {
								pUVar5.anchoredPosition = (Vector2)((ulong)local_40 & 0xffffffff00000000);
								return;
							}
						}
					}
					goto label_05d7a606;
				}
			}
		}
		pUVar1 = (Object)this._insertLineIndicator;
		bVar3 = (pUVar1 != null);
		if (!bVar3) {
			return;
		}
		pUVar4 = this._insertLineIndicator;
		if (pUVar4 != null) {
			pUVar4.SetActive(false);
			return;
		}
	label_05d7a606: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600528E")]
	[Address(RVA = "0x5C767A0", Offset = "0x5C757A0", VA = "0x5C767A0")]
	private void HideInsertLine()
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$HideInsertLine): clean
		Object x;
		GameObject __this_00;
		bool bVar1;

		x = (Object)this._insertLineIndicator;
		bVar1 = (x != null);
		if (bVar1) {
			__this_00 = this._insertLineIndicator;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.SetActive(false);
			return;
		}
		return;
	}

	[Token(Token = "0x600528F")]
	[Address(RVA = "0x5C7A620", Offset = "0x5C79620", VA = "0x5C7A620")]
	private void ShowDragGhost(int id, Vector2 mousePosition)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$ShowDragGhost): 2 lines keep C-only constructs
		Object x;
		Text pUVar1;
		Dictionary<int, object> pSVar2;
		MapScriptBaseObject pMVar3;
		GameObject pUVar4;
		bool bVar5;
		MapObject pMVar6;
		String pSVar7;
		Transform __this_00;
		uint in_register_00000034;
		MethodInfo pMVar8;

		pMVar8 = (MethodInfo)CONCAT44(in_register_00000034, id);
		this.EnsureDragVisuals();
		x = (Object)this._dragGhost;
		bVar5 = (x == null);
		if (bVar5) {
			return;
		}
		pUVar1 = this._dragGhostText;
		bVar5 = ((Object)pUVar1 != null);
		if (bVar5) {
			pSVar2 = (Dictionary<int, object>)MapLoader.IdToMapObject;
			if (pSVar2 == null) goto label_05d7a875;
			bVar5 = pSVar2.ContainsKey(id);
			if (bVar5) {
				pSVar2 = (Dictionary<int, object>)MapLoader.IdToMapObject;
				if (pSVar2 == null) goto label_05d7a875;
				pMVar6 = pSVar2.get_Item(id);
				if ((pMVar6 == null) ||(pMVar3 = pMVar6.ScriptObject, pMVar3 == null)) goto label_05d7a875;
				pSVar7 = pMVar3.Name;
			}
			else {
				pSVar7 = UIManager.GetLocale("MapEditor", "Hierarchy", "Object", "", "");
			}
			pUVar1 = this._dragGhostText;
			if (pUVar1 == null) goto label_05d7a875;
			pUVar1.set_text(pSVar7);
		}
		pUVar4 = this._dragGhost;
		if (pUVar4 != null) {
			__this_00 = pUVar4.transform;
			if (__this_00 != null) {
				__this_00.SetAsLastSibling();
				pUVar4 = this._dragGhost;
				if (pUVar4 != null) {
					pUVar4.SetActive(true);
					this.MoveDragGhost(mousePosition);
					return;
				}
			}
		}
	label_05d7a875: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005290")]
	[Address(RVA = "0x5C7A880", Offset = "0x5C79880", VA = "0x5C7A880")]
	private void MoveDragGhost(Vector2 mousePosition)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$MoveDragGhost): 12 lines keep C-only constructs
		RectTransform pUVar1;
		MapEditorMenu __this_00;
		bool bVar2;
		Canvas __this_01;
		float fVar3;
		Vector2 value;
		ulong in_XMM0_Qb;
		byte[] auVar4 = new byte[16];
		byte[] auVar5 = new byte[16];

		pUVar1 = this._dragGhostRect;
		bVar2 = ((Object)pUVar1 == null);
		if (bVar2) {
			return;
		}
		__this_00 = this._menu;
		if (__this_00 != null) {
			__this_01 = __this_00.GetComponent<Canvas>();
			if (__this_01 != null) {
				fVar3 = __this_01.scaleFactor;
				pUVar1 = this._dragGhostRect;
				if (pUVar1 != null) {
					auVar5._0_4_ = ~-(uint)(0.0 < fVar3) & 0x3f800000 | -(uint)(0.0 < fVar3) & (uint)fVar3;
					auVar5._4_4_ = auVar5._0_4_;
					auVar5._8_4_ = auVar5._0_4_;
					auVar5._12_4_ = auVar5._0_4_;
					auVar4._8_8_ = in_XMM0_Qb;
					auVar4._0_8_ = mousePosition;
					auVar4 = divps(auVar4, auVar5);
					value.x = auVar4._0_4_ + 12.0;
					value.y = auVar4._4_4_ + -6.0;
					pUVar1.anchoredPosition = value;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005291")]
	[Address(RVA = "0x5C766C0", Offset = "0x5C756C0", VA = "0x5C766C0")]
	private void HideDragGhost()
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$HideDragGhost): clean
		Object pUVar1;
		GameObject pUVar2;
		bool bVar3;

		pUVar1 = (Object)this._dragGhost;
		bVar3 = (pUVar1 != null);
		if (bVar3) {
			pUVar2 = this._dragGhost;
			if (pUVar2 == null) goto label_05d76794;
			pUVar2.SetActive(false);
		}
		this.EnsureDragVisuals();
		pUVar1 = (Object)this._rootDropOverlay;
		bVar3 = (pUVar1 != null);
		if (!bVar3) {
			return;
		}
		pUVar2 = this._rootDropOverlay;
		if (pUVar2 != null) {
			pUVar2.SetActive(false);
			return;
		}
	label_05d76794: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005292")]
	[Address(RVA = "0x5C7A970", Offset = "0x5C79970", VA = "0x5C7A970")]
	private void Update()
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$Update): 3 lines keep C-only constructs
		MapEditorContextMenu pUVar1;
		Object pUVar2;
		GameObject pUVar3;
		RectTransform rect;
		ScrollRect x;
		bool bVar4;
		Vector3 UVar5;

		pUVar1 = this._contextMenu;
		if (pUVar1 != null) {
			pUVar2 = (Object)pUVar1._root;
			bVar4 = (pUVar2 != null);
			if (bVar4) {
				pUVar3 = pUVar1._root;
				if (pUVar3 == null) {
	label_05d7ab73: ;
					throw new NullReferenceException();
				}
				bVar4 = pUVar3.activeSelf;
				if (bVar4) {
					bVar4 = Input.GetMouseButtonDown(1);
					if (bVar4) {
						pUVar1 = this._contextMenu;
						if (pUVar1 == null) goto label_05d7ab73;
						rect = pUVar1._menuRect;
						UVar5 = Input.mousePosition;
						bVar4 = RectTransformUtility.RectangleContainsScreenPoint(rect, (Vector2)UVar5._0_8_, null);
						if (!bVar4) {
							pUVar1 = this._contextMenu;
							if (pUVar1 != null) {
								pUVar2 = (Object)pUVar1._root;
								bVar4 = (pUVar2 != null);
								if (bVar4) {
									pUVar3 = pUVar1._root;
									if (pUVar3 == null) goto label_05d7ab73;
									pUVar3.SetActive(false);
								}
							}
							this._contextTargetId = -1;
						}
					}
				}
			}
		}
		if (this._draggingItem != false) {
			UVar5 = Input.mousePosition;
			this.MoveDragGhost((Vector2)UVar5._0_8_);
			if (this._treeViewEnabled != false) {
				x = this._scrollRect;
				bVar4 = ((Object)x != null);
				if (bVar4) {
					bVar4 = this.AutoScrollDuringDrag();
					if (bVar4) {
						UVar5 = Input.mousePosition;
						this.UpdateDropTargetFromPointer((Vector2)UVar5._0_8_, null);
						return;
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x6005293")]
	[Address(RVA = "0x5C7AB80", Offset = "0x5C79B80", VA = "0x5C7AB80")]
	private bool AutoScrollDuringDrag()
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$AutoScrollDuringDrag): 8 lines keep C-only constructs
		Transform __this_00;
		ScrollRect pUVar1;
		bool bVar2;
		RectTransform rect;
		RectTransform pUVar3;
		float fVar4;
		float fVar5;
		uint extraout_XMM0_Db;
		float fVar6;
		float fVar7;
		float fVar8;
		Rect UVar9;
		Vector3 UVar10;
		Vector2 local_30;
		byte[] local_28 = new byte[8];

		local_30.x = 0.0;
		local_30.y = 0.0;
		rect = this.GetViewportRect();
		if (rect == null) {
			__this_00 = this.SinglePanel;
			if (__this_00 == null) goto label_05d7ae0a;
			pUVar3 = (RectTransform)__this_00.parent;
			rect = null;
			if (pUVar3 != null) {
				if (pUVar3.klass != typeof(RectTransform)) {
					throw new InvalidCastException();
				}
				rect = pUVar3;
			}
		}
		UVar10 = Input.mousePosition;
		bVar2 = RectTransformUtility.ScreenPointToLocalPointInRectangle(rect, (Vector2)UVar10._0_8_, null, ref local_30);
		if (!bVar2) {
			return false;
		}
		if (rect == null) goto label_05d7ae0a;
		UVar9 = rect.rect;
		fVar5 = UVar9.m_YMin;
		if ((typeof(Rect)._2).cctor_finished_or_no_cctor == 0) {
			local_28 = (byte[])UVar9._0_8_;
			fVar5 = (float)local_28._4_4_;
		}
		fVar6 = (UVar9.m_Height + fVar5) - local_30.y;
		fVar4 = 0.0;
		if ((fVar6 < 0.0) || (70.0 <= fVar6)) {
			fVar6 = local_30.y - fVar5;
			if ((0.0 <= fVar6) && (fVar6 < 70.0)) {
				fVar5 = -0.9;
				goto label_05d7ace2;
			}
		}
		else {
			fVar5 = 0.9;
	label_05d7ace2: ;
			fVar4 = Time.unscaledDeltaTime;
			fVar4 = fVar4 * (fVar6 / -70.0 + 1.0) * fVar5;
		}
		if (ABS(fVar4) <= 0.0001) {
			return false;
		}
		pUVar1 = this._scrollRect;
		if (pUVar1 != null) {
			fVar6 = pUVar1.verticalNormalizedPosition;
			fVar4 = fVar4 + fVar6;
			fVar5 = 1.0;
			if (fVar4 <= 1.0) {
				fVar5 = fVar4;
			}
			fVar5 = (float)(-(uint)(0.0 <= fVar4) & (uint)fVar5);
			if (g_data_0753e7b4 == false) {
				local_28._4_4_ = extraout_XMM0_Db;
				local_28._0_4_ = fVar6;
				g_data_0753e7b4 = true;
				fVar6 = (float)local_28._0_4_;
			}
			fVar4 = ABS(fVar6);
			if (ABS(fVar6) <= ABS(fVar5)) {
				fVar4 = ABS(fVar5);
			}
			fVar7 = Mathf.Epsilon * 8.0;
			fVar8 = fVar4 * 1e-06;
			if (fVar4 * 1e-06 <= fVar7) {
				fVar8 = fVar7;
			}
			if (ABS(fVar5 - fVar6) < fVar8) {
				return false;
			}
			pUVar1 = this._scrollRect;
			if (pUVar1 != null) {
				pUVar1.verticalNormalizedPosition = fVar5;
				this.RenderVirtualizedRows(false);
				return true;
			}
		}
	label_05d7ae0a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005294")]
	[Address(RVA = "0x5C7AFB0", Offset = "0x5C79FB0", VA = "0x5C7AFB0")]
	private void ToggleExpanded(int id, bool expand)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$ToggleExpanded): clean
		HashSet<int> __this_00;

		__this_00 = this._expanded;
		if (expand) {
			if (__this_00 == null) {
	label_05d7b02c: ;
				throw new NullReferenceException();
			}
			__this_00.Add(id);
		}
		else {
			if (__this_00 == null) goto label_05d7b02c;
			__this_00.Remove(id);
		}
		this.Sync();
		return;
	}

	[Token(Token = "0x6005295")]
	[Address(RVA = "0x5C7B040", Offset = "0x5C7A040", VA = "0x5C7B040")]
	private void OnPageClick(bool left)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$OnPageClick): clean


		this._currentPage = this._currentPage + (uint)!left * 2 + -1;
		this.Sync();
		return;
	}

	[Token(Token = "0x6005296")]
	[Address(RVA = "0x5C7B060", Offset = "0x5C7A060", VA = "0x5C7B060")]
	public void FocusSelectionFromScene()
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$FocusSelectionFromScene): 9 lines keep C-only constructs
		HashSet<MapObject> pSVar1;
		object pIVar2;
		bool bVar3;
		int iVar4;
		MapEditorHierarchyPanel.c__DisplayClass121_0 __this_00;
		Func<MapObject, bool> __this_01;
		MapEditorGameManager pGVar5;
		Func<MapObject, int> __this_02;
		System_Collections_Generic_IEnumerable_TResult__o source;
		UI_MapEditorHierarchyPanel___c_StaticFields pUVar6;
		Func<int, int> __this_03;
		System_Linq_IOrderedEnumerable_TSource__o source_00;

		__this_00 = new MapEditorHierarchyPanel.c__DisplayClass121_0();
		pGVar5 = this._gameManager;
		bVar3 = ((Object)pGVar5 == null);
		if (!bVar3) {
			pGVar5 = this._gameManager;
			if ((pGVar5 == null) ||(pSVar1 = pGVar5.SelectedObjects, pSVar1 == null)) {
	label_05d7b3be: ;
				throw new NullReferenceException();
			}
			if (pSVar1._count == 0) {
				return;
			}
			if (__this_00 == null) goto label_05d7b3be;
			iVar4 = pGVar5.LastSelectedObjectId;
			__this_00.targetId = iVar4;
			if (0 < iVar4) {
				__this_01 = new Func<MapObject, bool>((object)__this_00, (intptr_t) MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass121_0_FocusSelectionFromScene_b__0);
				bVar3 = Enumerable.Any<MapObject>((System_Collections_Generic_IEnumerable_TSource__o)pSVar1, (System_Func_TSource__bool__o)__this_01);
				if (bVar3) {
					iVar4 = __this_00.targetId;
					if (iVar4 < 1) {
						return;
					}
					goto label_05d7b3a6;
				}
				pGVar5 = this._gameManager;
				if (pGVar5 == null) goto label_05d7b3be;
			}
			pSVar1 = pGVar5.SelectedObjects;
			if ((typeof(MapEditorHierarchyPanel.c)._2).cctor_finished_or_no_cctor == 0) {
				pUVar6 = typeof(MapEditorHierarchyPanel.c).static_fields;
				__this_02 = pUVar6.__9__121_1;
			}
			else {
				pUVar6 = typeof(MapEditorHierarchyPanel.c).static_fields;
				__this_02 = pUVar6.__9__121_1;
			}
			if (__this_02 == null) {
				if (((typeof(MapEditorHierarchyPanel.c))._2).cctor_finished_or_no_cctor == 0) {
					pUVar6 = typeof(MapEditorHierarchyPanel.c).static_fields;
				}
				pIVar2 = (object)pUVar6.__9;
				__this_02 = new Func<MapObject, int>(pIVar2, (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_c_FocusSelectionFromScene_b__121_1);
				pUVar6 = typeof(MapEditorHierarchyPanel.c).static_fields;
				pUVar6.__9__121_1 = __this_02;
			}
			source = Enumerable.Select<MapObject, int>((System_Collections_Generic_IEnumerable_TSource__o)pSVar1, (System_Func_TSource__TResult__o)__this_02);
			if ((typeof(MapEditorHierarchyPanel.c)._2).cctor_finished_or_no_cctor == 0) {
				pUVar6 = typeof(MapEditorHierarchyPanel.c).static_fields;
				__this_03 = pUVar6.__9__121_2;
			}
			else {
				pUVar6 = typeof(MapEditorHierarchyPanel.c).static_fields;
				__this_03 = pUVar6.__9__121_2;
			}
			if (__this_03 == null) {
				if (((typeof(MapEditorHierarchyPanel.c))._2).cctor_finished_or_no_cctor == 0) {
					pUVar6 = typeof(MapEditorHierarchyPanel.c).static_fields;
				}
				pIVar2 = (object)pUVar6.__9;
				__this_03 = new Func<int, int>(pIVar2, (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_c_FocusSelectionFromScene_b__121_2);
				pUVar6 = typeof(MapEditorHierarchyPanel.c).static_fields;
				pUVar6.__9__121_2 = __this_03;
			}
			source_00 = Enumerable.OrderBy<int, int>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TKey__o)__this_03);
			iVar4 = Enumerable.FirstOrDefault<int>((System_Collections_Generic_IEnumerable_TSource__o)source_00);
			__this_00.targetId = iVar4;
			if (0 < iVar4) {
	label_05d7b3a6: ;
				this.FocusObject(iVar4);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6005297")]
	[Address(RVA = "0x5C7B3E0", Offset = "0x5C7A3E0", VA = "0x5C7B3E0")]
	private void FocusObject(int id)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$FocusObject): 1 lines keep C-only constructs
		Dictionary<int, object> __this_00;
		Dictionary<int, int> pSVar1;
		bool bVar2;
		int iVar3;
		int iVar4;
		MethodInfo pMVar5;

		pMVar5 = (MethodInfo)(ulong)(uint)id;
		if (Il2CppMethodInitialized_07547fed == false) {
			Il2CppMethodInitialized_07547fed = true;
			if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor != 0) goto label_05d7b408;
	label_05d7b472: ;
			__this_00 = (Dictionary<int, object>)MapLoader.IdToMapObject;
		}
		else {
			if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) goto label_05d7b472;
	label_05d7b408: ;
			__this_00 = (Dictionary<int, object>)MapLoader.IdToMapObject;
		}
		if (__this_00 == null) goto label_05d7b619;
		bVar2 = __this_00.ContainsKey(id);
		if (!bVar2) {
			return;
		}
		if (this._treeViewEnabled == false) {
			pSVar1 = this._idToIndex;
			if (pSVar1 != null) {
				bVar2 = pSVar1.ContainsKey(id);
				if (!bVar2) {
					this.Sync();
				}
				pSVar1 = this._idToIndex;
				if (pSVar1 == null) goto label_05d7b619;
				bVar2 = pSVar1.ContainsKey(id);
				if (!bVar2) {
					return;
				}
				pSVar1 = this._idToIndex;
				if (pSVar1 == null) goto label_05d7b619;
				iVar3 = pSVar1.get_Item(id);
				iVar4 = iVar3 / 0x1e + 1;
				if (this._currentPage != iVar4) {
					this._currentPage = iVar4;
					this.Sync();
				}
				goto label_05d7b5fc;
			}
			goto label_05d7b619;
		}
		bVar2 = this.ExpandAncestors(id);
		if (bVar2) {
	label_05d7b4e7: ;
			this.Sync();
		}
		else {
			pSVar1 = this._idToIndex;
			if (pSVar1 == null) goto label_05d7b619;
			bVar2 = pSVar1.ContainsKey(id);
			if (!bVar2) goto label_05d7b4e7;
		}
		pSVar1 = this._idToIndex;
		if (pSVar1 != null) {
			bVar2 = pSVar1.ContainsKey(id);
			if (!bVar2) {
				return;
			}
			pSVar1 = this._idToIndex;
			if (pSVar1 != null) {
				iVar3 = pSVar1.get_Item(id);
				pMVar5 = (MethodInfo)this._rows;
				if (pMVar5 != null) {
					this.FocusVirtualRow(iVar3, *(int)&pMVar5.name);
					pMVar5 = null;
					this.RenderVirtualizedRows(false);
	label_05d7b5fc: ;
					this.SyncSelectedItems();
					return;
				}
			}
		}
	label_05d7b619: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005298")]
	[Address(RVA = "0x5C7B7D0", Offset = "0x5C7A7D0", VA = "0x5C7B7D0")]
	private void FocusVirtualRow(int rowIndex, int totalRows)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$FocusVirtualRow): clean
		ScrollRect pUVar1;
		Vector2 UVar2;
		bool bVar3;
		RectTransform pUVar4;
		int iVar5;
		float fVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		Rect UVar12;
		float local_48;

		pUVar1 = this._scrollRect;
		bVar3 = ((Object)pUVar1 == null);
		if (bVar3) {
			return;
		}
		pUVar1 = this._scrollRect;
		if (pUVar1 != null) {
			pUVar4 = pUVar1.m_Content;
			bVar3 = ((Object)pUVar4 == null);
			if (bVar3) {
				return;
			}
			pUVar4 = this.GetViewportRect();
			bVar3 = ((Object)pUVar4 != null);
			if (bVar3) {
				if (pUVar4 == null) goto label_05d7ba06;
				UVar12 = pUVar4.rect;
				fVar9 = UVar12.m_Height;
			}
			else {
				fVar9 = this.GetPanelHeight();
			}
			pUVar1 = this._scrollRect;
			if ((pUVar1 != null) &&(pUVar4 = pUVar1.m_Content, pUVar4 != null)) {
				UVar2 = pUVar4.anchoredPosition;
				fVar7 = this.GetVirtualStride();
				fVar10 = 1.0;
				if (1.0 <= fVar7) {
					fVar10 = fVar7;
				}
				if (rowIndex < 1) {
					rowIndex = 0;
				}
				fVar7 = 1.0;
				if (1.0 <= fVar9) {
					fVar7 = fVar9;
				}
				fVar8 = ((float)rowIndex + 0.5) * fVar10;
				fVar9 = 0.0;
				if (0.0 <= UVar2.y) {
					fVar9 = UVar2.y;
				}
				fVar11 = fVar8 - fVar9;
				if ((fVar11 < fVar7 * 0.25) || (fVar7 * 0.75 < fVar11)) {
					iVar5 = 0;
					if (0 < totalRows) {
						iVar5 = totalRows;
					}
					fVar10 = fVar10 * (float)iVar5 - fVar7;
					fVar9 = 0.0;
					if (0.0 <= fVar10) {
						fVar9 = fVar10;
					}
					fVar8 = fVar8 - fVar7 * 0.25;
					if (fVar8 <= fVar9) {
						fVar9 = fVar8;
					}
					fVar9 = (float)(-(uint)(0.0 <= fVar8) & (uint)fVar9);
				}
				pUVar1 = this._scrollRect;
				if ((pUVar1 != null) &&(pUVar4 = pUVar1.m_Content, pUVar4 != null)) {
					local_48 = UVar2.x;
					UVar2.y = fVar9;
					UVar2.x = local_48;
					pUVar4.anchoredPosition = UVar2;
					return;
				}
			}
		}
	label_05d7ba06: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005299")]
	[Address(RVA = "0x5C7B620", Offset = "0x5C7A620", VA = "0x5C7B620")]
	private bool ExpandAncestors(int id)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$ExpandAncestors): clean
		Dictionary<int, object> pSVar1;
		HashSet<int> __this_00;
		bool bVar2;
		bool bVar3;
		HashSet<int> __this_01;
		MapObject obj;
		bool bVar4;

		__this_01 = new HashSet<int>();
		if (id < 0) {
			bVar3 = false;
		}
		else {
			if (__this_01 == null) {
	label_05d7b7ca: ;
				throw new NullReferenceException();
			}
			bVar2 = __this_01.Add(id);
			bVar4 = false;
			bVar3 = false;
			if (bVar2) {
				do {
					pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
					if (pSVar1 == null) goto label_05d7b7ca;
					bVar3 = pSVar1.ContainsKey(id);
					if (!bVar3) {
						return bVar4;
					}
					pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
					if (pSVar1 == null) goto label_05d7b7ca;
					obj = pSVar1.get_Item(id);
					id = MapLoader.GetLogicalParentId(obj);
					if (id < 0) {
						return bVar4;
					}
					__this_00 = this._expanded;
					if (__this_00 == null) goto label_05d7b7ca;
					bVar2 = __this_00.Add(id);
					bVar3 = bVar4;
					if (bVar2) {
						bVar3 = true;
					}
					bVar2 = __this_01.Add(id);
					bVar4 = bVar3;
				} while (bVar2);
			}
		}
		return bVar3;
	}

	[Token(Token = "0x600529A")]
	[Address(RVA = "0x5C7BAC0", Offset = "0x5C7AAC0", VA = "0x5C7BAC0")]
	private void OnButtonRelease(int id)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$OnButtonRelease): clean
		return;
	}

	[Token(Token = "0x600529B")]
	[Address(RVA = "0x5C7BAD0", Offset = "0x5C7AAD0", VA = "0x5C7BAD0")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$OnDestroy): clean
		MapEditorContextMenu pUVar1;
		Object pUVar2;
		bool bVar3;

		pUVar1 = this._contextMenu;
		if (pUVar1 != null) {
			pUVar2 = (Object)pUVar1._root;
			bVar3 = (pUVar2 != null);
			if (bVar3) {
				pUVar2 = (Object)pUVar1._root;
				Object.Destroy(pUVar2);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x600529C")]
	[Address(RVA = "0x5C7BB60", Offset = "0x5C7AB60", VA = "0x5C7BB60")]
	private void OnItemPointerDown(int id, PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$OnItemPointerDown): clean
		this._dragSourceId = id;
		if (eventData == null) {
			throw new NullReferenceException();
		}
		this._dragStartMouse = eventData._position_k__BackingField;
		this._suppressClick = false;
		return;
	}

	[Token(Token = "0x600529D")]
	[Address(RVA = "0x5C7BB90", Offset = "0x5C7AB90", VA = "0x5C7BB90")]
	private void OnItemBeginDrag(int id, PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$OnItemBeginDrag): 5 lines keep C-only constructs
		uint id_00;
		MapEditorMenu __this_00;
		MapEditorGameManager pGVar1;
		HashSet<MapObject> pSVar2;
		Dictionary<int, @object> __this_01;
		object @object;
		bool bVar3;
		MapEditorHierarchyPanel.c__DisplayClass128_0 __this_02;
		Func<MapObject, bool> __this_03;
		MapObject obj;
		UI_MapEditorHierarchyPanel___c_StaticFields pUVar4;
		Func<MapObject, int> __this_04;
		System_Collections_Generic_IEnumerable_TResult__o collection;
		MapEditorHierarchyPanel __this_05;
		HashSet<int> pSVar5;
		MapEditorHierarchyPanel __this_06;

		__this_02 = new MapEditorHierarchyPanel.c__DisplayClass128_0();
		if (__this_02 != null) {
			__this_02.id = id;
			__this_00 = this._menu;
			if (__this_00 != null) {
				bVar3 = __this_00.IsPopupActive();
				if (bVar3) {
					return;
				}
				this._draggingItem = true;
				this._dropTargetId = -1;
				this._dropToRoot = false;
				this._dropIndicatorId = -1;
				this._currentDropMode = 0;
				this._dragSourceId = __this_02.id;
				pGVar1 = this._gameManager;
				if (pGVar1 != null) {
					pSVar2 = pGVar1.SelectedObjects;
					__this_03 = new Func<MapObject, bool>((object)__this_02, (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_c__DisplayClass128_0_OnItemBeginDrag_b__0);
					bVar3 = Enumerable.Any<MapObject>((System_Collections_Generic_IEnumerable_TSource__o)pSVar2, (System_Func_TSource__bool__o)__this_03);
					if (!bVar3) {
						pGVar1 = this._gameManager;
						if (pGVar1 == null) goto label_05d7bf06;
						pGVar1.DeselectAll();
						pGVar1 = this._gameManager;
						__this_01 = (Dictionary<int, @object>)MapLoader.IdToMapObject;
						if ((__this_01 == null) ||(obj = __this_01.get_Item(__this_02.id), pGVar1 == null)) goto label_05d7bf06;
						pGVar1.SelectObject(obj);
						pGVar1 = this._gameManager;
						if (pGVar1 == null) goto label_05d7bf06;
						pGVar1.OnSelectionChange(false);
					}
					pGVar1 = this._gameManager;
					if (pGVar1 != null) {
						pSVar2 = pGVar1.SelectedObjects;
						if ((typeof(MapEditorHierarchyPanel.c)._2).cctor_finished_or_no_cctor == 0) {
							pUVar4 = typeof(MapEditorHierarchyPanel.c).static_fields;
							__this_04 = pUVar4.__9__128_1;
						}
						else {
							pUVar4 = typeof(MapEditorHierarchyPanel.c).static_fields;
							__this_04 = pUVar4.__9__128_1;
						}
						if (__this_04 == null) {
							if (((typeof(MapEditorHierarchyPanel.c))._2).cctor_finished_or_no_cctor == 0) {
								pUVar4 = typeof(MapEditorHierarchyPanel.c).static_fields;
							}
							@object = (object)pUVar4.__9;
							__this_04 = new Func<MapObject, int>(@object, (intptr_t)MethodInfo_UI_MapEditorHierarchyPanel_c_OnItemBeginDrag_b__128_1);
							pUVar4 = typeof(MapEditorHierarchyPanel.c).static_fields;
							pUVar4.__9__128_1 = __this_04;
						}
						collection = Enumerable.Select<MapObject, int>((System_Collections_Generic_IEnumerable_TSource__o)pSVar2, (System_Func_TSource__TResult__o)__this_04);
						__this_06 = __this_05;
						__this_05 = new HashSet<int>((IEnumerable<T>)collection);
						pSVar5 = __this_06.GetTopLevelIds((HashSet<int>)__this_05);
						this._dragTopLevel = pSVar5;
						if (eventData != null) {
							id_00 = __this_02.id;
							this.ShowDragGhost(id_00, (Vector2)eventData._position_k__BackingField);
							this.RefreshDropIndicators();
							return;
						}
					}
				}
			}
		}
	label_05d7bf06: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600529E")]
	[Address(RVA = "0x5C7C240", Offset = "0x5C7B240", VA = "0x5C7C240")]
	private void OnItemDrag(int id, PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$OnItemDrag): 2 lines keep C-only constructs
		Vector2 UVar1;
		Vector2 UVar2;
		Camera eventCamera;
		uint in_register_00000034;
		MethodInfo method_01;
		float fVar3;
		float fVar4;

		method_01 = (MethodInfo)CONCAT44(in_register_00000034, id);
		if (this._draggingItem != false) {
			if (eventData == null) {
				throw new NullReferenceException();
			}
			UVar1 = eventData._position_k__BackingField;
			UVar2 = this._dragStartMouse;
			fVar3 = UVar1.x - UVar2.x;
			fVar4 = UVar1.y - UVar2.y;
			fVar3 = fVar4 * fVar4 + fVar3 * fVar3;
			if (fVar3 < 0.0) {
				fVar3 = sqrtf(fVar3);
			}
			else {
				fVar3 = SQRT(fVar3);
			}
			if (6.0 <= fVar3) {
				this.MoveDragGhost((Vector2)eventData._position_k__BackingField) ;
				UVar1 = eventData._position_k__BackingField;
				eventCamera = eventData.pressEventCamera;
				this.UpdateDropTargetFromPointer((Vector2)UVar1, eventCamera);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x600529F")]
	[Address(RVA = "0x5C7AE20", Offset = "0x5C79E20", VA = "0x5C7AE20")]
	private void UpdateDropTargetFromPointer(Vector2 screenPosition, Camera eventCamera)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$UpdateDropTargetFromPointer): 8 lines keep C-only constructs
		Transform __this_00;
		HashSet<int> __this_01;
		Vector2 screenPosition_00;
		bool bVar1;
		uint item;
		RectTransform rect;
		MethodInfo eventCamera_00;
		int iVar2;
		float fVar3;
		float fVar4;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		int iStack_2c;
		byte[] auStack_28 = new byte[16];

		auStack_28._8_4_ = in_XMM0_Dc;
		auStack_28._0_8_ = screenPosition;
		auStack_28._12_4_ = in_XMM0_Dd;
		eventCamera_00 = (MethodInfo)eventCamera;
		fVar3 = screenPosition.x;
		fVar4 = screenPosition.y;
		if (Il2CppMethodInitialized_07547ff1 == false) {
			Il2CppMethodInitialized_07547ff1 = true;
			fVar3 = (float)auStack_28._0_4_;
			fVar4 = (float)auStack_28._4_4_;
		}
		iStack_2c = 0;
		screenPosition_00.y = fVar4;
		screenPosition_00.x = fVar3;
		item = this.FindHoveredItem(screenPosition_00, (Camera)eventCamera_00, ref iStack_2c);
		iVar2 = iStack_2c;
		if ((int)item < 0) {
			this._dropTargetId = -1;
			this._dropIndicatorId = -1;
			this._currentDropMode = 0;
			if (this._treeViewEnabled != false) {
				__this_00 = this.SinglePanel;
				if (__this_00 == null) goto label_05d7af9c;
				rect = __this_00.GetComponent<RectTransform>();
				bVar1 = RectTransformUtility.RectangleContainsScreenPoint(rect, (Vector2)auStack_28._0_8_, eventCamera);
				goto label_05d7af86;
			}
		}
		else {
			if (iStack_2c == 1) {
				if (this._treeViewEnabled == false) {
	label_05d7af5d: ;
					this._dropTargetId = -1;
					iVar2 = 0;
					goto label_05d7af72;
				}
				eventCamera_00 = (MethodInfo)(ulong)item;
				bVar1 = this.IsValidDropTarget(item);
				if (!bVar1) goto label_05d7af5d;
				this._dropTargetId = item;
				iVar2 = 1;
			}
			else {
				__this_01 = this._dragTopLevel;
				if (__this_01 == null) {
	label_05d7af9c: ;
					throw new NullReferenceException();
				}
				eventCamera_00 = (MethodInfo)(ulong)item;
				bVar1 = __this_01.Contains(item);
				if (bVar1) goto label_05d7af5d;
				this._dropTargetId = item;
	label_05d7af72: ;
				item = 0xffffffff;
			}
			this._dropIndicatorId = item;
			this._currentDropMode = iVar2;
		}
		eventCamera = (Camera)eventCamera_00;
		bVar1 = false;
	label_05d7af86: ;
		this._dropToRoot = bVar1;
		this.RefreshDropIndicators();
		return;
	}

	[Token(Token = "0x60052A0")]
	[Address(RVA = "0x5C7C8F0", Offset = "0x5C7B8F0", VA = "0x5C7C8F0")]
	private void OnItemEndDrag(int id, PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$OnItemEndDrag): 4 lines keep C-only constructs
		Vector2 UVar1;
		Vector2 UVar2;
		MapEditorGameManager pGVar3;
		HashSet<int> __this_00;
		sbyte cVar4;
		MethodInfo method_00;
		int item;
		uint in_register_00000034;
		float fVar5;
		float fVar6;

		method_00 = (MethodInfo)CONCAT44(in_register_00000034, id);
		if (this._draggingItem == false) {
			return;
		}
		this._draggingItem = false;
		this.HideDragGhost();
		if (eventData == null) goto label_05d7cb57;
		UVar1 = eventData._position_k__BackingField;
		UVar2 = this._dragStartMouse;
		fVar5 = UVar1.x - UVar2.x;
		fVar6 = UVar1.y - UVar2.y;
		fVar5 = fVar6 * fVar6 + fVar5 * fVar5;
		if (fVar5 < 0.0) {
			fVar5 = sqrtf(fVar5);
		}
		else {
			fVar5 = SQRT(fVar5);
		}
		if (fVar5 < 6.0) goto label_05d7cb2c;
		this._suppressClick = true;
		item = this._dropTargetId;
		if ((item == -1) && (this._dropToRoot == false)) goto label_05d7cb2c;
		if ((this._currentDropMode & 0xfffffffeU) == 2) {
			pGVar3 = this._gameManager;
			method_00 = (MethodInfo)Enumerable.ToList<int>((System_Collections_Generic_IEnumerable_TSource__o)this._dragTopLevel);
			if (pGVar3 == null) goto label_05d7cb57;
			pGVar3.ReorderObjects((List<int>)method_00, this._dropTargetId, this._currentDropMode == 3, this._treeViewEnabled);
		}
		else if (this._treeViewEnabled != false) {
			if (this._dropToRoot == false) {
	label_05d7cad0: ;
				if (-1 < item) {
					__this_00 = this._expanded;
					if (__this_00 == null) goto label_05d7cb57;
					__this_00.Add(item) ;
				}
			}
			else {
				cVar4 = true;
				if ((typeof(MapLoader)._2).cctor_finished_or_no_cctor == 0) {
					cVar4 = this._dropToRoot;
				}
				item = MapLoader.ROOT_OBJECT_ID;
				if (cVar4 == false) goto label_05d7cad0;
			}
			pGVar3 = this._gameManager;
			method_00 = (MethodInfo)Enumerable.ToList<int>((System_Collections_Generic_IEnumerable_TSource__o)this._dragTopLevel);
			if (pGVar3 == null) {
	label_05d7cb57: ;
				throw new NullReferenceException();
			}
			pGVar3.ReparentObjects((List<int>)method_00, item);
		}
		this._dropTargetId = -1;
	label_05d7cb2c: ;
		this._dropIndicatorId = -1;
		this._dropToRoot = false;
		this._currentDropMode = 0;
		this.RefreshDropIndicators();
		return;
	}

	[Token(Token = "0x60052A1")]
	[Address(RVA = "0x5C7C350", Offset = "0x5C7B350", VA = "0x5C7C350")]
	private int FindHoveredItem(Vector2 screenPosition, Camera eventCamera, out DropMode mode)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$FindHoveredItem): 15 lines keep C-only constructs
		Dictionary<int, object> __this_00;
		object x;
		bool bVar1;
		int iVar2;
		uint uVar3;
		RectTransform __this_01;
		Vector3[] fourCornersArray;
		int iVar4;
		float fVar6;
		float fVar7;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		float fVar8;
		System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_a8;
		float local_78;
		byte[] local_68 = new byte[16];
		byte[] local_58 = new byte[16];
		object local_48;
		Object pUStack_40;
		int local_38;
		uint uStack_34;

		local_68._8_4_ = in_XMM0_Dc;
		local_68._0_8_ = screenPosition;
		local_68._12_4_ = in_XMM0_Dd;
		local_a8._current.key = null;
		local_a8._current.value = null;
		local_a8._dictionary = null;
		local_a8._version = 0;
		local_a8._index = 0;
		local_a8._getEnumeratorRetType = 0;
		local_a8._36_4_ = 0;
		*mode = 1;
		fVar6 = this.GetVirtualStride();
		__this_00 = (Dictionary<int, object>)this._idToItem;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		fVar7 = (fVar6 - this._virtualRowHeight) * 0.5;
		fVar6 = 0.0;
		if (0.0 <= fVar7) {
			fVar6 = fVar7;
		}
		local_58.GetEnumerator(__this_00);
		local_a8._getEnumeratorRetType = local_38;
		local_a8._36_4_ = uStack_34;
		local_a8._current.key = local_48;
		local_a8._current.value = (object)pUStack_40;
		local_a8._dictionary = (Dictionary<TKey, TValue>)local_58._0_8_;
		local_a8._version = local_58._8_4_;
		local_a8._index = local_58._12_4_;
		local_58._0_8_ = null;
		local_78 = (float)local_68._4_4_;
		local_58._8_8_ = &local_a8;
		do {
			do {
				do {
					do {
						bVar1 = local_a8.MoveNext();
						x = local_a8._current.value;
						if (!bVar1) {
							iVar4 = 0xd;
							goto label_05d7c649;
						}
						bVar1 = ((Object)x == null);
					} while (bVar1);
					if ((Object)x == null) {
						throw new NullReferenceException();
					}
					bVar1 = x.activeSelf;
				} while (!bVar1);
				__this_01 = x.GetComponent<RectTransform>();
				bVar1 = ((Object)__this_01 == null);
			} while (bVar1);
			fourCornersArray = (Vector3[])new Vector3[4];
			if (__this_01 == null) {
				throw new NullReferenceException();
			}
			__this_01.GetWorldCorners(fourCornersArray);
			if (fourCornersArray == null) {
				throw new NullReferenceException();
			}
			uVar3 = (uint)fourCornersArray.Length;
			if (uVar3 == 0) {
				throw new IndexOutOfRangeException();
			}
			if (uVar3 < 3) {
				throw new IndexOutOfRangeException();
			}
		} while (((((float)local_68._0_4_ < fourCornersArray[0].x) ||(fourCornersArray[2].x <= (float)local_68._0_4_ &&(float)local_68._0_4_ != fourCornersArray[2].x)) ||(fVar7 = fourCornersArray[0].y, local_78 < fVar7 - fVar6)) ||(fVar8 = fourCornersArray[1].y, fVar6 + fVar8 < local_78));
		fVar8 = fVar8 - fVar7;
		if (fVar8 <= 0.0) {
			if (this._treeViewEnabled == false) {
				fVar8 = 0.5;
				goto label_05d7c69c;
			}
		}
		else {
			fVar8 = (local_78 - fVar7) / fVar8;
			if (this._treeViewEnabled == false) {
	label_05d7c69c: ;
				uVar3 = fVar8 < 0.5 | 2;
				goto label_05d7c6ab;
			}
			uVar3 = 2;
			if ((0.85 < fVar8) || (uVar3 = 3, fVar8 < 0.15)) goto label_05d7c6ab;
		}
		uVar3 = 1;
	label_05d7c6ab: ;
		*mode = uVar3;
		iVar4 = 0xc;
	label_05d7c649: ;
		local_a8.Dispose();
		if (iVar4 == 0xc) {
		}
		return iVar2;
	}

	[Token(Token = "0x60052A2")]
	[Address(RVA = "0x5C7C760", Offset = "0x5C7B760", VA = "0x5C7C760")]
	private bool IsValidDropTarget(int targetId)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$IsValidDropTarget): 3 lines keep C-only constructs
		HashSet<int> pSVar1;
		bool bVar2;
		int iVar3;
		MapEditorHierarchyPanel __this_00;
		Transform local_48;
		Transform local_28;

		local_48.klass = null;
		local_48.monitor = null;
		local_48.m_CachedPtr = 0;
		if (targetId < 0) {
			bVar2 = true;
		}
		else {
			pSVar1 = this._dragTopLevel;
			if (pSVar1 == null) {
	label_05d7c88d: ;
				throw new NullReferenceException();
			}
			bVar2 = pSVar1.Contains(targetId);
			if (bVar2) {
				bVar2 = false;
			}
			else {
				pSVar1 = this._dragTopLevel;
				if (pSVar1 == null) goto label_05d7c88d;
				local_48 = pSVar1.GetEnumerator();
				local_28 = &local_48;
				do {
					__this_00 = (MapEditorHierarchyPanel)&local_48;
					bVar2 = local_48.MoveNext();
					if (!bVar2) {
						iVar3 = 7;
						goto label_05d7c86a;
					}
					bVar2 = __this_00.IsDescendant(targetId, (int32_t)local_48.m_CachedPtr);
				} while (!bVar2);
				iVar3 = 6;
	label_05d7c86a: ;
				local_48.Dispose();
				bVar2 = iVar3 != 6;
			}
		}
		return bVar2;
	}

	[Token(Token = "0x60052A3")]
	[Address(RVA = "0x5C7CB60", Offset = "0x5C7BB60", VA = "0x5C7CB60")]
	private bool IsDescendant(int id, int ancestorId)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$IsDescendant): clean
		Dictionary<int, object> pSVar1;
		bool bVar2;
		HashSet<int> __this_00;
		MapObject obj;

		__this_00 = new HashSet<int>();
		if (__this_00 == null) {
			if (-1 < id) {
	label_05d7ccc5: ;
				throw new NullReferenceException();
			}
	label_05d7ccb4: ;
			bVar2 = false;
		}
		else {
			do {
				if ((id < 0) ||(bVar2 = __this_00.Add(id), !bVar2)) goto label_05d7ccb4;
				pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
				if (pSVar1 == null) goto label_05d7ccc5;
				bVar2 = pSVar1.ContainsKey(id);
				if (!bVar2) goto label_05d7ccb4;
				pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
				if (pSVar1 == null) goto label_05d7ccc5;
				obj = pSVar1.get_Item(id);
				id = MapLoader.GetLogicalParentId(obj);
			} while (id != ancestorId);
			bVar2 = true;
		}
		return bVar2;
	}

	[Token(Token = "0x60052A4")]
	[Address(RVA = "0x5C7BF20", Offset = "0x5C7AF20", VA = "0x5C7BF20")]
	private HashSet<int> GetTopLevelIds(HashSet<int> ids)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$GetTopLevelIds): 6 lines keep C-only constructs
		Dictionary<int, object> pSVar1;
		int item;
		bool bVar2;
		int item_00;
		HashSet<int> __this_00;
		MapObject obj;
		System_Collections_Generic_HashSet_Enumerator_T__o local_68;
		HashSet<int> local_50;
		byte[] local_48 = new byte[16];
		object local_38;

		local_68._set = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._current = null;
		local_50 = new HashSet<int>();
		if (ids == null) {
			throw new NullReferenceException();
		}
		local_48.GetEnumerator(ids);
		local_68._current = local_38;
		local_68._set = (HashSet<T>)local_48._0_8_;
		local_68._index = local_48._8_4_;
		local_68._version = local_48._12_4_;
		local_48._0_8_ = null;
		local_48._8_8_ = &local_68;
		do {
			while(true) {
				bVar2 = local_68.MoveNext();
				if (!bVar2) {
					local_68.Dispose() ;
					return local_50;
				}
				item = (int32_t)local_68._current;
				__this_00 = new HashSet<int>();
				item_00 = item;
				if (__this_00 != null) break;
				if (-1 < item) {
					throw new NullReferenceException();
				}
	label_05d7c175: ;
				if (local_50 == null) {
					throw new NullReferenceException();
				}
				local_50.Add(item);
			}
			do {
				if ((item_00 < 0) ||(bVar2 = __this_00.Add(item_00), !bVar2)) goto label_05d7c175;
				pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
				if (pSVar1 == null) {
					throw new NullReferenceException();
				}
				bVar2 = pSVar1.ContainsKey(item_00);
				if (!bVar2) goto label_05d7c175;
				pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
				if (pSVar1 == null) {
					throw new NullReferenceException();
				}
				obj = pSVar1.get_Item(item_00);
				item_00 = MapLoader.GetLogicalParentId(obj);
				bVar2 = ids.Contains(item_00);
			} while (!bVar2);
		} while(true);
	}

	[Token(Token = "0x60052A5")]
	[Address(RVA = "0x5C7CCD0", Offset = "0x5C7BCD0", VA = "0x5C7CCD0")]
	private void OnButtonClick(int id)
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$OnButtonClick): clean
		int iVar1;
		MapEditorMenu __this_00;
		InputSettings pSVar2;
		MapEditorInputSettings pSVar3;
		KeybindSetting __this_01;
		Dictionary<int, int> pSVar4;
		HashSet<int> pSVar5;
		HashSet<MapObject> pSVar6;
		BaseCamera pCVar7;
		BaseComponentCache pUVar8;
		Transform __this_02;
		GameObject __this_03;
		Dictionary<int, object> pSVar9;
		bool bVar10;
		bool bVar11;
		int iVar12;
		int key;
		int iVar13;
		Transform __this_04;
		MapObject pMVar14;
		MapEditorGameManager pGVar15;
		float fVar16;
		Vector3 UVar17;
		Vector3 UVar18;
		Vector3 value;
		float fStack_48;
		float fStack_44;

		if (this._suppressClick != false) {
			this._suppressClick = false;
			return;
		}
		__this_00 = this._menu;
		if (__this_00 == null) goto label_05d7d2be;
		bVar10 = __this_00.IsPopupActive();
		if (bVar10) {
			return;
		}
		bVar10 = Input.GetKey(0x130);
		bVar11 = true;
		if (!bVar10) {
			bVar11 = Input.GetKey(0x12f);
		}
		pSVar2 = SettingsManager.InputSettings;
		if (((pSVar2 == null) ||(pSVar3 = pSVar2.MapEditor, pSVar3 == null)) ||(__this_01 = pSVar3.Multiselect, __this_01 == null)) goto label_05d7d2be;
		bVar10 = __this_01.GetKey(false);
		if ((bVar11 != false) && (iVar1 = this._lastClickedItem, iVar1 != -1)) {
			pSVar4 = this._idToIndex;
			if (pSVar4 == null) goto label_05d7d2be;
			bVar11 = pSVar4.ContainsKey(iVar1);
			if (bVar11) {
				pSVar4 = this._idToIndex;
				if (pSVar4 == null) goto label_05d7d2be;
				bVar11 = pSVar4.ContainsKey(id);
				if (bVar11) {
					if (!bVar10) {
						pGVar15 = this._gameManager;
						if (pGVar15 == null) goto label_05d7d2be;
						pGVar15.DeselectAll();
					}
					pSVar4 = this._idToIndex;
					if (pSVar4 == null) goto label_05d7d2be;
					iVar12 = pSVar4.get_Item(this._lastClickedItem);
					pSVar4 = this._idToIndex;
					if (pSVar4 == null) goto label_05d7d2be;
					key = pSVar4.get_Item(id);
					if (iVar12 < key) {
						key = iVar12;
					}
					pSVar4 = this._idToIndex;
					if (pSVar4 == null) goto label_05d7d2be;
					iVar12 = pSVar4.get_Item(this._lastClickedItem);
					pSVar4 = this._idToIndex;
					if (pSVar4 == null) goto label_05d7d2be;
					iVar13 = pSVar4.get_Item(id);
					if (iVar13 < iVar12) {
						iVar13 = iVar12;
					}
					if (key <= iVar13) {
						do {
							pSVar4 = this._indexToId;
							if (pSVar4 == null) goto label_05d7d2be;
							iVar12 = pSVar4.get_Item(key);
							pSVar9 = (Dictionary<int, object>)MapLoader.IdToMapObject;
							if (pSVar9 == null) goto label_05d7d2be;
							bVar10 = pSVar9.ContainsKey(iVar12);
							if (bVar10) {
								pGVar15 = this._gameManager;
								pSVar9 = (Dictionary<int, object>)MapLoader.IdToMapObject;
								if ((pSVar9 == null) ||(pMVar14 = pSVar9.get_Item(iVar12), pGVar15 == null)) goto label_05d7d2be;
								pGVar15.SelectObject(pMVar14);
							}
							key = key + 1;
						} while (key <= iVar13);
					}
					pGVar15 = this._gameManager;
					if (pGVar15 == null) goto label_05d7d2be;
					pGVar15.OnSelectionChange(false);
					this._lastClickedItem = id;
					goto label_05d7d1cb;
				}
			}
		}
		pSVar5 = this._selected;
		if (pSVar5 == null) goto label_05d7d2be;
		bVar11 = pSVar5.Contains(id);
		if (bVar11) {
			pGVar15 = this._gameManager;
			if (bVar10) {
				pSVar9 = (Dictionary<int, object>)MapLoader.IdToMapObject;
				if ((pSVar9 == null) ||(pMVar14 = pSVar9.get_Item(id), pGVar15 == null)) goto label_05d7d2be;
				pGVar15.DeselectObject(pMVar14);
				goto label_05d7d1a9;
			}
			if ((pGVar15 == null) ||(pSVar6 = pGVar15.SelectedObjects, pSVar6 == null)) goto label_05d7d2be;
			if (1 < pSVar6._count) goto label_05d7d142;
			pCVar7 = SceneLoader.CurrentCamera;
			if ((pCVar7 == null) ||(pUVar8 = pCVar7.Cache, pUVar8 == null)) goto label_05d7d2be;
			__this_02 = pUVar8.Transform;
			pSVar9 = (Dictionary<int, object>)MapLoader.IdToMapObject;
			if ((((pSVar9 == null) ||(pMVar14 = pSVar9.get_Item(id), pMVar14 == null)) ||(__this_03 = pMVar14.GameObject, __this_03 == null)) ||(__this_04 = __this_03.transform, __this_04 == null)) goto label_05d7d2be;
			UVar17 = __this_04.position;
			if (__this_02 == null) goto label_05d7d2be;
			UVar18 = __this_02.forward;
			fStack_48 = UVar17.x;
			fStack_44 = UVar17.y;
			value.x = UVar18.x * -50.0 + fStack_48;
			value.y = UVar18.y * -50.0 + fStack_44;
			value.z = UVar18.z * -50.0 + UVar17.z;
			__this_02.position = value;
		}
		else {
			pSVar5 = this._selected;
			if (pSVar5 == null) goto label_05d7d2be;
			iVar1 = pSVar5._count;
			if ((~bVar10 & iVar1 != 0) != 0) {
				if (iVar1 < 1) goto label_05d7d1c3;
				pGVar15 = this._gameManager;
				if (pGVar15 == null) goto label_05d7d2be;
	label_05d7d142: ;
				pGVar15.DeselectAll();
			}
			pGVar15 = this._gameManager;
			pSVar9 = (Dictionary<int, object>)MapLoader.IdToMapObject;
			if ((pSVar9 == null) ||(pMVar14 = pSVar9.get_Item(id), pGVar15 == null)) goto label_05d7d2be;
			pGVar15.SelectObject(pMVar14);
	label_05d7d1a9: ;
			pGVar15 = this._gameManager;
			if (pGVar15 == null) {
	label_05d7d2be: ;
				throw new NullReferenceException();
			}
			pGVar15.OnSelectionChange(false);
		}
	label_05d7d1c3: ;
		this._lastClickedItem = id;
	label_05d7d1cb: ;
		fVar16 = Time.time;
		this._lastclickedTime = fVar16;
		return;
	}

	[Token(Token = "0x60052A6")]
	[Address(RVA = "0x5C75CC0", Offset = "0x5C74CC0", VA = "0x5C75CC0")]
	public void SyncSelectedItems()
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$SyncSelectedItems): 19 lines keep C-only constructs
		Dictionary<int, object> pSVar1;
		MapEditorGameManager pGVar2;
		HashSet<object> pSVar3;
		HashSet<int> pSVar4;
		object pIVar5;
		int key;
		bool bVar6;
		System_Collections_Generic_List_TSource__o __this_00;
		GameObject pUVar7;
		Transform pUVar8;
		byte[] local_88 = new byte[16];
		object local_78;
		object local_70;
		byte[] local_68 = new byte[8];
		ulong uStack_60;
		object local_58;
		byte[] local_48 = new byte[8];
		object local_38;

		local_48 = (byte[])0x0;
		local_38 = null;
		local_70 = null;
		local_68 = (byte[])0x0;
		uStack_60._0_4_ = 0;
		uStack_60._4_4_ = 0;
		local_58 = null;
		__this_00 = Enumerable.ToList<int>((System_Collections_Generic_IEnumerable_TSource__o)this._selected);
		if (__this_00 != null) {
			local_88.GetEnumerator((List<int>)__this_00);
			local_38 = local_78;
			local_48 = (byte[])local_88._0_8_;
			local_88._0_8_ = null;
			local_88._8_8_ = (System_Collections_Generic_List_Enumerator_int__o)local_48;
			while(true) {
				bVar6 = local_48.MoveNext();
				if (!bVar6) break;
				key = (int32_t)local_38;
				local_70 = null;
				pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
				if (pSVar1 == null) {
					throw new NullReferenceException();
				}
				pSVar1.TryGetValue(key, ref local_70);
				pGVar2 = this._gameManager;
				if (pGVar2 == null) {
					throw new NullReferenceException();
				}
				pSVar3 = (HashSet<object>)pGVar2.SelectedObjects;
				if (pSVar3 == null) {
					throw new NullReferenceException();
				}
				bVar6 = pSVar3.Contains(local_70);
				if (!bVar6) {
					pSVar4 = this._selected;
					if (pSVar4 == null) {
						throw new NullReferenceException();
					}
					pSVar4.Remove(key);
					pSVar1 = (Dictionary<int, object>)this._idToItem;
					if (pSVar1 == null) {
						throw new NullReferenceException();
					}
					bVar6 = pSVar1.ContainsKey(key);
					if (bVar6) {
						pSVar1 = (Dictionary<int, object>)this._idToItem;
						if (pSVar1 == null) {
							throw new NullReferenceException();
						}
						pUVar7 = pSVar1.get_Item(key);
						if (pUVar7 == null) {
							throw new NullReferenceException();
						}
						pUVar8 = pUVar7.transform;
						if (pUVar8 == null) {
							throw new NullReferenceException();
						}
						pUVar8 = pUVar8.Find("Highlight");
						if (pUVar8 == null) {
							throw new NullReferenceException();
						}
						pUVar7 = pUVar8.gameObject;
						if (pUVar7 == null) {
							throw new NullReferenceException();
						}
						pUVar7.SetActive(false);
					}
				}
			}
			local_48.Dispose();
			pGVar2 = this._gameManager;
			if ((pGVar2 != null) &&(pSVar3 = (HashSet<object>)pGVar2.SelectedObjects, pSVar3 != null)) {
				local_88.GetEnumerator(pSVar3);
				local_58 = local_78;
				local_68 = (byte[])local_88._0_8_;
				uStack_60 = (System_Collections_Generic_List_Enumerator_int__o)local_88._8_8_;
				local_88._0_8_ = null;
				local_88._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o)local_68;
				while(true) {
					do {
						bVar6 = local_68.MoveNext();
						pIVar5 = local_58;
						if (!bVar6) {
							local_68.Dispose();
							return;
						}
						if (local_58 == null) {
							throw new NullReferenceException();
						}
						if (local_58[2].klass == null) {
							throw new NullReferenceException();
						}
						pSVar4 = this._selected;
						if (pSVar4 == null) {
							throw new NullReferenceException();
						}
						bVar6 = pSVar4.Contains(*(int)&((local_58[2].klass)._1).byval_arg.data) ;
					} while (bVar6);
					if (pIVar5[2].klass == null) {
						throw new NullReferenceException();
					}
					pSVar4 = this._selected;
					if (pSVar4 == null) {
						throw new NullReferenceException();
					}
					pSVar4.Add(*(int)&((pIVar5[2].klass)._1).byval_arg.data);
					if (pIVar5[2].klass == null) {
						throw new NullReferenceException();
					}
					pSVar1 = (Dictionary<int, object>)this._idToItem;
					if (pSVar1 == null) break;
					bVar6 = pSVar1.ContainsKey(*(int)&((pIVar5[2].klass)._1).byval_arg.data);
					if (bVar6) {
						if (pIVar5[2].klass == null) {
							throw new NullReferenceException();
						}
						pSVar1 = (Dictionary<int, object>)this._idToItem;
						if (pSVar1 == null) {
							throw new NullReferenceException();
						}
						pUVar7 = pSVar1.get_Item(*(int)&((pIVar5[2].klass)._1).byval_arg.data);
						if (pUVar7 == null) {
							throw new NullReferenceException();
						}
						pUVar8 = pUVar7.transform;
						if (pUVar8 == null) {
							throw new NullReferenceException();
						}
						pUVar8 = pUVar8.Find("Highlight");
						if (pUVar8 == null) {
							throw new NullReferenceException();
						}
						pUVar7 = pUVar8.gameObject;
						if (pUVar7 == null) {
							throw new NullReferenceException();
						}
						pUVar7.SetActive(true);
					}
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60052A7")]
	[Address(RVA = "0x5C7D2D0", Offset = "0x5C7C2D0", VA = "0x5C7D2D0")]
	public MapEditorHierarchyPanel()
	{
		// Lifted from source/cpp/UI/MapEditorHierarchyPanel.c (UI.MapEditorHierarchyPanel$$.ctor): 3 lines keep C-only constructs
		String defaultValue;
		List<GameObject> __this_00;
		List<MapEditorHierarchyPanel.RowData> __this_01;
		Dictionary<int, GameObject> __this_02;
		Dictionary<int, int> pSVar1;
		HashSet<int> pSVar2;
		Dictionary<int, List<int>> __this_03;
		List<int> __this_04;
		StringSetting __this_05;

		if (Il2CppMethodInitialized_07547ff9 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor) ;
			il2cpp_codegen_initialize_runtime_metadata(&typeof(Dictionary<int, GameObject>)) ;
			Il2CppMethodInitialized_07547ff9 = true;
		}
		__this_00 = new List<GameObject>();
		this._itemPool = __this_00;
		__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<MapEditorHierarchyPanel.RowData>));
		__this_01 = new List<MapEditorHierarchyPanel.RowData>();
		this._rows = __this_01;
		__this_02 = new Dictionary<int, GameObject>();
		this._idToItem = __this_02;
		pSVar1 = new Dictionary<int, int>();
		this._idToIndex = pSVar1;
		pSVar1 = new Dictionary<int, int>();
		this._indexToId = pSVar1;
		pSVar2 = new HashSet<int>();
		this._selected = pSVar2;
		pSVar2 = new HashSet<int>();
		this._expanded = pSVar2;
		__this_03 = new Dictionary<int, List<int>>();
		this._treeChildren = __this_03;
		__this_04 = new List<int>();
		this._treeRoots = __this_04;
		this._lastClickedItem = -1;
		this._dragSourceId = -1;
		this._dropTargetId = -1;
		pSVar2 = new HashSet<int>();
		this._dragTopLevel = pSVar2;
		defaultValue = (String)**(ulong*)(g_data_07556758 + 0xb8);
		__this_05 = new StringSetting(defaultValue, 0x7fffffff);
		this._searchSetting = __this_05;
		this._virtualRowHeight = 22.0;
		this._dropIndicatorId = -1;
		this._contextTargetId = -1;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/MapEditorHierarchyPanel.c.

	// UI.MapEditorHierarchyPanel.<>c__DisplayClass91_0$$.ctor: clean
	private void c__DisplayClass91_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorHierarchyPanel.<>c__DisplayClass107_0$$.ctor: clean
	private void c__DisplayClass107_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorHierarchyPanel.<>c__DisplayClass121_0$$.ctor: clean
	private void c__DisplayClass121_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorHierarchyPanel.<>c__DisplayClass128_0$$.ctor: clean
	private void c__DisplayClass128_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorHierarchyPanel$$<Setup>b__75_0: clean
	private void Setup_b__75_0()
	{
		this.Sync();
		return;
	}

	// UI.MapEditorHierarchyPanel$$<Setup>b__75_1: clean
	private void Setup_b__75_1()
	{
		this.OnModeButtonClick();
		return;
	}

	// UI.MapEditorHierarchyPanel$$<Setup>b__75_2: 2 lines keep C-only constructs
	private void Setup_b__75_2()
	{
		int piVar1;

		piVar1 = &this._currentPage;
		*piVar1 = *piVar1 + -1;
		this.Sync();
		return;
	}

	// UI.MapEditorHierarchyPanel$$<Setup>b__75_3: 2 lines keep C-only constructs
	private void Setup_b__75_3()
	{
		int piVar1;

		piVar1 = &this._currentPage;
		*piVar1 = *piVar1 + 1;
		this.Sync();
		return;
	}

	// UI.MapEditorHierarchyPanel$$<AddResizeHandle>b__76_0: clean
	private void AddResizeHandle_b__76_0(float w)
	{
		MapEditorSettings pSVar1;
		FloatSetting __this_00;
		MapEditorMenu __this_01;

		pSVar1 = SettingsManager.MapEditorSettings;
		if ((pSVar1 != null) &&(__this_00 = pSVar1.HierarchyPanelWidth, __this_00 != null)) {
			__this_00.Value = w;
			pSVar1 = SettingsManager.MapEditorSettings;
			if (pSVar1 != null) {
				pSVar1.Save();
				__this_01 = this._menu;
				if (__this_01 != null) {
					__this_01.ShowHierarchyPanel();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// UI.MapEditorHierarchyPanel.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new MapEditorHierarchyPanel.c();
		MapEditorHierarchyPanel.c.__9 = (MapEditorHierarchyPanel.c)__this;
		return;
	}

	// UI.MapEditorHierarchyPanel.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorHierarchyPanel.<>c$$<BuildTreeGraph>b__85_0: clean
	private int c__BuildTreeGraph_b__85_0(int id)
	{
		uint uVar1;
		List<int> __this_00;
		uint uVar2;

		if (Il2CppMethodInitialized_07547ffc == false) {
			Il2CppMethodInitialized_07547ffc = true;
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = MapLoader.ObjectOrder;
		}
		else {
			__this_00 = *(List<int>*)((long)(typeof(MapLoader)).static_fields + 0x10);
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		uVar2 = __this_00.IndexOf(id);
		if (0x7ffffffe < uVar2) {
			uVar2 = 0x7fffffff;
		}
		return uVar2;
	}

	// UI.MapEditorHierarchyPanel.<>c$$<BuildTreeGraph>b__85_1: clean
	private int c__BuildTreeGraph_b__85_1(int id)
	{
		uint uVar1;
		List<int> __this_00;
		uint uVar2;

		if (Il2CppMethodInitialized_07547ffd == false) {
			Il2CppMethodInitialized_07547ffd = true;
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = MapLoader.ObjectOrder;
		}
		else {
			__this_00 = *(List<int>*)((long)(typeof(MapLoader)).static_fields + 0x10);
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		uVar2 = __this_00.IndexOf(id);
		if (0x7ffffffe < uVar2) {
			uVar2 = 0x7fffffff;
		}
		return uVar2;
	}

	// UI.MapEditorHierarchyPanel.<>c$$<FocusSelectionFromScene>b__121_1: clean
	private int c__FocusSelectionFromScene_b__121_1(MapObject x)
	{
		MapScriptBaseObject pMVar1;

		if ((x == null) ||(pMVar1 = x.ScriptObject, pMVar1 == null)) {
			throw new NullReferenceException();
		}
		return pMVar1.Id;
	}

	// UI.MapEditorHierarchyPanel.<>c$$<FocusSelectionFromScene>b__121_2: clean
	private int c__FocusSelectionFromScene_b__121_2(int x)
	{
		return x;
	}

	// UI.MapEditorHierarchyPanel.<>c$$<OnItemBeginDrag>b__128_1: clean
	private int c__OnItemBeginDrag_b__128_1(MapObject x)
	{
		MapScriptBaseObject pMVar1;

		if ((x == null) ||(pMVar1 = x.ScriptObject, pMVar1 == null)) {
			throw new NullReferenceException();
		}
		return pMVar1.Id;
	}

	// UI.MapEditorHierarchyPanel.<>c__DisplayClass107_0$$<OnItemRightClick>b__0: clean
	private bool c__DisplayClass107_0__OnItemRightClick_b__0(MapObject obj)
	{
		MapScriptBaseObject pMVar1;

		if ((obj == null) ||(pMVar1 = obj.ScriptObject, pMVar1 == null)) {
			throw new NullReferenceException();
		}
		return pMVar1.Id == this.id;
	}

	// UI.MapEditorHierarchyPanel.<>c__DisplayClass107_0$$<OnItemRightClick>b__1: clean
	private void c__DisplayClass107_0__OnItemRightClick_b__1()
	{
		MapEditorHierarchyPanel pUVar1;
		MapEditorGameManager __this_00;

		pUVar1 = this.__4__this;
		if ((pUVar1 == null) ||(__this_00 = pUVar1._gameManager, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.Copy();
		return;
	}

	// UI.MapEditorHierarchyPanel.<>c__DisplayClass107_0$$<OnItemRightClick>b__2: clean
	private void c__DisplayClass107_0__OnItemRightClick_b__2()
	{
		MapEditorHierarchyPanel pUVar1;
		MapEditorGameManager __this_00;

		pUVar1 = this.__4__this;
		if ((pUVar1 == null) ||(__this_00 = pUVar1._gameManager, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.Cut();
		return;
	}

	// UI.MapEditorHierarchyPanel.<>c__DisplayClass107_0$$<OnItemRightClick>b__3: clean
	private void c__DisplayClass107_0__OnItemRightClick_b__3()
	{
		MapEditorHierarchyPanel pUVar1;
		MapEditorGameManager __this_00;

		pUVar1 = this.__4__this;
		if ((pUVar1 == null) ||(__this_00 = pUVar1._gameManager, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.Paste();
		return;
	}

	// UI.MapEditorHierarchyPanel.<>c__DisplayClass107_0$$<OnItemRightClick>b__4: clean
	private void c__DisplayClass107_0__OnItemRightClick_b__4()
	{
		MapEditorHierarchyPanel pUVar1;
		MapEditorGameManager __this_00;

		pUVar1 = this.__4__this;
		if ((pUVar1 == null) ||(__this_00 = pUVar1._gameManager, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.PasteAsChild(pUVar1._contextTargetId);
		return;
	}

	// UI.MapEditorHierarchyPanel.<>c__DisplayClass107_0$$<OnItemRightClick>b__5: clean
	private void c__DisplayClass107_0__OnItemRightClick_b__5()
	{
		MapEditorHierarchyPanel pUVar1;
		MapEditorGameManager __this_00;

		pUVar1 = this.__4__this;
		if ((pUVar1 == null) ||(__this_00 = pUVar1._gameManager, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.CreateEmptyParent(pUVar1._contextTargetId);
		return;
	}

	// UI.MapEditorHierarchyPanel.<>c__DisplayClass107_0$$<OnItemRightClick>b__6: clean
	private void c__DisplayClass107_0__OnItemRightClick_b__6()
	{
		MapEditorHierarchyPanel pUVar1;
		MapEditorGameManager __this_00;

		pUVar1 = this.__4__this;
		if ((pUVar1 == null) ||(__this_00 = pUVar1._gameManager, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.ResetOrigin();
		return;
	}

	// UI.MapEditorHierarchyPanel.<>c__DisplayClass107_0$$<OnItemRightClick>b__7: clean
	private void c__DisplayClass107_0__OnItemRightClick_b__7()
	{
		MapEditorHierarchyPanel pUVar1;
		MapEditorGameManager __this_00;

		pUVar1 = this.__4__this;
		if ((pUVar1 == null) ||(__this_00 = pUVar1._gameManager, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.Delete();
		return;
	}

	// UI.MapEditorHierarchyPanel.<>c__DisplayClass121_0$$<FocusSelectionFromScene>b__0: clean
	private bool c__DisplayClass121_0__FocusSelectionFromScene_b__0(MapObject x)
	{
		MapScriptBaseObject pMVar1;

		if ((x == null) ||(pMVar1 = x.ScriptObject, pMVar1 == null)) {
			throw new NullReferenceException();
		}
		return pMVar1.Id == this.targetId;
	}

	// UI.MapEditorHierarchyPanel.<>c__DisplayClass128_0$$<OnItemBeginDrag>b__0: clean
	private bool c__DisplayClass128_0__OnItemBeginDrag_b__0(MapObject x)
	{
		MapScriptBaseObject pMVar1;

		if ((x == null) ||(pMVar1 = x.ScriptObject, pMVar1 == null)) {
			throw new NullReferenceException();
		}
		return pMVar1.Id == this.id;
	}

	// UI.MapEditorHierarchyPanel.<>c__DisplayClass91_0$$<BindPooledItem>b__0: clean
	private void c__DisplayClass91_0__BindPooledItem_b__0()
	{
		MapEditorHierarchyPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnButtonClick(this.row.Id);
		return;
	}

	// UI.MapEditorHierarchyPanel.<>c__DisplayClass91_0$$<BindPooledItem>b__1: clean
	private void c__DisplayClass91_0__BindPooledItem_b__1()
	{
		if (this.__4__this == null) {
			throw new NullReferenceException();
		}
		return;
	}

	// UI.MapEditorHierarchyPanel.<>c__DisplayClass91_0$$<BindPooledItem>b__2: clean
	private void c__DisplayClass91_0__BindPooledItem_b__2(PointerEventData eventData)
	{
		MapEditorHierarchyPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnItemRightClick(this.row.Id, eventData);
		return;
	}

	// UI.MapEditorHierarchyPanel.<>c__DisplayClass91_0$$<BindPooledItem>b__3: clean
	private void c__DisplayClass91_0__BindPooledItem_b__3(PointerEventData eventData)
	{
		MapEditorHierarchyPanel pUVar1;

		pUVar1 = this.__4__this;
		if ((pUVar1 == null) ||(pUVar1._dragSourceId = this.row.Id, eventData == null)) {
			throw new NullReferenceException();
		}
		pUVar1._dragStartMouse = eventData._position_k__BackingField;
		pUVar1._suppressClick = false;
		return;
	}

	// UI.MapEditorHierarchyPanel.<>c__DisplayClass91_0$$<BindPooledItem>b__4: clean
	private void c__DisplayClass91_0__BindPooledItem_b__4(PointerEventData eventData)
	{
		MapEditorHierarchyPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnItemBeginDrag(this.row.Id, eventData);
		return;
	}

	// UI.MapEditorHierarchyPanel.<>c__DisplayClass91_0$$<BindPooledItem>b__5: clean
	private void c__DisplayClass91_0__BindPooledItem_b__5(PointerEventData eventData)
	{
		Vector2 UVar1;
		Vector2 UVar2;
		MapEditorHierarchyPanel __this_00;
		Camera eventCamera;
		float fVar3;
		float fVar4;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
	label_05d7dcfe: ;
			throw new NullReferenceException();
		}
		if (__this_00._draggingItem != false) {
			if (eventData == null) goto label_05d7dcfe;
			UVar1 = eventData._position_k__BackingField;
			UVar2 = __this_00._dragStartMouse;
			fVar3 = UVar1.x - UVar2.x;
			fVar4 = UVar1.y - UVar2.y;
			fVar3 = fVar4 * fVar4 + fVar3 * fVar3;
			if (fVar3 < 0.0) {
				fVar3 = sqrtf(fVar3);
			}
			else {
				fVar3 = SQRT(fVar3);
			}
			if (6.0 <= fVar3) {
				__this_00.MoveDragGhost((Vector2)eventData._position_k__BackingField);
				UVar1 = eventData._position_k__BackingField;
				eventCamera = eventData.pressEventCamera;
				__this_00.UpdateDropTargetFromPointer((Vector2)UVar1, eventCamera);
				return;
			}
		}
		return;
	}

	// UI.MapEditorHierarchyPanel.<>c__DisplayClass91_0$$<BindPooledItem>b__6: clean
	private void c__DisplayClass91_0__BindPooledItem_b__6(PointerEventData eventData)
	{
		MapEditorHierarchyPanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnItemEndDrag((int32_t)eventData, eventData);
		return;
	}

	// UI.MapEditorHierarchyPanel.<>c__DisplayClass91_0$$<BindPooledItem>b__7: clean
	private void c__DisplayClass91_0__BindPooledItem_b__7()
	{
		uint item;
		MapEditorHierarchyPanel __this_00;
		HashSet<int> __this_01;

		__this_00 = this.__4__this;
		if (__this_00 != null) {
			item = this.row.Id;
			__this_01 = __this_00._expanded;
			if (__this_01 != null) {
				__this_01.Add(item);
				__this_00.Sync();
				return;
			}
		}
		throw new NullReferenceException();
	}

	// UI.MapEditorHierarchyPanel.<>c__DisplayClass91_0$$<BindPooledItem>b__8: clean
	private void c__DisplayClass91_0__BindPooledItem_b__8()
	{
		uint item;
		MapEditorHierarchyPanel __this_00;
		HashSet<int> __this_01;

		__this_00 = this.__4__this;
		if (__this_00 != null) {
			item = this.row.Id;
			__this_01 = __this_00._expanded;
			if (__this_01 != null) {
				__this_01.Remove(item);
				__this_00.Sync();
				return;
			}
		}
		throw new NullReferenceException();
	}
}
