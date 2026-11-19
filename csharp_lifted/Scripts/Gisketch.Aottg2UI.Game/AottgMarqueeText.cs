// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgMarqueeText
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgMarqueeText.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200020F")]
internal sealed class AottgMarqueeText : AottgComponent
{
	[Token(Token = "0x4000AE7")]
	private const string NodeType = "AottgMarqueeText";

	[Token(Token = "0x4000AE8")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000AE9")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _stateKey;

	[Token(Token = "0x4000AEA")]
	[FieldOffset(Offset = "0x20")]
	private readonly string _fallback;

	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x5D867A0", Offset = "0x5D857A0", VA = "0x5D867A0")]
	static AottgMarqueeText()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMarqueeText.c (Gisketch.Aottg2UI.Game.AottgMarqueeText$$.cctor): 2 lines keep C-only constructs
		GisketchComponentRegistry __this;
		GisketchComponentFactory __this_00;

		if (Il2CppMethodInitialized_0754885d == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchComponentRegistry)) ;
			Il2CppMethodInitialized_0754885d = true;
		}
		__this = GisketchComponentRegistry.Default;
		__this_00 = new GisketchComponentFactory(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgMarqueeText_BuildRuntime);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Register("AottgMarqueeText", __this_00);
		return;
	}

	[Token(Token = "0x6000C44")]
	[Address(RVA = "0x5D856C0", Offset = "0x5D846C0", VA = "0x5D856C0")]
	public AottgMarqueeText(string id, string stateKey)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMarqueeText.c (Gisketch.Aottg2UI.Game.AottgMarqueeText$$.ctor): clean
		String pSVar1;

		pSVar1 = (String)**(long*)(g_data_07556758 + 0xb8);
		base();
		this._id = id;
		this._stateKey = stateKey;
		if (pSVar1 == null) {
			pSVar1 = (String)**(long*)(g_data_07556758 + 0xb8);
		}
		this._fallback = pSVar1;
		return;
	}

	[Token(Token = "0x6000C45")]
	[Address(RVA = "0x5D86860", Offset = "0x5D85860", VA = "0x5D86860")]
	public AottgMarqueeText(string id, string stateKey, string fallback)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMarqueeText.c (Gisketch.Aottg2UI.Game.AottgMarqueeText$$.ctor): clean
		base();
		this._id = id;
		this._stateKey = stateKey;
		if (fallback == null) {
			fallback = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		this._fallback = fallback;
		return;
	}

	[Token(Token = "0x6000C46")]
	[Address(RVA = "0x5D868E0", Offset = "0x5D858E0", VA = "0x5D868E0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMarqueeText.c (Gisketch.Aottg2UI.Game.AottgMarqueeText$$Build): 1 lines keep C-only constructs
		GisketchNodeDefinition __this_00;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar1;

		__this_00 = il2cpp_codegen_object_new(typeof(GisketchNodeDefinition)) ;
		__this_00 = new GisketchNodeDefinition();
		if (__this_00 != null) {
			__this_00.type = "AottgMarqueeText";
			__this_00.id = this._id;
			__this_00.text = this._fallback;
			__this_00.textKey = this._stateKey;
			__this_00.style = "text";
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

	[Token(Token = "0x6000C47")]
	[Address(RVA = "0x5D86A90", Offset = "0x5D85A90", VA = "0x5D86A90")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMarqueeText.c (Gisketch.Aottg2UI.Game.AottgMarqueeText$$BuildRuntime): clean
		GisketchTheme __this;
		GisketchUIState state;
		String fallback;
		String stateKey;
		AottgMarqueeTextRuntime __this_00;
		GisketchStyleDefinition style;

		if (go != null) {
			go.AddComponent<RectMask2D>();
			__this_00 = go.AddComponent<AottgMarqueeTextRuntime>();
			if (((context != null) &&(node != null)) &&(__this = context.Theme, __this != null)) {
				state = context.State;
				fallback = node.text;
				stateKey = node.textKey;
				style = __this.GetStyle(node.style) ;
				if (__this_00 != null) {
					__this_00.Setup(state, stateKey, fallback, style, context.Theme);
					return true;
				}
			}
		}
		throw new NullReferenceException();
	}
}
