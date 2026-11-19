// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCharacterNamePreview
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterNamePreview.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002ED")]
internal sealed class AottgCharacterNamePreview : AottgComponent
{
	[Token(Token = "0x4000EC3")]
	private const string NodeType = "CharacterNamePreview";

	[Token(Token = "0x4000EC4")]
	internal const float LabelFontSize = 20f;

	[Token(Token = "0x4000EC5")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000EC6")]
	[FieldOffset(Offset = "0x18")]
	private readonly bool _liveDialog;

	[Token(Token = "0x60011E7")]
	[Address(RVA = "0x57DD6E0", Offset = "0x57DC6E0", VA = "0x57DD6E0")]
	static AottgCharacterNamePreview()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterNamePreview.c (Gisketch.Aottg2UI.Game.AottgCharacterNamePreview$$.cctor): 2 lines keep C-only constructs
		GisketchComponentRegistry __this;
		GisketchComponentFactory __this_00;

		if (Il2CppMethodInitialized_075454f0 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchComponentRegistry)) ;
			Il2CppMethodInitialized_075454f0 = true;
		}
		__this = GisketchComponentRegistry.Default;
		__this_00 = new GisketchComponentFactory(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreview_BuildPreview);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Register("CharacterNamePreview", __this_00);
		return;
	}

	[Token(Token = "0x60011E8")]
	[Address(RVA = "0x57DD7A0", Offset = "0x57DC7A0", VA = "0x57DD7A0")]
	public AottgCharacterNamePreview(string id, bool liveDialog = false)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterNamePreview.c (Gisketch.Aottg2UI.Game.AottgCharacterNamePreview$$.ctor): clean
		base();
		this._id = id;
		this._liveDialog = liveDialog;
		return;
	}

	[Token(Token = "0x60011E9")]
	[Address(RVA = "0x57DD7D0", Offset = "0x57DC7D0", VA = "0x57DD7D0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterNamePreview.c (Gisketch.Aottg2UI.Game.AottgCharacterNamePreview$$Build): 3 lines keep C-only constructs
		GisketchNodeDefinition __this_00;
		String* ppSVar1;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar2;

		__this_00 = il2cpp_codegen_object_new(typeof(GisketchNodeDefinition)) ;
		__this_00 = new GisketchNodeDefinition();
		if (__this_00 != null) {
			__this_00.type = "CharacterNamePreview";
			__this_00.id = this._id;
			if (this._liveDialog == false) {
				ppSVar1 = *(String**)(g_data_07556758 + 0xb8);
			}
			else {
				ppSVar1 = &"live";
			}
			__this_00.value = *ppSVar1;
			width = AottgUi.Percent(100.0);
			height = AottgUi.Points(132.0);
			pGVar2 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			__this_00.layout = pGVar2;
			if (ui != null) {
				ui.Add(__this_00);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60011EA")]
	[Address(RVA = "0x57DD980", Offset = "0x57DC980", VA = "0x57DD980")]
	public static void Refresh(GameObject source)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterNamePreview.c (Gisketch.Aottg2UI.Game.AottgCharacterNamePreview$$Refresh): clean
		bool bVar1;
		uint uVar2;
		Transform pUVar3;
		Object[] pSVar4;
		uint uVar5;

		pUVar3 = null;
		bVar1 = ((Object)source != null);
		if (bVar1) {
			if ((source == null) ||(pUVar3 = source.transform, pUVar3 == null)) goto label_058dda8a;
			pUVar3 = pUVar3.root;
		}
		bVar1 = ((Object)pUVar3 == null);
		if (bVar1) {
			return;
		}
		if (pUVar3 != null) {
			pSVar4 = pUVar3.GetComponentsInChildren<AottgCharacterNamePreviewRuntime>(true);
			if (pSVar4 != null) {
				uVar2 = (uint)pSVar4.Length;
				if ((int)uVar2 < 1) {
					return;
				}
				uVar5 = 0;
				while(true) {
					if (uVar2 <= uVar5) {
						throw new IndexOutOfRangeException();
					}
					if ((AottgCharacterNamePreviewRuntime)pSVar4[(int)uVar5] ==null) break;
					(pSVar4[(int)uVar5]).Refresh();
					uVar5 = uVar5 + 1;
					uVar2 = (uint)pSVar4.Length;
					if ((int)uVar2 <= (int)uVar5) {
						return;
					}
				}
			}
		}
	label_058dda8a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60011EB")]
	[Address(RVA = "0x57DE050", Offset = "0x57DD050", VA = "0x57DE050")]
	private static bool BuildPreview(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterNamePreview.c (Gisketch.Aottg2UI.Game.AottgCharacterNamePreview$$BuildPreview): 1 lines keep C-only constructs
		GisketchTheme __this;
		GisketchUIState state;
		bool liveDialog;
		Image pUVar1;
		VerticalLayoutGroup __this_00;
		RectOffset __this_01;
		AottgCharacterNamePreviewRuntime __this_02;
		MethodInfo method_00;
		Color UVar2;

		if (go != null) {
			pUVar1 = go.AddComponent<Image>();
			if ((context != null) &&(__this = context.Theme, __this != null)) {
				UVar2.b = 0.13;
				UVar2.a = 1.0;
				UVar2.r = 0.13;
				UVar2.g = 0.13;
				UVar2 = __this.GetColor("characterNamePreviewBg", UVar2);
				if (pUVar1 != null) {
					pUVar1.set_color(UVar2);
					pUVar1.set_raycastTarget(false);
					__this_00 = go.AddComponent<VerticalLayoutGroup>();
					method_00 = (MethodInfo)&g_data_0000000a;
					__this_01 = new RectOffset(0xf, 0xf, 10, 10);
					if (__this_00 != null) {
						__this_00.padding = __this_01;
						__this_00.spacing = 2.0;
						__this_00.childAlignment = 4;
						__this_00.childControlWidth = true;
						__this_00.childControlHeight = true;
						__this_00.childForceExpandWidth = false;
						__this_00.childForceExpandHeight = false;
						__this_02 = go.AddComponent<AottgCharacterNamePreviewRuntime>();
						if (node != null) {
							state = context.State;
							liveDialog = (node.value == "live");
							if (__this_02 != null) {
								__this_02.Setup(state, liveDialog);
								return true;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}
}
