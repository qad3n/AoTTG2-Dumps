// ==================== AoTTG2 cross-reference ====================
// Type: Characters.HumanSetupTextures
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/HumanSetupTextures.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Setup/HumanSetupTextures.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006D1")]
internal class HumanSetupTextures
{
	[Token(Token = "0x4002053")]
	[FieldOffset(Offset = "0x10")]
	private HumanSetup _setup;

	[Token(Token = "0x6004279")]
	[Address(RVA = "0x5B076A0", Offset = "0x5B066A0", VA = "0x5B076A0")]
	public HumanSetupTextures(HumanSetup setup)
	{
		// Lifted from source/cpp/Characters/HumanSetupTextures.c (Characters.HumanSetupTextures$$.ctor): clean
		base();
		this._setup = setup;
		return;
	}

	[Token(Token = "0x600427A")]
	[Address(RVA = "0x5B076D0", Offset = "0x5B066D0", VA = "0x5B076D0")]
	public string Get3dmgTexture()
	{
		// Lifted from source/cpp/Characters/HumanSetupTextures.c (Characters.HumanSetupTextures$$Get3dmgTexture): 1 lines keep C-only constructs
		int iVar1;
		HumanSetup pCVar2;
		String* ppSVar3;

		pCVar2 = this._setup;
		if (pCVar2 == null) {
			throw new NullReferenceException();
		}
		iVar1 = pCVar2.Weapon;
		if (iVar1 == 3) {
			ppSVar3 = &"Misc/aottg_hero_APG_3dmg";
		}
		else {
			ppSVar3 = &"Misc/AOTTG_HERO_3DMG";
			if (iVar1 == 1) {
				ppSVar3 = &"Misc/aottg_hero_AHSS_3dmg";
			}
		}
		return *ppSVar3;
	}

	[Token(Token = "0x600427B")]
	[Address(RVA = "0x5B07750", Offset = "0x5B06750", VA = "0x5B07750")]
	public string GetBrandTexture()
	{
		// Lifted from source/cpp/Characters/HumanSetupTextures.c (Characters.HumanSetupTextures$$GetBrandTexture): 1 lines keep C-only constructs
		HumanSetup pCVar1;
		HumanCustomSet pSVar2;
		IntSetting pSVar3;
		ulong uVar4;
		byte* ppuVar5;

		pCVar1 = this._setup;
		if (((pCVar1 == null) ||(pSVar2 = pCVar1.CustomSet, pSVar2 == null)) ||(pSVar3 = pSVar2.Logo, pSVar3 == null)) {
			throw new NullReferenceException();
		}
		uVar4 = (ulong)pSVar3._value;
		ppuVar5 = __stringSlots(new string[] { "Brand/aottg_hero_brand_ts", "Brand/aottg_hero_brand_sc", "Brand/aottg_hero_brand_g", "Brand/aottg_hero_brand_mp", "goto", "return", "break", "continue", "IO error", "Invalid argument(s)", "Unknown error", "Unknown error", "Unknown error", "Invalid version", "Internal error (no progress possible)", "Not enough memory", "Corrupted data", "Internal error", "x*(", "x+(", "x+(", "x-(", "x+(", "x/(", "=", ":", ">", ">=", "<", "<=", "!=", "-", "var", "env", "linear-gradient", "none", "filter", "tint", "opacity", "invert", "grayscale", "sepia", "blur", "contrast", "hue-rotate", "prop", "inherit", "initial", "auto", "unset", "true", "false", "none", "cover", "contain" }) + uVar4;
		if (3 < uVar4) {
			ppuVar5 = (byte*)(g_data_07556758 + 0xb8);
		}
		return *(String*)*ppuVar5;
	}

	[Token(Token = "0x600427C")]
	[Address(RVA = "0x5B07800", Offset = "0x5B06800", VA = "0x5B07800")]
	public string GetSkinTexture()
	{
		// Lifted from source/cpp/Characters/HumanSetupTextures.c (Characters.HumanSetupTextures$$GetSkinTexture): clean
		int iVar1;
		HumanSetup pCVar2;

		pCVar2 = this._setup;
		if (pCVar2 == null) {
			throw new NullReferenceException();
		}
		iVar1 = pCVar2.Weapon;
		if (iVar1 != 1) {
			if (iVar1 == 2) {
				return "Skin/skin_TS";
			}
			if (iVar1 != 3) {
				return "Skin/skin_blades";
			}
		}
		return "Skin/skin_AHSS";
	}

	[Token(Token = "0x600427D")]
	[Address(RVA = "0x5B07880", Offset = "0x5B06880", VA = "0x5B07880")]
	public string GetHairTexture()
	{
		// Lifted from source/cpp/Characters/HumanSetupTextures.c (Characters.HumanSetupTextures$$GetHairTexture): clean
		HumanSetup pCVar1;
		JSONNode pSVar2;
		String pSVar3;

		pCVar1 = this._setup;
		if ((pCVar1 != null) &&(pSVar2 = pCVar1.CurrentHair, pSVar2 != null)) {
			pSVar2 = pSVar2.get_Item("Texture");
			if (pSVar2 != null) {
				return pSVar3;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600427E")]
	[Address(RVA = "0x5B078F0", Offset = "0x5B068F0", VA = "0x5B078F0")]
	public string GetBodyMainTexture()
	{
		// Lifted from source/cpp/Characters/HumanSetupTextures.c (Characters.HumanSetupTextures$$GetBodyMainTexture): 2 lines keep C-only constructs
		HumanSetup pCVar1;
		bool bVar2;
		JSONNode pSVar3;
		String pSVar4;
		String* ppSVar5;

		pCVar1 = this._setup;
		if ((pCVar1 != null) &&(pSVar3 = pCVar1.CurrentCostume, pSVar3 != null)) {
			pSVar3 = pSVar3.get_Item("Type");
			if (pSVar3 != null) {
				pSVar4 = pSVar3.get_Value();
				if (pSVar4 != null) {
					bVar2 = pSVar4.StartsWith("Uniform");
					pCVar1 = this._setup;
					if (bVar2) {
						if ((pCVar1 != null) &&(pSVar3 = pCVar1.CurrentCostume, pSVar3 != null)) {
							pSVar3 = pSVar3.get_Item("_main_tex");
							if (pSVar3 != null) {
								ppSVar5 = &"Uniform/";
	label_05c07a30: ;
								pSVar4 = pSVar3.get_Value();
								pSVar4 = String.Concat(*ppSVar5, pSVar4);
								return pSVar4;
							}
						}
					}
					else if ((pCVar1 != null) &&(pSVar3 = pCVar1.CurrentCostume, pSVar3 != null)) {
						pSVar3 = pSVar3.get_Item("_main_tex");
						if (pSVar3 != null) {
							ppSVar5 = &"Casual/";
							goto label_05c07a30;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600427F")]
	[Address(RVA = "0x5B07A60", Offset = "0x5B06A60", VA = "0x5B07A60")]
	public string GetBodyMaskTexture()
	{
		// Lifted from source/cpp/Characters/HumanSetupTextures.c (Characters.HumanSetupTextures$$GetBodyMaskTexture): 2 lines keep C-only constructs
		HumanSetup pCVar1;
		bool bVar2;
		JSONNode pSVar3;
		String pSVar4;
		String* ppSVar5;

		pCVar1 = this._setup;
		if ((pCVar1 != null) &&(pSVar3 = pCVar1.CurrentCostume, pSVar3 != null)) {
			pSVar3 = pSVar3.get_Item("Type");
			if (pSVar3 != null) {
				pSVar4 = pSVar3.get_Value();
				if (pSVar4 != null) {
					bVar2 = pSVar4.StartsWith("Uniform");
					pCVar1 = this._setup;
					if (bVar2) {
						if ((pCVar1 != null) &&(pSVar3 = pCVar1.CurrentCostume, pSVar3 != null)) {
							pSVar3 = pSVar3.get_Item("_main_tex_mask");
							if (pSVar3 != null) {
								ppSVar5 = &"Uniform/";
	label_05c07ba0: ;
								pSVar4 = pSVar3.get_Value();
								pSVar4 = String.Concat(*ppSVar5, pSVar4);
								return pSVar4;
							}
						}
					}
					else if ((pCVar1 != null) &&(pSVar3 = pCVar1.CurrentCostume, pSVar3 != null)) {
						pSVar3 = pSVar3.get_Item("_main_tex_mask");
						if (pSVar3 != null) {
							ppSVar5 = &"Casual/";
							goto label_05c07ba0;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004280")]
	[Address(RVA = "0x5B07BD0", Offset = "0x5B06BD0", VA = "0x5B07BD0")]
	public string GetBodyColorTexture()
	{
		// Lifted from source/cpp/Characters/HumanSetupTextures.c (Characters.HumanSetupTextures$$GetBodyColorTexture): 2 lines keep C-only constructs
		HumanSetup pCVar1;
		bool bVar2;
		JSONNode pSVar3;
		String pSVar4;
		String* ppSVar5;

		pCVar1 = this._setup;
		if ((pCVar1 != null) &&(pSVar3 = pCVar1.CurrentCostume, pSVar3 != null)) {
			pSVar3 = pSVar3.get_Item("Type");
			if (pSVar3 != null) {
				pSVar4 = pSVar3.get_Value();
				if (pSVar4 != null) {
					bVar2 = pSVar4.StartsWith("Uniform");
					pCVar1 = this._setup;
					if (bVar2) {
						if ((pCVar1 != null) &&(pSVar3 = pCVar1.CurrentCostume, pSVar3 != null)) {
							pSVar3 = pSVar3.get_Item("_color_tex");
							if (pSVar3 != null) {
								ppSVar5 = &"Uniform/";
	label_05c07d10: ;
								pSVar4 = pSVar3.get_Value();
								pSVar4 = String.Concat(*ppSVar5, pSVar4);
								return pSVar4;
							}
						}
					}
					else if ((pCVar1 != null) &&(pSVar3 = pCVar1.CurrentCostume, pSVar3 != null)) {
						pSVar3 = pSVar3.get_Item("_color_tex");
						if (pSVar3 != null) {
							ppSVar5 = &"Casual/";
							goto label_05c07d10;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004281")]
	[Address(RVA = "0x5B07D40", Offset = "0x5B06D40", VA = "0x5B07D40")]
	public string GetBodyPantsTexture()
	{
		// Lifted from source/cpp/Characters/HumanSetupTextures.c (Characters.HumanSetupTextures$$GetBodyPantsTexture): clean
		HumanSetup pCVar1;
		HumanCustomSet pSVar2;
		IntSetting pSVar3;
		JSONNode pSVar4;
		String pSVar5;

		pCVar1 = this._setup;
		if (((pCVar1 != null) &&(pSVar2 = pCVar1.CustomSet, pSVar2 != null)) &&(pSVar3 = pSVar2.Boots, pSVar3 != null)) {
			if (pSVar3._value == 1) {
				return "Pants/Shoes_Casual";
			}
			pSVar4 = pCVar1.CurrentCostume;
			if (pSVar4 != null) {
				pSVar4 = pSVar4.get_Item("_pants_tex");
				if (pSVar4 != null) {
					pSVar5 = pSVar4.get_Value();
					pSVar5 = String.Concat("Pants/", pSVar5);
					return pSVar5;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004282")]
	[Address(RVA = "0x5B07E10", Offset = "0x5B06E10", VA = "0x5B07E10")]
	public string GetChestTexture(int chest)
	{
		// Lifted from source/cpp/Characters/HumanSetupTextures.c (Characters.HumanSetupTextures$$GetChestTexture): 1 lines keep C-only constructs
		HumanSetup pCVar1;
		bool bVar2;
		JSONNode pSVar3;
		String __this_00;
		String* ppSVar4;

		if (chest != 1) {
			ppSVar4 = *(String**)(g_data_07556758 + 0xb8);
	label_05c07ef0: ;
			return *ppSVar4;
		}
		pCVar1 = this._setup;
		if ((pCVar1 != null) &&(pSVar3 = pCVar1.CurrentCostume, pSVar3 != null)) {
			pSVar3 = pSVar3.get_Item("Type");
			if (pSVar3 != null) {
				__this_00 = pSVar3.get_Value();
				if (__this_00 != null) {
					bVar2 = __this_00.StartsWith("Uniform");
					if (bVar2) {
						ppSVar4 = &"Misc/aottg_hero_annie_cap_uniform";
					}
					else {
						ppSVar4 = &"Misc/aottg_hero_annie_cap_causal";
					}
					goto label_05c07ef0;
				}
			}
		}
		throw new NullReferenceException();
	}
}
