// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InGameMiscSettings
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Settings/InGameMiscSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameMiscSettings.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
		// Lifted from source/cpp/Settings/InGameMiscSettings.c (Settings.InGameMiscSettings$$.ctor): clean
		String defaultValue;
		int iVar1;
		IntSetting pSVar2;
		BoolSetting pSVar3;
		FloatSetting pSVar4;
		StringSetting __this_00;
		MethodInfo method_00;
		float fVar5;

		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		pSVar2 = new IntSetting();
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		iVar1 = pSVar2.SanitizeValue(0);
		pSVar2.DefaultValue = iVar1;
		pSVar2.SetDefault();
		this.PVP = pSVar2;
		pSVar3 = new BoolSetting(false);
		this.EndlessRespawnEnabled = pSVar3;
		pSVar4.MinValue = -3.4028235e+38;
		pSVar4.MaxValue = 3.4028235e+38;
		pSVar4 = new FloatSetting();
		pSVar4.MinValue = 1.0;
		pSVar4.MaxValue = 3.4028235e+38;
		fVar5 = pSVar4.SanitizeValue(5.0);
		pSVar4.DefaultValue = fVar5;
		pSVar4.SetDefault();
		this.EndlessRespawnTime = pSVar4;
		pSVar4.MinValue = -3.4028235e+38;
		pSVar4.MaxValue = 3.4028235e+38;
		pSVar4 = new FloatSetting();
		pSVar4.MinValue = 0.0;
		pSVar4.MaxValue = 3.4028235e+38;
		fVar5 = pSVar4.SanitizeValue(60.0);
		pSVar4.DefaultValue = fVar5;
		pSVar4.SetDefault();
		this.AllowSpawnTime = pSVar4;
		pSVar4.MinValue = -3.4028235e+38;
		pSVar4.MaxValue = 3.4028235e+38;
		pSVar4 = new FloatSetting();
		pSVar4.MinValue = 0.0;
		pSVar4.MaxValue = 3.4028235e+38;
		fVar5 = pSVar4.SanitizeValue(3.0);
		pSVar4.DefaultValue = fVar5;
		pSVar4.SetDefault();
		this.InvincibilityTime = pSVar4;
		pSVar3 = new BoolSetting(false);
		this.ThunderspearPVP = pSVar3;
		pSVar3 = new BoolSetting(false);
		this.APGPVP = pSVar3;
		pSVar3 = new BoolSetting(true);
		this.AllowBlades = pSVar3;
		pSVar3 = new BoolSetting(true);
		this.AllowAHSS = pSVar3;
		pSVar3 = new BoolSetting(true);
		this.AllowAPG = pSVar3;
		pSVar3 = new BoolSetting(true);
		this.AllowThunderspears = pSVar3;
		pSVar3 = new BoolSetting(false);
		this.AllowUnarmed = pSVar3;
		pSVar3 = new BoolSetting(false);
		this.AllowCivilian = pSVar3;
		pSVar3 = new BoolSetting(true);
		this.AllowPlayerTitans = pSVar3;
		pSVar3 = new BoolSetting(true);
		this.AllowShifterSpecials = pSVar3;
		pSVar3 = new BoolSetting(false);
		this.AllowShifters = pSVar3;
		pSVar3 = new BoolSetting(false);
		this.AllowVoteKicking = pSVar3;
		pSVar3 = new BoolSetting(false);
		this.Horses = pSVar3;
		pSVar3 = new BoolSetting(true);
		this.HorsebackCombat = pSVar3;
		pSVar3 = new BoolSetting(false);
		this.DestructibleEnvironment = pSVar3;
		pSVar3 = new BoolSetting(true);
		this.GunsAirReload = pSVar3;
		pSVar3 = new BoolSetting(true);
		this.AllowStock = pSVar3;
		pSVar3 = new BoolSetting(true);
		this.ClearKDROnRestart = pSVar3;
		pSVar3 = new BoolSetting(false);
		this.GlobalMinimapDisable = pSVar3;
		pSVar3 = new BoolSetting(false);
		this.RealismMode = pSVar3;
		pSVar4.MinValue = -3.4028235e+38;
		pSVar4.MaxValue = 3.4028235e+38;
		pSVar4 = new FloatSetting();
		pSVar4.MinValue = 50.0;
		pSVar4.MaxValue = 3.4028235e+38;
		fVar5 = pSVar4.SanitizeValue(130.0);
		pSVar4.DefaultValue = fVar5;
		pSVar4.SetDefault();
		this.RealismImpactThreshold = pSVar4;
		pSVar4.MinValue = -3.4028235e+38;
		pSVar4.MaxValue = 3.4028235e+38;
		pSVar4 = new FloatSetting();
		pSVar4.MinValue = 0.0;
		pSVar4.MaxValue = 3.4028235e+38;
		fVar5 = pSVar4.SanitizeValue(120.0);
		pSVar4.DefaultValue = fVar5;
		pSVar4.SetDefault();
		this.RealismMaxReel = pSVar4;
		pSVar4.MinValue = -3.4028235e+38;
		pSVar4.MaxValue = 3.4028235e+38;
		pSVar4 = new FloatSetting();
		pSVar4.MinValue = 100.0;
		pSVar4.MaxValue = 3.4028235e+38;
		fVar5 = pSVar4.SanitizeValue(250.0);
		pSVar4.DefaultValue = fVar5;
		pSVar4.SetDefault();
		this.RealismMaxSpeed = pSVar4;
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		pSVar2 = new IntSetting();
		pSVar2.MinValue = 0;
		pSVar2.MaxValue = 0x7fffffff;
		iVar1 = pSVar2.SanitizeValue(0);
		pSVar2.DefaultValue = iVar1;
		pSVar2.SetDefault();
		this.HookDamageMultiplier = pSVar2;
		pSVar3 = new BoolSetting(true);
		this.CustomStats = pSVar3;
		pSVar3 = new BoolSetting(true);
		this.CustomPerks = pSVar3;
		defaultValue = (String)**(ulong*)(g_data_07556758 + 0xb8);
		__this_00 = new StringSetting(defaultValue, 1000);
		this.Motd = __this_00;
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		pSVar2 = new IntSetting();
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		iVar1 = pSVar2.SanitizeValue(2);
		pSVar2.DefaultValue = iVar1;
		pSVar2.SetDefault();
		this.VoiceChat = pSVar2;
		pSVar4.MinValue = -3.4028235e+38;
		pSVar4.MaxValue = 3.4028235e+38;
		pSVar4 = new FloatSetting();
		pSVar4.MinValue = 1.0;
		pSVar4.MaxValue = 3.4028235e+38;
		fVar5 = pSVar4.SanitizeValue(20.0);
		pSVar4.DefaultValue = fVar5;
		pSVar4.SetDefault();
		this.ProximityMinDistance = pSVar4;
		pSVar4.MinValue = -3.4028235e+38;
		pSVar4.MaxValue = 3.4028235e+38;
		pSVar4 = new FloatSetting();
		pSVar4.MinValue = 1.0;
		pSVar4.MaxValue = 3.4028235e+38;
		fVar5 = pSVar4.SanitizeValue(80.0);
		pSVar4.DefaultValue = fVar5;
		pSVar4.SetDefault();
		this.ProximityMaxDistance = pSVar4;
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		pSVar2 = new IntSetting();
		pSVar2.MinValue = 1;
		pSVar2.MaxValue = 0x7fffffff;
		iVar1 = pSVar2.SanitizeValue(1);
		pSVar2.DefaultValue = iVar1;
		pSVar2.SetDefault();
		this.HumanHealth = pSVar2;
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		pSVar2 = new IntSetting();
		pSVar2.MinValue = 1;
		pSVar2.MaxValue = 0x7fffffff;
		iVar1 = pSVar2.SanitizeValue(1000);
		pSVar2.DefaultValue = iVar1;
		pSVar2.SetDefault();
		this.ShifterHealth = pSVar2;
		pSVar2.MinValue = -0x80000000;
		pSVar2.MaxValue = 0x7fffffff;
		pSVar2 = new IntSetting();
		pSVar2.MinValue = 1;
		pSVar2.MaxValue = 0x7fffffff;
		iVar1 = pSVar2.SanitizeValue(1);
		pSVar2.DefaultValue = iVar1;
		pSVar2.SetDefault();
		this.HorseHealth = pSVar2;
		method_00 = new BoolSetting(false);
		this.AccountRequired = (BoolSetting)method_00;
		base();
		return;
	}
}
