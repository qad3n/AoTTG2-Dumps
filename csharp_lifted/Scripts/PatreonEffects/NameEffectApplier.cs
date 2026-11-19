// ==================== AoTTG2 cross-reference ====================
// Type: PatreonEffects.NameEffectApplier
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/PatreonEffects/NameEffectApplier.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Photon.Realtime;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace PatreonEffects;

[Token(Token = "0x2000084")]
[RequireComponent(typeof(Text))]
public class NameEffectApplier : MonoBehaviour
{
	[Token(Token = "0x4000291")]
	[FieldOffset(Offset = "0x20")]
	private Text _legacyText;

	[Token(Token = "0x4000292")]
	[FieldOffset(Offset = "0x28")]
	private GameObject _tmpOverlay;

	[Token(Token = "0x4000293")]
	[FieldOffset(Offset = "0x30")]
	private TextMeshProUGUI _tmpText;

	[Token(Token = "0x4000294")]
	[FieldOffset(Offset = "0x38")]
	private NameEffectController _controller;

	[Token(Token = "0x4000295")]
	[FieldOffset(Offset = "0x40")]
	private bool _styleActive;

	[Token(Token = "0x17000091")]
	public bool IsEffectActive
	{
		[Token(Token = "0x600039D")]
		[Address(RVA = "0x58C1F20", Offset = "0x58C0F20", VA = "0x58C1F20")]
		get
		{
			// Lifted from source/cpp/PatreonEffects/NameEffectApplier.c (PatreonEffects.NameEffectApplier$$get_IsEffectActive): clean
			return this._styleActive;
		}
	}

	[Token(Token = "0x6000399")]
	[Address(RVA = "0x58C0C80", Offset = "0x58BFC80", VA = "0x58C0C80")]
	private void Awake()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectApplier.c (PatreonEffects.NameEffectApplier$$Awake): clean
		Text pUVar1;

		pUVar1 = this.GetComponent<Text>();
		this._legacyText = pUVar1;
		return;
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x58C0CD0", Offset = "0x58BFCD0", VA = "0x58C0CD0")]
	public void ApplyForPlayer(Player player)
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectApplier.c (PatreonEffects.NameEffectApplier$$ApplyForPlayer): 2 lines keep C-only constructs
		TextMeshProUGUI __this_00;
		GameObject __this_01;
		Text __this_02;
		ResolvedNameEffect effect;
		bool bVar1;
		bool bVar2;
		bool bVar3;
		TMP_FontAsset value;
		TMP_FontAsset pTVar4;
		ResolvedNameEffect local_78;

		pTVar4 = (TMP_FontAsset)player;
		local_78.ColorC.b = 0.0;
		local_78.ColorC.a = 0.0;
		local_78.ColorD.r = 0.0;
		local_78.ColorD.g = 0.0;
		local_78.ColorB.b = 0.0;
		local_78.ColorB.a = 0.0;
		local_78.ColorC.r = 0.0;
		local_78.ColorC.g = 0.0;
		local_78.ColorA.b = 0.0;
		local_78.ColorA.a = 0.0;
		local_78.ColorB.r = 0.0;
		local_78.ColorB.g = 0.0;
		local_78.Enabled = false;
		local_78._1_3_ = 0;
		local_78.Type = 0;
		local_78.ColorA.r = 0.0;
		local_78.ColorA.g = 0.0;
		local_78.ColorD.b = 0.0;
		local_78.ColorD.a = 0.0;
		if (player == null) {
	label_059c0ea0: ;
			this.ClearEffect();
			return;
		}
		bVar1 = PatreonHelper.HasNameEffectAccess(player);
		if (!bVar1) goto label_059c0ea0;
		bVar1 = NameEffectHelpers.TryGetNameEffect(player, ref local_78);
		if ((typeof(NameFontCatalog)._2).cctor_finished_or_no_cctor == 0) {
		}
		value = NameFontCatalog.FontForPlayer(player, false);
		bVar3 = false;
		pTVar4 = null;
		bVar2 = ((Object)value != null);
		if (bVar2) {
			pTVar4 = NameFontCatalog.Load("Normal");
			bVar3 = ((Object)value != (Object)pTVar4);
		}
		if (bVar3 == false && !bVar1) goto label_059c0ea0;
		this.EnsureOverlay();
		this.SyncLegacyTextStyle();
		pTVar4 = null;
		bVar2 = ((Object)value != null);
		if (bVar2) {
			__this_00 = this._tmpText;
			if (__this_00 == null) goto label_059c0efe;
			__this_00.font = value;
			pTVar4 = value;
		}
		this.SyncText();
		if (bVar1) {
			effect.ColorA.r = local_78.ColorA.r;
			effect.ColorA.g = local_78.ColorA.g;
			effect.Enabled = local_78.Enabled;
			effect._1_3_ = local_78._1_3_;
			effect.Type = local_78.Type;
			effect.ColorA.b = local_78.ColorA.b;
			effect.ColorA.a = local_78.ColorA.a;
			effect.ColorB.r = local_78.ColorB.r;
			effect.ColorB.g = local_78.ColorB.g;
			effect.ColorB.b = local_78.ColorB.b;
			effect.ColorB.a = local_78.ColorB.a;
			effect.ColorC.r = local_78.ColorC.r;
			effect.ColorC.g = local_78.ColorC.g;
			effect.ColorC.b = local_78.ColorC.b;
			effect.ColorC.a = local_78.ColorC.a;
			effect.ColorD.r = local_78.ColorD.r;
			effect.ColorD.g = local_78.ColorD.g;
			effect.ColorD.b = local_78.ColorD.b;
			effect.ColorD.a = local_78.ColorD.a;
			this.ApplyEffect(effect);
		}
		else {
			this.ClearController();
		}
		__this_01 = this._tmpOverlay;
		if (__this_01 != null) {
			__this_01.SetActive(true);
			__this_02 = this._legacyText;
			if (__this_02 != null) {
				__this_02.enabled = false;
				this._styleActive = true;
				return;
			}
		}
	label_059c0efe: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600039B")]
	[Address(RVA = "0x58C1B00", Offset = "0x58C0B00", VA = "0x58C1B00")]
	public void SyncText()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectApplier.c (PatreonEffects.NameEffectApplier$$SyncText): clean
		TextMeshProUGUI pTVar1;
		Text pUVar2;
		bool bVar3;
		String pSVar4;

		pTVar1 = this._tmpText;
		bVar3 = ((Object)pTVar1 != null);
		if (bVar3) {
			pUVar2 = this._legacyText;
			bVar3 = ((Object)pUVar2 != null);
			if (bVar3) {
				pUVar2 = this._legacyText;
				if (pUVar2 != null) {
					pTVar1 = this._tmpText;
					pSVar4 = pUVar2.get_text();
					if (pTVar1 != null) {
						pTVar1.set_text(pSVar4);
						return;
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x58C0FD0", Offset = "0x58BFFD0", VA = "0x58C0FD0")]
	public void ClearEffect()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectApplier.c (PatreonEffects.NameEffectApplier$$ClearEffect): clean
		Object x;
		GameObject __this_00;
		Text pUVar1;
		bool bVar2;

		this.ClearController();
		x = (Object)this._tmpOverlay;
		bVar2 = (x != null);
		if (bVar2) {
			__this_00 = this._tmpOverlay;
			if (__this_00 == null) goto label_059c108a;
			__this_00.SetActive(false);
		}
		pUVar1 = this._legacyText;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._legacyText;
			if (pUVar1 == null) {
	label_059c108a: ;
				throw new NullReferenceException();
			}
			pUVar1.enabled = true;
		}
		this._styleActive = false;
		return;
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x58C15C0", Offset = "0x58C05C0", VA = "0x58C15C0")]
	private void EnsureOverlay()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectApplier.c (PatreonEffects.NameEffectApplier$$EnsureOverlay): 15 lines keep C-only constructs
		GameObject* targetAddress;
		TextMeshProUGUI* targetAddress_00;
		Object x;
		Il2CppType handle;
		bool bVar1;
		Type[] components;
		Type pSVar2;
		object pIVar3;
		GameObject pUVar4;
		Transform __this_00;
		Transform pUVar5;
		RectTransform __this_01;
		RectTransform __this_02;
		TextMeshProUGUI pTVar6;
		Vector2 UVar7;
		Vector3 value;

		x = (Object)this._tmpOverlay;
		bVar1 = (x != null);
		if (bVar1) {
			return;
		}
		components = (Type[])new Type[3];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components == null) {
	label_059c1993: ;
			throw new NullReferenceException();
		}
		if (pSVar2 != null) {
			pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((components.obj).klass)._1).element_class);
			if (pIVar3 == null) goto label_059c199d;
		}
		if ((int)components.Length != 0) {
			components[0] = pSVar2;
			pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_CanvasRenderer);
			if (pSVar2 != null) {
				pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((components.obj).klass)._1).element_class);
				if (pIVar3 == null) goto label_059c199d;
			}
			if ((components.Length & 0xfffffffe) != 0) {
				components[1] = pSVar2;
				pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_TMPro_TextMeshProUGUI);
				if (pSVar2 != null) {
					pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((components.obj).klass)._1).element_class) ;
					if (pIVar3 == null) {
	label_059c199d: ;
						pIVar3 = new ArrayTypeMismatchException();
						throw pIVar3;
					}
				}
				if (2 < (uint)components.Length) {
					targetAddress = &this._tmpOverlay;
					components[2] = pSVar2;
					pUVar4 = new GameObject("NameEffectOverlay", components);
					*targetAddress = pUVar4;
					if (*targetAddress != null) {
						__this_00 = (*targetAddress).transform;
						pUVar5 = this.transform;
						if (pUVar5 != null) {
							pUVar5 = pUVar5.parent;
							if (__this_00 != null) {
								__this_00.SetParent(pUVar5, false);
								__this_01 = this.GetComponent<RectTransform>();
								pUVar4 = this._tmpOverlay;
								if (pUVar4 != null) {
									__this_02 = pUVar4.GetComponent<RectTransform>();
									if (__this_01 != null) {
										UVar7 = __this_01.anchorMin;
										if (__this_02 != null) {
											__this_02.anchorMin = UVar7;
											UVar7 = __this_01.anchorMax;
											__this_02.anchorMax = UVar7;
											UVar7 = __this_01.pivot;
											__this_02.pivot = UVar7;
											UVar7 = __this_01.anchoredPosition;
											__this_02.anchoredPosition = UVar7;
											UVar7 = __this_01.sizeDelta;
											__this_02.sizeDelta = UVar7;
											value = __this_01.localScale;
											__this_02.localScale = value;
											if (*targetAddress != null) {
												pTVar6 = (*targetAddress).GetComponent<TextMeshProUGUI>();
												targetAddress_00 = &this._tmpText;
												this._tmpText = pTVar6;
												pTVar6 = this._tmpText;
												if (pTVar6 != null) {
													pTVar6.set_raycastTarget(false);
													if (*targetAddress_00 != null) {
														(*targetAddress_00).enableWordWrapping = false;
														if (*targetAddress_00 != null) {
															(*targetAddress_00).overflowMode = 0;
															this.SyncLegacyTextStyle();
															pUVar4 = this._tmpOverlay;
															if (pUVar4 != null) {
																pUVar4.SetActive(false);
																return;
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
					goto label_059c1993;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x58C1BD0", Offset = "0x58C0BD0", VA = "0x58C1BD0")]
	private void ApplyEffect(ResolvedNameEffect effect)
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectApplier.c (PatreonEffects.NameEffectApplier$$ApplyEffect): 4 lines keep C-only constructs
		NameEffectController* targetAddress;
		NameEffectController x;
		GameObject __this_00;
		TextMeshProUGUI pTVar1;
		bool bVar2;
		NameEffectController method_00;
		NameEffectSettings settings;
		Color UVar3;

		x = this._controller;
		targetAddress = &this._controller;
		method_00 = null;
		bVar2 = ((Object)x == null);
		if (bVar2) {
			__this_00 = this._tmpOverlay;
			if (__this_00 == null) goto label_059c1dce;
			method_00 = __this_00.AddComponent<NameEffectController>();
			*targetAddress = method_00;
		}
		settings = NameEffectPresets.GetPreset(effect.Type);
		if (settings != null) {
			settings.gradientA.r = effect.ColorA.r;
			settings.gradientA.g = effect.ColorA.g;
			settings.gradientA.b = effect.ColorA.b;
			settings.gradientA.a = effect.ColorA.a;
			settings.gradientB.r = effect.ColorB.r;
			settings.gradientB.g = effect.ColorB.g;
			settings.gradientB.b = effect.ColorB.b;
			settings.gradientB.a = effect.ColorB.a;
			settings.gradientC.r = effect.ColorC.r;
			settings.gradientC.g = effect.ColorC.g;
			settings.gradientC.b = effect.ColorC.b;
			settings.gradientC.a = effect.ColorC.a;
			settings.gradientD.r = effect.ColorD.r;
			settings.gradientD.g = effect.ColorD.g;
			settings.gradientD.b = effect.ColorD.b;
			settings.gradientD.a = effect.ColorD.a;
			pTVar1 = this._tmpText;
			if (pTVar1 != null) {
				UVar3.b = 1.0;
				UVar3.a = 1.0;
				UVar3.r = 1.0;
				UVar3.g = 1.0;
				pTVar1.set_color(UVar3);
				if (*targetAddress != null) {
					(*targetAddress).Apply(settings);
					return;
				}
			}
		}
	label_059c1dce: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x58C1DE0", Offset = "0x58C0DE0", VA = "0x58C1DE0")]
	private void ClearController()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectApplier.c (PatreonEffects.NameEffectApplier$$ClearController): 5 lines keep C-only constructs
		NameEffectController* targetAddress;
		NameEffectController pPVar1;
		TextMeshProUGUI pTVar2;
		Text pUVar3;
		bool bVar4;
		Color UVar5;

		pPVar1 = this._controller;
		bVar4 = ((Object)pPVar1 != null);
		if (bVar4) {
			targetAddress = &this._controller;
			if (*targetAddress == null) goto label_059c1f14;
			(*targetAddress).Clear();
			pPVar1 = *targetAddress;
			Object.Destroy((Object)pPVar1);
			*targetAddress = null;
		}
		pTVar2 = this._tmpText;
		bVar4 = ((Object)pTVar2 != null);
		if (bVar4) {
			pUVar3 = this._legacyText;
			bVar4 = ((Object)pUVar3 != null);
			if (bVar4) {
				pUVar3 = this._legacyText;
				if (pUVar3 != null) {
					pTVar2 = this._tmpText;
					UVar5 = pUVar3.get_color();
					if (pTVar2 != null) {
						pTVar2.set_color(UVar5);
						return;
					}
				}
	label_059c1f14: ;
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x58C19B0", Offset = "0x58C09B0", VA = "0x58C19B0")]
	private void SyncLegacyTextStyle()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectApplier.c (PatreonEffects.NameEffectApplier$$SyncLegacyTextStyle): 1 lines keep C-only constructs
		TextMeshProUGUI pTVar1;
		Text pUVar2;
		bool bVar3;
		int iVar4;
		uint uVar5;
		Color UVar6;

		pTVar1 = this._tmpText;
		bVar3 = ((Object)pTVar1 == null);
		if (!bVar3) {
			pUVar2 = this._legacyText;
			bVar3 = ((Object)pUVar2 == null);
			if (!bVar3) {
				pUVar2 = this._legacyText;
				if (pUVar2 != null) {
					pTVar1 = this._tmpText;
					iVar4 = pUVar2.fontSize;
					if (pTVar1 != null) {
						pTVar1.fontSize = (float)iVar4;
						pUVar2 = this._legacyText;
						if (pUVar2 != null) {
							pTVar1 = this._tmpText;
							UVar6 = pUVar2.get_color();
							if (pTVar1 != null) {
								pTVar1.set_color(UVar6);
								pUVar2 = this._legacyText;
								if (pUVar2 != null) {
									pTVar1 = this._tmpText;
									uVar5 = pUVar2.alignment;
									iVar4 = 0x1002;
									if (uVar5 < 9) {
										iVar4 = *(int)(&g_data_010a5880 + (long)(int)uVar5 * 4);
									}
									if (pTVar1 != null) {
										pTVar1.alignment = iVar4;
										pUVar2 = this._legacyText;
										if (pUVar2 != null) {
											pTVar1 = this._tmpText;
											bVar3 = pUVar2.supportRichText;
											if (pTVar1 != null) {
												pTVar1.richText = bVar3;
												return;
											}
										}
									}
								}
							}
						}
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x60003A2")]
	[Address(RVA = "0x58C2060", Offset = "0x58C1060", VA = "0x58C2060")]
	private static TextAlignmentOptions ToTmpAlignment(TextAnchor alignment)
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectApplier.c (PatreonEffects.NameEffectApplier$$ToTmpAlignment): 1 lines keep C-only constructs
		int iVar1;

		if ((uint)alignment < 9) {
			iVar1 = *(int)(&g_data_010a5880 + (long)alignment * 4);
		}
		return iVar1;
	}

	[Token(Token = "0x60003A3")]
	[Address(RVA = "0x58C2080", Offset = "0x58C1080", VA = "0x58C2080")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectApplier.c (PatreonEffects.NameEffectApplier$$OnDestroy): clean
		Object pUVar1;
		bool bVar2;

		pUVar1 = (Object)this._tmpOverlay;
		bVar2 = (pUVar1 != null);
		if (bVar2) {
			pUVar1 = (Object)this._tmpOverlay;
			Object.Destroy(pUVar1);
			return;
		}
		return;
	}

	[Token(Token = "0x60003A4")]
	[Address(RVA = "0x58C2100", Offset = "0x58C1100", VA = "0x58C2100")]
	public NameEffectApplier()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectApplier.c (PatreonEffects.NameEffectApplier$$.ctor): clean
		base();
		return;
	}
}
