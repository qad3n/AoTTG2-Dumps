// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgAccountDialogUi
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgAccountDialogUi.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000294")]
internal static class AottgAccountDialogUi
{
	[Token(Token = "0x6000FB7")]
	[Address(RVA = "0x57B6320", Offset = "0x57B5320", VA = "0x57B6320")]
	public static void Intro(AottgUi body, string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgAccountDialogUi.c (Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$Intro): clean
		String text;
		GisketchNodeDefinition pGVar1;

		text = Aottg2GisketchLocale.Text(key);
		if (body != null) {
			pGVar1 = body.Text(text, "accountDialogText", null, null, null);
			if (pGVar1 != null) {
				pGVar1.textKey = key;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000FB8")]
	[Address(RVA = "0x57B63D0", Offset = "0x57B53D0", VA = "0x57B63D0")]
	public static void Providers(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgAccountDialogUi.c (Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$Providers): clean


		AottgAccountDialogUi.Provider(body, "account-provider-discord", "buttonDiscord", "UI/Icons/Navigation/DiscordIcon", "MainMenu.Account.LoginWithDiscord", "account.login.discord", "account.canDiscord");
		AottgAccountDialogUi.Provider(body, "account-provider-google", "buttonGoogle", "UI/Icons/Navigation/GoogleIcon", "MainMenu.Account.LoginWithGoogle", "account.login.google", "account.canGoogle");
		return;
	}

	[Token(Token = "0x6000FB9")]
	[Address(RVA = "0x57B6730", Offset = "0x57B5730", VA = "0x57B6730")]
	public static void Divider(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgAccountDialogUi.c (Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$Divider): 3 lines keep C-only constructs
		object @object;
		String pSVar1;
		Gisketch_Aottg2UI_Game_AottgAccountDialogUi___c_StaticFields pGVar2;
		Action<AottgUi> __this;
		GisketchLayoutDefinition layout;
		GisketchNodeDefinition pGVar3;
		GisketchUIBindingDefinition __this_00;

		pSVar1 = "default";
		pGVar2 = typeof(AottgAccountDialogUi.c).static_fields;
		__this = pGVar2.__9__2_0;
		if (__this == null) {
			if ((typeof(AottgAccountDialogUi.c)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgAccountDialogUi.c)) ;
				pGVar2 = typeof(AottgAccountDialogUi.c).static_fields;
			}
			@object = (object)pGVar2.__9;
			__this = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgAccountDialogUi_c_Divider_b__2_0);
			pGVar2 = typeof(AottgAccountDialogUi.c).static_fields;
			pGVar2.__9__2_0 = __this;
		}
		layout = AottgUi.Layout("Row", null, "Center", null, null, 16.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (body != null) {
			pGVar3 = body.Panel(pSVar1, __this, "account-auth-divider", layout, null);
			pSVar1 = "account.showLoginDivider";
			if (Il2CppMethodInitialized_0754536f == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchUIBindingDefinition)) ;
				Il2CppMethodInitialized_0754536f = true;
			}
			__this_00 = new GisketchUIBindingDefinition();
			if (__this_00 != null) {
				__this_00.visible = pSVar1;
				if (pGVar3 != null) {
					pGVar3.bind = __this_00;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000FBA")]
	[Address(RVA = "0x57B6A00", Offset = "0x57B5A00", VA = "0x57B6A00")]
	public static void LabeledInput(AottgUi ui, string id, string labelKey, string placeholderKey, AottgInputType type, [Optional][DefaultParameterValue(0)] int maxCharacters, [Optional] string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgAccountDialogUi.c (Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$LabeledInput): clean
		String pSVar1;
		GisketchNodeDefinition pGVar2;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		GisketchUIBindingDefinition __this;

		pSVar1 = Aottg2GisketchLocale.Text(labelKey);
		if (ui != null) {
			pGVar2 = ui.Text(pSVar1, "accountInputLabel", null, null, null);
			if (pGVar2 != null) {
				pGVar2.textKey = labelKey;
				pSVar1 = Aottg2GisketchLocale.Text(placeholderKey);
				width = AottgUi.Percent(100.0);
				layout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
				pGVar2 = ui.InputField(id, pSVar1, type, "inputField", layout, null, null, 0.2, maxCharacters, null);
				if (pGVar2 != null) {
					pGVar2.textKey = placeholderKey;
					pGVar2.value = value;
					pSVar1 = "account.auth.idle";
					__this = new GisketchUIBindingDefinition();
					if (__this != null) {
						__this.enabled = pSVar1;
						pGVar2.bind = __this;
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000FBB")]
	[Address(RVA = "0x57B6CE0", Offset = "0x57B5CE0", VA = "0x57B6CE0")]
	public static void KeepSignedIn(AottgUi ui, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgAccountDialogUi.c (Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$KeepSignedIn): 1 lines keep C-only constructs
		GisketchNodeDefinition __this;
		String pSVar1;
		GisketchUIBindingDefinition __this_00;

		__this = new GisketchNodeDefinition();
		if (__this != null) {
			__this.type = "Checkbox";
			__this.id = id;
			pSVar1 = Aottg2GisketchLocale.Text("MainMenu.Account.StaySignedIn");
			__this.text = pSVar1;
			__this.textKey = "MainMenu.Account.StaySignedIn";
			__this.value = "true";
			__this.action = "account.keepSignedIn";
			__this.style = "checkBox";
			pSVar1 = "account.auth.idle";
			if (Il2CppMethodInitialized_07545370 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchUIBindingDefinition)) ;
				Il2CppMethodInitialized_07545370 = true;
			}
			__this_00 = new GisketchUIBindingDefinition();
			if (__this_00 != null) {
				__this_00.enabled = pSVar1;
				__this.bind = __this_00;
				if (ui != null) {
					ui.Add(__this);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000FBC")]
	[Address(RVA = "0x57B6EE0", Offset = "0x57B5EE0", VA = "0x57B6EE0")]
	public static void EmptyMethods(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgAccountDialogUi.c (Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$EmptyMethods): clean
		String pSVar1;
		GisketchNodeDefinition pGVar2;
		GisketchUIBindingDefinition __this;

		pSVar1 = Aottg2GisketchLocale.Text("MainMenu.Account.NoMethods");
		if (body != null) {
			pGVar2 = body.Text(pSVar1, "accountDialogText", "account-login-no-methods", null, null);
			if (pGVar2 != null) {
				pGVar2.textKey = "MainMenu.Account.NoMethods";
				pSVar1 = "account.noMethods";
				__this = new GisketchUIBindingDefinition();
				if (__this != null) {
					__this.visible = pSVar1;
					pGVar2.bind = __this;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000FBD")]
	[Address(RVA = "0x57B6520", Offset = "0x57B5520", VA = "0x57B6520")]
	private static void Provider(AottgUi body, string id, string style, string icon, string textKey, string action, string visibleKey)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgAccountDialogUi.c (Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$Provider): clean
		String text;
		GisketchNodeDefinition pGVar1;
		GisketchLength width;
		GisketchLayoutDefinition pGVar2;
		GisketchUIBindingDefinition __this;

		text = Aottg2GisketchLocale.Text(textKey);
		if (body != null) {
			pGVar1 = body.Button(0, text, action, id, null, null, icon);
			if (pGVar1 != null) {
				pGVar1.textKey = textKey;
				pGVar1.style = style;
				width = AottgUi.Percent(100.0);
				pGVar2 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
				pGVar1.layout = pGVar2;
				__this = new GisketchUIBindingDefinition();
				if (__this != null) {
					__this.visible = visibleKey;
					__this.enabled = "account.auth.idle";
					pGVar1.bind = __this;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000FBE")]
	[Address(RVA = "0x57B6990", Offset = "0x57B5990", VA = "0x57B6990")]
	private static GisketchUIBindingDefinition Visible(string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgAccountDialogUi.c (Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$Visible): clean
		GisketchUIBindingDefinition __this;

		__this = new GisketchUIBindingDefinition();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.visible = key;
		return __this;
	}

	[Token(Token = "0x6000FBF")]
	[Address(RVA = "0x57B6C70", Offset = "0x57B5C70", VA = "0x57B6C70")]
	private static GisketchUIBindingDefinition Enabled(string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgAccountDialogUi.c (Gisketch.Aottg2UI.Game.AottgAccountDialogUi$$Enabled): clean
		GisketchUIBindingDefinition __this;

		__this = new GisketchUIBindingDefinition();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.enabled = key;
		return __this;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgAccountDialogUi.c.

	// Gisketch.Aottg2UI.Game.AottgAccountDialogUi.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgAccountDialogUi.c();
		AottgAccountDialogUi.c.__9 =(AottgAccountDialogUi.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgAccountDialogUi.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgAccountDialogUi.<>c$$<Divider>b__2_0: clean
	private void c__Divider_b__2_0(AottgUi row)
	{
		GisketchNodeDefinition pGVar1;
		GisketchLayoutDefinition pGVar2;
		String text;

		pGVar1 = new GisketchNodeDefinition();
		if (pGVar1 != null) {
			pGVar1.type = "Divider";
			pGVar1.style = "accountLoginDividerLine";
			pGVar2 = AottgUi.Layout("Column", null, null, null, null, 0.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
			pGVar1.layout = pGVar2;
			if (row != null) {
				row.Add(pGVar1);
				text = Aottg2GisketchLocale.Text("MainMenu.Account.Or");
				pGVar1 = row.Text(text, "accountLoginDividerText", null, null, null);
				if (pGVar1 != null) {
					pGVar1.textKey = "MainMenu.Account.Or";
					pGVar1 = new GisketchNodeDefinition();
					if (pGVar1 != null) {
						pGVar1.type = "Divider";
						pGVar1.style = "accountLoginDividerLine";
						pGVar2 = AottgUi.Layout("Column", null, null, null, null, 0.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
						pGVar1.layout = pGVar2;
						row.Add(pGVar1);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}
}
