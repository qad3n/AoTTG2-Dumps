using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Map;
using RuntimeSceneGizmo;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000686")]
internal class MapEditorMenu : BaseMenu
{
	[Token(Token = "0x4001FE9")]
	[FieldOffset(Offset = "0x98")]
	public MapEditorInspectPanel InspectPanel;

	[Token(Token = "0x4001FEA")]
	[FieldOffset(Offset = "0xA0")]
	public MapEditorBrushPanel BrushPanel;

	[Token(Token = "0x4001FEB")]
	[FieldOffset(Offset = "0xA8")]
	public MapEditorHierarchyPanel HierarchyPanel;

	[Token(Token = "0x4001FEC")]
	[FieldOffset(Offset = "0xB0")]
	public MapEditorTopPanel _topPanel;

	[Token(Token = "0x4001FED")]
	[FieldOffset(Offset = "0xB8")]
	public MapEditorAddObjectPopup AddObjectPopup;

	[Token(Token = "0x4001FEE")]
	[FieldOffset(Offset = "0xC0")]
	public MapEditorAddVariantPopup AddVariantPopup;

	[Token(Token = "0x4001FEF")]
	[FieldOffset(Offset = "0xC8")]
	public MapEditorTexturePopup TexturePopup;

	[Token(Token = "0x4001FF0")]
	[FieldOffset(Offset = "0xD0")]
	public MapEditorCameraPopup CameraPopup;

	[Token(Token = "0x4001FF1")]
	[FieldOffset(Offset = "0xD8")]
	public MapEditorInfoPopup InfoPopup;

	[Token(Token = "0x4001FF2")]
	[FieldOffset(Offset = "0xE0")]
	public MapEditorSettingsPopup SettingsPopup;

	[Token(Token = "0x4001FF3")]
	[FieldOffset(Offset = "0xE8")]
	public MapEditorCustomLogicPopup CustomLogicPopup;

	[Token(Token = "0x4001FF4")]
	[FieldOffset(Offset = "0xF0")]
	public MapEditorAddComponentPopup AddComponentPopup;

	[Token(Token = "0x4001FF5")]
	[FieldOffset(Offset = "0xF8")]
	public MapEditorErrorPopup ErrorPopup;

	[Token(Token = "0x4001FF6")]
	[FieldOffset(Offset = "0x100")]
	public MapEditorCustomAssetPopup CustomAssetsPopup;

	[Token(Token = "0x4001FF7")]
	[FieldOffset(Offset = "0x108")]
	public MapEditorWeatherPopup WeatherPopup;

	[Token(Token = "0x4001FF8")]
	[FieldOffset(Offset = "0x110")]
	public SceneGizmoRenderer OrientationGizmo;

	[Token(Token = "0x4001FF9")]
	[FieldOffset(Offset = "0x118")]
	public Image DragImage;

	[Token(Token = "0x4001FFA")]
	[FieldOffset(Offset = "0x120")]
	public bool IsMouseUI;

	[Token(Token = "0x4001FFB")]
	[FieldOffset(Offset = "0x121")]
	public bool IsInputFocused;

	[Token(Token = "0x4001FFC")]
	[FieldOffset(Offset = "0x128")]
	public Action<string> TexturePopupTarget;

	[Token(Token = "0x60041C2")]
	[Address(RVA = "0x4021170", Offset = "0x4021170", VA = "0x4021170", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x60041C3")]
	[Address(RVA = "0x4021310", Offset = "0x4021310", VA = "0x4021310", Slot = "5")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x60041C4")]
	[Address(RVA = "0x4021B00", Offset = "0x4021B00", VA = "0x4021B00")]
	public void SetDrag(bool active, Vector2 start, Vector2 end)
	{
	}

	[Token(Token = "0x60041C5")]
	[Address(RVA = "0x4021CC0", Offset = "0x4021CC0", VA = "0x4021CC0")]
	public void ShowInspector(MapObject obj)
	{
	}

	[Token(Token = "0x60041C6")]
	[Address(RVA = "0x4020360", Offset = "0x4020360", VA = "0x4020360")]
	public void ShowInspector(List<MapObject> objs)
	{
	}

	[Token(Token = "0x60041C7")]
	[Address(RVA = "0x4021DA0", Offset = "0x4021DA0", VA = "0x4021DA0")]
	public void HideInspector()
	{
	}

	[Token(Token = "0x60041C8")]
	[Address(RVA = "0x4021E40", Offset = "0x4021E40", VA = "0x4021E40")]
	public void ShowBrushPanel()
	{
	}

	[Token(Token = "0x60041C9")]
	[Address(RVA = "0x4021F30", Offset = "0x4021F30", VA = "0x4021F30")]
	public void HideBrushPanel()
	{
	}

	[Token(Token = "0x60041CA")]
	[Address(RVA = "0x4021FE0", Offset = "0x4021FE0", VA = "0x4021FE0")]
	public void SyncBrushPanel()
	{
	}

	[Token(Token = "0x60041CB")]
	[Address(RVA = "0x4022060", Offset = "0x4022060", VA = "0x4022060")]
	public void SyncBrushPanelValues()
	{
	}

	[Token(Token = "0x60041CC")]
	[Address(RVA = "0x40220E0", Offset = "0x40220E0", VA = "0x40220E0")]
	public void SyncInspector()
	{
	}

	[Token(Token = "0x60041CD")]
	[Address(RVA = "0x4022170", Offset = "0x4022170", VA = "0x4022170")]
	public void ShowHierarchyPanel()
	{
	}

	[Token(Token = "0x60041CE")]
	[Address(RVA = "0x4020430", Offset = "0x4020430", VA = "0x4020430")]
	public void SyncHierarchyPanel()
	{
	}

	[Token(Token = "0x60041CF")]
	[Address(RVA = "0x4021300", Offset = "0x4021300", VA = "0x4021300")]
	public void RebuildPanels()
	{
	}

	[Token(Token = "0x60041D0")]
	[Address(RVA = "0x4022290", Offset = "0x4022290", VA = "0x4022290")]
	public float GetMinMouseX()
	{
		return default(float);
	}

	[Token(Token = "0x60041D1")]
	[Address(RVA = "0x4022310", Offset = "0x4022310", VA = "0x4022310")]
	public float GetMaxMouseX()
	{
		return default(float);
	}

	[Token(Token = "0x60041D2")]
	[Address(RVA = "0x4022470", Offset = "0x4022470", VA = "0x4022470")]
	public float GetMinMouseY()
	{
		return default(float);
	}

	[Token(Token = "0x60041D3")]
	[Address(RVA = "0x4022480", Offset = "0x4022480", VA = "0x4022480")]
	public float GetMaxMouseY()
	{
		return default(float);
	}

	[Token(Token = "0x60041D4")]
	[Address(RVA = "0x40224A0", Offset = "0x40224A0", VA = "0x40224A0")]
	private void Update()
	{
	}

	[Token(Token = "0x60041D5")]
	[Address(RVA = "0x4014460", Offset = "0x4014460", VA = "0x4014460")]
	public bool IsPopupActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60041D6")]
	[Address(RVA = "0x4022540", Offset = "0x4022540", VA = "0x4022540")]
	private void UpdateMouseUI()
	{
	}

	[Token(Token = "0x60041D7")]
	[Address(RVA = "0x4022870", Offset = "0x4022870", VA = "0x4022870")]
	public MapEditorMenu()
	{
	}
}
