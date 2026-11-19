// ==================== AoTTG2 cross-reference ====================
// Type: Characters.HumanSetupMaterials
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/HumanSetupMaterials.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Setup/HumanSetupMaterials.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20006CE")]
public class HumanSetupMaterials
{
	[Token(Token = "0x4002046")]
	[FieldOffset(Offset = "0x0")]
	public static Dictionary<string, Material> HairMaterials;

	[Token(Token = "0x4002047")]
	[FieldOffset(Offset = "0x8")]
	public static Dictionary<string, Material> PartMaterials;

	[Token(Token = "0x4002048")]
	[FieldOffset(Offset = "0x10")]
	public static Dictionary<string, Material> FaceMaterials;

	[Token(Token = "0x4002049")]
	[FieldOffset(Offset = "0x18")]
	public static Dictionary<string, Material> TitanEyeMaterials;

	[Token(Token = "0x400204A")]
	[FieldOffset(Offset = "0x20")]
	public static string TexturePath;

	[Token(Token = "0x400204B")]
	[FieldOffset(Offset = "0x28")]
	public static string MaterialPath;

	[Token(Token = "0x6004259")]
	[Address(RVA = "0x5B04EF0", Offset = "0x5B03EF0", VA = "0x5B04EF0")]
	public static void Init()
	{
		// Lifted from source/cpp/Characters/HumanSetupMaterials.c (Characters.HumanSetupMaterials$$Init): clean
		return;
	}

	[Token(Token = "0x600425A")]
	[Address(RVA = "0x5B04F00", Offset = "0x5B03F00", VA = "0x5B04F00")]
	public static Material GetCostumeMaterial(string mainTexture, string maskTexture, string colorTexture, string pantsTexture, Color shirt, Color straps, Color pants, Color jacket, Color boots)
	{
		// Lifted from source/cpp/Characters/HumanSetupMaterials.c (Characters.HumanSetupMaterials$$GetCostumeMaterial): 4 lines keep C-only constructs
		String pSVar1;
		String pSVar2;
		Material __this;
		Texture value;
		Texture value_00;
		Texture value_01;
		Texture value_02;

		pSVar1 = ResourcePaths.Characters;
		pSVar2 = String.Concat(HumanSetupMaterials.MaterialPath, "HumanCostumeMat");
		__this = ResourceManager.InstantiateAsset<Material>(pSVar1, pSVar2, true, false);
		pSVar1 = ResourcePaths.Characters;
		pSVar2 = String.Concat(HumanSetupMaterials.TexturePath, mainTexture);
		value = (Texture)ResourceManager.LoadAsset(pSVar1, pSVar2, false, false);
		if ((value != null) &&(value.klass != (Texture)typeof(Texture2D))) {
			throw new InvalidCastException();
		}
		pSVar1 = ResourcePaths.Characters;
		pSVar2 = String.Concat(HumanSetupMaterials.TexturePath, maskTexture);
		value_00 = (Texture)ResourceManager.LoadAsset(pSVar1, pSVar2, false, false);
		if ((value_00 != null) &&(value_00.klass != (Texture)typeof(Texture2D))) {
			throw new InvalidCastException();
		}
		pSVar1 = ResourcePaths.Characters;
		pSVar2 = String.Concat(HumanSetupMaterials.TexturePath, colorTexture);
		value_01 = (Texture)ResourceManager.LoadAsset(pSVar1, pSVar2, false, false);
		if ((value_01 != null) &&(value_01.klass != (Texture)typeof(Texture2D))) {
			throw new InvalidCastException();
		}
		pSVar1 = ResourcePaths.Characters;
		pSVar2 = String.Concat(HumanSetupMaterials.TexturePath, pantsTexture);
		value_02 = (Texture)ResourceManager.LoadAsset(pSVar1, pSVar2, false, false);
		if ((value_02 != null) &&(value_02.klass != (Texture)typeof(Texture2D))) {
			throw new InvalidCastException();
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.SetTexture("_main_tex", value);
		__this.SetTexture("_main_tex_mask", value_00);
		__this.SetTexture("_color_tex", value_01);
		__this.SetTexture("_pants_tex", value_02);
		__this.SetColor("_shirt_color", shirt);
		__this.SetColor("_straps_color", straps);
		__this.SetColor("_pants_color", pants);
		__this.SetColor("_jacket_color", jacket);
		__this.SetColor("_boots_color", boots);
		return __this;
	}

	[Token(Token = "0x600425B")]
	[Address(RVA = "0x5B05360", Offset = "0x5B04360", VA = "0x5B05360")]
	public static Material GetPartMaterial(string texture, bool isOneSided = false)
	{
		// Lifted from source/cpp/Characters/HumanSetupMaterials.c (Characters.HumanSetupMaterials$$GetPartMaterial): 3 lines keep C-only constructs
		uint uVar1;
		Dictionary<object, object> pSVar2;
		bool bVar3;
		String* ppSVar4;
		String pSVar5;
		Material pUVar6;
		Texture value;
		String pSVar7;

		if (Il2CppMethodInitialized_07547683 == false) {
			Il2CppMethodInitialized_07547683 = true;
			if ((typeof(HumanSetupMaterials)._2).cctor_finished_or_no_cctor == 0) goto label_05c0543f;
	label_05c0538f: ;
			pSVar2 = (Dictionary<object, object>)HumanSetupMaterials.PartMaterials;
		}
		else {
			if ((typeof(HumanSetupMaterials)._2).cctor_finished_or_no_cctor != 0) goto label_05c0538f;
	label_05c0543f: ;
			pSVar2 = (Dictionary<object, object>)HumanSetupMaterials.PartMaterials;
		}
		if (pSVar2 == null) goto label_05c0565e;
		bVar3 = pSVar2.ContainsKey((object)texture);
		if (!bVar3) {
			uVar1 = (typeof(ResourcePaths)._2).cctor_finished_or_no_cctor;
			if (isOneSided) {
				if (uVar1 == 0) {
				}
				pSVar7 = ResourcePaths.Characters;
				pSVar5 = HumanSetupMaterials.MaterialPath;
				ppSVar4 = &"HumanPart1SMat";
			}
			else {
				if (uVar1 == 0) {
				}
				pSVar7 = ResourcePaths.Characters;
				pSVar5 = HumanSetupMaterials.MaterialPath;
				ppSVar4 = &"HumanPartMat";
			}
			pSVar5 = String.Concat(pSVar5, *ppSVar4);
			pUVar6 = ResourceManager.InstantiateAsset<Material>(pSVar7, pSVar5, true, false);
			pSVar7 = ResourcePaths.Characters;
			pSVar5 = String.Concat(HumanSetupMaterials.TexturePath, texture);
			value = (Texture)ResourceManager.LoadAsset(pSVar7, pSVar5, false, false);
			if ((value != null) &&(value.klass != (Texture)typeof(Texture2D))) {
				throw new InvalidCastException();
			}
			if (pUVar6 == null) goto label_05c0565e;
			pUVar6.mainTexture = value;
			pSVar2 = (Dictionary<object, object>)HumanSetupMaterials.PartMaterials;
			if (pSVar2 == null) goto label_05c0565e;
			pSVar2.set_Item((object)texture, (object)pUVar6);
		}
		pSVar2 = (Dictionary<object, object>)HumanSetupMaterials.PartMaterials;
		if (pSVar2 != null) {
			pUVar6 = pSVar2.get_Item((object)texture);
			return pUVar6;
		}
	label_05c0565e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600425C")]
	[Address(RVA = "0x5B05670", Offset = "0x5B04670", VA = "0x5B05670")]
	public static Material GetCustomSkinMaterial()
	{
		// Lifted from source/cpp/Characters/HumanSetupMaterials.c (Characters.HumanSetupMaterials$$GetCustomSkinMaterial): clean
		String path;
		String name;
		Material pUVar1;

		path = ResourcePaths.Characters;
		name = String.Concat(HumanSetupMaterials.MaterialPath, "HumanPartMat");
		pUVar1 = ResourceManager.InstantiateAsset<Material>(path, name, true, false);
		return pUVar1;
	}

	[Token(Token = "0x600425D")]
	[Address(RVA = "0x5B05760", Offset = "0x5B04760", VA = "0x5B05760")]
	public static Material GetHairMaterial(string texture)
	{
		// Lifted from source/cpp/Characters/HumanSetupMaterials.c (Characters.HumanSetupMaterials$$GetHairMaterial): 1 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		String pSVar2;
		bool bVar3;
		Material pUVar4;
		String name;
		Texture value;

		if (Il2CppMethodInitialized_07547685 == false) {
			Il2CppMethodInitialized_07547685 = true;
			if ((typeof(HumanSetupMaterials)._2).cctor_finished_or_no_cctor == 0) goto label_05c05848;
	label_05c0578d: ;
			pSVar1 = (Dictionary<object, object>)HumanSetupMaterials.HairMaterials;
		}
		else {
			if ((typeof(HumanSetupMaterials)._2).cctor_finished_or_no_cctor != 0) goto label_05c0578d;
	label_05c05848: ;
			pSVar1 = (Dictionary<object, object>)HumanSetupMaterials.HairMaterials;
		}
		if (pSVar1 == null) goto label_05c059cb;
		bVar3 = pSVar1.ContainsKey((object)texture);
		if (!bVar3) {
			pSVar2 = ResourcePaths.Characters;
			pUVar4 = ResourceManager.InstantiateAsset<Material>(pSVar2, "Human/Parts/Hairs/Materials/HumanHairMat", true, false);
			pSVar2 = ResourcePaths.Characters;
			name = String.Concat("Human/Parts/Hairs/Textures/", texture, "Tex");
			value = (Texture)ResourceManager.LoadAsset(pSVar2, name, false, false);
			if ((value != null) &&(value.klass != (Texture)typeof(Texture2D))) {
				throw new InvalidCastException();
			}
			if (pUVar4 == null) goto label_05c059cb;
			pUVar4.mainTexture = value;
			pSVar1 = (Dictionary<object, object>)HumanSetupMaterials.HairMaterials;
			if (pSVar1 == null) goto label_05c059cb;
			pSVar1.set_Item((object)texture, (object)pUVar4);
		}
		pSVar1 = (Dictionary<object, object>)HumanSetupMaterials.HairMaterials;
		if (pSVar1 != null) {
			pUVar4 = pSVar1.get_Item((object)texture);
			return pUVar4;
		}
	label_05c059cb: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600425E")]
	[Address(RVA = "0x5B059E0", Offset = "0x5B049E0", VA = "0x5B059E0")]
	public static Material GetFaceMaterial(string texture, bool untiled)
	{
		// Lifted from source/cpp/Characters/HumanSetupMaterials.c (Characters.HumanSetupMaterials$$GetFaceMaterial): 3 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		bool bVar2;
		String* ppSVar3;
		String pSVar4;
		Material pUVar5;
		String pSVar6;
		Texture value;

		if (Il2CppMethodInitialized_07547686 == false) {
			Il2CppMethodInitialized_07547686 = true;
			if ((typeof(HumanSetupMaterials)._2).cctor_finished_or_no_cctor == 0) goto label_05c05ad4;
	label_05c05a0d: ;
			pSVar1 = (Dictionary<object, object>)HumanSetupMaterials.FaceMaterials;
		}
		else {
			if ((typeof(HumanSetupMaterials)._2).cctor_finished_or_no_cctor != 0) goto label_05c05a0d;
	label_05c05ad4: ;
			pSVar1 = (Dictionary<object, object>)HumanSetupMaterials.FaceMaterials;
		}
		if (pSVar1 == null) goto label_05c05c72;
		bVar2 = pSVar1.ContainsKey((object)texture);
		if (!bVar2) {
			if (untiled) {
				ppSVar3 = &"HumanFaceUntiledMat";
			}
			else {
				ppSVar3 = &"HumanFaceMat";
			}
			pSVar4 = *ppSVar3;
			pSVar6 = ResourcePaths.Characters;
			pSVar4 = String.Concat("Human/Parts/Face/Materials/", pSVar4);
			pUVar5 = ResourceManager.InstantiateAsset<Material>(pSVar6, pSVar4, true, false);
			pSVar4 = ResourcePaths.Characters;
			pSVar6 = String.Concat("Human/Parts/Face/Textures/", texture);
			value = (Texture)ResourceManager.LoadAsset(pSVar4, pSVar6, false, false);
			if ((value != null) &&(value.klass != (Texture)typeof(Texture2D))) {
				throw new InvalidCastException();
			}
			if (pUVar5 == null) goto label_05c05c72;
			pUVar5.mainTexture = value;
			pSVar1 = (Dictionary<object, object>)HumanSetupMaterials.FaceMaterials;
			if (pSVar1 == null) goto label_05c05c72;
			pSVar1.set_Item((object)texture, (object)pUVar5);
		}
		pSVar1 = (Dictionary<object, object>)HumanSetupMaterials.FaceMaterials;
		if (pSVar1 != null) {
			pUVar5 = pSVar1.get_Item((object)texture);
			return pUVar5;
		}
	label_05c05c72: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600425F")]
	[Address(RVA = "0x5B05C80", Offset = "0x5B04C80", VA = "0x5B05C80")]
	public static Material GetTitanEyeMaterial(string texture)
	{
		// Lifted from source/cpp/Characters/HumanSetupMaterials.c (Characters.HumanSetupMaterials$$GetTitanEyeMaterial): 1 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		String pSVar2;
		bool bVar3;
		Material pUVar4;
		String name;
		Texture value;

		if (Il2CppMethodInitialized_07547687 == false) {
			Il2CppMethodInitialized_07547687 = true;
			if ((typeof(HumanSetupMaterials)._2).cctor_finished_or_no_cctor == 0) goto label_05c05d5d;
	label_05c05cad: ;
			pSVar1 = (Dictionary<object, object>)HumanSetupMaterials.TitanEyeMaterials;
		}
		else {
			if ((typeof(HumanSetupMaterials)._2).cctor_finished_or_no_cctor != 0) goto label_05c05cad;
	label_05c05d5d: ;
			pSVar1 = (Dictionary<object, object>)HumanSetupMaterials.TitanEyeMaterials;
		}
		if (pSVar1 == null) goto label_05c05ed9;
		bVar3 = pSVar1.ContainsKey((object)texture);
		if (!bVar3) {
			pSVar2 = ResourcePaths.Characters;
			pUVar4 = ResourceManager.InstantiateAsset<Material>(pSVar2, "Titans/Heads/Materials/TitanEyesMat", true, false);
			pSVar2 = ResourcePaths.Characters;
			name = String.Concat("Titans/Heads/Textures/", texture);
			value = (Texture)ResourceManager.LoadAsset(pSVar2, name, false, false);
			if ((value != null) &&(value.klass != (Texture)typeof(Texture2D))) {
				throw new InvalidCastException();
			}
			if (pUVar4 == null) goto label_05c05ed9;
			pUVar4.mainTexture = value;
			pSVar1 = (Dictionary<object, object>)HumanSetupMaterials.TitanEyeMaterials;
			if (pSVar1 == null) goto label_05c05ed9;
			pSVar1.set_Item((object)texture, (object)pUVar4);
		}
		pSVar1 = (Dictionary<object, object>)HumanSetupMaterials.TitanEyeMaterials;
		if (pSVar1 != null) {
			pUVar4 = pSVar1.get_Item((object)texture);
			return pUVar4;
		}
	label_05c05ed9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004260")]
	[Address(RVA = "0x5B05EF0", Offset = "0x5B04EF0", VA = "0x5B05EF0")]
	public static Material GetSkinMaterial(string texture, Color color)
	{
		// Lifted from source/cpp/Characters/HumanSetupMaterials.c (Characters.HumanSetupMaterials$$GetSkinMaterial): 1 lines keep C-only constructs
		String pSVar1;
		Material __this;
		String name;
		Texture value;

		pSVar1 = ResourcePaths.Characters;
		__this = ResourceManager.InstantiateAsset<Material>(pSVar1, "Human/Parts/Costumes/Materials/HumanSkinMat", true, false);
		pSVar1 = ResourcePaths.Characters;
		name = String.Concat("Human/Parts/Costumes/Textures/", texture);
		value = (Texture)ResourceManager.LoadAsset(pSVar1, name, false, false);
		if ((value != null) &&(value.klass != (Texture)typeof(Texture2D))) {
			throw new InvalidCastException();
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.SetTexture("_weapon_tex", value);
		__this.SetColor("_skin_color", color);
		return __this;
	}

	[Token(Token = "0x6004261")]
	[Address(RVA = "0x5B06080", Offset = "0x5B05080", VA = "0x5B06080")]
	public HumanSetupMaterials()
	{
		// Lifted from source/cpp/Characters/HumanSetupMaterials.c (Characters.HumanSetupMaterials$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Characters/HumanSetupMaterials.c.

	// Characters.HumanSetupMaterials$$.cctor: clean
	static HumanSetupMaterials()
	{
		Characters_HumanSetupMaterials_StaticFields pCVar1;
		Dictionary<string, Material> pSVar2;

		pSVar2 = new Dictionary<string, Material>();
		HumanSetupMaterials.HairMaterials = pSVar2;
		pSVar2 = new Dictionary<string, Material>();
		pCVar1 = typeof(HumanSetupMaterials).static_fields;
		pCVar1.PartMaterials = pSVar2;
		pSVar2 = new Dictionary<string, Material>();
		pCVar1 = typeof(HumanSetupMaterials).static_fields;
		pCVar1.FaceMaterials = pSVar2;
		pSVar2 = new Dictionary<string, Material>();
		pCVar1 = typeof(HumanSetupMaterials).static_fields;
		pCVar1.TitanEyeMaterials = pSVar2;
		pCVar1 = typeof(HumanSetupMaterials).static_fields;
		pCVar1.TexturePath = "Human/Parts/Costumes/Textures/";
		pCVar1 = typeof(HumanSetupMaterials).static_fields;
		pCVar1.MaterialPath = "Human/Parts/Costumes/Materials/";
		return;
	}
}
