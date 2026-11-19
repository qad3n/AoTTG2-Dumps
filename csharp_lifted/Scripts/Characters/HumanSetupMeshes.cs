// ==================== AoTTG2 cross-reference ====================
// Type: Characters.HumanSetupMeshes
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/HumanSetupMeshes.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Setup/HumanSetupMeshes.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006CF")]
internal class HumanSetupMeshes
{
	[Token(Token = "0x400204C")]
	[FieldOffset(Offset = "0x10")]
	private HumanSetup _setup;

	[Token(Token = "0x400204D")]
	[FieldOffset(Offset = "0x18")]
	private string CostumesPath;

	[Token(Token = "0x400204E")]
	[FieldOffset(Offset = "0x20")]
	private string AccessoriesPath;

	[Token(Token = "0x400204F")]
	[FieldOffset(Offset = "0x28")]
	private string HairsPath;

	[Token(Token = "0x4002050")]
	[FieldOffset(Offset = "0x30")]
	private string WeaponsPath;

	[Token(Token = "0x4002051")]
	[FieldOffset(Offset = "0x38")]
	private string FacePath;

	[Token(Token = "0x6004263")]
	[Address(RVA = "0x5B06210", Offset = "0x5B05210", VA = "0x5B06210")]
	public HumanSetupMeshes(HumanSetup setup)
	{
		// Lifted from source/cpp/Characters/HumanSetupMeshes.c (Characters.HumanSetupMeshes$$.ctor): clean
		this.CostumesPath = "Human/Parts/Costumes/Prefabs/";
		this.AccessoriesPath = "Human/Parts/Accessories/Prefabs/";
		this.HairsPath = "Human/Parts/Hairs/Prefabs/";
		this.WeaponsPath = "Human/Parts/Weapons/Prefabs/";
		this.FacePath = "Human/Parts/Face/Prefabs/";
		base();
		this._setup = setup;
		return;
	}

	[Token(Token = "0x6004264")]
	[Address(RVA = "0x5B06300", Offset = "0x5B05300", VA = "0x5B06300")]
	public string GetBootsMesh(int boots)
	{
		// Lifted from source/cpp/Characters/HumanSetupMeshes.c (Characters.HumanSetupMeshes$$GetBootsMesh): clean
		String str2;
		String pSVar1;
		int local_c;

		local_c = boots;
		pSVar1 = this.CostumesPath;
		str2 = local_c.ToString();
		pSVar1 = String.Concat(pSVar1, "character_leg_", str2);
		return pSVar1;
	}

	[Token(Token = "0x6004265")]
	[Address(RVA = "0x5B06360", Offset = "0x5B05360", VA = "0x5B06360")]
	public string GetHandMesh(bool left)
	{
		// Lifted from source/cpp/Characters/HumanSetupMeshes.c (Characters.HumanSetupMeshes$$GetHandMesh): 3 lines keep C-only constructs
		HumanSetup __this_00;
		bool bVar1;
		String* ppSVar2;
		ulong uVar3;
		String pSVar4;

		if (left) {
			ppSVar2 = &"character_hand_l";
		}
		else {
			ppSVar2 = &"character_hand_r";
		}
		__this_00 = this._setup;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		pSVar4 = *ppSVar2;
		uVar3 = (ulong)__this_00.Weapon;
		if (uVar3 < 4) {
			ppSVar2 = (String*)(__stringSlots(new string[] { "_0", "_ah_0", "_ts", "_empty" }))[uVar3];
		}
		else {
			bVar1 = __this_00.HasWeapon;
			if (bVar1) goto label_05c0641d;
			ppSVar2 = &"_empty";
		}
		pSVar4 = String.Concat(pSVar4, *ppSVar2);
	label_05c0641d: ;
		pSVar4 = String.Concat(this.CostumesPath, pSVar4);
		return pSVar4;
	}

	[Token(Token = "0x6004266")]
	[Address(RVA = "0x5B06440", Offset = "0x5B05440", VA = "0x5B06440")]
	public string GetArmMesh(bool left)
	{
		// Lifted from source/cpp/Characters/HumanSetupMeshes.c (Characters.HumanSetupMeshes$$GetArmMesh): 4 lines keep C-only constructs
		HumanSetup pCVar1;
		bool bVar2;
		String* ppSVar3;
		JSONNode pSVar4;
		String __this_00;
		String pSVar5;
		String* ppSVar6;

		pSVar5 = "player";
		pCVar1 = this._setup;
		if (pCVar1 != null) {
			if ((pCVar1.Weapon | 2U) == 3) {
				ppSVar3 = &"_casual_arm_AH_R";
				ppSVar6 = &"_casual_arm_AH_L";
	label_05c0658b: ;
				if (!left) {
					ppSVar6 = ppSVar3;
				}
				pSVar5 = String.Concat(this.CostumesPath, pSVar5, *ppSVar6);
				return pSVar5;
			}
			pSVar4 = pCVar1.CurrentCostume;
			if (pSVar4 != null) {
				pSVar4 = pSVar4.get_Item("Type");
				if (pSVar4 != null) {
					__this_00 = pSVar4.get_Value();
					if (__this_00 != null) {
						bVar2 = __this_00.StartsWith("Uniform");
						if (bVar2) {
							ppSVar6 = &"_uniform";
						}
						else {
							ppSVar6 = &"_casual";
						}
						pSVar5 = String.Concat(pSVar5, *ppSVar6);
						ppSVar3 = &"_arm_R";
						ppSVar6 = &"_arm_L";
						goto label_05c0658b;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004267")]
	[Address(RVA = "0x5B065B0", Offset = "0x5B055B0", VA = "0x5B065B0")]
	public string Get3dmgMesh()
	{
		// Lifted from source/cpp/Characters/HumanSetupMeshes.c (Characters.HumanSetupMeshes$$Get3dmgMesh): 2 lines keep C-only constructs
		int iVar1;
		HumanSetup pCVar2;
		String* ppSVar3;
		String pSVar4;

		pCVar2 = this._setup;
		if (pCVar2 == null) {
			throw new NullReferenceException();
		}
		iVar1 = pCVar2.Weapon;
		if (iVar1 == 3) {
			ppSVar3 = &"3dmg_3";
			pSVar4 = this.AccessoriesPath;
		}
		else {
			ppSVar3 = &"3dmg";
			pSVar4 = this.AccessoriesPath;
			if (iVar1 == 1) {
				ppSVar3 = &"3dmg_2";
			}
		}
		pSVar4 = String.Concat(pSVar4, *ppSVar3);
		return pSVar4;
	}

	[Token(Token = "0x6004268")]
	[Address(RVA = "0x5B06640", Offset = "0x5B05640", VA = "0x5B06640")]
	public string GetBeltMesh()
	{
		// Lifted from source/cpp/Characters/HumanSetupMeshes.c (Characters.HumanSetupMeshes$$GetBeltMesh): clean
		HumanSetup pCVar1;
		String pSVar2;

		pCVar1 = this._setup;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		if ((pCVar1.Weapon | 2U) == 3) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		pSVar2 = String.Concat(this.AccessoriesPath, "3dmg_belt");
		return pSVar2;
	}

	[Token(Token = "0x6004269")]
	[Address(RVA = "0x5B066B0", Offset = "0x5B056B0", VA = "0x5B066B0")]
	public string GetGasMesh(bool left)
	{
		// Lifted from source/cpp/Characters/HumanSetupMeshes.c (Characters.HumanSetupMeshes$$GetGasMesh): 3 lines keep C-only constructs
		HumanSetup pCVar1;
		String* ppSVar2;
		String pSVar3;
		String* ppSVar4;

		pCVar1 = this._setup;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		if ((pCVar1.Weapon | 2U) == 3) {
			ppSVar2 = &"char_gun_mag_r";
			ppSVar4 = &"char_gun_mag_l";
		}
		else {
			ppSVar2 = &"scabbard_R";
			ppSVar4 = &"scabbard_L";
		}
		if (!left) {
			ppSVar4 = ppSVar2;
		}
		pSVar3 = String.Concat(this.AccessoriesPath, *ppSVar4);
		return pSVar3;
	}

	[Token(Token = "0x600426A")]
	[Address(RVA = "0x5B06750", Offset = "0x5B05750", VA = "0x5B06750")]
	public string GetWeaponMesh(bool left)
	{
		// Lifted from source/cpp/Characters/HumanSetupMeshes.c (Characters.HumanSetupMeshes$$GetWeaponMesh): 2 lines keep C-only constructs
		int iVar1;
		HumanSetup pCVar2;
		bool bVar3;
		String* ppSVar4;
		String pSVar5;

		pCVar2 = this._setup;
		if (pCVar2 != null) {
			bVar3 = pCVar2.HasWeapon;
			if (!bVar3) {
				return (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			pCVar2 = this._setup;
			if (pCVar2 != null) {
				iVar1 = pCVar2.Weapon;
				if (iVar1 == 3) {
					pSVar5 = this.WeaponsPath;
					if (left) {
						ppSVar4 = &"apg_L";
					}
					else {
						ppSVar4 = &"apg_R";
					}
				}
				else if (iVar1 == 2) {
					pSVar5 = this.WeaponsPath;
					if (left) {
						ppSVar4 = &"thunderspear_l";
					}
					else {
						ppSVar4 = &"thunderspear_r";
					}
				}
				else if (iVar1 == 1) {
					pSVar5 = this.WeaponsPath;
					if (left) {
						ppSVar4 = &"character_gun_l_0";
					}
					else {
						ppSVar4 = &"character_gun_r_0";
					}
				}
				else {
					pSVar5 = this.WeaponsPath;
					if (left) {
						ppSVar4 = &"blade_L";
					}
					else {
						ppSVar4 = &"blade_R";
					}
				}
				pSVar5 = String.Concat(pSVar5, *ppSVar4);
				return pSVar5;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600426B")]
	[Address(RVA = "0x5B068A0", Offset = "0x5B058A0", VA = "0x5B068A0")]
	public string GetBodyMesh()
	{
		// Lifted from source/cpp/Characters/HumanSetupMeshes.c (Characters.HumanSetupMeshes$$GetBodyMesh): 4 lines keep C-only constructs
		HumanSetup pCVar1;
		HumanCustomSet pSVar2;
		IntSetting pSVar3;
		bool bVar4;
		JSONNode pSVar5;
		String pSVar6;
		String* ppSVar7;
		String pSVar8;
		ushort local_1a;

		pSVar8 = "player";
		pCVar1 = this._setup;
		if ((pCVar1 != null) &&(pSVar5 = pCVar1.CurrentCostume, pSVar5 != null)) {
			pSVar5 = pSVar5.get_Item("Type");
			if (pSVar5 != null) {
				pSVar6 = pSVar5.get_Value();
				if (pSVar6 != null) {
					bVar4 = pSVar6.StartsWith("Uniform");
					if (bVar4) {
						ppSVar7 = &"_uniform";
					}
					else {
						ppSVar7 = &"_casual";
					}
					pSVar8 = String.Concat(pSVar8, *ppSVar7);
					pCVar1 = this._setup;
					if (((pCVar1 != null) &&(pSVar2 = pCVar1.CustomSet, pSVar2 != null)) &&(pSVar3 = pSVar2.Sex, pSVar3 != null)) {
						if (pSVar3._value == 0) {
							ppSVar7 = &"_M";
						}
						else {
							ppSVar7 = &"_F";
						}
						pSVar8 = String.Concat(pSVar8, *ppSVar7);
						local_1a = Enumerable.Last<char>((System_Collections_Generic_IEnumerable_TSource__o)pSVar6);
						pSVar6 = Char.ToString(ref local_1a);
						pSVar8 = String.Concat(pSVar8, pSVar6);
						pSVar8 = String.Concat(this.CostumesPath, pSVar8);
						return pSVar8;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600426C")]
	[Address(RVA = "0x5B06A80", Offset = "0x5B05A80", VA = "0x5B06A80")]
	public string GetBrandMesh(int brand)
	{
		// Lifted from source/cpp/Characters/HumanSetupMeshes.c (Characters.HumanSetupMeshes$$GetBrandMesh): 2 lines keep C-only constructs
		HumanSetup pCVar1;
		HumanCustomSet pSVar2;
		IntSetting pSVar3;
		bool bVar4;
		JSONNode pSVar5;
		String pSVar6;
		String* ppSVar7;

		pCVar1 = this._setup;
		if ((((pCVar1 == null) ||(pSVar5 = pCVar1.CurrentCostume, pSVar5 == null)) ||(pSVar5 = pSVar5.get_Item("Type"), pSVar5 == null)) ||(pSVar6 = pSVar5.get_Value(), pSVar6 == null)) goto label_05c06c50;
		bVar4 = pSVar6.StartsWith("Uniform");
		if (bVar4) {
			switch(brand) {
			case 1:
				pSVar6 = this.CostumesPath;
				ppSVar7 = &"character_brand_arm_l_0";
				break;
			case 2:
				pSVar6 = this.CostumesPath;
				ppSVar7 = &"character_brand_arm_r_0";
				break;
			case 3:
				pCVar1 = this._setup;
				if (((pCVar1 == null) ||(pSVar2 = pCVar1.CustomSet, pSVar2 == null)) ||(pSVar3 = pSVar2.Sex, pSVar3 == null)) {
	label_05c06c50: ;
					throw new NullReferenceException();
				}
				pSVar6 = this.CostumesPath;
				if (pSVar3._value == 0) {
					ppSVar7 = &"character_brand_chest_m_0";
				}
				else {
					ppSVar7 = &"character_brand_chest_f_0";
				}
				break;
			case 4:
				pCVar1 = this._setup;
				if (((pCVar1 == null) ||(pSVar2 = pCVar1.CustomSet, pSVar2 == null)) ||(pSVar3 = pSVar2.Sex, pSVar3 == null)) goto label_05c06c50;
				pSVar6 = this.CostumesPath;
				if (pSVar3._value == 0) {
					ppSVar7 = &"character_brand_back_m_0";
				}
				else {
					ppSVar7 = &"character_brand_back_f_0";
				}
				break;
			default: ;
				goto switchD_05c06b8e_default;
			}
			pSVar6 = String.Concat(pSVar6, *ppSVar7);
			return pSVar6;
		}
	switchD_05c06b8e_default: ;
		return (String)**(ulong*)(g_data_07556758 + 0xb8);
	}

	[Token(Token = "0x600426D")]
	[Address(RVA = "0x5B06C60", Offset = "0x5B05C60", VA = "0x5B06C60")]
	public string GetEyeMesh()
	{
		// Lifted from source/cpp/Characters/HumanSetupMeshes.c (Characters.HumanSetupMeshes$$GetEyeMesh): clean
		String pSVar1;

		pSVar1 = String.Concat(this.FacePath, "char_eyes");
		return pSVar1;
	}

	[Token(Token = "0x600426E")]
	[Address(RVA = "0x5B06CA0", Offset = "0x5B05CA0", VA = "0x5B06CA0")]
	public string GetFaceMesh(string prefab)
	{
		// Lifted from source/cpp/Characters/HumanSetupMeshes.c (Characters.HumanSetupMeshes$$GetFaceMesh): clean
		bool bVar1;
		String pSVar2;

		bVar1 = (prefab != (String)**(ulong*)(g_data_07556758 + 0xb8));
		if (!bVar1) {
			prefab = "char_face";
		}
		pSVar2 = String.Concat(this.FacePath, prefab);
		return pSVar2;
	}

	[Token(Token = "0x600426F")]
	[Address(RVA = "0x5B06D10", Offset = "0x5B05D10", VA = "0x5B06D10")]
	public string GetGlassMesh(string prefab)
	{
		// Lifted from source/cpp/Characters/HumanSetupMeshes.c (Characters.HumanSetupMeshes$$GetGlassMesh): clean
		bool bVar1;
		String pSVar2;

		bVar1 = (prefab != (String)**(ulong*)(g_data_07556758 + 0xb8));
		if (!bVar1) {
			prefab = "char_glasses";
		}
		pSVar2 = String.Concat(this.FacePath, prefab);
		return pSVar2;
	}

	[Token(Token = "0x6004270")]
	[Address(RVA = "0x5B06D80", Offset = "0x5B05D80", VA = "0x5B06D80")]
	public string GetHairMesh()
	{
		// Lifted from source/cpp/Characters/HumanSetupMeshes.c (Characters.HumanSetupMeshes$$GetHairMesh): clean
		HumanSetup pCVar1;
		bool bVar2;
		JSONNode pSVar3;
		String pSVar4;

		pCVar1 = this._setup;
		if ((pCVar1 != null) &&(pSVar3 = pCVar1.CurrentHair, pSVar3 != null)) {
			pSVar3 = pSVar3.get_Item("Texture");
			if (pSVar3 != null) {
				pSVar4 = pSVar3.get_Value();
				bVar2 = (pSVar4 == (String)**(ulong*)(g_data_07556758 + 0xb8));
				if (bVar2) {
					return (String)**(ulong*)(g_data_07556758 + 0xb8);
				}
				pSVar4 = String.Concat(this.HairsPath, pSVar4);
				return pSVar4;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004271")]
	[Address(RVA = "0x5B06E50", Offset = "0x5B05E50", VA = "0x5B06E50")]
	public string GetHairClothMesh()
	{
		// Lifted from source/cpp/Characters/HumanSetupMeshes.c (Characters.HumanSetupMeshes$$GetHairClothMesh): clean
		HumanSetup pCVar1;
		bool bVar2;
		JSONNode pSVar3;
		String str1;
		String pSVar4;

		pCVar1 = this._setup;
		if ((pCVar1 != null) &&(pSVar3 = pCVar1.CurrentHair, pSVar3 != null)) {
			bVar2 = pSVar3.HasKey("Cloth");
			if (!bVar2) {
				return (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			pCVar1 = this._setup;
			if ((pCVar1 != null) &&(pSVar3 = pCVar1.CurrentHair, pSVar3 != null)) {
				pSVar4 = this.HairsPath;
				pSVar3 = pSVar3.get_Item("Cloth");
				if (pSVar3 != null) {
					str1 = pSVar3.get_Value();
					pSVar4 = String.Concat(pSVar4, str1);
					return pSVar4;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004272")]
	[Address(RVA = "0x5B06F30", Offset = "0x5B05F30", VA = "0x5B06F30")]
	public string GetCapeMesh()
	{
		// Lifted from source/cpp/Characters/HumanSetupMeshes.c (Characters.HumanSetupMeshes$$GetCapeMesh): 3 lines keep C-only constructs
		int iVar1;
		HumanSetup pCVar2;
		HumanCustomSet pSVar3;
		IntSetting pSVar4;
		bool bVar5;
		String* ppSVar6;
		JSONNode pSVar7;
		String pSVar8;
		String str0;

		pCVar2 = this._setup;
		if (((pCVar2 == null) ||(pSVar3 = pCVar2.CustomSet, pSVar3 == null)) ||(pSVar4 = pSVar3.Cape, pSVar4 == null)) goto label_05c0719a;
		iVar1 = pSVar4._value;
		if (iVar1 == 2) {
			bVar5 = pCVar2.IsHooded;
			if (!bVar5) {
				pCVar2 = this._setup;
				if ((pCVar2 == null) ||(pSVar7 = pCVar2.CurrentHair, pSVar7 == null)) {
	label_05c0719a: ;
					throw new NullReferenceException();
				}
				pSVar7 = pSVar7.get_Item("Texture");
				if (pSVar7 == null) goto label_05c0719a;
				pSVar8 = pSVar7.get_Value();
				bVar5 = (pSVar8 == "hair_longanime");
				ppSVar6 = &"character_cloakee_hoodless";
				if (!bVar5) {
					bVar5 = (pSVar8 == "hair_longbangs");
					if (!bVar5) {
						bVar5 = (pSVar8 == "hair_lacylong");
						if (!bVar5) {
							bVar5 = (pSVar8 == "hair_himecut");
							if (!bVar5) {
								bVar5 = (pSVar8 == "hair_himecutvariant");
								if (!bVar5) {
									bVar5 = (pSVar8 == "hair_longcurly");
									if (!bVar5) {
										bVar5 = (pSVar8 == "hair_longcurly2");
										if (bVar5) {
											ppSVar6 = &"character_cloakee_hoodless";
										}
										else {
											ppSVar6 = &"character_cloakee";
										}
									}
								}
							}
						}
					}
				}
				str0 = this.CostumesPath;
				pSVar8 = *ppSVar6;
				goto label_05c0718e;
			}
			str0 = this.CostumesPath;
			ppSVar6 = &"character_cloakee_hooded";
		}
		else {
			if (iVar1 == 0) {
				return (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			str0 = this.CostumesPath;
			ppSVar6 = &"character_cape_0";
		}
		pSVar8 = *ppSVar6;
	label_05c0718e: ;
		pSVar8 = String.Concat(str0, pSVar8);
		return pSVar8;
	}

	[Token(Token = "0x6004273")]
	[Address(RVA = "0x5B071A0", Offset = "0x5B061A0", VA = "0x5B071A0")]
	public string GetChestMesh(int chest)
	{
		// Lifted from source/cpp/Characters/HumanSetupMeshes.c (Characters.HumanSetupMeshes$$GetChestMesh): 2 lines keep C-only constructs
		HumanSetup pCVar1;
		HumanCustomSet pSVar2;
		IntSetting pSVar3;
		bool bVar4;
		JSONNode pSVar5;
		String pSVar6;
		String* ppSVar7;

		if (chest == 3) {
			pCVar1 = this._setup;
			if ((pCVar1 != null) &&(pSVar5 = pCVar1.CurrentCostume, pSVar5 != null)) {
				bVar4 = pSVar5.HasKey("Scarf");
				if (!bVar4) goto label_05c0748b;
				pCVar1 = this._setup;
				if ((pCVar1 != null) &&(pSVar5 = pCVar1.CurrentCostume, pSVar5 != null)) {
					pSVar5 = pSVar5.get_Item("Type");
					if (pSVar5 != null) {
						pSVar6 = pSVar5.get_Value();
						if (pSVar6 != null) {
							bVar4 = pSVar6.StartsWith("Uniform");
							pSVar6 = this.CostumesPath;
							if (bVar4) {
								ppSVar7 = &"mikasa_asset_uni_0";
							}
							else {
								ppSVar7 = &"mikasa_asset_cas_0";
							}
							goto label_05c074c3;
						}
					}
				}
			}
		}
		else if (chest == 2) {
			pCVar1 = this._setup;
			if ((pCVar1 != null) &&(pSVar5 = pCVar1.CurrentCostume, pSVar5 != null)) {
				bVar4 = pSVar5.HasKey("Holster");
				if (!bVar4) goto label_05c0748b;
				pCVar1 = this._setup;
				if (((pCVar1 != null) &&(pSVar2 = pCVar1.CustomSet, pSVar2 != null)) &&(pSVar3 = pSVar2.Sex, pSVar3 != null)) {
					pSVar6 = this.AccessoriesPath;
					if (pSVar3._value == 0) {
						ppSVar7 = &"body_blade_keeper_m_0";
					}
					else {
						ppSVar7 = &"body_blade_keeper_f_0";
					}
	label_05c074c3: ;
					pSVar6 = String.Concat(pSVar6, *ppSVar7);
					return pSVar6;
				}
			}
		}
		else {
			if (chest != 1) {
	label_05c0748b: ;
				return (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			pCVar1 = this._setup;
			if (((pCVar1 != null) &&(pSVar2 = pCVar1.CustomSet, pSVar2 != null)) &&(pSVar3 = pSVar2.Cape, pSVar3 != null)) {
				if (pSVar3._value == 2) goto label_05c0748b;
				pSVar5 = pCVar1.CurrentCostume;
				if (pSVar5 != null) {
					bVar4 = pSVar5.HasKey("Hoodie");
					if (!bVar4) goto label_05c0748b;
					pCVar1 = this._setup;
					if ((pCVar1 != null) &&(pSVar5 = pCVar1.CurrentCostume, pSVar5 != null)) {
						pSVar5 = pSVar5.get_Item("Type");
						if (pSVar5 != null) {
							pSVar6 = pSVar5.get_Value();
							if (pSVar6 != null) {
								bVar4 = pSVar6.StartsWith("Uniform");
								pSVar6 = this.AccessoriesPath;
								if (bVar4) {
									ppSVar7 = &"char_cap_uni";
								}
								else {
									ppSVar7 = &"char_cap_cas";
								}
								goto label_05c074c3;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}
}
