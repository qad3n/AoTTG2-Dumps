// ==================== AoTTG2 cross-reference ====================
// Type: PatreonEffects.NameEffectController
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/PatreonEffects/NameEffectController.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using TMPro;
using UnityEngine;

namespace PatreonEffects;

[Token(Token = "0x2000087")]
public class NameEffectController : MonoBehaviour
{
	[Token(Token = "0x40002AF")]
	[FieldOffset(Offset = "0x20")]
	[Header("Auto Assigned")]
	[SerializeField]
	private TMP_Text text;

	[Token(Token = "0x40002B0")]
	[FieldOffset(Offset = "0x28")]
	[Header("Debug")]
	[SerializeField]
	private NameEffectType effect;

	[Token(Token = "0x40002B1")]
	[FieldOffset(Offset = "0x30")]
	private Material originalFontMaterial;

	[Token(Token = "0x40002B2")]
	[FieldOffset(Offset = "0x38")]
	private TMP_FontAsset originalFontAsset;

	[Token(Token = "0x40002B3")]
	[FieldOffset(Offset = "0x40")]
	private Material runtimeMat;

	[Token(Token = "0x40002B4")]
	[FieldOffset(Offset = "0x48")]
	private bool initialized;

	[Token(Token = "0x40002B5")]
	[FieldOffset(Offset = "0x50")]
	private TMP_Text popShadowText;

	[Token(Token = "0x40002B6")]
	[FieldOffset(Offset = "0x58")]
	private TMP_Text popExtrusionText;

	[Token(Token = "0x40002B7")]
	[FieldOffset(Offset = "0x60")]
	private bool popActive;

	[Token(Token = "0x40002B8")]
	[FieldOffset(Offset = "0x61")]
	private bool outlineActive;

	[Token(Token = "0x40002B9")]
	[FieldOffset(Offset = "0x62")]
	private bool popGradientHooked;

	[Token(Token = "0x40002BA")]
	[FieldOffset(Offset = "0x63")]
	private bool effectVertexDataHooked;

	[Token(Token = "0x40002BB")]
	[FieldOffset(Offset = "0x64")]
	private bool cleared;

	[Token(Token = "0x40002BC")]
	[FieldOffset(Offset = "0x68")]
	private Color popFaceA;

	[Token(Token = "0x40002BD")]
	[FieldOffset(Offset = "0x78")]
	private Color popFaceB;

	[Token(Token = "0x40002BE")]
	[FieldOffset(Offset = "0x88")]
	private Color popFaceC;

	[Token(Token = "0x40002BF")]
	[FieldOffset(Offset = "0x98")]
	private Color popShadowColor;

	[Token(Token = "0x40002C0")]
	[FieldOffset(Offset = "0xA8")]
	private Color popExtrusionColor;

	[Token(Token = "0x40002C1")]
	[FieldOffset(Offset = "0xB8")]
	private Vector2 popShadowOffset;

	[Token(Token = "0x40002C2")]
	[FieldOffset(Offset = "0xC0")]
	private Vector2 popExtrusionOffset;

	[Token(Token = "0x40002C3")]
	private const float PopOffsetReferenceFontSize = 48f;

	[Token(Token = "0x40002C4")]
	private const float OutlineWidth = 0.16f;

	[Token(Token = "0x40002C5")]
	private const float OutlineFaceDilate = 0.02f;

	[Token(Token = "0x40002C6")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int FaceColor_ID;

	[Token(Token = "0x40002C7")]
	[FieldOffset(Offset = "0x4")]
	private static readonly int GradientA_ID;

	[Token(Token = "0x40002C8")]
	[FieldOffset(Offset = "0x8")]
	private static readonly int GradientB_ID;

	[Token(Token = "0x40002C9")]
	[FieldOffset(Offset = "0xC")]
	private static readonly int GradientC_ID;

	[Token(Token = "0x40002CA")]
	[FieldOffset(Offset = "0x10")]
	private static readonly int GradientD_ID;

	[Token(Token = "0x40002CB")]
	[FieldOffset(Offset = "0x14")]
	private static readonly int EffectGradientScale_ID;

	[Token(Token = "0x40002CC")]
	[FieldOffset(Offset = "0x18")]
	private static readonly int GradientSpeed_ID;

	[Token(Token = "0x40002CD")]
	[FieldOffset(Offset = "0x1C")]
	private static readonly int EffectMode_ID;

	[Token(Token = "0x40002CE")]
	[FieldOffset(Offset = "0x20")]
	private static readonly int Glow_ID;

	[Token(Token = "0x40002CF")]
	[FieldOffset(Offset = "0x24")]
	private static readonly int ScanlineStrength_ID;

	[Token(Token = "0x40002D0")]
	[FieldOffset(Offset = "0x28")]
	private static readonly int ScanlineDensity_ID;

	[Token(Token = "0x40002D1")]
	[FieldOffset(Offset = "0x2C")]
	private static readonly int ScanlineSpeed_ID;

	[Token(Token = "0x40002D2")]
	[FieldOffset(Offset = "0x30")]
	private static readonly int FlickerStrength_ID;

	[Token(Token = "0x40002D3")]
	[FieldOffset(Offset = "0x34")]
	private static readonly int FlickerSpeed_ID;

	[Token(Token = "0x40002D4")]
	[FieldOffset(Offset = "0x38")]
	private static readonly int Softness_ID;

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x58C2170", Offset = "0x58C1170", VA = "0x58C2170")]
	private void Awake()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$Awake): clean
		this.AutoConfigure();
		return;
	}

	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x58BF910", Offset = "0x58BE910", VA = "0x58BF910")]
	public void AutoConfigure()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$AutoConfigure): clean
		TMP_Text pTVar1;
		bool bVar2;
		Material pUVar3;
		MethodInfo method_00;

		bVar2 = this.FindText();
		if (bVar2) {
			this.cleared = false;
			bVar2 = this.RefreshOriginalMaterial();
			if (bVar2) {
				pUVar3 = this.runtimeMat;
				method_00 = null;
				bVar2 = ((Object)pUVar3 != null);
				if (bVar2) {
					pTVar1 = this.text;
					if (pTVar1 == null) {
	label_059bfa07: ;
						throw new NullReferenceException();
					}
					pUVar3 = pTVar1.get_fontSharedMaterial();
					method_00 = (MethodInfo)this.runtimeMat;
					bVar2 = ((Object)pUVar3 == (Object)method_00) ;
					if (bVar2) {
						pTVar1 = this.text;
						if (pTVar1 == null) goto label_059bfa07;
						method_00 = (MethodInfo)this.originalFontMaterial;
						pTVar1.set_fontSharedMaterial((Material)method_00);
					}
				}
				this.DestroyRuntimeMaterial();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60003A8")]
	[Address(RVA = "0x58C22B0", Offset = "0x58C12B0", VA = "0x58C22B0")]
	private bool RefreshOriginalMaterial()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$RefreshOriginalMaterial): 2 lines keep C-only constructs
		TMP_Text pTVar1;
		TMP_FontAsset pTVar2;
		TMP_FontAsset y;
		bool bVar3;
		bool bVar4;
		bool bVar5;
		Material x;
		Material pUVar6;
		TMP_FontAsset* targetAddress;

		pTVar1 = this.text;
		bVar3 = ((Object)pTVar1 == null);
		if (bVar3) {
			return false;
		}
		pTVar1 = this.text;
		if (pTVar1 != null) {
			pTVar2 = this.originalFontAsset;
			y = pTVar1.m_fontAsset;
			bVar5 = false;
			bVar3 = ((Object)pTVar2 != (Object)y);
			bVar4 = ((Object)this.runtimeMat != null);
			if (bVar4) {
				pTVar1 = this.text;
				if (pTVar1 == null) goto label_059c2482;
				x = pTVar1.get_fontSharedMaterial();
				pUVar6 = this.runtimeMat;
				bVar5 = ((Object)x != (Object)pUVar6);
			}
			pUVar6 = this.originalFontMaterial;
			bVar4 = ((Object)pUVar6 == null);
			if (bVar5 == false && (!bVar3 && !bVar4)) {
				return false;
			}
			pTVar1 = this.text;
			if (pTVar1 != null) {
				pTVar2 = pTVar1.m_fontAsset;
				bVar3 = ((Object)pTVar2 != null);
				pTVar1 = this.text;
				if (bVar3) {
					if ((pTVar1 == null) ||(pTVar2 = pTVar1.m_fontAsset, pTVar2 == null)) goto label_059c2482;
					pUVar6 = pTVar2.m_Material;
				}
				else {
					if (pTVar1 == null) goto label_059c2482;
					pUVar6 = pTVar1.get_fontSharedMaterial();
				}
				this.originalFontMaterial = pUVar6;
				pTVar1 = this.text;
				if (pTVar1 != null) {
					targetAddress = &this.originalFontAsset;
					*targetAddress = pTVar1.m_fontAsset;
					return true;
				}
			}
		}
	label_059c2482: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x58C2580", Offset = "0x58C1580", VA = "0x58C2580")]
	private void EnsureShaderMaterial()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$EnsureShaderMaterial): 3 lines keep C-only constructs
		Material* targetAddress;
		TMP_Text pTVar1;
		bool bVar2;
		Material pUVar3;
		Object x;

		if (this.initialized != false) {
			pUVar3 = this.runtimeMat;
			bVar2 = ((Object)pUVar3 != null);
			if (bVar2) {
				return;
			}
		}
		pTVar1 = this.text;
		bVar2 = ((Object)pTVar1 == null);
		if (!bVar2) {
			pUVar3 = this.originalFontMaterial;
			bVar2 = ((Object)pUVar3 == null);
			if (!bVar2) {
				pUVar3 = this.originalFontMaterial;
				pUVar3 = Object.Instantiate<Material>((object)pUVar3);
				targetAddress = &this.runtimeMat;
				this.runtimeMat = pUVar3;
				x = (Object)Shader.Find("TextMeshPro/NameFX_Master");
				bVar2 = (x == null);
				if (bVar2) {
					Debug.LogError((Il2CppObject *)"Could not find shader: TextMeshPro/NameFX_Master");
					return;
				}
				pUVar3 = *targetAddress;
				if (pUVar3 != null) {
					pUVar3.shader = (Shader)x;
					pTVar1 = this.text;
					if (pTVar1 != null) {
						pTVar1.set_fontSharedMaterial(this.runtimeMat);
						this.initialized = true;
						return;
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x58BFBA0", Offset = "0x58BEBA0", VA = "0x58BFBA0")]
	public void Apply(NameEffectSettings settings)
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$Apply): clean
		int iVar1;
		uint nameID;
		Material pUVar2;
		TMP_Text pTVar3;
		bool bVar4;
		TMP_TextInfo textInfo;
		Color value;

		if (settings != null) {
			this.AutoConfigure();
			iVar1 = settings.effectMode;
			if (iVar1 == 6) {
				this.ClearEffectVertexData();
				this.popActive = false;
				this.ClearPopGradient();
				NameEffectController.DestroyPopLayer(ref this.popShadowText);
				NameEffectController.DestroyPopLayer(ref this.popExtrusionText);
				this.ApplyOutline(settings);
				return;
			}
			if (iVar1 == 1) {
				this.ClearEffectVertexData();
				bVar4 = this.outlineActive;
				this.outlineActive = false;
				this.ClearPopGradient();
				if (bVar4 != false) {
					this.ClearShaderMaterial();
				}
				this.ApplyPop(settings);
				return;
			}
			this.popActive = false;
			this.ClearPopGradient();
			NameEffectController.DestroyPopLayer(ref this.popShadowText);
			NameEffectController.DestroyPopLayer(ref this.popExtrusionText);
			bVar4 = this.outlineActive;
			this.outlineActive = false;
			this.ClearPopGradient();
			if (bVar4 != false) {
				this.ClearShaderMaterial();
			}
			this.EnsureShaderMaterial();
			if (this.initialized != false) {
				pUVar2 = this.runtimeMat;
				bVar4 = ((Object)pUVar2 == null);
				if (!bVar4) {
					pUVar2 = this.runtimeMat;
					if (pUVar2 != null) {
						value.b = 1.0;
						value.a = 1.0;
						value.r = 1.0;
						value.g = 1.0;
						pUVar2.SetColor(NameEffectController.FaceColor_ID, value);
						pUVar2 = this.runtimeMat;
						if (pUVar2 != null) {
							pUVar2.SetColor(NameEffectController.GradientA_ID, (Color)settings.gradientA);
							pUVar2 = this.runtimeMat;
							if (pUVar2 != null) {
								pUVar2.SetColor(NameEffectController.GradientB_ID, (Color)settings.gradientB);
								pUVar2 = this.runtimeMat;
								if (pUVar2 != null) {
									pUVar2.SetColor(NameEffectController.GradientC_ID, (Color)settings.gradientC);
									pUVar2 = this.runtimeMat;
									if (pUVar2 != null) {
										pUVar2.SetColor(NameEffectController.GradientD_ID, (Color)settings.gradientD);
										pUVar2 = this.runtimeMat;
										if (pUVar2 != null) {
											pUVar2.SetFloat(NameEffectController. EffectGradientScale_ID, settings.gradientScale);
											pUVar2 = this.runtimeMat;
											if (pUVar2 != null) {
												pUVar2.SetFloat(NameEffectController. GradientSpeed_ID, settings.gradientSpeed);
												pUVar2 = this.runtimeMat;
												if (pUVar2 != null) {
													pUVar2.SetFloat(NameEffectController. EffectMode_ID, (float)settings.effectMode);
													pUVar2 = this.runtimeMat;
													if (pUVar2 != null) {
														pUVar2.SetFloat(NameEffectController. Glow_ID, settings.glow);
														pUVar2 = this.runtimeMat;
														if (pUVar2 != null) {
															pUVar2.SetFloat(NameEffectController. ScanlineStrength_ID, settings.scanlineStrength);
															pUVar2 = this.runtimeMat;
															if (pUVar2 != null) {
																pUVar2.SetFloat(NameEffectController. ScanlineDensity_ID, settings.scanlineDensity);
																pUVar2 = this.runtimeMat;
																if (pUVar2 != null) {
																	pUVar2.SetFloat(typeof(NameEffectController).static_fields .ScanlineSpeed_ID, settings.scanlineSpeed);
																	pUVar2 = this.runtimeMat;
																	if (pUVar2 != null) {
																		pUVar2.SetFloat(typeof(NameEffectController). static_fields.FlickerStrength_ID, settings.flickerStrength);
																		pUVar2 = this.runtimeMat;
																		if (pUVar2 != null) {
																			pUVar2.SetFloat(typeof(NameEffectController). static_fields.FlickerSpeed_ID, settings.flickerSpeed);
																			pUVar2 = this.runtimeMat;
																			if (pUVar2 != null) {
																				nameID = NameEffectController. Softness_ID;
																				pUVar2.SetFloat(nameID, settings.softness);
																				this.HookEffectVertexData() ;
																				pTVar3 = this.text;
																				if (pTVar3 != null) {
																					pTVar3.ForceMeshUpdate(false, false);
																					pTVar3 = this.text;
																					if (pTVar3 != null) {
																						textInfo = pTVar3.textInfo;
																						this.UpdateEffectVertexData(textInfo);
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
										}
									}
								}
							}
						}
					}
					throw new NullReferenceException();
				}
			}
		}
		return;
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x58C1F30", Offset = "0x58C0F30", VA = "0x58C1F30")]
	public void Clear()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$Clear): clean
		sbyte cVar1;
		TMP_Text x;
		bool bVar2;
		TMP_Text method_00;

		if (Il2CppMethodInitialized_07545be6 == false) {
			Il2CppMethodInitialized_07545be6 = true;
			cVar1 = this.cleared;
		}
		else {
			cVar1 = this.cleared;
		}
		if (cVar1 != false) {
			return;
		}
		this.cleared = true;
		x = this.text;
		method_00 = null;
		bVar2 = ((Object)x == null);
		if (bVar2) {
			method_00 = this.GetComponent<TMP_Text>();
			this.text = method_00;
		}
		this.RefreshOriginalMaterial();
		this.popActive = false;
		this.ClearPopGradient();
		NameEffectController.DestroyPopLayer(ref this.popShadowText);
		NameEffectController.DestroyPopLayer(ref this.popExtrusionText);
		bVar2 = this.outlineActive;
		this.outlineActive = false;
		this.ClearPopGradient();
		if (bVar2 != false) {
			this.ClearShaderMaterial();
		}
		this.ClearEffectVertexData();
		this.ClearShaderMaterial();
		this.initialized = false;
		return;
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x58C3500", Offset = "0x58C2500", VA = "0x58C3500")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$OnDestroy): clean
		this.Clear();
		return;
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x58C3510", Offset = "0x58C2510", VA = "0x58C3510")]
	[ContextMenu("Apply Holographic")]
	public void ApplyHolographic()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$ApplyHolographic): clean
		NameEffectSettings settings;

		settings.gradientA.r = 0.78;
		settings.gradientA.g = 1.0;
		settings.gradientA.b = 0.9;
		settings.gradientA.a = 1.0;
		settings.gradientB.r = 0.64;
		settings.gradientB.g = 0.95;
		settings.gradientB.b = 1.0;
		settings.gradientB.a = 1.0;
		settings.gradientC.r = 0.86;
		settings.gradientC.g = 0.76;
		settings.gradientC.b = 1.0;
		settings.gradientC.a = 1.0;
		settings.gradientD.r = 1.0;
		settings.gradientD.g = 0.96;
		settings.gradientD.b = 0.82;
		settings.gradientD.a = 1.0;
		settings.gradientScale = 2.8;
		settings.gradientSpeed = 0.16;
		settings.glow = 1.35;
		settings.scanlineStrength = 0.12;
		settings.scanlineDensity = 180.0;
		settings.scanlineSpeed = 0.18;
		settings.flickerStrength = 0.05;
		settings.flickerSpeed = 18.0;
		settings.softness = 1.0;
		settings.popShadowOffset = (Vector2)0xbfc0000000000000;
		settings.popExtrusionOffset = (Vector2)0xc0c0000000000000;
		settings = new NameEffectSettings();
		this.Apply(settings);
		return;
	}

	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x58C2180", Offset = "0x58C1180", VA = "0x58C2180")]
	private bool FindText()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$FindText): 3 lines keep C-only constructs
		TMP_Text* targetAddress;
		bool bVar1;
		TMP_Text pTVar2;
		Object __this_00;
		String pSVar3;

		pTVar2 = this.text;
		targetAddress = &this.text;
		bVar1 = ((Object)pTVar2 == null);
		if (bVar1) {
			pTVar2 = this.GetComponent<TMP_Text>();
			this.text = pTVar2;
		}
		pTVar2 = *targetAddress;
		bVar1 = ((Object)pTVar2 != null);
		if (!bVar1) {
			__this_00 = (Object)this.gameObject;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			pSVar3 = __this_00.name;
			pSVar3 = String.Concat("[NameEffectController] No TMP_Text found on ", pSVar3);
			Debug.LogError((object)pSVar3);
		}
		return bVar1;
	}

	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x58C2850", Offset = "0x58C1850", VA = "0x58C2850")]
	private void ApplyPop(NameEffectSettings settings)
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$ApplyPop): 1 lines keep C-only constructs
		Vector2 UVar1;
		TMP_Text pTVar2;
		Vector2 offset;
		Vector2 offset_00;
		float fVar3;
		bool bVar4;
		MethodInfo method_03;
		float fVar5;
		float fVar6;
		Color UVar7;

		bVar4 = this.FindText();
		if (!bVar4) {
			return;
		}
		this.cleared = false;
		this.ClearShaderMaterial();
		if (settings != null) {
			this.EnsurePopLayer(ref this.popExtrusionText, "PopExtrusion", (Color)settings.gradientD);
			method_03 = (MethodInfo)&this.popShadowText;
			this.EnsurePopLayer((TMP_Text*)method_03, "PopShadow", (Color)settings.gradientC);
			fVar6 = settings.gradientA.g;
			fVar5 = settings.gradientA.b;
			fVar3 = settings.gradientA.a;
			this.popFaceA.r = settings.gradientA.r;
			this.popFaceA.g = fVar6;
			this.popFaceA.b = fVar5;
			this.popFaceA.a = fVar3;
			fVar6 = settings.gradientB.g;
			fVar5 = settings.gradientB.b;
			fVar3 = settings.gradientB.a;
			this.popFaceB.r = settings.gradientB.r;
			this.popFaceB.g = fVar6;
			this.popFaceB.b = fVar5;
			this.popFaceB.a = fVar3;
			fVar6 = settings.gradientB.g;
			fVar5 = settings.gradientB.b;
			fVar3 = settings.gradientB.a;
			this.popFaceC.r = settings.gradientB.r;
			this.popFaceC.g = fVar6;
			this.popFaceC.b = fVar5;
			this.popFaceC.a = fVar3;
			fVar6 = settings.gradientC.g;
			fVar5 = settings.gradientC.b;
			fVar3 = settings.gradientC.a;
			this.popShadowColor.r = settings.gradientC.r;
			this.popShadowColor.g = fVar6;
			this.popShadowColor.b = fVar5;
			this.popShadowColor.a = fVar3;
			fVar6 = settings.gradientD.g;
			fVar5 = settings.gradientD.b;
			fVar3 = settings.gradientD.a;
			this.popExtrusionColor.r = settings.gradientD.r;
			this.popExtrusionColor.g = fVar6;
			this.popExtrusionColor.b = fVar5;
			this.popExtrusionColor.a = fVar3;
			this.popShadowOffset = settings.popShadowOffset;
			this.popExtrusionOffset = settings.popExtrusionOffset;
			this.popActive = true;
			this.HookPopGradient();
			pTVar2 = this.text;
			bVar4 = ((Object)pTVar2 == null);
			if (!bVar4) {
				pTVar2 = this.text;
				if (pTVar2 == null) goto label_059c2a6c;
				fVar5 = pTVar2.m_fontSize / 48.0;
				fVar6 = 0.35;
				if (0.35 <= fVar5) {
					fVar6 = fVar5;
				}
				UVar1 = this.popExtrusionOffset;
				offset.y = UVar1.y * fVar6;
				offset.x = UVar1.x * fVar6;
				this.SyncPopLayer(this.popExtrusionText, offset, (Color)this.popExtrusionColor);
				UVar1 = this.popShadowOffset;
				offset_00.y = UVar1.y * fVar6;
				offset_00.x = UVar1.x * fVar6;
				this.SyncPopLayer(this.popShadowText, offset_00, (Color)this.popShadowColor);
			}
			pTVar2 = this.text;
			if (pTVar2 != null) {
				UVar7.b = 1.0;
				UVar7.a = 1.0;
				UVar7.r = 1.0;
				UVar7.g = 1.0;
				pTVar2.set_color(UVar7);
				pTVar2 = this.text;
				if (pTVar2 != null) {
					pTVar2.ForceMeshUpdate(false, false);
					return;
				}
			}
		}
	label_059c2a6c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x58C3C70", Offset = "0x58C2C70", VA = "0x58C3C70")]
	private void LateUpdate()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$LateUpdate): clean
		Vector2 UVar1;
		TMP_Text pTVar2;
		bool bVar3;
		float fVar4;
		Vector2 offset;
		Vector2 offset_00;
		float fVar5;

		if (this.popActive != false) {
			pTVar2 = this.text;
			bVar3 = ((Object)pTVar2 == null);
			if (!bVar3) {
				pTVar2 = this.text;
				if (pTVar2 == null) {
					throw new NullReferenceException();
				}
				fVar4 = pTVar2.m_fontSize / 48.0;
				fVar5 = 0.35;
				if (0.35 <= fVar4) {
					fVar5 = fVar4;
				}
				UVar1 = this.popExtrusionOffset;
				offset.x = UVar1.x * fVar5;
				offset.y = UVar1.y * fVar5;
				this.SyncPopLayer(this.popExtrusionText, offset, (Color)this.popExtrusionColor);
				UVar1 = this.popShadowOffset;
				offset_00.x = UVar1.x * fVar5;
				offset_00.y = UVar1.y * fVar5;
				this.SyncPopLayer(this.popShadowText, offset_00, (Color)this.popShadowColor);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x58C3660", Offset = "0x58C2660", VA = "0x58C3660")]
	private void EnsurePopLayer(ref TMP_Text layer, string layerName, Color color)
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$EnsurePopLayer): 10 lines keep C-only constructs
		TMP_Text pTVar1;
		Il2CppType handle;
		bool bVar2;
		int index;
		Transform pUVar3;
		Type[] components;
		Type pSVar4;
		object pIVar5;
		GameObject __this_00;
		Transform pUVar6;
		LayoutElement pUVar7;
		TextMeshProUGUI pTVar8;

		pTVar1 = *layer;
		bVar2 = ((Object)pTVar1 != null);
		if (bVar2) {
			return;
		}
		pTVar1 = this.text;
		if ((pTVar1 != null) &&(pUVar3 = pTVar1.transform, pUVar3 != null)) {
			pUVar3 = pUVar3.parent;
			bVar2 = ((Object)pUVar3 == null);
			if (bVar2) {
				return;
			}
			components = (Type[])new Type[4];
			handle = TypeRef_UnityEngine_RectTransform;
			pSVar4 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
			if (components != null) {
				if ((pSVar4 != null) &&(pIVar5 = il2cpp_vm_Object_IsInst((object)pSVar4, (((components.obj).klass)._1).element_class), pIVar5 == null)) {
	label_059c3a9d: ;
					pIVar5 = new ArrayTypeMismatchException();
					throw pIVar5;
				}
				if ((int)components.Length != 0) {
					components[0] = pSVar4;
					pSVar4 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_CanvasRenderer);
					if ((pSVar4 != null) &&(pIVar5 = il2cpp_vm_Object_IsInst((object)pSVar4, (((components.obj).klass)._1).element_class), pIVar5 == null)) goto label_059c3a9d;
					if ((components.Length & 0xfffffffe) != 0) {
						components[1] = pSVar4;
						pSVar4 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_TMPro_TextMeshProUGUI);
						if ((pSVar4 != null) &&(pIVar5 = il2cpp_vm_Object_IsInst((object)pSVar4, (((components.obj).klass)._1).element_class), pIVar5 == null)) goto label_059c3a9d;
						if (2 < (uint)components.Length) {
							components[2] = pSVar4;
							pSVar4 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_LayoutElement);
							if ((pSVar4 != null) &&(pIVar5 = il2cpp_vm_Object_IsInst((object)pSVar4, (((components.obj).klass)._1).element_class), pIVar5 == null)) goto label_059c3a9d;
							if ((components.Length & 0xfffffffc) != 0) {
								components[3] = pSVar4;
								__this_00 = new GameObject(layerName, components);
								if ((__this_00 != null) &&(pUVar6 = __this_00.transform, pUVar6 != null)) {
									pUVar6.SetParent(pUVar3, false);
									pUVar3 = __this_00.transform;
									pTVar1 = this.text;
									if ((pTVar1 != null) &&((pUVar6 = pTVar1.transform, pUVar6 != null &&(index = pUVar6.GetSiblingIndex(), pUVar3 != null)))) {
										pUVar3.SetSiblingIndex(index);
										pUVar7 = __this_00.GetComponent<LayoutElement>();
										if (pUVar7 != null) {
											pUVar7.set_ignoreLayout(true);
											pTVar8 = __this_00.GetComponent<TextMeshProUGUI>();
											*layer = (TMP_Text)pTVar8;
											pTVar1 = *layer;
											if (pTVar1 != null) {
												pTVar1.set_raycastTarget(false);
												if (*layer != null) {
													(*layer).overrideColorTags = true;
													pTVar1 = *layer;
													if (pTVar1 != null) {
														pTVar1.set_color(color);
														pTVar1 = *layer;
														this.SyncPopLayer(pTVar1, (Vector2)(Vector2.zeroVector), color);
														return;
													}
												}
											}
										}
									}
								}
								goto label_059c3a93;
							}
						}
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
	label_059c3a93: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x58C3B80", Offset = "0x58C2B80", VA = "0x58C3B80")]
	private void SyncPopLayers()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$SyncPopLayers): clean
		Vector2 UVar1;
		TMP_Text pTVar2;
		bool bVar3;
		float fVar4;
		Vector2 offset;
		Vector2 offset_00;
		float fVar5;

		pTVar2 = this.text;
		bVar3 = ((Object)pTVar2 == null);
		if (bVar3) {
			return;
		}
		pTVar2 = this.text;
		if (pTVar2 == null) {
			throw new NullReferenceException();
		}
		fVar4 = pTVar2.m_fontSize / 48.0;
		fVar5 = 0.35;
		if (0.35 <= fVar4) {
			fVar5 = fVar4;
		}
		UVar1 = this.popExtrusionOffset;
		offset.x = UVar1.x * fVar5;
		offset.y = UVar1.y * fVar5;
		this.SyncPopLayer(this.popExtrusionText, offset, (Color)this.popExtrusionColor);
		UVar1 = this.popShadowOffset;
		offset_00.x = UVar1.x * fVar5;
		offset_00.y = UVar1.y * fVar5;
		this.SyncPopLayer(this.popShadowText, offset_00, (Color)this.popShadowColor);
		return;
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x58C2AE0", Offset = "0x58C1AE0", VA = "0x58C2AE0")]
	private void ApplyOutline(NameEffectSettings settings)
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$ApplyOutline): clean
		Material pUVar1;
		TMP_Text pTVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		bool bVar6;
		Material __this_00;
		String pSVar7;
		Color UVar9;

		bVar6 = this.FindText();
		if (bVar6) {
			this.cleared = false;
			pUVar1 = this.originalFontMaterial;
			bVar6 = ((Object)pUVar1 == null);
			if (!bVar6) {
				this.ClearShaderMaterial();
				if (settings != null) {
					fVar3 = settings.gradientA.g;
					fVar4 = settings.gradientA.b;
					fVar5 = settings.gradientA.a;
					this.popFaceA.r = settings.gradientA.r;
					this.popFaceA.g = fVar3;
					this.popFaceA.b = fVar4;
					this.popFaceA.a = fVar5;
					fVar3 = settings.gradientB.g;
					fVar4 = settings.gradientB.b;
					fVar5 = settings.gradientB.a;
					this.popFaceB.r = settings.gradientB.r;
					this.popFaceB.g = fVar3;
					this.popFaceB.b = fVar4;
					this.popFaceB.a = fVar5;
					fVar3 = settings.gradientC.g;
					fVar4 = settings.gradientC.b;
					fVar5 = settings.gradientC.a;
					this.popFaceC.r = settings.gradientC.r;
					this.popFaceC.g = fVar3;
					this.popFaceC.b = fVar4;
					this.popFaceC.a = fVar5;
					this.outlineActive = true;
					pUVar1 = this.originalFontMaterial;
					__this_00 = new Material(pUVar1);
					pUVar1 = this.originalFontMaterial;
					if (pUVar1 != null) {
						pSVar7 = pUVar1.name;
						pSVar7 = String.Concat(pSVar7, " Outline Runtime");
						if (__this_00 != null) {
							__this_00.name = pSVar7;
							this.runtimeMat = __this_00;
							pUVar1 = this.runtimeMat;
							if ((typeof(NameEffectController)._2).cctor_finished_or_no_cctor == 0) {
							}
							NameEffectController.ApplyTmpOutlineMaterial(pUVar1, settings);
							pTVar2 = this.text;
							if (pTVar2 != null) {
								pTVar2.fontMaterial = this.runtimeMat;
								pTVar2 = this.text;
								if (pTVar2 != null) {
									pTVar2.UpdateMeshPadding();
									this.initialized = true;
									this.HookPopGradient();
									pTVar2 = this.text;
									if (pTVar2 != null) {
										UVar9.b = 1.0;
										UVar9.a = 1.0;
										UVar9.r = 1.0;
										UVar9.g = 1.0;
										pTVar2.set_color(UVar9);
										pTVar2 = this.text;
										if (pTVar2 != null) {
											pTVar2.ForceMeshUpdate(false, false);
											return;
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

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x58C4100", Offset = "0x58C3100", VA = "0x58C4100")]
	private static void ApplyTmpOutlineMaterial(Material material, NameEffectSettings settings)
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$ApplyTmpOutlineMaterial): clean
		int iVar1;
		Color value;
		bool bVar2;
		Color value_00;

		bVar2 = ((Object)material == null);
		if (bVar2) {
			return;
		}
		if (material != null) {
			material.EnableKeyword(ShaderUtilities.Keyword_Outline);
			iVar1 = ShaderUtilities.ID_FaceColor;
			bVar2 = material.HasProperty(iVar1);
			if (bVar2) {
				value_00.b = 1.0;
				value_00.a = 1.0;
				value_00.r = 1.0;
				value_00.g = 1.0;
				material.SetColor(iVar1, value_00);
			}
			if (settings != null) {
				iVar1 = ShaderUtilities.ID_OutlineColor;
				value = settings.gradientD;
				bVar2 = material.HasProperty(iVar1);
				if (bVar2) {
					material.SetColor(iVar1, (Color)value);
				}
				iVar1 = ShaderUtilities.ID_OutlineWidth;
				bVar2 = material.HasProperty(iVar1);
				if (bVar2) {
					material.SetFloat(iVar1, 0.16);
				}
				iVar1 = ShaderUtilities.ID_OutlineSoftness;
				bVar2 = material.HasProperty(iVar1);
				if (bVar2) {
					material.SetFloat(iVar1, 0.0);
				}
				iVar1 = ShaderUtilities.ID_FaceDilate;
				bVar2 = material.HasProperty(iVar1);
				if (bVar2) {
					material.SetFloat(iVar1, 0.02);
				}
				ShaderUtilities.UpdateShaderRatios(material);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x58C4300", Offset = "0x58C3300", VA = "0x58C4300")]
	private static void SetColorIfPresent(Material material, int propertyId, Color value)
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$SetColorIfPresent): clean
		bool bVar1;

		if (material == null) {
			throw new NullReferenceException();
		}
		bVar1 = material.HasProperty(propertyId);
		if (bVar1) {
			material.SetColor(propertyId, value);
			return;
		}
		return;
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x58C4350", Offset = "0x58C3350", VA = "0x58C4350")]
	private static void SetFloatIfPresent(Material material, int propertyId, float value)
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$SetFloatIfPresent): clean
		bool bVar1;

		if (material == null) {
			throw new NullReferenceException();
		}
		bVar1 = material.HasProperty(propertyId);
		if (bVar1) {
			material.SetFloat(propertyId, value);
			return;
		}
		return;
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x58C40D0", Offset = "0x58C30D0", VA = "0x58C40D0")]
	private float PopOffsetScale()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$PopOffsetScale): clean
		TMP_Text pTVar1;
		float fVar2;
		float fVar3;

		pTVar1 = this.text;
		if (pTVar1 == null) {
			throw new NullReferenceException();
		}
		fVar3 = pTVar1.m_fontSize / 48.0;
		if (0.35 <= fVar3) {
		}
		return fVar2;
	}

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x58C3D60", Offset = "0x58C2D60", VA = "0x58C3D60")]
	private void SyncPopLayer(TMP_Text layer, Vector2 offset, Color color)
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$SyncPopLayer): clean
		TMP_Text pTVar1;
		Vector2 UVar2;
		bool bVar3;
		int value;
		String pSVar4;
		Material pUVar5;
		RectTransform __this_00;
		RectTransform __this_01;
		Quaternion value_00;
		Vector3 UVar6;
		Vector3 value_01;
		float local_58;
		float fStack_54;

		bVar3 = ((Object)layer == null);
		if (!bVar3) {
			pTVar1 = this.text;
			bVar3 = ((Object)pTVar1 == null);
			if (!bVar3) {
				pTVar1 = this.text;
				if (pTVar1 != null) {
					pSVar4 = pTVar1.get_text();
					if (layer != null) {
						layer.set_text(pSVar4);
						pTVar1 = this.text;
						if (pTVar1 != null) {
							layer.font = pTVar1.m_fontAsset;
							pUVar5 = this.originalFontMaterial;
							bVar3 = ((Object)pUVar5 != null);
							if (bVar3) {
								pUVar5 = this.originalFontMaterial;
							}
							else {
								pTVar1 = this.text;
								if (pTVar1 == null) goto label_059c40c7;
								pUVar5 = pTVar1.get_fontSharedMaterial();
							}
							layer.set_fontSharedMaterial(pUVar5);
							pTVar1 = this.text;
							if (pTVar1 != null) {
								layer.fontSize = pTVar1.m_fontSize;
								pTVar1 = this.text;
								if (pTVar1 != null) {
									layer.fontStyle = pTVar1.m_fontStyle;
									pTVar1 = this.text;
									if (pTVar1 != null) {
										value = pTVar1.alignment;
										layer.alignment = value;
										pTVar1 = this.text;
										if (pTVar1 != null) {
											layer.richText = pTVar1.m_isRichText;
											pTVar1 = this.text;
											if (pTVar1 != null) {
												bVar3 = pTVar1.enableWordWrapping;
												layer.enableWordWrapping = bVar3;
												layer.overflowMode = 0;
												pTVar1 = this.text;
												if (pTVar1 != null) {
													layer.characterSpacing = pTVar1.m_characterSpacing;
													pTVar1 = this.text;
													if (pTVar1 != null) {
														layer.wordSpacing = pTVar1.m_wordSpacing;
														pTVar1 = this.text;
														if (pTVar1 != null) {
															layer.lineSpacing = pTVar1.m_lineSpacing;
															pTVar1 = this.text;
															if (pTVar1 != null) {
																layer.paragraphSpacing = pTVar1.m_paragraphSpacing;
																layer.set_color(color);
																pTVar1 = this.text;
																if (pTVar1 != null) {
																	__this_00 = pTVar1.rectTransform;
																	__this_01 = layer.rectTransform;
																	if (__this_00 != null) {
																		UVar2 = __this_00.anchorMin;
																		if (__this_01 != null) {
																			__this_01.anchorMin = UVar2;
																			UVar2 = __this_00.anchorMax;
																			__this_01.anchorMax = UVar2;
																			UVar2 = __this_00.pivot;
																			__this_01.pivot = UVar2;
																			UVar2 = __this_00.sizeDelta;
																			__this_01.sizeDelta = UVar2;
																			UVar6 = __this_00.anchoredPosition3D;
																			local_58 = offset.x;
																			fStack_54 = offset.y;
																			value_01.x = UVar6.x + local_58;
																			value_01.y = UVar6.y + fStack_54;
																			value_01.z = UVar6.z + 0.0;
																			__this_01.anchoredPosition3D = value_01;
																			UVar6 = __this_00.localScale ;
																			__this_01.localScale = UVar6;
																			value_00 = __this_00.localRotation;
																			__this_01.localRotation = value_00;
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
							}
						}
					}
				}
	label_059c40c7: ;
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x58C3AB0", Offset = "0x58C2AB0", VA = "0x58C3AB0")]
	private void HookPopGradient()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$HookPopGradient): 1 lines keep C-only constructs
		TMP_Text pTVar1;
		bool bVar2;
		Action<TMP_TextInfo> __this_00;

		if (this.popGradientHooked == false) {
			pTVar1 = this.text;
			bVar2 = ((Object)pTVar1 == null);
			if (!bVar2) {
				pTVar1 = this.text;
				__this_00 = new Action<TMP_TextInfo>((object)this, (intptr_t)MethodInfo_PatreonEffects_NameEffectController_ApplyPopFaceGradient);
				if (pTVar1 == null) {
					throw new NullReferenceException();
				}
				pTVar1.add_OnPreRenderText(__this_00);
				this.popGradientHooked = true;
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x58C2A80", Offset = "0x58C1A80", VA = "0x58C2A80")]
	private void ClearPop()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$ClearPop): clean
		this.popActive = false;
		this.ClearPopGradient();
		NameEffectController.DestroyPopLayer(ref this.popShadowText);
		NameEffectController.DestroyPopLayer(ref this.popExtrusionText);
		return;
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x58C2820", Offset = "0x58C1820", VA = "0x58C2820")]
	private void ClearOutline()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$ClearOutline): clean
		bool bVar1;

		bVar1 = this.outlineActive;
		this.outlineActive = false;
		this.ClearPopGradient();
		if (bVar1 == false) {
			return;
		}
		this.ClearShaderMaterial();
		return;
	}

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x58C43A0", Offset = "0x58C33A0", VA = "0x58C43A0")]
	private void ClearPopGradient()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$ClearPopGradient): 1 lines keep C-only constructs
		TMP_Text pTVar1;
		bool bVar2;
		Action<TMP_TextInfo> __this_00;

		if (this.popGradientHooked != false) {
			pTVar1 = this.text;
			bVar2 = ((Object)pTVar1 != null);
			if (bVar2) {
				pTVar1 = this.text;
				__this_00 = new Action<TMP_TextInfo>((object)this, (intptr_t)MethodInfo_PatreonEffects_NameEffectController_ApplyPopFaceGradient);
				if (pTVar1 == null) {
					throw new NullReferenceException();
				}
				pTVar1.remove_OnPreRenderText(__this_00);
			}
		}
		this.popGradientHooked = false;
		return;
	}

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x58C2CD0", Offset = "0x58C1CD0", VA = "0x58C2CD0")]
	private void HookEffectVertexData()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$HookEffectVertexData): 1 lines keep C-only constructs
		TMP_Text pTVar1;
		bool bVar2;
		Action<TMP_TextInfo> __this_00;

		if (this.effectVertexDataHooked == false) {
			pTVar1 = this.text;
			bVar2 = ((Object)pTVar1 == null);
			if (!bVar2) {
				pTVar1 = this.text;
				__this_00 = new Action<TMP_TextInfo>((object)this, (intptr_t)MethodInfo_PatreonEffects_NameEffectController_UpdateEffectVertexData);
				if (pTVar1 == null) {
					throw new NullReferenceException();
				}
				pTVar1.add_OnPreRenderText(__this_00);
				this.effectVertexDataHooked = true;
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x58C2750", Offset = "0x58C1750", VA = "0x58C2750")]
	private void ClearEffectVertexData()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$ClearEffectVertexData): 1 lines keep C-only constructs
		TMP_Text pTVar1;
		bool bVar2;
		Action<TMP_TextInfo> __this_00;

		if (this.effectVertexDataHooked != false) {
			pTVar1 = this.text;
			bVar2 = ((Object)pTVar1 != null);
			if (bVar2) {
				pTVar1 = this.text;
				__this_00 = new Action<TMP_TextInfo>((object)this, (intptr_t)MethodInfo_PatreonEffects_NameEffectController_UpdateEffectVertexData);
				if (pTVar1 == null) {
					throw new NullReferenceException();
				}
				pTVar1.remove_OnPreRenderText(__this_00);
			}
		}
		this.effectVertexDataHooked = false;
		return;
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x58C4470", Offset = "0x58C3470", VA = "0x58C4470")]
	private static void DestroyPopLayer(ref TMP_Text layer)
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$DestroyPopLayer): 3 lines keep C-only constructs
		uint uVar1;
		TMP_Text x;
		bool bVar2;
		Object obj;

		x = *layer;
		bVar2 = ((Object)x == null);
		if (bVar2) {
			return;
		}
		if (*layer == null) {
			throw new NullReferenceException();
		}
		obj = (Object)(*layer).gameObject;
		*layer = null;
		bVar2 = Application.isPlaying;
		uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		if (bVar2) {
			if (uVar1 == 0) {
			}
			Object.Destroy(obj);
			return;
		}
		if (uVar1 == 0) {
		}
		Object.DestroyImmediate(obj);
		return;
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x58C3430", Offset = "0x58C2430", VA = "0x58C3430")]
	private void ClearShaderMaterial()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$ClearShaderMaterial): clean
		TMP_Text pTVar1;
		Material x;
		bool bVar2;

		pTVar1 = this.text;
		bVar2 = ((Object)pTVar1 != null);
		if (bVar2) {
			x = this.originalFontMaterial;
			bVar2 = ((Object)x != null);
			if (bVar2) {
				pTVar1 = this.text;
				if (pTVar1 != null) {
					pTVar1.set_fontSharedMaterial(this.originalFontMaterial);
					pTVar1 = this.text;
					if (pTVar1 != null) {
						pTVar1.ForceMeshUpdate(false, false);
						goto label_059c34df;
					}
				}
				throw new NullReferenceException();
			}
		}
	label_059c34df: ;
		this.DestroyRuntimeMaterial();
		return;
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x58C2490", Offset = "0x58C1490", VA = "0x58C2490")]
	private void DestroyRuntimeMaterial()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$DestroyRuntimeMaterial): 3 lines keep C-only constructs
		Material* targetAddress;
		uint uVar1;
		Material pUVar2;
		bool bVar3;

		pUVar2 = this.runtimeMat;
		targetAddress = &this.runtimeMat;
		bVar3 = ((Object)pUVar2 != null);
		if (bVar3) {
			bVar3 = Application.isPlaying;
			pUVar2 = *targetAddress;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
			if (bVar3) {
				if (uVar1 == 0) {
				}
				Object.Destroy((Object)pUVar2);
			}
			else {
				if (uVar1 == 0) {
				}
				Object.DestroyImmediate((Object)pUVar2);
			}
		}
		this.runtimeMat = null;
		this.initialized = false;
		return;
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x58C2DA0", Offset = "0x58C1DA0", VA = "0x58C2DA0")]
	private void UpdateEffectVertexData(TMP_TextInfo textInfo)
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$UpdateEffectVertexData): 13 lines keep C-only constructs
		ulong uVar1;
		Vector3[]* ppUVar2;
		Vector4[]* ppUVar3;
		Vector2[]* ppUVar4;
		Int32[]* ppSVar5;
		float fVar6;
		byte bVar7;
		uint uVar8;
		uint uVar9;
		uint uVar10;
		Material x;
		TMP_CharacterInfo[] pTVar11;
		TMP_MeshInfo[] pTVar12;
		float fVar13;
		float fVar14;
		Vector3[] pUVar15;
		Color32[] pUVar16;
		bool bVar17;
		byte uVar18;
		byte uVar19;
		uint uVar20;
		int iVar21;
		long lVar22;
		ulong uVar24;
		ulong uVar25;
		float fVar26;
		float fVar27;
		float fStack_98;
		float fStack_94;
		float fStack_90;
		float fStack_8c;
		ulong uStack_80;
		Vector3[] pUStack_78;
		Vector4[] pUStack_68;
		Vector2[] pUStack_58;
		Color32[] pUStack_50;
		Int32[] pSStack_48;

		fStack_8c = 0.0;
		fStack_90 = 0.0;
		fStack_94 = 0.0;
		fStack_98 = 0.0;
		pUStack_50 = null;
		pUStack_78 = null;
		x = this.runtimeMat;
		bVar17 = ((Object)x == null);
		if ((!bVar17) && (textInfo != null)) {
			bVar17 = NameEffectController.TryLocalBounds(textInfo, ref fStack_8c, ref fStack_90, ref fStack_94, ref fStack_98);
			fVar14 = fStack_8c;
			fVar26 = fStack_90;
			fVar13 = fStack_94;
			fVar27 = fStack_98;
			if (bVar17) {
				if ((typeof(NameEffectController)._2).cctor_finished_or_no_cctor == 0) {
					pTVar11 = textInfo.characterInfo;
				}
				else {
					pTVar11 = textInfo.characterInfo;
				}
				if (pTVar11 != null) {
					uVar8 = textInfo.characterCount;
					uVar20 = (uint)pTVar11.Length;
					if ((int)uVar8 < (int)uVar20) {
						uVar20 = uVar8;
					}
					if (0 < (int)uVar20) {
						fVar26 = fVar26 - fVar14;
						fVar27 = fVar27 - fVar13;
						if (fVar26 <= 0.001) {
							fVar26 = 0.001;
						}
						if (fVar27 <= 0.001) {
							fVar27 = 0.001;
						}
						lVar22 = 0x50;
						uVar24 = 0;
						do {
							pTVar11 = textInfo.characterInfo;
							if (pTVar11 == null) {
								throw new NullReferenceException();
							}
							if ((uint)pTVar11.Length <= uVar24) goto label_059c341c;
							if ((*(byte)((long)(&pTVar11[0].color + -8) + lVar22) & 1) != 0) {
								uVar8 = *(uint)((long)(&pTVar11[0].vertex_BL.color + -0x23) + lVar22);
								uVar9 = *(uint)((long)(&pTVar11[0].vertex_BL.color + -0x1e) + lVar22);
								uVar25 = (ulong)uVar9;
								if ((typeof(NameEffectController)._2).cctor_finished_or_no_cctor == 0) {
									il2cpp_codegen_runtime_class_init(typeof(NameEffectController)) ;
								}
								pUStack_50 = null;
								pUStack_78 = null;
								if (((-1 < (int)uVar8) &&(pTVar12 = textInfo.meshInfo, pTVar12 != null)) &&(uVar10 = (uint)pTVar12.Length, (int)uVar8 < (int)uVar10)) {
									if (uVar10 <= uVar8) goto label_059c341c;
									uStack_80 = *(ulong)&pTVar12[uVar8].vertexCount;
									ppUVar2 = &pTVar12[uVar8].vertices;
									pUStack_78 = *ppUVar2;
									ppUVar3 = &pTVar12[uVar8].tangents;
									pUStack_68 = *ppUVar3;
									ppUVar4 = &pTVar12[uVar8].uvs2;
									pUStack_58 = *ppUVar4;
									pUStack_50 = (Color32[])ppUVar4[1];
									ppSVar5 = &pTVar12[uVar8].triangles;
									pSStack_48 = *ppSVar5;
									pUVar16 = pUStack_50;
									pUVar15 = pUStack_78;
									if ((pUStack_50 != null) &&(pUStack_78 != null)) {
										if (((int)(uVar9 + 3) < (int)pUStack_50.Length) &&((int)(uVar9 + 3) < (int)pUStack_78.Length)) {
											if (((pUStack_50.Length & 0xffffffff) <= uVar25) ||((pUStack_78.Length & 0xffffffff) <= uVar25)) {
	label_059c341c: ;
												throw new IndexOutOfRangeException();
											}
											bVar7 = pUStack_50[(int)uVar9]._overlap_0._at_a.a;
											fVar6 = pUStack_78[(int)uVar9].x;
											uVar18 = NameEffectController.ToByte((fVar6 - fVar14) / fVar26);
											if (((uint)pUVar15.Length <= uVar25) ||(uVar19 = NameEffectController.ToByte((pUVar15[(int)uVar9].y - fVar13) / fVar27), (uint)pUVar16.Length <= uVar25)) goto label_059c341c;
											pUVar16[(int)uVar9]._overlap_0._at_rgba.rgba =(uint)uVar18 | (uint)uVar19 << 8 | (uint)bVar7 << 0x18 | 0xff0000;
											uVar1 = uVar25 + 1;
											if (((uint)pUVar16.Length <= uVar1) || ((uint)pUVar15.Length <= uVar1)) goto label_059c341c;
											iVar21 = (int)uVar1;
											bVar7 = pUVar16[iVar21]._overlap_0._at_a.a;
											fVar6 = pUVar15[iVar21].x;
											uVar18 = NameEffectController.ToByte((fVar6 - fVar14) / fVar26);
											if (((uint)pUVar15.Length <= uVar1) ||(uVar19 = NameEffectController.ToByte((pUVar15[iVar21].y - fVar13) / fVar27), (uint)pUVar16.Length <= uVar1)) goto label_059c341c;
											pUVar16[iVar21]._overlap_0._at_rgba.rgba =(uint)uVar18 | (uint)uVar19 << 8 | (uint)bVar7 << 0x18 | 0xff0000;
											uVar1 = uVar25 + 2;
											if (((uint)pUVar16.Length <= uVar1) || ((uint)pUVar15.Length <= uVar1)) goto label_059c341c;
											iVar21 = (int)uVar1;
											bVar7 = pUVar16[iVar21]._overlap_0._at_a.a;
											fVar6 = pUVar15[iVar21].x;
											uVar18 = NameEffectController.ToByte((fVar6 - fVar14) / fVar26);
											if (((uint)pUVar15.Length <= uVar1) ||(uVar19 = NameEffectController.ToByte((pUVar15[iVar21].y - fVar13) / fVar27), (uint)pUVar16.Length <= uVar1)) goto label_059c341c;
											pUVar16[iVar21]._overlap_0._at_rgba.rgba =(uint)uVar18 | (uint)uVar19 << 8 | (uint)bVar7 << 0x18 | 0xff0000;
											uVar25 = uVar25 + 3;
											if (((uint)pUVar16.Length <= uVar25) || ((uint)pUVar15.Length <= uVar25)) goto label_059c341c;
											iVar21 = (int)uVar25;
											bVar7 = pUVar16[iVar21]._overlap_0._at_a.a;
											fVar6 = pUVar15[iVar21].x;
											uVar18 = NameEffectController.ToByte((fVar6 - fVar14) / fVar26);
											if (((uint)pUVar15.Length <= uVar25) ||(uVar19 = NameEffectController.ToByte((pUVar15[iVar21].y - fVar13) / fVar27), (uint)pUVar16.Length <= uVar25)) goto label_059c341c;
											pUVar16[iVar21]._overlap_0._at_rgba.rgba =(uint)uVar18 | (uint)uVar19 << 8 | (uint)bVar7 << 0x18 | 0xff0000;
										}
									}
								}
							}
							uVar24 = uVar24 + 1;
							lVar22 = lVar22 + 0x178;
						} while (uVar20 != uVar24);
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x58C49B0", Offset = "0x58C39B0", VA = "0x58C49B0")]
	private static byte ToByte(float value)
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$ToByte): 6 lines keep C-only constructs
		uint uVar1;
		double dVar2;
		double dVar3;
		MethodInfo in_RSI;
		MethodInfo method_00;
		float fVar4;
		Il2CppMethodPointer local_20;
		byte[] local_18 = new byte[16];

		fVar4 = 1.0;
		if (value <= 1.0) {
			fVar4 = value;
		}
		local_18 = ZEXT416(-(uint)(0.0 <= value) & (uint)(fVar4 * 255.0));
		if (Il2CppMethodInitialized_07541320 == false) {
			Il2CppMethodInitialized_07541320 = true;
			uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		dVar2 = (double)(float)local_18._0_4_;
		method_00 = (MethodInfo)&local_20;
		dVar3 = modf(dVar2, (double)method_00, in_RSI);
		if (0.0 <= (float)local_18._0_4_) {
			if ((dVar3 != 0.5) || (NAN(dVar3))) {
				dVar2 = floor(dVar2 + 0.5, method_00);
				return (uint8_t)(int)dVar2;
			}
			if (((long)(double)local_20 & 1U) != 0) {
				return (uint8_t)(int)((double)local_20 + 1.0);
			}
		}
		else {
			if ((dVar3 != -0.5) || (NAN(dVar3))) {
				dVar2 = ceil(dVar2 + -0.5, method_00);
				return (uint8_t)(int)dVar2;
			}
			if (((long)(double)local_20 & 1U) != 0) {
				local_20 = (Il2CppMethodPointer)((double)local_20 + -1.0);
			}
		}
		return (uint8_t)(int)(double)local_20;
	}

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x58C4900", Offset = "0x58C3900", VA = "0x58C4900")]
	private static int SafeCharacterCount(TMP_TextInfo textInfo)
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$SafeCharacterCount): clean
		int iVar1;
		TMP_CharacterInfo[] pTVar2;
		int iVar3;

		if ((textInfo == null) ||(pTVar2 = textInfo.characterInfo, pTVar2 == null)) {
			return 0;
		}
		iVar1 = textInfo.characterCount;
		iVar3 = (int)pTVar2.Length;
		if (iVar1 < iVar3) {
			iVar3 = iVar1;
		}
		return iVar3;
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x58C4920", Offset = "0x58C3920", VA = "0x58C4920")]
	private static bool TryGetMeshInfo(TMP_TextInfo textInfo, int materialReferenceIndex, out TMP_MeshInfo mesh)
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$TryGetMeshInfo): 11 lines keep C-only constructs
		TMP_MeshInfo pTVar1;
		Vector3[]* ppUVar2;
		Vector4[]* ppUVar3;
		Vector2[]* ppUVar4;
		Int32[]* ppSVar5;
		uint uVar6;
		TMP_MeshInfo[] pTVar7;
		Mesh pUVar8;
		Vector3[] pUVar9;
		Vector3[] pUVar10;
		Vector4[] pUVar11;
		Vector4[] pUVar12;
		Vector2[] pUVar13;
		Color32[] pUVar14;
		Material pUVar15;
		int iVar16;
		uint uVar17;
		bool bVar18;

		mesh.triangles = null;
		mesh.material = null;
		mesh.uvs2 = null;
		mesh.colors32 = null;
		mesh.tangents = null;
		mesh.uvs0 = null;
		mesh.vertices = null;
		mesh.normals = null;
		mesh.mesh = null;
		*(ulong)&mesh.vertexCount = 0;
		if (textInfo == null) {
			throw new NullReferenceException();
		}
		if ((-1 < materialReferenceIndex) &&(pTVar7 = textInfo.meshInfo, pTVar7 != null)) {
			uVar6 = (uint)pTVar7.Length;
			if ((int)uVar6 <= materialReferenceIndex) {
				return false;
			}
			if (uVar6 <= (uint)materialReferenceIndex) {
				throw new IndexOutOfRangeException();
			}
			pTVar1 = pTVar7.m_Items + (uint)materialReferenceIndex;
			pUVar8 = pTVar1.mesh;
			iVar16 = pTVar1.vertexCount;
			uVar17 = *(uint)&pTVar1.field_0xc;
			ppUVar2 = &pTVar7[(uint)materialReferenceIndex].vertices;
			pUVar9 = *ppUVar2;
			pUVar10 = ppUVar2[1];
			ppUVar3 = &pTVar7[(uint)materialReferenceIndex].tangents;
			pUVar11 = *ppUVar3;
			pUVar12 = ppUVar3[1];
			ppUVar4 = &pTVar7[(uint)materialReferenceIndex].uvs2;
			pUVar13 = *ppUVar4;
			pUVar14 = (Color32[])ppUVar4[1];
			ppSVar5 = &pTVar7[(uint)materialReferenceIndex].triangles;
			pUVar15 = (Material)ppSVar5[1];
			mesh.triangles = *ppSVar5;
			mesh.material = pUVar15;
			mesh.uvs2 = pUVar13;
			mesh.colors32 = pUVar14;
			mesh.tangents = pUVar11;
			mesh.uvs0 = pUVar12;
			mesh.vertices = pUVar9;
			mesh.normals = pUVar10;
			mesh.mesh = pUVar8;
			mesh.vertexCount = iVar16;
			*(uint)&mesh.field_0xc = uVar17;
		}
		return bVar18;
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x58C4570", Offset = "0x58C3570", VA = "0x58C4570")]
	private static bool TryLocalBounds(TMP_TextInfo textInfo, out float minX, out float maxX, out float minY, out float maxY)
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$TryLocalBounds): 46 lines keep C-only constructs
		Vector3[]* ppUVar1;
		Vector4[]* ppUVar2;
		Vector2[]* ppUVar3;
		Int32[]* ppSVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		uint uVar10;
		uint uVar11;
		uint uVar12;
		uint uVar13;
		uint uVar14;
		uint uVar15;
		TMP_CharacterInfo[] pTVar16;
		TMP_MeshInfo[] pTVar17;
		uint uVar18;
		int iVar19;
		long lVar20;
		ulong uVar21;
		bool bVar22;
		float fVar23;
		ulong uStack_80;
		Vector3[] local_78;
		Vector4[] local_68;
		Vector2[] local_58;
		Int32[] local_48;

		local_78 = null;
		*minX = INFINITY;
		*maxX = -INFINITY;
		*minY = INFINITY;
		*maxY = -INFINITY;
		if ((textInfo != null) &&(pTVar16 = textInfo.characterInfo, pTVar16 != null)) {
			uVar13 = textInfo.characterCount;
			uVar18 = (uint)pTVar16.Length;
			if ((int)uVar13 < (int)uVar18) {
				uVar18 = uVar13;
			}
			if (0 < (int)uVar18) {
				lVar20 = 0x50;
				uVar21 = 0;
				do {
					pTVar16 = textInfo.characterInfo;
					if (pTVar16 == null) {
						throw new NullReferenceException();
					}
					if ((uint)pTVar16.Length <= uVar21) goto label_059c48b2;
					if ((*(byte)((long)(&pTVar16[0].color + -8) + lVar20) & 1) != 0) {
						uVar13 = *(uint)((long)(&pTVar16[0].vertex_BL.color + -0x23) + lVar20);
						uVar14 = *(uint)((long)(&pTVar16[0].vertex_BL.color + -0x1e) + lVar20);
						local_78 = null;
						if (((-1 < (int)uVar13) &&(pTVar17 = textInfo.meshInfo, pTVar17 != null)) &&(uVar15 = (uint)pTVar17.Length, (int)uVar13 < (int)uVar15)) {
							if (uVar15 <= uVar13) goto label_059c48b2;
							uStack_80 = *(ulong)&pTVar17[uVar13].vertexCount;
							ppUVar1 = &pTVar17[uVar13].vertices;
							local_78 = *ppUVar1;
							ppUVar2 = &pTVar17[uVar13].tangents;
							local_68 = *ppUVar2;
							ppUVar3 = &pTVar17[uVar13].uvs2;
							local_58 = *ppUVar3;
							ppSVar4 = &pTVar17[uVar13].triangles;
							local_48 = *ppSVar4;
							if ((local_78 != null) &&(uVar13 = (uint)local_78.Length, (int)(uVar14 + 3) < (int)uVar13)) {
								iVar19 = uVar13 - uVar14;
								bVar22 = iVar19 == 0;
								if (uVar13 < uVar14) {
									iVar19 = 0;
								}
								if (uVar13 < uVar14 || bVar22) {
	label_059c48b2: ;
									throw new IndexOutOfRangeException();
								}
								uVar6 = local_78[(int)uVar14].x;
								uVar10 = local_78[(int)uVar14].y;
								fVar23 = *minX;
								if ((float)uVar6 <= *minX) {
									fVar23 = (float)uVar6;
								}
								*minX = fVar23;
								fVar23 = *maxX;
								if (*maxX <= (float)uVar6) {
									fVar23 = (float)uVar6;
								}
								*maxX = fVar23;
								fVar23 = *minY;
								if ((float)uVar10 <= *minY) {
									fVar23 = (float)uVar10;
								}
								*minY = fVar23;
								fVar23 = *maxY;
								if (*maxY <= (float)uVar10) {
									fVar23 = (float)uVar10;
								}
								*maxY = fVar23;
								if (iVar19 == 1) goto label_059c48b2;
								uVar7 = local_78[(int)(uVar14 + 1)].x;
								uVar11 = local_78[(int)(uVar14 + 1)].y;
								fVar23 = *minX;
								if ((float)uVar7 <= *minX) {
									fVar23 = (float)uVar7;
								}
								*minX = fVar23;
								fVar23 = *maxX;
								if (*maxX <= (float)uVar7) {
									fVar23 = (float)uVar7;
								}
								*maxX = fVar23;
								fVar23 = *minY;
								if ((float)uVar11 <= *minY) {
									fVar23 = (float)uVar11;
								}
								*minY = fVar23;
								fVar23 = *maxY;
								if (*maxY <= (float)uVar11) {
									fVar23 = (float)uVar11;
								}
								*maxY = fVar23;
								if (iVar19 == 2) goto label_059c48b2;
								uVar8 = local_78[(int)(uVar14 + 2)].x;
								uVar12 = local_78[(int)(uVar14 + 2)].y;
								fVar23 = *minX;
								if ((float)uVar8 <= *minX) {
									fVar23 = (float)uVar8;
								}
								*minX = fVar23;
								fVar23 = *maxX;
								if (*maxX <= (float)uVar8) {
									fVar23 = (float)uVar8;
								}
								*maxX = fVar23;
								fVar23 = *minY;
								if ((float)uVar12 <= *minY) {
									fVar23 = (float)uVar12;
								}
								*minY = fVar23;
								fVar23 = *maxY;
								if (*maxY <= (float)uVar12) {
									fVar23 = (float)uVar12;
								}
								*maxY = fVar23;
								if (iVar19 == 3) goto label_059c48b2;
								uVar5 = local_78[(int)(uVar14 + 3)].x;
								uVar9 = local_78[(int)(uVar14 + 3)].y;
								fVar23 = *minX;
								if ((float)uVar5 <= *minX) {
									fVar23 = (float)uVar5;
								}
								*minX = fVar23;
								fVar23 = *maxX;
								if (*maxX <= (float)uVar5) {
									fVar23 = (float)uVar5;
								}
								*maxX = fVar23;
								fVar23 = *minY;
								if ((float)uVar9 <= *minY) {
									fVar23 = (float)uVar9;
								}
								*minY = fVar23;
								fVar23 = *maxY;
								if (*maxY <= (float)uVar9) {
									fVar23 = (float)uVar9;
								}
								*maxY = fVar23;
							}
						}
					}
					uVar21 = uVar21 + 1;
					lVar20 = lVar20 + 0x178;
				} while (uVar18 != uVar21);
			}
		}
		if (*maxX < *minX || *maxX == *minX) {
			bVar22 = false;
		}
		else {
			bVar22 = *minY <= *maxY && *maxY != *minY;
		}
		return bVar22;
	}

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x58C4AE0", Offset = "0x58C3AE0", VA = "0x58C4AE0")]
	private void ApplyPopFaceGradient(TMP_TextInfo textInfo)
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$ApplyPopFaceGradient): 28 lines keep C-only constructs
		Vector3[]* ppUVar1;
		Vector4[]* ppUVar2;
		Vector2[]* ppUVar3;
		Int32[]* ppSVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		TMP_CharacterInfo[] pTVar10;
		TMP_MeshInfo[] pTVar11;
		TMP_Text __this_00;
		Vector2 UVar12;
		float fVar13;
		NameEffectController __this_01;
		bool bVar14;
		uint uVar15;
		int iVar16;
		_struct_53532 _Var17;
		Transform __this_02;
		Color pUVar18;
		Color pUVar19;
		float pfVar20;
		ulong uVar21;
		long lVar22;
		float pfVar23;
		ulong uVar24;
		long lVar25;
		long lVar26;
		float fVar27;
		float fVar28;
		float fVar29;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		Vector3 UVar30;
		Vector3 worldPoint;
		float fStack_100;
		float fStack_fc;
		NameEffectController pPStack_f8;
		ulong uStack_f0;
		float pfStack_e8;
		Color pUStack_e0;
		byte[] auStack_d8 = new byte[16];
		float pfStack_c8;
		Color pUStack_c0;
		float pfStack_b8;
		Color pUStack_b0;
		Vector3[] pUStack_a8;
		ulong uStack_a0;
		Color32[] pUStack_98;
		Camera pUStack_90;
		ulong uStack_80;
		Vector3[] pUStack_78;
		Vector4[] pUStack_68;
		Vector2[] pUStack_58;
		Color32[] pUStack_50;
		Int32[] pSStack_48;

		pPStack_f8 = this;
		__this_01 = pPStack_f8;
		fStack_fc = 0.0;
		fStack_100 = 0.0;
		pUStack_50 = null;
		pUStack_78 = null;
		pUStack_90 = pPStack_f8.PopCamera();
		bVar14 = __this_01.TryPopFaceBounds(textInfo, pUStack_90, ref fStack_fc, ref fStack_100);
		fVar13 = fStack_fc;
		fVar27 = fStack_100;
		if (bVar14) {
			if ((textInfo != null) &&(pTVar10 = textInfo.characterInfo, pTVar10 != null)) {
				uVar9 = textInfo.characterCount;
				uVar15 = (uint)pTVar10.Length;
				if ((int)uVar9 < (int)uVar15) {
					uVar15 = uVar9;
				}
				if (0 < (int)uVar15) {
					fVar27 = fVar27 - fVar13;
					if (fVar27 <= 0.001) {
						fVar27 = 0.001;
					}
					pUStack_e0 = &pPStack_f8.popFaceB;
					pfStack_e8 = &pPStack_f8.popFaceB.b;
					pUStack_b0 = &pPStack_f8.popFaceC;
					pfStack_b8 = &pPStack_f8.popFaceC.b;
					pUStack_c0 = &pPStack_f8.popFaceA;
					pfStack_c8 = &pPStack_f8.popFaceA.b;
					uVar21 = (ulong)uVar15;
					uVar24 = 0;
					do {
						pTVar10 = textInfo.characterInfo;
						if (pTVar10 == null) {
	label_059c4f84: ;
							throw new NullReferenceException();
						}
						if ((uint)pTVar10.Length <= uVar24) {
	label_059c4f89: ;
							throw new IndexOutOfRangeException();
						}
						if ((pTVar10[uVar24].isVisible & 1U) != 0) {
							uVar9 = pTVar10[uVar24].materialReferenceIndex;
							uStack_f0 = (ulong)(uint)pTVar10[uVar24].vertexIndex;
							pUStack_50 = null;
							pUStack_78 = null;
							if (((-1 < (int)uVar9) &&(pTVar11 = textInfo.meshInfo, pTVar11 != null)) &&(uVar15 = (uint)pTVar11.Length, (int)uVar9 < (int)uVar15)) {
								if (uVar15 <= uVar9) goto label_059c4f89;
								uStack_80 = *(ulong)&pTVar11[uVar9].vertexCount;
								ppUVar1 = &pTVar11[uVar9].vertices;
								pUStack_78 = *ppUVar1;
								ppUVar2 = &pTVar11[uVar9].tangents;
								pUStack_68 = *ppUVar2;
								ppUVar3 = &pTVar11[uVar9].uvs2;
								pUStack_58 = *ppUVar3;
								pUStack_50 = (Color32[])ppUVar3[1];
								ppSVar4 = &pTVar11[uVar9].triangles;
								pSStack_48 = *ppSVar4;
								if (((pUStack_50 != null) &&(pUStack_78 != null)) &&((iVar16 = (int)uStack_f0 + 3, iVar16 < (int)pUStack_50.Length &&(iVar16 < (int)pUStack_78.Length)))) {
									lVar26 = uStack_f0 << 0x20;
									lVar25 = 0;
									pUStack_98 = pUStack_50;
									pUStack_a8 = pUStack_78;
									uStack_a0 = uVar21;
									do {
										uVar21 = uStack_f0 + lVar25;
										if ((uint)pUStack_a8.Length <= uVar21) goto label_059c4f89;
										lVar22 = lVar26 >> 0x20;
										uVar5 = pUStack_a8[lVar22].x;
										uVar8 = pUStack_a8[lVar22].y;
										auStack_d8._4_4_ = uVar8;
										auStack_d8._0_4_ = uVar5;
										auStack_d8._8_8_ = 0;
										fVar29 = pUStack_a8[lVar22].z;
										__this_00 = pPStack_f8.text;
										if ((__this_00 == null) ||(__this_02 = __this_00.transform, __this_02 == null)) goto label_059c4f84;
										UVar30.z = fVar29;
										UVar30.x = (float)auStack_d8._0_4_;
										UVar30.y = (float)auStack_d8._4_4_;
										UVar30 = __this_02.TransformPoint(UVar30);
										worldPoint.z = UVar30.z;
										fVar29 = UVar30.x;
										fVar28 = UVar30.y;
										if ((typeof(RectTransformUtility)._2).cctor_finished_or_no_cctor == 0) {
											auStack_d8._8_4_ = extraout_XMM0_Dc;
											auStack_d8._0_8_ = UVar30._0_8_;
											auStack_d8._12_4_ = extraout_XMM0_Dd;
											fVar29 = (float)auStack_d8._0_4_;
											fVar28 = (float)auStack_d8._4_4_;
										}
										worldPoint.y = fVar28;
										worldPoint.x = fVar29;
										UVar12 = RectTransformUtility.WorldToScreenPoint(pUStack_90, worldPoint);
										fVar28 = (UVar12.x - fVar13) / fVar27;
										fVar29 = 1.0;
										if (fVar28 <= 1.0) {
											fVar29 = fVar28;
										}
										fVar29 = (float)(-(uint)(0.0 <= fVar28) & (uint)fVar29);
										fVar28 = 0.0;
										if (0.0 <= fVar29) {
											fVar28 = fVar29;
										}
										if (0.5 <= fVar28) {
											fVar28 = fVar28 + -0.5;
											pUVar18 = pUStack_e0;
											pUVar19 = pUStack_b0;
											pfVar20 = pfStack_e8;
											pfVar23 = pfStack_b8;
										}
										else {
											pUVar18 = pUStack_c0;
											pUVar19 = pUStack_e0;
											pfVar20 = pfStack_c8;
											pfVar23 = pfStack_e8;
										}
										uVar6 = pUVar19.r;
										uVar7 = pUVar18.r;
										fVar28 = fVar28 + fVar28;
										fVar29 = 1.0;
										if (fVar28 <= 1.0) {
											fVar29 = fVar28;
										}
										fVar29 = (float)(-(uint)(0.0 <= fVar28) & (uint)fVar29);
										_Var17.rgba = il2cpp_runtime_helper_05334d00(((float)uVar6 - (float)uVar7) * fVar29 + (float)uVar7, ((float)*(ulong)pfVar23 - (float)*(ulong)pfVar20) * fVar29 + (float)*(ulong)pfVar20, 0);
										if ((uint)pUStack_98.Length <= uVar21) goto label_059c4f89;
										pUStack_98[lVar22]._overlap_0._at_rgba.rgba = _Var17.rgba;
										lVar25 = lVar25 + 1;
										lVar26 = lVar26 + 0x100000000;
										uVar21 = uStack_a0;
									} while (lVar25 != 4);
								}
							}
						}
						uVar24 = uVar24 + 1;
					} while (uVar24 != uVar21);
				}
			}
		}
		return;
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x58C56C0", Offset = "0x58C46C0", VA = "0x58C56C0")]
	private Color SampleFaceGradient(float t)
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$SampleFaceGradient): 8 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		Color pUVar9;
		Color pUVar10;
		Color pUVar11;
		Color pUVar12;
		float fVar13;
		float fVar14;
		Color UVar15;

		fVar13 = 1.0;
		if (t <= 1.0) {
			fVar13 = t;
		}
		fVar13 = (float)(-(uint)(0.0 <= t) & (uint)fVar13);
		if (0.5 <= fVar13) {
			pUVar11 = &this.popFaceB;
			pUVar9 = &this.popFaceB;
			pUVar12 = &this.popFaceC;
			pUVar10 = &this.popFaceC;
			fVar13 = fVar13 + -0.5;
		}
		else {
			pUVar11 = &this.popFaceA;
			pUVar9 = &this.popFaceA;
			pUVar12 = &this.popFaceB;
			pUVar10 = &this.popFaceB;
		}
		fVar13 = fVar13 + fVar13;
		fVar14 = 1.0;
		if (fVar13 <= 1.0) {
			fVar14 = fVar13;
		}
		uVar1 = pUVar12.r;
		uVar5 = pUVar12.g;
		uVar2 = pUVar10.b;
		uVar6 = pUVar10.a;
		fVar14 = (float)(-(uint)(0.0 <= fVar13) & (uint)fVar14);
		uVar3 = pUVar11.r;
		uVar7 = pUVar11.g;
		uVar4 = pUVar9.b;
		uVar8 = pUVar9.a;
		UVar15.r = fVar14 * ((float)uVar1 - (float)uVar3) + (float)uVar3;
		UVar15.g = fVar14 * ((float)uVar5 - (float)uVar7) + (float)uVar7;
		UVar15.a = fVar14 * ((float)uVar6 - (float)uVar8) + (float)uVar8;
		UVar15.b = fVar14 * ((float)uVar2 - (float)uVar4) + (float)uVar4;
		return (Color)UVar15;
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x58C5070", Offset = "0x58C4070", VA = "0x58C5070")]
	private bool TryPopFaceBounds(TMP_TextInfo textInfo, Camera camera, out float minX, out float maxX)
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$TryPopFaceBounds): 29 lines keep C-only constructs
		Vector3[]* ppUVar1;
		Vector4[]* ppUVar2;
		Vector2[]* ppUVar3;
		Int32[]* ppSVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		uint uVar10;
		uint uVar11;
		uint uVar12;
		TMP_CharacterInfo[] pTVar13;
		TMP_MeshInfo[] pTVar14;
		TMP_Text pTVar15;
		Vector2 UVar16;
		Vector3[] pUVar17;
		uint uVar18;
		uint uVar19;
		Transform pUVar20;
		uint uVar21;
		ulong uVar22;
		uint uVar23;
		long lVar24;
		float fVar25;
		float fVar26;
		Vector3 UVar27;
		Vector3 position;
		Vector3 position_00;
		Vector3 position_01;
		ulong uStack_80;
		Vector3[] local_78;
		Vector4[] local_68;
		Vector2[] local_58;
		Int32[] local_48;

		local_78 = null;
		*minX = INFINITY;
		*maxX = -INFINITY;
		if ((textInfo != null) &&(pTVar13 = textInfo.characterInfo, pTVar13 != null)) {
			uVar19 = textInfo.characterCount;
			uVar18 = (uint)pTVar13.Length;
			if ((int)uVar19 < (int)uVar18) {
				uVar18 = uVar19;
			}
			if (0 < (int)uVar18) {
				lVar24 = 0x50;
				uVar22 = 0;
				do {
					pTVar13 = textInfo.characterInfo;
					if (pTVar13 == null) goto label_059c5610;
					if ((uint)pTVar13.Length <= uVar22) goto label_059c560b;
					if ((*(byte)((long)(&pTVar13[0].color + -8) + lVar24) & 1) != 0) {
						uVar19 = *(uint)((long)(&pTVar13[0].vertex_BL.color + -0x23) + lVar24);
						uVar23 = *(uint)((long)(&pTVar13[0].vertex_BL.color + -0x1e) + lVar24);
						local_78 = null;
						if (((-1 < (int)uVar19) &&(pTVar14 = textInfo.meshInfo, pTVar14 != null)) &&(uVar21 = (uint)pTVar14.Length, (int)uVar19 < (int)uVar21)) {
							if (uVar21 <= uVar19) goto label_059c560b;
							uStack_80 = *(ulong)&pTVar14[uVar19].vertexCount;
							ppUVar1 = &pTVar14[uVar19].vertices;
							local_78 = *ppUVar1;
							ppUVar2 = &pTVar14[uVar19].tangents;
							local_68 = *ppUVar2;
							ppUVar3 = &pTVar14[uVar19].uvs2;
							local_58 = *ppUVar3;
							ppSVar4 = &pTVar14[uVar19].triangles;
							local_48 = *ppSVar4;
							pUVar17 = local_78;
							if (local_78 != null) {
								uVar19 = (uint)local_78.Length;
								uVar21 = uVar23 + 3;
								if ((int)uVar21 < (int)uVar19) {
									if (uVar19 <= uVar23) {
	label_059c560b: ;
										throw new IndexOutOfRangeException();
									}
									uVar5 = local_78[(int)uVar23].x;
									uVar9 = local_78[(int)uVar23].y;
									UVar27.y = (float)uVar9;
									UVar27.x = (float)uVar5;
									fVar26 = local_78[(int)uVar23].z;
									pTVar15 = this.text;
									if ((pTVar15 == null) ||(pUVar20 = pTVar15.transform, pUVar20 == null)) {
	label_059c5610: ;
										throw new NullReferenceException();
									}
									UVar27.z = fVar26;
									UVar27 = pUVar20.TransformPoint(UVar27);
									UVar16 = RectTransformUtility.WorldToScreenPoint(camera, UVar27) ;
									fVar25 = UVar16.x;
									fVar26 = *minX;
									if (fVar25 <= *minX) {
										fVar26 = fVar25;
									}
									*minX = fVar26;
									fVar26 = *maxX;
									if (*maxX <= fVar25) {
										fVar26 = fVar25;
									}
									*maxX = fVar26;
									uVar19 = uVar23 + 1;
									if ((uint)pUVar17.Length <= uVar19) goto label_059c560b;
									uVar6 = pUVar17[(int)uVar19].x;
									uVar10 = pUVar17[(int)uVar19].y;
									position.y = (float)uVar10;
									position.x = (float)uVar6;
									fVar26 = pUVar17[(int)uVar19].z;
									pTVar15 = this.text;
									if ((pTVar15 == null) ||(pUVar20 = pTVar15.transform, pUVar20 == null)) goto label_059c5610;
									position.z = fVar26;
									UVar27 = pUVar20.TransformPoint(position);
									UVar16 = RectTransformUtility.WorldToScreenPoint(camera, UVar27) ;
									fVar25 = UVar16.x;
									fVar26 = *minX;
									if (fVar25 <= *minX) {
										fVar26 = fVar25;
									}
									*minX = fVar26;
									fVar26 = *maxX;
									if (*maxX <= fVar25) {
										fVar26 = fVar25;
									}
									*maxX = fVar26;
									uVar23 = uVar23 + 2;
									if ((uint)pUVar17.Length <= uVar23) goto label_059c560b;
									uVar7 = pUVar17[(int)uVar23].x;
									uVar11 = pUVar17[(int)uVar23].y;
									position_00.y = (float)uVar11;
									position_00.x = (float)uVar7;
									fVar26 = pUVar17[(int)uVar23].z;
									pTVar15 = this.text;
									if ((pTVar15 == null) ||(pUVar20 = pTVar15.transform, pUVar20 == null)) goto label_059c5610;
									position_00.z = fVar26;
									UVar27 = pUVar20.TransformPoint(position_00);
									UVar16 = RectTransformUtility.WorldToScreenPoint(camera, UVar27) ;
									fVar25 = UVar16.x;
									fVar26 = *minX;
									if (fVar25 <= *minX) {
										fVar26 = fVar25;
									}
									*minX = fVar26;
									fVar26 = *maxX;
									if (*maxX <= fVar25) {
										fVar26 = fVar25;
									}
									*maxX = fVar26;
									if ((uint)pUVar17.Length <= uVar21) goto label_059c560b;
									uVar8 = pUVar17[(int)uVar21].x;
									uVar12 = pUVar17[(int)uVar21].y;
									position_01.y = (float)uVar12;
									position_01.x = (float)uVar8;
									fVar26 = pUVar17[(int)uVar21].z;
									pTVar15 = this.text;
									if ((pTVar15 == null) ||(pUVar20 = pTVar15.transform, pUVar20 == null)) goto label_059c5610;
									position_01.z = fVar26;
									UVar27 = pUVar20.TransformPoint(position_01);
									UVar16 = RectTransformUtility.WorldToScreenPoint(camera, UVar27) ;
									fVar25 = UVar16.x;
									fVar26 = *minX;
									if (fVar25 <= *minX) {
										fVar26 = fVar25;
									}
									*minX = fVar26;
									fVar26 = *maxX;
									if (*maxX <= fVar25) {
										fVar26 = fVar25;
									}
									*maxX = fVar26;
								}
							}
						}
					}
					uVar22 = uVar22 + 1;
					lVar24 = lVar24 + 0x178;
				} while (uVar18 != uVar22);
			}
		}
		return *minX <= *maxX && *maxX != *minX;
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x58C4F90", Offset = "0x58C3F90", VA = "0x58C4F90")]
	private Camera PopCamera()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$PopCamera): clean
		TMP_Text __this_00;
		bool bVar1;
		int iVar2;
		Canvas __this_01;
		Camera pUVar3;

		__this_00 = this.text;
		if (__this_00 == null) {
	label_059c506b: ;
			throw new NullReferenceException();
		}
		__this_01 = __this_00.GetComponentInParent<Canvas>();
		bVar1 = ((Object)__this_01 == null);
		if (!bVar1) {
			if (__this_01 == null) goto label_059c506b;
			iVar2 = __this_01.renderMode;
			if (iVar2 != 0) {
				pUVar3 = __this_01.worldCamera;
				bVar1 = ((Object)pUVar3 != null);
				if (bVar1) {
					pUVar3 = __this_01.worldCamera;
					return pUVar3;
				}
				pUVar3 = Camera.main;
				return pUVar3;
			}
		}
		return null;
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x58C5620", Offset = "0x58C4620", VA = "0x58C5620")]
	private float ScreenX(Vector3 localVertex, Camera camera)
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$ScreenX): clean
		TMP_Text __this_00;
		Vector2 UVar1;
		Transform __this_01;
		Vector3 worldPoint;

		__this_00 = this.text;
		if (__this_00 != null) {
			__this_01 = __this_00.transform;
			if (__this_01 != null) {
				worldPoint = __this_01.TransformPoint(localVertex);
				UVar1 = RectTransformUtility.WorldToScreenPoint(camera, worldPoint);
				return UVar1.x;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x58C5760", Offset = "0x58C4760", VA = "0x58C5760")]
	public NameEffectController()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectController.c (PatreonEffects.NameEffectController$$.ctor): clean
		this.effect = 1;
		this.popFaceA.r = 1.0;
		this.popFaceA.g = 1.0;
		this.popFaceA.b = 1.0;
		this.popFaceA.a = 1.0;
		this.popFaceB.r = 1.0;
		this.popFaceB.g = 1.0;
		this.popFaceB.b = 1.0;
		this.popFaceB.a = 1.0;
		this.popFaceC.r = 1.0;
		this.popFaceC.g = 1.0;
		this.popFaceC.b = 1.0;
		this.popFaceC.a = 1.0;
		this.popShadowColor.r = 0.0;
		this.popShadowColor.g = 0.0;
		this.popShadowColor.b = 0.0;
		this.popShadowColor.a = 1.0;
		this.popExtrusionColor.r = 1.0;
		this.popExtrusionColor.g = 0.0;
		this.popExtrusionColor.b = 1.0;
		this.popExtrusionColor.a = 1.0;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/PatreonEffects/NameEffectController.c.

	// PatreonEffects.NameEffectController$$.cctor: clean
	static NameEffectController()
	{
		int iVar1;

		iVar1 = Shader.PropertyToID("_FaceColor");
		NameEffectController.FaceColor_ID = iVar1;
		iVar1 = Shader.PropertyToID("_GradientA");
		NameEffectController.GradientA_ID = iVar1;
		iVar1 = Shader.PropertyToID("_GradientB");
		NameEffectController.GradientB_ID = iVar1;
		iVar1 = Shader.PropertyToID("_GradientC");
		NameEffectController.GradientC_ID = iVar1;
		iVar1 = Shader.PropertyToID("_GradientD");
		NameEffectController.GradientD_ID = iVar1;
		iVar1 = Shader.PropertyToID("_EffectGradientScale");
		NameEffectController.EffectGradientScale_ID = iVar1;
		iVar1 = Shader.PropertyToID("_GradientSpeed");
		NameEffectController.GradientSpeed_ID = iVar1;
		iVar1 = Shader.PropertyToID("_EffectMode");
		NameEffectController.EffectMode_ID = iVar1;
		iVar1 = Shader.PropertyToID("_Glow");
		NameEffectController.Glow_ID = iVar1;
		iVar1 = Shader.PropertyToID("_ScanlineStrength");
		NameEffectController.ScanlineStrength_ID = iVar1;
		iVar1 = Shader.PropertyToID("_ScanlineDensity");
		NameEffectController.ScanlineDensity_ID = iVar1;
		iVar1 = Shader.PropertyToID("_ScanlineSpeed");
		NameEffectController.ScanlineSpeed_ID = iVar1;
		iVar1 = Shader.PropertyToID("_FlickerStrength");
		NameEffectController.FlickerStrength_ID = iVar1;
		iVar1 = Shader.PropertyToID("_FlickerSpeed");
		NameEffectController.FlickerSpeed_ID = iVar1;
		iVar1 = Shader.PropertyToID("_Softness");
		NameEffectController.Softness_ID = iVar1;
		return;
	}
}
