// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InGameMiscSettings
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Settings/InGameMiscSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameMiscSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000AB")]
internal class InGameMiscSettings : BaseSettingsContainer
{
	[Token(Token = "0x4000386")]
	[FieldOffset(Offset = "0x30")]
	public IntSetting PVP;

	[Token(Token = "0x4000387")]
	[FieldOffset(Offset = "0x38")]
	public BoolSetting EndlessRespawnEnabled;

	[Token(Token = "0x4000388")]
	[FieldOffset(Offset = "0x40")]
	public FloatSetting EndlessRespawnTime;

	[Token(Token = "0x4000389")]
	[FieldOffset(Offset = "0x48")]
	public FloatSetting AllowSpawnTime;

	[Token(Token = "0x400038A")]
	[FieldOffset(Offset = "0x50")]
	public FloatSetting InvincibilityTime;

	[Token(Token = "0x400038B")]
	[FieldOffset(Offset = "0x58")]
	public BoolSetting ThunderspearPVP;

	[Token(Token = "0x400038C")]
	[FieldOffset(Offset = "0x60")]
	public BoolSetting APGPVP;

	[Token(Token = "0x400038D")]
	[FieldOffset(Offset = "0x68")]
	public BoolSetting AllowBlades;

	[Token(Token = "0x400038E")]
	[FieldOffset(Offset = "0x70")]
	public BoolSetting AllowAHSS;

	[Token(Token = "0x400038F")]
	[FieldOffset(Offset = "0x78")]
	public BoolSetting AllowAPG;

	[Token(Token = "0x4000390")]
	[FieldOffset(Offset = "0x80")]
	public BoolSetting AllowThunderspears;

	[Token(Token = "0x4000391")]
	[FieldOffset(Offset = "0x88")]
	public BoolSetting AllowUnarmed;

	[Token(Token = "0x4000392")]
	[FieldOffset(Offset = "0x90")]
	public BoolSetting AllowCivilian;

	[Token(Token = "0x4000393")]
	[FieldOffset(Offset = "0x98")]
	public BoolSetting AllowPlayerTitans;

	[Token(Token = "0x4000394")]
	[FieldOffset(Offset = "0xA0")]
	public BoolSetting AllowShifterSpecials;

	[Token(Token = "0x4000395")]
	[FieldOffset(Offset = "0xA8")]
	public BoolSetting AllowShifters;

	[Token(Token = "0x4000396")]
	[FieldOffset(Offset = "0xB0")]
	public BoolSetting AllowVoteKicking;

	[Token(Token = "0x4000397")]
	[FieldOffset(Offset = "0xB8")]
	public BoolSetting Horses;

	[Token(Token = "0x4000398")]
	[FieldOffset(Offset = "0xC0")]
	public BoolSetting HorsebackCombat;

	[Token(Token = "0x4000399")]
	[FieldOffset(Offset = "0xC8")]
	public BoolSetting DestructibleEnvironment;

	[Token(Token = "0x400039A")]
	[FieldOffset(Offset = "0xD0")]
	public BoolSetting GunsAirReload;

	[Token(Token = "0x400039B")]
	[FieldOffset(Offset = "0xD8")]
	public BoolSetting AllowStock;

	[Token(Token = "0x400039C")]
	[FieldOffset(Offset = "0xE0")]
	public BoolSetting ClearKDROnRestart;

	[Token(Token = "0x400039D")]
	[FieldOffset(Offset = "0xE8")]
	public BoolSetting GlobalMinimapDisable;

	[Token(Token = "0x400039E")]
	[FieldOffset(Offset = "0xF0")]
	public BoolSetting RealismMode;

	[Token(Token = "0x400039F")]
	[FieldOffset(Offset = "0xF8")]
	public FloatSetting RealismImpactThreshold;

	[Token(Token = "0x40003A0")]
	[FieldOffset(Offset = "0x100")]
	public FloatSetting RealismMaxReel;

	[Token(Token = "0x40003A1")]
	[FieldOffset(Offset = "0x108")]
	public FloatSetting RealismMaxSpeed;

	[Token(Token = "0x40003A2")]
	[FieldOffset(Offset = "0x110")]
	public IntSetting HookDamageMultiplier;

	[Token(Token = "0x40003A3")]
	[FieldOffset(Offset = "0x118")]
	public BoolSetting CustomStats;

	[Token(Token = "0x40003A4")]
	[FieldOffset(Offset = "0x120")]
	public BoolSetting CustomPerks;

	[Token(Token = "0x40003A5")]
	[FieldOffset(Offset = "0x128")]
	public StringSetting Motd;

	[Token(Token = "0x40003A6")]
	[FieldOffset(Offset = "0x130")]
	public IntSetting VoiceChat;

	[Token(Token = "0x40003A7")]
	[FieldOffset(Offset = "0x138")]
	public FloatSetting ProximityMinDistance;

	[Token(Token = "0x40003A8")]
	[FieldOffset(Offset = "0x140")]
	public FloatSetting ProximityMaxDistance;

	[Token(Token = "0x40003A9")]
	[FieldOffset(Offset = "0x148")]
	public IntSetting HumanHealth;

	[Token(Token = "0x40003AA")]
	[FieldOffset(Offset = "0x150")]
	public IntSetting ShifterHealth;

	[Token(Token = "0x40003AB")]
	[FieldOffset(Offset = "0x158")]
	public BoolSetting AccountRequired;

	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x1F19F90", Offset = "0x1F18590", VA = "0x181F19F90")]
	public InGameMiscSettings()
	{
	}
}
