using System.Collections.Generic;
using System.Runtime.InteropServices;
using GameManagers;
using Il2CppDummyDll;
using Map;
using Settings;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200067E")]
internal class MapEditorHierarchyPanel : HeadedPanel
{
	[Token(Token = "0x4001FA3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private List<GameObject> _items;

	[Token(Token = "0x4001FA4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private Dictionary<int, GameObject> _idToItem;

	[Token(Token = "0x4001FA5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private Dictionary<int, int> _idToIndex;

	[Token(Token = "0x4001FA6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private Dictionary<int, int> _indexToId;

	[Token(Token = "0x4001FA7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private HashSet<int> _selected;

	[Token(Token = "0x4001FA8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private int _lastClickedItem;

	[Token(Token = "0x4001FA9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xAC")]
	private float _lastclickedTime;

	[Token(Token = "0x4001FAA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private bool _draggingItem;

	[Token(Token = "0x4001FAB")]
	private const float DoubleClickTime = 0.5f;

	[Token(Token = "0x4001FAC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private MapEditorMenu _menu;

	[Token(Token = "0x4001FAD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private ElementStyle _style;

	[Token(Token = "0x4001FAE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private MapEditorGameManager _gameManager;

	[Token(Token = "0x4001FAF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private InputSettingElement _searchInput;

	[Token(Token = "0x4001FB0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private StringSetting _searchSetting;

	[Token(Token = "0x4001FB1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private Text _pageLabel;

	[Token(Token = "0x4001FB2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private int _currentPage;

	[Token(Token = "0x4001FB3")]
	private const int ObjectsPerPage = 30;

	[Token(Token = "0x4001FB4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private Transform _topGroup;

	[Token(Token = "0x17000CC1")]
	protected override float Width
	{
		[Token(Token = "0x6004150")]
		[Address(RVA = "0x4012210", Offset = "0x4012210", VA = "0x4012210", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CC2")]
	protected override float Height
	{
		[Token(Token = "0x6004151")]
		[Address(RVA = "0x4012220", Offset = "0x4012220", VA = "0x4012220", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CC3")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6004152")]
		[Address(RVA = "0x4012230", Offset = "0x4012230", VA = "0x4012230", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CC4")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6004153")]
		[Address(RVA = "0x4012240", Offset = "0x4012240", VA = "0x4012240", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CC5")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004154")]
		[Address(RVA = "0x4012250", Offset = "0x4012250", VA = "0x4012250", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CC6")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004155")]
		[Address(RVA = "0x4012260", Offset = "0x4012260", VA = "0x4012260", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CC7")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004156")]
		[Address(RVA = "0x4012270", Offset = "0x4012270", VA = "0x4012270", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6004157")]
	[Address(RVA = "0x4012280", Offset = "0x4012280", VA = "0x4012280", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004158")]
	[Address(RVA = "0x4013110", Offset = "0x4013110", VA = "0x4013110", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6004159")]
	[Address(RVA = "0x4012780", Offset = "0x4012780", VA = "0x4012780")]
	public void Sync()
	{
	}

	[Token(Token = "0x600415A")]
	[Address(RVA = "0x4013120", Offset = "0x4013120", VA = "0x4013120")]
	private GameObject CreateMapItem(MapObject obj, int level)
	{
		return null;
	}

	[Token(Token = "0x600415B")]
	[Address(RVA = "0x40140D0", Offset = "0x40140D0", VA = "0x40140D0")]
	private void OnPageClick(bool left)
	{
	}

	[Token(Token = "0x600415C")]
	[Address(RVA = "0x40140F0", Offset = "0x40140F0", VA = "0x40140F0")]
	private void OnButtonRelease(int id)
	{
	}

	[Token(Token = "0x600415D")]
	[Address(RVA = "0x4014100", Offset = "0x4014100", VA = "0x4014100")]
	private void OnButtonClick(int id)
	{
	}

	[Token(Token = "0x600415E")]
	[Address(RVA = "0x4013820", Offset = "0x4013820", VA = "0x4013820")]
	public void SyncSelectedItems()
	{
	}

	[Token(Token = "0x600415F")]
	[Address(RVA = "0x40145C0", Offset = "0x40145C0", VA = "0x40145C0")]
	private void Update()
	{
	}

	[Token(Token = "0x6004160")]
	[Address(RVA = "0x40145D0", Offset = "0x40145D0", VA = "0x40145D0")]
	public MapEditorHierarchyPanel()
	{
	}
}
