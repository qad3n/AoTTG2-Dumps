// ==================== AoTTG2 cross-reference ====================
// Type: Settings.SoundSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/SoundSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SoundSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000C7")]
internal class SoundSettings : SaveableSettingsContainer
{
	[Token(Token = "0x40004AB")]
	[FieldOffset(Offset = "0x20")]
	public FloatSetting Volume;

	[Token(Token = "0x40004AC")]
	[FieldOffset(Offset = "0x28")]
	public FloatSetting Music;

	[Token(Token = "0x40004AD")]
	[FieldOffset(Offset = "0x30")]
	public BoolSetting MuteMinimized;

	[Token(Token = "0x40004AE")]
	[FieldOffset(Offset = "0x38")]
	public BoolSetting TitanGrabMusic;

	[Token(Token = "0x40004AF")]
	[FieldOffset(Offset = "0x40")]
	public BoolSetting TitanVocalEffect;

	[Token(Token = "0x40004B0")]
	[FieldOffset(Offset = "0x48")]
	public BoolSetting GasEffect;

	[Token(Token = "0x40004B1")]
	[FieldOffset(Offset = "0x50")]
	public BoolSetting ReelInEffect;

	[Token(Token = "0x40004B2")]
	[FieldOffset(Offset = "0x58")]
	public BoolSetting ReelOutEffect;

	[Token(Token = "0x40004B3")]
	[FieldOffset(Offset = "0x60")]
	public BoolSetting HookRetractEffect;

	[Token(Token = "0x40004B4")]
	[FieldOffset(Offset = "0x68")]
	public BoolSetting HookImpactEffect;

	[Token(Token = "0x40004B5")]
	[FieldOffset(Offset = "0x70")]
	public BoolSetting CrashLandEffect;

	[Token(Token = "0x40004B6")]
	[FieldOffset(Offset = "0x78")]
	public BoolSetting HorseSoundEffect;

	[Token(Token = "0x40004B7")]
	[FieldOffset(Offset = "0x80")]
	public BoolSetting OldHookEffect;

	[Token(Token = "0x40004B8")]
	[FieldOffset(Offset = "0x88")]
	public BoolSetting OldBladeEffect;

	[Token(Token = "0x40004B9")]
	[FieldOffset(Offset = "0x90")]
	public BoolSetting OldNapeEffect;

	[Token(Token = "0x40004BA")]
	[FieldOffset(Offset = "0x98")]
	public StringSetting ForcePlaylist;

	[Token(Token = "0x40004BB")]
	[FieldOffset(Offset = "0xA0")]
	public StringSetting CustomPlaylist;

	[Token(Token = "0x40004BC")]
	[FieldOffset(Offset = "0xA8")]
	public StringSetting VoiceChatDevice;

	[Token(Token = "0x40004BD")]
	[FieldOffset(Offset = "0xB0")]
	public IntSetting VoiceChatInput;

	[Token(Token = "0x40004BE")]
	[FieldOffset(Offset = "0xB8")]
	public FloatSetting VoiceChatMicVolume;

	[Token(Token = "0x40004BF")]
	[FieldOffset(Offset = "0xC0")]
	public FloatSetting VoiceChatAudioVolume;

	[Token(Token = "0x170000A3")]
	protected override string FileName
	{
		[Token(Token = "0x6000410")]
		[Address(RVA = "0x4104140", Offset = "0x4104140", VA = "0x4104140", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x4104170", Offset = "0x4104170", VA = "0x4104170", Slot = "11")]
	public override void Apply()
	{
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x40FC390", Offset = "0x40FC390", VA = "0x40FC390")]
	public SoundSettings()
	{
	}
}
