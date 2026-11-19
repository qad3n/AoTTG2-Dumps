// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgMobileUi
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgMobileUi.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using TMPro;
using UI;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002BB")]
internal static class AottgMobileUi
{
	[Token(Token = "0x4000DE5")]
	[FieldOffset(Offset = "0x0")]
	private static AottgInGameView _view;

	[Token(Token = "0x170001D5")]
	private static AottgInGameView View
	{
		[Token(Token = "0x6001087")]
		[Address(RVA = "0x57C4F90", Offset = "0x57C3F90", VA = "0x57C4F90")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMobileUi.c (Gisketch.Aottg2UI.Game.AottgMobileUi$$get_View): clean
			uint uVar1;
			AottgInGameView __this;

			if (Il2CppMethodInitialized_07545402 == false) {
				Il2CppMethodInitialized_07545402 = true;
				uVar1 = (typeof(AottgMobileUi)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgMobileUi)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				__this = AottgMobileUi._view;
			}
			else {
				__this = *(AottgInGameView*)(typeof(AottgMobileUi)).static_fields;
			}
			if (__this == null) {
				__this = new AottgInGameView();
				AottgMobileUi._view = __this;
			}
			return __this;
		}
	}

	[Token(Token = "0x6001086")]
	[Address(RVA = "0x57C4EA0", Offset = "0x57C3EA0", VA = "0x57C4EA0")]
	static AottgMobileUi()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMobileUi.c (Gisketch.Aottg2UI.Game.AottgMobileUi$$.cctor): 2 lines keep C-only constructs
		GisketchComponentRegistry __this;
		object @object;
		GisketchComponentFactory __this_00;

		if (Il2CppMethodInitialized_07545401 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchComponentRegistry)) ;
			Il2CppMethodInitialized_07545401 = true;
		}
		__this = GisketchComponentRegistry.Default;
		@object = (object)AottgMobileUi.c.__9;
		__this_00 = new GisketchComponentFactory(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgMobileUi_c_cctor_b__1_0);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Register("MobileRect", __this_00);
		return;
	}

	[Token(Token = "0x6001088")]
	[Address(RVA = "0x57C4D50", Offset = "0x57C3D50", VA = "0x57C4D50")]
	public static GameObject CreateRect(Transform parent, string name)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMobileUi.c (Gisketch.Aottg2UI.Game.AottgMobileUi$$CreateRect): 1 lines keep C-only constructs
		AottgInGameView __this;
		GisketchNodeDefinition __this_00;
		String pSVar1;
		GameObject __this_01;
		FlexLayout __this_02;

		__this = AottgMobileUi.View;
		__this_00 = il2cpp_codegen_object_new(typeof(GisketchNodeDefinition)) ;
		__this_00 = new GisketchNodeDefinition();
		if (__this_00 != null) {
			__this_00.type = "MobileRect";
			pSVar1 = String.Concat("AoTTG ", name);
			__this_00.id = pSVar1;
			if (__this != null) {
				__this_01 = __this.Build(parent, __this_00);
				if (__this_01 != null) {
					__this_02 = __this_01.GetComponent<FlexLayout>();
					if (__this_02 != null) {
						__this_02.enabled = false;
						return __this_01;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001089")]
	[Address(RVA = "0x57C5070", Offset = "0x57C4070", VA = "0x57C5070")]
	public static TMP_Text AddText(Transform parent, string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMobileUi.c (Gisketch.Aottg2UI.Game.AottgMobileUi$$AddText): 4 lines keep C-only constructs
		Vector2 value_00;
		uint uVar1;
		AottgInGameView __this;
		TMP_Text __this_00;
		FlexLayout __this_01;
		RectTransform __this_02;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_07545404 == false) {
			Il2CppMethodInitialized_07545404 = true;
			uVar1 = (typeof(AottgMobileUi)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgMobileUi);
		}
		else {
			uVar1 = (typeof(AottgMobileUi)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgMobileUi);
		}
		typeof(AottgMobileUi) = (AottgMobileUi)klass;
		if (uVar1 == 0) {
			__this = AottgMobileUi.View;
		}
		else {
			__this = AottgMobileUi.View;
		}
		if (((__this != null) &&(__this_00 = __this.Text(parent, value, 0.0, 40.0, "inGameText"), __this_00 != null)) &&(__this_01 = __this_00.GetComponent<FlexLayout>(), __this_01 != null)) {
			__this_01.enabled = false;
			__this_02 = __this_00.rectTransform;
			if (__this_02 != null) {
				__this_02.anchorMin = (Vector2)(Vector2.zeroVector);
				__this_02.anchorMax = (Vector2)(Vector2.oneVector);
				value_00 = (Vector2.zeroVector);
				__this_02.offsetMax = (Vector2)value_00;
				__this_02.offsetMin = (Vector2)value_00;
				__this_00.set_raycastTarget(false);
				return __this_00;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600108A")]
	[Address(RVA = "0x57C5250", Offset = "0x57C4250", VA = "0x57C5250")]
	public static void CreateControls(Transform parent, InGameMenu menu)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMobileUi.c (Gisketch.Aottg2UI.Game.AottgMobileUi$$CreateControls): clean
		return;
	}

	[Token(Token = "0x600108B")]
	[Address(RVA = "0x57C5260", Offset = "0x57C4260", VA = "0x57C5260")]
	public static void CreateControls(Transform parent, MapEditorMenu menu)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMobileUi.c (Gisketch.Aottg2UI.Game.AottgMobileUi$$CreateControls): clean
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMobileUi.c.

	// Gisketch.Aottg2UI.Game.AottgMobileUi.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgMobileUi.c();
		AottgMobileUi.c.__9 =(AottgMobileUi.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgMobileUi.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgMobileUi.<>c$$<.cctor>b__1_0: clean
	private bool c__cctor_b__1_0(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return true;
	}
}
