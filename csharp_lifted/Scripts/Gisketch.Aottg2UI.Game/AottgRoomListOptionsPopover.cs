// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgRoomListOptionsPopover
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgRoomListOptionsPopover.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002D8")]
[AottgPopover("room-list-options", DismissOnBackdrop = true)]
public sealed class AottgRoomListOptionsPopover : AottgPopover
{
	[Token(Token = "0x4000E6A")]
	public const string Id = "room-list-options";

	[Token(Token = "0x170001F2")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6001146")]
		[Address(RVA = "0x57D18C0", Offset = "0x57D08C0", VA = "0x57D18C0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomListOptionsPopover.c (Gisketch.Aottg2UI.Game.AottgRoomListOptionsPopover$$get_RootLayout): clean
			GisketchLength width;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Points(320.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 10.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x6001147")]
	[Address(RVA = "0x57D1990", Offset = "0x57D0990", VA = "0x57D1990", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomListOptionsPopover.c (Gisketch.Aottg2UI.Game.AottgRoomListOptionsPopover$$Build): clean


		AottgRoomListOptionsPopover.Option(ui, "show-full", "MainMenu.MultiplayerFilterPopup.ShowFull", AottgRoomList.ShowFull);
		AottgRoomListOptionsPopover.Option(ui, "show-password", "MainMenu.MultiplayerFilterPopup.ShowPassword", AottgRoomList.ShowPassword);
		return;
	}

	[Token(Token = "0x6001148")]
	[Address(RVA = "0x57D1A60", Offset = "0x57D0A60", VA = "0x57D1A60")]
	private static void Option(AottgUi ui, string id, string labelKey, BoolSetting setting)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomListOptionsPopover.c (Gisketch.Aottg2UI.Game.AottgRoomListOptionsPopover$$Option): 2 lines keep C-only constructs
		bool value;
		BoolSetting pSVar1;
		AottgRoomListOptionsPopover.c__DisplayClass4_0 __this;
		String id_00;
		String text;
		Action<GisketchActionContext> __this_00;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgRoomListOptionsPopover.c__DisplayClass4_0));
		__this = new Object();
		if (__this != null) {
			__this.setting = setting;
			id_00 = String.Concat("room-list-options-", id);
			text = Aottg2GisketchLocale.Text(labelKey);
			pSVar1 = __this.setting;
			if (pSVar1 != null) {
				value = pSVar1._value;
				__this_00 = new Action<GisketchActionContext>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomListOptionsPopover_c__DisplayClass4_0_Option_b__0);
				if (ui != null) {
					ui.Checkbox(id_00, text, value, __this_00, null, null);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001149")]
	[Address(RVA = "0x57D1BD0", Offset = "0x57D0BD0", VA = "0x57D1BD0")]
	public AottgRoomListOptionsPopover()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomListOptionsPopover.c (Gisketch.Aottg2UI.Game.AottgRoomListOptionsPopover$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomListOptionsPopover.c.

	// Gisketch.Aottg2UI.Game.AottgRoomListOptionsPopover.<>c__DisplayClass4_0$$.ctor: clean
	private void c__DisplayClass4_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgRoomListOptionsPopover.<>c__DisplayClass4_0$$<Option>b__0: clean
	private void c__DisplayClass4_0__Option_b__0(GisketchActionContext context)
	{
		BoolSetting __this_00;
		bool value;

		__this_00 = this.setting;
		if (context.Node == null) {
			value = false;
		}
		else {
			value = (((context.Node).fields).value == "true");
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Value = value;
		if ((typeof(AottgRoomList)._2).cctor_finished_or_no_cctor == 0) {
			AottgRoomList.Refresh();
			return;
		}
		AottgRoomList.Refresh();
		return;
	}
}
