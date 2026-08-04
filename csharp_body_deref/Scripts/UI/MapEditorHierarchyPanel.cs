// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorHierarchyPanel
// Update status: unchanged since the previous dump
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
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20006CA")]
internal class MapEditorHierarchyPanel : HeadedPanel
{
	[Token(Token = "0x40020F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private List<GameObject> _items;

	[Token(Token = "0x40020F9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private Dictionary<int, GameObject> _idToItem;

	[Token(Token = "0x40020FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private Dictionary<int, int> _idToIndex;

	[Token(Token = "0x40020FB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private Dictionary<int, int> _indexToId;

	[Token(Token = "0x40020FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private HashSet<int> _selected;

	[Token(Token = "0x40020FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private int _lastClickedItem;

	[Token(Token = "0x40020FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xAC")]
	private float _lastclickedTime;

	[Token(Token = "0x40020FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private bool _draggingItem;

	[Token(Token = "0x4002100")]
	private const float DoubleClickTime = 0.5f;

	[Token(Token = "0x4002101")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private MapEditorMenu _menu;

	[Token(Token = "0x4002102")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private ElementStyle _style;

	[Token(Token = "0x4002103")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private MapEditorGameManager _gameManager;

	[Token(Token = "0x4002104")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private InputSettingElement _searchInput;

	[Token(Token = "0x4002105")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private StringSetting _searchSetting;

	[Token(Token = "0x4002106")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private Text _pageLabel;

	[Token(Token = "0x4002107")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private int _currentPage;

	[Token(Token = "0x4002108")]
	private const int ObjectsPerPage = 30;

	[Token(Token = "0x4002109")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private Transform _topGroup;

	[Token(Token = "0x17000D3B")]
	protected override float Width
	{
		[Token(Token = "0x60043AE")]
		[Address(RVA = "0x43266E0", Offset = "0x43266E0", VA = "0x43266E0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D3C")]
	protected override float Height
	{
		[Token(Token = "0x60043AF")]
		[Address(RVA = "0x43266F0", Offset = "0x43266F0", VA = "0x43266F0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D3D")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x60043B0")]
		[Address(RVA = "0x4326700", Offset = "0x4326700", VA = "0x4326700", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D3E")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x60043B1")]
		[Address(RVA = "0x4326710", Offset = "0x4326710", VA = "0x4326710", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D3F")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x60043B2")]
		[Address(RVA = "0x4326720", Offset = "0x4326720", VA = "0x4326720", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D40")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60043B3")]
		[Address(RVA = "0x4326730", Offset = "0x4326730", VA = "0x4326730", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D41")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60043B4")]
		[Address(RVA = "0x4326740", Offset = "0x4326740", VA = "0x4326740", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60043B5")]
	[Address(RVA = "0x4326750", Offset = "0x4326750", VA = "0x4326750", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60043B6")]
	[Address(RVA = "0x43275E0", Offset = "0x43275E0", VA = "0x43275E0", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x60043B7")]
	[Address(RVA = "0x4326C50", Offset = "0x4326C50", VA = "0x4326C50")]
	public void Sync()
	{
	}

	[Token(Token = "0x60043B8")]
	[Address(RVA = "0x43275F0", Offset = "0x43275F0", VA = "0x43275F0")]
	private GameObject CreateMapItem(MapObject obj, int level)
	{
		return null;
	}

	[Token(Token = "0x60043B9")]
	[Address(RVA = "0x43285A0", Offset = "0x43285A0", VA = "0x43285A0")]
	private void OnPageClick(bool left)
	{
	}

	[Token(Token = "0x60043BA")]
	[Address(RVA = "0x43285C0", Offset = "0x43285C0", VA = "0x43285C0")]
	private void OnButtonRelease(int id)
	{
	}

	[Token(Token = "0x60043BB")]
	[Address(RVA = "0x43285D0", Offset = "0x43285D0", VA = "0x43285D0")]
	private void OnButtonClick(int id)
	{
	}

	[Token(Token = "0x60043BC")]
	[Address(RVA = "0x4327CF0", Offset = "0x4327CF0", VA = "0x4327CF0")]
	public void SyncSelectedItems()
	{
	}

	[Token(Token = "0x60043BD")]
	[Address(RVA = "0x4328A90", Offset = "0x4328A90", VA = "0x4328A90")]
	private void Update()
	{
	}

	[Token(Token = "0x60043BE")]
	[Address(RVA = "0x4328AA0", Offset = "0x4328AA0", VA = "0x4328AA0")]
	public MapEditorHierarchyPanel()
	{
	}
}
