// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InGameMiscSettings
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Settings/InGameMiscSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameMiscSettings.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000E2")]
internal class InGameMiscSettings : BaseSettingsContainer
{
	[Token(Token = "0x40004BA")]
	[FieldOffset(Offset = "0x30")]
	public IntSetting PVP;

	[Token(Token = "0x40004BB")]
	[FieldOffset(Offset = "0x38")]
	public BoolSetting EndlessRespawnEnabled;

	[Token(Token = "0x40004BC")]
	[FieldOffset(Offset = "0x40")]
	public FloatSetting EndlessRespawnTime;

	[Token(Token = "0x40004BD")]
	[FieldOffset(Offset = "0x48")]
	public FloatSetting AllowSpawnTime;

	[Token(Token = "0x40004BE")]
	[FieldOffset(Offset = "0x50")]
	public FloatSetting InvincibilityTime;

	[Token(Token = "0x40004BF")]
	[FieldOffset(Offset = "0x58")]
	public BoolSetting ThunderspearPVP;

	[Token(Token = "0x40004C0")]
	[FieldOffset(Offset = "0x60")]
	public BoolSetting APGPVP;

	[Token(Token = "0x40004C1")]
	[FieldOffset(Offset = "0x68")]
	public BoolSetting AllowBlades;

	[Token(Token = "0x40004C2")]
	[FieldOffset(Offset = "0x70")]
	public BoolSetting AllowAHSS;

	[Token(Token = "0x40004C3")]
	[FieldOffset(Offset = "0x78")]
	public BoolSetting AllowAPG;

	[Token(Token = "0x40004C4")]
	[FieldOffset(Offset = "0x80")]
	public BoolSetting AllowThunderspears;

	[Token(Token = "0x40004C5")]
	[FieldOffset(Offset = "0x88")]
	public BoolSetting AllowUnarmed;

	[Token(Token = "0x40004C6")]
	[FieldOffset(Offset = "0x90")]
	public BoolSetting AllowCivilian;

	[Token(Token = "0x40004C7")]
	[FieldOffset(Offset = "0x98")]
	public BoolSetting AllowPlayerTitans;

	[Token(Token = "0x40004C8")]
	[FieldOffset(Offset = "0xA0")]
	public BoolSetting AllowShifterSpecials;

	[Token(Token = "0x40004C9")]
	[FieldOffset(Offset = "0xA8")]
	public BoolSetting AllowShifters;

	[Token(Token = "0x40004CA")]
	[FieldOffset(Offset = "0xB0")]
	public BoolSetting AllowVoteKicking;

	[Token(Token = "0x40004CB")]
	[FieldOffset(Offset = "0xB8")]
	public BoolSetting Horses;

	[Token(Token = "0x40004CC")]
	[FieldOffset(Offset = "0xC0")]
	public BoolSetting HorsebackCombat;

	[Token(Token = "0x40004CD")]
	[FieldOffset(Offset = "0xC8")]
	public BoolSetting DestructibleEnvironment;

	[Token(Token = "0x40004CE")]
	[FieldOffset(Offset = "0xD0")]
	public BoolSetting GunsAirReload;

	[Token(Token = "0x40004CF")]
	[FieldOffset(Offset = "0xD8")]
	public BoolSetting AllowStock;

	[Token(Token = "0x40004D0")]
	[FieldOffset(Offset = "0xE0")]
	public BoolSetting ClearKDROnRestart;

	[Token(Token = "0x40004D1")]
	[FieldOffset(Offset = "0xE8")]
	public BoolSetting GlobalMinimapDisable;

	[Token(Token = "0x40004D2")]
	[FieldOffset(Offset = "0xF0")]
	public BoolSetting RealismMode;

	[Token(Token = "0x40004D3")]
	[FieldOffset(Offset = "0xF8")]
	public FloatSetting RealismImpactThreshold;

	[Token(Token = "0x40004D4")]
	[FieldOffset(Offset = "0x100")]
	public FloatSetting RealismMaxReel;

	[Token(Token = "0x40004D5")]
	[FieldOffset(Offset = "0x108")]
	public FloatSetting RealismMaxSpeed;

	[Token(Token = "0x40004D6")]
	[FieldOffset(Offset = "0x110")]
	public IntSetting HookDamageMultiplier;

	[Token(Token = "0x40004D7")]
	[FieldOffset(Offset = "0x118")]
	public BoolSetting CustomStats;

	[Token(Token = "0x40004D8")]
	[FieldOffset(Offset = "0x120")]
	public BoolSetting CustomPerks;

	[Token(Token = "0x40004D9")]
	[FieldOffset(Offset = "0x128")]
	public StringSetting Motd;

	[Token(Token = "0x40004DA")]
	[FieldOffset(Offset = "0x130")]
	public IntSetting VoiceChat;

	[Token(Token = "0x40004DB")]
	[FieldOffset(Offset = "0x138")]
	public FloatSetting ProximityMinDistance;

	[Token(Token = "0x40004DC")]
	[FieldOffset(Offset = "0x140")]
	public FloatSetting ProximityMaxDistance;

	[Token(Token = "0x40004DD")]
	[FieldOffset(Offset = "0x148")]
	public IntSetting HumanHealth;

	[Token(Token = "0x40004DE")]
	[FieldOffset(Offset = "0x150")]
	public IntSetting ShifterHealth;

	[Token(Token = "0x40004DF")]
	[FieldOffset(Offset = "0x158")]
	public IntSetting HorseHealth;

	[Token(Token = "0x40004E0")]
	[FieldOffset(Offset = "0x160")]
	public BoolSetting AccountRequired;

	[Token(Token = "0x600051F")]
	[Address(RVA = "0x5A472D0", Offset = "0x5A462D0", VA = "0x5A472D0")]
	public InGameMiscSettings()
	{
	}
}
