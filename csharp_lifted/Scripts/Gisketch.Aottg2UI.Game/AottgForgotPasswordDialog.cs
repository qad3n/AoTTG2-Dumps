// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgForgotPasswordDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000297")]
[AottgDialog("main-menu-forgot-password")]
public sealed class AottgForgotPasswordDialog : AottgDialog
{
	[Token(Token = "0x4000D43")]
	public const string Id = "main-menu-forgot-password";

	[Token(Token = "0x4000D44")]
	public const string EmailInputId = "account-forgot-email";

	[Token(Token = "0x170001AF")]
	protected override string Title
	{
		[Token(Token = "0x6000FC3")]
		[Address(RVA = "0x57B7380", Offset = "0x57B6380", VA = "0x57B7380", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgForgotPasswordDialog.c (Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$get_Title): clean
			String pSVar1;

			pSVar1 = Aottg2GisketchLocale.Text("MainMenu.Account.ForgotPasswordTitle");
			return pSVar1;
		}
	}

	[Token(Token = "0x170001B0")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000FC4")]
		[Address(RVA = "0x57B73E0", Offset = "0x57B63E0", VA = "0x57B73E0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgForgotPasswordDialog.c (Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$get_TitleIcon): clean
			return "material-icons/login";
		}
	}

	[Token(Token = "0x170001B1")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6000FC5")]
		[Address(RVA = "0x57B7410", Offset = "0x57B6410", VA = "0x57B7410", Slot = "14")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgForgotPasswordDialog.c (Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$get_Variant): clean
			return 0;
		}
	}

	[Token(Token = "0x170001B2")]
	protected override string HeaderCloseEnabledKey
	{
		[Token(Token = "0x6000FC6")]
		[Address(RVA = "0x57B7420", Offset = "0x57B6420", VA = "0x57B7420", Slot = "10")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgForgotPasswordDialog.c (Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$get_HeaderCloseEnabledKey): clean
			return "account.auth.idle";
		}
	}

	[Token(Token = "0x170001B3")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000FC7")]
		[Address(RVA = "0x57B7450", Offset = "0x57B6450", VA = "0x57B7450", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgForgotPasswordDialog.c (Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$get_RootLayout): clean
			GisketchLength width;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Points(520.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x170001B4")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6000FC8")]
		[Address(RVA = "0x57B7510", Offset = "0x57B6510", VA = "0x57B7510", Slot = "17")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgForgotPasswordDialog.c (Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$get_BodyLayout): clean
			GisketchLayoutDefinition pGVar1;

			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 18.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x6000FC9")]
	[Address(RVA = "0x57B75C0", Offset = "0x57B65C0", VA = "0x57B75C0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgForgotPasswordDialog.c (Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$BuildBody): 2 lines keep C-only constructs
		object @object;
		String pSVar1;
		Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog___c_StaticFields pGVar2;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		GisketchNodeDefinition pGVar3;
		MethodInfo method_00;

		AottgAccountDialogUi.Intro(body, "MainMenu.Account.ForgotPasswordIntro");
		pSVar1 = "accountLoginEmailSection";
		pGVar2 = typeof(AottgForgotPasswordDialog.c).static_fields;
		__this_00 = pGVar2.__9__14_0;
		if (__this_00 == null) {
			if ((typeof(AottgForgotPasswordDialog.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar2 = typeof(AottgForgotPasswordDialog.c).static_fields;
			}
			@object = (object)pGVar2.__9;
			__this_00 = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgForgotPasswordDialog_c_BuildBody_b__14_0);
			pGVar2 = typeof(AottgForgotPasswordDialog.c).static_fields;
			pGVar2.__9__14_0 = __this_00;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", null, "Stretch", null, null, 12.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (body != null) {
			pGVar3 = body.Panel(pSVar1, __this_00, "account-forgot-email-section", layout, null);
			pSVar1 = "account.canEmailPassword";
			if (Il2CppMethodInitialized_07545379 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchUIBindingDefinition)) ;
				Il2CppMethodInitialized_07545379 = true;
			}
			method_00 = new GisketchUIBindingDefinition();
			if (method_00 != null) {
				method_00.return_type = (Il2CppType)pSVar1;
				if (pGVar3 != null) {
					pGVar3.bind = (GisketchUIBindingDefinition)method_00;
					AottgAccountDialogUi.EmptyMethods(body);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000FCA")]
	[Address(RVA = "0x57B7850", Offset = "0x57B6850", VA = "0x57B7850")]
	private static GisketchUIBindingDefinition Visible(string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgForgotPasswordDialog.c (Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$Visible): clean
		GisketchUIBindingDefinition __this;

		__this = new GisketchUIBindingDefinition();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.visible = key;
		return __this;
	}

	[Token(Token = "0x6000FCB")]
	[Address(RVA = "0x57B78C0", Offset = "0x57B68C0", VA = "0x57B78C0")]
	private static GisketchUIBindingDefinition Enabled(string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgForgotPasswordDialog.c (Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$Enabled): clean
		GisketchUIBindingDefinition __this;

		__this = new GisketchUIBindingDefinition();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.enabled = key;
		return __this;
	}

	[Token(Token = "0x6000FCC")]
	[Address(RVA = "0x57B7930", Offset = "0x57B6930", VA = "0x57B7930")]
	private static GisketchUIBindingDefinition BoundCta(string textKey)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgForgotPasswordDialog.c (Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$BoundCta): clean
		GisketchUIBindingDefinition __this;

		__this = new GisketchUIBindingDefinition();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.text = textKey;
		__this.enabled = "account.auth.idle";
		return __this;
	}

	[Token(Token = "0x6000FCD")]
	[Address(RVA = "0x57B79C0", Offset = "0x57B69C0", VA = "0x57B79C0")]
	public AottgForgotPasswordDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgForgotPasswordDialog.c (Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgForgotPasswordDialog.c.

	// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgForgotPasswordDialog.c();
		AottgForgotPasswordDialog.c.__9 =(AottgForgotPasswordDialog.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgForgotPasswordDialog.<>c$$<BuildBody>b__14_0: clean
	private void c__BuildBody_b__14_0(AottgUi form)
	{
		String pSVar1;
		GisketchNodeDefinition pGVar2;
		GisketchLength width;
		GisketchLayoutDefinition method_00;
		GisketchUIBindingDefinition pGVar3;

		AottgAccountDialogUi.LabeledInput(form, "account-forgot-email", "MainMenu.Account.EmailAddress", "MainMenu.Account.Email", 0, 0, null);
		pSVar1 = Aottg2GisketchLocale.Text("MainMenu.Account.SendResetLink");
		if (form != null) {
			pGVar2 = form.Button(0, pSVar1, "account.forgotPassword", "account-forgot-submit", null, null, "material-icons/login");
			if (pGVar2 != null) {
				pGVar2.textKey = "MainMenu.Account.SendResetLink";
				width = AottgUi.Percent(100.0);
				method_00 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
				pGVar2.layout = method_00;
				pGVar3 = AottgForgotPasswordDialog.BoundCta("account.forgotCta");
				pGVar2.bind = pGVar3;
				pSVar1 = Aottg2GisketchLocale.Text("MainMenu.Account.BackToSignIn");
				pGVar2 = form.Button(3, pSVar1, "account.openLogin", "account-forgot-open-login", null, null, null);
				if (pGVar2 != null) {
					pGVar2.textKey = "MainMenu.Account.BackToSignIn";
					pSVar1 = "account.auth.idle";
					pGVar3 = new GisketchUIBindingDefinition();
					if (pGVar3 != null) {
						pGVar3.enabled = pSVar1;
						pGVar2.bind = pGVar3;
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}
}
