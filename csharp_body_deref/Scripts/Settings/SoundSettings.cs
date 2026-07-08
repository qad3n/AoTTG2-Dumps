using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000C6")]
internal class SoundSettings : SaveableSettingsContainer
{
	[Token(Token = "0x40004A4")]
	[FieldOffset(Offset = "0x20")]
	public FloatSetting Volume;

	[Token(Token = "0x40004A5")]
	[FieldOffset(Offset = "0x28")]
	public FloatSetting Music;

	[Token(Token = "0x40004A6")]
	[FieldOffset(Offset = "0x30")]
	public BoolSetting MuteMinimized;

	[Token(Token = "0x40004A7")]
	[FieldOffset(Offset = "0x38")]
	public BoolSetting TitanGrabMusic;

	[Token(Token = "0x40004A8")]
	[FieldOffset(Offset = "0x40")]
	public BoolSetting TitanVocalEffect;

	[Token(Token = "0x40004A9")]
	[FieldOffset(Offset = "0x48")]
	public BoolSetting GasEffect;

	[Token(Token = "0x40004AA")]
	[FieldOffset(Offset = "0x50")]
	public BoolSetting ReelInEffect;

	[Token(Token = "0x40004AB")]
	[FieldOffset(Offset = "0x58")]
	public BoolSetting ReelOutEffect;

	[Token(Token = "0x40004AC")]
	[FieldOffset(Offset = "0x60")]
	public BoolSetting HookRetractEffect;

	[Token(Token = "0x40004AD")]
	[FieldOffset(Offset = "0x68")]
	public BoolSetting HookImpactEffect;

	[Token(Token = "0x40004AE")]
	[FieldOffset(Offset = "0x70")]
	public BoolSetting CrashLandEffect;

	[Token(Token = "0x40004AF")]
	[FieldOffset(Offset = "0x78")]
	public BoolSetting HorseSoundEffect;

	[Token(Token = "0x40004B0")]
	[FieldOffset(Offset = "0x80")]
	public BoolSetting OldHookEffect;

	[Token(Token = "0x40004B1")]
	[FieldOffset(Offset = "0x88")]
	public BoolSetting OldBladeEffect;

	[Token(Token = "0x40004B2")]
	[FieldOffset(Offset = "0x90")]
	public BoolSetting OldNapeEffect;

	[Token(Token = "0x40004B3")]
	[FieldOffset(Offset = "0x98")]
	public StringSetting ForcePlaylist;

	[Token(Token = "0x40004B4")]
	[FieldOffset(Offset = "0xA0")]
	public StringSetting CustomPlaylist;

	[Token(Token = "0x40004B5")]
	[FieldOffset(Offset = "0xA8")]
	public StringSetting VoiceChatDevice;

	[Token(Token = "0x40004B6")]
	[FieldOffset(Offset = "0xB0")]
	public IntSetting VoiceChatInput;

	[Token(Token = "0x40004B7")]
	[FieldOffset(Offset = "0xB8")]
	public FloatSetting VoiceChatMicVolume;

	[Token(Token = "0x40004B8")]
	[FieldOffset(Offset = "0xC0")]
	public FloatSetting VoiceChatAudioVolume;

	[Token(Token = "0x170000A1")]
	protected override string FileName
	{
		[Token(Token = "0x600040A")]
		[Address(RVA = "0x3E15050", Offset = "0x3E15050", VA = "0x3E15050", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x3E15080", Offset = "0x3E15080", VA = "0x3E15080", Slot = "11")]
	public override void Apply()
	{
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x3E13C10", Offset = "0x3E13C10", VA = "0x3E13C10")]
	public SoundSettings()
	{
	}
}
