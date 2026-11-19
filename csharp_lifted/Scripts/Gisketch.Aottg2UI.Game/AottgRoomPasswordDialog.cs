// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgRoomPasswordDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgRoomPasswordDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002DC")]
[AottgDialog("multiplayer-room-password")]
public sealed class AottgRoomPasswordDialog : AottgDialog
{
	[Token(Token = "0x4000E73")]
	public const string Id = "multiplayer-room-password";

	[Token(Token = "0x4000E74")]
	private const string InputId = "multiplayer-room-password-input";

	[Token(Token = "0x4000E75")]
	[FieldOffset(Offset = "0x0")]
	private static string _password;

	[Token(Token = "0x170001F3")]
	protected override string Title
	{
		[Token(Token = "0x6001153")]
		[Address(RVA = "0x57D1E90", Offset = "0x57D0E90", VA = "0x57D1E90", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomPasswordDialog.c (Gisketch.Aottg2UI.Game.AottgRoomPasswordDialog$$get_Title): clean
			String pSVar1;

			pSVar1 = Aottg2GisketchLocale.Text("Common.Password");
			return pSVar1;
		}
	}

	[Token(Token = "0x170001F4")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6001154")]
		[Address(RVA = "0x57D1EF0", Offset = "0x57D0EF0", VA = "0x57D1EF0", Slot = "13")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomPasswordDialog.c (Gisketch.Aottg2UI.Game.AottgRoomPasswordDialog$$get_BodyScrollable): clean
			return false;
		}
	}

	[Token(Token = "0x170001F5")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6001155")]
		[Address(RVA = "0x57D1F00", Offset = "0x57D0F00", VA = "0x57D1F00", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomPasswordDialog.c (Gisketch.Aottg2UI.Game.AottgRoomPasswordDialog$$get_RootLayout): clean
			GisketchLength width;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Points(480.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x6001156")]
	[Address(RVA = "0x57D1FC0", Offset = "0x57D0FC0", VA = "0x57D1FC0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomPasswordDialog.c (Gisketch.Aottg2UI.Game.AottgRoomPasswordDialog$$BuildBody): 1 lines keep C-only constructs
		uint uVar1;
		object @object;
		String id;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog___c_StaticFields pGVar2;
		Action<GisketchActionContext> __this_00;
		String pSVar3;
		GisketchNodeDefinition pGVar4;
		MethodInfo method_00;
		Nullable<bool>[] aSStack_48 = new Nullable<bool>[4];
		AottgUi pGStack_40;
		String pSStack_38;

		method_00 = (MethodInfo)**(ulong*)(g_data_07556758 + 0xb8);
		AottgRoomPasswordDialog._password =(String)method_00;
		if ((typeof(AottgRoomList)._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_075454e8 != false) goto label_058d20f7;
	label_058d22de: ;
			g_data_075454e8 = true;
			if ((typeof(AottgRoomList)._2).cctor_finished_or_no_cctor != 0) goto label_058d2107;
	label_058d2301: ;
			if (AottgRoomList._PasswordRoom_k__BackingField ==null) goto label_058d2119;
	label_058d231b: ;
			if ((typeof(AottgRoomList)._2).cctor_finished_or_no_cctor == 0) {
				if (g_data_075454e8 != false) goto label_058d2335;
	label_058d23ef: ;
				g_data_075454e8 = true;
				uVar1 = (typeof(AottgRoomList)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (g_data_075454e8 == false) goto label_058d23ef;
	label_058d2335: ;
				uVar1 = (typeof(AottgRoomList)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			pSVar3 = AottgRoomList.RoomTitle(AottgRoomList. _PasswordRoom_k__BackingField);
			if (body == null) goto label_058d241f;
			pGVar4 = body.Text(pSVar3, "text", "multiplayer-room-password-room", null, null);
			aSStack_48[0].hasValue = false;
			aSStack_48[0].value = false;
			aSStack_48 = new Nullable<bool>(true);
			if (pGVar4 == null) goto label_058d241f;
			pGVar4.richText = aSStack_48[0];
			uVar1 = (typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (g_data_075454e8 == false) goto label_058d22de;
	label_058d20f7: ;
			if ((typeof(AottgRoomList)._2).cctor_finished_or_no_cctor == 0) goto label_058d2301;
	label_058d2107: ;
			if (AottgRoomList._PasswordRoom_k__BackingField !=null) goto label_058d231b;
	label_058d2119: ;
			uVar1 = (typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSStack_38 = Aottg2GisketchLocale.Text("Common.Password");
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		id = "multiplayer-room-password-input";
		pSVar3 = "inputField";
		pGVar2 = typeof(AottgRoomPasswordDialog.c).static_fields;
		__this_00 = pGVar2.__9__9_0;
		if (__this_00 == null) {
			pGStack_40 = body;
			if ((typeof(AottgRoomPasswordDialog.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar2 = typeof(AottgRoomPasswordDialog.c).static_fields;
			}
			@object = (object)pGVar2.__9;
			__this_00 = new Action<GisketchActionContext>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog_c_BuildBody_b__9_0);
			pGVar2 = typeof(AottgRoomPasswordDialog.c).static_fields;
			pGVar2.__9__9_0 = __this_00;
			body = pGStack_40;
		}
		if (body != null) {
			body.InputField(id, pSStack_38, 3, pSVar3, layout, null, __this_00, 0.0, 0, null);
			return;
		}
	label_058d241f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001157")]
	[Address(RVA = "0x57D2430", Offset = "0x57D1430", VA = "0x57D2430", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomPasswordDialog.c (Gisketch.Aottg2UI.Game.AottgRoomPasswordDialog$$BuildFooter): 1 lines keep C-only constructs
		Action<GisketchActionContext> __this_00;

		if (footer == null) {
			throw new NullReferenceException();
		}
		footer.QuietKey("Common.Back", "overlay.close");
		__this_00 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomPasswordDialog_Join);
		footer.PrimaryKey("Common.Join", __this_00);
		return;
	}

	[Token(Token = "0x6001158")]
	[Address(RVA = "0x57D2500", Offset = "0x57D1500", VA = "0x57D2500")]
	private static void Join(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomPasswordDialog.c (Gisketch.Aottg2UI.Game.AottgRoomPasswordDialog$$Join): clean
		GisketchOverlayManager __this;
		bool bVar1;
		GisketchUIRoot pGVar2;
		String pSVar3;
		String message;

		pSVar3 = AottgRoomPasswordDialog._password;
		if ((typeof(AottgRoomList)._2).cctor_finished_or_no_cctor == 0) {
			bVar1 = AottgRoomList.TryJoinPasswordRoom(pSVar3);
		}
		else {
			bVar1 = AottgRoomList.TryJoinPasswordRoom(pSVar3);
		}
		if (!bVar1) {
			if (((typeof(Aottg2GisketchLocale))._2). cctor_finished_or_no_cctor == 0) {
			}
			pSVar3 = Aottg2GisketchLocale.Text("Common.Password");
			message = Aottg2GisketchLocale.Text("MainMenu.MultiplayerPasswordPopup.IncorrectPassword");
			if ((typeof(AottgRoomList)._2).cctor_finished_or_no_cctor == 0) {
			}
			AottgRoomList.Warn(pSVar3, message);
			return;
		}
		pGVar2 = AottgGisketchUiHost.Root;
		if (pGVar2 == null) {
			throw new NullReferenceException();
		}
		__this = pGVar2._Overlays_k__BackingField;
		if (__this == null) {
			return;
		}
		__this.CloseTop(true);
		return;
	}

	[Token(Token = "0x6001159")]
	[Address(RVA = "0x57D2650", Offset = "0x57D1650", VA = "0x57D2650")]
	public AottgRoomPasswordDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomPasswordDialog.c (Gisketch.Aottg2UI.Game.AottgRoomPasswordDialog$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomPasswordDialog.c.

	// Gisketch.Aottg2UI.Game.AottgRoomPasswordDialog$$.cctor: clean
	static AottgRoomPasswordDialog()
	{
		AottgRoomPasswordDialog._password =(String)**(ulong*)(g_data_07556758 + 0xb8);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgRoomPasswordDialog.<>c$$.cctor: 1 lines keep C-only constructs
	private static void c__cctor()
	{
		object __this;

		__this = (object)il2cpp_codegen_object_new(typeof(AottgRoomPasswordDialog.c)) ;
		__this = new Object();
		AottgRoomPasswordDialog.c.__9 =(AottgRoomPasswordDialog.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgRoomPasswordDialog.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgRoomPasswordDialog.<>c$$<BuildBody>b__9_0: clean
	private void c__BuildBody_b__9_0(GisketchActionContext context)
	{
		String pSVar1;

		pSVar1 = context.InputText;
		AottgRoomPasswordDialog._password = pSVar1;
		return;
	}
}
