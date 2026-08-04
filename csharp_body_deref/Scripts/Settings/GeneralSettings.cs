// ==================== AoTTG2 cross-reference ====================
// Type: Settings.GeneralSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/GeneralSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/GeneralSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000071")]
internal class GeneralSettings : SaveableSettingsContainer
{
	[Token(Token = "0x400023F")]
	[FieldOffset(Offset = "0x20")]
	public StringSetting Language;

	[Token(Token = "0x4000240")]
	[FieldOffset(Offset = "0x28")]
	public FloatSetting MouseSpeed;

	[Token(Token = "0x4000241")]
	[FieldOffset(Offset = "0x30")]
	public FloatSetting CameraDistance;

	[Token(Token = "0x4000242")]
	[FieldOffset(Offset = "0x38")]
	public FloatSetting CameraHeight;

	[Token(Token = "0x4000243")]
	[FieldOffset(Offset = "0x40")]
	public FloatSetting CameraSide;

	[Token(Token = "0x4000244")]
	[FieldOffset(Offset = "0x48")]
	public BoolSetting InvertMouse;

	[Token(Token = "0x4000245")]
	[FieldOffset(Offset = "0x50")]
	public BoolSetting CameraTilt;

	[Token(Token = "0x4000246")]
	[FieldOffset(Offset = "0x58")]
	public BoolSetting SnapshotsEnabled;

	[Token(Token = "0x4000247")]
	[FieldOffset(Offset = "0x60")]
	public BoolSetting SnapshotsShowInGame;

	[Token(Token = "0x4000248")]
	[FieldOffset(Offset = "0x68")]
	public IntSetting SnapshotsMinimumDamage;

	[Token(Token = "0x4000249")]
	[FieldOffset(Offset = "0x70")]
	public BoolSetting MinimapEnabled;

	[Token(Token = "0x400024A")]
	[FieldOffset(Offset = "0x78")]
	public FloatSetting MinimapCameraHeight;

	[Token(Token = "0x400024B")]
	[FieldOffset(Offset = "0x80")]
	public IntSetting CameraMode;

	[Token(Token = "0x400024C")]
	[FieldOffset(Offset = "0x88")]
	public BoolSetting SkipCutscenes;

	[Token(Token = "0x400024D")]
	[FieldOffset(Offset = "0x90")]
	public BoolSetting CameraClipping;

	[Token(Token = "0x400024E")]
	[FieldOffset(Offset = "0x98")]
	public FloatSetting FOVMin;

	[Token(Token = "0x400024F")]
	[FieldOffset(Offset = "0xA0")]
	public FloatSetting FOVMax;

	[Token(Token = "0x4000250")]
	[FieldOffset(Offset = "0xA8")]
	public FloatSetting FPSFOVMin;

	[Token(Token = "0x4000251")]
	[FieldOffset(Offset = "0xB0")]
	public FloatSetting FPSFOVMax;

	[Token(Token = "0x4000252")]
	[FieldOffset(Offset = "0xB8")]
	public FloatSetting OriginalCameraDeadzone;

	[Token(Token = "0x4000253")]
	[FieldOffset(Offset = "0xC0")]
	public FloatSetting OriginalCameraSpeed;

	[Token(Token = "0x17000089")]
	protected override string FileName
	{
		[Token(Token = "0x600031B")]
		[Address(RVA = "0x3F872D0", Offset = "0x3F872D0", VA = "0x3F872D0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x3F87300", Offset = "0x3F87300", VA = "0x3F87300", Slot = "11")]
	public override void Apply()
	{
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x3F87380", Offset = "0x3F87380", VA = "0x3F87380")]
	public GeneralSettings()
	{
	}
}
