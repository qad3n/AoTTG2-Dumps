// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorMenu
// Update status: unchanged since the previous dump
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

[Token(Token = "0x20006D4")]
internal class MapEditorMenu : BaseMenu
{
	[Token(Token = "0x4002146")]
	[FieldOffset(Offset = "0x98")]
	public MapEditorInspectPanel InspectPanel;

	[Token(Token = "0x4002147")]
	[FieldOffset(Offset = "0xA0")]
	public MapEditorBrushPanel BrushPanel;

	[Token(Token = "0x4002148")]
	[FieldOffset(Offset = "0xA8")]
	public MapEditorHierarchyPanel HierarchyPanel;

	[Token(Token = "0x4002149")]
	[FieldOffset(Offset = "0xB0")]
	public MapEditorTopPanel _topPanel;

	[Token(Token = "0x400214A")]
	[FieldOffset(Offset = "0xB8")]
	public MapEditorAddObjectPopup AddObjectPopup;

	[Token(Token = "0x400214B")]
	[FieldOffset(Offset = "0xC0")]
	public MapEditorAddVariantPopup AddVariantPopup;

	[Token(Token = "0x400214C")]
	[FieldOffset(Offset = "0xC8")]
	public MapEditorTexturePopup TexturePopup;

	[Token(Token = "0x400214D")]
	[FieldOffset(Offset = "0xD0")]
	public MapEditorCameraPopup CameraPopup;

	[Token(Token = "0x400214E")]
	[FieldOffset(Offset = "0xD8")]
	public MapEditorInfoPopup InfoPopup;

	[Token(Token = "0x400214F")]
	[FieldOffset(Offset = "0xE0")]
	public MapEditorSettingsPopup SettingsPopup;

	[Token(Token = "0x4002150")]
	[FieldOffset(Offset = "0xE8")]
	public MapEditorCustomLogicPopup CustomLogicPopup;

	[Token(Token = "0x4002151")]
	[FieldOffset(Offset = "0xF0")]
	public MapEditorAddComponentPopup AddComponentPopup;

	[Token(Token = "0x4002152")]
	[FieldOffset(Offset = "0xF8")]
	public MapEditorErrorPopup ErrorPopup;

	[Token(Token = "0x4002153")]
	[FieldOffset(Offset = "0x100")]
	public MapEditorCustomAssetPopup CustomAssetsPopup;

	[Token(Token = "0x4002154")]
	[FieldOffset(Offset = "0x108")]
	public MapEditorWeatherPopup WeatherPopup;

	[Token(Token = "0x4002155")]
	[FieldOffset(Offset = "0x110")]
	public SceneGizmoRenderer OrientationGizmo;

	[Token(Token = "0x4002156")]
	[FieldOffset(Offset = "0x118")]
	public Image DragImage;

	[Token(Token = "0x4002157")]
	[FieldOffset(Offset = "0x120")]
	public bool IsMouseUI;

	[Token(Token = "0x4002158")]
	[FieldOffset(Offset = "0x121")]
	public bool IsInputFocused;

	[Token(Token = "0x4002159")]
	[FieldOffset(Offset = "0x128")]
	public Action<string> TexturePopupTarget;

	[Token(Token = "0x6004429")]
	[Address(RVA = "0x4336540", Offset = "0x4336540", VA = "0x4336540", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x600442A")]
	[Address(RVA = "0x43366E0", Offset = "0x43366E0", VA = "0x43366E0", Slot = "5")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x600442B")]
	[Address(RVA = "0x4336ED0", Offset = "0x4336ED0", VA = "0x4336ED0")]
	public void SetDrag(bool active, Vector2 start, Vector2 end)
	{
	}

	[Token(Token = "0x600442C")]
	[Address(RVA = "0x4337090", Offset = "0x4337090", VA = "0x4337090")]
	public void ShowInspector(MapObject obj)
	{
	}

	[Token(Token = "0x600442D")]
	[Address(RVA = "0x4335270", Offset = "0x4335270", VA = "0x4335270")]
	public void ShowInspector(List<MapObject> objs)
	{
	}

	[Token(Token = "0x600442E")]
	[Address(RVA = "0x4337170", Offset = "0x4337170", VA = "0x4337170")]
	public void HideInspector()
	{
	}

	[Token(Token = "0x600442F")]
	[Address(RVA = "0x4337210", Offset = "0x4337210", VA = "0x4337210")]
	public void ShowBrushPanel()
	{
	}

	[Token(Token = "0x6004430")]
	[Address(RVA = "0x4337300", Offset = "0x4337300", VA = "0x4337300")]
	public void HideBrushPanel()
	{
	}

	[Token(Token = "0x6004431")]
	[Address(RVA = "0x43373B0", Offset = "0x43373B0", VA = "0x43373B0")]
	public void SyncBrushPanel()
	{
	}

	[Token(Token = "0x6004432")]
	[Address(RVA = "0x4337430", Offset = "0x4337430", VA = "0x4337430")]
	public void SyncBrushPanelValues()
	{
	}

	[Token(Token = "0x6004433")]
	[Address(RVA = "0x43374B0", Offset = "0x43374B0", VA = "0x43374B0")]
	public void SyncInspector()
	{
	}

	[Token(Token = "0x6004434")]
	[Address(RVA = "0x4337540", Offset = "0x4337540", VA = "0x4337540")]
	public void ShowHierarchyPanel()
	{
	}

	[Token(Token = "0x6004435")]
	[Address(RVA = "0x4335340", Offset = "0x4335340", VA = "0x4335340")]
	public void SyncHierarchyPanel()
	{
	}

	[Token(Token = "0x6004436")]
	[Address(RVA = "0x43366D0", Offset = "0x43366D0", VA = "0x43366D0")]
	public void RebuildPanels()
	{
	}

	[Token(Token = "0x6004437")]
	[Address(RVA = "0x4337660", Offset = "0x4337660", VA = "0x4337660")]
	public float GetMinMouseX()
	{
		return default(float);
	}

	[Token(Token = "0x6004438")]
	[Address(RVA = "0x43376E0", Offset = "0x43376E0", VA = "0x43376E0")]
	public float GetMaxMouseX()
	{
		return default(float);
	}

	[Token(Token = "0x6004439")]
	[Address(RVA = "0x4337840", Offset = "0x4337840", VA = "0x4337840")]
	public float GetMinMouseY()
	{
		return default(float);
	}

	[Token(Token = "0x600443A")]
	[Address(RVA = "0x4337850", Offset = "0x4337850", VA = "0x4337850")]
	public float GetMaxMouseY()
	{
		return default(float);
	}

	[Token(Token = "0x600443B")]
	[Address(RVA = "0x4337870", Offset = "0x4337870", VA = "0x4337870")]
	private void Update()
	{
	}

	[Token(Token = "0x600443C")]
	[Address(RVA = "0x4328930", Offset = "0x4328930", VA = "0x4328930")]
	public bool IsPopupActive()
	{
		return default(bool);
	}

	[Token(Token = "0x600443D")]
	[Address(RVA = "0x4337910", Offset = "0x4337910", VA = "0x4337910")]
	private void UpdateMouseUI()
	{
	}

	[Token(Token = "0x600443E")]
	[Address(RVA = "0x4337C40", Offset = "0x4337C40", VA = "0x4337C40")]
	public MapEditorMenu()
	{
	}
}
