// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreview
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetChoicePreview.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000308")]
internal static class AottgGuildPresetChoicePreview
{
	[Token(Token = "0x4000F6C")]
	private const string Renderer = "profile-character-guild-preset-preview";

	[Token(Token = "0x4000F6D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Color DarkSurface;

	[Token(Token = "0x4000F6E")]
	[FieldOffset(Offset = "0x10")]
	private static bool _registered;

	[Token(Token = "0x60012FA")]
	[Address(RVA = "0x57F1940", Offset = "0x57F0940", VA = "0x57F1940")]
	public static void Register()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetChoicePreview.c (Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreview$$Register): 2 lines keep C-only constructs
		sbyte cVar1;
		uint uVar2;
		Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview_StaticFields pGVar3;
		Action<GisketchChoiceOptionRenderContext> __this;

		if (Il2CppMethodInitialized_075455cf == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgGuildPresetChoicePreview)) ;
			Il2CppMethodInitialized_075455cf = true;
			uVar2 = (typeof(AottgGuildPresetChoicePreview)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AottgGuildPresetChoicePreview)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			pGVar3 = typeof(AottgGuildPresetChoicePreview).static_fields;
			cVar1 = pGVar3._registered;
		}
		else {
			pGVar3 = (typeof(AottgGuildPresetChoicePreview)).static_fields;
			cVar1 = pGVar3._registered;
		}
		if (cVar1 != false) {
			return;
		}
		if (((typeof(AottgGuildPresetChoicePreview))._2). cctor_finished_or_no_cctor == 0) {
			pGVar3 = typeof(AottgGuildPresetChoicePreview).static_fields;
		}
		pGVar3._registered = true;
		__this = new Action<GisketchChoiceOptionRenderContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGuildPresetChoicePreview_Render);
		GisketchChoiceOptionRenderer.Register("profile-character-guild-preset-preview", __this);
		return;
	}

	[Token(Token = "0x60012FB")]
	[Address(RVA = "0x57F3630", Offset = "0x57F2630", VA = "0x57F3630")]
	public static void UseRenderer(GisketchNodeDefinition node)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetChoicePreview.c (Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreview$$UseRenderer): clean
		if (node == null) {
			return;
		}
		node.choiceOptionRenderer = "profile-character-guild-preset-preview";
		return;
	}

	[Token(Token = "0x60012FC")]
	[Address(RVA = "0x57F6CD0", Offset = "0x57F5CD0", VA = "0x57F6CD0")]
	private static void Render(GisketchChoiceOptionRenderContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetChoicePreview.c (Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreview$$Render): 7 lines keep C-only constructs
		TextMeshProUGUI pTVar1;
		Object x;
		bool bVar2;
		bool bVar3;
		GisketchDropdownItemFeedback __this;
		AottgGuildPresetChoicePreviewRuntime __this_00;
		GameObject pUVar4;
		String normal;
		String id;
		bool bVar5;
		AottgGuildPresetDefinition GStack_58;

		if (Il2CppMethodInitialized_075455d1 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgGuildPresetChoicePreview)) ;
			Il2CppMethodInitialized_075455d1 = true;
		}
		if (context == null) {
			return;
		}
		pTVar1 = context.Label;
		bVar2 = ((Object)pTVar1 == null);
		if (bVar2) {
			return;
		}
		AottgGuildPresetChoicePreview.ApplyDarkSurface(context);
		GStack_58.Kind = 0;
		GStack_58._20_4_ = 0;
		GStack_58.Sprite = null;
		GStack_58.Id = null;
		GStack_58.Label = null;
		GStack_58.ImageScale = 0.0;
		GStack_58._36_4_ = 0;
		bVar2 = AottgGuildPresetCatalog.TryGet(context.Value, ref GStack_58) ;
		bVar5 = GStack_58.Kind == 1;
		GStack_58.Kind = 0;
		GStack_58._20_4_ = 0;
		GStack_58.Sprite = null;
		GStack_58.Id = null;
		GStack_58.Label = null;
		GStack_58.ImageScale = 0.0;
		GStack_58._36_4_ = 0;
		bVar3 = AottgGuildPresetCatalog.TryGet(context.Value, ref GStack_58) ;
		if (bVar3) {
			id = context.Value;
			GStack_58.Kind = 0;
			GStack_58._20_4_ = 0;
			GStack_58.Sprite = null;
			GStack_58.Id = null;
			GStack_58.Label = null;
			GStack_58.ImageScale = 0.0;
			GStack_58._36_4_ = 0;
			bVar3 = AottgGuildPresetCatalog.TryGet(id, ref GStack_58);
			if (bVar3) {
				id = GStack_58.Label;
			}
		}
		else {
			id = context.Text;
		}
		x = (Object)context.Root;
		__this = null;
		bVar3 = (x != null);
		if (bVar3) {
			pUVar4 = context.Root;
			if (pUVar4 == null) goto label_058f6f4f;
			__this = pUVar4.GetComponent<GisketchDropdownItemFeedback>();
		}
		bVar3 = ((Object)__this != null);
		if (bVar3) {
			normal = id;
			if (bVar2 && bVar5) {
				normal = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			if (__this == null) goto label_058f6f4f;
			__this.SetLabelText(normal, normal, context.Enabled);
		}
		pTVar1 = context.Label;
		if (pTVar1 != null) {
			__this_00 = pTVar1.GetComponent<AottgGuildPresetChoicePreviewRuntime>() ;
			bVar2 = ((Object)__this_00 == null);
			if (bVar2) {
				pTVar1 = context.Label;
				if ((pTVar1 == null) ||(pUVar4 = pTVar1.gameObject, pUVar4 == null)) goto label_058f6f4f;
				__this_00 = pUVar4.AddComponent<AottgGuildPresetChoicePreviewRuntime>();
			}
			if (__this_00 != null) {
				__this_00.Configure(context.Value, id, context.Enabled);
				return;
			}
		}
	label_058f6f4f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60012FD")]
	[Address(RVA = "0x57F6F60", Offset = "0x57F5F60", VA = "0x57F6F60")]
	private static void ApplyDarkSurface(GisketchChoiceOptionRenderContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetChoicePreview.c (Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreview$$ApplyDarkSurface): 1 lines keep C-only constructs
		TextMeshProUGUI __this;
		Object x;
		GameObject __this_00;
		bool bVar1;
		Image pUVar2;
		Transform __this_01;
		String pSVar3;

		if (Il2CppMethodInitialized_075455d2 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgGuildPresetChoicePreview)) ;
			Il2CppMethodInitialized_075455d2 = true;
		}
		if (context != null) {
			if (context.ClosedValue == false) {
				x = (Object)context.Root;
				__this_01 = null;
				bVar1 = (x != null);
				if (bVar1) {
					__this_00 = context.Root;
					if (__this_00 == null) goto label_058f71f6;
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
	label_058f716f: ;
						pUVar2 = __this_01.GetComponent<Image>();
						bVar1 = ((Object)pUVar2 != null);
						if (bVar1) {
							if (pUVar2 == null) break;
							pUVar2.set_color((Color)(AottgGuildPresetChoicePreview. DarkSurface));
						}
					}
					else {
						pSVar3 = __this_01.name;
						if (pSVar3 == null) break;
						bVar1 = pSVar3.EndsWith("-options-scroll");
						if (bVar1) goto label_058f716f;
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
						pUVar2.set_color((Color)(AottgGuildPresetChoicePreview. DarkSurface));
						return;
					}
				}
			}
		}
	label_058f71f6: ;
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGuildPresetChoicePreview.c.

	// Gisketch.Aottg2UI.Game.AottgGuildPresetChoicePreview$$.cctor: 1 lines keep C-only constructs
	static AottgGuildPresetChoicePreview()
	{

		if (Il2CppMethodInitialized_075455d3 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgGuildPresetChoicePreview)) ;
			Il2CppMethodInitialized_075455d3 = true;
		}
		(AottgGuildPresetChoicePreview.DarkSurface).r = 0.14;
		(AottgGuildPresetChoicePreview.DarkSurface).g = 0.14;
		(AottgGuildPresetChoicePreview.DarkSurface).b = 0.14;
		(AottgGuildPresetChoicePreview.DarkSurface).a = 1.0;
		return;
	}
}
