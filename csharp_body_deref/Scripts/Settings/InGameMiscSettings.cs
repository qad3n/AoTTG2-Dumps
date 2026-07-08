using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x200008D")]
internal class InGameMiscSettings : BaseSettingsContainer
{
	[Token(Token = "0x4000314")]
	[FieldOffset(Offset = "0x20")]
	public IntSetting PVP;

	[Token(Token = "0x4000315")]
	[FieldOffset(Offset = "0x28")]
	public BoolSetting EndlessRespawnEnabled;

	[Token(Token = "0x4000316")]
	[FieldOffset(Offset = "0x30")]
	public FloatSetting EndlessRespawnTime;

	[Token(Token = "0x4000317")]
	[FieldOffset(Offset = "0x38")]
	public FloatSetting AllowSpawnTime;

	[Token(Token = "0x4000318")]
	[FieldOffset(Offset = "0x40")]
	public FloatSetting InvincibilityTime;

	[Token(Token = "0x4000319")]
	[FieldOffset(Offset = "0x48")]
	public BoolSetting ThunderspearPVP;

	[Token(Token = "0x400031A")]
	[FieldOffset(Offset = "0x50")]
	public BoolSetting APGPVP;

	[Token(Token = "0x400031B")]
	[FieldOffset(Offset = "0x58")]
	public BoolSetting AllowBlades;

	[Token(Token = "0x400031C")]
	[FieldOffset(Offset = "0x60")]
	public BoolSetting AllowAHSS;

	[Token(Token = "0x400031D")]
	[FieldOffset(Offset = "0x68")]
	public BoolSetting AllowAPG;

	[Token(Token = "0x400031E")]
	[FieldOffset(Offset = "0x70")]
	public BoolSetting AllowThunderspears;

	[Token(Token = "0x400031F")]
	[FieldOffset(Offset = "0x78")]
	public BoolSetting AllowPlayerTitans;

	[Token(Token = "0x4000320")]
	[FieldOffset(Offset = "0x80")]
	public BoolSetting AllowShifterSpecials;

	[Token(Token = "0x4000321")]
	[FieldOffset(Offset = "0x88")]
	public BoolSetting AllowShifters;

	[Token(Token = "0x4000322")]
	[FieldOffset(Offset = "0x90")]
	public BoolSetting AllowVoteKicking;

	[Token(Token = "0x4000323")]
	[FieldOffset(Offset = "0x98")]
	public BoolSetting Horses;

	[Token(Token = "0x4000324")]
	[FieldOffset(Offset = "0xA0")]
	public BoolSetting HorsebackCombat;

	[Token(Token = "0x4000325")]
	[FieldOffset(Offset = "0xA8")]
	public BoolSetting GunsAirReload;

	[Token(Token = "0x4000326")]
	[FieldOffset(Offset = "0xB0")]
	public BoolSetting AllowStock;

	[Token(Token = "0x4000327")]
	[FieldOffset(Offset = "0xB8")]
	public BoolSetting ClearKDROnRestart;

	[Token(Token = "0x4000328")]
	[FieldOffset(Offset = "0xC0")]
	public BoolSetting GlobalMinimapDisable;

	[Token(Token = "0x4000329")]
	[FieldOffset(Offset = "0xC8")]
	public BoolSetting RealismMode;

	[Token(Token = "0x400032A")]
	[FieldOffset(Offset = "0xD0")]
	public FloatSetting RealismImpactThreshold;

	[Token(Token = "0x400032B")]
	[FieldOffset(Offset = "0xD8")]
	public FloatSetting RealismMaxReel;

	[Token(Token = "0x400032C")]
	[FieldOffset(Offset = "0xE0")]
	public FloatSetting RealismMaxSpeed;

	[Token(Token = "0x400032D")]
	[FieldOffset(Offset = "0xE8")]
	public IntSetting HookDamageMultiplier;

	[Token(Token = "0x400032E")]
	[FieldOffset(Offset = "0xF0")]
	public BoolSetting CustomStats;

	[Token(Token = "0x400032F")]
	[FieldOffset(Offset = "0xF8")]
	public BoolSetting CustomPerks;

	[Token(Token = "0x4000330")]
	[FieldOffset(Offset = "0x100")]
	public StringSetting Motd;

	[Token(Token = "0x4000331")]
	[FieldOffset(Offset = "0x108")]
	public IntSetting VoiceChat;

	[Token(Token = "0x4000332")]
	[FieldOffset(Offset = "0x110")]
	public FloatSetting ProximityMinDistance;

	[Token(Token = "0x4000333")]
	[FieldOffset(Offset = "0x118")]
	public FloatSetting ProximityMaxDistance;

	[Token(Token = "0x4000334")]
	[FieldOffset(Offset = "0x120")]
	public IntSetting HumanHealth;

	[Token(Token = "0x4000335")]
	[FieldOffset(Offset = "0x128")]
	public IntSetting ShifterHealth;

	[Token(Token = "0x4000336")]
	[FieldOffset(Offset = "0x130")]
	public BoolSetting AccountRequired;

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x3C94D40", Offset = "0x3C94D40", VA = "0x3C94D40")]
	public InGameMiscSettings()
	{
	}
}
