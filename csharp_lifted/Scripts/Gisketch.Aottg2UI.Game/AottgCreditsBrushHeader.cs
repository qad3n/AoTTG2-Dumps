// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCreditsBrushHeader
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsBrushHeader.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001FD")]
internal sealed class AottgCreditsBrushHeader : AottgComponent
{
	[Token(Token = "0x4000AAE")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000AAF")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _text;

	[Token(Token = "0x6000BE0")]
	[Address(RVA = "0x5D7FEC0", Offset = "0x5D7EEC0", VA = "0x5D7FEC0")]
	public AottgCreditsBrushHeader(string id, string text)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsBrushHeader.c (Gisketch.Aottg2UI.Game.AottgCreditsBrushHeader$$.ctor): clean
		bool bVar1;

		base();
		bVar1 = String.IsNullOrEmpty(id);
		if (this == null) {
			throw new NullReferenceException();
		}
		if (bVar1) {
			id = "credits-category-header";
		}
		this._id = id;
		if (text == null) {
			text = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		this._text = text;
		return;
	}

	[Token(Token = "0x6000BE1")]
	[Address(RVA = "0x5D7FF60", Offset = "0x5D7EF60", VA = "0x5D7FF60", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsBrushHeader.c (Gisketch.Aottg2UI.Game.AottgCreditsBrushHeader$$Build): 1 lines keep C-only constructs
		String id;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition layout;

		__this_00 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader_Build_b__3_0);
		id = this._id;
		width = AottgUi.Percent(100.0);
		height = AottgUi.Points(64.0);
		layout = AottgUi.Layout("Column", "FlexStart", "FlexStart", null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Panel("creditsCategoryHeader", __this_00, id, layout, null);
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsBrushHeader.c.

	// Gisketch.Aottg2UI.Game.AottgCreditsBrushHeader$$<Build>b__3_0: clean
	private void Build_b__3_0(AottgUi header)
	{
		String text;
		String id;
		GisketchNodeDefinition pGVar1;
		GisketchLength width;
		GisketchLayoutDefinition pGVar2;

		text = this._text;
		id = String.Concat(this._id, "-text");
		if (header != null) {
			pGVar1 = header.Text(text, "creditsCategoryHeaderText", id, null, null);
			width = AottgUi.Percent(100.0);
			pGVar2 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (pGVar1 != null) {
				pGVar1.layout = pGVar2;
				return;
			}
		}
		throw new NullReferenceException();
	}
}
