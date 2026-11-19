// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCharacterEffectUi
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterEffectUi.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002E8")]
internal static class AottgCharacterEffectUi
{
	[Token(Token = "0x4000EB5")]
	public const string ColorMode = "Color";

	[Token(Token = "0x4000EB6")]
	public const string TwoColorGradientMode = "TwoColorGradient";

	[Token(Token = "0x4000EB7")]
	public const string FourColorGradientMode = "FourColorGradient";

	[Token(Token = "0x4000EB8")]
	private const string EffectKeyPrefix = "MainMenu.Profile.Effect.";

	[Token(Token = "0x4000EB9")]
	public const string SupporterTooltipKey = "MainMenu.Profile.SupporterOnlyFeature";

	[Token(Token = "0x60011B7")]
	[Address(RVA = "0x57D8B90", Offset = "0x57D7B90", VA = "0x57D8B90")]
	public static GisketchChoiceOptionDefinition[] Options(bool hasAccess)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterEffectUi.c (Gisketch.Aottg2UI.Game.AottgCharacterEffectUi$$Options): clean
		uint uVar1;
		Il2CppType handle;
		bool bVar2;
		Type enumType;
		String[] pSVar3;
		GisketchChoiceOptionDefinition[] pGVar4;
		String pSVar5;
		GisketchChoiceOptionDefinition pGVar6;
		ulong uVar7;
		String pSVar8;
		uint uVar9;
		ulong uVar10;

		handle = TypeRef_PatreonEffects_NameEffectType;
		enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		pSVar3 = Enum.GetNames(enumType);
		if (pSVar3 != null) {
			pGVar4 = (GisketchChoiceOptionDefinition[])new GisketchChoiceOptionDefinition[(int)pSVar3.Length + 2];
			pSVar8 = "Color";
			pSVar5 = String.Concat("MainMenu.Profile.Effect.", pSVar8);
			pSVar5 = Aottg2GisketchLocale.Text(pSVar5);
			pGVar6 = AottgCharacterEffectUi.Option(pSVar8, pSVar5);
			if (pGVar4 != null) {
				if ((int)pGVar4.Length != 0) {
					pGVar4[0] = pGVar6;
					pSVar8 = "TwoColorGradient";
					pSVar5 = String.Concat("MainMenu.Profile.Effect.", pSVar8);
					if ((typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor == 0 ) {
					}
					pSVar5 = Aottg2GisketchLocale.Text(pSVar5);
					pGVar6 = AottgCharacterEffectUi.Option(pSVar8, pSVar5);
					if ((pGVar4.Length & 0xfffffffe) != 0) {
						pGVar4[1] = pGVar6;
						pSVar8 = "FourColorGradient";
						pSVar5 = String.Concat("MainMenu.Profile.Effect.", pSVar8);
						pSVar5 = Aottg2GisketchLocale.Text(pSVar5);
						pGVar6 = AottgCharacterEffectUi.Option(pSVar8, pSVar5);
						if (2 < (uint)pGVar4.Length) {
							pGVar4[2] = pGVar6;
							if (0 < (int)pSVar3.Length) {
								uVar7 = pSVar3.Length & 0xffffffff;
								uVar9 = 3;
								uVar10 = 0;
								do {
									if (uVar7 <= uVar10) goto label_058d8f93;
									pSVar8 = pSVar3[uVar10];
									bVar2 = (pSVar8 == "None");
									if (!bVar2) {
										pSVar5 = String.Concat("MainMenu.Profile.Effect.", pSVar8);
										if ((typeof(Aottg2GisketchLocale)._2). cctor_finished_or_no_cctor == 0) {
										}
										pSVar5 = Aottg2GisketchLocale.Text(pSVar5, pSVar8);
										pGVar6 = AottgCharacterEffectUi.Option(pSVar8, pSVar5);
										if (pGVar6 == null) goto label_058d8f98;
										pGVar6.enabled = hasAccess;
										if (hasAccess) {
											pSVar8 = null;
										}
										else {
											pSVar8 = "MainMenu.Profile.SupporterOnlyFeature";
										}
										pGVar6.tooltipKey = pSVar8;
										if ((uint)pGVar4.Length <= uVar9) goto label_058d8f93;
										pGVar4[(int)uVar9] = pGVar6;
										uVar9 = uVar9 + 1;
									}
									uVar10 = uVar10 + 1;
									uVar1 = (uint)pSVar3.Length;
									uVar7 = (ulong)uVar1;
								} while ((long)uVar10 < (long)(int)uVar1);
							}
							return pGVar4;
						}
					}
				}
	label_058d8f93: ;
				throw new IndexOutOfRangeException();
			}
		}
	label_058d8f98: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60011B8")]
	[Address(RVA = "0x57D8FA0", Offset = "0x57D7FA0", VA = "0x57D8FA0")]
	private static GisketchChoiceOptionDefinition Option(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterEffectUi.c (Gisketch.Aottg2UI.Game.AottgCharacterEffectUi$$Option): clean
		String pSVar1;
		GisketchChoiceOptionDefinition pGVar2;

		pSVar1 = String.Concat("MainMenu.Profile.Effect.", value);
		pSVar1 = Aottg2GisketchLocale.Text(pSVar1);
		pGVar2 = AottgCharacterEffectUi.Option(value, pSVar1);
		return pGVar2;
	}

	[Token(Token = "0x60011B9")]
	[Address(RVA = "0x57D9020", Offset = "0x57D8020", VA = "0x57D9020")]
	private static GisketchChoiceOptionDefinition Option(string value, string text)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterEffectUi.c (Gisketch.Aottg2UI.Game.AottgCharacterEffectUi$$Option): clean
		GisketchChoiceOptionDefinition __this;
		String pSVar1;

		__this = new GisketchChoiceOptionDefinition();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.value = value;
		__this.text = text;
		pSVar1 = String.Concat("MainMenu.Profile.Effect.", value);
		__this.textKey = pSVar1;
		return __this;
	}

	[Token(Token = "0x60011BA")]
	[Address(RVA = "0x57D90D0", Offset = "0x57D80D0", VA = "0x57D90D0")]
	public static bool IsTextColorMode(string type)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterEffectUi.c (Gisketch.Aottg2UI.Game.AottgCharacterEffectUi$$IsTextColorMode): clean
		bool bVar1;

		bVar1 = (type == "Color");
		if (!bVar1) {
			bVar1 = (type == "TwoColorGradient");
			if (!bVar1) {
				bVar1 = (type == "FourColorGradient");
				return bVar1;
			}
		}
		return true;
	}

	[Token(Token = "0x60011BB")]
	[Address(RVA = "0x57D9160", Offset = "0x57D8160", VA = "0x57D9160")]
	public static int GradientStops(string type)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterEffectUi.c (Gisketch.Aottg2UI.Game.AottgCharacterEffectUi$$GradientStops): clean
		bool bVar1;
		int iVar2;

		bVar1 = (type == "TwoColorGradient");
		if (!bVar1) {
			bVar1 = (type == "FourColorGradient");
			iVar2 = (uint)bVar1 << 2;
		}
		return iVar2;
	}

	[Token(Token = "0x60011BC")]
	[Address(RVA = "0x57D91D0", Offset = "0x57D81D0", VA = "0x57D91D0")]
	public static string SelectValue(bool hasAccess, bool enabled, string type)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterEffectUi.c (Gisketch.Aottg2UI.Game.AottgCharacterEffectUi$$SelectValue): 1 lines keep C-only constructs
		bool bVar1;
		String pSVar2;
		int local_34;
		Enum local_30;

		local_34 = 0;
		if (((hasAccess) && (enabled)) &&(bVar1 = NameEffectPresets.TryResolve(type, ref local_34))) {
			local_30.klass = (Enum)typeof(NameEffectType);
			local_30.monitor = (IntPtr)0xffffffffffffffff;
			return pSVar2;
		}
		return "Color";
	}

	[Token(Token = "0x60011BD")]
	[Address(RVA = "0x57D9270", Offset = "0x57D8270", VA = "0x57D9270")]
	public static bool IsEffect(bool enabled, string type)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterEffectUi.c (Gisketch.Aottg2UI.Game.AottgCharacterEffectUi$$IsEffect): clean
		bool bVar1;

		if (enabled) {
			bVar1 = String.IsNullOrEmpty(type);
			if (!bVar1) {
				bVar1 = (type != "None");
				return bVar1;
			}
		}
		return false;
	}

	[Token(Token = "0x60011BE")]
	[Address(RVA = "0x57D92D0", Offset = "0x57D82D0", VA = "0x57D92D0")]
	public static string[] PresetColors(string type)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterEffectUi.c (Gisketch.Aottg2UI.Game.AottgCharacterEffectUi$$PresetColors): 40 lines keep C-only constructs
		ulong uVar1;
		ulong uVar2;
		ulong uVar3;
		ulong uVar4;
		ulong uVar5;
		ulong uVar6;
		ulong uVar7;
		ulong uVar8;
		bool bVar9;
		NameEffectSettings pPVar10;
		String[] pSVar11;
		String pSVar12;
		int local_4c;
		ulong local_48;
		ulong local_38;
		Color local_28;

		local_4c = 0;
		bVar9 = NameEffectPresets.TryResolve(type, ref local_4c);
		if (bVar9) {
			pPVar10 = NameEffectPresets.GetPreset(local_4c);
			pSVar11 = (String[])new string[4];
			if (pPVar10 != null) {
				uVar1._0_4_ = pPVar10.gradientA.r;
				uVar1._4_4_ = pPVar10.gradientA.g;
				uVar2._0_4_ = pPVar10.gradientA.b;
				uVar2._4_4_ = pPVar10.gradientA.a;
				if (Il2CppMethodInitialized_075454c4 == false) {
					local_48 = uVar2;
					local_38 = uVar1;
					Il2CppMethodInitialized_075454c4 = true;
					uVar1._0_4_ = (float)local_38;
					uVar1._4_4_ = local_38._4_4_;
					uVar2._0_4_ = (float)local_48;
					uVar2._4_4_ = local_48._4_4_;
				}
				local_28.r = (float)uVar1;
				local_28.g = uVar1._4_4_;
				local_28.b = (float)uVar2;
				local_28.a = uVar2._4_4_;
				pSVar12 = ColorUtility.ToHtmlStringRGBA(ref local_28);
				pSVar12 = String.Concat("#", pSVar12);
				if (pSVar11 != null) {
					if ((int)pSVar11.Length != 0) {
						pSVar11[0] = pSVar12;
						uVar3._0_4_ = pPVar10.gradientB.r;
						uVar3._4_4_ = pPVar10.gradientB.g;
						uVar4._0_4_ = pPVar10.gradientB.b;
						uVar4._4_4_ = pPVar10.gradientB.a;
						if (Il2CppMethodInitialized_075454c4 == false) {
							local_48 = uVar4;
							local_38 = uVar3;
							Il2CppMethodInitialized_075454c4 = true;
							uVar3._0_4_ = (float)local_38;
							uVar3._4_4_ = local_38._4_4_;
							uVar4._0_4_ = (float)local_48;
							uVar4._4_4_ = local_48._4_4_;
						}
						local_28.r = (float)uVar3;
						local_28.g = uVar3._4_4_;
						local_28.b = (float)uVar4;
						local_28.a = uVar4._4_4_;
						pSVar12 = ColorUtility.ToHtmlStringRGBA(ref local_28);
						pSVar12 = String.Concat("#", pSVar12);
						if ((pSVar11.Length & 0xfffffffe) != 0) {
							pSVar11[1] = pSVar12;
							uVar5._0_4_ = pPVar10.gradientC.r;
							uVar5._4_4_ = pPVar10.gradientC.g;
							uVar6._0_4_ = pPVar10.gradientC.b;
							uVar6._4_4_ = pPVar10.gradientC.a;
							if (Il2CppMethodInitialized_075454c4 == false) {
								local_48 = uVar6;
								local_38 = uVar5;
								Il2CppMethodInitialized_075454c4 = true;
								uVar5._0_4_ = (float)local_38;
								uVar5._4_4_ = local_38._4_4_;
								uVar6._0_4_ = (float)local_48;
								uVar6._4_4_ = local_48._4_4_;
							}
							local_28.r = (float)uVar5;
							local_28.g = uVar5._4_4_;
							local_28.b = (float)uVar6;
							local_28.a = uVar6._4_4_;
							pSVar12 = ColorUtility.ToHtmlStringRGBA(ref local_28);
							pSVar12 = String.Concat("#", pSVar12);
							if (2 < (uint)pSVar11.Length) {
								pSVar11[2] = pSVar12;
								uVar7._0_4_ = pPVar10.gradientD.r;
								uVar7._4_4_ = pPVar10.gradientD.g;
								uVar8._0_4_ = pPVar10.gradientD.b;
								uVar8._4_4_ = pPVar10.gradientD.a;
								if (Il2CppMethodInitialized_075454c4 == false) {
									local_48 = uVar8;
									local_38 = uVar7;
									Il2CppMethodInitialized_075454c4 = true;
									uVar7._0_4_ = (float)local_38;
									uVar7._4_4_ = local_38._4_4_;
									uVar8._0_4_ = (float)local_48;
									uVar8._4_4_ = local_48._4_4_;
								}
								local_28.r = (float)uVar7;
								local_28.g = uVar7._4_4_;
								local_28.b = (float)uVar8;
								local_28.a = uVar8._4_4_;
								pSVar12 = ColorUtility.ToHtmlStringRGBA(ref local_28);
								pSVar12 = String.Concat("#", pSVar12);
								if ((pSVar11.Length & 0xfffffffc) != 0) {
									pSVar11[3] = pSVar12;
									goto label_058d95c2;
								}
							}
						}
					}
					goto label_058d95d4;
				}
			}
		}
		else {
			pSVar11 = (String[])new string[4];
			if (pSVar11 != null) {
				if ((int)pSVar11.Length != 0) {
					pSVar11[0] = "#FFFFFFFF";
					if ((pSVar11.Length & 0xfffffffe) != 0) {
						pSVar11[1] = "#FFFFFFFF";
						if (2 < (uint)pSVar11.Length) {
							pSVar11[2] = "#FFFFFFFF";
							if ((pSVar11.Length & 0xfffffffc) != 0) {
								pSVar11[3] = "#FFFFFFFF";
	label_058d95c2: ;
								return pSVar11;
							}
						}
					}
				}
	label_058d95d4: ;
				throw new IndexOutOfRangeException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60011BF")]
	[Address(RVA = "0x57D95E0", Offset = "0x57D85E0", VA = "0x57D95E0")]
	private static string Hex(Color color)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterEffectUi.c (Gisketch.Aottg2UI.Game.AottgCharacterEffectUi$$Hex): clean
		String pSVar1;
		Color UStack_10;

		UStack_10.r = color.r;
		UStack_10.g = color.g;
		UStack_10.b = color.b;
		UStack_10.a = color.a;
		pSVar1 = ColorUtility.ToHtmlStringRGBA(ref UStack_10);
		pSVar1 = String.Concat("#", pSVar1);
		return pSVar1;
	}
}
