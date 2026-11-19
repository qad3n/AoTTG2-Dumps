// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgNameStyleChoicePreview.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using PatreonEffects;
using TMPro;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002F3")]
internal sealed class AottgNameStyleChoicePreview : MonoBehaviour
{
	[Token(Token = "0x4000EF1")]
	[FieldOffset(Offset = "0x20")]
	private TMP_Text _text;

	[Token(Token = "0x4000EF2")]
	[FieldOffset(Offset = "0x28")]
	private NameEffectController _effect;

	[Token(Token = "0x4000EF3")]
	[FieldOffset(Offset = "0x30")]
	private Color[] _colors;

	[Token(Token = "0x4000EF4")]
	[FieldOffset(Offset = "0x38")]
	private bool _hooked;

	[Token(Token = "0x17000202")]
	private TMP_Text Text
	{
		[Token(Token = "0x6001239")]
		[Address(RVA = "0x57E8120", Offset = "0x57E7120", VA = "0x57E8120")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgNameStyleChoicePreview.c (Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$get_Text): 2 lines keep C-only constructs
			TMP_Text* targetAddress;
			bool bVar1;
			TMP_Text pTVar2;

			pTVar2 = this._text;
			targetAddress = &this._text;
			bVar1 = ((Object)pTVar2 == null);
			if (bVar1) {
				pTVar2 = this.GetComponent<TMP_Text>();
				this._text = pTVar2;
			}
			return *targetAddress;
		}
	}

	[Token(Token = "0x6001234")]
	[Address(RVA = "0x57E7590", Offset = "0x57E6590", VA = "0x57E7590")]
	public void ConfigureDisabled()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgNameStyleChoicePreview.c (Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ConfigureDisabled): 1 lines keep C-only constructs
		Color32 value;
		TMP_Text pTVar1;
		TMP_Text pTVar2;
		MethodInfo pMVar3;
		Color UVar4;

		pMVar3 = (MethodInfo *)"Normal";
		this.ResetPlainVisuals("Normal");
		pTVar1 = this.Text;
		pMVar3 = (MethodInfo *)"Normal";
		NameFontCatalog.Apply(pTVar1, "Normal");
		pTVar1 = this.Text;
		if (pTVar1 != null) {
			UVar4.b = 0.58;
			UVar4.a = 1.0;
			UVar4.r = 0.58;
			UVar4.g = 0.58;
			pTVar1.set_color(UVar4);
			pTVar1 = this.Text;
			pTVar2 = this.Text;
			if (pTVar2 != null) {
				UVar4 = pTVar2.get_color();
				value._overlap_0 =(Color32)il2cpp_runtime_helper_05334d00(UVar4._0_8_, UVar4._8_8_, 0);
				if (pTVar1 != null) {
					pTVar1.faceColor = value;
					pTVar1 = this.Text;
					if (pTVar1 != null) {
						pTVar1.ForceMeshUpdate(false, false);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001235")]
	[Address(RVA = "0x57E7CD0", Offset = "0x57E6CD0", VA = "0x57E7CD0")]
	public void ConfigureFont(string font)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgNameStyleChoicePreview.c (Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ConfigureFont): 1 lines keep C-only constructs
		Color32 value;
		TMP_Text pTVar1;
		Color UVar3;

		this.ResetPlainVisuals(font);
		pTVar1 = this.Text;
		NameFontCatalog.Apply(pTVar1, font);
		pTVar1 = this.Text;
		if (pTVar1 != null) {
			UVar3.b = 1.0;
			UVar3.a = 1.0;
			UVar3.r = 1.0;
			UVar3.g = 1.0;
			pTVar1.set_color(UVar3);
			pTVar1 = this.Text;
			value._overlap_0 =(Color32)il2cpp_runtime_helper_05334d00(0x3f8000003f800000, 0x3f8000003f800000, 0);
			if (pTVar1 != null) {
				pTVar1.faceColor = value;
				pTVar1 = this.Text;
				if (pTVar1 != null) {
					pTVar1.ForceMeshUpdate(false, false);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001236")]
	[Address(RVA = "0x57E76B0", Offset = "0x57E66B0", VA = "0x57E76B0")]
	public void ConfigureSolid(Color color, string font)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgNameStyleChoicePreview.c (Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ConfigureSolid): clean
		uint uVar1;
		Color[] colors;
		float fStack_28;
		float fStack_24;

		colors = (Color[])new Color[2];
		if (colors == null) {
			throw new NullReferenceException();
		}
		uVar1 = (uint)colors.Length;
		fStack_28 = color.r;
		fStack_24 = color.g;
		if (uVar1 != 0) {
			colors[0].r = fStack_28;
			colors[0].g = fStack_24;
			colors[0].b = color.b;
			colors[0].a = color.a;
			if (uVar1 != 1) {
				colors[1].r = fStack_28;
				colors[1].g = fStack_24;
				colors[1].b = color.b;
				colors[1].a = color.a;
				this.ConfigureGradient(colors, font);
				return;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6001237")]
	[Address(RVA = "0x57E7990", Offset = "0x57E6990", VA = "0x57E7990")]
	public void ConfigureGradient(Color[] colors, string font)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgNameStyleChoicePreview.c (Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ConfigureGradient): 1 lines keep C-only constructs
		Color32 value;
		TMP_Text pTVar1;
		Color UVar3;

		this.ResetPlainVisuals(font);
		pTVar1 = this.Text;
		NameFontCatalog.Apply(pTVar1, font);
		pTVar1 = this.Text;
		if (pTVar1 != null) {
			UVar3.b = 1.0;
			UVar3.a = 1.0;
			UVar3.r = 1.0;
			UVar3.g = 1.0;
			pTVar1.set_color(UVar3);
			pTVar1 = this.Text;
			value._overlap_0 =(Color32)il2cpp_runtime_helper_05334d00(0x3f8000003f800000, 0x3f8000003f800000, 0);
			if (pTVar1 != null) {
				pTVar1.faceColor = value;
				this._colors = colors;
				this.HookVertexColors();
				pTVar1 = this.Text;
				if (pTVar1 != null) {
					pTVar1.ForceMeshUpdate(false, false);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001238")]
	[Address(RVA = "0x57E7AB0", Offset = "0x57E6AB0", VA = "0x57E7AB0")]
	public void ConfigureEffect(NameEffectType effect, Color[] colors, string font)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgNameStyleChoicePreview.c (Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ConfigureEffect): 3 lines keep C-only constructs
		float fVar1;
		float fVar2;
		float fVar3;
		TMP_Text pTVar4;
		GameObject __this_00;
		NameEffectController pPVar5;
		NameEffectSettings settings;
		NameEffectController* targetAddress;

		this.ResetPlainVisuals(font);
		pTVar4 = this.Text;
		NameFontCatalog.Apply(pTVar4, font);
		pTVar4 = this.Text;
		if (pTVar4 != null) {
			__this_00 = pTVar4.gameObject;
			if (__this_00 != null) {
				pPVar5 = __this_00.AddComponent<NameEffectController>();
				this._effect = pPVar5;
				targetAddress = &this._effect;
				settings = NameEffectPresets.GetPreset(effect);
				if (colors != null) {
					if (colors.Length != 0) {
						if ((int)colors.Length == 0) {
							throw new IndexOutOfRangeException();
						}
						if (settings == null) goto label_058e7be4;
						fVar1 = colors[0].g;
						fVar2 = colors[0].b;
						fVar3 = colors[0].a;
						settings.gradientA.r = colors[0].r;
						settings.gradientA.g = fVar1;
						settings.gradientA.b = fVar2;
						settings.gradientA.a = fVar3;
						if (1 < (int)colors.Length) {
							fVar1 = colors[1].g;
							fVar2 = colors[1].b;
							fVar3 = colors[1].a;
							settings.gradientB.r = colors[1].r;
							settings.gradientB.g = fVar1;
							settings.gradientB.b = fVar2;
							settings.gradientB.a = fVar3;
							if (2 < (int)colors.Length) {
								fVar1 = colors[2].g;
								fVar2 = colors[2].b;
								fVar3 = colors[2].a;
								settings.gradientC.r = colors[2].r;
								settings.gradientC.g = fVar1;
								settings.gradientC.b = fVar2;
								settings.gradientC.a = fVar3;
								if (3 < (int)colors.Length) {
									fVar1 = colors[3].g;
									fVar2 = colors[3].b;
									fVar3 = colors[3].a;
									settings.gradientD.r = colors[3].r;
									settings.gradientD.g = fVar1;
									settings.gradientD.b = fVar2;
									settings.gradientD.a = fVar3;
								}
							}
						}
					}
					pPVar5 = *targetAddress;
					if (pPVar5 != null) {
						pPVar5.Apply(settings);
						return;
					}
				}
			}
		}
	label_058e7be4: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600123A")]
	[Address(RVA = "0x57E81B0", Offset = "0x57E71B0", VA = "0x57E81B0")]
	private void HookVertexColors()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgNameStyleChoicePreview.c (Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$HookVertexColors): 1 lines keep C-only constructs
		TMP_Text pTVar1;
		Action<TMP_TextInfo> __this_00;

		if (this._hooked != false) {
			return;
		}
		pTVar1 = this.Text;
		__this_00 = new Action<TMP_TextInfo>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_ApplyVertexColors);
		if (pTVar1 == null) {
			throw new NullReferenceException();
		}
		pTVar1.add_OnPreRenderText(__this_00);
		this._hooked = true;
		return;
	}

	[Token(Token = "0x600123B")]
	[Address(RVA = "0x57E8250", Offset = "0x57E7250", VA = "0x57E8250")]
	private void ClearVertexColors()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgNameStyleChoicePreview.c (Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ClearVertexColors): 1 lines keep C-only constructs
		TMP_Text pTVar1;
		bool bVar2;
		Action<TMP_TextInfo> __this_00;

		this._colors = null;
		if (this._hooked != false) {
			pTVar1 = this._text;
			bVar2 = ((Object)pTVar1 != null);
			if (bVar2) {
				pTVar1 = this._text;
				__this_00 = new Action<TMP_TextInfo>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgNameStyleChoicePreview_ApplyVertexColors);
				if (pTVar1 == null) {
					throw new NullReferenceException();
				}
				pTVar1.remove_OnPreRenderText(__this_00);
			}
		}
		this._hooked = false;
		return;
	}

	[Token(Token = "0x600123C")]
	[Address(RVA = "0x57E8330", Offset = "0x57E7330", VA = "0x57E8330")]
	private void ClearEffect()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgNameStyleChoicePreview.c (Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ClearEffect): 5 lines keep C-only constructs
		NameEffectController pPVar1;
		bool bVar2;
		NameEffectController* targetAddress;

		pPVar1 = this._effect;
		bVar2 = ((Object)pPVar1 == null);
		if (bVar2) {
			return;
		}
		targetAddress = &this._effect;
		if (*targetAddress == null) {
			throw new NullReferenceException();
		}
		(*targetAddress).Clear();
		pPVar1 = *targetAddress;
		Object.Destroy((Object)pPVar1);
		*targetAddress = null;
		return;
	}

	[Token(Token = "0x600123D")]
	[Address(RVA = "0x57E7FD0", Offset = "0x57E6FD0", VA = "0x57E7FD0")]
	private void ResetPlainVisuals(string font)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgNameStyleChoicePreview.c (Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ResetPlainVisuals): clean
		TMP_FontAsset pTVar1;
		bool bVar2;
		TMP_Text pTVar3;
		TMP_Text pTVar4;
		MethodInfo pMVar5;

		this.ClearVertexColors();
		this.ClearAllEffects();
		this.DestroyStalePopLayer("PopShadow");
		pMVar5 = (MethodInfo *)"PopExtrusion";
		this.DestroyStalePopLayer("PopExtrusion");
		pTVar3 = this.Text;
		NameFontCatalog.Apply(pTVar3, font);
		pTVar3 = this.Text;
		if (pTVar3 != null) {
			pTVar1 = pTVar3.m_fontAsset;
			bVar2 = ((Object)pTVar1 != null);
			if (!bVar2) {
				return;
			}
			pTVar3 = this.Text;
			pTVar4 = this.Text;
			if (((pTVar4 != null) &&(pTVar1 = pTVar4.m_fontAsset, pTVar1 != null)) &&(pTVar3 != null)) {
				pTVar3.set_fontSharedMaterial(pTVar1.m_Material) ;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600123E")]
	[Address(RVA = "0x57E83E0", Offset = "0x57E73E0", VA = "0x57E83E0")]
	private void ClearAllEffects()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgNameStyleChoicePreview.c (Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ClearAllEffects): clean
		uint uVar1;
		uint uVar2;
		NameEffectController __this_00;
		bool bVar3;
		TMP_Text __this_01;
		Object[] pSVar4;
		ulong uVar5;
		ulong uVar6;

		__this_01 = this.Text;
		if (__this_01 != null) {
			pSVar4 = __this_01.GetComponents<NameEffectController>();
			if (pSVar4 != null) {
				if (0 < (int)pSVar4.Length) {
					uVar5 = pSVar4.Length & 0xffffffff;
					uVar6 = 0;
					do {
						if (uVar5 <= uVar6) {
							throw new IndexOutOfRangeException();
						}
						__this_00 = (NameEffectController)pSVar4[uVar6];
						bVar3 = ((Object)__this_00 == null);
						if (!bVar3) {
							if (__this_00 == null) goto label_058e856c;
							__this_00.Clear();
							__this_00.enabled = false;
							bVar3 = Application.isPlaying;
							uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
							if (bVar3) {
								if (uVar2 == 0) {
								}
								Object.Destroy((Object)__this_00);
							}
							else {
								if (uVar2 == 0) {
								}
								Object.DestroyImmediate((Object)__this_00);
							}
						}
						uVar6 = uVar6 + 1;
						uVar1 = (uint)pSVar4.Length;
						uVar5 = (ulong)uVar1;
					} while ((long)uVar6 < (long)(int)uVar1);
				}
				this._effect = null;
				return;
			}
		}
	label_058e856c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600123F")]
	[Address(RVA = "0x57E8580", Offset = "0x57E7580", VA = "0x57E8580")]
	private void DestroyStalePopLayer(string name)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgNameStyleChoicePreview.c (Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$DestroyStalePopLayer): clean
		bool bVar1;
		TMP_Text __this_00;
		Transform pUVar2;
		Object pUVar3;

		__this_00 = this.Text;
		if ((__this_00 != null) &&(pUVar2 = __this_00.transform, pUVar2 != null)) {
			pUVar2 = pUVar2.parent;
			bVar1 = ((Object)pUVar2 == null);
			if (bVar1) {
				return;
			}
			if (pUVar2 != null) {
				pUVar2 = pUVar2.Find(name);
				bVar1 = ((Object)pUVar2 == null);
				if (bVar1) {
					return;
				}
				if ((typeof(Application)._2).cctor_finished_or_no_cctor == 0) {
					bVar1 = Application.isPlaying;
				}
				else {
					bVar1 = Application.isPlaying;
				}
				if (bVar1) {
					if (pUVar2 != null) {
						pUVar3 = (Object)pUVar2.gameObject;
						Object.Destroy(pUVar3);
						return;
					}
				}
				else if (pUVar2 != null) {
					pUVar3 = (Object)pUVar2.gameObject;
					Object.DestroyImmediate(pUVar3);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001240")]
	[Address(RVA = "0x57E86F0", Offset = "0x57E76F0", VA = "0x57E86F0")]
	private void ApplyVertexColors(TMP_TextInfo textInfo)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgNameStyleChoicePreview.c (Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$ApplyVertexColors): 13 lines keep C-only constructs
		ulong uVar1;
		uint uVar2;
		uint uVar3;
		Color[] pUVar4;
		TMP_CharacterInfo[] pTVar5;
		TMP_MeshInfo[] pTVar6;
		Vector3[] method_00;
		Color32[] pUVar7;
		bool bVar8;
		_struct_53532 _Var9;
		long lVar10;
		ulong uVar11;
		ulong uVar12;
		float fVar13;
		float fVar14;
		float fVar15;
		float fVar16;
		Color UVar17;
		float fStack_48;
		float fStack_44;
		Vector3[] pUStack_40;
		TMP_TextInfo pTStack_38;

		fStack_44 = 0.0;
		fStack_48 = 0.0;
		pUVar4 = this._colors;
		if ((pUVar4 != null) && (pUVar4.Length != 0)) {
			bVar8 = this.TryBounds(textInfo, ref fStack_44, ref fStack_48);
			fVar16 = fStack_44;
			if (bVar8) {
				if (textInfo == null) {
	label_058e8a31: ;
					throw new NullReferenceException();
				}
				if (0 < textInfo.characterCount) {
					fVar13 = fStack_48 - fStack_44;
					if (fVar13 <= 0.001) {
						fVar13 = 0.001;
					}
					lVar10 = 0x50;
					uVar11 = 0;
					pTStack_38 = textInfo;
					do {
						pTVar5 = textInfo.characterInfo;
						if (pTVar5 == null) goto label_058e8a31;
						if ((uint)pTVar5.Length <= uVar11) goto label_058e8a36;
						if ((*(byte)((long)(&pTVar5[0].color + -8) + lVar10) & 1) != 0) {
							pTVar6 = textInfo.meshInfo;
							if (pTVar6 == null) goto label_058e8a31;
							uVar2 = *(uint)((long)(&pTVar5[0].vertex_BL.color + -0x23) + lVar10);
							if ((uint)pTVar6.Length <= uVar2) {
	label_058e8a36: ;
								throw new IndexOutOfRangeException();
							}
							method_00 = pTVar6[(int)uVar2].vertices;
							if (method_00 == null) goto label_058e8a31;
							uVar3 = *(uint)((long)(&pTVar5[0].vertex_BL.color + -0x1e) + lVar10);
							uVar12 = (ulong)uVar3;
							pUVar7 = pTVar6[(int)uVar2].colors32;
							if (pUVar7 == null) {
								if (*(uint)&method_00.Length <= uVar3) goto label_058e8a36;
								fVar13 = (method_00[(int)uVar3].x - fVar16) / fVar13;
								fVar16 = 1.0;
								if (fVar13 <= 1.0) {
									fVar16 = fVar13;
								}
								UVar17 = this.Sample((float)(-(uint)(0.0 <= fVar13) & (uint)fVar16));
								il2cpp_runtime_helper_05334d00(UVar17._0_8_, UVar17._8_8_, 0);
								goto label_058e8a31;
							}
							pUStack_40 = method_00;
							if (*(uint)&method_00.Length <= uVar12) goto label_058e8a36;
							fVar14 = (method_00[(int)uVar3].x - fVar16) / fVar13;
							fVar15 = 1.0;
							if (fVar14 <= 1.0) {
								fVar15 = fVar14;
							}
							UVar17 = this.Sample((float)(-(uint)(0.0 <= fVar14) & (uint)fVar15)) ;
							_Var9.rgba = il2cpp_runtime_helper_05334d00(UVar17._0_8_, UVar17._8_8_, 0);
							if ((uint)pUVar7.Length <= uVar12) goto label_058e8a36;
							pUVar7[(int)uVar3]._overlap_0._at_rgba.rgba = _Var9.rgba;
							uVar1 = uVar12 + 1;
							if (*(uint)&pUStack_40.Length <= uVar1) goto label_058e8a36;
							fVar14 = (method_00[(int)uVar1].x - fVar16) / fVar13;
							fVar15 = 1.0;
							if (fVar14 <= 1.0) {
								fVar15 = fVar14;
							}
							UVar17 = this.Sample((float)(-(uint)(0.0 <= fVar14) & (uint)fVar15)) ;
							_Var9.rgba = il2cpp_runtime_helper_05334d00(UVar17._0_8_, UVar17._8_8_, 0);
							if ((uint)pUVar7.Length <= uVar1) goto label_058e8a36;
							pUVar7[(int)uVar1]._overlap_0._at_rgba.rgba = _Var9.rgba;
							uVar1 = uVar12 + 2;
							if (*(uint)&pUStack_40.Length <= uVar1) goto label_058e8a36;
							fVar14 = (method_00[(int)uVar1].x - fVar16) / fVar13;
							fVar15 = 1.0;
							if (fVar14 <= 1.0) {
								fVar15 = fVar14;
							}
							UVar17 = this.Sample((float)(-(uint)(0.0 <= fVar14) & (uint)fVar15)) ;
							_Var9.rgba = il2cpp_runtime_helper_05334d00(UVar17._0_8_, UVar17._8_8_, 0);
							if ((uint)pUVar7.Length <= uVar1) goto label_058e8a36;
							pUVar7[(int)uVar1]._overlap_0._at_rgba.rgba = _Var9.rgba;
							uVar12 = uVar12 + 3;
							if (*(uint)&pUStack_40.Length <= uVar12) goto label_058e8a36;
							fVar14 = (method_00[(int)uVar12].x - fVar16) / fVar13;
							fVar15 = 1.0;
							if (fVar14 <= 1.0) {
								fVar15 = fVar14;
							}
							UVar17 = this.Sample((float)(-(uint)(0.0 <= fVar14) & (uint)fVar15)) ;
							_Var9.rgba = il2cpp_runtime_helper_05334d00(UVar17._0_8_, 0);
							if ((uint)pUVar7.Length <= uVar12) goto label_058e8a36;
							pUVar7[(int)uVar12]._overlap_0._at_rgba.rgba = _Var9.rgba;
							textInfo = pTStack_38;
						}
						uVar11 = uVar11 + 1;
						lVar10 = lVar10 + 0x178;
					} while ((long)uVar11 < (long)textInfo.characterCount);
				}
			}
		}
		return;
	}

	[Token(Token = "0x6001241")]
	[Address(RVA = "0x57E8A40", Offset = "0x57E7A40", VA = "0x57E8A40")]
	private bool TryBounds(TMP_TextInfo textInfo, out float minX, out float maxX)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgNameStyleChoicePreview.c (Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$TryBounds): 21 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		TMP_CharacterInfo[] pTVar4;
		TMP_MeshInfo[] pTVar5;
		Vector3[] pUVar6;
		il2cpp_array_size_t iVar7;
		int iVar8;
		long lVar9;
		bool bVar10;
		float fVar11;
		float fVar12;

		*minX = INFINITY;
		*maxX = -INFINITY;
		if (textInfo == null) {
	label_058e8bd7: ;
			throw new NullReferenceException();
		}
		uVar1 = textInfo.characterCount;
		if ((int)uVar1 < 1) {
			fVar11 = -INFINITY;
		}
		else {
			pTVar4 = textInfo.characterInfo;
			if (pTVar4 == null) goto label_058e8bd7;
			iVar7 = pTVar4.Length;
			fVar11 = -INFINITY;
			lVar9 = 0;
			do {
				if ((ulong)(uint)iVar7 * 0x178 == lVar9) goto label_058e8bd2;
				if ((*(byte)((long)(&pTVar4[0].highlightState + 1) + lVar9 + 4) & 1) != 0) {
					pTVar5 = textInfo.meshInfo;
					if (pTVar5 == null) goto label_058e8bd7;
					uVar2 = *(uint)((long)(&pTVar4[0].vertex_BL.color + -0xf) + lVar9);
					if ((uint)pTVar5.Length <= uVar2) {
	label_058e8bd2: ;
						throw new IndexOutOfRangeException();
					}
					pUVar6 = pTVar5[(int)uVar2].vertices;
					if (pUVar6 == null) goto label_058e8bd7;
					uVar2 = *(uint)((long)(&pTVar4[0].vertex_BL.color + -10) + lVar9);
					uVar3 = (uint)pUVar6.Length;
					iVar8 = uVar3 - uVar2;
					bVar10 = iVar8 == 0;
					if (uVar3 < uVar2) {
						iVar8 = 0;
					}
					if (uVar3 < uVar2 || bVar10) goto label_058e8bd2;
					fVar11 = pUVar6[(int)uVar2].x;
					fVar12 = *minX;
					if (fVar11 <= *minX) {
						fVar12 = fVar11;
					}
					*minX = fVar12;
					fVar12 = *maxX;
					if (*maxX <= fVar11) {
						fVar12 = fVar11;
					}
					*maxX = fVar12;
					if (iVar8 == 1) goto label_058e8bd2;
					fVar11 = pUVar6[(int)(uVar2 + 1)].x;
					fVar12 = *minX;
					if (fVar11 <= *minX) {
						fVar12 = fVar11;
					}
					*minX = fVar12;
					fVar12 = *maxX;
					if (*maxX <= fVar11) {
						fVar12 = fVar11;
					}
					*maxX = fVar12;
					if (iVar8 == 2) goto label_058e8bd2;
					fVar11 = pUVar6[(int)(uVar2 + 2)].x;
					fVar12 = *minX;
					if (fVar11 <= *minX) {
						fVar12 = fVar11;
					}
					*minX = fVar12;
					fVar12 = *maxX;
					if (*maxX <= fVar11) {
						fVar12 = fVar11;
					}
					*maxX = fVar12;
					if (iVar8 == 3) goto label_058e8bd2;
					fVar12 = pUVar6[(int)(uVar2 + 3)].x;
					fVar11 = *minX;
					if (fVar12 <= *minX) {
						fVar11 = fVar12;
					}
					*minX = fVar11;
					fVar11 = *maxX;
					if (*maxX <= fVar12) {
						fVar11 = fVar12;
					}
					*maxX = fVar11;
				}
				lVar9 = lVar9 + 0x178;
			} while ((ulong)uVar1 * 0x178 != lVar9);
		}
		return *minX <= fVar11 && fVar11 != *minX;
	}

	[Token(Token = "0x6001242")]
	[Address(RVA = "0x57E8BE0", Offset = "0x57E7BE0", VA = "0x57E8BE0")]
	private Color Sample(float t)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgNameStyleChoicePreview.c (Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$Sample): clean
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		int iVar9;
		uint uVar10;
		uint uVar11;
		Color[] pUVar12;
		uint uVar13;
		uint uVar14;
		float fVar15;
		float fVar16;
		Color UVar17;

		pUVar12 = this._colors;
		if (pUVar12 != null) {
			iVar9 = (int)pUVar12.Length;
			if (iVar9 == 1) {
				return (Color)pUVar12[0];
			}
			if (Il2CppMethodInitialized_0753e7f6 == false) {
				Il2CppMethodInitialized_0753e7f6 = true;
				uVar10 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar10 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar10 == 0) {
				pUVar12 = this._colors;
			}
			else {
				pUVar12 = this._colors;
			}
			if (pUVar12 != null) {
				fVar15 = 1.0;
				if (t <= 1.0) {
					fVar15 = t;
				}
				fVar15 = (float)(iVar9 + -1) * (float)(-(uint)(0.0 <= t) & (uint)fVar15);
				fVar16 = floorf(fVar15);
				uVar11 = (uint)pUVar12.Length;
				uVar13 = uVar11 - 2;
				if ((int)fVar16 < (int)(uVar11 - 2)) {
					uVar13 = (int)fVar16;
				}
				if ((uVar11 <= uVar13) || (uVar14 = uVar13 + 1, uVar11 <= uVar14)) {
					throw new IndexOutOfRangeException();
				}
				uVar1 = pUVar12[(int)uVar13].r;
				uVar5 = pUVar12[(int)uVar13].g;
				uVar2 = pUVar12[(int)uVar13].b;
				uVar6 = pUVar12[(int)uVar13].a;
				uVar3 = pUVar12[(int)uVar14].r;
				uVar7 = pUVar12[(int)uVar14].g;
				uVar4 = pUVar12[(int)uVar14].b;
				uVar8 = pUVar12[(int)uVar14].a;
				fVar15 = fVar15 - (float)(int)uVar13;
				fVar16 = 1.0;
				if (fVar15 <= 1.0) {
					fVar16 = fVar15;
				}
				fVar16 = (float)(-(uint)(0.0 <= fVar15) & (uint)fVar16);
				UVar17.r = ((float)uVar3 - (float)uVar1) * fVar16 + (float)uVar1;
				UVar17.g = ((float)uVar7 - (float)uVar5) * fVar16 + (float)uVar5;
				UVar17.b = ((float)uVar4 - (float)uVar2) * fVar16 + (float)uVar2;
				UVar17.a = ((float)uVar8 - (float)uVar6) * fVar16 + (float)uVar6;
				return (Color)UVar17;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001243")]
	[Address(RVA = "0x57E8D60", Offset = "0x57E7D60", VA = "0x57E8D60")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgNameStyleChoicePreview.c (Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$OnDestroy): clean
		this.ClearEffect();
		this.ClearVertexColors();
		return;
	}

	[Token(Token = "0x6001244")]
	[Address(RVA = "0x57E8D80", Offset = "0x57E7D80", VA = "0x57E8D80")]
	public AottgNameStyleChoicePreview()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgNameStyleChoicePreview.c (Gisketch.Aottg2UI.Game.AottgNameStyleChoicePreview$$.ctor): clean
		base();
		return;
	}
}
