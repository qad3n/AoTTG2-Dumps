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

[Token(Token = "0x20008C7")]
internal class MapEditorMenu : BaseMenu
{
	[Token(Token = "0x4002C5C")]
	[FieldOffset(Offset = "0x98")]
	public MapEditorInspectPanel InspectPanel;

	[Token(Token = "0x4002C5D")]
	[FieldOffset(Offset = "0xA0")]
	public MapEditorBrushPanel BrushPanel;

	[Token(Token = "0x4002C5E")]
	[FieldOffset(Offset = "0xA8")]
	public MapEditorRulerPanel RulerPanel;

	[Token(Token = "0x4002C5F")]
	[FieldOffset(Offset = "0xB0")]
	public MapEditorHierarchyPanel HierarchyPanel;

	[Token(Token = "0x4002C60")]
	[FieldOffset(Offset = "0xB8")]
	public MapEditorTopPanel _topPanel;

	[Token(Token = "0x4002C61")]
	[FieldOffset(Offset = "0xC0")]
	public MapEditorAddObjectPopup AddObjectPopup;

	[Token(Token = "0x4002C62")]
	[FieldOffset(Offset = "0xC8")]
	public MapEditorAddVariantPopup AddVariantPopup;

	[Token(Token = "0x4002C63")]
	[FieldOffset(Offset = "0xD0")]
	public MapEditorTexturePopup TexturePopup;

	[Token(Token = "0x4002C64")]
	[FieldOffset(Offset = "0xD8")]
	public MapEditorCameraPopup CameraPopup;

	[Token(Token = "0x4002C65")]
	[FieldOffset(Offset = "0xE0")]
	public MapEditorInfoPopup InfoPopup;

	[Token(Token = "0x4002C66")]
	[FieldOffset(Offset = "0xE8")]
	public MapEditorSettingsPopup SettingsPopup;

	[Token(Token = "0x4002C67")]
	[FieldOffset(Offset = "0xF0")]
	public MapEditorCustomLogicPopup CustomLogicPopup;

	[Token(Token = "0x4002C68")]
	[FieldOffset(Offset = "0xF8")]
	public MapEditorAddComponentPopup AddComponentPopup;

	[Token(Token = "0x4002C69")]
	[FieldOffset(Offset = "0x100")]
	public MapEditorMapObjectPickerPopup MapObjectPickerPopup;

	[Token(Token = "0x4002C6A")]
	[FieldOffset(Offset = "0x108")]
	public MapEditorErrorPopup ErrorPopup;

	[Token(Token = "0x4002C6B")]
	[FieldOffset(Offset = "0x110")]
	public MapEditorCustomAssetPopup CustomAssetsPopup;

	[Token(Token = "0x4002C6C")]
	[FieldOffset(Offset = "0x118")]
	public MapEditorWeatherPopup WeatherPopup;

	[Token(Token = "0x4002C6D")]
	[FieldOffset(Offset = "0x120")]
	public MapEditorVersionConversionPopup VersionConversionPopup;

	[Token(Token = "0x4002C6E")]
	[FieldOffset(Offset = "0x128")]
	public SceneGizmoRenderer OrientationGizmo;

	[Token(Token = "0x4002C6F")]
	[FieldOffset(Offset = "0x130")]
	public Image DragImage;

	[Token(Token = "0x4002C70")]
	[FieldOffset(Offset = "0x138")]
	public bool IsMouseUI;

	[Token(Token = "0x4002C71")]
	[FieldOffset(Offset = "0x139")]
	public bool IsInputFocused;

	[Token(Token = "0x4002C72")]
	[FieldOffset(Offset = "0x140")]
	public Action<string> TexturePopupTarget;

	[Token(Token = "0x600539F")]
	[Address(RVA = "0x5C958E0", Offset = "0x5C948E0", VA = "0x5C958E0", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x60053A0")]
	[Address(RVA = "0x5C95AC0", Offset = "0x5C94AC0", VA = "0x5C95AC0", Slot = "5")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x60053A1")]
	[Address(RVA = "0x5C96370", Offset = "0x5C95370", VA = "0x5C96370")]
	public void SetDrag(bool active, Vector2 start, Vector2 end)
	{
	}

	[Token(Token = "0x60053A2")]
	[Address(RVA = "0x5C96550", Offset = "0x5C95550", VA = "0x5C96550")]
	public void ShowInspector(MapObject obj)
	{
	}

	[Token(Token = "0x60053A3")]
	[Address(RVA = "0x5C96630", Offset = "0x5C95630", VA = "0x5C96630")]
	public void ShowInspector(List<MapObject> objs)
	{
	}

	[Token(Token = "0x60053A4")]
	[Address(RVA = "0x5C96940", Offset = "0x5C95940", VA = "0x5C96940")]
	public void RebuildInspectorPreservingScroll(List<MapObject> objs)
	{
	}

	[Token(Token = "0x60053A5")]
	[Address(RVA = "0x5C96710", Offset = "0x5C95710", VA = "0x5C96710")]
	public void HideInspector()
	{
	}

	[Token(Token = "0x60053A6")]
	[Address(RVA = "0x5C96A30", Offset = "0x5C95A30", VA = "0x5C96A30")]
	public void ShowBrushPanel()
	{
	}

	[Token(Token = "0x60053A7")]
	[Address(RVA = "0x5C96B20", Offset = "0x5C95B20", VA = "0x5C96B20")]
	public void HideBrushPanel()
	{
	}

	[Token(Token = "0x60053A8")]
	[Address(RVA = "0x5C96BD0", Offset = "0x5C95BD0", VA = "0x5C96BD0")]
	public void ShowRulerPanel()
	{
	}

	[Token(Token = "0x60053A9")]
	[Address(RVA = "0x5C96CE0", Offset = "0x5C95CE0", VA = "0x5C96CE0")]
	public void HideRulerPanel()
	{
	}

	[Token(Token = "0x60053AA")]
	[Address(RVA = "0x5C96D90", Offset = "0x5C95D90", VA = "0x5C96D90")]
	public void SyncRulerPanel()
	{
	}

	[Token(Token = "0x60053AB")]
	[Address(RVA = "0x5C98340", Offset = "0x5C97340", VA = "0x5C98340")]
	public void SyncBrushPanel()
	{
	}

	[Token(Token = "0x60053AC")]
	[Address(RVA = "0x5C983C0", Offset = "0x5C973C0", VA = "0x5C983C0")]
	public void SyncBrushPanelValues()
	{
	}

	[Token(Token = "0x60053AD")]
	[Address(RVA = "0x5C98440", Offset = "0x5C97440", VA = "0x5C98440")]
	public void SyncInspector()
	{
	}

	[Token(Token = "0x60053AE")]
	[Address(RVA = "0x5C984D0", Offset = "0x5C974D0", VA = "0x5C984D0")]
	public void ShowHierarchyPanel()
	{
	}

	[Token(Token = "0x60053AF")]
	[Address(RVA = "0x5C967B0", Offset = "0x5C957B0", VA = "0x5C967B0")]
	private void ApplyStretchAnchor(RectTransform rt, bool isLeft)
	{
	}

	[Token(Token = "0x60053B0")]
	[Address(RVA = "0x5C98770", Offset = "0x5C97770", VA = "0x5C98770")]
	public void SyncHierarchyPanel()
	{
	}

	[Token(Token = "0x60053B1")]
	[Address(RVA = "0x5C95AB0", Offset = "0x5C94AB0", VA = "0x5C95AB0")]
	public void RebuildPanels()
	{
	}

	[Token(Token = "0x60053B2")]
	[Address(RVA = "0x5C98790", Offset = "0x5C97790", VA = "0x5C98790")]
	public void ApplyHUDScale()
	{
	}

	[Token(Token = "0x60053B3")]
	[Address(RVA = "0x5C98900", Offset = "0x5C97900", VA = "0x5C98900")]
	public float GetMinMouseX()
	{
		return default(float);
	}

	[Token(Token = "0x60053B4")]
	[Address(RVA = "0x5C98980", Offset = "0x5C97980", VA = "0x5C98980")]
	public float GetMaxMouseX()
	{
		return default(float);
	}

	[Token(Token = "0x60053B5")]
	[Address(RVA = "0x5C98B60", Offset = "0x5C97B60", VA = "0x5C98B60")]
	public float GetMinMouseY()
	{
		return default(float);
	}

	[Token(Token = "0x60053B6")]
	[Address(RVA = "0x5C98B70", Offset = "0x5C97B70", VA = "0x5C98B70")]
	public float GetMaxMouseY()
	{
		return default(float);
	}

	[Token(Token = "0x60053B7")]
	[Address(RVA = "0x5C98C10", Offset = "0x5C97C10", VA = "0x5C98C10")]
	private void Update()
	{
	}

	[Token(Token = "0x60053B8")]
	[Address(RVA = "0x5C98F10", Offset = "0x5C97F10", VA = "0x5C98F10")]
	public void ToggleAddObjectPopup()
	{
	}

	[Token(Token = "0x60053B9")]
	[Address(RVA = "0x5C98FB0", Offset = "0x5C97FB0", VA = "0x5C98FB0")]
	public bool IsPopupActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60053BA")]
	[Address(RVA = "0x5C98DB0", Offset = "0x5C97DB0", VA = "0x5C98DB0")]
	private void UpdateMouseUI()
	{
	}

	[Token(Token = "0x60053BB")]
	[Address(RVA = "0x5C99410", Offset = "0x5C98410", VA = "0x5C99410")]
	public bool IsTouchUI(Vector3 position)
	{
		return default(bool);
	}

	[Token(Token = "0x60053BC")]
	[Address(RVA = "0x5C99500", Offset = "0x5C98500", VA = "0x5C99500")]
	public MapEditorMenu()
	{
	}
}
