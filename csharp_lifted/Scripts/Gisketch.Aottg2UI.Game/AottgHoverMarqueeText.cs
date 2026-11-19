// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgHoverMarqueeText
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgHoverMarqueeText.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000207")]
public sealed class AottgHoverMarqueeText : AottgComponent
{
	[Token(Token = "0x4000ACB")]
	public const string NodeType = "AottgHoverMarqueeText";

	[Token(Token = "0x4000ACC")]
	[FieldOffset(Offset = "0x0")]
	private static bool _registered;

	[Token(Token = "0x4000ACD")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000ACE")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _text;

	[Token(Token = "0x6000C0D")]
	[Address(RVA = "0x5D83DC0", Offset = "0x5D82DC0", VA = "0x5D83DC0")]
	static AottgHoverMarqueeText()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHoverMarqueeText.c (Gisketch.Aottg2UI.Game.AottgHoverMarqueeText$$.cctor): clean
		AottgHoverMarqueeText.RegisterFactory();
		return;
	}

	[Token(Token = "0x6000C0E")]
	[Address(RVA = "0x5D81FF0", Offset = "0x5D80FF0", VA = "0x5D81FF0")]
	public static void RegisterFactory()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHoverMarqueeText.c (Gisketch.Aottg2UI.Game.AottgHoverMarqueeText$$RegisterFactory): 2 lines keep C-only constructs
		sbyte cVar1;
		uint uVar2;
		GisketchComponentRegistry __this;
		GisketchComponentFactory __this_00;

		if (Il2CppMethodInitialized_07548840 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchComponentRegistry)) ;
			Il2CppMethodInitialized_07548840 = true;
			uVar2 = (typeof(AottgHoverMarqueeText)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AottgHoverMarqueeText)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			cVar1 = AottgHoverMarqueeText._registered;
		}
		else {
			cVar1 = *(sbyte)(typeof(AottgHoverMarqueeText)).static_fields;
		}
		if (cVar1 != false) {
			return;
		}
		if (((typeof(GisketchComponentRegistry))._2). cctor_finished_or_no_cctor == 0) {
		}
		__this = GisketchComponentRegistry.Default;
		__this_00 = new GisketchComponentFactory(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeText_BuildRuntime) ;
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Register("AottgHoverMarqueeText", __this_00);
		AottgHoverMarqueeText._registered = true;
		return;
	}

	[Token(Token = "0x6000C0F")]
	[Address(RVA = "0x5D83DD0", Offset = "0x5D82DD0", VA = "0x5D83DD0")]
	public AottgHoverMarqueeText(string id, string text)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHoverMarqueeText.c (Gisketch.Aottg2UI.Game.AottgHoverMarqueeText$$.ctor): clean
		base();
		this._id = id;
		if (text == null) {
			text = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		this._text = text;
		return;
	}

	[Token(Token = "0x6000C10")]
	[Address(RVA = "0x5D83E30", Offset = "0x5D82E30", VA = "0x5D83E30", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHoverMarqueeText.c (Gisketch.Aottg2UI.Game.AottgHoverMarqueeText$$Build): 1 lines keep C-only constructs
		GisketchNodeDefinition __this_00;
		GisketchLength width;
		GisketchLength height;
		GisketchLength minWidth;
		GisketchLayoutDefinition pGVar1;

		__this_00 = il2cpp_codegen_object_new(typeof(GisketchNodeDefinition)) ;
		__this_00 = new GisketchNodeDefinition();
		if (__this_00 != null) {
			__this_00.type = "AottgHoverMarqueeText";
			__this_00.id = this._id;
			__this_00.text = this._text;
			__this_00.style = "text";
			__this_00.value = "text";
			width = AottgUi.Percent(100.0);
			height = AottgUi.Percent(100.0);
			minWidth = AottgUi.Points(0.0);
			pGVar1 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, minWidth, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
			__this_00.layout = pGVar1;
			if (ui != null) {
				ui.Add(__this_00);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000C11")]
	[Address(RVA = "0x5D83FF0", Offset = "0x5D82FF0", VA = "0x5D83FF0")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgHoverMarqueeText.c (Gisketch.Aottg2UI.Game.AottgHoverMarqueeText$$BuildRuntime): 3 lines keep C-only constructs
		GisketchTheme pGVar1;
		TextMeshProUGUI pTVar2;
		bool bVar3;
		AottgHoverMarqueeTextRuntime __this;
		GisketchStyleDefinition style;
		MethodInfo method_00;
		String* ppSVar4;

		if (go != null) {
			go.AddComponent<RectMask2D>();
			__this = go.AddComponent<AottgHoverMarqueeTextRuntime>();
			if (((node != null) &&(context != null)) &&(pGVar1 = context.Theme, pGVar1 != null)) {
				method_00 = (MethodInfo)node.text;
				style = pGVar1.GetStyle(node.style) ;
				pGVar1 = context.Theme;
				bVar3 = String.IsNullOrEmpty(node.value);
				if (__this != null) {
					if (bVar3) {
						ppSVar4 = &"text";
					}
					else {
						ppSVar4 = &node.value;
					}
					__this.CreateText(style, pGVar1, *ppSVar4);
					pTVar2 = __this._text;
					if (method_00 == null) {
						method_00 = (MethodInfo)**(ulong*)(g_data_07556758 + 0xb8);
					}
					if (pTVar2 != null) {
						pTVar2.set_text((String)method_00);
						__this.RegisterParent();
						__this.RefreshMarquee();
						return true;
					}
				}
			}
		}
		throw new NullReferenceException();
	}
}
