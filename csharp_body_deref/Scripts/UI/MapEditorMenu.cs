// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorMenu
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/MapEditorMenu.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorMenu.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Map;
using RuntimeSceneGizmo;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000849")]
internal class MapEditorMenu : BaseMenu
{
	[Token(Token = "0x40029A3")]
	[FieldOffset(Offset = "0x98")]
	public MapEditorInspectPanel InspectPanel;

	[Token(Token = "0x40029A4")]
	[FieldOffset(Offset = "0xA0")]
	public MapEditorBrushPanel BrushPanel;

	[Token(Token = "0x40029A5")]
	[FieldOffset(Offset = "0xA8")]
	public MapEditorRulerPanel RulerPanel;

	[Token(Token = "0x40029A6")]
	[FieldOffset(Offset = "0xB0")]
	public MapEditorHierarchyPanel HierarchyPanel;

	[Token(Token = "0x40029A7")]
	[FieldOffset(Offset = "0xB8")]
	public MapEditorTopPanel _topPanel;

	[Token(Token = "0x40029A8")]
	[FieldOffset(Offset = "0xC0")]
	public MapEditorAddObjectPopup AddObjectPopup;

	[Token(Token = "0x40029A9")]
	[FieldOffset(Offset = "0xC8")]
	public MapEditorAddVariantPopup AddVariantPopup;

	[Token(Token = "0x40029AA")]
	[FieldOffset(Offset = "0xD0")]
	public MapEditorTexturePopup TexturePopup;

	[Token(Token = "0x40029AB")]
	[FieldOffset(Offset = "0xD8")]
	public MapEditorCameraPopup CameraPopup;

	[Token(Token = "0x40029AC")]
	[FieldOffset(Offset = "0xE0")]
	public MapEditorInfoPopup InfoPopup;

	[Token(Token = "0x40029AD")]
	[FieldOffset(Offset = "0xE8")]
	public MapEditorSettingsPopup SettingsPopup;

	[Token(Token = "0x40029AE")]
	[FieldOffset(Offset = "0xF0")]
	public MapEditorCustomLogicPopup CustomLogicPopup;

	[Token(Token = "0x40029AF")]
	[FieldOffset(Offset = "0xF8")]
	public MapEditorAddComponentPopup AddComponentPopup;

	[Token(Token = "0x40029B0")]
	[FieldOffset(Offset = "0x100")]
	public MapEditorMapObjectPickerPopup MapObjectPickerPopup;

	[Token(Token = "0x40029B1")]
	[FieldOffset(Offset = "0x108")]
	public MapEditorErrorPopup ErrorPopup;

	[Token(Token = "0x40029B2")]
	[FieldOffset(Offset = "0x110")]
	public MapEditorCustomAssetPopup CustomAssetsPopup;

	[Token(Token = "0x40029B3")]
	[FieldOffset(Offset = "0x118")]
	public MapEditorWeatherPopup WeatherPopup;

	[Token(Token = "0x40029B4")]
	[FieldOffset(Offset = "0x120")]
	public MapEditorVersionConversionPopup VersionConversionPopup;

	[Token(Token = "0x40029B5")]
	[FieldOffset(Offset = "0x128")]
	public SceneGizmoRenderer OrientationGizmo;

	[Token(Token = "0x40029B6")]
	[FieldOffset(Offset = "0x130")]
	public Image DragImage;

	[Token(Token = "0x40029B7")]
	[FieldOffset(Offset = "0x138")]
	public bool IsMouseUI;

	[Token(Token = "0x40029B8")]
	[FieldOffset(Offset = "0x139")]
	public bool IsInputFocused;

	[Token(Token = "0x40029B9")]
	[FieldOffset(Offset = "0x140")]
	public Action<string> TexturePopupTarget;

	[Token(Token = "0x6005000")]
	[Address(RVA = "0x22CD040", Offset = "0x22CB640", VA = "0x1822CD040", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x6005001")]
	[Address(RVA = "0x22CC6B0", Offset = "0x22CACB0", VA = "0x1822CC6B0", Slot = "5")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x6005002")]
	[Address(RVA = "0x22CC470", Offset = "0x22CAA70", VA = "0x1822CC470")]
	public void SetDrag(bool active, Vector2 start, Vector2 end)
	{
	}

	[Token(Token = "0x6005003")]
	[Address(RVA = "0x22CD4A0", Offset = "0x22CBAA0", VA = "0x1822CD4A0")]
	public void ShowInspector(MapObject obj)
	{
	}

	[Token(Token = "0x6005004")]
	[Address(RVA = "0x22CD590", Offset = "0x22CBB90", VA = "0x1822CD590")]
	public void ShowInspector(List<MapObject> objs)
	{
	}

	[Token(Token = "0x6005005")]
	[Address(RVA = "0x22CC250", Offset = "0x22CA850", VA = "0x1822CC250")]
	public void RebuildInspectorPreservingScroll(List<MapObject> objs)
	{
	}

	[Token(Token = "0x6005006")]
	[Address(RVA = "0x22CBFB0", Offset = "0x22CA5B0", VA = "0x1822CBFB0")]
	public void HideInspector()
	{
	}

	[Token(Token = "0x6005007")]
	[Address(RVA = "0x22CD200", Offset = "0x22CB800", VA = "0x1822CD200")]
	public void ShowBrushPanel()
	{
	}

	[Token(Token = "0x6005008")]
	[Address(RVA = "0x22CBEF0", Offset = "0x22CA4F0", VA = "0x1822CBEF0")]
	public void HideBrushPanel()
	{
	}

	[Token(Token = "0x6005009")]
	[Address(RVA = "0x22CD670", Offset = "0x22CBC70", VA = "0x1822CD670")]
	public void ShowRulerPanel()
	{
	}

	[Token(Token = "0x600500A")]
	[Address(RVA = "0x22CC050", Offset = "0x22CA650", VA = "0x1822CC050")]
	public void HideRulerPanel()
	{
	}

	[Token(Token = "0x600500B")]
	[Address(RVA = "0x22CD960", Offset = "0x22CBF60", VA = "0x1822CD960")]
	public void SyncRulerPanel()
	{
	}

	[Token(Token = "0x600500C")]
	[Address(RVA = "0x22CD820", Offset = "0x22CBE20", VA = "0x1822CD820")]
	public void SyncBrushPanel()
	{
	}

	[Token(Token = "0x600500D")]
	[Address(RVA = "0x22CD7A0", Offset = "0x22CBDA0", VA = "0x1822CD7A0")]
	public void SyncBrushPanelValues()
	{
	}

	[Token(Token = "0x600500E")]
	[Address(RVA = "0x22CD8D0", Offset = "0x22CBED0", VA = "0x1822CD8D0")]
	public void SyncInspector()
	{
	}

	[Token(Token = "0x600500F")]
	[Address(RVA = "0x22CD320", Offset = "0x22CB920", VA = "0x1822CD320")]
	public void ShowHierarchyPanel()
	{
	}

	[Token(Token = "0x6005010")]
	[Address(RVA = "0x22CB9C0", Offset = "0x22C9FC0", VA = "0x1822CB9C0")]
	private void ApplyStretchAnchor(RectTransform rt, bool isLeft)
	{
	}

	[Token(Token = "0x6005011")]
	[Address(RVA = "0x22CD8A0", Offset = "0x22CBEA0", VA = "0x1822CD8A0")]
	public void SyncHierarchyPanel()
	{
	}

	[Token(Token = "0x6005012")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public void RebuildPanels()
	{
	}

	[Token(Token = "0x6005013")]
	[Address(RVA = "0x22CB830", Offset = "0x22C9E30", VA = "0x1822CB830")]
	public void ApplyHUDScale()
	{
	}

	[Token(Token = "0x6005014")]
	[Address(RVA = "0x22CBE60", Offset = "0x22CA460", VA = "0x1822CBE60")]
	public float GetMinMouseX()
	{
		return default(float);
	}

	[Token(Token = "0x6005015")]
	[Address(RVA = "0x22CBBE0", Offset = "0x22CA1E0", VA = "0x1822CBBE0")]
	public float GetMaxMouseX()
	{
		return default(float);
	}

	[Token(Token = "0x6005016")]
	[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480")]
	public float GetMinMouseY()
	{
		return default(float);
	}

	[Token(Token = "0x6005017")]
	[Address(RVA = "0x22CBDB0", Offset = "0x22CA3B0", VA = "0x1822CBDB0")]
	public float GetMaxMouseY()
	{
		return default(float);
	}

	[Token(Token = "0x6005018")]
	[Address(RVA = "0x22CDC70", Offset = "0x22CC270", VA = "0x1822CDC70")]
	private void Update()
	{
	}

	[Token(Token = "0x6005019")]
	[Address(RVA = "0x22CD9E0", Offset = "0x22CBFE0", VA = "0x1822CD9E0")]
	public void ToggleAddObjectPopup()
	{
	}

	[Token(Token = "0x600501A")]
	[Address(RVA = "0x22CC110", Offset = "0x22CA710", VA = "0x1822CC110")]
	public bool IsPopupActive()
	{
		return default(bool);
	}

	[Token(Token = "0x600501B")]
	[Address(RVA = "0x22CDA90", Offset = "0x22CC090", VA = "0x1822CDA90")]
	private void UpdateMouseUI()
	{
	}

	[Token(Token = "0x600501C")]
	[Address(RVA = "0x21DA7E0", Offset = "0x21D8DE0", VA = "0x1821DA7E0")]
	public MapEditorMenu()
	{
	}
}
