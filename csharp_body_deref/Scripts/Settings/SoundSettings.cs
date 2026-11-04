// ==================== AoTTG2 cross-reference ====================
// Type: Settings.SoundSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/SoundSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SoundSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000E7")]
internal class SoundSettings : SaveableSettingsContainer
{
	[Token(Token = "0x400054A")]
	[FieldOffset(Offset = "0x38")]
	public FloatSetting Volume;

	[Token(Token = "0x400054B")]
	[FieldOffset(Offset = "0x40")]
	public FloatSetting Music;

	[Token(Token = "0x400054C")]
	[FieldOffset(Offset = "0x48")]
	public BoolSetting MuteMinimized;

	[Token(Token = "0x400054D")]
	[FieldOffset(Offset = "0x50")]
	public BoolSetting TitanGrabMusic;

	[Token(Token = "0x400054E")]
	[FieldOffset(Offset = "0x58")]
	public BoolSetting TitanVocalEffect;

	[Token(Token = "0x400054F")]
	[FieldOffset(Offset = "0x60")]
	public BoolSetting GasEffect;

	[Token(Token = "0x4000550")]
	[FieldOffset(Offset = "0x68")]
	public BoolSetting ReelInEffect;

	[Token(Token = "0x4000551")]
	[FieldOffset(Offset = "0x70")]
	public BoolSetting ReelOutEffect;

	[Token(Token = "0x4000552")]
	[FieldOffset(Offset = "0x78")]
	public BoolSetting HookRetractEffect;

	[Token(Token = "0x4000553")]
	[FieldOffset(Offset = "0x80")]
	public BoolSetting HookImpactEffect;

	[Token(Token = "0x4000554")]
	[FieldOffset(Offset = "0x88")]
	public BoolSetting CrashLandEffect;

	[Token(Token = "0x4000555")]
	[FieldOffset(Offset = "0x90")]
	public BoolSetting HorseSoundEffect;

	[Token(Token = "0x4000556")]
	[FieldOffset(Offset = "0x98")]
	public BoolSetting OldHookEffect;

	[Token(Token = "0x4000557")]
	[FieldOffset(Offset = "0xA0")]
	public BoolSetting OldBladeEffect;

	[Token(Token = "0x4000558")]
	[FieldOffset(Offset = "0xA8")]
	public BoolSetting OldNapeEffect;

	[Token(Token = "0x4000559")]
	[FieldOffset(Offset = "0xB0")]
	public StringSetting ForcePlaylist;

	[Token(Token = "0x400055A")]
	[FieldOffset(Offset = "0xB8")]
	public StringSetting CustomPlaylist;

	[Token(Token = "0x400055B")]
	[FieldOffset(Offset = "0xC0")]
	public StringSetting VoiceChatDevice;

	[Token(Token = "0x400055C")]
	[FieldOffset(Offset = "0xC8")]
	public IntSetting VoiceChatInput;

	[Token(Token = "0x400055D")]
	[FieldOffset(Offset = "0xD0")]
	public FloatSetting VoiceChatMicVolume;

	[Token(Token = "0x400055E")]
	[FieldOffset(Offset = "0xD8")]
	public FloatSetting VoiceChatAudioVolume;

	[Token(Token = "0x170000B2")]
	protected override string FileName
	{
		[Token(Token = "0x60004A9")]
		[Address(RVA = "0x1F27D90", Offset = "0x1F26390", VA = "0x181F27D90", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x1F275A0", Offset = "0x1F25BA0", VA = "0x181F275A0", Slot = "12")]
	public override void Apply()
	{
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x1F27620", Offset = "0x1F25C20", VA = "0x181F27620")]
	public SoundSettings()
	{
	}
}
