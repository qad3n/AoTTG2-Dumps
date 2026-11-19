// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgProfileBanner
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgProfileBanner.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200029B")]
public sealed class AottgProfileBanner : AottgComponent
{
	[Token(Token = "0x6000FE2")]
	[Address(RVA = "0x57B8DD0", Offset = "0x57B7DD0", VA = "0x57B8DD0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileBanner.c (Gisketch.Aottg2UI.Game.AottgProfileBanner$$Build): 4 lines keep C-only constructs
		object pIVar1;
		String pSVar2;
		GisketchLayoutDefinition pGVar3;
		GisketchNodeDefinition pGVar4;
		GisketchUIBindingDefinition pGVar5;
		Gisketch_Aottg2UI_Game_AottgProfileBanner___c_StaticFields pGVar6;
		Action<AottgUi> pSVar7;

		pSVar2 = "accountBanner";
		pGVar6 = typeof(AottgProfileBanner.c).static_fields;
		pSVar7 = pGVar6.__9__0_0;
		if (pSVar7 == null) {
			if ((typeof(AottgProfileBanner.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar6 = typeof(AottgProfileBanner.c).static_fields;
			}
			pIVar1 = (object)pGVar6.__9;
			pSVar7 = new Action<AottgUi>(pIVar1, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_0);
			pGVar6 = typeof(AottgProfileBanner.c).static_fields;
			pGVar6.__9__0_0 = pSVar7;
		}
		pGVar3 = AottgUi.Layout("Row", null, "Stretch", null, null, 0.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (ui != null) {
			pGVar4 = ui.Panel(pSVar2, pSVar7, "account-banner-logged-out", pGVar3, null);
			pSVar2 = "account.loggedOut";
			if (Il2CppMethodInitialized_0754538d == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchUIBindingDefinition)) ;
				Il2CppMethodInitialized_0754538d = true;
			}
			pGVar5 = new GisketchUIBindingDefinition();
			if (pGVar5 != null) {
				pGVar5.visible = pSVar2;
				if (pGVar4 != null) {
					pGVar4.bind = pGVar5;
					pGVar4.active = false;
					pSVar2 = "accountBanner";
					pGVar6 = typeof(AottgProfileBanner.c).static_fields;
					pSVar7 = pGVar6.__9__0_1;
					if (pSVar7 == null) {
						if ((typeof(AottgProfileBanner.c)._2).cctor_finished_or_no_cctor == 0) {
							pGVar6 = typeof(AottgProfileBanner.c).static_fields;
						}
						pIVar1 = (object)pGVar6.__9;
						pSVar7 = new Action<AottgUi>(pIVar1, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_1);
						pGVar6 = typeof(AottgProfileBanner.c).static_fields;
						pGVar6.__9__0_1 = pSVar7;
					}
					pGVar3 = AottgUi.Layout("Row", null, "Stretch", null, null, 0.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
					pGVar4 = ui.Panel(pSVar2, pSVar7, "account-banner-offline", pGVar3, null);
					pSVar2 = "account.offlineMode";
					pGVar5 = new GisketchUIBindingDefinition();
					if (pGVar5 != null) {
						pGVar5.visible = pSVar2;
						if (pGVar4 != null) {
							pGVar4.bind = pGVar5;
							pGVar4.active = false;
							pSVar2 = "accountBanner";
							pGVar6 = typeof(AottgProfileBanner.c).static_fields;
							pSVar7 = pGVar6.__9__0_2;
							if (pSVar7 == null) {
								if ((typeof(AottgProfileBanner.c)._2).cctor_finished_or_no_cctor == 0) {
									pGVar6 = typeof(AottgProfileBanner.c).static_fields;
								}
								pIVar1 = (object)pGVar6.__9;
								pSVar7 = new Action<AottgUi>(pIVar1, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_2);
								pGVar6 = typeof(AottgProfileBanner.c).static_fields;
								pGVar6.__9__0_2 = pSVar7;
							}
							pGVar3 = AottgUi.Layout("Row", null, "Stretch", null, null, 0.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
							pGVar4 = ui.Panel(pSVar2, pSVar7, "account-profile-banner", pGVar3, null);
							pSVar2 = "account.onlineMode";
							pGVar5 = new GisketchUIBindingDefinition();
							if (pGVar5 != null) {
								pGVar5.visible = pSVar2;
								if (pGVar4 != null) {
									pGVar4.bind = pGVar5;
									pGVar4.active = false;
									return;
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000FE3")]
	[Address(RVA = "0x57B9540", Offset = "0x57B8540", VA = "0x57B9540")]
	private static GisketchUIBindingDefinition Visible(string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileBanner.c (Gisketch.Aottg2UI.Game.AottgProfileBanner$$Visible): clean
		GisketchUIBindingDefinition __this;

		__this = new GisketchUIBindingDefinition();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.visible = key;
		return __this;
	}

	[Token(Token = "0x6000FE4")]
	[Address(RVA = "0x57B9490", Offset = "0x57B8490", VA = "0x57B9490")]
	private static GisketchLayoutDefinition BannerRootLayout()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileBanner.c (Gisketch.Aottg2UI.Game.AottgProfileBanner$$BannerRootLayout): clean
		GisketchLayoutDefinition pGVar1;

		pGVar1 = AottgUi.Layout("Row", null, "Stretch", null, null, 0.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		return pGVar1;
	}

	[Token(Token = "0x6000FE5")]
	[Address(RVA = "0x57B95B0", Offset = "0x57B85B0", VA = "0x57B95B0")]
	private static GisketchLayoutDefinition EditButtonLayout()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileBanner.c (Gisketch.Aottg2UI.Game.AottgProfileBanner$$EditButtonLayout): clean
		GisketchLength width;
		GisketchLayoutDefinition pGVar1;

		width = AottgUi.Points(112.0);
		pGVar1 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		return pGVar1;
	}

	[Token(Token = "0x6000FE6")]
	[Address(RVA = "0x57B9660", Offset = "0x57B8660", VA = "0x57B9660")]
	private static GisketchLayoutDefinition FullWidthButtonLayout()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileBanner.c (Gisketch.Aottg2UI.Game.AottgProfileBanner$$FullWidthButtonLayout): clean
		GisketchLength width;
		GisketchLayoutDefinition pGVar1;

		width = AottgUi.Percent(100.0);
		pGVar1 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		return pGVar1;
	}

	[Token(Token = "0x6000FE7")]
	[Address(RVA = "0x57B9710", Offset = "0x57B8710", VA = "0x57B9710")]
	private static GisketchLayoutDefinition GrowActionButtonLayout()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileBanner.c (Gisketch.Aottg2UI.Game.AottgProfileBanner$$GrowActionButtonLayout): clean
		GisketchLayoutDefinition pGVar1;

		pGVar1 = AottgUi.Layout("Column", null, null, null, null, 0.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
		return pGVar1;
	}

	[Token(Token = "0x6000FE8")]
	[Address(RVA = "0x57B97B0", Offset = "0x57B87B0", VA = "0x57B97B0")]
	private static GisketchLayoutDefinition NameTextLayout()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileBanner.c (Gisketch.Aottg2UI.Game.AottgProfileBanner$$NameTextLayout): clean
		GisketchLength width;
		GisketchLength minWidth;
		GisketchLayoutDefinition pGVar1;

		width = AottgUi.Percent(100.0);
		minWidth = AottgUi.Points(0.0);
		pGVar1 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, minWidth, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		return pGVar1;
	}

	[Token(Token = "0x6000FE9")]
	[Address(RVA = "0x57B9880", Offset = "0x57B8880", VA = "0x57B9880")]
	private static GisketchLayoutDefinition SkeletonTextLayout(float width, float height)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileBanner.c (Gisketch.Aottg2UI.Game.AottgProfileBanner$$SkeletonTextLayout): clean
		GisketchLength width_00;
		GisketchLength height_00;
		GisketchLayoutDefinition pGVar1;

		width_00 = AottgUi.Points(width);
		height_00 = AottgUi.Points(height);
		pGVar1 = AottgUi.Layout("Column", null, null, null, null, 0.0, width_00, height_00, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		return pGVar1;
	}

	[Token(Token = "0x6000FEA")]
	[Address(RVA = "0x57B9950", Offset = "0x57B8950", VA = "0x57B9950")]
	private static GisketchUIBindingDefinition Enabled(string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileBanner.c (Gisketch.Aottg2UI.Game.AottgProfileBanner$$Enabled): clean
		GisketchUIBindingDefinition __this;

		__this = new GisketchUIBindingDefinition();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.enabled = key;
		return __this;
	}

	[Token(Token = "0x6000FEB")]
	[Address(RVA = "0x57B99C0", Offset = "0x57B89C0", VA = "0x57B99C0")]
	private static GisketchUIBindingDefinition TextVisible(string textKey, string visibleKey)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileBanner.c (Gisketch.Aottg2UI.Game.AottgProfileBanner$$TextVisible): clean
		GisketchUIBindingDefinition __this;

		__this = new GisketchUIBindingDefinition();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.text = textKey;
		__this.visible = visibleKey;
		return __this;
	}

	[Token(Token = "0x6000FEC")]
	[Address(RVA = "0x57B9A40", Offset = "0x57B8A40", VA = "0x57B9A40")]
	private static GisketchUIBindingDefinition BoundCta(string textKey)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileBanner.c (Gisketch.Aottg2UI.Game.AottgProfileBanner$$BoundCta): clean
		GisketchUIBindingDefinition __this;

		__this = new GisketchUIBindingDefinition();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.text = textKey;
		__this.enabled = "account.auth.idle";
		return __this;
	}

	[Token(Token = "0x6000FED")]
	[Address(RVA = "0x57B9AD0", Offset = "0x57B8AD0", VA = "0x57B9AD0")]
	private static GisketchMotionDefinition RevealMotion()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileBanner.c (Gisketch.Aottg2UI.Game.AottgProfileBanner$$RevealMotion): clean
		GisketchMotionDefinition pGVar1;

		pGVar1 = AottgUi.Motion("fade", null, 0.14, 0.0, 0.0, 0);
		return pGVar1;
	}

	[Token(Token = "0x6000FEE")]
	[Address(RVA = "0x57B9B20", Offset = "0x57B8B20", VA = "0x57B9B20")]
	public AottgProfileBanner()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileBanner.c (Gisketch.Aottg2UI.Game.AottgProfileBanner$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileBanner.c.

	// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgProfileBanner.c();
		AottgProfileBanner.c.__9 =(AottgProfileBanner.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_0: 1 lines keep C-only constructs
	private void c__Build_b__0_0(AottgUi loggedOut)
	{
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgProfileBanner___c_StaticFields pGVar1;
		Action<AottgUi> __this_00;
		GisketchLayoutDefinition layout;

		style = "accountBannerContent";
		pGVar1 = typeof(AottgProfileBanner.c).static_fields;
		__this_00 = pGVar1.__9__0_3;
		if (__this_00 == null) {
			if ((typeof(AottgProfileBanner.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgProfileBanner.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this_00 = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_3);
			pGVar1 = typeof(AottgProfileBanner.c).static_fields;
			pGVar1.__9__0_3 = __this_00;
		}
		layout = AottgUi.Layout("Row", "SpaceBetween", "Center", null, null, 12.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
		if (loggedOut == null) {
			throw new NullReferenceException();
		}
		loggedOut.Panel(style, __this_00, "account-banner-logged-out-content", layout, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_3: 1 lines keep C-only constructs
	private void c__Build_b__0_3(AottgUi content)
	{
		String pSVar1;
		GisketchNodeDefinition pGVar2;
		GisketchUIBindingDefinition __this_00;

		if (content != null) {
			content.TextKey("MainMenu.Account.LoggedOut", "accountBannerSubtext", "account-logged-out-status", null, null);
			pGVar2 = content.ButtonKey(0, "MainMenu.Account.SignIn", "account.openLogin", "account-login-open", null, null, "material-icons/login");
			pSVar1 = "account.auth.idle";
			if (Il2CppMethodInitialized_07545394 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchUIBindingDefinition)) ;
				Il2CppMethodInitialized_07545394 = true;
			}
			__this_00 = new GisketchUIBindingDefinition();
			if (__this_00 != null) {
				__this_00.enabled = pSVar1;
				if (pGVar2 != null) {
					pGVar2.bind = __this_00;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_1: 1 lines keep C-only constructs
	private void c__Build_b__0_1(AottgUi offline)
	{
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgProfileBanner___c_StaticFields pGVar1;
		Action<AottgUi> __this_00;
		GisketchLayoutDefinition layout;

		style = "accountBannerContent";
		pGVar1 = typeof(AottgProfileBanner.c).static_fields;
		__this_00 = pGVar1.__9__0_4;
		if (__this_00 == null) {
			if ((typeof(AottgProfileBanner.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgProfileBanner.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this_00 = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_4);
			pGVar1 = typeof(AottgProfileBanner.c).static_fields;
			pGVar1.__9__0_4 = __this_00;
		}
		layout = AottgUi.Layout("Column", null, "Stretch", null, null, 8.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
		if (offline == null) {
			throw new NullReferenceException();
		}
		offline.Panel(style, __this_00, "account-banner-offline-content", layout, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_4: 1 lines keep C-only constructs
	private void c__Build_b__0_4(AottgUi content)
	{
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgProfileBanner___c_StaticFields pGVar1;
		Action<AottgUi> __this_00;
		GisketchLayoutDefinition pGVar2;
		GisketchNodeDefinition pGVar3;
		GisketchLength width;
		GisketchUIBindingDefinition pGVar4;

		style = "default";
		pGVar1 = typeof(AottgProfileBanner.c).static_fields;
		__this_00 = pGVar1.__9__0_5;
		if (__this_00 == null) {
			if ((typeof(AottgProfileBanner.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgProfileBanner.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this_00 = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_5);
			pGVar1 = typeof(AottgProfileBanner.c).static_fields;
			pGVar1.__9__0_5 = __this_00;
		}
		pGVar2 = AottgUi.Layout("Row", "SpaceBetween", "Center", null, null, 12.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (content != null) {
			content.Panel(style, __this_00, "account-offline-banner-top", pGVar2, null);
			pGVar3 = content.ButtonKey(0, "MainMenu.Account.GoOnline", "account.goOnline", "account-go-online", null, null, "material-icons/login");
			width = AottgUi.Percent(100.0);
			pGVar2 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (pGVar3 != null) {
				pGVar3.layout = pGVar2;
				pGVar4 = AottgProfileBanner.BoundCta("account.goOnlineCta") ;
				pGVar3.bind = pGVar4;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_5: 1 lines keep C-only constructs
	private void c__Build_b__0_5(AottgUi top)
	{
		object @object;
		String pSVar1;
		Gisketch_Aottg2UI_Game_AottgProfileBanner___c_StaticFields pGVar2;
		Action<AottgUi> __this_00;
		GisketchLength pGVar3;
		GisketchLayoutDefinition pGVar4;
		GisketchNodeDefinition pGVar5;
		GisketchUIBindingDefinition __this_01;

		pSVar1 = "default";
		pGVar2 = typeof(AottgProfileBanner.c).static_fields;
		__this_00 = pGVar2.__9__0_6;
		if (__this_00 == null) {
			if ((typeof(AottgProfileBanner.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar2 = typeof(AottgProfileBanner.c).static_fields;
			}
			@object = (object)pGVar2.__9;
			__this_00 = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_6);
			pGVar2 = typeof(AottgProfileBanner.c).static_fields;
			pGVar2.__9__0_6 = __this_00;
		}
		pGVar3 = AottgUi.Points(0.0);
		pGVar4 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, null, null, pGVar3, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
		if (top != null) {
			top.Panel(pSVar1, __this_00, "account-banner-offline-name-column", pGVar4, null);
			pGVar5 = top.ButtonKey(1, "Common.Edit", "main.profile", "account-offline-profile-edit", null, null, "gear");
			pGVar3 = AottgUi.Points(112.0);
			pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar3, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (pGVar5 != null) {
				pGVar5.layout = pGVar4;
				pSVar1 = "account.auth.idle";
				__this_01 = new GisketchUIBindingDefinition();
				if (__this_01 != null) {
					__this_01.enabled = pSVar1;
					pGVar5.bind = __this_01;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_6: 2 lines keep C-only constructs
	private void c__Build_b__0_6(AottgUi names)
	{
		String pSVar1;
		String pSVar2;
		GisketchNodeDefinition pGVar3;
		GisketchUIBindingDefinition __this_00;
		GisketchMotionDefinition pGVar4;
		GisketchLayoutDefinition pGVar5;
		MethodInfo method_00;

		if (names != null) {
			pGVar3 = names.Text("Scout", "accountBannerName", "account-offline-ingame-display-name", null, null);
			pSVar2 = "account.ingameDisplayName";
			pSVar1 = "account.identity.ready";
			if (Il2CppMethodInitialized_07545395 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchUIBindingDefinition)) ;
				Il2CppMethodInitialized_07545395 = true;
			}
			__this_00 = new GisketchUIBindingDefinition();
			if (__this_00 != null) {
				__this_00.text = pSVar2;
				__this_00.visible = pSVar1;
				if (pGVar3 != null) {
					pGVar3.bind = __this_00;
					pGVar3.active = false;
					pGVar4 = AottgUi.Motion("fade", null, 0.14, 0.0, 0.0, 0);
					method_00 = (MethodInfo)&pGVar3.enter;
					pGVar3.enter = pGVar4;
					pGVar5 = AottgProfileBanner.NameTextLayout();
					pGVar3.layout = pGVar5;
					pGVar3 = names.TextKey("MainMenu.Account.OfflineMode", "accountBannerSubtext", "account-offline-status", null, null);
					pGVar5 = AottgProfileBanner.NameTextLayout();
					if (pGVar3 != null) {
						pGVar3.layout = pGVar5;
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_2: 1 lines keep C-only constructs
	private void c__Build_b__0_2(AottgUi loggedIn)
	{
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgProfileBanner___c_StaticFields pGVar1;
		Action<AottgUi> __this_00;
		GisketchLayoutDefinition layout;

		style = "accountBannerContent";
		pGVar1 = typeof(AottgProfileBanner.c).static_fields;
		__this_00 = pGVar1.__9__0_7;
		if (__this_00 == null) {
			if ((typeof(AottgProfileBanner.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgProfileBanner.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this_00 = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_7);
			pGVar1 = typeof(AottgProfileBanner.c).static_fields;
			pGVar1.__9__0_7 = __this_00;
		}
		layout = AottgUi.Layout("Column", null, "Stretch", null, null, 8.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
		if (loggedIn == null) {
			throw new NullReferenceException();
		}
		loggedIn.Panel(style, __this_00, "account-profile-banner-content", layout, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_7: 2 lines keep C-only constructs
	private void c__Build_b__0_7(AottgUi content)
	{
		object pIVar1;
		String pSVar2;
		Action<AottgUi> pSVar3;
		GisketchLayoutDefinition pGVar4;
		Gisketch_Aottg2UI_Game_AottgProfileBanner___c_StaticFields pGVar5;

		pSVar2 = "default";
		pGVar5 = typeof(AottgProfileBanner.c).static_fields;
		pSVar3 = pGVar5.__9__0_8;
		if (pSVar3 == null) {
			if ((typeof(AottgProfileBanner.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar5 = typeof(AottgProfileBanner.c).static_fields;
			}
			pIVar1 = (object)pGVar5.__9;
			pSVar3 = new Action<AottgUi>(pIVar1, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_8);
			pGVar5 = typeof(AottgProfileBanner.c).static_fields;
			pGVar5.__9__0_8 = pSVar3;
		}
		pGVar4 = AottgUi.Layout("Row", "SpaceBetween", "Center", null, null, 12.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (content == null) {
			throw new NullReferenceException();
		}
		content.Panel(pSVar2, pSVar3, "account-profile-banner-top", pGVar4, null);
		pSVar2 = "default";
		pGVar5 = typeof(AottgProfileBanner.c).static_fields;
		pSVar3 = pGVar5.__9__0_9;
		if (pSVar3 == null) {
			if ((typeof(AottgProfileBanner.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar5 = typeof(AottgProfileBanner.c).static_fields;
			}
			pIVar1 = (object)pGVar5.__9;
			pSVar3 = new Action<AottgUi>(pIVar1, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_9);
			pGVar5 = typeof(AottgProfileBanner.c).static_fields;
			pGVar5.__9__0_9 = pSVar3;
		}
		pGVar4 = AottgUi.Layout("Row", "FlexEnd", "Center", null, null, 8.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		content.Panel(pSVar2, pSVar3, "account-profile-banner-actions", pGVar4, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_8: 1 lines keep C-only constructs
	private void c__Build_b__0_8(AottgUi top)
	{
		object @object;
		String pSVar1;
		Gisketch_Aottg2UI_Game_AottgProfileBanner___c_StaticFields pGVar2;
		Action<AottgUi> __this_00;
		GisketchLength pGVar3;
		GisketchLayoutDefinition pGVar4;
		GisketchNodeDefinition pGVar5;
		GisketchUIBindingDefinition __this_01;

		pSVar1 = "default";
		pGVar2 = typeof(AottgProfileBanner.c).static_fields;
		__this_00 = pGVar2.__9__0_10;
		if (__this_00 == null) {
			if ((typeof(AottgProfileBanner.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar2 = typeof(AottgProfileBanner.c).static_fields;
			}
			@object = (object)pGVar2.__9;
			__this_00 = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_10);
			pGVar2 = typeof(AottgProfileBanner.c).static_fields;
			pGVar2.__9__0_10 = __this_00;
		}
		pGVar3 = AottgUi.Points(0.0);
		pGVar4 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, null, null, pGVar3, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
		if (top != null) {
			top.Panel(pSVar1, __this_00, "account-banner-name-column", pGVar4, null);
			pGVar5 = top.ButtonKey(1, "Common.Edit", "main.profile", "account-profile-edit", null, null, "gear");
			pGVar3 = AottgUi.Points(112.0);
			pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar3, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (pGVar5 != null) {
				pGVar5.layout = pGVar4;
				pSVar1 = "account.auth.idle";
				__this_01 = new GisketchUIBindingDefinition();
				if (__this_01 != null) {
					__this_01.enabled = pSVar1;
					pGVar5.bind = __this_01;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_10: 3 lines keep C-only constructs
	private void c__Build_b__0_10(AottgUi names)
	{
		String pSVar1;
		String pSVar2;
		GisketchNodeDefinition pGVar3;
		GisketchUIBindingDefinition pGVar4;
		GisketchMotionDefinition pGVar5;
		GisketchLayoutDefinition pGVar6;
		GisketchLength pGVar7;
		GisketchLength pGVar8;
		MethodInfo pMVar9;

		if (names != null) {
			pGVar3 = names.Text("Scout", "accountBannerName", "account-ingame-display-name", null, null);
			pSVar2 = "account.ingameDisplayName";
			pSVar1 = "account.identity.ready";
			if (Il2CppMethodInitialized_07545395 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchUIBindingDefinition)) ;
				Il2CppMethodInitialized_07545395 = true;
			}
			pGVar4 = new GisketchUIBindingDefinition();
			if (pGVar4 != null) {
				pGVar4.text = pSVar2;
				pGVar4.visible = pSVar1;
				if (pGVar3 != null) {
					pGVar3.bind = pGVar4;
					pGVar3.active = false;
					pGVar5 = AottgUi.Motion("fade", null, 0.14, 0.0, 0.0, 0);
					pMVar9 = (MethodInfo)&pGVar3.enter;
					pGVar3.enter = pGVar5;
					pGVar6 = AottgProfileBanner.NameTextLayout();
					pGVar3.layout = pGVar6;
					pGVar7 = AottgUi.Points(220.0);
					pGVar8 = AottgUi.Points(28.0);
					pGVar6 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar7, pGVar8, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
					names.Skeleton("account-ingame-display-name-skeleton", pGVar6, "skeleton", "account.identity.loading", null, null);
					pGVar3 = names.Text("Account", "accountBannerSubtext", "account-auth-display-name", null, null);
					pSVar2 = "account.identity.ready";
					pSVar1 = "account.authDisplayName";
					pGVar4 = new GisketchUIBindingDefinition();
					if (pGVar4 != null) {
						pGVar4.text = pSVar1;
						pGVar4.visible = pSVar2;
						if (pGVar3 != null) {
							pGVar3.bind = pGVar4;
							pGVar3.active = false;
							pGVar5 = AottgUi.Motion("fade", null, 0.14, 0.0, 0.0, 0) ;
							pMVar9 = (MethodInfo)&pGVar3.enter;
							pGVar3.enter = pGVar5;
							pGVar6 = AottgProfileBanner.NameTextLayout();
							pGVar3.layout = pGVar6;
							pGVar7 = AottgUi.Points(170.0);
							pGVar8 = AottgUi.Points(18.0);
							pGVar6 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar7, pGVar8, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
							names.Skeleton("account-auth-display-name-skeleton", pGVar6, "skeleton", "account.identity.loading", null, null);
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_9: clean
	private void c__Build_b__0_9(AottgUi actions)
	{
		GisketchNodeDefinition pGVar1;
		GisketchLayoutDefinition pGVar2;
		GisketchUIBindingDefinition pGVar3;

		if (actions != null) {
			pGVar1 = actions.ButtonKey(1, "MainMenu.Account.GoOffline", "account.goOffline", "account-go-offline", null, null, "material-icons/wifi_off");
			pGVar2 = AottgUi.Layout("Column", null, null, null, null, 0.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
			if (pGVar1 != null) {
				pGVar1.layout = pGVar2;
				pGVar3 = AottgProfileBanner.BoundCta("account.goOfflineCta") ;
				pGVar1.bind = pGVar3;
				pGVar1 = actions.ButtonKey(6, "MainMenu.Account.Logout", "account.logout", "account-logout", null, null, "material-icons/logout");
				pGVar2 = AottgUi.Layout("Column", null, null, null, null, 0.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
				if (pGVar1 != null) {
					pGVar1.layout = pGVar2;
					pGVar3 = AottgProfileBanner.BoundCta("account.logoutCta");
					pGVar1.bind = pGVar3;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}
}
