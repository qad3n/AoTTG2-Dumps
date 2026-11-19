// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterStyleChoicePreview.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002F2")]
internal static class AottgCharacterStyleChoicePreview
{
	[Token(Token = "0x4000EEA")]
	private const string EffectRenderer = "profile-character-effect-preview";

	[Token(Token = "0x4000EEB")]
	private const string FontRenderer = "profile-character-font-preview";

	[Token(Token = "0x4000EEC")]
	private const string UiFont = "Aottg2";

	[Token(Token = "0x4000EED")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] TwoGradient;

	[Token(Token = "0x4000EEE")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string[] FourGradient;

	[Token(Token = "0x4000EEF")]
	[FieldOffset(Offset = "0x10")]
	private static readonly Color DarkSurface;

	[Token(Token = "0x4000EF0")]
	[FieldOffset(Offset = "0x20")]
	private static bool _registered;

	[Token(Token = "0x6001229")]
	[Address(RVA = "0x57E2C10", Offset = "0x57E1C10", VA = "0x57E2C10")]
	public static void Register()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterStyleChoicePreview.c (Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$Register): 2 lines keep C-only constructs
		sbyte cVar1;
		uint uVar2;
		Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview_StaticFields pGVar3;
		Action<GisketchChoiceOptionRenderContext> pSVar4;

		if (Il2CppMethodInitialized_0754552a == false) {
			Il2CppMethodInitialized_0754552a = true;
			uVar2 = (typeof(AottgCharacterStyleChoicePreview)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AottgCharacterStyleChoicePreview)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			pGVar3 = typeof(AottgCharacterStyleChoicePreview).static_fields;
			cVar1 = pGVar3._registered;
		}
		else {
			pGVar3 = (typeof(AottgCharacterStyleChoicePreview)).static_fields;
			cVar1 = pGVar3._registered;
		}
		if (cVar1 != false) {
			return;
		}
		if (((typeof(AottgCharacterStyleChoicePreview))._2). cctor_finished_or_no_cctor == 0) {
			pGVar3 = typeof(AottgCharacterStyleChoicePreview).static_fields;
		}
		pGVar3._registered = true;
		pSVar4 = new Action<GisketchChoiceOptionRenderContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview_RenderEffect);
		GisketchChoiceOptionRenderer.Register("profile-character-effect-preview", pSVar4);
		pSVar4 = new Action<GisketchChoiceOptionRenderContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview_RenderFont);
		GisketchChoiceOptionRenderer.Register("profile-character-font-preview", pSVar4);
		return;
	}

	[Token(Token = "0x600122A")]
	[Address(RVA = "0x57E6800", Offset = "0x57E5800", VA = "0x57E6800")]
	public static void UseEffectRenderer(GisketchNodeDefinition node)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterStyleChoicePreview.c (Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$UseEffectRenderer): clean
		if (node == null) {
			return;
		}
		node.choiceOptionRenderer = "profile-character-effect-preview";
		return;
	}

	[Token(Token = "0x600122B")]
	[Address(RVA = "0x57E6850", Offset = "0x57E5850", VA = "0x57E6850")]
	public static void UseFontRenderer(GisketchNodeDefinition node)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterStyleChoicePreview.c (Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$UseFontRenderer): clean
		if (node == null) {
			return;
		}
		node.choiceOptionRenderer = "profile-character-font-preview";
		return;
	}

	[Token(Token = "0x600122C")]
	[Address(RVA = "0x57E6DF0", Offset = "0x57E5DF0", VA = "0x57E6DF0")]
	private static void RenderEffect(GisketchChoiceOptionRenderContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterStyleChoicePreview.c (Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$RenderEffect): 5 lines keep C-only constructs
		uint uVar1;
		int effect;
		bool bVar2;
		uint in_EAX;
		AottgNameStyleChoicePreview __this;
		Color[] pUVar3;
		String[] colors;
		String* method_00;
		String font;
		MethodInfo pMVar4;
		ulong uStack_28;

		uStack_28._0_4_ = in_EAX;
		uStack_28 = (ulong)(uint)uStack_28;
		__this = AottgCharacterStyleChoicePreview.Preview(context);
		pMVar4 = null;
		bVar2 = ((Object)__this == null);
		if (bVar2) {
			return;
		}
		AottgCharacterStyleChoicePreview.ApplyDarkSurface(context);
		if (context != null) {
			bVar2 = context.Enabled;
			pMVar4 = (MethodInfo)(ulong)bVar2;
			AottgCharacterStyleChoicePreview.SetFeedback(context, bVar2);
			if (context.Enabled == false) {
				if (__this != null) {
					__this.ConfigureDisabled();
					return;
				}
			}
			else {
				bVar2 = (context.Value == "Color");
				font = "Aottg2";
				if (bVar2) {
					if (__this != null) {
						pUVar3 = (Color[])new Color[2];
						if (pUVar3 != null) {
							uVar1 = (uint)pUVar3.Length;
							if (uVar1 != 0) {
								pUVar3[0].r = 1.0;
								pUVar3[0].g = 1.0;
								pUVar3[0].b = 1.0;
								pUVar3[0].a = 1.0;
								if (uVar1 != 1) {
									pUVar3[1].r = 1.0;
									pUVar3[1].g = 1.0;
									pUVar3[1].b = 1.0;
									pUVar3[1].a = 1.0;
									goto label_058e703f;
								}
							}
							throw new IndexOutOfRangeException();
						}
					}
				}
				else {
					pMVar4 = (MethodInfo *)"TwoColorGradient";
					bVar2 = (context.Value == "TwoColorGradient");
					if (bVar2) {
						if ((typeof(AottgCharacterStyleChoicePreview)._2). cctor_finished_or_no_cctor == 0) {
						}
						pUVar3 = AottgCharacterStyleChoicePreview.Parse((IList<string>)typeof(AottgCharacterStyleChoicePreview).static_fields .TwoGradient);
						font = "Aottg2";
					}
					else {
						pMVar4 = (MethodInfo *)"FourColorGradient";
						bVar2 = (context.Value == "FourColorGradient");
						if (!bVar2) {
							pMVar4 = (MethodInfo)((long)&uStack_28 + 4);
							bVar2 = NameEffectPresets.TryResolve(context.Value, (int)pMVar4);
							if (bVar2) {
								effect = uStack_28._4_4_;
								pMVar4 = null;
								colors = AottgCharacterEffectUi.PresetColors(context.Value);
								if ((typeof(AottgCharacterStyleChoicePreview)._2). cctor_finished_or_no_cctor == 0) {
								}
								pUVar3 = AottgCharacterStyleChoicePreview.Parse((IList<string>)colors);
								if (__this != null) {
									__this.ConfigureEffect(effect, pUVar3, "Aottg2");
									return;
								}
							}
							else if (__this != null) {
								__this.ConfigureDisabled();
								return;
							}
							goto label_058e70c3;
						}
						if ((typeof(AottgCharacterStyleChoicePreview)._2). cctor_finished_or_no_cctor == 0) {
						}
						pUVar3 = AottgCharacterStyleChoicePreview.Parse((IList<string>)typeof(AottgCharacterStyleChoicePreview).static_fields .FourGradient);
						font = "Aottg2";
					}
					"Aottg2" = font;
					if (__this != null) {
						method_00 = &"Aottg2";
	label_058e703f: ;
						__this.ConfigureGradient(pUVar3, font);
						return;
					}
				}
			}
		}
	label_058e70c3: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600122D")]
	[Address(RVA = "0x57E7BF0", Offset = "0x57E6BF0", VA = "0x57E7BF0")]
	private static void RenderFont(GisketchChoiceOptionRenderContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterStyleChoicePreview.c (Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$RenderFont): clean
		bool bVar1;
		AottgNameStyleChoicePreview __this;

		__this = AottgCharacterStyleChoicePreview.Preview(context);
		bVar1 = ((Object)__this == null);
		if (bVar1) {
			return;
		}
		AottgCharacterStyleChoicePreview.ApplyDarkSurface(context);
		if (context != null) {
			bVar1 = context.Enabled;
			AottgCharacterStyleChoicePreview.SetFeedback(context, bVar1);
			if (context.Enabled == false) {
				if (__this != null) {
					__this.ConfigureDisabled();
					return;
				}
			}
			else if (__this != null) {
				__this.ConfigureFont(context.Value);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600122E")]
	[Address(RVA = "0x57E70D0", Offset = "0x57E60D0", VA = "0x57E70D0")]
	private static AottgNameStyleChoicePreview Preview(GisketchChoiceOptionRenderContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterStyleChoicePreview.c (Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$Preview): clean
		TextMeshProUGUI pTVar1;
		bool bVar2;
		AottgNameStyleChoicePreview pGVar3;
		GameObject __this;

		if (context != null) {
			pTVar1 = context.Label;
			bVar2 = ((Object)pTVar1 == null);
			if (!bVar2) {
				pTVar1 = context.Label;
				if (pTVar1 != null) {
					pTVar1.set_text(context.Text);
					pTVar1 = context.Label;
					if (pTVar1 != null) {
						pGVar3 = pTVar1.GetComponent<AottgNameStyleChoicePreview>();
						bVar2 = ((Object)pGVar3 == null);
						if (!bVar2) {
							return pGVar3;
						}
						pTVar1 = context.Label;
						if ((pTVar1 != null) &&(__this = pTVar1.gameObject, __this != null)) {
							pGVar3 = __this.AddComponent<AottgNameStyleChoicePreview>();
							return pGVar3;
						}
					}
				}
				throw new NullReferenceException();
			}
		}
		return null;
	}

	[Token(Token = "0x600122F")]
	[Address(RVA = "0x57E74A0", Offset = "0x57E64A0", VA = "0x57E74A0")]
	private static void SetFeedback(GisketchChoiceOptionRenderContext context, bool ownsColor)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterStyleChoicePreview.c (Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$SetFeedback): clean
		Object x;
		GameObject __this;
		String normal;
		bool bVar1;
		GisketchDropdownItemFeedback __this_00;

		if (context != null) {
			x = (Object)context.Root;
			__this_00 = null;
			bVar1 = (x != null);
			if (bVar1) {
				__this = context.Root;
				if (__this == null) goto label_058e757e;
				__this_00 = __this.GetComponent<GisketchDropdownItemFeedback>();
			}
			bVar1 = ((Object)__this_00 != null);
			if (!bVar1) {
				return;
			}
			if (__this_00 != null) {
				normal = context.Text;
				__this_00.SetLabelText(normal, normal, (bool)(ownsColor & context.Enabled));
				return;
			}
		}
	label_058e757e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001230")]
	[Address(RVA = "0x57E7200", Offset = "0x57E6200", VA = "0x57E7200")]
	private static void ApplyDarkSurface(GisketchChoiceOptionRenderContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterStyleChoicePreview.c (Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$ApplyDarkSurface): clean
		TextMeshProUGUI __this;
		Object x;
		GameObject __this_00;
		bool bVar1;
		Image pUVar2;
		Transform __this_01;
		String pSVar3;

		if (context != null) {
			if (context.ClosedValue == false) {
				x = (Object)context.Root;
				__this_01 = null;
				bVar1 = (x != null);
				if (bVar1) {
					__this_00 = context.Root;
					if (__this_00 == null) goto label_058e7497;
					__this_01 = __this_00.transform;
				}
				while(true) {
					bVar1 = ((Object)__this_01 != null);
					if (!bVar1) {
						return;
					}
					if ((__this_01 == null) ||(pSVar3 = __this_01.name, pSVar3 == null)) break;
					bVar1 = pSVar3.EndsWith("-popover");
					if (bVar1) {
	label_058e740f: ;
						pUVar2 = __this_01.GetComponent<Image>();
						bVar1 = ((Object)pUVar2 != null);
						if (bVar1) {
							if ((typeof(AottgCharacterStyleChoicePreview)._2). cctor_finished_or_no_cctor == 0) {
							}
							if (pUVar2 == null) break;
							pUVar2.set_color((Color)(typeof(AottgCharacterStyleChoicePreview).static_fields .DarkSurface));
						}
					}
					else {
						pSVar3 = __this_01.name;
						if (pSVar3 == null) break;
						bVar1 = pSVar3.EndsWith("-options-scroll");
						if (bVar1) goto label_058e740f;
					}
					__this_01 = __this_01.parent;
				}
			}
			else {
				__this = context.Label;
				if (__this != null) {
					pUVar2 = __this.GetComponentInParent<Image>() ;
					bVar1 = ((Object)pUVar2 != null);
					if (!bVar1) {
						return;
					}
					if (pUVar2 != null) {
						pUVar2.set_color((Color)(AottgCharacterStyleChoicePreview. DarkSurface));
						return;
					}
				}
			}
		}
	label_058e7497: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001231")]
	[Address(RVA = "0x57E7740", Offset = "0x57E6740", VA = "0x57E7740")]
	private static Color[] Parse(IList<string> colors)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterStyleChoicePreview.c (Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$Parse): 3 lines keep C-only constructs
		Color pUVar1;
		IList<string> pSVar2;
		bool bVar4;
		uint length;
		int iVar5;
		Color[] pUVar7;
		String htmlString;
		ulong uVar10;
		float fVar11;
		float fVar12;
		float fVar13;
		float fVar14;
		Color local_48;

		if (colors == null) {
	label_058e7983: ;
			throw new NullReferenceException();
		}
		pSVar2 = colors.klass;
		uVar10 = (ulong)(pSVar2._2).interface_offsets_count;
		length = colors.CopyTo();
		pUVar7 = (Color[])new Color[length];
		uVar10 = 0;
		do {
			pSVar2 = colors.klass;
			iVar5 = colors.CopyTo();
			if ((long)iVar5 <= (long)uVar10) {
				return pUVar7;
			}
			pSVar2 = colors.klass;
			htmlString = colors.CopyTo((int32_t)uVar10);
			if ((typeof(AottgCharacterStyleChoicePreview)._2).cctor_finished_or_no_cctor == 0 ) {
			}
			local_48.r = 0.0;
			local_48.g = 0.0;
			local_48.b = 0.0;
			local_48.a = 0.0;
			bVar4 = ColorUtility.TryParseHtmlString(htmlString, ref local_48);
			if (bVar4) {
				fVar11 = local_48.r;
				fVar12 = local_48.g;
				fVar13 = local_48.b;
				fVar14 = local_48.a;
			}
			else {
				fVar11 = 1.0;
				fVar12 = 1.0;
				fVar13 = fVar11;
				fVar14 = fVar12;
			}
			if (pUVar7 == null) goto label_058e7983;
			if ((uint)pUVar7.Length <= uVar10) {
				throw new IndexOutOfRangeException();
			}
			pUVar1 = pUVar7.m_Items + uVar10;
			pUVar1.r = fVar11;
			pUVar1.g = fVar12;
			pUVar1.b = fVar13;
			pUVar1.a = fVar14;
			uVar10 = uVar10 + 1;
		} while(true);
	}

	[Token(Token = "0x6001232")]
	[Address(RVA = "0x57E7DC0", Offset = "0x57E6DC0", VA = "0x57E7DC0")]
	private static Color Parse(string hex)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterStyleChoicePreview.c (Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$Parse): clean
		Color UVar1;
		bool bVar2;
		Color UVar3;
		Color UStack_18;

		UStack_18.r = 0.0;
		UStack_18.g = 0.0;
		UStack_18.b = 0.0;
		UStack_18.a = 0.0;
		bVar2 = ColorUtility.TryParseHtmlString(hex, ref UStack_18);
		if (bVar2) {
			UVar1.b = UStack_18.b;
			UVar1.a = UStack_18.a;
			UVar1.r = UStack_18.r;
			UVar1.g = UStack_18.g;
			return (Color)UVar1;
		}
		UVar3.b = 1.0;
		UVar3.a = 1.0;
		UVar3.r = 1.0;
		UVar3.g = 1.0;
		return (Color)UVar3;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterStyleChoicePreview.c.

	// Gisketch.Aottg2UI.Game.AottgCharacterStyleChoicePreview$$.cctor: clean
	static AottgCharacterStyleChoicePreview()
	{
		Gisketch_Aottg2UI_Game_AottgCharacterStyleChoicePreview_StaticFields pGVar1;
		String[] pSVar2;

		pSVar2 = (String[])new string[2];
		if (pSVar2 == null) {
	label_058e7fc1: ;
			throw new NullReferenceException();
		}
		if ((int)pSVar2.Length != 0) {
			pSVar2[0] = "#B7F8C8FF";
			if ((pSVar2.Length & 0xfffffffe) != 0) {
				pSVar2[1] = "#8CEBFFFF";
				AottgCharacterStyleChoicePreview.TwoGradient = pSVar2;
				pSVar2 = (String[])new string[4];
				if (pSVar2 == null) goto label_058e7fc1;
				if ((int)pSVar2.Length != 0) {
					pSVar2[0] = "#B7F8C8FF";
					if ((pSVar2.Length & 0xfffffffe) != 0) {
						pSVar2[1] = "#A8F5D6FF";
						if (2 < (uint)pSVar2.Length) {
							pSVar2[2] = "#97F0E8FF";
							if ((pSVar2.Length & 0xfffffffc) != 0) {
								pSVar2[3] = "#8CEBFFFF";
								pGVar1 = typeof(AottgCharacterStyleChoicePreview).static_fields;
								pGVar1.FourGradient = pSVar2;
								pGVar1 = typeof(AottgCharacterStyleChoicePreview).static_fields;
								(pGVar1.DarkSurface).r = 0.14;
								(pGVar1.DarkSurface).g = 0.14;
								(pGVar1.DarkSurface).b = 0.14;
								(pGVar1.DarkSurface).a = 1.0;
								return;
							}
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}
}
