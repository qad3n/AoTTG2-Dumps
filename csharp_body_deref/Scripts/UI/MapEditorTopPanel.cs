// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorTopPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorTopPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorTopPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using GameManagers;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x20006DD")]
internal class MapEditorTopPanel : HeadedPanel
{
	[Token(Token = "0x20006DE")]
	public enum LayerOption
	{
		[Token(Token = "0x400216E")]
		All,
		[Token(Token = "0x400216F")]
		Active,
		[Token(Token = "0x4002170")]
		Inactive,
		[Token(Token = "0x4002171")]
		Visible,
		[Token(Token = "0x4002172")]
		Invisible,
		[Token(Token = "0x4002173")]
		Static,
		[Token(Token = "0x4002174")]
		NonStatic,
		[Token(Token = "0x4002175")]
		Colliders,
		[Token(Token = "0x4002176")]
		Triggers,
		[Token(Token = "0x4002177")]
		NoColliders,
		[Token(Token = "0x4002178")]
		Networked,
		[Token(Token = "0x4002179")]
		NonNetworked
	}

	[Token(Token = "0x4002162")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private IntSetting _dropdownSelection;

	[Token(Token = "0x4002163")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private HashSetSetting<int> _layerSelection;

	[Token(Token = "0x4002164")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private MapEditorMenu _menu;

	[Token(Token = "0x4002165")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private MapEditorGameManager _gameManager;

	[Token(Token = "0x4002166")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private StringSetting _currentMap;

	[Token(Token = "0x4002167")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private List<DropdownSelectElement> _dropdowns;

	[Token(Token = "0x4002168")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private MultiSelectDropdownElement _layerDropdown;

	[Token(Token = "0x4002169")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private GameObject _gizmoButton;

	[Token(Token = "0x400216A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private GameObject _gizmoOrientationButton;

	[Token(Token = "0x400216B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private GameObject _snapButton;

	[Token(Token = "0x400216C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private GameObject _brushButton;

	[Token(Token = "0x17000D5D")]
	protected override float Width
	{
		[Token(Token = "0x6004468")]
		[Address(RVA = "0x433A340", Offset = "0x433A340", VA = "0x433A340", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D5E")]
	protected override float Height
	{
		[Token(Token = "0x6004469")]
		[Address(RVA = "0x433A350", Offset = "0x433A350", VA = "0x433A350", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D5F")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x600446A")]
		[Address(RVA = "0x433A360", Offset = "0x433A360", VA = "0x433A360", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D60")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x600446B")]
		[Address(RVA = "0x433A370", Offset = "0x433A370", VA = "0x433A370", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D61")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600446C")]
		[Address(RVA = "0x433A380", Offset = "0x433A380", VA = "0x433A380", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D62")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600446D")]
		[Address(RVA = "0x433A390", Offset = "0x433A390", VA = "0x433A390", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D63")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600446E")]
		[Address(RVA = "0x433A3A0", Offset = "0x433A3A0", VA = "0x433A3A0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D64")]
	protected override string ThemePanel
	{
		[Token(Token = "0x600446F")]
		[Address(RVA = "0x433A3B0", Offset = "0x433A3B0", VA = "0x433A3B0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004470")]
	[Address(RVA = "0x433A3E0", Offset = "0x433A3E0", VA = "0x433A3E0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004471")]
	[Address(RVA = "0x4337A60", Offset = "0x4337A60", VA = "0x4337A60")]
	public bool IsDropdownOpen()
	{
		return default(bool);
	}

	[Token(Token = "0x6004472")]
	[Address(RVA = "0x433BB90", Offset = "0x433BB90", VA = "0x433BB90")]
	protected void OnFileClick()
	{
	}

	[Token(Token = "0x6004473")]
	[Address(RVA = "0x43251D0", Offset = "0x43251D0", VA = "0x43251D0")]
	public void Save()
	{
	}

	[Token(Token = "0x6004474")]
	[Address(RVA = "0x433C8C0", Offset = "0x433C8C0", VA = "0x433C8C0")]
	public void Autosave()
	{
	}

	[Token(Token = "0x6004475")]
	[Address(RVA = "0x433D0C0", Offset = "0x433D0C0", VA = "0x433D0C0")]
	protected void OnEditClick()
	{
	}

	[Token(Token = "0x6004476")]
	[Address(RVA = "0x433D1B0", Offset = "0x433D1B0", VA = "0x433D1B0")]
	protected void OnOptionsClick()
	{
	}

	[Token(Token = "0x6004477")]
	[Address(RVA = "0x433D2C0", Offset = "0x433D2C0", VA = "0x433D2C0")]
	protected void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004478")]
	[Address(RVA = "0x433D800", Offset = "0x433D800", VA = "0x433D800")]
	public void ToggleSnap()
	{
	}

	[Token(Token = "0x6004479")]
	[Address(RVA = "0x433D9E0", Offset = "0x433D9E0", VA = "0x433D9E0")]
	public void ToggleLights()
	{
	}

	[Token(Token = "0x600447A")]
	[Address(RVA = "0x433D8E0", Offset = "0x433D8E0", VA = "0x433D8E0")]
	public void ToggleBrush()
	{
	}

	[Token(Token = "0x600447B")]
	[Address(RVA = "0x433DA00", Offset = "0x433DA00", VA = "0x433DA00")]
	public void OnLayersChanged()
	{
	}

	[Token(Token = "0x600447C")]
	[Address(RVA = "0x433D700", Offset = "0x433D700", VA = "0x433D700")]
	public void NextGizmoOrientation()
	{
	}

	[Token(Token = "0x600447D")]
	[Address(RVA = "0x433D510", Offset = "0x433D510", VA = "0x433D510")]
	public void NextGizmo()
	{
	}

	[Token(Token = "0x600447E")]
	[Address(RVA = "0x433DA40", Offset = "0x433DA40", VA = "0x433DA40")]
	protected void OnDeleteMap()
	{
	}

	[Token(Token = "0x600447F")]
	[Address(RVA = "0x433DAD0", Offset = "0x433DAD0", VA = "0x433DAD0")]
	protected void OnNewFinish()
	{
	}

	[Token(Token = "0x6004480")]
	[Address(RVA = "0x433DBF0", Offset = "0x433DBF0", VA = "0x433DBF0")]
	protected void OnRenameFinish()
	{
	}

	[Token(Token = "0x6004481")]
	[Address(RVA = "0x433DD60", Offset = "0x433DD60", VA = "0x433DD60")]
	protected void OnOpenFinish()
	{
	}

	[Token(Token = "0x6004482")]
	[Address(RVA = "0x433DE20", Offset = "0x433DE20", VA = "0x433DE20")]
	protected void OnImportFinish()
	{
	}

	[Token(Token = "0x6004483")]
	[Address(RVA = "0x433DEC0", Offset = "0x433DEC0", VA = "0x433DEC0")]
	protected void OnImportConfirm()
	{
	}

	[Token(Token = "0x6004484")]
	[Address(RVA = "0x433E0D0", Offset = "0x433E0D0", VA = "0x433E0D0")]
	protected void OnImportPresetFinish()
	{
	}

	[Token(Token = "0x6004485")]
	[Address(RVA = "0x433E170", Offset = "0x433E170", VA = "0x433E170")]
	protected void OnImportAutosaveFinish()
	{
	}

	[Token(Token = "0x6004486")]
	[Address(RVA = "0x433E210", Offset = "0x433E210", VA = "0x433E210")]
	protected void OnImportPresetConfirm()
	{
	}

	[Token(Token = "0x6004487")]
	[Address(RVA = "0x433E360", Offset = "0x433E360", VA = "0x433E360")]
	protected void OnImportAutosaveConfirm()
	{
	}

	[Token(Token = "0x6004488")]
	[Address(RVA = "0x433E460", Offset = "0x433E460", VA = "0x433E460")]
	public MapEditorTopPanel()
	{
	}
}
