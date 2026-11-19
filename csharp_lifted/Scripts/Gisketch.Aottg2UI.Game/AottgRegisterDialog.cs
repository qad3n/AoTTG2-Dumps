// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgRegisterDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgRegisterDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200029D")]
[AottgDialog("main-menu-register")]
public sealed class AottgRegisterDialog : AottgDialog
{
	[Token(Token = "0x4000D5B")]
	public const string Id = "main-menu-register";

	[Token(Token = "0x4000D5C")]
	public const string EmailInputId = "account-register-email";

	[Token(Token = "0x4000D5D")]
	public const string DisplayNameInputId = "account-register-display-name";

	[Token(Token = "0x4000D5E")]
	public const string PasswordInputId = "account-register-password";

	[Token(Token = "0x4000D5F")]
	public const string ConfirmPasswordInputId = "account-register-confirm-password";

	[Token(Token = "0x4000D60")]
	public const string KeepSignedInId = "account-register-keep-signed-in";

	[Token(Token = "0x170001BB")]
	protected override string Title
	{
		[Token(Token = "0x6000FFC")]
		[Address(RVA = "0x57BBB30", Offset = "0x57BAB30", VA = "0x57BBB30", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRegisterDialog.c (Gisketch.Aottg2UI.Game.AottgRegisterDialog$$get_Title): clean
			String pSVar1;

			pSVar1 = Aottg2GisketchLocale.Text("MainMenu.Account.CreateAccount");
			return pSVar1;
		}
	}

	[Token(Token = "0x170001BC")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000FFD")]
		[Address(RVA = "0x57BBB90", Offset = "0x57BAB90", VA = "0x57BBB90", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRegisterDialog.c (Gisketch.Aottg2UI.Game.AottgRegisterDialog$$get_TitleIcon): clean
			return "material-icons/login";
		}
	}

	[Token(Token = "0x170001BD")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6000FFE")]
		[Address(RVA = "0x57BBBC0", Offset = "0x57BABC0", VA = "0x57BBBC0", Slot = "14")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRegisterDialog.c (Gisketch.Aottg2UI.Game.AottgRegisterDialog$$get_Variant): clean
			return 0;
		}
	}

	[Token(Token = "0x170001BE")]
	protected override string HeaderCloseEnabledKey
	{
		[Token(Token = "0x6000FFF")]
		[Address(RVA = "0x57BBBD0", Offset = "0x57BABD0", VA = "0x57BBBD0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRegisterDialog.c (Gisketch.Aottg2UI.Game.AottgRegisterDialog$$get_HeaderCloseEnabledKey): clean
			return "account.auth.idle";
		}
	}

	[Token(Token = "0x170001BF")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6001000")]
		[Address(RVA = "0x57BBC00", Offset = "0x57BAC00", VA = "0x57BBC00", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRegisterDialog.c (Gisketch.Aottg2UI.Game.AottgRegisterDialog$$get_RootLayout): clean
			GisketchLength width;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Points(540.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x170001C0")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6001001")]
		[Address(RVA = "0x57BBCC0", Offset = "0x57BACC0", VA = "0x57BBCC0", Slot = "17")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRegisterDialog.c (Gisketch.Aottg2UI.Game.AottgRegisterDialog$$get_BodyLayout): clean
			GisketchLayoutDefinition pGVar1;

			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 14.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x6001002")]
	[Address(RVA = "0x57BBD70", Offset = "0x57BAD70", VA = "0x57BBD70", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRegisterDialog.c (Gisketch.Aottg2UI.Game.AottgRegisterDialog$$BuildBody): 2 lines keep C-only constructs
		object @object;
		String pSVar1;
		Gisketch_Aottg2UI_Game_AottgRegisterDialog___c_StaticFields pGVar2;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		GisketchNodeDefinition pGVar3;
		MethodInfo pMVar4;

		pMVar4 = (MethodInfo *)"MainMenu.Account.CreateAccountIntro";
		AottgAccountDialogUi.Intro(body, "MainMenu.Account.CreateAccountIntro");
		AottgAccountDialogUi.Providers(body);
		AottgAccountDialogUi.Divider(body);
		pSVar1 = "accountLoginEmailSection";
		pGVar2 = typeof(AottgRegisterDialog.c).static_fields;
		__this_00 = pGVar2.__9__18_0;
		if (__this_00 == null) {
			if ((typeof(AottgRegisterDialog.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar2 = typeof(AottgRegisterDialog.c).static_fields;
			}
			@object = (object)pGVar2.__9;
			__this_00 = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c_BuildBody_b__18_0);
			pGVar2 = typeof(AottgRegisterDialog.c).static_fields;
			pGVar2.__9__18_0 = __this_00;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", null, "Stretch", null, null, 10.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (body != null) {
			pGVar3 = body.Panel(pSVar1, __this_00, "account-register-email-section", layout, null);
			pSVar1 = "account.canEmailPassword";
			if (Il2CppMethodInitialized_075453aa == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchUIBindingDefinition)) ;
				Il2CppMethodInitialized_075453aa = true;
			}
			pMVar4 = new GisketchUIBindingDefinition();
			if (pMVar4 != null) {
				pMVar4.return_type = (Il2CppType)pSVar1;
				if (pGVar3 != null) {
					pGVar3.bind = (GisketchUIBindingDefinition)pMVar4;
					AottgAccountDialogUi.EmptyMethods(body);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001003")]
	[Address(RVA = "0x57BC010", Offset = "0x57BB010", VA = "0x57BC010")]
	private static GisketchUIBindingDefinition Visible(string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRegisterDialog.c (Gisketch.Aottg2UI.Game.AottgRegisterDialog$$Visible): clean
		GisketchUIBindingDefinition __this;

		__this = new GisketchUIBindingDefinition();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.visible = key;
		return __this;
	}

	[Token(Token = "0x6001004")]
	[Address(RVA = "0x57BC080", Offset = "0x57BB080", VA = "0x57BC080")]
	private static GisketchUIBindingDefinition Enabled(string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRegisterDialog.c (Gisketch.Aottg2UI.Game.AottgRegisterDialog$$Enabled): clean
		GisketchUIBindingDefinition __this;

		__this = new GisketchUIBindingDefinition();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.enabled = key;
		return __this;
	}

	[Token(Token = "0x6001005")]
	[Address(RVA = "0x57BC0F0", Offset = "0x57BB0F0", VA = "0x57BC0F0")]
	private static GisketchUIBindingDefinition BoundCta(string textKey)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRegisterDialog.c (Gisketch.Aottg2UI.Game.AottgRegisterDialog$$BoundCta): clean
		GisketchUIBindingDefinition __this;

		__this = new GisketchUIBindingDefinition();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.text = textKey;
		__this.enabled = "account.auth.idle";
		return __this;
	}

	[Token(Token = "0x6001006")]
	[Address(RVA = "0x57BC180", Offset = "0x57BB180", VA = "0x57BC180")]
	public AottgRegisterDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRegisterDialog.c (Gisketch.Aottg2UI.Game.AottgRegisterDialog$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRegisterDialog.c.

	// Gisketch.Aottg2UI.Game.AottgRegisterDialog.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgRegisterDialog.c();
		AottgRegisterDialog.c.__9 =(AottgRegisterDialog.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgRegisterDialog.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgRegisterDialog.<>c$$<BuildBody>b__18_0: 1 lines keep C-only constructs
	private void c__BuildBody_b__18_0(AottgUi form)
	{
		object @object;
		String pSVar1;
		GisketchNodeDefinition pGVar2;
		GisketchLength width;
		GisketchLayoutDefinition pGVar3;
		GisketchUIBindingDefinition pGVar4;
		Gisketch_Aottg2UI_Game_AottgRegisterDialog___c_StaticFields pGVar5;
		Action<AottgUi> __this_00;

		AottgAccountDialogUi.LabeledInput(form, "account-register-email", "MainMenu.Account.EmailAddress", "MainMenu.Account.Email", 0, 0, null);
		AottgAccountDialogUi.LabeledInput(form, "account-register-display-name", "MainMenu.Account.DisplayName", "MainMenu.Account.DisplayNamePlaceholder", 0, 0, null);
		pSVar1 = Aottg2GisketchLocale.Text("MainMenu.Account.AccountNameHint");
		if (form != null) {
			pGVar2 = form.Text(pSVar1, "accountDialogText", null, null, null);
			if (pGVar2 != null) {
				pGVar2.textKey = "MainMenu.Account.AccountNameHint";
				AottgAccountDialogUi.LabeledInput(form, "account-register-password", "Common.Password", "MainMenu.Account.PasswordHint", 3, 0, null);
				AottgAccountDialogUi.LabeledInput(form, "account-register-confirm-password", "MainMenu.Account.ConfirmPassword", "MainMenu.Account.RepeatPassword", 3, 0, null);
				AottgAccountDialogUi.KeepSignedIn(form, "account-register-keep-signed-in");
				pSVar1 = Aottg2GisketchLocale.Text("MainMenu.Account.CreateAccount");
				pGVar2 = form.Button(0, pSVar1, "account.register.email", "account-register-submit", null, null, "material-icons/login");
				if (pGVar2 != null) {
					pGVar2.textKey = "MainMenu.Account.CreateAccount";
					width = AottgUi.Percent(100.0);
					pGVar3 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
					pGVar2.layout = pGVar3;
					pGVar4 = AottgRegisterDialog.BoundCta("account.registerCta");
					pGVar2.bind = pGVar4;
					pSVar1 = "default";
					pGVar5 = typeof(AottgRegisterDialog.c).static_fields;
					__this_00 = pGVar5.__9__18_1;
					if (__this_00 == null) {
						if ((typeof(AottgRegisterDialog.c)._2).cctor_finished_or_no_cctor == 0) {
							pGVar5 = typeof(AottgRegisterDialog.c).static_fields;
						}
						@object = (object)pGVar5.__9;
						__this_00 = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgRegisterDialog_c_BuildBody_b__18_1);
						pGVar5 = typeof(AottgRegisterDialog.c).static_fields;
						pGVar5.__9__18_1 = __this_00;
					}
					pGVar3 = AottgUi.Layout("Row", "Center", "Center", null, null, 4.0, null, null, null, null, null, null, 0.0, 0.0, 8.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
					form.Panel(pSVar1, __this_00, "account-register-login-link", pGVar3, null);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgRegisterDialog.<>c$$<BuildBody>b__18_1: clean
	private void c__BuildBody_b__18_1(AottgUi row)
	{
		String pSVar1;
		GisketchNodeDefinition pGVar2;
		GisketchUIBindingDefinition __this_00;

		pSVar1 = Aottg2GisketchLocale.Text("MainMenu.Account.AlreadyHaveAccount");
		if (row != null) {
			pGVar2 = row.Text(pSVar1, "accountDialogText", null, null, null);
			if (pGVar2 != null) {
				pGVar2.textKey = "MainMenu.Account.AlreadyHaveAccount";
				pSVar1 = Aottg2GisketchLocale.Text("MainMenu.Account.SignIn");
				pGVar2 = row.Button(3, pSVar1, "account.openLogin", "account-register-open-login", null, null, null);
				if (pGVar2 != null) {
					pGVar2.textKey = "MainMenu.Account.SignIn";
					pSVar1 = "account.auth.idle";
					__this_00 = new GisketchUIBindingDefinition();
					if (__this_00 != null) {
						__this_00.enabled = pSVar1;
						pGVar2.bind = __this_00;
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}
}
