// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorTopPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/MapEditorTopPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorTopPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using GameManagers;
using Il2CppDummyDll;
using Map;
using Settings;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000855")]
internal class MapEditorTopPanel : HeadedPanel
{
	[Token(Token = "0x2000856")]
	public enum LayerOption
	{
		[Token(Token = "0x40029E6")]
		All,
		[Token(Token = "0x40029E7")]
		Active,
		[Token(Token = "0x40029E8")]
		Inactive,
		[Token(Token = "0x40029E9")]
		Visible,
		[Token(Token = "0x40029EA")]
		Invisible,
		[Token(Token = "0x40029EB")]
		Static,
		[Token(Token = "0x40029EC")]
		NonStatic,
		[Token(Token = "0x40029ED")]
		Colliders,
		[Token(Token = "0x40029EE")]
		Triggers,
		[Token(Token = "0x40029EF")]
		NoColliders,
		[Token(Token = "0x40029F0")]
		Networked,
		[Token(Token = "0x40029F1")]
		NonNetworked,
		[Token(Token = "0x40029F2")]
		NavMesh
	}

	[Token(Token = "0x40029CD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private IntSetting _dropdownSelection;

	[Token(Token = "0x40029CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private IntSetting _toolDropdownSelection;

	[Token(Token = "0x40029CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private StringSetting _playMode;

	[Token(Token = "0x40029D0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly HashSetSetting<int> _gridSelection;

	[Token(Token = "0x40029D1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly HashSetSetting<int> _layerSelection;

	[Token(Token = "0x40029D2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static bool _lightsEnabled;

	[Token(Token = "0x40029D3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private MapEditorMenu _menu;

	[Token(Token = "0x40029D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private MapEditorGameManager _gameManager;

	[Token(Token = "0x40029D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private StringSetting _currentMap;

	[Token(Token = "0x40029D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private List<DropdownSelectElement> _dropdowns;

	[Token(Token = "0x40029D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private MultiSelectDropdownElement _gridDropdown;

	[Token(Token = "0x40029D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private MultiSelectDropdownElement _layerDropdown;

	[Token(Token = "0x40029D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private DropdownSelectElement _playModeDropdown;

	[Token(Token = "0x40029DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private GameObject _gizmoOrientationButton;

	[Token(Token = "0x40029DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private GameObject _snapButton;

	[Token(Token = "0x40029DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private GameObject _sideToolbar;

	[Token(Token = "0x40029DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private GameObject _positionButton;

	[Token(Token = "0x40029DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private GameObject _rotationButton;

	[Token(Token = "0x40029DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private GameObject _scaleButton;

	[Token(Token = "0x40029E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private GameObject _lightButton;

	[Token(Token = "0x40029E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private RawImage _gridIcon;

	[Token(Token = "0x40029E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private RawImage _layersIcon;

	[Token(Token = "0x40029E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private string _selectedTool;

	[Token(Token = "0x40029E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private bool _playModeExplicitlySelected;

	[Token(Token = "0x17000EB8")]
	protected override float Width
	{
		[Token(Token = "0x600506A")]
		[Address(RVA = "0x2236ED0", Offset = "0x22354D0", VA = "0x182236ED0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EB9")]
	protected override float Height
	{
		[Token(Token = "0x600506B")]
		[Address(RVA = "0x21C11C0", Offset = "0x21BF7C0", VA = "0x1821C11C0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EBA")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x600506C")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EBB")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x600506D")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EBC")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600506E")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EBD")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600506F")]
		[Address(RVA = "0x21BB430", Offset = "0x21B9A30", VA = "0x1821BB430", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000EBE")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6005070")]
		[Address(RVA = "0x1B56090", Offset = "0x1B54690", VA = "0x181B56090", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000EBF")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6005071")]
		[Address(RVA = "0x22DBE70", Offset = "0x22DA470", VA = "0x1822DBE70", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6005072")]
	[Address(RVA = "0x22D9AD0", Offset = "0x22D80D0", VA = "0x1822D9AD0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6005073")]
	[Address(RVA = "0x22D55E0", Offset = "0x22D3BE0", VA = "0x1822D55E0")]
	private GameObject CreateStateIconButton(Transform parent, string icon, string tooltip, Action onClick)
	{
		return null;
	}

	[Token(Token = "0x6005074")]
	[Address(RVA = "0x22D4060", Offset = "0x22D2660", VA = "0x1822D4060")]
	private RawImage AddDropdownIcon(GameObject dropdown, string icon)
	{
		return null;
	}

	[Token(Token = "0x6005075")]
	[Address(RVA = "0x22D4EE0", Offset = "0x22D34E0", VA = "0x1822D4EE0")]
	private void CreateSideToolbar()
	{
	}

	[Token(Token = "0x6005076")]
	[Address(RVA = "0x22D8B40", Offset = "0x22D7140", VA = "0x1822D8B40")]
	public void RefreshSideToolbarPosition()
	{
	}

	[Token(Token = "0x6005077")]
	[Address(RVA = "0x22D5980", Offset = "0x22D3F80", VA = "0x1822D5980")]
	public bool IsPointerOverSideToolbar(Vector2 screenPosition)
	{
		return default(bool);
	}

	[Token(Token = "0x6005078")]
	[Address(RVA = "0x22D5790", Offset = "0x22D3D90", VA = "0x1822D5790")]
	public bool IsDropdownOpen()
	{
		return default(bool);
	}

	[Token(Token = "0x6005079")]
	[Address(RVA = "0x22D6160", Offset = "0x22D4760", VA = "0x1822D6160")]
	protected void OnFileClick()
	{
	}

	[Token(Token = "0x600507A")]
	[Address(RVA = "0x22D8C60", Offset = "0x22D7260", VA = "0x1822D8C60")]
	public void Save()
	{
	}

	[Token(Token = "0x600507B")]
	[Address(RVA = "0x22D4550", Offset = "0x22D2B50", VA = "0x1822D4550")]
	public void Autosave()
	{
	}

	[Token(Token = "0x600507C")]
	[Address(RVA = "0x22D6040", Offset = "0x22D4640", VA = "0x1822D6040")]
	protected void OnEditClick()
	{
	}

	[Token(Token = "0x600507D")]
	[Address(RVA = "0x22D79C0", Offset = "0x22D5FC0", VA = "0x1822D79C0")]
	protected void OnOptionsClick()
	{
	}

	[Token(Token = "0x600507E")]
	[Address(RVA = "0x22D5BF0", Offset = "0x22D41F0", VA = "0x1822D5BF0")]
	protected void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x600507F")]
	[Address(RVA = "0x22DB990", Offset = "0x22D9F90", VA = "0x1822DB990")]
	public void ToggleSnap()
	{
	}

	[Token(Token = "0x6005080")]
	[Address(RVA = "0x22DB8F0", Offset = "0x22D9EF0", VA = "0x1822DB8F0")]
	public void ToggleLights()
	{
	}

	[Token(Token = "0x6005081")]
	[Address(RVA = "0x22D4430", Offset = "0x22D2A30", VA = "0x1822D4430")]
	public void ApplyViewSettings()
	{
	}

	[Token(Token = "0x6005082")]
	[Address(RVA = "0x22DB8B0", Offset = "0x22D9EB0", VA = "0x1822DB8B0")]
	public void ToggleBrush()
	{
	}

	[Token(Token = "0x6005083")]
	[Address(RVA = "0x22D7640", Offset = "0x22D5C40", VA = "0x1822D7640")]
	public void OnLayersChanged()
	{
	}

	[Token(Token = "0x6005084")]
	[Address(RVA = "0x22D5A80", Offset = "0x22D4080", VA = "0x1822D5A80")]
	public void NextGizmoOrientation()
	{
	}

	[Token(Token = "0x6005085")]
	[Address(RVA = "0x22D5AC0", Offset = "0x22D40C0", VA = "0x1822D5AC0")]
	public void NextGizmo()
	{
	}

	[Token(Token = "0x6005086")]
	[Address(RVA = "0x22D8F40", Offset = "0x22D7540", VA = "0x1822D8F40")]
	private void SelectGizmo(string gizmo)
	{
	}

	[Token(Token = "0x6005087")]
	[Address(RVA = "0x22D8F80", Offset = "0x22D7580", VA = "0x1822D8F80")]
	public void SelectTool(string tool)
	{
	}

	[Token(Token = "0x6005088")]
	[Address(RVA = "0x22D4CD0", Offset = "0x22D32D0", VA = "0x1822D4CD0")]
	public void CloseRulerTool()
	{
	}

	[Token(Token = "0x6005089")]
	[Address(RVA = "0x22D7C50", Offset = "0x22D6250", VA = "0x1822D7C50")]
	private void OnToolSelected()
	{
	}

	[Token(Token = "0x600508A")]
	[Address(RVA = "0x22D4C30", Offset = "0x22D3230", VA = "0x1822D4C30")]
	public void CloseBrushTool()
	{
	}

	[Token(Token = "0x600508B")]
	[Address(RVA = "0x22D6D80", Offset = "0x22D5380", VA = "0x1822D6D80")]
	private void OnGridChanged()
	{
	}

	[Token(Token = "0x600508C")]
	[Address(RVA = "0x22D5730", Offset = "0x22D3D30", VA = "0x1822D5730")]
	private string GetPlayModeLabel()
	{
		return null;
	}

	[Token(Token = "0x600508D")]
	[Address(RVA = "0x22D8A00", Offset = "0x22D7000", VA = "0x1822D8A00")]
	private void RefreshPlayModeLabel()
	{
	}

	[Token(Token = "0x600508E")]
	[Address(RVA = "0x22D7AC0", Offset = "0x22D60C0", VA = "0x1822D7AC0")]
	private void OnPlayModeSelected()
	{
	}

	[Token(Token = "0x600508F")]
	[Address(RVA = "0x22D7DC0", Offset = "0x22D63C0", VA = "0x1822D7DC0")]
	private void PlayMap()
	{
	}

	[Token(Token = "0x6005090")]
	[Address(RVA = "0x22D8190", Offset = "0x22D6790", VA = "0x1822D8190")]
	private void RefreshControlStates()
	{
	}

	[Token(Token = "0x6005091")]
	[Address(RVA = "0x22D9280", Offset = "0x22D7880", VA = "0x1822D9280")]
	private void SetButtonActive(GameObject buttonObject, bool active, bool dimWhenInactive = true, bool highlightBackground = true)
	{
	}

	[Token(Token = "0x6005092")]
	[Address(RVA = "0x22D9860", Offset = "0x22D7E60", VA = "0x1822D9860")]
	private void SetTextButtonActive(GameObject buttonObject, bool active)
	{
	}

	[Token(Token = "0x6005093")]
	[Address(RVA = "0x22D9720", Offset = "0x22D7D20", VA = "0x1822D9720")]
	private void SetIcon(GameObject button, string icon)
	{
	}

	[Token(Token = "0x6005094")]
	[Address(RVA = "0x22D5FB0", Offset = "0x22D45B0", VA = "0x1822D5FB0")]
	protected void OnDeleteMap()
	{
	}

	[Token(Token = "0x6005095")]
	[Address(RVA = "0x22D76E0", Offset = "0x22D5CE0", VA = "0x1822D76E0")]
	protected void OnNewFinish()
	{
	}

	[Token(Token = "0x6005096")]
	[Address(RVA = "0x22D7AD0", Offset = "0x22D60D0", VA = "0x1822D7AD0")]
	protected void OnRenameFinish()
	{
	}

	[Token(Token = "0x6005097")]
	[Address(RVA = "0x22D7800", Offset = "0x22D5E00", VA = "0x1822D7800")]
	protected void OnOpenFinish()
	{
	}

	[Token(Token = "0x6005098")]
	[Address(RVA = "0x22D72C0", Offset = "0x22D58C0", VA = "0x1822D72C0")]
	protected void OnImportFinish()
	{
	}

	[Token(Token = "0x6005099")]
	[Address(RVA = "0x22D7090", Offset = "0x22D5690", VA = "0x1822D7090")]
	protected void OnImportConfirm()
	{
	}

	[Token(Token = "0x600509A")]
	[Address(RVA = "0x22D7580", Offset = "0x22D5B80", VA = "0x1822D7580")]
	protected void OnImportPresetFinish()
	{
	}

	[Token(Token = "0x600509B")]
	[Address(RVA = "0x22D6FD0", Offset = "0x22D55D0", VA = "0x1822D6FD0")]
	protected void OnImportAutosaveFinish()
	{
	}

	[Token(Token = "0x600509C")]
	[Address(RVA = "0x22D7380", Offset = "0x22D5980", VA = "0x1822D7380")]
	protected void OnImportPresetConfirm()
	{
	}

	[Token(Token = "0x600509D")]
	[Address(RVA = "0x22D6E20", Offset = "0x22D5420", VA = "0x1822D6E20")]
	protected void OnImportAutosaveConfirm()
	{
	}

	[Token(Token = "0x600509E")]
	[Address(RVA = "0x22D4D90", Offset = "0x22D3390", VA = "0x1822D4D90")]
	private void ContinueAfterVersionConfirmation(MapScript script, UnityAction continuation, string backupName)
	{
	}

	[Token(Token = "0x600509F")]
	[Address(RVA = "0x22DBCE0", Offset = "0x22DA2E0", VA = "0x1822DBCE0")]
	public MapEditorTopPanel()
	{
	}
}
