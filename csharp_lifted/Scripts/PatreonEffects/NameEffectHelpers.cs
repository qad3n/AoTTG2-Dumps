// ==================== AoTTG2 cross-reference ====================
// Type: PatreonEffects.NameEffectHelpers
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/PatreonEffects/NameEffectHelpers.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Photon.Realtime;
using Settings;
using UnityEngine;

namespace PatreonEffects;

[Token(Token = "0x200008A")]
public static class NameEffectHelpers
{
	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x58C1090", Offset = "0x58C0090", VA = "0x58C1090")]
	public static bool TryGetNameEffect(Player player, out ResolvedNameEffect result)
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectHelpers.c (PatreonEffects.NameEffectHelpers$$TryGetNameEffect): 34 lines keep C-only constructs
		BoolSetting pSVar1;
		StringSetting pSVar2;
		ColorSetting pSVar3;
		Color255 pUVar4;
		String raw;
		bool bVar5;
		bool bVar6;
		ProfileSettings pSVar7;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dc_02;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		uint extraout_XMM0_Dd_02;
		Color UVar9;
		int local_ac;
		ulong local_a8;
		byte[] local_98 = new byte[16];
		ulong local_88;
		byte[] local_78 = new byte[16];
		ulong local_68;
		byte[] local_58 = new byte[16];
		ulong local_48;
		byte[] local_38 = new byte[16];

		pSVar7 = NameEffectHelpers.GetProfile(player);
		if (pSVar7 == null) {
			result.ColorC.b = 0.0;
			result.ColorC.a = 0.0;
			result.ColorD.r = 0.0;
			result.ColorD.g = 0.0;
			result.ColorB.b = 0.0;
			result.ColorB.a = 0.0;
			result.ColorC.r = 0.0;
			result.ColorC.g = 0.0;
			result.ColorA.b = 0.0;
			result.ColorA.a = 0.0;
			result.ColorB.r = 0.0;
			result.ColorB.g = 0.0;
			result.Enabled = false;
			*(undefined3)&result.field_0x1 = 0;
			result.Type = 0;
			result.ColorA.r = 0.0;
			result.ColorA.g = 0.0;
			result.ColorD.b = 0.0;
			result.ColorD.a = 0.0;
			return false;
		}
		pSVar1 = pSVar7.NameEffectEnabled;
		if ((((pSVar1 != null) &&(pSVar2 = pSVar7.NameEffect, pSVar2 != null)) &&(pSVar3 = pSVar7.NameEffectColorA, pSVar3 != null)) &&(pUVar4 = pSVar3._value, pUVar4 != null)) {
			bVar6 = pSVar1._value;
			raw = pSVar2._value;
			UVar9 = pUVar4.ToColor();
			pSVar3 = pSVar7.NameEffectColorB;
			if (pSVar3 != null) {
				local_38._8_4_ = extraout_XMM0_Dc;
				local_38._0_8_ = UVar9._0_8_;
				local_38._12_4_ = extraout_XMM0_Dd;
				pUVar4 = pSVar3._value;
				local_48 = UVar9._8_8_;
				if (pUVar4 != null) {
					UVar9 = pUVar4.ToColor();
					pSVar3 = pSVar7.NameEffectColorC;
					if (pSVar3 != null) {
						local_58._8_4_ = extraout_XMM0_Dc_00;
						local_58._0_8_ = UVar9._0_8_;
						local_58._12_4_ = extraout_XMM0_Dd_00;
						pUVar4 = pSVar3._value;
						local_68 = UVar9._8_8_;
						if (pUVar4 != null) {
							UVar9 = pUVar4.ToColor();
							pSVar3 = pSVar7.NameEffectColorD;
							if (pSVar3 != null) {
								local_78._8_4_ = extraout_XMM0_Dc_01;
								local_78._0_8_ = UVar9._0_8_;
								local_78._12_4_ = extraout_XMM0_Dd_01;
								pUVar4 = pSVar3._value;
								local_88 = UVar9._8_8_;
								if (pUVar4 != null) {
									UVar9 = pUVar4.ToColor();
									local_a8 = UVar9._8_8_;
									local_ac = 0;
									result.ColorC.b = 0.0;
									result.ColorC.a = 0.0;
									result.ColorD.r = 0.0;
									result.ColorD.g = 0.0;
									result.ColorB.b = 0.0;
									result.ColorB.a = 0.0;
									result.ColorC.r = 0.0;
									result.ColorC.g = 0.0;
									result.ColorA.b = 0.0;
									result.ColorA.a = 0.0;
									result.ColorB.r = 0.0;
									result.ColorB.g = 0.0;
									result.Enabled = false;
									*(undefined3)&result.field_0x1 = 0;
									result.Type = 0;
									result.ColorA.r = 0.0;
									result.ColorA.g = 0.0;
									result.ColorD.b = 0.0;
									result.ColorD.a = 0.0;
									if (player == null) {
										return false;
									}
									local_98._8_4_ = extraout_XMM0_Dc_02;
									local_98._0_8_ = UVar9._0_8_;
									local_98._12_4_ = extraout_XMM0_Dd_02;
									bVar5 = PatreonHelper.HasNameEffectAccess(player);
									if (bVar6 == false) {
										return false;
									}
									if (!bVar5) {
										return false;
									}
									bVar6 = NameEffectPresets.TryResolve(raw, ref local_ac);
									if (bVar6) {
										result.Enabled = true;
										result.Type = local_ac;
										result.ColorA.r = (float)local_38._0_4_;
										result.ColorA.g = (float)local_38._4_4_;
										result.ColorA.b = (float)local_48;
										result.ColorA.a = (float)((ulong)local_48 >> 0x20);
										result.ColorB.r = (float)local_58._0_4_;
										result.ColorB.g = (float)local_58._4_4_;
										result.ColorB.b = (float)local_68;
										result.ColorB.a = (float)((ulong)local_68 >> 0x20);
										result.ColorC.r = (float)local_78._0_4_;
										result.ColorC.g = (float)local_78._4_4_;
										result.ColorC.b = (float)local_88;
										result.ColorC.a = (float)((ulong)local_88 >> 0x20);
										result.ColorD.r = (float)local_98._0_4_;
										result.ColorD.g = (float)local_98._4_4_;
										result.ColorD.b = (float)local_a8;
										result.ColorD.a = (float)((ulong)local_a8 >> 0x20);
										return true;
									}
									return false;
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x58C6380", Offset = "0x58C5380", VA = "0x58C6380")]
	public static bool TryGetGuildEffect(Player player, out ResolvedNameEffect result)
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectHelpers.c (PatreonEffects.NameEffectHelpers$$TryGetGuildEffect): 34 lines keep C-only constructs
		BoolSetting pSVar1;
		StringSetting pSVar2;
		ColorSetting pSVar3;
		Color255 pUVar4;
		String raw;
		bool bVar5;
		bool bVar6;
		ProfileSettings pSVar7;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dc_02;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		uint extraout_XMM0_Dd_02;
		Color UVar9;
		int local_ac;
		ulong local_a8;
		byte[] local_98 = new byte[16];
		ulong local_88;
		byte[] local_78 = new byte[16];
		ulong local_68;
		byte[] local_58 = new byte[16];
		ulong local_48;
		byte[] local_38 = new byte[16];

		pSVar7 = NameEffectHelpers.GetProfile(player);
		if (pSVar7 == null) {
			result.ColorC.b = 0.0;
			result.ColorC.a = 0.0;
			result.ColorD.r = 0.0;
			result.ColorD.g = 0.0;
			result.ColorB.b = 0.0;
			result.ColorB.a = 0.0;
			result.ColorC.r = 0.0;
			result.ColorC.g = 0.0;
			result.ColorA.b = 0.0;
			result.ColorA.a = 0.0;
			result.ColorB.r = 0.0;
			result.ColorB.g = 0.0;
			result.Enabled = false;
			*(undefined3)&result.field_0x1 = 0;
			result.Type = 0;
			result.ColorA.r = 0.0;
			result.ColorA.g = 0.0;
			result.ColorD.b = 0.0;
			result.ColorD.a = 0.0;
			return false;
		}
		pSVar1 = pSVar7.GuildEffectEnabled;
		if ((((pSVar1 != null) &&(pSVar2 = pSVar7.GuildEffect, pSVar2 != null)) &&(pSVar3 = pSVar7.GuildEffectColorA, pSVar3 != null)) &&(pUVar4 = pSVar3._value, pUVar4 != null)) {
			bVar6 = pSVar1._value;
			raw = pSVar2._value;
			UVar9 = pUVar4.ToColor();
			pSVar3 = pSVar7.GuildEffectColorB;
			if (pSVar3 != null) {
				local_38._8_4_ = extraout_XMM0_Dc;
				local_38._0_8_ = UVar9._0_8_;
				local_38._12_4_ = extraout_XMM0_Dd;
				pUVar4 = pSVar3._value;
				local_48 = UVar9._8_8_;
				if (pUVar4 != null) {
					UVar9 = pUVar4.ToColor();
					pSVar3 = pSVar7.GuildEffectColorC;
					if (pSVar3 != null) {
						local_58._8_4_ = extraout_XMM0_Dc_00;
						local_58._0_8_ = UVar9._0_8_;
						local_58._12_4_ = extraout_XMM0_Dd_00;
						pUVar4 = pSVar3._value;
						local_68 = UVar9._8_8_;
						if (pUVar4 != null) {
							UVar9 = pUVar4.ToColor();
							pSVar3 = pSVar7.GuildEffectColorD;
							if (pSVar3 != null) {
								local_78._8_4_ = extraout_XMM0_Dc_01;
								local_78._0_8_ = UVar9._0_8_;
								local_78._12_4_ = extraout_XMM0_Dd_01;
								pUVar4 = pSVar3._value;
								local_88 = UVar9._8_8_;
								if (pUVar4 != null) {
									UVar9 = pUVar4.ToColor();
									local_a8 = UVar9._8_8_;
									local_ac = 0;
									result.ColorC.b = 0.0;
									result.ColorC.a = 0.0;
									result.ColorD.r = 0.0;
									result.ColorD.g = 0.0;
									result.ColorB.b = 0.0;
									result.ColorB.a = 0.0;
									result.ColorC.r = 0.0;
									result.ColorC.g = 0.0;
									result.ColorA.b = 0.0;
									result.ColorA.a = 0.0;
									result.ColorB.r = 0.0;
									result.ColorB.g = 0.0;
									result.Enabled = false;
									*(undefined3)&result.field_0x1 = 0;
									result.Type = 0;
									result.ColorA.r = 0.0;
									result.ColorA.g = 0.0;
									result.ColorD.b = 0.0;
									result.ColorD.a = 0.0;
									if (player == null) {
										return false;
									}
									local_98._8_4_ = extraout_XMM0_Dc_02;
									local_98._0_8_ = UVar9._0_8_;
									local_98._12_4_ = extraout_XMM0_Dd_02;
									bVar5 = PatreonHelper.HasNameEffectAccess(player);
									if (bVar6 == false) {
										return false;
									}
									if (!bVar5) {
										return false;
									}
									bVar6 = NameEffectPresets.TryResolve(raw, ref local_ac);
									if (bVar6) {
										result.Enabled = true;
										result.Type = local_ac;
										result.ColorA.r = (float)local_38._0_4_;
										result.ColorA.g = (float)local_38._4_4_;
										result.ColorA.b = (float)local_48;
										result.ColorA.a = (float)((ulong)local_48 >> 0x20);
										result.ColorB.r = (float)local_58._0_4_;
										result.ColorB.g = (float)local_58._4_4_;
										result.ColorB.b = (float)local_68;
										result.ColorB.a = (float)((ulong)local_68 >> 0x20);
										result.ColorC.r = (float)local_78._0_4_;
										result.ColorC.g = (float)local_78._4_4_;
										result.ColorC.b = (float)local_88;
										result.ColorC.a = (float)((ulong)local_88 >> 0x20);
										result.ColorD.r = (float)local_98._0_4_;
										result.ColorD.g = (float)local_98._4_4_;
										result.ColorD.b = (float)local_a8;
										result.ColorD.a = (float)((ulong)local_a8 >> 0x20);
										return true;
									}
									return false;
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x58C6170", Offset = "0x58C5170", VA = "0x58C6170")]
	private static ProfileSettings GetProfile(Player player)
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectHelpers.c (PatreonEffects.NameEffectHelpers$$GetProfile): 2 lines keep C-only constructs
		bool bVar1;
		Dictionary<int, PlayerInfo> __this;
		object local_18;

		local_18 = null;
		if (player != null) {
			if ((typeof(InGameManager)._2).cctor_finished_or_no_cctor == 0) {
				__this = InGameManager.AllPlayerInfo;
			}
			else {
				__this = InGameManager.AllPlayerInfo;
			}
			if (__this != null) {
				if (((typeof(InGameManager))._2).cctor_finished_or_no_cctor == 0) {
					__this = InGameManager.AllPlayerInfo;
					if (__this == null) {
						throw new NullReferenceException();
					}
				}
				bVar1 = __this.TryGetValue(player.actorNumber, ref local_18);
				if ((bVar1) && (local_18 != null)) {
					local_18 = local_18 + 3;
					goto label_059c6260;
				}
			}
			if (player.IsLocal != false) {
				local_18 = (object)&SettingsManager.ProfileSettings;
	label_059c6260: ;
				return (ProfileSettings)local_18.klass;
			}
		}
		return null;
	}

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x58C6280", Offset = "0x58C5280", VA = "0x58C6280")]
	private static bool TryGet(Player player, ProfileSettings profile, bool enabled, string effectStr, Color colorA, Color colorB, Color colorC, Color colorD, out ResolvedNameEffect result)
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectHelpers.c (PatreonEffects.NameEffectHelpers$$TryGet): 18 lines keep C-only constructs
		bool bVar1;
		bool bVar2;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		int iStack_9c;
		ulong uStack_98;
		byte[] auStack_88 = new byte[16];
		ulong uStack_78;
		ulong uStack_68;
		ulong uStack_58;
		ulong uStack_48;
		ulong uStack_38;
		ulong uStack_28;

		uStack_58 = colorC._8_8_;
		uStack_48 = colorC._0_8_;
		uStack_38 = colorD._8_8_;
		uStack_28 = colorD._0_8_;
		uStack_78 = colorB._8_8_;
		uStack_68 = colorB._0_8_;
		uStack_98 = colorA._8_8_;
		iStack_9c = 0;
		result.ColorC.b = 0.0;
		result.ColorC.a = 0.0;
		result.ColorD.r = 0.0;
		result.ColorD.g = 0.0;
		result.ColorB.b = 0.0;
		result.ColorB.a = 0.0;
		result.ColorC.r = 0.0;
		result.ColorC.g = 0.0;
		result.ColorA.b = 0.0;
		result.ColorA.a = 0.0;
		result.ColorB.r = 0.0;
		result.ColorB.g = 0.0;
		result.Enabled = false;
		*(undefined3)&result.field_0x1 = 0;
		result.Type = 0;
		result.ColorA.r = 0.0;
		result.ColorA.g = 0.0;
		result.ColorD.b = 0.0;
		result.ColorD.a = 0.0;
		bVar2 = false;
		if (player != null) {
			auStack_88._8_4_ = in_XMM0_Dc;
			auStack_88._0_8_ = colorA._0_8_;
			auStack_88._12_4_ = in_XMM0_Dd;
			if (profile != null) {
				bVar1 = PatreonHelper.HasNameEffectAccess(player);
				bVar2 = false;
				if ((bVar1) && (enabled)) {
					bVar2 = NameEffectPresets.TryResolve(effectStr, ref iStack_9c);
					if (bVar2) {
						result.Enabled = true;
						result.Type = iStack_9c;
						result.ColorA.r = (float)auStack_88._0_4_;
						result.ColorA.g = (float)auStack_88._4_4_;
						result.ColorA.b = (float)uStack_98;
						result.ColorA.a = (float)((ulong)uStack_98 >> 0x20);
						result.ColorB.r = (float)uStack_68;
						result.ColorB.g = uStack_68._4_4_;
						result.ColorB.b = (float)uStack_78;
						result.ColorB.a = (float)((ulong)uStack_78 >> 0x20);
						result.ColorC.r = (float)uStack_48;
						result.ColorC.g = uStack_48._4_4_;
						result.ColorC.b = (float)uStack_58;
						result.ColorC.a = (float)((ulong)uStack_58 >> 0x20);
						result.ColorD.r = (float)uStack_28;
						result.ColorD.g = uStack_28._4_4_;
						result.ColorD.b = (float)uStack_38;
						result.ColorD.a = (float)((ulong)uStack_38 >> 0x20);
						bVar2 = true;
					}
					else {
						bVar2 = false;
					}
				}
			}
		}
		return bVar2;
	}
}
