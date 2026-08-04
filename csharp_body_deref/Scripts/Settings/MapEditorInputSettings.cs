// ==================== AoTTG2 cross-reference ====================
// Type: Settings.MapEditorInputSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/MapEditorInputSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/MapEditorInputSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000A0")]
internal class MapEditorInputSettings : SaveableSettingsContainer
{
	[Token(Token = "0x40003DF")]
	[FieldOffset(Offset = "0x20")]
	public KeybindSetting Forward;

	[Token(Token = "0x40003E0")]
	[FieldOffset(Offset = "0x28")]
	public KeybindSetting Back;

	[Token(Token = "0x40003E1")]
	[FieldOffset(Offset = "0x30")]
	public KeybindSetting Left;

	[Token(Token = "0x40003E2")]
	[FieldOffset(Offset = "0x38")]
	public KeybindSetting Right;

	[Token(Token = "0x40003E3")]
	[FieldOffset(Offset = "0x40")]
	public KeybindSetting Up;

	[Token(Token = "0x40003E4")]
	[FieldOffset(Offset = "0x48")]
	public KeybindSetting Down;

	[Token(Token = "0x40003E5")]
	[FieldOffset(Offset = "0x50")]
	public KeybindSetting Slow;

	[Token(Token = "0x40003E6")]
	[FieldOffset(Offset = "0x58")]
	public KeybindSetting Fast;

	[Token(Token = "0x40003E7")]
	[FieldOffset(Offset = "0x60")]
	public KeybindSetting Pan;

	[Token(Token = "0x40003E8")]
	[FieldOffset(Offset = "0x68")]
	public KeybindSetting ZoomIn;

	[Token(Token = "0x40003E9")]
	[FieldOffset(Offset = "0x70")]
	public KeybindSetting ZoomOut;

	[Token(Token = "0x40003EA")]
	[FieldOffset(Offset = "0x78")]
	public KeybindSetting Select;

	[Token(Token = "0x40003EB")]
	[FieldOffset(Offset = "0x80")]
	public KeybindSetting Multiselect;

	[Token(Token = "0x40003EC")]
	[FieldOffset(Offset = "0x88")]
	public KeybindSetting Deselect;

	[Token(Token = "0x40003ED")]
	[FieldOffset(Offset = "0x90")]
	public KeybindSetting RotateCamera;

	[Token(Token = "0x40003EE")]
	[FieldOffset(Offset = "0x98")]
	public KeybindSetting AddObject;

	[Token(Token = "0x40003EF")]
	[FieldOffset(Offset = "0xA0")]
	public KeybindSetting ChangeGizmo;

	[Token(Token = "0x40003F0")]
	[FieldOffset(Offset = "0xA8")]
	public KeybindSetting ToggleSnap;

	[Token(Token = "0x40003F1")]
	[FieldOffset(Offset = "0xB0")]
	public KeybindSetting Delete;

	[Token(Token = "0x40003F2")]
	[FieldOffset(Offset = "0xB8")]
	public KeybindSetting CopyObjects;

	[Token(Token = "0x40003F3")]
	[FieldOffset(Offset = "0xC0")]
	public KeybindSetting Paste;

	[Token(Token = "0x40003F4")]
	[FieldOffset(Offset = "0xC8")]
	public KeybindSetting Cut;

	[Token(Token = "0x40003F5")]
	[FieldOffset(Offset = "0xD0")]
	public KeybindSetting Undo;

	[Token(Token = "0x40003F6")]
	[FieldOffset(Offset = "0xD8")]
	public KeybindSetting Redo;

	[Token(Token = "0x40003F7")]
	[FieldOffset(Offset = "0xE0")]
	public KeybindSetting SaveMap;

	[Token(Token = "0x40003F8")]
	[FieldOffset(Offset = "0xE8")]
	public KeybindSetting SnapCameraLeft;

	[Token(Token = "0x40003F9")]
	[FieldOffset(Offset = "0xF0")]
	public KeybindSetting SnapCameraRight;

	[Token(Token = "0x40003FA")]
	[FieldOffset(Offset = "0xF8")]
	public KeybindSetting SnapCameraUp;

	[Token(Token = "0x40003FB")]
	[FieldOffset(Offset = "0x100")]
	public KeybindSetting SnapCameraDown;

	[Token(Token = "0x40003FC")]
	[FieldOffset(Offset = "0x108")]
	public KeybindSetting ToggleOrthographic;

	[Token(Token = "0x40003FD")]
	[FieldOffset(Offset = "0x110")]
	public KeybindSetting VertexSnap;

	[Token(Token = "0x40003FE")]
	[FieldOffset(Offset = "0x118")]
	public KeybindSetting BrushReroll;

	[Token(Token = "0x40003FF")]
	[FieldOffset(Offset = "0x120")]
	public KeybindSetting BrushCount;

	[Token(Token = "0x4000400")]
	[FieldOffset(Offset = "0x128")]
	public KeybindSetting BrushCurve;

	[Token(Token = "0x4000401")]
	[FieldOffset(Offset = "0x130")]
	public KeybindSetting BrushCurveAxisX;

	[Token(Token = "0x4000402")]
	[FieldOffset(Offset = "0x138")]
	public KeybindSetting BrushCurveAxisY;

	[Token(Token = "0x4000403")]
	[FieldOffset(Offset = "0x140")]
	public KeybindSetting BrushCurveAxisZ;

	[Token(Token = "0x4000404")]
	[FieldOffset(Offset = "0x148")]
	public KeybindSetting BrushCurveAxisNone;

	[Token(Token = "0x17000095")]
	protected override string FileName
	{
		[Token(Token = "0x6000346")]
		[Address(RVA = "0x40F6E00", Offset = "0x40F6E00", VA = "0x40F6E00", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000347")]
	[Address(RVA = "0x40F5810", Offset = "0x40F5810", VA = "0x40F5810")]
	public MapEditorInputSettings()
	{
	}
}
