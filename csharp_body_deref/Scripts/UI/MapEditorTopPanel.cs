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

[Token(Token = "0x20008D3")]
internal class MapEditorTopPanel : HeadedPanel
{
	[Token(Token = "0x20008D4")]
	public enum LayerOption
	{
		[Token(Token = "0x4002C9F")]
		All,
		[Token(Token = "0x4002CA0")]
		Active,
		[Token(Token = "0x4002CA1")]
		Inactive,
		[Token(Token = "0x4002CA2")]
		Visible,
		[Token(Token = "0x4002CA3")]
		Invisible,
		[Token(Token = "0x4002CA4")]
		Static,
		[Token(Token = "0x4002CA5")]
		NonStatic,
		[Token(Token = "0x4002CA6")]
		Colliders,
		[Token(Token = "0x4002CA7")]
		Triggers,
		[Token(Token = "0x4002CA8")]
		NoColliders,
		[Token(Token = "0x4002CA9")]
		Networked,
		[Token(Token = "0x4002CAA")]
		NonNetworked,
		[Token(Token = "0x4002CAB")]
		NavMesh
	}

	[Token(Token = "0x4002C86")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private IntSetting _dropdownSelection;

	[Token(Token = "0x4002C87")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private IntSetting _toolDropdownSelection;

	[Token(Token = "0x4002C88")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private StringSetting _playMode;

	[Token(Token = "0x4002C89")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly HashSetSetting<int> _gridSelection;

	[Token(Token = "0x4002C8A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly HashSetSetting<int> _layerSelection;

	[Token(Token = "0x4002C8B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static bool _lightsEnabled;

	[Token(Token = "0x4002C8C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private MapEditorMenu _menu;

	[Token(Token = "0x4002C8D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private MapEditorGameManager _gameManager;

	[Token(Token = "0x4002C8E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private StringSetting _currentMap;

	[Token(Token = "0x4002C8F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private List<DropdownSelectElement> _dropdowns;

	[Token(Token = "0x4002C90")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private MultiSelectDropdownElement _gridDropdown;

	[Token(Token = "0x4002C91")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private MultiSelectDropdownElement _layerDropdown;

	[Token(Token = "0x4002C92")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private DropdownSelectElement _playModeDropdown;

	[Token(Token = "0x4002C93")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private GameObject _gizmoOrientationButton;

	[Token(Token = "0x4002C94")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private GameObject _snapButton;

	[Token(Token = "0x4002C95")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private GameObject _sideToolbar;

	[Token(Token = "0x4002C96")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private GameObject _positionButton;

	[Token(Token = "0x4002C97")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private GameObject _rotationButton;

	[Token(Token = "0x4002C98")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private GameObject _scaleButton;

	[Token(Token = "0x4002C99")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private GameObject _lightButton;

	[Token(Token = "0x4002C9A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private RawImage _gridIcon;

	[Token(Token = "0x4002C9B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private RawImage _layersIcon;

	[Token(Token = "0x4002C9C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private string _selectedTool;

	[Token(Token = "0x4002C9D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private bool _playModeExplicitlySelected;

	[Token(Token = "0x17000EB9")]
	protected override float Width
	{
		[Token(Token = "0x600540A")]
		[Address(RVA = "0x5C9CFF0", Offset = "0x5C9BFF0", VA = "0x5C9CFF0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EBA")]
	protected override float Height
	{
		[Token(Token = "0x600540B")]
		[Address(RVA = "0x5C9D000", Offset = "0x5C9C000", VA = "0x5C9D000", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EBB")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x600540C")]
		[Address(RVA = "0x5C9D010", Offset = "0x5C9C010", VA = "0x5C9D010", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EBC")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x600540D")]
		[Address(RVA = "0x5C9D020", Offset = "0x5C9C020", VA = "0x5C9D020", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EBD")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600540E")]
		[Address(RVA = "0x5C9D030", Offset = "0x5C9C030", VA = "0x5C9D030", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EBE")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600540F")]
		[Address(RVA = "0x5C9D040", Offset = "0x5C9C040", VA = "0x5C9D040", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000EBF")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6005410")]
		[Address(RVA = "0x5C9D050", Offset = "0x5C9C050", VA = "0x5C9D050", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000EC0")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6005411")]
		[Address(RVA = "0x5C9D060", Offset = "0x5C9C060", VA = "0x5C9D060", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6005412")]
	[Address(RVA = "0x5C9D090", Offset = "0x5C9C090", VA = "0x5C9D090", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6005413")]
	[Address(RVA = "0x5C9FC00", Offset = "0x5C9EC00", VA = "0x5C9FC00")]
	private GameObject CreateStateIconButton(Transform parent, string icon, string tooltip, Action onClick)
	{
		return null;
	}

	[Token(Token = "0x6005414")]
	[Address(RVA = "0x5C9F7B0", Offset = "0x5C9E7B0", VA = "0x5C9F7B0")]
	private RawImage AddDropdownIcon(GameObject dropdown, string icon)
	{
		return null;
	}

	[Token(Token = "0x6005415")]
	[Address(RVA = "0x5C9FFC0", Offset = "0x5C9EFC0", VA = "0x5C9FFC0")]
	private void CreateSideToolbar()
	{
	}

	[Token(Token = "0x6005416")]
	[Address(RVA = "0x5C98650", Offset = "0x5C97650", VA = "0x5C98650")]
	public void RefreshSideToolbarPosition()
	{
	}

	[Token(Token = "0x6005417")]
	[Address(RVA = "0x5C99320", Offset = "0x5C98320", VA = "0x5C99320")]
	public bool IsPointerOverSideToolbar(Vector2 screenPosition)
	{
		return default(bool);
	}

	[Token(Token = "0x6005418")]
	[Address(RVA = "0x5C99110", Offset = "0x5C98110", VA = "0x5C99110")]
	public bool IsDropdownOpen()
	{
		return default(bool);
	}

	[Token(Token = "0x6005419")]
	[Address(RVA = "0x5CA1190", Offset = "0x5CA0190", VA = "0x5CA1190")]
	protected void OnFileClick()
	{
	}

	[Token(Token = "0x600541A")]
	[Address(RVA = "0x5CA24A0", Offset = "0x5CA14A0", VA = "0x5CA24A0")]
	public bool Save()
	{
		return default(bool);
	}

	[Token(Token = "0x600541B")]
	[Address(RVA = "0x5CA29F0", Offset = "0x5CA19F0", VA = "0x5CA29F0")]
	public void Autosave()
	{
	}

	[Token(Token = "0x600541C")]
	[Address(RVA = "0x5CA2520", Offset = "0x5CA1520", VA = "0x5CA2520")]
	private void SyncMapScriptObjects()
	{
	}

	[Token(Token = "0x600541D")]
	[Address(RVA = "0x5CA30C0", Offset = "0x5CA20C0", VA = "0x5CA30C0")]
	protected void OnEditClick()
	{
	}

	[Token(Token = "0x600541E")]
	[Address(RVA = "0x5CA31B0", Offset = "0x5CA21B0", VA = "0x5CA31B0")]
	protected void OnOptionsClick()
	{
	}

	[Token(Token = "0x600541F")]
	[Address(RVA = "0x5CA32A0", Offset = "0x5CA22A0", VA = "0x5CA32A0")]
	protected void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6005420")]
	[Address(RVA = "0x5CA3650", Offset = "0x5CA2650", VA = "0x5CA3650")]
	public void ToggleSnap()
	{
	}

	[Token(Token = "0x6005421")]
	[Address(RVA = "0x5CA36B0", Offset = "0x5CA26B0", VA = "0x5CA36B0")]
	public void ToggleLights()
	{
	}

	[Token(Token = "0x6005422")]
	[Address(RVA = "0x5CA3730", Offset = "0x5CA2730", VA = "0x5CA3730")]
	public void ApplyViewSettings()
	{
	}

	[Token(Token = "0x6005423")]
	[Address(RVA = "0x5CA3670", Offset = "0x5CA2670", VA = "0x5CA3670")]
	public void ToggleBrush()
	{
	}

	[Token(Token = "0x6005424")]
	[Address(RVA = "0x5CA3B20", Offset = "0x5CA2B20", VA = "0x5CA3B20")]
	public void OnLayersChanged()
	{
	}

	[Token(Token = "0x6005425")]
	[Address(RVA = "0x5CA3620", Offset = "0x5CA2620", VA = "0x5CA3620")]
	public void NextGizmoOrientation()
	{
	}

	[Token(Token = "0x6005426")]
	[Address(RVA = "0x5CA3500", Offset = "0x5CA2500", VA = "0x5CA3500")]
	public void NextGizmo()
	{
	}

	[Token(Token = "0x6005427")]
	[Address(RVA = "0x5CA3BB0", Offset = "0x5CA2BB0", VA = "0x5CA3BB0")]
	private void SelectGizmo(string gizmo)
	{
	}

	[Token(Token = "0x6005428")]
	[Address(RVA = "0x5CA3830", Offset = "0x5CA2830", VA = "0x5CA3830")]
	public void SelectTool(string tool)
	{
	}

	[Token(Token = "0x6005429")]
	[Address(RVA = "0x5C99C20", Offset = "0x5C98C20", VA = "0x5C99C20")]
	public void CloseRulerTool()
	{
	}

	[Token(Token = "0x600542A")]
	[Address(RVA = "0x5CA3BE0", Offset = "0x5CA2BE0", VA = "0x5CA3BE0")]
	private void OnToolSelected()
	{
	}

	[Token(Token = "0x600542B")]
	[Address(RVA = "0x5CA3D40", Offset = "0x5CA2D40", VA = "0x5CA3D40")]
	public void CloseBrushTool()
	{
	}

	[Token(Token = "0x600542C")]
	[Address(RVA = "0x5CA3DE0", Offset = "0x5CA2DE0", VA = "0x5CA3DE0")]
	private void OnGridChanged()
	{
	}

	[Token(Token = "0x600542D")]
	[Address(RVA = "0x5C9F720", Offset = "0x5C9E720", VA = "0x5C9F720")]
	private static string Locale(string item)
	{
		return null;
	}

	[Token(Token = "0x600542E")]
	[Address(RVA = "0x5C9F600", Offset = "0x5C9E600", VA = "0x5C9F600")]
	private string GizmoModeText()
	{
		return null;
	}

	[Token(Token = "0x600542F")]
	[Address(RVA = "0x5C9FD50", Offset = "0x5C9ED50", VA = "0x5C9FD50")]
	private string GetPlayModeLabel()
	{
		return null;
	}

	[Token(Token = "0x6005430")]
	[Address(RVA = "0x5CA3E70", Offset = "0x5CA2E70", VA = "0x5CA3E70")]
	private void RefreshPlayModeLabel()
	{
	}

	[Token(Token = "0x6005431")]
	[Address(RVA = "0x5CA3F60", Offset = "0x5CA2F60", VA = "0x5CA3F60")]
	private void OnPlayModeSelected()
	{
	}

	[Token(Token = "0x6005432")]
	[Address(RVA = "0x5CA3F70", Offset = "0x5CA2F70", VA = "0x5CA3F70")]
	private void PlayMap()
	{
	}

	[Token(Token = "0x6005433")]
	[Address(RVA = "0x5CA0720", Offset = "0x5C9F720", VA = "0x5CA0720")]
	private void RefreshControlStates()
	{
	}

	[Token(Token = "0x6005434")]
	[Address(RVA = "0x5C9FEC0", Offset = "0x5C9EEC0", VA = "0x5C9FEC0")]
	private void SetButtonActive(GameObject buttonObject, bool active)
	{
	}

	[Token(Token = "0x6005435")]
	[Address(RVA = "0x5CA4380", Offset = "0x5CA3380", VA = "0x5CA4380")]
	private void SetToolbarButtonActive(GameObject buttonObject, bool active)
	{
	}

	[Token(Token = "0x6005436")]
	[Address(RVA = "0x5CA4810", Offset = "0x5CA3810", VA = "0x5CA4810")]
	private void SetIconButtonColors(GameObject buttonObject, Color iconColor, Color normal, Color highlighted)
	{
	}

	[Token(Token = "0x6005437")]
	[Address(RVA = "0x5CA10E0", Offset = "0x5CA00E0", VA = "0x5CA10E0")]
	private Color ThemeColor(string element, string key, bool active)
	{
		return default(Color);
	}

	[Token(Token = "0x6005438")]
	[Address(RVA = "0x5CA51D0", Offset = "0x5CA41D0", VA = "0x5CA51D0")]
	private Color ButtonTextColor(bool active)
	{
		return default(Color);
	}

	[Token(Token = "0x6005439")]
	[Address(RVA = "0x5CA43D0", Offset = "0x5CA33D0", VA = "0x5CA43D0")]
	private void SetTextButtonActive(GameObject buttonObject, bool active)
	{
	}

	[Token(Token = "0x600543A")]
	[Address(RVA = "0x5CA46D0", Offset = "0x5CA36D0", VA = "0x5CA46D0")]
	private void SetIcon(GameObject button, string icon)
	{
	}

	[Token(Token = "0x600543B")]
	[Address(RVA = "0x5CA5430", Offset = "0x5CA4430", VA = "0x5CA5430")]
	protected void OnDeleteMap()
	{
	}

	[Token(Token = "0x600543C")]
	[Address(RVA = "0x5CA54C0", Offset = "0x5CA44C0", VA = "0x5CA54C0")]
	protected void OnNewFinish()
	{
	}

	[Token(Token = "0x600543D")]
	[Address(RVA = "0x5CA5650", Offset = "0x5CA4650", VA = "0x5CA5650")]
	protected void OnRenameFinish()
	{
	}

	[Token(Token = "0x600543E")]
	[Address(RVA = "0x5CA2810", Offset = "0x5CA1810", VA = "0x5CA2810")]
	private bool TrySaveMapFile(Action save)
	{
		return default(bool);
	}

	[Token(Token = "0x600543F")]
	[Address(RVA = "0x5CA5840", Offset = "0x5CA4840", VA = "0x5CA5840")]
	protected void OnOpenFinish()
	{
	}

	[Token(Token = "0x6005440")]
	[Address(RVA = "0x5CA5B70", Offset = "0x5CA4B70", VA = "0x5CA5B70")]
	protected void OnImportFinish()
	{
	}

	[Token(Token = "0x6005441")]
	[Address(RVA = "0x5CA5D10", Offset = "0x5CA4D10", VA = "0x5CA5D10")]
	protected void OnImportConfirm()
	{
	}

	[Token(Token = "0x6005442")]
	[Address(RVA = "0x5CA5FF0", Offset = "0x5CA4FF0", VA = "0x5CA5FF0")]
	protected void OnImportPresetFinish()
	{
	}

	[Token(Token = "0x6005443")]
	[Address(RVA = "0x5CA6190", Offset = "0x5CA5190", VA = "0x5CA6190")]
	protected void OnImportAutosaveFinish()
	{
	}

	[Token(Token = "0x6005444")]
	[Address(RVA = "0x5CA6330", Offset = "0x5CA5330", VA = "0x5CA6330")]
	protected void OnImportPresetConfirm()
	{
	}

	[Token(Token = "0x6005445")]
	[Address(RVA = "0x5CA6530", Offset = "0x5CA5530", VA = "0x5CA6530")]
	protected void OnImportAutosaveConfirm()
	{
	}

	[Token(Token = "0x6005446")]
	[Address(RVA = "0x5CA5A10", Offset = "0x5CA4A10", VA = "0x5CA5A10")]
	private void ContinueAfterVersionConfirmation(MapScript script, UnityAction continuation, string backupName)
	{
	}

	[Token(Token = "0x6005447")]
	[Address(RVA = "0x5CA7130", Offset = "0x5CA6130", VA = "0x5CA7130")]
	public MapEditorTopPanel()
	{
	}
}
