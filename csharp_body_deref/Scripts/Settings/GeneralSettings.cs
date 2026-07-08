using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000070")]
internal class GeneralSettings : SaveableSettingsContainer
{
	[Token(Token = "0x400023A")]
	[FieldOffset(Offset = "0x20")]
	public StringSetting Language;

	[Token(Token = "0x400023B")]
	[FieldOffset(Offset = "0x28")]
	public FloatSetting MouseSpeed;

	[Token(Token = "0x400023C")]
	[FieldOffset(Offset = "0x30")]
	public FloatSetting CameraDistance;

	[Token(Token = "0x400023D")]
	[FieldOffset(Offset = "0x38")]
	public FloatSetting CameraHeight;

	[Token(Token = "0x400023E")]
	[FieldOffset(Offset = "0x40")]
	public FloatSetting CameraSide;

	[Token(Token = "0x400023F")]
	[FieldOffset(Offset = "0x48")]
	public BoolSetting InvertMouse;

	[Token(Token = "0x4000240")]
	[FieldOffset(Offset = "0x50")]
	public BoolSetting CameraTilt;

	[Token(Token = "0x4000241")]
	[FieldOffset(Offset = "0x58")]
	public BoolSetting SnapshotsEnabled;

	[Token(Token = "0x4000242")]
	[FieldOffset(Offset = "0x60")]
	public BoolSetting SnapshotsShowInGame;

	[Token(Token = "0x4000243")]
	[FieldOffset(Offset = "0x68")]
	public IntSetting SnapshotsMinimumDamage;

	[Token(Token = "0x4000244")]
	[FieldOffset(Offset = "0x70")]
	public BoolSetting MinimapEnabled;

	[Token(Token = "0x4000245")]
	[FieldOffset(Offset = "0x78")]
	public FloatSetting MinimapCameraHeight;

	[Token(Token = "0x4000246")]
	[FieldOffset(Offset = "0x80")]
	public IntSetting CameraMode;

	[Token(Token = "0x4000247")]
	[FieldOffset(Offset = "0x88")]
	public BoolSetting SkipCutscenes;

	[Token(Token = "0x4000248")]
	[FieldOffset(Offset = "0x90")]
	public BoolSetting CameraClipping;

	[Token(Token = "0x4000249")]
	[FieldOffset(Offset = "0x98")]
	public FloatSetting FOVMin;

	[Token(Token = "0x400024A")]
	[FieldOffset(Offset = "0xA0")]
	public FloatSetting FOVMax;

	[Token(Token = "0x400024B")]
	[FieldOffset(Offset = "0xA8")]
	public FloatSetting FPSFOVMin;

	[Token(Token = "0x400024C")]
	[FieldOffset(Offset = "0xB0")]
	public FloatSetting FPSFOVMax;

	[Token(Token = "0x400024D")]
	[FieldOffset(Offset = "0xB8")]
	public FloatSetting OriginalCameraDeadzone;

	[Token(Token = "0x400024E")]
	[FieldOffset(Offset = "0xC0")]
	public FloatSetting OriginalCameraSpeed;

	[Token(Token = "0x17000087")]
	protected override string FileName
	{
		[Token(Token = "0x6000315")]
		[Address(RVA = "0x3C91500", Offset = "0x3C91500", VA = "0x3C91500", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x3C91530", Offset = "0x3C91530", VA = "0x3C91530", Slot = "11")]
	public override void Apply()
	{
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x3C915B0", Offset = "0x3C915B0", VA = "0x3C915B0")]
	public GeneralSettings()
	{
	}
}
