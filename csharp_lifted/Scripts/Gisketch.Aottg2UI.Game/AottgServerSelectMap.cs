// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgServerSelectMap
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgServerSelectMap.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002DF")]
public sealed class AottgServerSelectMap : AottgComponent
{
	[Token(Token = "0x4000E80")]
	public const string NodeType = "AottgServerSelectMap";

	[Token(Token = "0x4000E81")]
	[FieldOffset(Offset = "0x0")]
	private static bool _registered;

	[Token(Token = "0x6001162")]
	[Address(RVA = "0x57D2F70", Offset = "0x57D1F70", VA = "0x57D2F70")]
	static AottgServerSelectMap()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgServerSelectMap.c (Gisketch.Aottg2UI.Game.AottgServerSelectMap$$.cctor): clean
		AottgServerSelectMap.RegisterFactory();
		return;
	}

	[Token(Token = "0x6001163")]
	[Address(RVA = "0x57D2F80", Offset = "0x57D1F80", VA = "0x57D2F80")]
	public static void RegisterFactory()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgServerSelectMap.c (Gisketch.Aottg2UI.Game.AottgServerSelectMap$$RegisterFactory): 2 lines keep C-only constructs
		sbyte cVar1;
		uint uVar2;
		GisketchComponentRegistry __this;
		GisketchComponentFactory __this_00;

		if (Il2CppMethodInitialized_07545489 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchComponentRegistry)) ;
			Il2CppMethodInitialized_07545489 = true;
			uVar2 = (typeof(AottgServerSelectMap)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AottgServerSelectMap)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			cVar1 = AottgServerSelectMap._registered;
		}
		else {
			cVar1 = *(sbyte)(typeof(AottgServerSelectMap)).static_fields;
		}
		if (cVar1 != false) {
			return;
		}
		if (((typeof(GisketchComponentRegistry))._2). cctor_finished_or_no_cctor == 0) {
		}
		__this = GisketchComponentRegistry.Default;
		__this_00 = new GisketchComponentFactory(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgServerSelectMap_BuildRuntime);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Register("AottgServerSelectMap", __this_00);
		AottgServerSelectMap._registered = true;
		return;
	}

	[Token(Token = "0x6001164")]
	[Address(RVA = "0x57D30B0", Offset = "0x57D20B0", VA = "0x57D30B0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgServerSelectMap.c (Gisketch.Aottg2UI.Game.AottgServerSelectMap$$Build): 1 lines keep C-only constructs
		GisketchNodeDefinition __this_00;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar1;

		__this_00 = il2cpp_codegen_object_new(typeof(GisketchNodeDefinition)) ;
		__this_00 = new GisketchNodeDefinition();
		if (__this_00 != null) {
			__this_00.type = "AottgServerSelectMap";
			__this_00.id = "server-select-map";
			width = AottgUi.Percent(100.0);
			height = AottgUi.Percent(100.0);
			pGVar1 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			__this_00.layout = pGVar1;
			if (ui != null) {
				ui.Add(__this_00);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001165")]
	[Address(RVA = "0x57D3220", Offset = "0x57D2220", VA = "0x57D3220")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgServerSelectMap.c (Gisketch.Aottg2UI.Game.AottgServerSelectMap$$BuildRuntime): 4 lines keep C-only constructs
		GisketchTheme pGVar1;
		AottgServerSelectMapRuntime __this;
		MethodInfo method_00;
		Color UVar2;
		Color UVar3;
		Color UVar4;

		if (go != null) {
			__this = go.AddComponent<AottgServerSelectMapRuntime>();
			if ((context != null) &&(pGVar1 = context.Theme, pGVar1 != null)) {
				UVar2.b = (float)(int)g_data_01005870;
				UVar2.a = (float)g_data_01005870._4_4_;
				UVar2.r = (float)(int)g_data_01005870;
				UVar2.g = (float)g_data_01005870._4_4_;
				UVar2 = pGVar1.GetColor("text", UVar2);
				pGVar1 = context.Theme;
				if (pGVar1 != null) {
					UVar3.b = (float)(int)g_data_01005870;
					UVar3.a = (float)g_data_01005870._4_4_;
					UVar3.r = (float)(int)g_data_01005870;
					UVar3.g = (float)g_data_01005870._4_4_;
					UVar3 = pGVar1.GetColor("primary", UVar3);
					pGVar1 = context.Theme;
					if (pGVar1 != null) {
						UVar4.b = 1.0;
						UVar4.a = 1.0;
						UVar4.r = 1.0;
						UVar4.g = 1.0;
						method_00 = (MethodInfo *)"buttonText";
						UVar4 = pGVar1.GetColor("buttonText", UVar4);
						if (__this != null) {
							__this.Setup(UVar2, UVar3, UVar4);
							return true;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001166")]
	[Address(RVA = "0x57D38C0", Offset = "0x57D28C0", VA = "0x57D38C0")]
	public AottgServerSelectMap()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgServerSelectMap.c (Gisketch.Aottg2UI.Game.AottgServerSelectMap$$.ctor): clean
		base();
		return;
	}
}
