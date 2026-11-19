// ==================== AoTTG2 cross-reference ====================
// Type: Settings.SoundSettings
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/SoundSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SoundSettings.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000122")]
internal class SoundSettings : SaveableSettingsContainer
{
	[Token(Token = "0x4000689")]
	[FieldOffset(Offset = "0x38")]
	public FloatSetting Volume;

	[Token(Token = "0x400068A")]
	[FieldOffset(Offset = "0x40")]
	public FloatSetting Music;

	[Token(Token = "0x400068B")]
	[FieldOffset(Offset = "0x48")]
	public BoolSetting MuteMinimized;

	[Token(Token = "0x400068C")]
	[FieldOffset(Offset = "0x50")]
	public BoolSetting TitanGrabMusic;

	[Token(Token = "0x400068D")]
	[FieldOffset(Offset = "0x58")]
	public BoolSetting TitanVocalEffect;

	[Token(Token = "0x400068E")]
	[FieldOffset(Offset = "0x60")]
	public BoolSetting GasEffect;

	[Token(Token = "0x400068F")]
	[FieldOffset(Offset = "0x68")]
	public BoolSetting ReelInEffect;

	[Token(Token = "0x4000690")]
	[FieldOffset(Offset = "0x70")]
	public BoolSetting ReelOutEffect;

	[Token(Token = "0x4000691")]
	[FieldOffset(Offset = "0x78")]
	public BoolSetting HookRetractEffect;

	[Token(Token = "0x4000692")]
	[FieldOffset(Offset = "0x80")]
	public BoolSetting HookImpactEffect;

	[Token(Token = "0x4000693")]
	[FieldOffset(Offset = "0x88")]
	public BoolSetting CrashLandEffect;

	[Token(Token = "0x4000694")]
	[FieldOffset(Offset = "0x90")]
	public BoolSetting HorseSoundEffect;

	[Token(Token = "0x4000695")]
	[FieldOffset(Offset = "0x98")]
	public BoolSetting OldHookEffect;

	[Token(Token = "0x4000696")]
	[FieldOffset(Offset = "0xA0")]
	public BoolSetting OldBladeEffect;

	[Token(Token = "0x4000697")]
	[FieldOffset(Offset = "0xA8")]
	public BoolSetting OldNapeEffect;

	[Token(Token = "0x4000698")]
	[FieldOffset(Offset = "0xB0")]
	public StringSetting ForcePlaylist;

	[Token(Token = "0x4000699")]
	[FieldOffset(Offset = "0xB8")]
	public StringSetting CustomPlaylist;

	[Token(Token = "0x400069A")]
	[FieldOffset(Offset = "0xC0")]
	public StringSetting VoiceChatDevice;

	[Token(Token = "0x400069B")]
	[FieldOffset(Offset = "0xC8")]
	public IntSetting VoiceChatInput;

	[Token(Token = "0x400069C")]
	[FieldOffset(Offset = "0xD0")]
	public FloatSetting VoiceChatMicVolume;

	[Token(Token = "0x400069D")]
	[FieldOffset(Offset = "0xD8")]
	public FloatSetting VoiceChatAudioVolume;

	[Token(Token = "0x170000CF")]
	protected override string FileName
	{
		[Token(Token = "0x6000627")]
		[Address(RVA = "0x5B7F5E0", Offset = "0x5B7E5E0", VA = "0x5B7F5E0", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Settings/SoundSettings.c (Settings.SoundSettings$$get_FileName): clean
			return "Sound.json";
		}
	}

	[Token(Token = "0x6000628")]
	[Address(RVA = "0x5B7F610", Offset = "0x5B7E610", VA = "0x5B7F610", Slot = "12")]
	public override void Apply()
	{
		// Lifted from source/cpp/Settings/SoundSettings.c (Settings.SoundSettings$$Apply): clean
		FloatSetting pSVar1;

		pSVar1 = this.Volume;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		AudioListener.volume = pSVar1._value;
		MusicManager.ApplySoundSettings();
		if ((typeof(VoiceChatManager)._2).cctor_finished_or_no_cctor == 0) {
			VoiceChatManager.ApplySoundSettings();
			return;
		}
		VoiceChatManager.ApplySoundSettings();
		return;
	}

	[Token(Token = "0x6000629")]
	[Address(RVA = "0x5B7E610", Offset = "0x5B7D610", VA = "0x5B7E610")]
	public SoundSettings()
	{
		// Lifted from source/cpp/Settings/SoundSettings.c (Settings.SoundSettings$$.ctor): clean
		String pSVar1;
		FloatSetting pSVar2;
		BoolSetting pSVar3;
		StringSetting pSVar4;
		IntSetting __this_00;

		pSVar2 = new FloatSetting(0.5, 0.0, 1.0);
		this.Volume = pSVar2;
		pSVar2 = new FloatSetting(0.5, 0.0, 1.0);
		this.Music = pSVar2;
		pSVar3 = new BoolSetting(true);
		this.MuteMinimized = pSVar3;
		pSVar3 = new BoolSetting(true);
		this.TitanGrabMusic = pSVar3;
		pSVar3 = new BoolSetting(true);
		this.TitanVocalEffect = pSVar3;
		pSVar3 = new BoolSetting(true);
		this.GasEffect = pSVar3;
		pSVar3 = new BoolSetting(true);
		this.ReelInEffect = pSVar3;
		pSVar3 = new BoolSetting(true);
		this.ReelOutEffect = pSVar3;
		pSVar3 = new BoolSetting(true);
		this.HookRetractEffect = pSVar3;
		pSVar3 = new BoolSetting(true);
		this.HookImpactEffect = pSVar3;
		pSVar3 = new BoolSetting(true);
		this.CrashLandEffect = pSVar3;
		pSVar3 = new BoolSetting(true);
		this.HorseSoundEffect = pSVar3;
		pSVar3 = new BoolSetting(false);
		this.OldHookEffect = pSVar3;
		pSVar3 = new BoolSetting(false);
		this.OldBladeEffect = pSVar3;
		pSVar3 = new BoolSetting(false);
		this.OldNapeEffect = pSVar3;
		pSVar1 = "Default";
		pSVar4.MaxLength = 0x7fffffff;
		pSVar4 = new StringSetting((object)pSVar1);
		pSVar4.MaxLength = 0x7fffffff;
		this.ForcePlaylist = pSVar4;
		pSVar1 = "";
		pSVar4.MaxLength = 0x7fffffff;
		pSVar4 = new StringSetting((object)pSVar1);
		pSVar4.MaxLength = 0x7fffffff;
		this.CustomPlaylist = pSVar4;
		pSVar1 = "";
		pSVar4.MaxLength = 0x7fffffff;
		pSVar4 = new StringSetting((object)pSVar1);
		pSVar4.MaxLength = 0x7fffffff;
		this.VoiceChatDevice = pSVar4;
		__this_00 = new IntSetting(0, -0x80000000, 0x7fffffff);
		this.VoiceChatInput = __this_00;
		pSVar2 = new FloatSetting(1.0, 0.0, 1.0);
		this.VoiceChatMicVolume = pSVar2;
		pSVar2 = new FloatSetting(0.5, 0.0, 1.0);
		this.VoiceChatAudioVolume = pSVar2;
		base();
		return;
	}
}
