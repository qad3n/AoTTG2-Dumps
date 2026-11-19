// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgChangeEmoteStickerDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgChangeEmoteStickerDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000302")]
[AottgDialog("profile-change-emote-sticker")]
public sealed class AottgChangeEmoteStickerDialog : AottgDialog
{
	[Token(Token = "0x4000F53")]
	public const string Id = "profile-change-emote-sticker";

	[Token(Token = "0x1700020F")]
	protected override string Title
	{
		[Token(Token = "0x60012E2")]
		[Address(RVA = "0x57F57D0", Offset = "0x57F47D0", VA = "0x57F57D0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeEmoteStickerDialog.c (Gisketch.Aottg2UI.Game.AottgChangeEmoteStickerDialog$$get_Title): clean
			String pSVar1;

			pSVar1 = Aottg2GisketchLocale.Text("MainMenu.Profile.ChangeEmoteSticker");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000210")]
	protected override string TitleIcon
	{
		[Token(Token = "0x60012E3")]
		[Address(RVA = "0x57F5830", Offset = "0x57F4830", VA = "0x57F5830", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeEmoteStickerDialog.c (Gisketch.Aottg2UI.Game.AottgChangeEmoteStickerDialog$$get_TitleIcon): clean
			return "material-icons/chat";
		}
	}

	[Token(Token = "0x17000211")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60012E4")]
		[Address(RVA = "0x57F5860", Offset = "0x57F4860", VA = "0x57F5860", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeEmoteStickerDialog.c (Gisketch.Aottg2UI.Game.AottgChangeEmoteStickerDialog$$get_RootLayout): clean
			GisketchLength width;
			GisketchLayoutDefinition pGVar1;
			float fVar2;

			fVar2 = GisketchGridPicker.PreferredWidthFor(4, 132.0);
			width = AottgUi.Points(fVar2 + 36.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x60012E5")]
	[Address(RVA = "0x57F5960", Offset = "0x57F4960", VA = "0x57F5960", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeEmoteStickerDialog.c (Gisketch.Aottg2UI.Game.AottgChangeEmoteStickerDialog$$BuildBody): 3 lines keep C-only constructs
		object @object;
		String id;
		AottgProfilePreset[] presets;
		GisketchGridPickerItem[] items;
		String searchPlaceholder;
		Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___c_StaticFields pGVar1;
		Action<GisketchActionContext, GisketchGridPickerItem> __this_00;
		GisketchGridPicker __this_01;
		String* ppSVar2;

		if (Il2CppMethodInitialized_075455c2 == false) {
			ppSVar2 = &"emote-sticker-picker";
			Il2CppMethodInitialized_075455c2 = true;
			this = (AottgChangeEmoteStickerDialog)ppSVar2;
		}
		presets = AottgEmoteCatalog.StickerPresets();
		items = ProfileDialogUi.GridItems(presets);
		searchPlaceholder = Aottg2GisketchLocale.Text("MainMenu.Profile.SearchStickers");
		id = "emote-sticker-picker";
		pGVar1 = typeof(AottgChangeEmoteStickerDialog.c).static_fields;
		__this_00 = pGVar1.__9__7_0;
		if (__this_00 == null) {
			if ((typeof(AottgChangeEmoteStickerDialog.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgChangeEmoteStickerDialog.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this_00 = il2cpp_codegen_object_new(typeof(Action<GisketchActionContext, GisketchGridPickerItem>)) ;
			__this_00 = new Action<GisketchActionContext, GisketchGridPickerItem>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_c_BuildBody_b__7_0);
			pGVar1 = typeof(AottgChangeEmoteStickerDialog.c).static_fields;
			pGVar1.__9__7_0 = __this_00;
		}
		__this_01 = new GisketchGridPicker(id, items, 4, 132.0, 132.0, 68.0, 68.0, searchPlaceholder, __this_00, 420.0, true, false, true);
		if (body == null) {
			throw new NullReferenceException();
		}
		body.Component((AottgComponent)__this_01);
		return;
	}

	[Token(Token = "0x60012E6")]
	[Address(RVA = "0x57F5B30", Offset = "0x57F4B30", VA = "0x57F5B30")]
	public AottgChangeEmoteStickerDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeEmoteStickerDialog.c (Gisketch.Aottg2UI.Game.AottgChangeEmoteStickerDialog$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangeEmoteStickerDialog.c.

	// Gisketch.Aottg2UI.Game.AottgChangeEmoteStickerDialog.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgChangeEmoteStickerDialog.c();
		AottgChangeEmoteStickerDialog.c.__9 =(AottgChangeEmoteStickerDialog.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgChangeEmoteStickerDialog.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgChangeEmoteStickerDialog.<>c$$<BuildBody>b__7_0: 1 lines keep C-only constructs
	private void c__BuildBody_b__7_0(GisketchActionContext context, GisketchGridPickerItem item)
	{
		Action<GisketchActionContext, string> pSVar1;
		code *vtableDispatch;

		pSVar1 = AottgEmoteSlotActions.SaveSticker;
		if (pSVar1 == null) {
			return;
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		(*vtableDispatch)(pSVar1.method_code,item.Key,pSVar1.method,vtableDispatch);
		return;
	}
}
