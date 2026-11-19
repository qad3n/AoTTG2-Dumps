// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterNamePreviewRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.State;
using Il2CppDummyDll;
using PatreonEffects;
using SimpleJSONFixed;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002EE")]
internal sealed class AottgCharacterNamePreviewRuntime : MonoBehaviour
{
	[Token(Token = "0x4000EC7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private GisketchUIState _state;

	[Token(Token = "0x4000EC8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private GameObject _guildRow;

	[Token(Token = "0x4000EC9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private AottgBadgeIconRowRuntime _guildBadges;

	[Token(Token = "0x4000ECA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private NameEffectLabel _guild;

	[Token(Token = "0x4000ECB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private NameEffectLabel _name;

	[Token(Token = "0x4000ECC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private Image _guildPresetImage;

	[Token(Token = "0x4000ECD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private NameEffectController _guildPresetEffect;

	[Token(Token = "0x4000ECE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private bool _liveDialog;

	[Token(Token = "0x60011EC")]
	[Address(RVA = "0x57DE250", Offset = "0x57DD250", VA = "0x57DE250")]
	public void Setup(GisketchUIState state, bool liveDialog)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterNamePreviewRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$Setup): 1 lines keep C-only constructs
		GisketchUIState __this_00;
		Action<string> __this_01;
		GameObject pUVar1;
		Transform pUVar2;
		AottgBadgeIconRowRuntime pGVar3;
		Image pUVar4;
		NameEffectLabel pPVar5;
		AottgCharacterNamePreviewRuntime pGVar6;

		this._state = state;
		this._liveDialog = liveDialog;
		__this_00 = this._state;
		if (__this_00 != null) {
			__this_01 = new Action<string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_OnStateChanged);
			__this_00.add_Changed(__this_01);
		}
		pUVar1 = this.CreateRow("AoTTG Preview Guild Row", 20.0);
		this._guildRow = pUVar1;
		pGVar6 = (AottgCharacterNamePreviewRuntime)this._guildRow;
		if (pGVar6 != null) {
			pUVar2 = pGVar6.transform;
			pGVar3 = pGVar6.CreateBadges(pUVar2, 20.0);
			this._guildBadges = pGVar3;
			pGVar6 = (AottgCharacterNamePreviewRuntime)this._guildRow;
			if (pGVar6 != null) {
				pUVar2 = pGVar6.transform;
				pUVar4 = pGVar6.CreatePresetImage(pUVar2, 30.0);
				this._guildPresetImage = pUVar4;
				pUVar1 = this._guildRow;
				if (pUVar1 != null) {
					pUVar2 = pUVar1.transform;
					pPVar5 = this.CreateLabel("AoTTG Preview Guild", 20.0, pUVar2, false);
					this._guild = pPVar5;
					pPVar5 = this.CreateLabel("AoTTG Preview Name", 20.0, null, true);
					this._name = pPVar5;
					this.Refresh();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60011ED")]
	[Address(RVA = "0x57DEEC0", Offset = "0x57DDEC0", VA = "0x57DEEC0")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterNamePreviewRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$OnDestroy): 1 lines keep C-only constructs
		GisketchUIState __this_00;
		Action<string> __this_01;

		__this_00 = this._state;
		if (__this_00 == null) {
			return;
		}
		__this_01 = new Action<string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewRuntime_OnStateChanged);
		__this_00.remove_Changed(__this_01);
		return;
	}

	[Token(Token = "0x60011EE")]
	[Address(RVA = "0x57DEF40", Offset = "0x57DDF40", VA = "0x57DEF40")]
	private void OnStateChanged(string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterNamePreviewRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$OnStateChanged): clean
		this.Refresh();
		return;
	}

	[Token(Token = "0x60011EF")]
	[Address(RVA = "0x57DDAA0", Offset = "0x57DCAA0", VA = "0x57DDAA0")]
	public void Refresh()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterNamePreviewRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$Refresh): 8 lines keep C-only constructs
		uint uVar1;
		AottgBadgeIconRowRuntime pGVar2;
		NameEffectLabel pPVar3;
		Image pUVar4;
		bool bVar5;
		bool value;
		JSONNode pSVar6;
		Transform pUVar7;
		TMP_InputField x;
		JSONNode pSVar8;
		String pSVar9;
		AottgEditCharacterDialog* ppGVar10;
		String[] ids;
		String font;
		GameObject pUVar11;
		GameObject __this_00;
		JSONNode method_00;
		IntPtr extraout_RDX;
		GameObject pUVar13;
		String local_48;
		String local_40;
		String local_38;

		pSVar6 = AottgCharacterInfoState.Current();
		pUVar7 = this.transform;
		if (pUVar7 == null) goto label_058de046;
		pUVar7 = pUVar7.root;
		if (this._liveDialog == false) {
	label_058ddca7: ;
			if ((pSVar6 == null) ||(pSVar8 = pSVar6.get_Item("name"), pSVar8 == null)) goto label_058de046;
			local_48 = pSVar8.get_Value();
			local_40 = AottgCharacterInfoState.DisplayGuild(pSVar6);
			local_38 = AottgCharacterNamePreviewRuntime.PresetId(pSVar6);
			pGVar2 = this._guildBadges;
			if (pGVar2 == null) goto label_058de046;
			bVar5 = false;
			pGVar2.SetFromCharacterInfo(pSVar6);
			pSVar9 = AottgCharacterNamePreviewRuntime.Font(pSVar6, "nameFont");
			font = AottgCharacterNamePreviewRuntime.Font(pSVar6, "guildFont");
		}
		else {
			x = AottgCharacterNamePreviewRuntime.Find<TMP_InputField>(pUVar7, "profile-character-name");
			bVar5 = ((Object)x != null);
			if (!bVar5) goto label_058ddca7;
			if ((pSVar6 == null) ||(pSVar8 = pSVar6.get_Item("name"), pSVar8 == null)) goto label_058de046;
			method_00 = pSVar8.klass;
			pSVar9 = (String)pSVar8.get_Value((method_00.vtable)._9_get_Value.method, extraout_RDX, (IntPtr)method_00);
			pSVar9 = AottgCharacterNamePreviewRuntime.Input(pUVar7, "profile-character-name", pSVar9);
			if ((typeof(AottgCharacterTextField)._2).cctor_finished_or_no_cctor == 0) {
			}
			local_48 = AottgCharacterTextField.Value("profile-character-name", pSVar9);
			local_40 = AottgCharacterNamePreviewRuntime.DialogGuild(pUVar7, pSVar6);
			if ((typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor == 0) {
				if (Il2CppMethodInitialized_07545588 != false) goto label_058ddc75;
	label_058ddd65: ;
				Il2CppMethodInitialized_07545588 = true;
				if ((typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor != 0) goto label_058ddc85;
	label_058ddd88: ;
				if (AottgEditCharacterDialog._noGuildSelected != false) goto label_058ddc96;
	label_058ddda8: ;
				ppGVar10 = &typeof(AottgEditCharacterDialog);
				if ((typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor == 0) {
					ppGVar10 = &typeof(AottgEditCharacterDialog);
				}
			}
			else {
				if (Il2CppMethodInitialized_07545588 == false) goto label_058ddd65;
	label_058ddc75: ;
				if ((typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor == 0) goto label_058ddd88;
	label_058ddc85: ;
				if (AottgEditCharacterDialog._noGuildSelected == false) goto label_058ddda8;
	label_058ddc96: ;
				ppGVar10 = (AottgEditCharacterDialog*)&g_data_07556758;
			}
			local_38 = (*ppGVar10).static_fields._selectedGuildPresetId;
			pGVar2 = this._guildBadges;
			if ((typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor == 0) {
				if (g_data_0754558a != false) goto label_058dddf0;
	label_058de016: ;
				g_data_0754558a = true;
				uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (g_data_0754558a == false) goto label_058de016;
	label_058dddf0: ;
				uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			ids = AottgProfileEntitlementCatalog.OrderedBadgeIds((IEnumerable<string>)AottgEditCharacterDialog.SelectedBadges);
			if (pGVar2 == null) goto label_058de046;
			pGVar2.SetBadges((IEnumerable<string>)ids);
			pSVar9 = AottgEditCharacterDialog.NameFont();
			font = AottgEditCharacterDialog.GuildFont();
			pUVar11 = this.gameObject;
			AottgCharacterTextField.SetFont(pUVar11, "profile-character-name", pSVar9);
			pUVar11 = this.gameObject;
			AottgCharacterTextField.SetFont(pUVar11, "profile-character-guild", font);
			bVar5 = true;
		}
		pPVar3 = this._name;
		pSVar8 = pSVar6.get_Item("nameEffect");
		AottgCharacterNamePreviewRuntime.Apply(pPVar3, local_48, bVar5, true, pSVar8, pSVar9);
		pSVar6 = pSVar6.get_Item("guildEffect");
		this.ApplyGuild(local_40, local_38, bVar5, pSVar6, font);
		pGVar2 = this._guildBadges;
		if (pGVar2 != null) {
			bVar5 = pGVar2._HasBadges_k__BackingField == false;
			pUVar11 = this._guildRow;
			pUVar13 = null;
			if (bVar5) {
				pUVar13 = pUVar11;
			}
			value = true;
			if (bVar5) {
				pPVar3 = this._guild;
				if ((pPVar3 == null) ||(__this_00 = pPVar3.gameObject, __this_00 == null)) goto label_058de046;
				bVar5 = __this_00.activeSelf;
				if (!bVar5) {
					pUVar4 = this._guildPresetImage;
					value = false;
					bVar5 = ((Object)pUVar4 != null);
					if (bVar5) {
						pUVar4 = this._guildPresetImage;
						if ((pUVar4 == null) ||(pUVar11 = pUVar4.gameObject, pUVar11 == null)) goto label_058de046;
						value = pUVar11.activeSelf;
					}
					pUVar11 = pUVar13;
				}
			}
			if (pUVar11 != null) {
				pUVar11.SetActive(value);
				return;
			}
		}
	label_058de046: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60011F0")]
	[Address(RVA = "0x57DE410", Offset = "0x57DD410", VA = "0x57DE410")]
	private GameObject CreateRow(string id, float fontSize)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterNamePreviewRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$CreateRow): 2 lines keep C-only constructs
		Il2CppType handle;
		Type[] components;
		Type pSVar1;
		object pIVar2;
		GameObject __this_00;
		Transform __this_01;
		Transform parent;
		LayoutElement pUVar3;
		HorizontalLayoutGroup __this_02;

		components = (Type[])new Type[2];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar1 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components == null) {
	label_058de696: ;
			throw new NullReferenceException();
		}
		if (pSVar1 != null) {
			pIVar2 = il2cpp_vm_Object_IsInst((object)pSVar1, (((components.obj).klass)._1).element_class);
			if (pIVar2 == null) goto label_058de6a0;
		}
		if ((int)components.Length != 0) {
			components[0] = pSVar1;
			pSVar1 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_LayoutElement);
			if (pSVar1 != null) {
				pIVar2 = il2cpp_vm_Object_IsInst((object)pSVar1, (((components.obj).klass)._1).element_class);
				if (pIVar2 == null) {
	label_058de6a0: ;
					pIVar2 = new ArrayTypeMismatchException();
					throw pIVar2;
				}
			}
			if ((components.Length & 0xfffffffe) != 0) {
				components[1] = pSVar1;
				__this_00 = new GameObject(id, components);
				if (__this_00 != null) {
					__this_01 = __this_00.transform;
					parent = this.transform;
					if (__this_01 != null) {
						__this_01.SetParent(parent, false);
						pUVar3 = __this_00.GetComponent<LayoutElement>();
						if (pUVar3 != null) {
							pUVar3.set_preferredHeight(fontSize + 10.0);
							pUVar3.set_flexibleWidth(1.0);
							__this_02 = __this_00.AddComponent<HorizontalLayoutGroup>();
							if (__this_02 != null) {
								__this_02.childAlignment = 4;
								__this_02.childControlWidth = true ;
								__this_02.childControlHeight = true ;
								__this_02.childForceExpandWidth = false;
								__this_02.childForceExpandHeight = false;
								__this_02.spacing = 5.0;
								return __this_00;
							}
						}
					}
				}
				goto label_058de696;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60011F1")]
	[Address(RVA = "0x57DE6B0", Offset = "0x57DD6B0", VA = "0x57DE6B0")]
	private AottgBadgeIconRowRuntime CreateBadges(Transform parent, float size)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterNamePreviewRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$CreateBadges): 2 lines keep C-only constructs
		Il2CppType handle;
		Type[] components;
		Type pSVar1;
		object pIVar2;
		GameObject __this_00;
		Transform __this_01;
		AottgBadgeIconRowRuntime __this_02;

		components = (Type[])new Type[2];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar1 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components == null) {
	label_058de894: ;
			throw new NullReferenceException();
		}
		if (pSVar1 != null) {
			pIVar2 = il2cpp_vm_Object_IsInst((object)pSVar1, (((components.obj).klass)._1).element_class);
			if (pIVar2 == null) goto label_058de89e;
		}
		if ((int)components.Length != 0) {
			components[0] = pSVar1;
			pSVar1 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_LayoutElement);
			if (pSVar1 != null) {
				pIVar2 = il2cpp_vm_Object_IsInst((object)pSVar1, (((components.obj).klass)._1).element_class);
				if (pIVar2 == null) {
	label_058de89e: ;
					pIVar2 = new ArrayTypeMismatchException();
					throw pIVar2;
				}
			}
			if ((components.Length & 0xfffffffe) != 0) {
				components[1] = pSVar1;
				__this_00 = new GameObject("AoTTG Preview Guild Badges", components);
				if (__this_00 != null) {
					__this_01 = __this_00.transform;
					if (__this_01 != null) {
						__this_01.SetParent(parent, false);
						__this_02 = __this_00.AddComponent<AottgBadgeIconRowRuntime>();
						if (__this_02 != null) {
							__this_02.Setup(size, 4.0, null, null, true);
							return __this_02;
						}
					}
				}
				goto label_058de894;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60011F2")]
	[Address(RVA = "0x57DE8B0", Offset = "0x57DD8B0", VA = "0x57DE8B0")]
	private Image CreatePresetImage(Transform parent, float height)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterNamePreviewRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$CreatePresetImage): 4 lines keep C-only constructs
		Il2CppType handle;
		Type[] components;
		Type pSVar1;
		object pIVar2;
		GameObject __this_00;
		Transform __this_01;
		Image __this_02;
		LayoutElement pUVar3;

		components = (Type[])new Type[4];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar1 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components == null) {
	label_058debc9: ;
			throw new NullReferenceException();
		}
		if (pSVar1 != null) {
			pIVar2 = il2cpp_vm_Object_IsInst((object)pSVar1, (((components.obj).klass)._1).element_class);
			if (pIVar2 == null) goto label_058debd3;
		}
		if ((int)components.Length != 0) {
			components[0] = pSVar1;
			pSVar1 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_LayoutElement);
			if (pSVar1 != null) {
				pIVar2 = il2cpp_vm_Object_IsInst((object)pSVar1, (((components.obj).klass)._1).element_class);
				if (pIVar2 == null) goto label_058debd3;
			}
			if ((components.Length & 0xfffffffe) == 0) goto label_058debce;
			components[1] = pSVar1;
			pSVar1 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_CanvasRenderer);
			if (pSVar1 != null) {
				pIVar2 = il2cpp_vm_Object_IsInst((object)pSVar1, (((components.obj).klass)._1).element_class);
				if (pIVar2 == null) goto label_058debd3;
			}
			if (2 < (uint)components.Length) {
				components[2] = pSVar1;
				pSVar1 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Image);
				if (pSVar1 != null) {
					pIVar2 = il2cpp_vm_Object_IsInst((object)pSVar1, (((components.obj).klass)._1).element_class) ;
					if (pIVar2 == null) {
	label_058debd3: ;
						pIVar2 = new ArrayTypeMismatchException();
						throw pIVar2;
					}
				}
				if ((components.Length & 0xfffffffc) != 0) {
					components[3] = pSVar1;
					__this_00 = new GameObject("AoTTG Preview Guild Preset Image", components);
					if (__this_00 != null) {
						__this_01 = __this_00.transform;
						if (__this_01 != null) {
							__this_01.SetParent(parent, false);
							__this_02 = __this_00.GetComponent<Image>() ;
							if (__this_02 != null) {
								__this_02.set_raycastTarget(false);
								__this_02.preserveAspect = true;
								pUVar3 = __this_00.GetComponent<LayoutElement>();
								if (pUVar3 != null) {
									pUVar3.set_preferredWidth(height * 2.9);
									pUVar3.set_preferredHeight(height);
									__this_00.SetActive(false);
									return __this_02;
								}
							}
						}
					}
					goto label_058debc9;
				}
			}
		}
	label_058debce: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60011F3")]
	[Address(RVA = "0x57DEBF0", Offset = "0x57DDBF0", VA = "0x57DEBF0")]
	private NameEffectLabel CreateLabel(string id, float fontSize, [Optional] Transform parent, bool flexibleWidth = true)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterNamePreviewRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$CreateLabel): 2 lines keep C-only constructs
		Il2CppType handle;
		bool bVar1;
		Type[] components;
		Type pSVar2;
		object pIVar3;
		GameObject __this_00;
		Transform __this_01;
		LayoutElement pUVar4;
		NameEffectLabel __this_02;
		float fVar5;
		Color value;

		components = (Type[])new Type[2];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components == null) {
	label_058deea3: ;
			throw new NullReferenceException();
		}
		if (pSVar2 != null) {
			pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((components.obj).klass)._1).element_class);
			if (pIVar3 == null) goto label_058deead;
		}
		if ((int)components.Length != 0) {
			components[0] = pSVar2;
			pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_LayoutElement);
			if (pSVar2 != null) {
				pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((components.obj).klass)._1).element_class);
				if (pIVar3 == null) {
	label_058deead: ;
					pIVar3 = new ArrayTypeMismatchException();
					throw pIVar3;
				}
			}
			if ((components.Length & 0xfffffffe) != 0) {
				components[1] = pSVar2;
				__this_00 = new GameObject(id, components);
				if (__this_00 != null) {
					__this_01 = __this_00.transform;
					bVar1 = ((Object)parent != null);
					if (!bVar1) {
						parent = this.transform;
					}
					if (__this_01 != null) {
						__this_01.SetParent(parent, false);
						pUVar4 = __this_00.GetComponent<LayoutElement>();
						if (pUVar4 != null) {
							pUVar4.set_preferredHeight(fontSize + 10.0);
							if (flexibleWidth) {
								fVar5 = 1.0;
							}
							else {
								fVar5 = 0.0;
							}
							pUVar4.set_flexibleWidth(fVar5);
							__this_02 = __this_00.AddComponent<NameEffectLabel>();
							if (__this_02 != null) {
								__this_02.fontSize = fontSize;
								value.b = 1.0;
								value.a = 1.0;
								value.r = 1.0;
								value.g = 1.0;
								__this_02.color = value;
								__this_02.alignment = 0x1002;
								__this_02.richText = true;
								return __this_02;
							}
						}
					}
				}
				goto label_058deea3;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60011F4")]
	[Address(RVA = "0x57DF0C0", Offset = "0x57DE0C0", VA = "0x57DF0C0")]
	private static string DialogGuild(Transform root, JSONNode info)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterNamePreviewRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$DialogGuild): 9 lines keep C-only constructs
		sbyte cVar1;
		uint uVar2;
		bool bVar3;
		JSONNode pSVar4;
		String pSVar5;
		JSONNode method_00;
		IntPtr extraout_RDX;
		long plVar6;

		if (Il2CppMethodInitialized_075454fb == false) {
			Il2CppMethodInitialized_075454fb = true;
			uVar2 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		if (Il2CppMethodInitialized_075455ec == false) {
			Il2CppMethodInitialized_075455ec = true;
			uVar2 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(AottgEditCharacterDialog))._2). cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
			cVar1 = AottgEditCharacterDialog._noGuildSelected;
		}
		else {
			cVar1 = *(sbyte)((long)(typeof(AottgEditCharacterDialog)). static_fields + 8);
		}
		if (cVar1 != false) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (((typeof(AottgEditCharacterDialog))._2). cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		if (Il2CppMethodInitialized_07545588 == false) {
			Il2CppMethodInitialized_07545588 = true;
			uVar2 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(AottgEditCharacterDialog))._2). cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
			cVar1 = AottgEditCharacterDialog._noGuildSelected;
		}
		else {
			cVar1 = *(sbyte)((long)(typeof(AottgEditCharacterDialog)). static_fields + 8);
		}
		if (cVar1 == false) {
			plVar6 = (long)&typeof(AottgEditCharacterDialog);
			if (((typeof(AottgEditCharacterDialog))._2). cctor_finished_or_no_cctor == 0) {
			}
		}
		else {
			plVar6 = &g_data_07556758;
		}
		pSVar5 = ((AottgEditCharacterDialog)*plVar6).static_fields. _selectedGuildPresetId;
		bVar3 = String.IsNullOrEmpty(pSVar5);
		if (!bVar3) {
			pSVar5 = AottgProfileEntitlementCatalog.PresetGuildLabel(pSVar5) ;
			return pSVar5;
		}
		if ((info == null) ||(pSVar4 = info.get_Item("guild"), pSVar4 == null)) {
			throw new NullReferenceException();
		}
		method_00 = pSVar4.klass;
		pSVar5 = (String)pSVar4.get_Value((method_00.vtable)._9_get_Value.method, extraout_RDX, (IntPtr)method_00);
		pSVar5 = AottgCharacterNamePreviewRuntime.Input(root, "profile-character-guild", pSVar5);
		if ((typeof(AottgCharacterTextField)._2).cctor_finished_or_no_cctor == 0) {
		}
		pSVar5 = AottgCharacterTextField.Value("profile-character-guild", pSVar5);
		return pSVar5;
	}

	[Token(Token = "0x60011F5")]
	[Address(RVA = "0x57DFDC0", Offset = "0x57DEDC0", VA = "0x57DFDC0")]
	private void ApplyGuild(string text, string presetId, bool liveDialog, JSONNode effect, string font)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterNamePreviewRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$ApplyGuild): 8 lines keep C-only constructs
		NameEffectController* effect_00;
		NameEffectLabel pPVar1;
		TextMeshProUGUI label;
		Image pUVar2;
		bool bVar3;
		GameObject pUVar4;
		String pSVar5;
		String name;
		Color color;
		Color color_00;
		Color color_01;
		AottgGuildPresetDefinition local_58;

		local_58.Kind = 0;
		local_58._20_4_ = 0;
		local_58.Sprite = null;
		local_58.Id = null;
		local_58.Label = null;
		local_58.ImageScale = 0.0;
		local_58._36_4_ = 0;
		bVar3 = AottgGuildPresetCatalog.TryGet(presetId, ref local_58);
		if (bVar3) {
			pPVar1 = this._guild;
			if (pPVar1 != null) {
				pPVar1.ClearNameEffect();
				pPVar1 = this._guild;
				if (pPVar1 != null) {
					effect_00 = &this._guildPresetEffect;
					color.b = 1.0;
					color.a = 1.0;
					color.r = 1.0;
					color.g = 1.0;
					AottgGuildPresetVisual.ClearEffect((TMP_Text)pPVar1._nameTmp, effect_00, color);
					bVar3 = AottgGuildPresetVisual.ApplyImage(this._guildPresetImage, presetId);
					this.SetGuildRowSpacing(bVar3);
					pPVar1 = this._guild;
					if ((pPVar1 != null) &&(pUVar4 = pPVar1.gameObject, pUVar4 != null)) {
						pUVar4.SetActive(!bVar3);
						if (bVar3) {
							return;
						}
						pPVar1 = this._guild;
						pSVar5 = (String)**(ulong*)(g_data_07556758 + 0xb8);
						local_58.Kind = 0;
						local_58._20_4_ = 0;
						local_58.Sprite = null;
						local_58.Id = null;
						local_58.Label = null;
						local_58.ImageScale = 0.0;
						local_58._36_4_ = 0;
						bVar3 = AottgGuildPresetCatalog.TryGet(presetId, ref local_58);
						if (pPVar1 != null) {
							name = local_58.Label;
							if (!bVar3) {
								name = presetId;
							}
							pPVar1.SetText(pSVar5, name, (String)**(ulong*)(g_data_07556758 + 0xb8));
							pPVar1 = this._guild;
							if (pPVar1 != null) {
								label = pPVar1._nameTmp;
								local_58.Kind = 0;
								local_58._20_4_ = 0;
								local_58.Sprite = null;
								local_58.Id = null;
								local_58.Label = null;
								local_58.ImageScale = 0.0;
								local_58._36_4_ = 0;
								bVar3 = AottgGuildPresetCatalog.TryGet(presetId, ref local_58);
								pSVar5 = presetId;
								if (bVar3) {
									pSVar5 = local_58.Label;
								}
								color_00.b = 1.0;
								color_00.a = 1.0;
								color_00.r = 1.0;
								color_00.g = 1.0;
								AottgGuildPresetVisual.ApplyText((TMP_Text)label, effect_00, presetId, pSVar5, color_00);
								return;
							}
						}
					}
				}
			}
		}
		else {
			pUVar2 = this._guildPresetImage;
			bVar3 = ((Object)pUVar2 != null);
			if (bVar3) {
				pUVar2 = this._guildPresetImage;
				if ((pUVar2 == null) ||(pUVar4 = pUVar2.gameObject, pUVar4 == null)) goto label_058e002b;
				pUVar4.SetActive(false);
			}
			this.SetGuildRowSpacing(false);
			pPVar1 = this._guild;
			if (pPVar1 != null) {
				color_01.b = 1.0;
				color_01.a = 1.0;
				color_01.r = 1.0;
				color_01.g = 1.0;
				AottgGuildPresetVisual.ClearEffect((TMP_Text)pPVar1._nameTmp, ref this._guildPresetEffect, color_01);
				AottgCharacterNamePreviewRuntime.Apply(this._guild, text, liveDialog, false, effect, font);
				return;
			}
		}
	label_058e002b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60011F6")]
	[Address(RVA = "0x57E03D0", Offset = "0x57DF3D0", VA = "0x57E03D0")]
	private void SetGuildRowSpacing(bool imageGuild)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterNamePreviewRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$SetGuildRowSpacing): clean
		Object x;
		GameObject __this_00;
		bool bVar1;
		HorizontalLayoutGroup __this_01;
		float value;

		x = (Object)this._guildRow;
		__this_01 = null;
		bVar1 = (x != null);
		if (bVar1) {
			__this_00 = this._guildRow;
			if (__this_00 == null) goto label_058e04a9;
			__this_01 = __this_00.GetComponent<HorizontalLayoutGroup>();
		}
		bVar1 = ((Object)__this_01 != null);
		if (!bVar1) {
			return;
		}
		if (__this_01 != null) {
			if (imageGuild) {
				value = 3.5;
			}
			else {
				value = 5.0;
			}
			__this_01.spacing = value;
			return;
		}
	label_058e04a9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60011F7")]
	[Address(RVA = "0x57DF320", Offset = "0x57DE320", VA = "0x57DF320")]
	private static string PresetId(JSONNode info)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterNamePreviewRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$PresetId): clean
		bool bVar1;
		JSONNode pSVar2;
		String pSVar3;

		bVar1 = (info != null);
		if (bVar1) {
			if (info != null) {
				pSVar2 = info.get_Item("guildPresetId");
				bVar1 = (pSVar2 != null);
				if (!bVar1) goto label_058df407;
				pSVar2 = info.get_Item("guildPresetId");
				if (pSVar2 != null) {
					return pSVar3;
				}
			}
			throw new NullReferenceException();
		}
	label_058df407: ;
		return (String)**(ulong*)(g_data_07556758 + 0xb8);
	}

	[Token(Token = "0x60011F8")]
	[Address(RVA = "0x57DF880", Offset = "0x57DE880", VA = "0x57DF880")]
	private static void Apply(NameEffectLabel label, string text, bool liveDialog, bool name, JSONNode effect, string font)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterNamePreviewRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$Apply): 56 lines keep C-only constructs
		uint uVar1;
		int effect_00;
		bool bVar2;
		bool bVar3;
		AottgCharacterTextColorCodec.Document pGVar4;
		GameObject __this;
		TMP_FontAsset font_00;
		JSONNode pSVar5;
		String pSVar6;
		String name_00;
		undefined7 in_register_00000009;
		undefined7 in_register_00000011;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo extraout_RDX_01;
		MethodInfo extraout_RDX_02;
		MethodInfo extraout_RDX_03;
		MethodInfo pMVar7;
		String* ppSVar8;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		uint uVar10;
		uint uVar11;
		Color UVar12;
		Color a;
		Color b;
		Color c;
		int local_9c;
		byte[] local_98 = new byte[16];
		byte[] local_88 = new byte[16];
		byte[] local_78 = new byte[16];
		byte[] local_68 = new byte[16];
		byte[] local_58 = new byte[16];
		byte[] local_48 = new byte[16];

		local_98._0_4_ = (int)CONCAT71(in_register_00000009, name);
		local_88._0_4_ = (int)CONCAT71(in_register_00000011, liveDialog);
		pMVar7 = (MethodInfo)text;
		if (Il2CppMethodInitialized_075454ff == false) {
			Il2CppMethodInitialized_075454ff = true;
			if (text == null) goto label_058df92a;
	label_058df8b8: ;
			local_9c = 0;
			pGVar4 = AottgCharacterTextColorCodec.Parse(text);
		}
		else {
			if (text != null) goto label_058df8b8;
	label_058df92a: ;
			local_9c = 0;
			pGVar4 = AottgCharacterTextColorCodec.Parse((String)**(ulong*)(g_data_07556758 + 0xb8));
		}
		if (((label == null) ||(__this = label.gameObject, pGVar4 == null)) ||(bVar2 = String.IsNullOrEmpty(pGVar4.Text), __this == null)) goto label_058dfdbb;
		__this.SetActive(!bVar2);
		label.ClearNameEffect();
		bVar3 = false;
		font_00 = NameFontCatalog.Load(font);
		label.SetFont(font_00);
		uVar10 = g_data_01005870._8_4_;
		uVar11 = g_data_01005870._12_4_;
		pMVar7 = null;
		UVar12.b = (float)(int)g_data_01005870;
		UVar12.a = (float)g_data_01005870._4_4_;
		UVar12.r = (float)(int)g_data_01005870;
		UVar12.g = (float)g_data_01005870._4_4_;
		label.color = UVar12;
		bVar2 = PatreonHelper.LocalPlayerHasNameEffectAccess();
		if (bVar2) {
			if (local_88[0] == false) {
				bVar3 = false;
				bVar2 = (effect != null);
				if (bVar2) {
					if ((effect == null) ||(pSVar5 = effect.get_Item("enabled"), pSVar5 == null)) goto label_058dfdbb;
					bVar3 = pSVar5.get_AsBool();
				}
	label_058dfad6: ;
				bVar2 = (effect != null);
				pMVar7 = extraout_RDX;
				pSVar6 = "None";
				if (bVar2) {
					if (effect == null) {
	label_058dfdbb: ;
						throw new NullReferenceException();
					}
					pSVar5 = effect.get_Item("type");
					bVar2 = (pSVar5 != null);
					pMVar7 = extraout_RDX_00;
					pSVar6 = "None";
					if (bVar2) {
						pSVar5 = effect.get_Item("type");
						if (pSVar5 == null) goto label_058dfdbb;
						pSVar6 = pSVar5.get_Value();
						pMVar7 = extraout_RDX_01;
					}
				}
				goto joined_r0x058dfbb2;
			}
			uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
			if (local_98[0] == false) {
				if (uVar1 == 0) {
				}
				ppSVar8 = &"profile-character-guild-effect";
				uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (uVar1 == 0) {
				}
				ppSVar8 = &"profile-character-name-effect";
				uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			bVar3 = AottgEditCharacterDialog.EffectEnabled(*ppSVar8);
		}
		else if (local_88[0] == false) goto label_058dfad6;
		uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		if (local_98[0] == false) {
			if (uVar1 == 0) {
			}
			pSVar6 = AottgEditCharacterDialog.GuildEffectType();
			pMVar7 = extraout_RDX_03;
		}
		else {
			if (uVar1 == 0) {
			}
			pSVar6 = AottgEditCharacterDialog.NameEffectType();
			pMVar7 = extraout_RDX_02;
		}
	joined_r0x058dfbb2: ;
		if (bVar3 == false) {
			local_9c = 0;
			pSVar6 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			local_9c = 0;
			bVar2 = NameEffectPresets.TryResolve(pSVar6, ref local_9c);
			pMVar7 = *(MethodInfo*)(g_data_07556758 + 0xb8);
			pSVar6 = (String)pMVar7.methodPointer;
			if (bVar2) {
				pMVar7 = null;
				label.SetText(pSVar6, pGVar4.Text, (String)**(ulong*)(g_data_07556758 + 0xb8));
				effect_00 = local_9c;
				bVar3 = (bool)local_88[0];
				bVar2 = (bool)local_98[0];
				UVar12 = AottgCharacterNamePreviewRuntime.ColorValue((bool)local_88[0], (bool)local_98[0], effect, 0);
				local_88._8_4_ = extraout_XMM0_Dc;
				local_88._0_8_ = UVar12._0_8_;
				local_88._12_4_ = extraout_XMM0_Dd;
				local_98._8_4_ = uVar10;
				local_98._0_8_ = UVar12._8_8_;
				local_98._12_4_ = uVar11;
				UVar12 = AottgCharacterNamePreviewRuntime.ColorValue(bVar3, bVar2, effect, 1);
				local_48._8_4_ = extraout_XMM0_Dc_00;
				local_48._0_8_ = UVar12._0_8_;
				local_48._12_4_ = extraout_XMM0_Dd_00;
				local_58._8_4_ = uVar10;
				local_58._0_8_ = UVar12._8_8_;
				local_58._12_4_ = uVar11;
				UVar12 = AottgCharacterNamePreviewRuntime.ColorValue(bVar3, bVar2, effect, 2);
				local_68._8_4_ = extraout_XMM0_Dc_01;
				local_68._0_8_ = UVar12._0_8_;
				local_68._12_4_ = extraout_XMM0_Dd_01;
				local_78._8_4_ = uVar10;
				local_78._0_8_ = UVar12._8_8_;
				local_78._12_4_ = uVar11;
				UVar12 = AottgCharacterNamePreviewRuntime.ColorValue(bVar3, bVar2, effect, 3);
				a.b = (float)local_98._0_4_;
				a.a = (float)local_98._4_4_;
				a.r = (float)local_88._0_4_;
				a.g = (float)local_88._4_4_;
				b.b = (float)local_58._0_4_;
				b.a = (float)local_58._4_4_;
				b.r = (float)local_48._0_4_;
				b.g = (float)local_48._4_4_;
				c.b = (float)local_78._0_4_;
				c.a = (float)local_78._4_4_;
				c.r = (float)local_68._0_4_;
				c.g = (float)local_68._4_4_;
				label.SetNameEffect(effect_00, a, b, c, UVar12);
				return;
			}
		}
		name_00 = AottgCharacterTextColorCodec.RichText(pGVar4.Text, (IList<string>)pGVar4.Colors);
		label.SetText(pSVar6, name_00, (String)**(ulong*)(g_data_07556758 + 0xb8)) ;
		return;
	}

	[Token(Token = "0x60011F9")]
	[Address(RVA = "0x57DF520", Offset = "0x57DE520", VA = "0x57DF520")]
	private static string Font(JSONNode info, string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterNamePreviewRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$Font): clean
		uint uVar1;
		bool bVar2;
		JSONNode pSVar3;
		String pSVar4;

		bVar2 = (info != null);
		if (bVar2) {
			if (info == null) {
	label_058df650: ;
				throw new NullReferenceException();
			}
			pSVar3 = info.get_Item(key) ;
			bVar2 = (pSVar3 != null);
			if (bVar2) {
				pSVar3 = info.get_Item(key);
				if (pSVar3 == null) goto label_058df650;
				pSVar4 = pSVar3.get_Value();
				uVar1 = (typeof(NameFontCatalog)._2).cctor_finished_or_no_cctor;
				goto joined_r0x058df634;
			}
		}
		uVar1 = (typeof(NameFontCatalog)._2).cctor_finished_or_no_cctor;
		pSVar4 = "Normal";
	joined_r0x058df634: ;
		if (uVar1 == 0) {
		}
		pSVar4 = NameFontCatalog.Normalize(pSVar4);
		return pSVar4;
	}

	[Token(Token = "0x60011FA")]
	[Address(RVA = "0x57E1010", Offset = "0x57E0010", VA = "0x57E1010")]
	private static Color ColorValue(bool liveDialog, bool name, JSONNode effect, int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterNamePreviewRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$ColorValue): 5 lines keep C-only constructs
		bool bVar1;
		String* ppSVar2;
		JSONNode pSVar3;
		String str2;
		String pSVar4;
		float fVar5;
		float fVar6;
		Color UVar7;
		int local_3c;
		Color local_38;

		local_38.r = 0.0;
		local_38.g = 0.0;
		local_38.b = 0.0;
		local_38.a = 0.0;
		if (liveDialog) {
			if (name) {
				ppSVar2 = &"profile-character-name-effect";
			}
			else {
				ppSVar2 = &"profile-character-guild-effect";
			}
			pSVar4 = *ppSVar2;
			local_3c = index;
			str2 = local_3c.ToString();
			pSVar4 = String.Concat(pSVar4, "-color-", str2);
			pSVar4 = GisketchUIColorPicker.Value(pSVar4, "#FFFFFFFF", true);
	label_058e1282: ;
		}
		else {
			bVar1 = (effect != null);
			if (bVar1) {
				if (effect == null) {
	label_058e12d6: ;
					throw new NullReferenceException();
				}
				pSVar3 = effect.get_Item("colors");
				bVar1 = (pSVar3 != null);
				if (bVar1) {
					pSVar3 = effect.get_Item("colors");
					if (pSVar3 == null) goto label_058e12d6;
					pSVar3 = pSVar3.get_Item(index);
					bVar1 = (pSVar3 != null);
					if (bVar1) {
						pSVar3 = effect.get_Item("colors");
						if ((pSVar3 == null) ||(pSVar3 = pSVar3.get_Item(index), pSVar3 == null)) goto label_058e12d6;
						pSVar4 = (String)(**(code*)((long)pSVar3.klass + 0x1c8))(pSVar3,*(ulong)((long)pSVar3.klass + 0x1d0));
						goto label_058e1282;
					}
				}
			}
			pSVar4 = "#FFFFFFFF";
		}
		bVar1 = ColorUtility.TryParseHtmlString(pSVar4, ref local_38);
		if (bVar1) {
			fVar5 = local_38.r;
			fVar6 = local_38.g;
		}
		else {
			fVar5 = (float)g_data_01005870;
			fVar6 = g_data_01005870._4_4_;
			local_38._8_8_ = g_data_01005870;
		}
		UVar7.g = fVar6;
		UVar7.r = fVar5;
		UVar7.b = local_38.b;
		UVar7.a = local_38.a;
		return (Color)UVar7;
	}

	[Token(Token = "0x60011FB")]
	[Address(RVA = "0x57DEF50", Offset = "0x57DDF50", VA = "0x57DEF50")]
	private static string Input(Transform root, string id, string fallback)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterNamePreviewRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$Input): 2 lines keep C-only constructs
		bool bVar1;
		TMP_InputField x;
		String* ppSVar2;

		x = AottgCharacterNamePreviewRuntime.Find<TMP_InputField>(root, id);
		bVar1 = ((Object)x != null);
		if (bVar1) {
			if (x == null) {
				throw new NullReferenceException();
			}
			ppSVar2 = &x.m_Text;
		}
		else {
			if (fallback != null) {
				return fallback;
			}
			ppSVar2 = *(String**)(g_data_07556758 + 0xb8);
		}
		return *ppSVar2;
	}

	[Token(Token = "0x60011FC")]
	private static T Find<T>(Transform root, string id) where T : Component
	{
		return null;
	}

	[Token(Token = "0x60011FD")]
	[Address(RVA = "0x57E1340", Offset = "0x57E0340", VA = "0x57E1340")]
	public AottgCharacterNamePreviewRuntime()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterNamePreviewRuntime.c (Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterNamePreviewRuntime.c.

	// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewRuntime$$Find<object>: 2 lines keep C-only constructs
	private static object Find_object(Transform root, String id)
	{
		uint uVar1;
		uint uVar2;
		Object x;
		bool bVar3;
		Object[] pSVar4;
		ulong uVar5;
		Object __this;
		String a;
		ulong uVar6;

		if ((method.rgctx_data == null) &&(il2cpp_codegen_initialize_runtime_metadata(&typeof(Object)), method.rgctx_data == null)) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar3 = ((Object)root == null);
		if ((!bVar3) && (bVar3 = String.IsNullOrEmpty(id), !bVar3)) {
			if ((root == null) ||(pSVar4 = root.GetComponentsInChildren<object>(true), pSVar4 == null)) {
	label_0358800b: ;
				throw new NullReferenceException();
			}
			if (0 < (int)pSVar4.Length) {
				uVar5 = pSVar4.Length & 0xffffffff;
				uVar6 = 0;
				do {
					if (uVar5 <= uVar6) {
						throw new IndexOutOfRangeException();
					}
					x = (Object)pSVar4[uVar6];
					bVar3 = (x != null);
					if (bVar3) {
						if ((x == null) ||(__this = (Object)x.gameObject, __this == null)) goto label_0358800b;
						a = __this.name;
						bVar3 = (a == id);
						if (bVar3) {
							return (object)x;
						}
					}
					uVar6 = uVar6 + 1;
					uVar2 = (uint)pSVar4.Length;
					uVar5 = (ulong)uVar2;
				} while ((long)uVar6 < (long)(int)uVar2);
			}
		}
		return null;
	}
}
