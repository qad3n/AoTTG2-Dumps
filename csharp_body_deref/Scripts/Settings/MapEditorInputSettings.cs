// ==================== AoTTG2 cross-reference ====================
// Type: Settings.MapEditorInputSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/MapEditorInputSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/MapEditorInputSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000F6")]
internal class MapEditorInputSettings : SaveableSettingsContainer
{
	[Token(Token = "0x400059B")]
	[FieldOffset(Offset = "0x38")]
	public KeybindSetting Forward;

	[Token(Token = "0x400059C")]
	[FieldOffset(Offset = "0x40")]
	public KeybindSetting Back;

	[Token(Token = "0x400059D")]
	[FieldOffset(Offset = "0x48")]
	public KeybindSetting Left;

	[Token(Token = "0x400059E")]
	[FieldOffset(Offset = "0x50")]
	public KeybindSetting Right;

	[Token(Token = "0x400059F")]
	[FieldOffset(Offset = "0x58")]
	public KeybindSetting Up;

	[Token(Token = "0x40005A0")]
	[FieldOffset(Offset = "0x60")]
	public KeybindSetting Down;

	[Token(Token = "0x40005A1")]
	[FieldOffset(Offset = "0x68")]
	public KeybindSetting Slow;

	[Token(Token = "0x40005A2")]
	[FieldOffset(Offset = "0x70")]
	public KeybindSetting Fast;

	[Token(Token = "0x40005A3")]
	[FieldOffset(Offset = "0x78")]
	public KeybindSetting Pan;

	[Token(Token = "0x40005A4")]
	[FieldOffset(Offset = "0x80")]
	public KeybindSetting ZoomIn;

	[Token(Token = "0x40005A5")]
	[FieldOffset(Offset = "0x88")]
	public KeybindSetting ZoomOut;

	[Token(Token = "0x40005A6")]
	[FieldOffset(Offset = "0x90")]
	public KeybindSetting Select;

	[Token(Token = "0x40005A7")]
	[FieldOffset(Offset = "0x98")]
	public KeybindSetting Multiselect;

	[Token(Token = "0x40005A8")]
	[FieldOffset(Offset = "0xA0")]
	public KeybindSetting Deselect;

	[Token(Token = "0x40005A9")]
	[FieldOffset(Offset = "0xA8")]
	public KeybindSetting RotateCamera;

	[Token(Token = "0x40005AA")]
	[FieldOffset(Offset = "0xB0")]
	public KeybindSetting AddObject;

	[Token(Token = "0x40005AB")]
	[FieldOffset(Offset = "0xB8")]
	public KeybindSetting ChangeGizmo;

	[Token(Token = "0x40005AC")]
	[FieldOffset(Offset = "0xC0")]
	public KeybindSetting ToggleSnap;

	[Token(Token = "0x40005AD")]
	[FieldOffset(Offset = "0xC8")]
	public KeybindSetting Delete;

	[Token(Token = "0x40005AE")]
	[FieldOffset(Offset = "0xD0")]
	public KeybindSetting CopyObjects;

	[Token(Token = "0x40005AF")]
	[FieldOffset(Offset = "0xD8")]
	public KeybindSetting Paste;

	[Token(Token = "0x40005B0")]
	[FieldOffset(Offset = "0xE0")]
	public KeybindSetting Cut;

	[Token(Token = "0x40005B1")]
	[FieldOffset(Offset = "0xE8")]
	public KeybindSetting Undo;

	[Token(Token = "0x40005B2")]
	[FieldOffset(Offset = "0xF0")]
	public KeybindSetting Redo;

	[Token(Token = "0x40005B3")]
	[FieldOffset(Offset = "0xF8")]
	public KeybindSetting SaveMap;

	[Token(Token = "0x40005B4")]
	[FieldOffset(Offset = "0x100")]
	public KeybindSetting SnapCameraLeft;

	[Token(Token = "0x40005B5")]
	[FieldOffset(Offset = "0x108")]
	public KeybindSetting SnapCameraRight;

	[Token(Token = "0x40005B6")]
	[FieldOffset(Offset = "0x110")]
	public KeybindSetting SnapCameraUp;

	[Token(Token = "0x40005B7")]
	[FieldOffset(Offset = "0x118")]
	public KeybindSetting SnapCameraDown;

	[Token(Token = "0x40005B8")]
	[FieldOffset(Offset = "0x120")]
	public KeybindSetting ToggleOrthographic;

	[Token(Token = "0x40005B9")]
	[FieldOffset(Offset = "0x128")]
	public KeybindSetting VertexSnap;

	[Token(Token = "0x40005BA")]
	[FieldOffset(Offset = "0x130")]
	public KeybindSetting BrushReroll;

	[Token(Token = "0x40005BB")]
	[FieldOffset(Offset = "0x138")]
	public KeybindSetting BrushCount;

	[Token(Token = "0x40005BC")]
	[FieldOffset(Offset = "0x140")]
	public KeybindSetting BrushCurve;

	[Token(Token = "0x40005BD")]
	[FieldOffset(Offset = "0x148")]
	public KeybindSetting BrushCurveAxisX;

	[Token(Token = "0x40005BE")]
	[FieldOffset(Offset = "0x150")]
	public KeybindSetting BrushCurveAxisY;

	[Token(Token = "0x40005BF")]
	[FieldOffset(Offset = "0x158")]
	public KeybindSetting BrushCurveAxisZ;

	[Token(Token = "0x40005C0")]
	[FieldOffset(Offset = "0x160")]
	public KeybindSetting BrushCurveAxisNone;

	[Token(Token = "0x170000BD")]
	protected override string FileName
	{
		[Token(Token = "0x6000543")]
		[Address(RVA = "0x5A50F00", Offset = "0x5A4FF00", VA = "0x5A50F00", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000544")]
	[Address(RVA = "0x5A4F890", Offset = "0x5A4E890", VA = "0x5A4F890")]
	public MapEditorInputSettings()
	{
	}
}
