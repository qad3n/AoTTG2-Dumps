// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetVisual
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetVisual.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using PatreonEffects;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200030A")]
internal static class AottgGuildPresetVisual
{
	[Token(Token = "0x6001303")]
	[Address(RVA = "0x57E0030", Offset = "0x57DF030", VA = "0x57E0030")]
	public static bool IsPreset(string presetId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetVisual.c (Gisketch.Aottg2UI.Game.AottgGuildPresetVisual$$IsPreset): 2 lines keep C-only constructs
		bool bVar1;
		AottgGuildPresetDefinition local_28;

		local_28.Kind = 0;
		local_28._20_4_ = 0;
		local_28.Sprite = null;
		local_28.Id = null;
		local_28.Label = null;
		local_28.ImageScale = 0.0;
		local_28._36_4_ = 0;
		bVar1 = AottgGuildPresetCatalog.TryGet(presetId, ref local_28);
		return bVar1;
	}

	[Token(Token = "0x6001304")]
	[Address(RVA = "0x57F7200", Offset = "0x57F6200", VA = "0x57F7200")]
	public static bool IsImagePreset(string presetId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetVisual.c (Gisketch.Aottg2UI.Game.AottgGuildPresetVisual$$IsImagePreset): 2 lines keep C-only constructs
		bool bVar1;
		AottgGuildPresetDefinition GStack_28;

		GStack_28.Kind = 0;
		GStack_28._20_4_ = 0;
		GStack_28.Sprite = null;
		GStack_28.Id = null;
		GStack_28.Label = null;
		GStack_28.ImageScale = 0.0;
		GStack_28._36_4_ = 0;
		bVar1 = AottgGuildPresetCatalog.TryGet(presetId, ref GStack_28);
		return bVar1 && GStack_28.Kind == 1;
	}

	[Token(Token = "0x6001305")]
	[Address(RVA = "0x57E04F0", Offset = "0x57DF4F0", VA = "0x57E04F0")]
	public static bool ApplyText(TMP_Text label, ref NameEffectController effect, string presetId, string fallback, Color color)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetVisual.c (Gisketch.Aottg2UI.Game.AottgGuildPresetVisual$$ApplyText): 4 lines keep C-only constructs
		NameEffectController __this;
		bool bVar1;
		GameObject __this_00;
		NameEffectController pPVar2;
		NameEffectSettings settings;
		Color UVar3;
		AottgGuildPresetDefinition local_58;

		local_58.Kind = 0;
		local_58._20_4_ = 0;
		local_58.Sprite = null;
		local_58.Id = null;
		local_58.Label = null;
		local_58.ImageScale = 0.0;
		local_58._36_4_ = 0;
		AottgGuildPresetVisual.ClearEffect(label, effect, color);
		bVar1 = AottgGuildPresetCatalog.TryGet(presetId, ref local_58);
		if (bVar1) {
			if (local_58.Kind == 1) {
				if (label != null) {
					label.set_text((String)**(ulong*)(g_data_07556758 + 0xb8));
					return bVar1;
				}
			}
			else if (label != null) {
				label.set_text(local_58.Label);
				NameFontCatalog.Apply(label, "Aottg2");
				UVar3.b = 1.0;
				UVar3.a = 1.0;
				UVar3.r = 1.0;
				UVar3.g = 1.0;
				label.set_color(UVar3);
				__this_00 = label.gameObject;
				if (__this_00 != null) {
					pPVar2 = __this_00.AddComponent<NameEffectController>();
					*effect = pPVar2;
					pPVar2 = *effect;
					if (pPVar2 != null) {
						pPVar2.AutoConfigure();
						__this = *effect;
						settings = AottgGuildPresetCatalog.SupporterShimmer();
						if (__this != null) {
							__this.Apply(settings);
							return bVar1;
						}
					}
				}
			}
		}
		else {
			if (fallback == null) {
				fallback = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			if (label != null) {
				label.set_text(fallback);
				NameFontCatalog.Apply(label, "Normal");
				label.set_color(color);
				return bVar1;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001306")]
	[Address(RVA = "0x57F7570", Offset = "0x57F6570", VA = "0x57F7570")]
	public static Image EnsureImage(Transform parent, ref Image image, string name, float height)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetVisual.c (Gisketch.Aottg2UI.Game.AottgGuildPresetVisual$$EnsureImage): 9 lines keep C-only constructs
		Il2CppType handle;
		bool bVar1;
		Type[] components;
		Type pSVar2;
		object pIVar3;
		GameObject __this;
		Transform __this_00;
		Image pUVar4;
		AottgGuildPresetImageLayout __this_01;

		pUVar4 = *image;
		bVar1 = ((Object)pUVar4 == null);
		if (bVar1) {
			components = (Type[])new Type[4];
			handle = TypeRef_UnityEngine_RectTransform;
			pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
			if (components == null) goto label_058f788d;
			if (pSVar2 != null) {
				pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((components.obj).klass)._1).element_class);
				if (pIVar3 == null) goto label_058f7897;
			}
			if ((int)components.Length == 0) {
	label_058f7892: ;
				throw new IndexOutOfRangeException();
			}
			components[0] = pSVar2;
			pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_CanvasRenderer);
			if (pSVar2 != null) {
				pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((components.obj).klass)._1).element_class);
				if (pIVar3 == null) goto label_058f7897;
			}
			if ((components.Length & 0xfffffffe) == 0) goto label_058f7892;
			components[1] = pSVar2;
			pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Image);
			if (pSVar2 != null) {
				pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((components.obj).klass)._1).element_class);
				if (pIVar3 == null) goto label_058f7897;
			}
			if ((uint)components.Length < 3) goto label_058f7892;
			components[2] = pSVar2;
			pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_LayoutElement);
			if (pSVar2 != null) {
				pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((components.obj).klass)._1).element_class);
				if (pIVar3 == null) {
	label_058f7897: ;
					pIVar3 = new ArrayTypeMismatchException();
					throw pIVar3;
				}
			}
			if ((components.Length & 0xfffffffc) == 0) goto label_058f7892;
			components[3] = pSVar2;
			__this = new GameObject(name, components);
			if (__this == null) goto label_058f788d;
			__this_00 = __this.transform;
			if (__this_00 == null) goto label_058f788d;
			__this_00.SetParent(parent, false);
			pUVar4 = __this.GetComponent<Image>();
			*image = pUVar4;
			pUVar4 = *image;
			if (pUVar4 == null) goto label_058f788d;
			pUVar4.set_raycastTarget(false);
			if (*image == null) goto label_058f788d;
			(*image).preserveAspect = true;
		}
		__this_01 = AottgGuildPresetImageLayout.Runtime(*image);
		if (__this_01 != null) {
			__this_01._baseWidth = height * 2.9;
			__this_01._baseHeight = height;
			__this_01.Apply(1.0);
			return *image;
		}
	label_058f788d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001307")]
	[Address(RVA = "0x57E0170", Offset = "0x57DF170", VA = "0x57E0170")]
	public static bool ApplyImage(Image image, string presetId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetVisual.c (Gisketch.Aottg2UI.Game.AottgGuildPresetVisual$$ApplyImage): 6 lines keep C-only constructs
		Object pUVar1;
		String resourcePath;
		float scale;
		bool bVar2;
		bool enabled;
		MethodInfo pMVar3;
		AottgGuildPresetImageLayout pGVar4;
		GameObject pUVar5;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		AottgGuildPresetDefinition local_58;

		local_58.Kind = 0;
		local_58._20_4_ = 0;
		local_58.Sprite = null;
		local_58.Id = null;
		local_58.Label = null;
		local_58.ImageScale = 0.0;
		local_58._36_4_ = 0;
		bVar2 = ((Object)image == null);
		if (((bVar2) ||(bVar2 = AottgGuildPresetCatalog.TryGet(presetId, ref local_58), resourcePath = local_58.Sprite, !bVar2)) || (local_58.Kind != 1)) {
			bVar2 = ((Object)image != null);
			if (!bVar2) {
				return false;
			}
			pMVar3 = null;
			AottgGuildPresetImageShimmer.SetEnabled(image, false);
			pGVar4 = AottgGuildPresetImageLayout.Runtime(image);
			if (((pGVar4 != null) &&(pGVar4.Apply(1.0), image != null)) &&(pUVar5 = image.gameObject, pUVar5 != null)) {
				pUVar5.SetActive(false);
				return false;
			}
		}
		else {
			pMVar3 = (MethodInfo)GisketchSpriteLoader.Load(resourcePath);
			if (image != null) {
				image.sprite = (Sprite)pMVar3;
				scale = local_58.ImageScale;
				pGVar4 = AottgGuildPresetImageLayout.Runtime(image);
				if (pGVar4 != null) {
					pGVar4.Apply(scale);
					pUVar5 = image.gameObject;
					pUVar1 = (Object)image.m_Sprite;
					bVar2 = (pUVar1 != null);
					if (pUVar5 != null) {
						enabled = false;
						pUVar5.SetActive(bVar2);
						bVar2 = (local_58.Id == "aottg2_developer_team");
						pMVar3 = extraout_RDX;
						if (bVar2) {
							pUVar1 = (Object)image.m_Sprite;
							enabled = (pUVar1 != null);
							pMVar3 = extraout_RDX_00;
						}
						AottgGuildPresetImageShimmer.SetEnabled(image, enabled);
						pUVar1 = (Object)image.m_Sprite;
						bVar2 = (pUVar1 != null);
						return bVar2;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001308")]
	[Address(RVA = "0x57E0060", Offset = "0x57DF060", VA = "0x57E0060")]
	public static void ClearEffect(TMP_Text label, ref NameEffectController effect, Color color)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetVisual.c (Gisketch.Aottg2UI.Game.AottgGuildPresetVisual$$ClearEffect): 4 lines keep C-only constructs
		NameEffectController pPVar1;
		bool bVar2;

		pPVar1 = *effect;
		bVar2 = ((Object)pPVar1 != null);
		if (bVar2) {
			if (*effect == null) goto label_058e0162;
			(*effect).Clear();
			pPVar1 = *effect;
			Object.Destroy((Object)pPVar1);
			*effect = null;
		}
		bVar2 = ((Object)label != null);
		if (!bVar2) {
			return;
		}
		if (label != null) {
			label.set_color(color) ;
			return;
		}
	label_058e0162: ;
		throw new NullReferenceException();
	}
}
