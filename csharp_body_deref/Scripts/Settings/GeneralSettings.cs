// ==================== AoTTG2 cross-reference ====================
// Type: Settings.GeneralSettings
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Settings/GeneralSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/GeneralSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x200008C")]
internal class GeneralSettings : SaveableSettingsContainer
{
	[Token(Token = "0x40002A0")]
	[FieldOffset(Offset = "0x38")]
	public StringSetting Language;

	[Token(Token = "0x40002A1")]
	[FieldOffset(Offset = "0x40")]
	public FloatSetting MouseSpeed;

	[Token(Token = "0x40002A2")]
	[FieldOffset(Offset = "0x48")]
	public FloatSetting CameraDistance;

	[Token(Token = "0x40002A3")]
	[FieldOffset(Offset = "0x50")]
	public FloatSetting CameraHeight;

	[Token(Token = "0x40002A4")]
	[FieldOffset(Offset = "0x58")]
	public FloatSetting CameraSide;

	[Token(Token = "0x40002A5")]
	[FieldOffset(Offset = "0x60")]
	public BoolSetting InvertMouse;

	[Token(Token = "0x40002A6")]
	[FieldOffset(Offset = "0x68")]
	public FloatSetting CameraTiltStrength;

	[Token(Token = "0x40002A7")]
	[FieldOffset(Offset = "0x70")]
	public BoolSetting SnapshotsEnabled;

	[Token(Token = "0x40002A8")]
	[FieldOffset(Offset = "0x78")]
	public BoolSetting SnapshotsShowInGame;

	[Token(Token = "0x40002A9")]
	[FieldOffset(Offset = "0x80")]
	public IntSetting SnapshotsMinimumDamage;

	[Token(Token = "0x40002AA")]
	[FieldOffset(Offset = "0x88")]
	public BoolSetting MinimapEnabled;

	[Token(Token = "0x40002AB")]
	[FieldOffset(Offset = "0x90")]
	public FloatSetting MinimapCameraHeight;

	[Token(Token = "0x40002AC")]
	[FieldOffset(Offset = "0x98")]
	public IntSetting CameraMode;

	[Token(Token = "0x40002AD")]
	[FieldOffset(Offset = "0xA0")]
	public BoolSetting OriginalCameraWOWRotation;

	[Token(Token = "0x40002AE")]
	[FieldOffset(Offset = "0xA8")]
	public BoolSetting SkipCutscenes;

	[Token(Token = "0x40002AF")]
	[FieldOffset(Offset = "0xB0")]
	public BoolSetting CameraClipping;

	[Token(Token = "0x40002B0")]
	[FieldOffset(Offset = "0xB8")]
	public FloatSetting FOVMin;

	[Token(Token = "0x40002B1")]
	[FieldOffset(Offset = "0xC0")]
	public FloatSetting FOVMax;

	[Token(Token = "0x40002B2")]
	[FieldOffset(Offset = "0xC8")]
	public FloatSetting FPSFOVMin;

	[Token(Token = "0x40002B3")]
	[FieldOffset(Offset = "0xD0")]
	public FloatSetting FPSFOVMax;

	[Token(Token = "0x40002B4")]
	[FieldOffset(Offset = "0xD8")]
	public FloatSetting OriginalCameraDeadzone;

	[Token(Token = "0x40002B5")]
	[FieldOffset(Offset = "0xE0")]
	public FloatSetting OriginalCameraSpeed;

	[Token(Token = "0x17000093")]
	protected override string FileName
	{
		[Token(Token = "0x6000394")]
		[Address(RVA = "0x1F14210", Offset = "0x1F12810", VA = "0x181F14210", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x1F13840", Offset = "0x1F11E40", VA = "0x181F13840", Slot = "12")]
	public override void Apply()
	{
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x1F13900", Offset = "0x1F11F00", VA = "0x181F13900", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x6000397")]
	[Address(RVA = "0x1F13A60", Offset = "0x1F12060", VA = "0x181F13A60")]
	public GeneralSettings()
	{
	}
}
