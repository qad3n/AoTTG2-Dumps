// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgLoginDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgLoginDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000299")]
[AottgDialog("main-menu-login")]
public sealed class AottgLoginDialog : AottgDialog
{
	[Token(Token = "0x4000D47")]
	public const string Id = "main-menu-login";

	[Token(Token = "0x4000D48")]
	public const string EmailInputId = "account-login-email";

	[Token(Token = "0x4000D49")]
	public const string PasswordInputId = "account-login-password";

	[Token(Token = "0x4000D4A")]
	public const string KeepSignedInId = "account-login-keep-signed-in";

	[Token(Token = "0x170001B5")]
	protected override string Title
	{
		[Token(Token = "0x6000FD1")]
		[Address(RVA = "0x57B7D90", Offset = "0x57B6D90", VA = "0x57B7D90", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgLoginDialog.c (Gisketch.Aottg2UI.Game.AottgLoginDialog$$get_Title): clean
			String pSVar1;

			pSVar1 = Aottg2GisketchLocale.Text("MainMenu.Account.SignIn");
			return pSVar1;
		}
	}

	[Token(Token = "0x170001B6")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000FD2")]
		[Address(RVA = "0x57B7DF0", Offset = "0x57B6DF0", VA = "0x57B7DF0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgLoginDialog.c (Gisketch.Aottg2UI.Game.AottgLoginDialog$$get_TitleIcon): clean
			return "material-icons/login";
		}
	}

	[Token(Token = "0x170001B7")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6000FD3")]
		[Address(RVA = "0x57B7E20", Offset = "0x57B6E20", VA = "0x57B7E20", Slot = "14")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgLoginDialog.c (Gisketch.Aottg2UI.Game.AottgLoginDialog$$get_Variant): clean
			return 0;
		}
	}

	[Token(Token = "0x170001B8")]
	protected override string HeaderCloseEnabledKey
	{
		[Token(Token = "0x6000FD4")]
		[Address(RVA = "0x57B7E30", Offset = "0x57B6E30", VA = "0x57B7E30", Slot = "10")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgLoginDialog.c (Gisketch.Aottg2UI.Game.AottgLoginDialog$$get_HeaderCloseEnabledKey): clean
			return "account.auth.idle";
		}
	}

	[Token(Token = "0x170001B9")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000FD5")]
		[Address(RVA = "0x57B7E60", Offset = "0x57B6E60", VA = "0x57B7E60", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgLoginDialog.c (Gisketch.Aottg2UI.Game.AottgLoginDialog$$get_RootLayout): clean
			GisketchLength width;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Points(540.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x170001BA")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6000FD6")]
		[Address(RVA = "0x57B7F20", Offset = "0x57B6F20", VA = "0x57B7F20", Slot = "17")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgLoginDialog.c (Gisketch.Aottg2UI.Game.AottgLoginDialog$$get_BodyLayout): clean
			GisketchLayoutDefinition pGVar1;

			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 14.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x6000FD7")]
	[Address(RVA = "0x57B7FD0", Offset = "0x57B6FD0", VA = "0x57B7FD0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgLoginDialog.c (Gisketch.Aottg2UI.Game.AottgLoginDialog$$BuildBody): 2 lines keep C-only constructs
		object @object;
		String pSVar1;
		Gisketch_Aottg2UI_Game_AottgLoginDialog___c_StaticFields pGVar2;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		GisketchNodeDefinition pGVar3;
		MethodInfo pMVar4;

		pMVar4 = (MethodInfo *)"MainMenu.Account.ChooseMethod";
		AottgAccountDialogUi.Intro(body, "MainMenu.Account.ChooseMethod");
		AottgAccountDialogUi.Providers(body);
		AottgAccountDialogUi.Divider(body);
		pSVar1 = "accountLoginEmailSection";
		pGVar2 = typeof(AottgLoginDialog.c).static_fields;
		__this_00 = pGVar2.__9__16_0;
		if (__this_00 == null) {
			if ((typeof(AottgLoginDialog.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar2 = typeof(AottgLoginDialog.c).static_fields;
			}
			@object = (object)pGVar2.__9;
			__this_00 = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c_BuildBody_b__16_0);
			pGVar2 = typeof(AottgLoginDialog.c).static_fields;
			pGVar2.__9__16_0 = __this_00;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", null, "Stretch", null, null, 10.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (body != null) {
			pGVar3 = body.Panel(pSVar1, __this_00, "account-login-email-section", layout, null);
			pSVar1 = "account.canEmailPassword";
			if (Il2CppMethodInitialized_07545385 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchUIBindingDefinition)) ;
				Il2CppMethodInitialized_07545385 = true;
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

	[Token(Token = "0x6000FD8")]
	[Address(RVA = "0x57B82E0", Offset = "0x57B72E0", VA = "0x57B82E0")]
	private static void FooterLinks(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgLoginDialog.c (Gisketch.Aottg2UI.Game.AottgLoginDialog$$FooterLinks): 1 lines keep C-only constructs
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgLoginDialog___c_StaticFields pGVar1;
		Action<AottgUi> __this;
		GisketchLayoutDefinition layout;

		style = "default";
		pGVar1 = typeof(AottgLoginDialog.c).static_fields;
		__this = pGVar1.__9__17_0;
		if (__this == null) {
			if ((typeof(AottgLoginDialog.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgLoginDialog.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c_FooterLinks_b__17_0);
			pGVar1 = typeof(AottgLoginDialog.c).static_fields;
			pGVar1.__9__17_0 = __this;
		}
		layout = AottgUi.Layout("Row", "SpaceBetween", "Center", null, null, 12.0, null, null, null, null, null, null, 0.0, 0.0, 8.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Panel(style, __this, "account-login-links", layout, null);
		return;
	}

	[Token(Token = "0x6000FD9")]
	[Address(RVA = "0x57B8270", Offset = "0x57B7270", VA = "0x57B8270")]
	private static GisketchUIBindingDefinition Visible(string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgLoginDialog.c (Gisketch.Aottg2UI.Game.AottgLoginDialog$$Visible): clean
		GisketchUIBindingDefinition __this;

		__this = new GisketchUIBindingDefinition();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.visible = key;
		return __this;
	}

	[Token(Token = "0x6000FDA")]
	[Address(RVA = "0x57B84C0", Offset = "0x57B74C0", VA = "0x57B84C0")]
	private static GisketchUIBindingDefinition Enabled(string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgLoginDialog.c (Gisketch.Aottg2UI.Game.AottgLoginDialog$$Enabled): clean
		GisketchUIBindingDefinition __this;

		__this = new GisketchUIBindingDefinition();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.enabled = key;
		return __this;
	}

	[Token(Token = "0x6000FDB")]
	[Address(RVA = "0x57B8530", Offset = "0x57B7530", VA = "0x57B8530")]
	private static GisketchUIBindingDefinition BoundCta(string textKey)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgLoginDialog.c (Gisketch.Aottg2UI.Game.AottgLoginDialog$$BoundCta): clean
		GisketchUIBindingDefinition __this;

		__this = new GisketchUIBindingDefinition();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.text = textKey;
		__this.enabled = "account.auth.idle";
		return __this;
	}

	[Token(Token = "0x6000FDC")]
	[Address(RVA = "0x57B85C0", Offset = "0x57B75C0", VA = "0x57B85C0")]
	public AottgLoginDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgLoginDialog.c (Gisketch.Aottg2UI.Game.AottgLoginDialog$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgLoginDialog.c.

	// Gisketch.Aottg2UI.Game.AottgLoginDialog.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgLoginDialog.c();
		AottgLoginDialog.c.__9 =(AottgLoginDialog.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgLoginDialog.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgLoginDialog.<>c$$<BuildBody>b__16_0: clean
	private void c__BuildBody_b__16_0(AottgUi email)
	{
		String text;
		GisketchNodeDefinition pGVar1;
		GisketchLength width;
		GisketchLayoutDefinition method_00;
		MethodInfo method_01;

		AottgAccountDialogUi.LabeledInput(email, "account-login-email", "MainMenu.Account.EmailAddress", "MainMenu.Account.Email", 0, 0, null);
		AottgAccountDialogUi.LabeledInput(email, "account-login-password", "Common.Password", "Common.Password", 3, 0, null);
		AottgAccountDialogUi.KeepSignedIn(email, "account-login-keep-signed-in");
		text = Aottg2GisketchLocale.Text("MainMenu.Account.SignIn");
		if (email != null) {
			pGVar1 = email.Button(0, text, "account.login.email", "account-login-email-submit", null, null, "material-icons/login");
			if (pGVar1 != null) {
				pGVar1.textKey = "MainMenu.Account.SignIn";
				width = AottgUi.Percent(100.0);
				method_00 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
				pGVar1.layout = method_00;
				method_01 = (MethodInfo)AottgLoginDialog.BoundCta("account.loginCta");
				pGVar1.bind = (GisketchUIBindingDefinition)method_01;
				AottgLoginDialog.FooterLinks(email);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgLoginDialog.<>c$$<FooterLinks>b__17_0: 1 lines keep C-only constructs
	private void c__FooterLinks_b__17_0(AottgUi row)
	{
		object @object;
		Gisketch_Aottg2UI_Game_AottgLoginDialog___c_StaticFields pGVar1;
		Action<AottgUi> __this_00;
		GisketchLayoutDefinition layout;
		String pSVar2;
		GisketchNodeDefinition pGVar3;
		GisketchUIBindingDefinition __this_01;

		pSVar2 = "default";
		pGVar1 = typeof(AottgLoginDialog.c).static_fields;
		__this_00 = pGVar1.__9__17_1;
		if (__this_00 == null) {
			if ((typeof(AottgLoginDialog.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgLoginDialog.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this_00 = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgLoginDialog_c_FooterLinks_b__17_1);
			pGVar1 = typeof(AottgLoginDialog.c).static_fields;
			pGVar1.__9__17_1 = __this_00;
		}
		layout = AottgUi.Layout("Row", null, "Center", null, null, 4.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (row != null) {
			row.Panel(pSVar2, __this_00, "account-login-register-link", layout, null);
			pSVar2 = Aottg2GisketchLocale.Text("MainMenu.Account.ForgotPassword");
			pGVar3 = row.Button(3, pSVar2, "account.openForgotPassword", "account-login-open-forgot", null, null, null);
			if (pGVar3 != null) {
				pGVar3.textKey = "MainMenu.Account.ForgotPassword";
				pSVar2 = "account.auth.idle";
				__this_01 = new GisketchUIBindingDefinition();
				if (__this_01 != null) {
					__this_01.enabled = pSVar2;
					pGVar3.bind = __this_01;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgLoginDialog.<>c$$<FooterLinks>b__17_1: clean
	private void c__FooterLinks_b__17_1(AottgUi left)
	{
		String pSVar1;
		GisketchNodeDefinition pGVar2;
		GisketchUIBindingDefinition __this_00;

		pSVar1 = Aottg2GisketchLocale.Text("MainMenu.Account.NoAccount");
		if (left != null) {
			pGVar2 = left.Text(pSVar1, "accountDialogText", null, null, null);
			if (pGVar2 != null) {
				pGVar2.textKey = "MainMenu.Account.NoAccount";
				pSVar1 = Aottg2GisketchLocale.Text("MainMenu.Account.Register");
				pGVar2 = left.Button(3, pSVar1, "account.openRegister", "account-login-open-register", null, null, null);
				if (pGVar2 != null) {
					pGVar2.textKey = "MainMenu.Account.Register";
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
