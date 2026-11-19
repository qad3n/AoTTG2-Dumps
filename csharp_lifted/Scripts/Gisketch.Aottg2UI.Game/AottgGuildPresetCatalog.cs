// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetCatalog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetCatalog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using PatreonEffects;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000307")]
internal static class AottgGuildPresetCatalog
{
	[Token(Token = "0x4000F69")]
	public const string Custom = "Custom";

	[Token(Token = "0x4000F6A")]
	public const string Team = "aottg2_developer_team";

	[Token(Token = "0x4000F6B")]
	public const string Supporter = "supporter";

	[Token(Token = "0x60012F7")]
	[Address(RVA = "0x57F6A80", Offset = "0x57F5A80", VA = "0x57F6A80")]
	public static bool TryGet(string id, out AottgGuildPresetDefinition definition)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetCatalog.c (Gisketch.Aottg2UI.Game.AottgGuildPresetCatalog$$TryGet): 7 lines keep C-only constructs
		String pSVar1;
		String pSVar2;
		bool bVar3;
		String local_48;
		String pSStack_40;
		ulong uStack_38;
		String pSStack_30;
		ulong uStack_28;

		bVar3 = (id == "aottg2_developer_team");
		pSVar2 = "UI/GuildPresets/GuildAoTTG2";
		pSVar1 = "AoTTG 2 Team";
		if (bVar3) {
			pSStack_30 = null;
			uStack_28 = 0;
			pSStack_40 = null;
			uStack_38 = 0;
			local_48 = "aottg2_developer_team";
			pSStack_40 = pSVar1;
			uStack_38 = CONCAT44(uStack_38._4_4_, 1);
			pSStack_30 = pSVar2;
			uStack_28 = CONCAT44(uStack_28._4_4_, 0x3f8ccccd);
		}
		else {
			bVar3 = (id == "supporter");
			pSVar1 = "SUPPORTER";
			if (!bVar3) {
				*(ulong)&definition.Kind = 0;
				definition.Sprite = null;
				definition.Id = null;
				definition.Label = null;
				*(ulong)&definition.ImageScale = 0;
				return false;
			}
			pSStack_30 = null;
			uStack_28 = 0;
			pSStack_40 = null;
			uStack_38 = 0;
			local_48 = "supporter";
			pSStack_40 = pSVar1;
			uStack_38 = uStack_38 & 0xffffffff00000000;
			pSStack_30 = null;
			uStack_28 = CONCAT44(uStack_28._4_4_, 0x3f800000);
		}
		*(ulong)&definition.Kind = uStack_38;
		definition.Sprite = pSStack_30;
		definition.Id = local_48;
		definition.Label = pSStack_40;
		*(ulong)&definition.ImageScale = uStack_28;
		return true;
	}

	[Token(Token = "0x60012F8")]
	[Address(RVA = "0x57E04B0", Offset = "0x57DF4B0", VA = "0x57E04B0")]
	public static string Label(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetCatalog.c (Gisketch.Aottg2UI.Game.AottgGuildPresetCatalog$$Label): 2 lines keep C-only constructs
		bool bVar1;
		AottgGuildPresetDefinition local_38;

		local_38.Kind = 0;
		local_38._20_4_ = 0;
		local_38.Sprite = null;
		local_38.Id = null;
		local_38.Label = null;
		local_38.ImageScale = 0.0;
		local_38._36_4_ = 0;
		bVar1 = AottgGuildPresetCatalog.TryGet(id, ref local_38);
		if (bVar1) {
			id = local_38.Label;
		}
		return id;
	}

	[Token(Token = "0x60012F9")]
	[Address(RVA = "0x57F6C30", Offset = "0x57F5C30", VA = "0x57F6C30")]
	public static NameEffectSettings SupporterShimmer()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetCatalog.c (Gisketch.Aottg2UI.Game.AottgGuildPresetCatalog$$SupporterShimmer): clean
		NameEffectSettings __this;

		__this = new NameEffectSettings();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.effectMode = 2;
		__this.gradientA.r = 0.84;
		__this.gradientA.g = 0.2;
		__this.gradientA.b = 0.9;
		__this.gradientA.a = 1.0;
		__this.gradientB.r = 0.96;
		__this.gradientB.g = 0.5;
		__this.gradientB.b = 1.0;
		__this.gradientB.a = 1.0;
		__this.gradientC.r = 1.0;
		__this.gradientC.g = 0.6;
		__this.gradientC.b = 1.0;
		__this.gradientC.a = 1.0;
		__this.gradientD.r = 0.84;
		__this.gradientD.g = 0.2;
		__this.gradientD.b = 0.9;
		__this.gradientD.a = 1.0;
		__this.gradientSpeed = 0.16;
		__this.glow = 0.82;
		__this.scanlineStrength = 0.24;
		__this.scanlineSpeed = 0.16;
		__this.flickerStrength = 0.0;
		__this.softness = 0.9;
		return __this;
	}
}
