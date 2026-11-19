// ==================== AoTTG2 cross-reference ====================
// Type: Effects.EffectPrefabs
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Effects/EffectPrefabs.c
// Prior real C# source (older reference): Assets/Scripts/Effects/EffectPrefabs.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Effects;

[Token(Token = "0x20003AE")]
internal class EffectPrefabs
{
	[Token(Token = "0x40012D0")]
	[FieldOffset(Offset = "0x0")]
	public static string ThunderspearExplode;

	[Token(Token = "0x40012D1")]
	[FieldOffset(Offset = "0x8")]
	public static string GasBurst;

	[Token(Token = "0x40012D2")]
	[FieldOffset(Offset = "0x10")]
	public static string GroundShatter;

	[Token(Token = "0x40012D3")]
	[FieldOffset(Offset = "0x18")]
	public static string Blood1;

	[Token(Token = "0x40012D4")]
	[FieldOffset(Offset = "0x20")]
	public static string Blood2;

	[Token(Token = "0x40012D5")]
	[FieldOffset(Offset = "0x28")]
	public static string PunchHit;

	[Token(Token = "0x40012D6")]
	[FieldOffset(Offset = "0x30")]
	public static string GunExplode;

	[Token(Token = "0x40012D7")]
	[FieldOffset(Offset = "0x38")]
	public static string CriticalHit;

	[Token(Token = "0x40012D8")]
	[FieldOffset(Offset = "0x40")]
	public static string TitanSpawn;

	[Token(Token = "0x40012D9")]
	[FieldOffset(Offset = "0x48")]
	public static string TitanDie1;

	[Token(Token = "0x40012DA")]
	[FieldOffset(Offset = "0x50")]
	public static string TitanDie2;

	[Token(Token = "0x40012DB")]
	[FieldOffset(Offset = "0x58")]
	public static string Boom1;

	[Token(Token = "0x40012DC")]
	[FieldOffset(Offset = "0x60")]
	public static string Boom2;

	[Token(Token = "0x40012DD")]
	[FieldOffset(Offset = "0x68")]
	public static string Boom3;

	[Token(Token = "0x40012DE")]
	[FieldOffset(Offset = "0x70")]
	public static string Boom4;

	[Token(Token = "0x40012DF")]
	[FieldOffset(Offset = "0x78")]
	public static string Boom5;

	[Token(Token = "0x40012E0")]
	[FieldOffset(Offset = "0x80")]
	public static string Boom6;

	[Token(Token = "0x40012E1")]
	[FieldOffset(Offset = "0x88")]
	public static string Boom7;

	[Token(Token = "0x40012E2")]
	[FieldOffset(Offset = "0x90")]
	public static string Boom8;

	[Token(Token = "0x40012E3")]
	[FieldOffset(Offset = "0x98")]
	public static string Splash;

	[Token(Token = "0x40012E4")]
	[FieldOffset(Offset = "0xA0")]
	public static string TitanBite;

	[Token(Token = "0x40012E5")]
	[FieldOffset(Offset = "0xA8")]
	public static string ShifterThunder;

	[Token(Token = "0x40012E6")]
	[FieldOffset(Offset = "0xB0")]
	public static string BladeThrowHit;

	[Token(Token = "0x40012E7")]
	[FieldOffset(Offset = "0xB8")]
	public static string APGTrail;

	[Token(Token = "0x40012E8")]
	[FieldOffset(Offset = "0xC0")]
	public static string SingleSplash;

	[Token(Token = "0x40012E9")]
	[FieldOffset(Offset = "0xC8")]
	public static string Splash1;

	[Token(Token = "0x40012EA")]
	[FieldOffset(Offset = "0xD0")]
	public static string Splash2;

	[Token(Token = "0x40012EB")]
	[FieldOffset(Offset = "0xD8")]
	public static string Splash3;

	[Token(Token = "0x40012EC")]
	[FieldOffset(Offset = "0xE0")]
	public static string WaterWake;

	[Token(Token = "0x40012ED")]
	[FieldOffset(Offset = "0xE8")]
	public static string ColossalSpawn;

	[Token(Token = "0x40012EE")]
	[FieldOffset(Offset = "0xF0")]
	public static string ColossalRockSpawn;

	[Token(Token = "0x40012EF")]
	[FieldOffset(Offset = "0xF8")]
	public static string ColossalKick;

	[Token(Token = "0x40012F0")]
	[FieldOffset(Offset = "0x100")]
	public static HashSet<string> SmallEffects;

	[Token(Token = "0x40012F1")]
	[FieldOffset(Offset = "0x108")]
	public static HashSet<string> MediumEffects;

	[Token(Token = "0x6001796")]
	[Address(RVA = "0x585B130", Offset = "0x585A130", VA = "0x585B130")]
	public EffectPrefabs()
	{
		// Lifted from source/cpp/Effects/EffectPrefabs.c (Effects.EffectPrefabs$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Effects/EffectPrefabs.c.

	// Effects.EffectPrefabs$$.cctor: clean
	static EffectPrefabs()
	{
		Effects_EffectPrefabs_StaticFields pEVar1;
		HashSet<string> pSVar2;

		EffectPrefabs.ThunderspearExplode = "ThunderspearExplodeEffect";
		pEVar1 = typeof(EffectPrefabs).static_fields;
		pEVar1.GasBurst = "GasBurstEffect";
		pEVar1 = typeof(EffectPrefabs).static_fields;
		pEVar1.GroundShatter = "GroundShatterEffect";
		pEVar1 = typeof(EffectPrefabs).static_fields;
		pEVar1.Blood1 = "Blood1Effect";
		pEVar1 = typeof(EffectPrefabs).static_fields;
		pEVar1.Blood2 = "Blood2Effect";
		pEVar1 = typeof(EffectPrefabs).static_fields;
		pEVar1.PunchHit = "PunchHitEffect";
		pEVar1 = typeof(EffectPrefabs).static_fields;
		pEVar1.GunExplode = "GunExplodeEffect";
		pEVar1 = typeof(EffectPrefabs).static_fields;
		pEVar1.CriticalHit = "CriticalHitEffect";
		pEVar1 = typeof(EffectPrefabs).static_fields;
		pEVar1.TitanSpawn = "TitanSpawnEffect";
		pEVar1 = typeof(EffectPrefabs).static_fields;
		pEVar1.TitanDie1 = "TitanDie1Effect";
		pEVar1 = typeof(EffectPrefabs).static_fields;
		pEVar1.TitanDie2 = "TitanDie2Effect";
		pEVar1 = typeof(EffectPrefabs).static_fields;
		pEVar1.Boom1 = "Boom1Effect";
		pEVar1 = typeof(EffectPrefabs).static_fields;
		pEVar1.Boom2 = "Boom2Effect";
		pEVar1 = typeof(EffectPrefabs).static_fields;
		pEVar1.Boom3 = "Boom3Effect";
		pEVar1 = typeof(EffectPrefabs).static_fields;
		pEVar1.Boom4 = "Boom4Effect";
		pEVar1 = typeof(EffectPrefabs).static_fields;
		pEVar1.Boom5 = "Boom5Effect";
		pEVar1 = typeof(EffectPrefabs).static_fields;
		pEVar1.Boom6 = "Boom6Effect";
		pEVar1 = typeof(EffectPrefabs).static_fields;
		pEVar1.Boom7 = "Boom7Effect";
		pEVar1 = typeof(EffectPrefabs).static_fields;
		pEVar1.Boom8 = "Boom8Effect";
		pEVar1 = typeof(EffectPrefabs).static_fields;
		pEVar1.Splash = "SplashEffect";
		pEVar1 = typeof(EffectPrefabs).static_fields;
		pEVar1.TitanBite = "BiteEffect";
		pEVar1 = typeof(EffectPrefabs).static_fields;
		pEVar1.ShifterThunder = "ShifterThunderEffect";
		pEVar1 = typeof(EffectPrefabs).static_fields;
		pEVar1.BladeThrowHit = "BladeThrowHitEffect";
		pEVar1 = typeof(EffectPrefabs).static_fields;
		pEVar1.APGTrail = "APGTrailEffect";
		pEVar1 = typeof(EffectPrefabs).static_fields;
		pEVar1.SingleSplash = "SplashEffect";
		pEVar1 = typeof(EffectPrefabs).static_fields;
		pEVar1.Splash1 = "Splash1Effect";
		pEVar1 = typeof(EffectPrefabs).static_fields;
		pEVar1.Splash2 = "Splash2Effect";
		pEVar1 = typeof(EffectPrefabs).static_fields;
		pEVar1.Splash3 = "Splash3Effect";
		pEVar1 = typeof(EffectPrefabs).static_fields;
		pEVar1.WaterWake = "WaterWakeEffect";
		pEVar1 = typeof(EffectPrefabs).static_fields;
		pEVar1.ColossalSpawn = "ColossalSpawnEffect";
		pEVar1 = typeof(EffectPrefabs).static_fields;
		pEVar1.ColossalRockSpawn = "ColossalRockSpawnEffect";
		pEVar1 = typeof(EffectPrefabs).static_fields;
		pEVar1.ColossalKick = "ColossalKickEffect";
		pSVar2 = new HashSet<string>();
		if (pSVar2 != null) {
			pSVar2.Add((object)EffectPrefabs.GasBurst);
			pSVar2.Add((object)EffectPrefabs.GroundShatter);
			pSVar2.Add((object)EffectPrefabs.Blood1);
			pSVar2.Add((object)EffectPrefabs.Blood2);
			pSVar2.Add((object)EffectPrefabs.PunchHit);
			pSVar2.Add((object)EffectPrefabs.GunExplode);
			pSVar2.Add((object)EffectPrefabs.CriticalHit);
			pSVar2.Add((object)EffectPrefabs.Splash);
			pSVar2.Add((object)EffectPrefabs.Splash1);
			pSVar2.Add((object)EffectPrefabs.Splash2);
			pSVar2.Add((object)EffectPrefabs.Splash3);
			pSVar2.Add((object)EffectPrefabs.WaterWake);
			pSVar2.Add((object)EffectPrefabs.TitanBite);
			pSVar2.Add((object)EffectPrefabs.BladeThrowHit);
			pSVar2.Add((object)EffectPrefabs.APGTrail);
			pEVar1 = typeof(EffectPrefabs).static_fields;
			pEVar1.SmallEffects = pSVar2;
			pSVar2 = new HashSet<string>();
			if (pSVar2 != null) {
				pSVar2.Add((object)EffectPrefabs.TitanSpawn);
				pSVar2.Add((object)EffectPrefabs.TitanDie1);
				pSVar2.Add((object)EffectPrefabs.TitanDie2);
				pSVar2.Add((object)EffectPrefabs.Boom1);
				pSVar2.Add((object)EffectPrefabs.Boom2);
				pSVar2.Add((object)EffectPrefabs.Boom3);
				pSVar2.Add((object)EffectPrefabs.Boom4);
				pSVar2.Add((object)EffectPrefabs.Boom5);
				pSVar2.Add((object)EffectPrefabs.Boom6);
				pSVar2.Add((object)EffectPrefabs.Boom7);
				pSVar2.Add((object)EffectPrefabs.Boom8);
				pEVar1 = typeof(EffectPrefabs).static_fields;
				pEVar1.MediumEffects = pSVar2;
				return;
			}
		}
		throw new NullReferenceException();
	}
}
