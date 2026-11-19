// ==================== AoTTG2 cross-reference ====================
// Type: PatreonEffects.NameEffectPresets
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/PatreonEffects/NameEffectPresets.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace PatreonEffects;

[Token(Token = "0x2000088")]
public static class NameEffectPresets
{
	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x58BFA10", Offset = "0x58BEA10", VA = "0x58BFA10")]
	public static NameEffectSettings GetPreset(NameEffectType type)
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectPresets.c (PatreonEffects.NameEffectPresets$$GetPreset): 4 lines keep C-only constructs
		NameEffectSettings pPVar1;
		uint in_register_0000003c;
		NameEffectSettings* method_00;

		method_00 = (NameEffectSettings*)CONCAT44(in_register_0000003c, type);
		if (g_data_07545bfd == false) {
			method_00 = &typeof(NameEffectSettings);
			g_data_07545bfd = true;
		}
		switch(type) {
		case 1:
			pPVar1.gradientA.r = 0.78;
			pPVar1.gradientA.g = 1.0;
			pPVar1.gradientA.b = 0.9;
			pPVar1.gradientA.a = 1.0;
			pPVar1.gradientB.r = 0.64;
			pPVar1.gradientB.g = 0.95;
			pPVar1.gradientB.b = 1.0;
			pPVar1.gradientB.a = 1.0;
			pPVar1.gradientC.r = 0.86;
			pPVar1.gradientC.g = 0.76;
			pPVar1.gradientC.b = 1.0;
			pPVar1.gradientC.a = 1.0;
			pPVar1.gradientD.r = 1.0;
			pPVar1.gradientD.g = 0.96;
			pPVar1.gradientD.b = 0.82;
			pPVar1.gradientD.a = 1.0;
			pPVar1.gradientScale = 2.8;
			pPVar1.gradientSpeed = 0.16;
			pPVar1.glow = 1.35;
			pPVar1.scanlineStrength = 0.12;
			pPVar1.scanlineDensity = 180.0;
			pPVar1.scanlineSpeed = 0.18;
			pPVar1.flickerStrength = 0.05;
			pPVar1.flickerSpeed = 18.0;
			pPVar1.softness = 1.0;
			pPVar1.popShadowOffset = (Vector2)0xbfc0000000000000;
			pPVar1.popExtrusionOffset = (Vector2)0xc0c0000000000000;
			pPVar1 = new NameEffectSettings();
			return pPVar1;
		case 2:
			pPVar1 = NameEffectPresets.Shimmer();
			return pPVar1;
		case 3:
			pPVar1 = NameEffectPresets.Pop();
			return pPVar1;
		case 4:
			pPVar1 = NameEffectPresets.Ember();
			return pPVar1;
		case 5:
			pPVar1 = NameEffectPresets.Waves();
			return pPVar1;
		case 6:
			pPVar1 = NameEffectPresets.Electric();
			return pPVar1;
		case 7:
			pPVar1 = NameEffectPresets.Outline();
			return pPVar1;
		default: ;
			pPVar1.gradientA.r = 0.78;
			pPVar1.gradientA.g = 1.0;
			pPVar1.gradientA.b = 0.9;
			pPVar1.gradientA.a = 1.0;
			pPVar1.gradientB.r = 0.64;
			pPVar1.gradientB.g = 0.95;
			pPVar1.gradientB.b = 1.0;
			pPVar1.gradientB.a = 1.0;
			pPVar1.gradientC.r = 0.86;
			pPVar1.gradientC.g = 0.76;
			pPVar1.gradientC.b = 1.0;
			pPVar1.gradientC.a = 1.0;
			pPVar1.gradientD.r = 1.0;
			pPVar1.gradientD.g = 0.96;
			pPVar1.gradientD.b = 0.82;
			pPVar1.gradientD.a = 1.0;
			pPVar1.gradientScale = 2.8;
			pPVar1.gradientSpeed = 0.16;
			pPVar1.glow = 1.35;
			pPVar1.scanlineStrength = 0.12;
			pPVar1.scanlineDensity = 180.0;
			pPVar1.scanlineSpeed = 0.18;
			pPVar1.flickerStrength = 0.05;
			pPVar1.flickerSpeed = 18.0;
			pPVar1.softness = 1.0;
			pPVar1.popShadowOffset = (Vector2)0xbfc0000000000000;
			pPVar1.popExtrusionOffset = (Vector2)0xc0c0000000000000;
			pPVar1 = new NameEffectSettings();
			pPVar1.glow = 1.0;
			pPVar1.scanlineStrength = 0.0;
			pPVar1.flickerStrength = 0.0;
			return pPVar1;
		}
	}

	[Token(Token = "0x60003CF")]
	[Address(RVA = "0x58BEFC0", Offset = "0x58BDFC0", VA = "0x58BEFC0")]
	public static bool TryResolve(string raw, out NameEffectType type)
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectPresets.c (PatreonEffects.NameEffectPresets$$TryResolve): clean
		bool bVar1;
		bool bVar2;
		int iVar3;
		int local_1c;

		local_1c = 0;
		*type = 0;
		bVar1 = String.IsNullOrWhiteSpace(raw);
		if (!bVar1) {
			bVar1 = (raw == "None");
			if (!bVar1) {
				bVar1 = String.Equals(raw, "Wave", 5);
				iVar3 = 5;
				if (!bVar1) {
					bVar1 = Enum.TryParse<NameEffectType>(raw, true, ref local_1c);
					if ((!bVar1) || (iVar3 = local_1c, 6 < local_1c - 1U)) {
						bVar1 = NameEffectPresets.IsLegacyEffect(raw);
						iVar3 = 1;
						if (!bVar1) {
							return false;
						}
					}
				}
				*type = iVar3;
			}
		}
		return bVar2;
	}

	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x58C5FD0", Offset = "0x58C4FD0", VA = "0x58C5FD0")]
	private static bool IsSupportedEffect(NameEffectType type)
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectPresets.c (PatreonEffects.NameEffectPresets$$IsSupportedEffect): clean
		return type - 1U < 7;
	}

	[Token(Token = "0x60003D1")]
	[Address(RVA = "0x58C35C0", Offset = "0x58C25C0", VA = "0x58C35C0")]
	public static NameEffectSettings Holographic()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectPresets.c (PatreonEffects.NameEffectPresets$$Holographic): clean
		NameEffectSettings __this;

		__this.gradientA.r = 0.78;
		__this.gradientA.g = 1.0;
		__this.gradientA.b = 0.9;
		__this.gradientA.a = 1.0;
		__this.gradientB.r = 0.64;
		__this.gradientB.g = 0.95;
		__this.gradientB.b = 1.0;
		__this.gradientB.a = 1.0;
		__this.gradientC.r = 0.86;
		__this.gradientC.g = 0.76;
		__this.gradientC.b = 1.0;
		__this.gradientC.a = 1.0;
		__this.gradientD.r = 1.0;
		__this.gradientD.g = 0.96;
		__this.gradientD.b = 0.82;
		__this.gradientD.a = 1.0;
		__this.gradientScale = 2.8;
		__this.gradientSpeed = 0.16;
		__this.glow = 1.35;
		__this.scanlineStrength = 0.12;
		__this.scanlineDensity = 180.0;
		__this.scanlineSpeed = 0.18;
		__this.flickerStrength = 0.05;
		__this.flickerSpeed = 18.0;
		__this.softness = 1.0;
		__this.popShadowOffset = (Vector2)0xbfc0000000000000;
		__this.popExtrusionOffset = (Vector2)0xc0c0000000000000;
		__this = new NameEffectSettings();
		return __this;
	}

	[Token(Token = "0x60003D2")]
	[Address(RVA = "0x58C5A50", Offset = "0x58C4A50", VA = "0x58C5A50")]
	public static NameEffectSettings Shimmer()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectPresets.c (PatreonEffects.NameEffectPresets$$Shimmer): clean
		NameEffectSettings __this;

		__this.gradientA.r = 0.78;
		__this.gradientA.g = 1.0;
		__this.gradientA.b = 0.9;
		__this.gradientA.a = 1.0;
		__this.gradientB.r = 0.64;
		__this.gradientB.g = 0.95;
		__this.gradientB.b = 1.0;
		__this.gradientB.a = 1.0;
		__this.gradientC.r = 0.86;
		__this.gradientC.g = 0.76;
		__this.gradientC.b = 1.0;
		__this.gradientC.a = 1.0;
		__this.gradientD.r = 1.0;
		__this.gradientD.g = 0.96;
		__this.gradientD.b = 0.82;
		__this.gradientD.a = 1.0;
		__this.gradientScale = 2.8;
		__this.gradientSpeed = 0.16;
		__this.glow = 1.35;
		__this.scanlineStrength = 0.12;
		__this.scanlineDensity = 180.0;
		__this.scanlineSpeed = 0.18;
		__this.flickerStrength = 0.05;
		__this.flickerSpeed = 18.0;
		__this.softness = 1.0;
		__this.popShadowOffset = (Vector2)0xbfc0000000000000;
		__this.popExtrusionOffset = (Vector2)0xc0c0000000000000;
		__this = new NameEffectSettings();
		__this.effectMode = 2;
		__this.gradientA.r = 0.95;
		__this.gradientA.g = 0.58;
		__this.gradientA.b = 0.12;
		__this.gradientA.a = 1.0;
		__this.gradientB.r = 1.0;
		__this.gradientB.g = 0.86;
		__this.gradientB.b = 0.32;
		__this.gradientB.a = 1.0;
		__this.gradientC.r = 1.0;
		__this.gradientC.g = 0.95;
		__this.gradientC.b = 0.58;
		__this.gradientC.a = 1.0;
		__this.gradientD.r = 0.95;
		__this.gradientD.g = 0.58;
		__this.gradientD.b = 0.12;
		__this.gradientD.a = 1.0;
		__this.gradientSpeed = 0.18;
		__this.glow = 0.88;
		__this.scanlineStrength = 0.32;
		__this.scanlineSpeed = 0.18;
		__this.flickerStrength = 0.0;
		__this.softness = 0.9;
		return __this;
	}

	[Token(Token = "0x60003D3")]
	[Address(RVA = "0x58C5B40", Offset = "0x58C4B40", VA = "0x58C5B40")]
	public static NameEffectSettings Pop()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectPresets.c (PatreonEffects.NameEffectPresets$$Pop): clean
		NameEffectSettings __this;

		__this.gradientA.r = 0.78;
		__this.gradientA.g = 1.0;
		__this.gradientA.b = 0.9;
		__this.gradientA.a = 1.0;
		__this.gradientB.r = 0.64;
		__this.gradientB.g = 0.95;
		__this.gradientB.b = 1.0;
		__this.gradientB.a = 1.0;
		__this.gradientC.r = 0.86;
		__this.gradientC.g = 0.76;
		__this.gradientC.b = 1.0;
		__this.gradientC.a = 1.0;
		__this.gradientD.r = 1.0;
		__this.gradientD.g = 0.96;
		__this.gradientD.b = 0.82;
		__this.gradientD.a = 1.0;
		__this.gradientScale = 2.8;
		__this.gradientSpeed = 0.16;
		__this.glow = 1.35;
		__this.scanlineStrength = 0.12;
		__this.scanlineDensity = 180.0;
		__this.scanlineSpeed = 0.18;
		__this.flickerStrength = 0.05;
		__this.flickerSpeed = 18.0;
		__this.softness = 1.0;
		__this.popShadowOffset = (Vector2)0xbfc0000000000000;
		__this.popExtrusionOffset = (Vector2)0xc0c0000000000000;
		__this = new NameEffectSettings();
		__this.effectMode = 1;
		__this.gradientA.r = 1.0;
		__this.gradientA.g = 1.0;
		__this.gradientA.b = 1.0;
		__this.gradientA.a = 1.0;
		__this.gradientB.r = 0.88;
		__this.gradientB.g = 0.95;
		__this.gradientB.b = 1.0;
		__this.gradientB.a = 1.0;
		__this.gradientC.r = 0.07;
		__this.gradientC.g = 0.08;
		__this.gradientC.b = 0.13;
		__this.gradientC.a = 1.0;
		__this.gradientD.r = 0.92;
		__this.gradientD.g = 0.02;
		__this.gradientD.b = 0.29;
		__this.gradientD.a = 1.0;
		__this.gradientScale = 1.0;
		__this.gradientSpeed = 0.0;
		__this.glow = 1.0;
		__this.scanlineStrength = 0.0;
		__this.flickerStrength = 0.0;
		__this.softness = 0.85;
		__this.popShadowOffset = (Vector2)0xbfc0000000000000;
		__this.popExtrusionOffset = (Vector2)0xc0c0000000000000;
		return __this;
	}

	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x58C5C30", Offset = "0x58C4C30", VA = "0x58C5C30")]
	public static NameEffectSettings Ember()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectPresets.c (PatreonEffects.NameEffectPresets$$Ember): clean
		NameEffectSettings __this;

		__this.gradientA.r = 0.78;
		__this.gradientA.g = 1.0;
		__this.gradientA.b = 0.9;
		__this.gradientA.a = 1.0;
		__this.gradientB.r = 0.64;
		__this.gradientB.g = 0.95;
		__this.gradientB.b = 1.0;
		__this.gradientB.a = 1.0;
		__this.gradientC.r = 0.86;
		__this.gradientC.g = 0.76;
		__this.gradientC.b = 1.0;
		__this.gradientC.a = 1.0;
		__this.gradientD.r = 1.0;
		__this.gradientD.g = 0.96;
		__this.gradientD.b = 0.82;
		__this.gradientD.a = 1.0;
		__this.gradientScale = 2.8;
		__this.gradientSpeed = 0.16;
		__this.glow = 1.35;
		__this.scanlineStrength = 0.12;
		__this.scanlineDensity = 180.0;
		__this.scanlineSpeed = 0.18;
		__this.flickerStrength = 0.05;
		__this.flickerSpeed = 18.0;
		__this.softness = 1.0;
		__this.popShadowOffset = (Vector2)0xbfc0000000000000;
		__this.popExtrusionOffset = (Vector2)0xc0c0000000000000;
		__this = new NameEffectSettings();
		__this.effectMode = 3;
		__this.gradientA.r = 0.72;
		__this.gradientA.g = 0.08;
		__this.gradientA.b = 0.02;
		__this.gradientA.a = 1.0;
		__this.gradientB.r = 1.0;
		__this.gradientB.g = 0.36;
		__this.gradientB.b = 0.04;
		__this.gradientB.a = 1.0;
		__this.gradientC.r = 1.0;
		__this.gradientC.g = 0.86;
		__this.gradientC.b = 0.18;
		__this.gradientC.a = 1.0;
		__this.gradientD.r = 1.0;
		__this.gradientD.g = 0.45;
		__this.gradientD.b = 0.08;
		__this.gradientD.a = 1.0;
		__this.gradientScale = 1.15;
		__this.gradientSpeed = 0.42;
		__this.glow = 0.38;
		__this.scanlineStrength = 0.48;
		__this.scanlineDensity = 11.0;
		__this.scanlineSpeed = 0.46;
		__this.flickerStrength = 0.12;
		__this.flickerSpeed = 9.0;
		__this.softness = 0.92;
		return __this;
	}

	[Token(Token = "0x60003D5")]
	[Address(RVA = "0x58C5D20", Offset = "0x58C4D20", VA = "0x58C5D20")]
	public static NameEffectSettings Waves()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectPresets.c (PatreonEffects.NameEffectPresets$$Waves): clean
		NameEffectSettings __this;

		__this.gradientA.r = 0.78;
		__this.gradientA.g = 1.0;
		__this.gradientA.b = 0.9;
		__this.gradientA.a = 1.0;
		__this.gradientB.r = 0.64;
		__this.gradientB.g = 0.95;
		__this.gradientB.b = 1.0;
		__this.gradientB.a = 1.0;
		__this.gradientC.r = 0.86;
		__this.gradientC.g = 0.76;
		__this.gradientC.b = 1.0;
		__this.gradientC.a = 1.0;
		__this.gradientD.r = 1.0;
		__this.gradientD.g = 0.96;
		__this.gradientD.b = 0.82;
		__this.gradientD.a = 1.0;
		__this.gradientScale = 2.8;
		__this.gradientSpeed = 0.16;
		__this.glow = 1.35;
		__this.scanlineStrength = 0.12;
		__this.scanlineDensity = 180.0;
		__this.scanlineSpeed = 0.18;
		__this.flickerStrength = 0.05;
		__this.flickerSpeed = 18.0;
		__this.softness = 1.0;
		__this.popShadowOffset = (Vector2)0xbfc0000000000000;
		__this.popExtrusionOffset = (Vector2)0xc0c0000000000000;
		__this = new NameEffectSettings();
		__this.effectMode = 4;
		__this.gradientA.r = 0.05;
		__this.gradientA.g = 0.34;
		__this.gradientA.b = 0.76;
		__this.gradientA.a = 1.0;
		__this.gradientB.r = 0.08;
		__this.gradientB.g = 0.74;
		__this.gradientB.b = 0.92;
		__this.gradientB.a = 1.0;
		__this.gradientC.r = 0.72;
		__this.gradientC.g = 0.96;
		__this.gradientC.b = 1.0;
		__this.gradientC.a = 1.0;
		__this.gradientD.r = 0.18;
		__this.gradientD.g = 0.86;
		__this.gradientD.b = 1.0;
		__this.gradientD.a = 1.0;
		__this.gradientScale = 0.8;
		__this.gradientSpeed = 0.18;
		__this.glow = 0.42;
		__this.scanlineStrength = 0.24;
		__this.scanlineDensity = 8.0;
		__this.scanlineSpeed = 0.2;
		__this.flickerStrength = 0.0;
		__this.softness = 0.95;
		return __this;
	}

	[Token(Token = "0x60003D6")]
	[Address(RVA = "0x58C5E10", Offset = "0x58C4E10", VA = "0x58C5E10")]
	public static NameEffectSettings Electric()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectPresets.c (PatreonEffects.NameEffectPresets$$Electric): clean
		NameEffectSettings __this;

		__this.gradientA.r = 0.78;
		__this.gradientA.g = 1.0;
		__this.gradientA.b = 0.9;
		__this.gradientA.a = 1.0;
		__this.gradientB.r = 0.64;
		__this.gradientB.g = 0.95;
		__this.gradientB.b = 1.0;
		__this.gradientB.a = 1.0;
		__this.gradientC.r = 0.86;
		__this.gradientC.g = 0.76;
		__this.gradientC.b = 1.0;
		__this.gradientC.a = 1.0;
		__this.gradientD.r = 1.0;
		__this.gradientD.g = 0.96;
		__this.gradientD.b = 0.82;
		__this.gradientD.a = 1.0;
		__this.gradientScale = 2.8;
		__this.gradientSpeed = 0.16;
		__this.glow = 1.35;
		__this.scanlineStrength = 0.12;
		__this.scanlineDensity = 180.0;
		__this.scanlineSpeed = 0.18;
		__this.flickerStrength = 0.05;
		__this.flickerSpeed = 18.0;
		__this.softness = 1.0;
		__this.popShadowOffset = (Vector2)0xbfc0000000000000;
		__this.popExtrusionOffset = (Vector2)0xc0c0000000000000;
		__this = new NameEffectSettings();
		__this.effectMode = 5;
		__this.gradientA.r = 0.08;
		__this.gradientA.g = 0.28;
		__this.gradientA.b = 1.0;
		__this.gradientA.a = 1.0;
		__this.gradientB.r = 0.08;
		__this.gradientB.g = 0.94;
		__this.gradientB.b = 1.0;
		__this.gradientB.a = 1.0;
		__this.gradientC.r = 0.86;
		__this.gradientC.g = 1.0;
		__this.gradientC.b = 1.0;
		__this.gradientC.a = 1.0;
		__this.gradientD.r = 0.24;
		__this.gradientD.g = 0.72;
		__this.gradientD.b = 1.0;
		__this.gradientD.a = 1.0;
		__this.gradientScale = 1.35;
		__this.gradientSpeed = 0.76;
		__this.glow = 0.68;
		__this.scanlineStrength = 0.36;
		__this.scanlineDensity = 18.0;
		__this.scanlineSpeed = 0.82;
		__this.flickerStrength = 0.18;
		__this.flickerSpeed = 16.0;
		__this.softness = 0.82;
		return __this;
	}

	[Token(Token = "0x60003D7")]
	[Address(RVA = "0x58C5F00", Offset = "0x58C4F00", VA = "0x58C5F00")]
	public static NameEffectSettings Outline()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectPresets.c (PatreonEffects.NameEffectPresets$$Outline): clean
		NameEffectSettings __this;

		__this.gradientA.r = 0.78;
		__this.gradientA.g = 1.0;
		__this.gradientA.b = 0.9;
		__this.gradientA.a = 1.0;
		__this.gradientB.r = 0.64;
		__this.gradientB.g = 0.95;
		__this.gradientB.b = 1.0;
		__this.gradientB.a = 1.0;
		__this.gradientC.r = 0.86;
		__this.gradientC.g = 0.76;
		__this.gradientC.b = 1.0;
		__this.gradientC.a = 1.0;
		__this.gradientD.r = 1.0;
		__this.gradientD.g = 0.96;
		__this.gradientD.b = 0.82;
		__this.gradientD.a = 1.0;
		__this.gradientScale = 2.8;
		__this.gradientSpeed = 0.16;
		__this.glow = 1.35;
		__this.scanlineStrength = 0.12;
		__this.scanlineDensity = 180.0;
		__this.scanlineSpeed = 0.18;
		__this.flickerStrength = 0.05;
		__this.flickerSpeed = 18.0;
		__this.softness = 1.0;
		__this.popShadowOffset = (Vector2)0xbfc0000000000000;
		__this.popExtrusionOffset = (Vector2)0xc0c0000000000000;
		__this = new NameEffectSettings();
		__this.effectMode = 6;
		__this.gradientA.r = 1.0;
		__this.gradientA.g = 1.0;
		__this.gradientA.b = 1.0;
		__this.gradientA.a = 1.0;
		__this.gradientB.r = 1.0;
		__this.gradientB.g = 1.0;
		__this.gradientB.b = 1.0;
		__this.gradientB.a = 1.0;
		__this.gradientC.r = 1.0;
		__this.gradientC.g = 1.0;
		__this.gradientC.b = 1.0;
		__this.gradientC.a = 1.0;
		__this.gradientD.r = 0.92;
		__this.gradientD.g = 0.02;
		__this.gradientD.b = 0.29;
		__this.gradientD.a = 1.0;
		__this.gradientScale = 1.0;
		__this.gradientSpeed = 0.0;
		__this.glow = 0.42;
		__this.scanlineStrength = 0.0;
		__this.flickerStrength = 0.0;
		__this.softness = 0.86;
		return __this;
	}

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x58C5FE0", Offset = "0x58C4FE0", VA = "0x58C5FE0")]
	private static bool IsLegacyEffect(string raw)
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectPresets.c (PatreonEffects.NameEffectPresets$$IsLegacyEffect): 2 lines keep C-only constructs
		bool bVar1;
		uint uVar2;
		String* ppSVar3;

		uVar2 = _PrivateImplementationDetails_.ComputeStringHash(raw);
		if (uVar2 < 0x73ce5e6e) {
			if (uVar2 < 0x2c96ccf5) {
				if (uVar2 == 0x58972d5) {
					ppSVar3 = &"Sparkle";
				}
				else {
					if (uVar2 != 0x2c96ccf4) {
						return false;
					}
					ppSVar3 = &"Wave";
				}
			}
			else if (uVar2 == 0x5b778507) {
				ppSVar3 = &"Cosmic";
			}
			else if (uVar2 == 0x624dcb4c) {
				ppSVar3 = &"GradientScroll";
			}
			else {
				if (uVar2 != 0x73ce5e6d) {
					return false;
				}
				ppSVar3 = &"Frost";
			}
		}
		else if (uVar2 < 0x9ce98adb) {
			if (uVar2 == 0x8568fbde) {
				ppSVar3 = &"Electric";
			}
			else if (uVar2 == 0x9ce98ada) {
				ppSVar3 = &"AnimatedOutline";
			}
			else {
				if (uVar2 != 0x771f5d5c) {
					return false;
				}
				ppSVar3 = &"CRT";
			}
		}
		else if (uVar2 == 0xbf0f8b8c) {
			ppSVar3 = &"Toxic";
		}
		else if (uVar2 == 0xd2c95de4) {
			ppSVar3 = &"Ember";
		}
		else {
			if (uVar2 != 0xe9d1810c) {
				return false;
			}
			ppSVar3 = &"Matrix";
		}
		bVar1 = (raw == *ppSVar3);
		if (bVar1) {
			return true;
		}
		return false;
	}
}
