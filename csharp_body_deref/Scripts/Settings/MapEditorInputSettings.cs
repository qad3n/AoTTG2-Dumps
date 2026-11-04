// ==================== AoTTG2 cross-reference ====================
// Type: Settings.MapEditorInputSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/MapEditorInputSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/MapEditorInputSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000BE")]
internal class MapEditorInputSettings : SaveableSettingsContainer
{
	[Token(Token = "0x4000465")]
	[FieldOffset(Offset = "0x38")]
	public KeybindSetting Forward;

	[Token(Token = "0x4000466")]
	[FieldOffset(Offset = "0x40")]
	public KeybindSetting Back;

	[Token(Token = "0x4000467")]
	[FieldOffset(Offset = "0x48")]
	public KeybindSetting Left;

	[Token(Token = "0x4000468")]
	[FieldOffset(Offset = "0x50")]
	public KeybindSetting Right;

	[Token(Token = "0x4000469")]
	[FieldOffset(Offset = "0x58")]
	public KeybindSetting Up;

	[Token(Token = "0x400046A")]
	[FieldOffset(Offset = "0x60")]
	public KeybindSetting Down;

	[Token(Token = "0x400046B")]
	[FieldOffset(Offset = "0x68")]
	public KeybindSetting Slow;

	[Token(Token = "0x400046C")]
	[FieldOffset(Offset = "0x70")]
	public KeybindSetting Fast;

	[Token(Token = "0x400046D")]
	[FieldOffset(Offset = "0x78")]
	public KeybindSetting Pan;

	[Token(Token = "0x400046E")]
	[FieldOffset(Offset = "0x80")]
	public KeybindSetting ZoomIn;

	[Token(Token = "0x400046F")]
	[FieldOffset(Offset = "0x88")]
	public KeybindSetting ZoomOut;

	[Token(Token = "0x4000470")]
	[FieldOffset(Offset = "0x90")]
	public KeybindSetting Select;

	[Token(Token = "0x4000471")]
	[FieldOffset(Offset = "0x98")]
	public KeybindSetting Multiselect;

	[Token(Token = "0x4000472")]
	[FieldOffset(Offset = "0xA0")]
	public KeybindSetting Deselect;

	[Token(Token = "0x4000473")]
	[FieldOffset(Offset = "0xA8")]
	public KeybindSetting RotateCamera;

	[Token(Token = "0x4000474")]
	[FieldOffset(Offset = "0xB0")]
	public KeybindSetting AddObject;

	[Token(Token = "0x4000475")]
	[FieldOffset(Offset = "0xB8")]
	public KeybindSetting ChangeGizmo;

	[Token(Token = "0x4000476")]
	[FieldOffset(Offset = "0xC0")]
	public KeybindSetting ToggleSnap;

	[Token(Token = "0x4000477")]
	[FieldOffset(Offset = "0xC8")]
	public KeybindSetting Delete;

	[Token(Token = "0x4000478")]
	[FieldOffset(Offset = "0xD0")]
	public KeybindSetting CopyObjects;

	[Token(Token = "0x4000479")]
	[FieldOffset(Offset = "0xD8")]
	public KeybindSetting Paste;

	[Token(Token = "0x400047A")]
	[FieldOffset(Offset = "0xE0")]
	public KeybindSetting Cut;

	[Token(Token = "0x400047B")]
	[FieldOffset(Offset = "0xE8")]
	public KeybindSetting Undo;

	[Token(Token = "0x400047C")]
	[FieldOffset(Offset = "0xF0")]
	public KeybindSetting Redo;

	[Token(Token = "0x400047D")]
	[FieldOffset(Offset = "0xF8")]
	public KeybindSetting SaveMap;

	[Token(Token = "0x400047E")]
	[FieldOffset(Offset = "0x100")]
	public KeybindSetting SnapCameraLeft;

	[Token(Token = "0x400047F")]
	[FieldOffset(Offset = "0x108")]
	public KeybindSetting SnapCameraRight;

	[Token(Token = "0x4000480")]
	[FieldOffset(Offset = "0x110")]
	public KeybindSetting SnapCameraUp;

	[Token(Token = "0x4000481")]
	[FieldOffset(Offset = "0x118")]
	public KeybindSetting SnapCameraDown;

	[Token(Token = "0x4000482")]
	[FieldOffset(Offset = "0x120")]
	public KeybindSetting ToggleOrthographic;

	[Token(Token = "0x4000483")]
	[FieldOffset(Offset = "0x128")]
	public KeybindSetting VertexSnap;

	[Token(Token = "0x4000484")]
	[FieldOffset(Offset = "0x130")]
	public KeybindSetting BrushReroll;

	[Token(Token = "0x4000485")]
	[FieldOffset(Offset = "0x138")]
	public KeybindSetting BrushCount;

	[Token(Token = "0x4000486")]
	[FieldOffset(Offset = "0x140")]
	public KeybindSetting BrushCurve;

	[Token(Token = "0x4000487")]
	[FieldOffset(Offset = "0x148")]
	public KeybindSetting BrushCurveAxisX;

	[Token(Token = "0x4000488")]
	[FieldOffset(Offset = "0x150")]
	public KeybindSetting BrushCurveAxisY;

	[Token(Token = "0x4000489")]
	[FieldOffset(Offset = "0x158")]
	public KeybindSetting BrushCurveAxisZ;

	[Token(Token = "0x400048A")]
	[FieldOffset(Offset = "0x160")]
	public KeybindSetting BrushCurveAxisNone;

	[Token(Token = "0x170000A0")]
	protected override string FileName
	{
		[Token(Token = "0x60003CD")]
		[Address(RVA = "0x1F21350", Offset = "0x1F1F950", VA = "0x181F21350", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x1F1FCA0", Offset = "0x1F1E2A0", VA = "0x181F1FCA0")]
	public MapEditorInputSettings()
	{
	}
}
