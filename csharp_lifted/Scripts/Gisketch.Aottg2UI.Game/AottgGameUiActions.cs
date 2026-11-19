// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameUiActions
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using ApplicationManagers.Changelog;
using ApplicationManagers.Credits;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;
using Settings;
using SimpleJSONFixed;
using TMPro;
using UI;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001B6")]
public sealed class AottgGameUiActions : GisketchController
{
	[Token(Token = "0x20001B7")]
	private enum CustomContentType
	{
		[Token(Token = "0x4000952")]
		Map,
		[Token(Token = "0x4000953")]
		Logic,
		[Token(Token = "0x4000954")]
		Addon
	}

	[Token(Token = "0x400093F")]
	private const string LoginToastKey = "account.login";

	[Token(Token = "0x4000940")]
	private const string RegisterToastKey = "account.register.email";

	[Token(Token = "0x4000941")]
	private const string ForgotPasswordToastKey = "account.forgotPassword";

	[Token(Token = "0x4000942")]
	private const string LogoutToastKey = "account.logout";

	[Token(Token = "0x4000943")]
	private const string RefreshAccountToastKey = "account.refresh";

	[Token(Token = "0x4000944")]
	private const string GoOfflineToastKey = "account.goOffline";

	[Token(Token = "0x4000945")]
	private const string GoOnlineToastKey = "account.goOnline";

	[Token(Token = "0x4000946")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private bool _authMethodsUnavailable;

	[Token(Token = "0x4000947")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x31")]
	private bool _lastAuthLoading;

	[Token(Token = "0x4000948")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x32")]
	private bool _lastIdentityLoading;

	[Token(Token = "0x4000949")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x33")]
	private bool _checkedChangelogAutoOpen;

	[Token(Token = "0x400094A")]
	private const string NetworkToastKey = "network.error";

	[Token(Token = "0x400094B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	private bool _profileIdentityLoading;

	[Token(Token = "0x400094C")]
	private const string ProfileSaveToastKey = "profile.save";

	[Token(Token = "0x400094D")]
	private const string SettingsSaveToastKey = "settings.save";

	[Token(Token = "0x400094E")]
	private const string SettingsLoadToastKey = "settings.load";

	[Token(Token = "0x400094F")]
	private const string SettingsDefaultToastKey = "settings.default";

	[Token(Token = "0x4000950")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string _settingsLeaveTargetScreenId;

	[Token(Token = "0x60009B0")]
	[Address(RVA = "0x5D59760", Offset = "0x5D58760", VA = "0x5D59760")]
	private void RegisterAccountFormActions()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$RegisterAccountFormActions): 11 lines keep C-only constructs
		object @object;
		String actionId;
		Action<GisketchActionContext> pSVar1;
		Gisketch_Aottg2UI_Game_AottgGameUiActions___c_StaticFields pGVar2;

		if (Il2CppMethodInitialized_07548695 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_GoOnline) ;
			Il2CppMethodInitialized_07548695 = true;
		}
		pSVar1 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterAccountFormActions_b__0_0);
		this.RegisterAction("account.openRegister", pSVar1);
		pSVar1 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterAccountFormActions_b__0_1);
		this.RegisterAction("account.openForgotPassword", pSVar1);
		pSVar1 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_SetKeepSignedIn);
		this.RegisterAction("account.keepSignedIn", pSVar1);
		pSVar1 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterWithEmail);
		this.RegisterAction("account.register.email", pSVar1);
		pSVar1 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_ForgotPassword);
		this.RegisterAction("account.forgotPassword", pSVar1);
		actionId = "account.details";
		pGVar2 = typeof(AottgGameUiActions.c).static_fields;
		pSVar1 = pGVar2.__9__0_2;
		if (pSVar1 == null) {
			if ((typeof(AottgGameUiActions.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar2 = typeof(AottgGameUiActions.c).static_fields;
			}
			@object = (object)pGVar2.__9;
			pSVar1 = new Action<GisketchActionContext>(@object, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c_RegisterAccountFormActions_b__0_2);
			pGVar2 = typeof(AottgGameUiActions.c).static_fields;
			pGVar2.__9__0_2 = pSVar1;
		}
		if (this == null) {
			throw new NullReferenceException();
		}
		this.RegisterAction(actionId, pSVar1);
		pSVar1 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RefreshAccount);
		this.RegisterAction("account.refresh", pSVar1);
		pSVar1 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_Logout);
		this.RegisterAction("account.logout", pSVar1);
		pSVar1 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_GoOffline);
		this.RegisterAction("account.goOffline", pSVar1);
		pSVar1 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_GoOnline);
		this.RegisterAction("account.goOnline", pSVar1);
		return;
	}

	[Token(Token = "0x60009B1")]
	[Address(RVA = "0x5D59B60", Offset = "0x5D58B60", VA = "0x5D59B60")]
	private static void SetKeepSignedIn(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$SetKeepSignedIn): clean
		uint uVar1;
		bool value;

		if (context.Node == null) {
			value = false;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			value = (((context.Node).fields).value == "true");
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			AccountManager.SetKeepSignedIn(value);
			return;
		}
		AccountManager.SetKeepSignedIn(value);
		return;
	}

	[Token(Token = "0x60009B2")]
	[Address(RVA = "0x5D59C00", Offset = "0x5D58C00", VA = "0x5D59C00")]
	private static void SetKeepSignedInFromCheckbox(GisketchActionContext context, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$SetKeepSignedInFromCheckbox): clean
		bool value;

		value = AottgGameUiActions.CheckboxValue(context, id, true);
		AccountManager.SetKeepSignedIn(value);
		return;
	}

	[Token(Token = "0x60009B3")]
	[Address(RVA = "0x5D59C80", Offset = "0x5D58C80", VA = "0x5D59C80")]
	private static bool CheckboxValue(GisketchActionContext context, string id, bool fallback)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$CheckboxValue): 1 lines keep C-only constructs
		Component __this;
		bool bVar1;
		uint uVar2;
		Transform pUVar3;
		Object[] pSVar4;
		Object __this_00;
		String a;
		uint uVar5;

		bVar1 = ((Object)context.GameObject == null);
		if (!bVar1) {
			if ((((context.GameObject == null) ||(pUVar3 = context.GameObject.transform, pUVar3 == null)) ||(pUVar3 = pUVar3.root, pUVar3 == null)) ||(pSVar4 = pUVar3.GetComponentsInChildren<Toggle>(true), pSVar4 == null)) {
	label_05e59daf: ;
				throw new NullReferenceException();
			}
			uVar2 = (uint)pSVar4.Length;
			if (0 < (int)uVar2) {
				uVar5 = 0;
				do {
					if (uVar2 <= uVar5) {
						throw new IndexOutOfRangeException();
					}
					__this = (Component)pSVar4[(int)uVar5];
					if ((__this == null) ||(__this_00 = (Object)__this.gameObject, __this_00 == null)) goto label_05e59daf;
					a = __this_00.name;
					bVar1 = (a == id);
					if (bVar1) {
						return *(sbyte)&__this[0xc].klass != false;
					}
					uVar5 = uVar5 + 1;
					uVar2 = (uint)pSVar4.Length;
				} while ((int)uVar5 < (int)uVar2);
			}
		}
		return fallback;
	}

	[Token(Token = "0x60009B4")]
	[Address(RVA = "0x5D59DC0", Offset = "0x5D58DC0", VA = "0x5D59DC0")]
	private void RegisterWithEmail(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$RegisterWithEmail): 20 lines keep C-only constructs
		String a;
		GisketchActionContext GVar1;
		bool bVar2;
		ushort uVar3;
		AottgGameUiActions.c__DisplayClass4_0 __this_00;
		TMP_InputField pTVar4;
		String email;
		String value;
		String* ppSVar5;
		String pSVar6;
		Action<T1, T2> __this_01;
		MethodInfo in_RCX;
		GisketchActionContext targetAddress;
		int iVar8;

		__this_00 = il2cpp_codegen_object_new(typeof(AottgGameUiActions.c__DisplayClass4_0)) ;
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			targetAddress = &__this_00.context;
			__this_00.context.Node = context.Node;
			__this_00.context.InputSource = context.InputSource;
			*(uint)&__this_00.context.field_0x1c = context._28_4_;
			__this_00.context.ElementId = context.ElementId;
			__this_00.context.GameObject = context.GameObject;
			pSVar6 = "account-register-email";
			GVar1 = __this_00.context;
			pTVar4 = AottgGameUiActions.Input((GisketchActionContext)GVar1, pSVar6);
			bVar2 = ((Object)pTVar4 != null);
			if (bVar2) {
				if (pTVar4 == null) goto label_05e5a4d8;
				ppSVar5 = &pTVar4.m_Text;
			}
			else {
				ppSVar5 = *(String**)(g_data_07556758 + 0xb8);
			}
			if (*ppSVar5 != null) {
				email = (*ppSVar5).Trim();
				pSVar6 = "account-register-display-name";
				GVar1 = targetAddress.fields;
				pTVar4 = AottgGameUiActions.Input((GisketchActionContext)GVar1, pSVar6);
				bVar2 = ((Object)pTVar4 != null);
				if (bVar2) {
					if (pTVar4 == null) goto label_05e5a4d8;
					ppSVar5 = &pTVar4.m_Text;
				}
				else {
					ppSVar5 = *(String**)(g_data_07556758 + 0xb8);
				}
				if (*ppSVar5 != null) {
					value = (*ppSVar5).Trim();
					pSVar6 = "account-register-password";
					GVar1 = targetAddress.fields;
					pTVar4 = AottgGameUiActions.Input((GisketchActionContext)GVar1, pSVar6);
					bVar2 = ((Object)pTVar4 != null);
					pSVar6 = "account-register-confirm-password";
					if (bVar2) {
						if (pTVar4 == null) goto label_05e5a4d8;
						ppSVar5 = &pTVar4.m_Text;
					}
					else {
						ppSVar5 = *(String**)(g_data_07556758 + 0xb8);
					}
					a = *ppSVar5;
					GVar1 = targetAddress.fields;
					pTVar4 = AottgGameUiActions.Input((GisketchActionContext)GVar1, pSVar6);
					bVar2 = ((Object)pTVar4 != null);
					if (bVar2) {
						if (pTVar4 == null) goto label_05e5a4d8;
						ppSVar5 = &pTVar4.m_Text;
					}
					else {
						ppSVar5 = *(String**)(g_data_07556758 + 0xb8);
					}
					pSVar6 = *ppSVar5;
					bVar2 = AottgGameUiActions.LooksLikeEmail(email);
					if (bVar2) {
						bVar2 = String.IsNullOrEmpty(value);
						if (bVar2) {
							ppSVar5 = &"MainMenu.Account.MissingDisplayName";
						}
						else {
							if (value == null) goto label_05e5a4d8;
							if (value._stringLength < 0x1a) {
								bVar2 = String.IsNullOrWhiteSpace(value);
								if (!bVar2) {
									iVar8 = value._stringLength;
									if (2 < iVar8) {
	label_05e5a36c: ;
										if (a == null) goto label_05e5a4d8;
										if (a._stringLength < 8) {
											if ((typeof(Aottg2GisketchLocale)._2). cctor_finished_or_no_cctor == 0) {
											}
											ppSVar5 = &"MainMenu.Account.PasswordTooShort";
										}
										else {
											bVar2 = (a != pSVar6);
											if (!bVar2) {
												bVar2 = this.TryBeginAccountOperation("account.registerCta", "MainMenu.Account.Registering");
												if (!bVar2) {
													return;
												}
												if ((typeof(Aottg2GisketchLocale)._2). cctor_finished_or_no_cctor == 0) {
												}
												pSVar6 = Aottg2GisketchLocale.Text("MainMenu.Account.Registering");
												this.AccountToast(2, "information", "MainMenu.Account.CreateAccount", pSVar6, "account.register.email");
												AottgGameUiActions.SetKeepSignedInFromCheckbox((GisketchActionContext)targetAddress.fields, "account-register-keep-signed-in");
												__this_01 = (Action<T1, T2>)il2cpp_codegen_object_new(typeof(Action<bool, string>)) ;
												__this_01 = new Action<bool, object>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c__DisplayClass4_0_RegisterWithEmail_b__0);
												AccountManager.Register(value, email, a, (Action<bool, string>)__this_01, false);
												return;
											}
											if ((typeof(Aottg2GisketchLocale)._2). cctor_finished_or_no_cctor == 0) {
											}
											ppSVar5 = &"MainMenu.Account.PasswordMismatch";
										}
										goto label_05e5a26c;
									}
									if (0 < iVar8) {
										iVar8 = 0;
										do {
											uVar3 = value.get_Chars(iVar8);
											in_RCX = (MethodInfo)(ulong)(ushort)(uVar3 + 0x700);
											if ((((ushort)(uVar3 + 0x700) < 0x200) ||(in_RCX = (MethodInfo)(ulong)(ushort)(uVar3 + 0xcc00),(ushort)(uVar3 + 0xcc00) < 0x19c0)) || ((ushort)(uVar3 + 0xb200) < 0x5200)) goto label_05e5a36c;
											iVar8 = iVar8 + 1;
										} while (iVar8 < value._stringLength);
									}
								}
								if ((typeof(Aottg2GisketchLocale)._2). cctor_finished_or_no_cctor == 0) {
								}
								ppSVar5 = &"MainMenu.Account.DisplayNameTooShort";
							}
							else {
								if ((typeof(Aottg2GisketchLocale)._2). cctor_finished_or_no_cctor == 0) {
								}
								ppSVar5 = &"MainMenu.Account.DisplayNameTooLong";
							}
						}
					}
					else {
						ppSVar5 = &"MainMenu.Account.InvalidEmail";
					}
	label_05e5a26c: ;
					pSVar6 = Aottg2GisketchLocale.Text(*ppSVar5);
					this.AccountToast(1, "warning", "MainMenu.Account.CreateAccount", pSVar6, null);
					return;
				}
			}
		}
	label_05e5a4d8: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60009B5")]
	[Address(RVA = "0x5D5A950", Offset = "0x5D59950", VA = "0x5D5A950")]
	private void ForgotPassword(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ForgotPassword): 8 lines keep C-only constructs
		GisketchActionContext pGVar1;
		GisketchActionContext context_00;
		bool bVar2;
		AottgGameUiActions.c__DisplayClass5_0 __this_00;
		TMP_InputField x;
		String pSVar3;
		String content;
		Action<T1, T2> __this_01;
		String* ppSVar4;

		__this_00 = il2cpp_codegen_object_new(typeof(AottgGameUiActions.c__DisplayClass5_0)) ;
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			__this_00.context.Node = context.Node;
			__this_00.context.InputSource = context.InputSource;
			*(uint)&__this_00.context.field_0x1c = context._28_4_;
			__this_00.context.ElementId = context.ElementId;
			__this_00.context.GameObject = context.GameObject;
			pSVar3 = "account-forgot-email";
			pGVar1 = &__this_00.context;
			context_00 = pGVar1.fields;
			x = AottgGameUiActions.Input((GisketchActionContext)context_00, pSVar3);
			bVar2 = ((Object)x != null);
			if (bVar2) {
				if (x == null) goto label_05e5ac65;
				ppSVar4 = &x.m_Text;
			}
			else {
				ppSVar4 = *(String**)(g_data_07556758 + 0xb8);
			}
			if (*ppSVar4 != null) {
				pSVar3 = (*ppSVar4).Trim();
				bVar2 = AottgGameUiActions.LooksLikeEmail(pSVar3);
				if (bVar2) {
					bVar2 = this.TryBeginAccountOperation("account.forgotCta", "MainMenu.Account.SendingReset");
					if (bVar2) {
						content = Aottg2GisketchLocale.Text("MainMenu.Account.SendingReset");
						this.AccountToast(2, "information", "MainMenu.Account.ForgotPasswordTitle", content, "account.forgotPassword");
						__this_01 = new Action<bool, string>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c__DisplayClass5_0_ForgotPassword_b__0);
						AccountManager.ForgotPassword(pSVar3, (Action<bool, string>)__this_01, false);
						return;
					}
				}
				else {
					if ((typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor == 0 ) {
					}
					pSVar3 = Aottg2GisketchLocale.Text("MainMenu.Account.InvalidEmail");
					this.AccountToast(1, "warning", "MainMenu.Account.ForgotPasswordTitle", pSVar3, null);
				}
				return;
			}
		}
	label_05e5ac65: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60009B6")]
	[Address(RVA = "0x5D5AC80", Offset = "0x5D59C80", VA = "0x5D5AC80")]
	private void Logout(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$Logout): 1 lines keep C-only constructs
		bool bVar1;
		String content;
		Action<T1, T2> __this_00;

		bVar1 = this.TryBeginAccountOperation("account.logoutCta", "MainMenu.Account.LoggingOut");
		if (bVar1) {
			content = Aottg2GisketchLocale.Text("MainMenu.Account.LoggingOut");
			this.AccountToast(2, "information", "MainMenu.Account.Logout", content, "account.logout");
			__this_00 = new Action<bool, string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_Logout_b__6_0);
			AccountManager.Logout((Action<bool, string>)__this_00, false);
			return;
		}
		return;
	}

	[Token(Token = "0x60009B7")]
	[Address(RVA = "0x5D5ADE0", Offset = "0x5D59DE0", VA = "0x5D5ADE0")]
	private void RefreshAccount(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$RefreshAccount): 1 lines keep C-only constructs
		GisketchScreenRouter pGVar1;
		bool bVar2;
		bool rebuildProfileScreen;
		String pSVar3;
		GisketchUIRoot pGVar4;
		Action<T1, T2> __this_00;
		MethodInfo pMVar5;

		if (Il2CppMethodInitialized_0754869c == false) {
			Il2CppMethodInitialized_0754869c = true;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e5ae10;
	label_05e5afea: ;
			bVar2 = AccountManager.IsLoggedIn;
		}
		else {
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e5afea;
	label_05e5ae10: ;
			bVar2 = AccountManager.IsLoggedIn;
		}
		if (!bVar2) {
			if (((typeof(Aottg2GisketchLocale))._2). cctor_finished_or_no_cctor == 0) {
			}
			pSVar3 = Aottg2GisketchLocale.Text("MainMenu.Account.NotSignedIn");
			this.AccountToast(1, "warning", "Common.Refresh", pSVar3, null);
			this.RefreshAccountState();
			return;
		}
		bVar2 = this.TryBeginAccountOperation("account.refreshCta", "Common.Refreshing");
		if (!bVar2) {
			return;
		}
		pSVar3 = Aottg2GisketchLocale.Text("Common.Refreshing");
		pMVar5 = (MethodInfo *)"account.refresh";
		this.AccountToast(2, "information", "Common.Refresh", pSVar3, "account.refresh");
		pGVar4 = this.Root;
		rebuildProfileScreen = false;
		bVar2 = ((Object)pGVar4 != null);
		if (bVar2) {
			pGVar4 = this.Root;
			if (pGVar4 == null) goto label_05e5b0ba;
			if (pGVar4._Screens_k__BackingField == null) {
				rebuildProfileScreen = false;
			}
			else {
				pGVar4 = this.Root;
				if ((pGVar4 == null) ||(pGVar1 = pGVar4._Screens_k__BackingField, pGVar1 == null)) goto label_05e5b0ba;
				rebuildProfileScreen = (pGVar1._activeId == "profile");
			}
		}
		__this_00 = new Action<bool, string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RefreshAccount_b__7_0);
		if (this != null) {
			this.RefreshRemoteProfileAndCharacter(rebuildProfileScreen, true, (Action<bool, string>)__this_00, false);
			return;
		}
	label_05e5b0ba: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60009B8")]
	[Address(RVA = "0x5D5A7F0", Offset = "0x5D597F0", VA = "0x5D5A7F0")]
	private static bool IsValidDisplayNameLength(string displayName)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$IsValidDisplayNameLength): clean
		int iVar1;
		bool bVar2;
		ushort uVar3;
		bool bVar4;
		int index;

		bVar2 = String.IsNullOrWhiteSpace(displayName);
		if (!bVar2) {
			if (displayName == null) {
				throw new NullReferenceException();
			}
			iVar1 = displayName._stringLength;
			if (iVar1 < 3) {
				index = 0;
				if (iVar1 < 1) {
				}
				else {
					do {
						uVar3 = displayName.get_Chars(index);
						if ((ushort)(uVar3 + 0x700) < 0x200 ||((ushort)(uVar3 + 0xb200) < 0x5200 || (ushort)(uVar3 + 0xcc00) < 0x19c0)) {
							return true;
						}
						index = index + 1;
					} while (index < displayName._stringLength);
				}
			}
		}
		return bVar4;
	}

	[Token(Token = "0x60009B9")]
	[Address(RVA = "0x5D5B980", Offset = "0x5D5A980", VA = "0x5D5B980")]
	private static bool IsCjkCharacter(char ch)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$IsCjkCharacter): clean
		bool bVar1;

		if ((0x19bf < (ushort)(ch + 0xcc00)) && (0x51ff < (ushort)(ch + 0xb200))) {
			bVar1 = (ushort)(ch + 0x700) < 0x200;
		}
		return bVar1;
	}

	[Token(Token = "0x60009BA")]
	[Address(RVA = "0x5D5B9C0", Offset = "0x5D5A9C0", VA = "0x5D5B9C0")]
	private void GoOffline(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$GoOffline): clean
		bool bVar1;
		String pSVar2;

		bVar1 = this.TryBeginAccountOperation("account.goOfflineCta", "MainMenu.Account.GoingOffline");
		if (bVar1) {
			pSVar2 = Aottg2GisketchLocale.Text("MainMenu.Account.GoingOffline");
			this.AccountToast(2, "information", "MainMenu.Account.GoOffline", pSVar2, "account.goOffline");
			AccountManager.GoOffline();
			this.EndAccountOperation();
			this.RefreshAccountState();
			pSVar2 = Aottg2GisketchLocale.Text("MainMenu.Account.OfflineEnabled");
			this.AccountToast(4, "checkmark", "MainMenu.Account.GoOffline", pSVar2, "account.goOffline");
		}
		return;
	}

	[Token(Token = "0x60009BB")]
	[Address(RVA = "0x5D5BBD0", Offset = "0x5D5ABD0", VA = "0x5D5BBD0")]
	private void GoOnline(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$GoOnline): 1 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		String pSVar3;
		Action<T1, T2> __this_00;

		if (Il2CppMethodInitialized_0754869e == false) {
			Il2CppMethodInitialized_0754869e = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			bVar2 = AccountManager.HasRefreshToken;
		}
		else {
			bVar2 = AccountManager.HasRefreshToken;
		}
		if (bVar2) {
			bVar2 = this.TryBeginAccountOperation("account.goOnlineCta", "MainMenu.Account.GoingOnline");
			if (!bVar2) {
				return;
			}
			pSVar3 = Aottg2GisketchLocale.Text("MainMenu.Account.GoingOnline");
			this.AccountToast(2, "information", "MainMenu.Account.GoOnline", pSVar3, "account.goOnline");
			__this_00 = new Action<bool, string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_GoOnline_b__11_0);
			AccountManager.GoOnline((Action<bool, string>)__this_00, false);
			return;
		}
		if (((typeof(Aottg2GisketchLocale))._2). cctor_finished_or_no_cctor == 0) {
		}
		pSVar3 = Aottg2GisketchLocale.Text("MainMenu.Account.NoSavedSession");
		this.AccountToast(1, "warning", "MainMenu.Account.GoOnline", pSVar3, null);
		this.RefreshAccountState();
		return;
	}

	[Token(Token = "0x60009BC")]
	[Address(RVA = "0x5D5BE00", Offset = "0x5D5AE00", VA = "0x5D5BE00")]
	private static void OpenAccountDetails()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$OpenAccountDetails): clean
		BaseMenu pUVar1;
		ExternalLinkPopup pUVar2;
		bool bVar3;
		String url;

		url = AccountManager.GetWebLoginUrlWithSession();
		pUVar1 = UIManager.CurrentMenu;
		bVar3 = ((Object)pUVar1 != null);
		if (bVar3) {
			pUVar1 = UIManager.CurrentMenu;
			if (pUVar1 != null) {
				pUVar2 = pUVar1.ExternalLinkPopup;
				bVar3 = ((Object)pUVar2 != null);
				if (!bVar3) goto label_05e5bf4d;
				pUVar1 = UIManager.CurrentMenu;
				if ((pUVar1 != null) &&(pUVar2 = pUVar1.ExternalLinkPopup, pUVar2 != null)) {
					pUVar2.Show(url);
					return;
				}
			}
			throw new NullReferenceException();
		}
	label_05e5bf4d: ;
		Application.OpenURL(url);
		return;
	}

	[Token(Token = "0x60009BD")]
	[Address(RVA = "0x5D5BF80", Offset = "0x5D5AF80", VA = "0x5D5BF80")]
	private void ResetAccountCtas()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ResetAccountCtas): clean
		GisketchUIState pGVar1;
		String pSVar2;

		pGVar1 = this.State;
		if (pGVar1 == null) {
			return;
		}
		pGVar1 = this.State;
		pSVar2 = Aottg2GisketchLocale.Text("MainMenu.Account.SignIn");
		if (pGVar1 != null) {
			pGVar1.Set("account.loginCta", pSVar2);
			pGVar1 = this.State;
			pSVar2 = Aottg2GisketchLocale.Text("MainMenu.Account.CreateAccount");
			if (pGVar1 != null) {
				pGVar1.Set("account.registerCta", pSVar2);
				pGVar1 = this.State;
				pSVar2 = Aottg2GisketchLocale.Text("MainMenu.Account.SendResetLink");
				if (pGVar1 != null) {
					pGVar1.Set("account.forgotCta", pSVar2);
					pGVar1 = this.State;
					pSVar2 = Aottg2GisketchLocale.Text("MainMenu.Account.Logout");
					if (pGVar1 != null) {
						pGVar1.Set("account.logoutCta", pSVar2);
						pGVar1 = this.State;
						pSVar2 = Aottg2GisketchLocale.Text("Common.Refresh");
						if (pGVar1 != null) {
							pGVar1.Set("account.refreshCta", pSVar2);
							pGVar1 = this.State;
							pSVar2 = Aottg2GisketchLocale.Text("MainMenu.Account.GoOffline");
							if (pGVar1 != null) {
								pGVar1.Set("account.goOfflineCta", pSVar2);
								pGVar1 = this.State;
								pSVar2 = Aottg2GisketchLocale.Text("MainMenu.Account.GoOnline");
								if (pGVar1 != null) {
									pGVar1.Set("account.goOnlineCta", pSVar2);
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

	[Token(Token = "0x60009BE")]
	[Address(RVA = "0x5D5C240", Offset = "0x5D5B240", VA = "0x5D5C240")]
	private void SetAccountCta(string key, string text)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$SetAccountCta): clean
		bool bVar1;
		GisketchUIState pGVar2;

		pGVar2 = this.State;
		if (pGVar2 != null) {
			bVar1 = String.IsNullOrEmpty(key);
			if (!bVar1) {
				pGVar2 = this.State;
				if (pGVar2 == null) {
					throw new NullReferenceException();
				}
				pGVar2.Set(key, text);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60009BF")]
	[Address(RVA = "0x5D5A890", Offset = "0x5D59890", VA = "0x5D5A890")]
	private bool TryBeginAccountOperation(string ctaKey, string textKey)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$TryBeginAccountOperation): clean
		bool bVar1;
		bool bVar2;
		String message;
		GisketchUIState pGVar3;

		message = Aottg2GisketchLocale.Text(textKey);
		bVar1 = this.TryBeginAccountOperation(message);
		if (bVar1) {
			pGVar3 = this.State;
			if (pGVar3 != null) {
				bVar2 = String.IsNullOrEmpty(ctaKey);
				if (!bVar2) {
					pGVar3 = this.State;
					if (pGVar3 == null) {
						throw new NullReferenceException();
					}
					pGVar3.Set(ctaKey, message);
				}
			}
		}
		return bVar1;
	}

	[Token(Token = "0x60009C0")]
	[Address(RVA = "0x5D5C2A0", Offset = "0x5D5B2A0", VA = "0x5D5C2A0")]
	private bool TryBeginAccountOperation(string message)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$TryBeginAccountOperation): clean
		bool bVar1;
		GisketchUIState pGVar2;
		bool bVar3;

		bVar1 = this.TryBeginOperation("account.auth.operation", message);
		if (bVar1) {
			pGVar2 = this.State;
			if (pGVar2 == null) {
			}
			else {
				pGVar2 = this.State;
				if (pGVar2 == null) {
					throw new NullReferenceException();
				}
				pGVar2.Set("account.auth.message", message);
			}
		}
		return bVar3;
	}

	[Token(Token = "0x60009C1")]
	[Address(RVA = "0x5D5BB30", Offset = "0x5D5AB30", VA = "0x5D5BB30")]
	private void EndAccountOperation()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$EndAccountOperation): clean
		GisketchUIState pGVar1;

		this.ResetAccountCtas();
		this.EndOperation("account.auth.operation") ;
		pGVar1 = this.State;
		if (pGVar1 == null) {
			return;
		}
		pGVar1 = this.State;
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		pGVar1.Set("account.auth.message", (String)**(ulong*)(g_data_07556758 + 0xb8));
		return;
	}

	[Token(Token = "0x60009C2")]
	[Address(RVA = "0x5D5C350", Offset = "0x5D5B350", VA = "0x5D5C350")]
	private void RegisterAccountActions()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$RegisterAccountActions): 4 lines keep C-only constructs
		Action<GisketchActionContext> pSVar1;
		MethodInfo method_00;

		pSVar1 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterAccountActions_b__28_0);
		this.RegisterAction("account.openLogin", pSVar1);
		pSVar1 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_LoginWithEmail);
		this.RegisterAction("account.login.email", pSVar1);
		pSVar1 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterAccountActions_b__28_1);
		this.RegisterAction("account.login.discord", pSVar1);
		pSVar1 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterAccountActions_b__28_2);
		method_00 = (MethodInfo *)"account.login.google";
		this.RegisterAction("account.login.google", pSVar1);
		this.RegisterAccountFormActions();
		return;
	}

	[Token(Token = "0x60009C3")]
	[Address(RVA = "0x5D5C4D0", Offset = "0x5D5B4D0", VA = "0x5D5C4D0")]
	private void AddAccountListeners()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$AddAccountListeners): 3 lines keep C-only constructs
		Action pSVar1;

		pSVar1 = new Action((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_OnAccountLoggedIn);
		AccountManager.add_OnLoggedIn(pSVar1);
		pSVar1 = new Action((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_OnAccountLoggedOut);
		AccountManager.add_OnLoggedOut(pSVar1);
		pSVar1 = new Action((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RefreshAccountState);
		AccountManager.add_OnAuthMethodsChanged(pSVar1);
		return;
	}

	[Token(Token = "0x60009C4")]
	[Address(RVA = "0x5D5C5D0", Offset = "0x5D5B5D0", VA = "0x5D5C5D0")]
	private void RemoveAccountListeners()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$RemoveAccountListeners): 3 lines keep C-only constructs
		Action pSVar1;

		pSVar1 = new Action((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_OnAccountLoggedIn);
		AccountManager.remove_OnLoggedIn(pSVar1);
		pSVar1 = new Action((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_OnAccountLoggedOut);
		AccountManager.remove_OnLoggedOut(pSVar1);
		pSVar1 = new Action((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RefreshAccountState);
		AccountManager.remove_OnAuthMethodsChanged(pSVar1);
		return;
	}

	[Token(Token = "0x60009C5")]
	[Address(RVA = "0x5D5C6D0", Offset = "0x5D5B6D0", VA = "0x5D5C6D0")]
	private void StartAccountActions()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$StartAccountActions): 1 lines keep C-only constructs
		Action<T1, T2> __this_00;

		this.RefreshAccountState();
		__this_00 = new Action<bool, string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_StartAccountActions_b__31_0);
		AccountManager.RefreshAuthMethods((Action<bool, string>)__this_00);
		return;
	}

	[Token(Token = "0x60009C6")]
	[Address(RVA = "0x5D5C770", Offset = "0x5D5B770", VA = "0x5D5C770")]
	private void LateUpdateAccountActions()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$LateUpdateAccountActions): 1 lines keep C-only constructs
		GisketchScreenRouter pGVar1;
		bool bVar2;
		bool bVar3;
		GisketchUIState pGVar4;
		GisketchUIRoot pGVar5;
		sbyte cVar6;
		MethodInfo pMVar7;
		String* method_00;
		bool bVar8;

		if (Il2CppMethodInitialized_075486a8 == false) {
			method_00 = &"account.ready";
			Il2CppMethodInitialized_075486a8 = true;
		}
		bVar2 = AottgGameUiActions.IsAccountAuthLoading();
		bVar3 = AottgGameUiActions.IsAccountAuthLoading();
		bVar8 = true;
		cVar6 = true;
		if (!bVar3) {
			cVar6 = this._profileIdentityLoading;
		}
		if (this._lastAuthLoading == bVar2) {
			bVar8 = this._lastIdentityLoading != (bool)cVar6;
		}
		pGVar4 = this.State;
		if (pGVar4 != null) {
			pGVar4 = this.State;
			if (pGVar4 == null) goto label_05e5c8cf;
			pMVar7 = (MethodInfo *)"account.ready";
			bVar2 = pGVar4.GetBool("account.ready", false);
			if ((bool)(!bVar2 | bVar8)) {
				this.RefreshAccountState();
				if (bVar8) {
					pGVar5 = this.Root;
					bVar8 = ((Object)pGVar5 != null);
					if (bVar8) {
						pGVar5 = this.Root;
						if (pGVar5 == null) {
	label_05e5c8cf: ;
							throw new NullReferenceException();
						}
						if (pGVar5._Screens_k__BackingField !=null) {
							pGVar5 = this.Root;
							if ((pGVar5 == null) ||(pGVar1 = pGVar5._Screens_k__BackingField, pGVar1 == null)) goto label_05e5c8cf;
							pMVar7 = (MethodInfo *)"profile";
							bVar8 = (pGVar1._activeId == "profile");
							if (bVar8) {
								this.RefreshProfileState();
								return;
							}
						}
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x60009C7")]
	[Address(RVA = "0x5D5D6C0", Offset = "0x5D5C6C0", VA = "0x5D5D6C0")]
	private void OpenLoginDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$OpenLoginDialog): clean


		this.ShowAccountDialog("main-menu-login", false);
		return;
	}

	[Token(Token = "0x60009C8")]
	[Address(RVA = "0x5D5D8D0", Offset = "0x5D5C8D0", VA = "0x5D5D8D0")]
	private void RefreshAuthMethodsForDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$RefreshAuthMethodsForDialog): 1 lines keep C-only constructs
		Action<T1, T2> __this_00;

		__this_00 = new Action<bool, string>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RefreshAuthMethodsForDialog_b__34_0);
		AccountManager.RefreshAuthMethods((Action<bool, string>)__this_00);
		return;
	}

	[Token(Token = "0x60009C9")]
	[Address(RVA = "0x5D5D700", Offset = "0x5D5C700", VA = "0x5D5D700")]
	private void ShowAccountDialog(string dialogId, bool requireEmailPassword)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ShowAccountDialog): clean
		GisketchOverlayManager __this_00;
		bool bVar1;
		GisketchUIRoot pGVar2;
		String content;
		MethodInfo pMVar3;

		pMVar3 = (MethodInfo *)"account.auth.operation";
		bVar1 = this.IsOperationActive("account.auth.operation");
		if (bVar1) {
			return;
		}
		if (requireEmailPassword) {
			bVar1 = AccountManager.IsAuthMethodEnabled("email_password");
			if (!bVar1) {
				content = Aottg2GisketchLocale.Text("MainMenu.Account.EmailPasswordUnavailable");
				this.AccountToast(1, "warning", "MainMenu.Account.SignIn", content, null);
				return;
			}
		}
		this.CloseTopOverlay();
		pGVar2 = this.Root;
		bVar1 = ((Object)pGVar2 != null);
		if (bVar1) {
			pGVar2 = this.Root;
			if (pGVar2 == null) {
	label_05e5d8c4: ;
				throw new NullReferenceException();
			}
			if (pGVar2._Overlays_k__BackingField !=null) {
				pGVar2 = this.Root;
				if ((pGVar2 == null) ||(__this_00 = pGVar2._Overlays_k__BackingField, __this_00 == null)) goto label_05e5d8c4;
				__this_00.ShowDialog(dialogId, true) ;
			}
		}
		this.RefreshAuthMethodsForDialog();
		return;
	}

	[Token(Token = "0x60009CA")]
	[Address(RVA = "0x5D5DA10", Offset = "0x5D5CA10", VA = "0x5D5DA10")]
	private void LoginWithEmail(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$LoginWithEmail): 10 lines keep C-only constructs
		GisketchActionContext GVar1;
		bool bVar2;
		AottgGameUiActions.c__DisplayClass36_0 __this_00;
		TMP_InputField pTVar3;
		String* ppSVar4;
		String pSVar5;
		String pSVar6;
		String pSVar7;
		Action<T1, T2> __this_01;
		GisketchActionContext targetAddress;

		__this_00 = il2cpp_codegen_object_new(typeof(AottgGameUiActions.c__DisplayClass36_0));
		__this_00 = new Object();
		if (__this_00 == null) {
	label_05e5dea2: ;
			throw new NullReferenceException();
		}
		__this_00.__4__this = this;
		targetAddress = &__this_00.context;
		__this_00.context.Node = context.Node;
		__this_00.context.InputSource = context.InputSource;
		*(uint)&__this_00.context.field_0x1c = context._28_4_;
		__this_00.context.ElementId = context.ElementId;
		__this_00.context.GameObject = context.GameObject;
		pSVar5 = "account-login-email";
		GVar1 = __this_00.context;
		pTVar3 = AottgGameUiActions.Input((GisketchActionContext)GVar1, pSVar5);
		bVar2 = ((Object)pTVar3 != null);
		pSVar5 = "account-login-password";
		if (bVar2) {
			if (pTVar3 == null) goto label_05e5dea2;
			ppSVar4 = &pTVar3.m_Text;
		}
		else {
			ppSVar4 = *(String**)(g_data_07556758 + 0xb8);
		}
		pSVar7 = *ppSVar4;
		GVar1 = targetAddress.fields;
		pTVar3 = AottgGameUiActions.Input((GisketchActionContext)GVar1, pSVar5);
		bVar2 = ((Object)pTVar3 != null);
		if (bVar2) {
			if (pTVar3 == null) goto label_05e5dea2;
			ppSVar4 = &pTVar3.m_Text;
		}
		else {
			ppSVar4 = *(String**)(g_data_07556758 + 0xb8);
		}
		pSVar5 = *ppSVar4;
		bVar2 = AottgGameUiActions.LooksLikeEmail(pSVar7);
		if (bVar2) {
			bVar2 = String.IsNullOrEmpty(pSVar5);
			if (!bVar2) {
				bVar2 = this.TryBeginAccountOperation("account.loginCta", "MainMenu.Account.SigningIn");
				if (!bVar2) {
					return;
				}
				pSVar6 = Aottg2GisketchLocale.Text("MainMenu.Account.SigningIn");
				this.AccountToast(2, "information", "MainMenu.Account.SignIn", pSVar6, "account.login");
				pSVar6 = "account-login-keep-signed-in";
				GVar1 = targetAddress.fields;
				bVar2 = AottgGameUiActions.CheckboxValue((GisketchActionContext)GVar1, pSVar6, true);
				AccountManager.SetKeepSignedIn(bVar2);
				if (pSVar7 != null) {
					pSVar7 = pSVar7.Trim();
					__this_01 = new Action<bool, string>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c__DisplayClass36_0_LoginWithEmail_b__0);
					AccountManager.Login(pSVar7, pSVar5, (Action<bool, string>)__this_01, false);
					return;
				}
				goto label_05e5dea2;
			}
			ppSVar4 = &"MainMenu.Account.MissingPassword";
		}
		else {
			ppSVar4 = &"MainMenu.Account.InvalidEmail";
		}
		pSVar5 = Aottg2GisketchLocale.Text(*ppSVar4);
		this.AccountToast(1, "warning", "MainMenu.Account.Login", pSVar5, null);
		return;
	}

	[Token(Token = "0x60009CB")]
	[Address(RVA = "0x5D5DEC0", Offset = "0x5D5CEC0", VA = "0x5D5DEC0")]
	private void LoginWithOAuth(string provider)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$LoginWithOAuth): 3 lines keep C-only constructs
		bool bVar1;
		String* ppSVar2;
		String format;
		String pSVar3;
		Action<T1, T2> __this_00;

		bVar1 = (provider == "discord");
		if (bVar1) {
			ppSVar2 = &"Discord";
		}
		else {
			ppSVar2 = &"Google";
		}
		pSVar3 = *ppSVar2;
		format = Aottg2GisketchLocale.Text("MainMenu.Account.OpeningProvider");
		pSVar3 = String.Format(format, (object)pSVar3);
		bVar1 = this.TryBeginAccountOperation(pSVar3) ;
		if (bVar1) {
			this.AccountToast(2, "information", "MainMenu.Account.SignIn", pSVar3, "account.login");
			__this_00 = new Action<bool, string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_LoginWithOAuth_b__37_0);
			AccountManager.LoginWithOAuth(provider, (Action<bool, string>)__this_00, false);
			return;
		}
		return;
	}

	[Token(Token = "0x60009CC")]
	[Address(RVA = "0x5D5B0C0", Offset = "0x5D5A0C0", VA = "0x5D5B0C0")]
	public void RefreshAccountState()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$RefreshAccountState): clean
		bool value;
		bool value_00;
		bool bVar1;
		bool value_01;
		bool value_02;
		bool bVar2;
		GisketchUIState pGVar3;
		String pSVar4;
		MethodInfo pMVar5;
		bool bVar6;
		bool value_03;

		pGVar3 = this.State;
		if (pGVar3 == null) {
			return;
		}
		bVar6 = false;
		value = AccountManager.IsLoggedIn;
		value_00 = AottgGameUiActions.IsAccountAuthLoading();
		bVar1 = AottgGameUiActions.IsAccountAuthLoading();
		value_03 = true;
		if (!bVar1) {
			value_03 = this._profileIdentityLoading != false;
		}
		if (!value) {
			bVar6 = false;
			bVar1 = AccountManager.HasRefreshToken;
			if (bVar1) {
				bVar6 = !value_00;
			}
		}
		value_01 = false;
		bVar1 = false;
		value_02 = false;
		if (this._authMethodsUnavailable == false) {
			bVar1 = AccountManager.IsAuthMethodEnabled("email_password");
			if (this._authMethodsUnavailable == false) {
				value_02 = false;
				value_01 = AccountManager.IsAuthMethodEnabled("discord");
				if (this._authMethodsUnavailable == false) {
					value_02 = AccountManager.IsAuthMethodEnabled("google");
				}
			}
			else {
				value_01 = false;
				value_02 = false;
			}
		}
		bVar2 = this.IsOperationActive("account.auth.operation");
		this._lastAuthLoading = value_00;
		this._lastIdentityLoading = value_03;
		pGVar3 = this.State;
		if (pGVar3 != null) {
			pGVar3.SetBool("account.ready", true);
			pGVar3 = this.State;
			if (pGVar3 != null) {
				pGVar3.SetBool("account.loggedIn", value);
				pGVar3 = this.State;
				if (pGVar3 != null) {
					pGVar3.SetBool("account.loggedOut", (bVar6 == false && !value) && !value_00);
					pGVar3 = this.State;
					if (pGVar3 != null) {
						pGVar3.SetBool("account.offlineMode", bVar6);
						pGVar3 = this.State;
						if (pGVar3 != null) {
							pGVar3.SetBool("account.onlineMode", value || value_00);
							pGVar3 = this.State;
							if (pGVar3 != null) {
								pGVar3.SetBool("account.auth.loading", value_00);
								pGVar3 = this.State;
								if (pGVar3 != null) {
									pGVar3.SetBool("account.identity.loading", value_03);
									pGVar3 = this.State;
									if (pGVar3 != null) {
										pGVar3.SetBool("account.identity.ready", (bool)(value_03 ^ 1));
										pGVar3 = this.State;
										if (pGVar3 != null) {
											pGVar3.SetBool("account.auth.busy", value_00 || bVar2);
											pGVar3 = this.State;
											if (pGVar3 != null) {
												pMVar5 = (MethodInfo *)"account.auth.idle";
												pGVar3.SetBool("account.auth.idle", !value_00 && !bVar2);
												if (!value_00 && !bVar2) {
													this.ResetAccountCtas();
												}
												pGVar3 = this.State;
												if (pGVar3 != null) {
													pGVar3.SetBool("account.canEmailPassword", bVar1);
													pGVar3 = this.State;
													if (pGVar3 != null) {
														pGVar3.SetBool("account.canDiscord", value_01);
														pGVar3 = this.State;
														if (pGVar3 != null) {
															pGVar3.SetBool("account.canGoogle", value_02);
															pGVar3 = this.State;
															if (pGVar3 != null) {
																bVar6 = false;
																pGVar3.SetBool("account.showLoginDivider", (bool)((value_01 != false || value_02 != false) & bVar1));
																pGVar3 = this.State;
																if (bVar1 == false) {
																	bVar6 = (bool)(~value_01 & value_02 == false);
																}
																if (pGVar3 != null) {
																	pGVar3.SetBool("account.noMethods", bVar6);
																	pGVar3 = this.State;
																	if (pGVar3 != null) {
																		pGVar3.SetBool("account.methodsUnavailable", this._authMethodsUnavailable);
																		pGVar3 = this.State;
																		pSVar4 = AottgActiveProfile.CharacterName();
																		if (pGVar3 != null) {
																			pGVar3.Set("account.ingameDisplayName", pSVar4);
																			pGVar3 = this.State;
																			pSVar4 = AottgGameUiActions.AuthDisplayName();
																			if (pGVar3 != null) {
																				pGVar3.Set("account.authDisplayName", pSVar4);
																				this.AttachTruncation("account-ingame-display-name");
																				this.AttachTruncation("account-auth-display-name");
																				return;
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60009CD")]
	[Address(RVA = "0x5D5C8E0", Offset = "0x5D5B8E0", VA = "0x5D5C8E0")]
	private static bool IsAccountAuthLoading()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$IsAccountAuthLoading): clean
		sbyte cVar1;
		uint uVar2;
		bool bVar3;

		if (Il2CppMethodInitialized_075486af == false) {
			Il2CppMethodInitialized_075486af = true;
			uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		if (Il2CppMethodInitialized_075483cc == false) {
			Il2CppMethodInitialized_075483cc = true;
			uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(AccountManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			cVar1 = AccountManager._IsRefreshInProgress_k__BackingField;
		}
		else {
			cVar1 = *(sbyte)((long)(typeof(AccountManager)).static_fields + 0xa0 );
		}
		if (cVar1 != false) {
			if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0) {
				bVar3 = AccountManager.IsLoggedIn;
			}
			else {
				bVar3 = AccountManager.IsLoggedIn;
			}
			if (!bVar3) {
				if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0) {
					bVar3 = AccountManager.HasRefreshToken;
					return bVar3;
				}
				bVar3 = AccountManager.HasRefreshToken;
				return bVar3;
			}
		}
		return false;
	}

	[Token(Token = "0x60009CE")]
	[Address(RVA = "0x5D5C9E0", Offset = "0x5D5B9E0", VA = "0x5D5C9E0")]
	private bool IsAccountIdentityLoading()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$IsAccountIdentityLoading): clean
		bool bVar1;
		bool bVar2;

		bVar1 = AottgGameUiActions.IsAccountAuthLoading();
		if (!bVar1) {
			bVar2 = this._profileIdentityLoading != false;
		}
		return bVar2;
	}

	[Token(Token = "0x60009CF")]
	[Address(RVA = "0x5D5E070", Offset = "0x5D5D070", VA = "0x5D5E070")]
	private static string InGameDisplayName()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$InGameDisplayName): clean
		String pSVar1;

		return pSVar1;
	}

	[Token(Token = "0x60009D0")]
	[Address(RVA = "0x5D5E080", Offset = "0x5D5D080", VA = "0x5D5E080")]
	private static string AuthDisplayName()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$AuthDisplayName): clean
		uint uVar1;
		bool bVar2;
		String pSVar3;

		pSVar3 = AccountManager.Username;
		bVar2 = String.IsNullOrEmpty(pSVar3);
		uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		if (bVar2) {
			if (uVar1 == 0) {
			}
			pSVar3 = AccountManager.UserId;
			bVar2 = String.IsNullOrEmpty(pSVar3);
			if (bVar2) {
				pSVar3 = Aottg2GisketchLocale.Text("MainMenu.Account.NotSignedIn");
				return pSVar3;
			}
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
				pSVar3 = AccountManager.UserId;
				return pSVar3;
			}
			pSVar3 = AccountManager.UserId;
			return pSVar3;
		}
		if (uVar1 == 0) {
			pSVar3 = AccountManager.Username;
			return pSVar3;
		}
		pSVar3 = AccountManager.Username;
		return pSVar3;
	}

	[Token(Token = "0x60009D1")]
	[Address(RVA = "0x5D5E170", Offset = "0x5D5D170", VA = "0x5D5E170")]
	private void AttachTruncation(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$AttachTruncation): clean
		uint uVar1;
		GisketchScreenRouter pGVar2;
		GisketchView __this_00;
		bool bVar3;
		GisketchUIRoot pGVar4;
		Object x;
		AottgTruncatedTextTooltip x_00;

		pGVar4 = this.Root;
		bVar3 = ((Object)pGVar4 != null);
		if (bVar3) {
			pGVar4 = this.Root;
			if (pGVar4 == null) goto label_05e5e326;
			if (pGVar4._Screens_k__BackingField == null) goto label_05e5e28a;
			pGVar4 = this.Root;
			if ((pGVar4 == null) ||(pGVar2 = pGVar4._Screens_k__BackingField, pGVar2 == null)) goto label_05e5e326;
			if (pGVar2._active == null) {
				uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				goto joined_r0x05e5e295;
			}
			pGVar4 = this.Root;
			if (((pGVar4 == null) ||(pGVar2 = pGVar4._Screens_k__BackingField, pGVar2 == null)) ||(__this_00 = pGVar2._active, __this_00 == null)) goto label_05e5e326;
			x = (Object)__this_00.Find(id);
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
	label_05e5e28a: ;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
	joined_r0x05e5e295: ;
			x = null;
		}
		if (uVar1 == 0) {
		}
		bVar3 = (x != null);
		if (bVar3) {
			if (x == null) {
	label_05e5e326: ;
				throw new NullReferenceException();
			}
			x_00 = x.GetComponent<AottgTruncatedTextTooltip>();
			bVar3 = ((Object)x_00 == null);
			if (bVar3) {
				x.AddComponent<AottgTruncatedTextTooltip>();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60009D2")]
	[Address(RVA = "0x5D5A5A0", Offset = "0x5D595A0", VA = "0x5D5A5A0")]
	private static bool LooksLikeEmail(string email)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$LooksLikeEmail): clean
		bool bVar1;
		bool bVar2;
		String pSVar3;
		MailAddress __this;
		String b;

		bVar1 = String.IsNullOrWhiteSpace(email);
		if (!bVar1) {
			if (email == null) {
				throw new NullReferenceException();
			}
			pSVar3 = email.Trim();
			__this = new MailAddress(pSVar3);
			if (__this == null) {
				throw new NullReferenceException();
			}
			pSVar3 = __this.Address;
			b = email.Trim();
			bVar2 = (pSVar3 == b);
		}
		return bVar2;
	}

	[Token(Token = "0x60009D3")]
	[Address(RVA = "0x5D5A4F0", Offset = "0x5D594F0", VA = "0x5D5A4F0")]
	private static string FindInput(GisketchActionContext context, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$FindInput): 2 lines keep C-only constructs
		bool bVar1;
		TMP_InputField x;
		String* ppSVar2;

		x = AottgGameUiActions.Input(context, id);
		bVar1 = ((Object)x != null);
		if (bVar1) {
			if (x == null) {
				throw new NullReferenceException();
			}
			ppSVar2 = &x.m_Text;
		}
		else {
			ppSVar2 = *(String**)(g_data_07556758 + 0xb8);
		}
		return *ppSVar2;
	}

	[Token(Token = "0x60009D4")]
	[Address(RVA = "0x5D5E450", Offset = "0x5D5D450", VA = "0x5D5E450")]
	private static void ClearInput(GisketchActionContext context, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ClearInput): clean
		bool bVar1;
		TMP_InputField __this;

		__this = AottgGameUiActions.Input(context, id);
		bVar1 = ((Object)__this != null);
		if (bVar1) {
			if (__this == null) {
				throw new NullReferenceException();
			}
			__this.text = (String)**(ulong*)(g_data_07556758 + 0xb8);
			return;
		}
		return;
	}

	[Token(Token = "0x60009D5")]
	[Address(RVA = "0x5D5E330", Offset = "0x5D5D330", VA = "0x5D5E330")]
	private static TMP_InputField Input(GisketchActionContext context, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$Input): clean
		TMP_InputField __this;
		bool bVar1;
		uint uVar2;
		Transform pUVar3;
		Object[] pSVar4;
		Object __this_00;
		String a;
		uint uVar5;

		bVar1 = ((Object)context.GameObject == null);
		if (bVar1) {
			return null;
		}
		if ((((context.GameObject == null) ||(pUVar3 = context.GameObject.transform, pUVar3 == null)) ||(pUVar3 = pUVar3.root, pUVar3 == null)) ||(pSVar4 = pUVar3.GetComponentsInChildren<TMP_InputField>(true), pSVar4 == null)) {
	label_05e5e445: ;
			throw new NullReferenceException();
		}
		uVar2 = (uint)pSVar4.Length;
		if (0 < (int)uVar2) {
			uVar5 = 0;
			do {
				if (uVar2 <= uVar5) {
					throw new IndexOutOfRangeException();
				}
				__this = (TMP_InputField)pSVar4[(int)uVar5];
				if ((__this == null) ||(__this_00 = (Object)__this.gameObject, __this_00 == null)) goto label_05e5e445;
				a = __this_00.name;
				bVar1 = (a == id);
				if (bVar1) {
					return __this;
				}
				uVar5 = uVar5 + 1;
				uVar2 = (uint)pSVar4.Length;
			} while ((int)uVar5 < (int)uVar2);
		}
		return null;
	}

	[Token(Token = "0x60009D6")]
	[Address(RVA = "0x5D5D960", Offset = "0x5D5C960", VA = "0x5D5D960")]
	private void CloseTopOverlay()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$CloseTopOverlay): clean
		GisketchOverlayManager __this_00;
		bool bVar1;
		GisketchUIRoot pGVar2;

		pGVar2 = this.Root;
		bVar1 = ((Object)pGVar2 != null);
		if (!bVar1) {
			return;
		}
		pGVar2 = this.Root;
		if (pGVar2 != null) {
			if (pGVar2._Overlays_k__BackingField ==null) {
				return;
			}
			pGVar2 = this.Root;
			if ((pGVar2 != null) &&(__this_00 = pGVar2._Overlays_k__BackingField, __this_00 != null)) {
				__this_00.CloseTopForced(true);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60009D7")]
	[Address(RVA = "0x5D5A6C0", Offset = "0x5D596C0", VA = "0x5D5A6C0")]
	private void AccountToast(AottgToastVariant variant, string icon, string titleKey, string content, [Optional] string updateKey)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$AccountToast): 1 lines keep C-only constructs
		bool bVar1;
		GisketchUIRoot pGVar2;
		String title;
		AottgToastDefinition __this_00;

		pGVar2 = this.Root;
		bVar1 = ((Object)pGVar2 != null);
		if (bVar1) {
			pGVar2 = this.Root;
			title = Aottg2GisketchLocale.Text(titleKey);
			__this_00 = il2cpp_codegen_object_new(typeof(AottgToastDefinition)) ;
			__this_00 = new AottgToastDefinition(variant, icon, title, content, updateKey);
			if (pGVar2 == null) {
				throw new NullReferenceException();
			}
			pGVar2.ShowToast(__this_00);
			return;
		}
		return;
	}

	[Token(Token = "0x60009D8")]
	[Address(RVA = "0x5D5E500", Offset = "0x5D5D500", VA = "0x5D5E500")]
	private static string ErrorText(string error)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ErrorText): 7 lines keep C-only constructs
		bool bVar1;
		uint uVar2;
		String pSVar3;
		String* ppSVar4;

		uVar2 = _PrivateImplementationDetails_.ComputeStringHash(error);
		if (uVar2 < 0x6e2964a2) {
			if (uVar2 < 0x4b8649dd) {
				if (uVar2 < 0x37bfaa3a) {
					if (uVar2 == 0x13d66c10) {
						ppSVar4 = &"Display name must be at least 3 characters, or at least 1 CJK character.";
	label_05e5e876: ;
						bVar1 = (error == *ppSVar4);
						if (bVar1) {
							ppSVar4 = &"MainMenu.Account.DisplayNameTooShort";
							goto label_05e5e9e0;
						}
					}
					else if (uVar2 == 0x37bfaa39) {
						bVar1 = (error == "display_name_taken");
						if (bVar1) {
							ppSVar4 = &"MainMenu.Account.Error.DisplayNameTaken";
							goto label_05e5e9e0;
						}
					}
				}
				else if (uVar2 == 0x48714d78) {
					bVar1 = (error == "oauth_listener_error");
					if (bVar1) {
						ppSVar4 = &"MainMenu.Account.Error.OAuthListener";
						goto label_05e5e9e0;
					}
				}
				else if (uVar2 == 0x4b8649dc) {
					ppSVar4 = &"no_refresh_token";
					goto label_05e5e8a8;
				}
			}
			else if (uVar2 < 0x5ef038ca) {
				if (uVar2 == 0x4e5f9fea) {
					ppSVar4 = &"email_not_verified";
	label_05e5e947: ;
					bVar1 = (error == *ppSVar4);
					if (bVar1) {
						ppSVar4 = &"MainMenu.Account.Error.EmailNotVerified";
						goto label_05e5e9e0;
					}
				}
				else if (uVar2 == 0x5ef038c9) {
					bVar1 = (error == "invalid_credentials");
					if (bVar1) {
						ppSVar4 = &"MainMenu.Account.Error.InvalidCredentials";
						goto label_05e5e9e0;
					}
				}
			}
			else if (uVar2 == 0x6863bfec) {
				bVar1 = (error == "oauth_timeout");
				if (bVar1) {
					ppSVar4 = &"MainMenu.Account.Error.OAuthTimeout";
					goto label_05e5e9e0;
				}
			}
			else if (uVar2 == 0x6e2964a1) {
				bVar1 = (error == "oauth_missing_code");
				if (bVar1) {
					ppSVar4 = &"MainMenu.Account.Error.OAuthMissingCode";
					goto label_05e5e9e0;
				}
			}
		}
		else if (uVar2 < 0xbcccdb09) {
			if (uVar2 < 0xa6d04970) {
				if (uVar2 == 0xa09de9fe) {
					ppSVar4 = &"invalid_refresh_token";
	label_05e5e8a8: ;
					bVar1 = (error == *ppSVar4);
					if (bVar1) {
						ppSVar4 = &"MainMenu.Account.Error.SessionExpired";
						goto label_05e5e9e0;
					}
				}
				else if (uVar2 == 0xa6d0496f) {
					ppSVar4 = &"Account name must be at least 3 characters, or at least 1 CJK character.";
					goto label_05e5e876;
				}
			}
			else {
				if (uVar2 == 0xb89467ae) {
					ppSVar4 = &"Email is not verified.";
					goto label_05e5e947;
				}
				if (uVar2 == 0xbcccdb08) {
					ppSVar4 = &"username_or_email_taken";
					goto label_05e5e99d;
				}
			}
		}
		else if (uVar2 < 0xea218ca0) {
			if (uVar2 == 0xc13c007e) {
				bVar1 = (error == "bad_response");
				if (bVar1) {
					ppSVar4 = &"MainMenu.Account.Error.BadResponse";
					goto label_05e5e9e0;
				}
			}
			else if (uVar2 == 0xea218c9f) {
				ppSVar4 = &"email_taken";
				goto label_05e5e99d;
			}
		}
		else if (uVar2 == 0xef1c5af4) {
			ppSVar4 = &"email_already_taken";
	label_05e5e99d: ;
			bVar1 = (error == *ppSVar4);
			if (bVar1) {
				ppSVar4 = &"MainMenu.Account.Error.EmailTaken";
				goto label_05e5e9e0;
			}
		}
		else if (uVar2 == 0xf34f4058) {
			bVar1 = (error == "network_error");
			if (bVar1) {
				ppSVar4 = &"MainMenu.Account.Error.Network";
				goto label_05e5e9e0;
			}
		}
		bVar1 = String.IsNullOrEmpty(error);
		if (!bVar1) {
			return error;
		}
		ppSVar4 = &"MainMenu.Account.Error.Unknown";
	label_05e5e9e0: ;
		if ((typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor == 0) {
			pSVar3 = Aottg2GisketchLocale.Text(*ppSVar4);
			return pSVar3;
		}
		pSVar3 = Aottg2GisketchLocale.Text(*ppSVar4);
		return pSVar3;
	}

	[Token(Token = "0x60009D9")]
	[Address(RVA = "0x5D5EA10", Offset = "0x5D5DA10", VA = "0x5D5EA10")]
	private void StartChangelogActions()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$StartChangelogActions): 2 lines keep C-only constructs
		Action<AottgChangelogResult<LatestChangelogVersionResponse>> __this_00;

		if (this._checkedChangelogAutoOpen != false) {
			return;
		}
		this._checkedChangelogAutoOpen = true;
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Action<AottgChangelogResult<LatestChangelogVersionResponse>>));
		__this_00 = new Action<object>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_ApplyAutoOpenLatestVersionResult);
		AottgChangelogService.GetLatestVersion(__this_00, false);
		return;
	}

	[Token(Token = "0x60009DA")]
	[Address(RVA = "0x5D5EAC0", Offset = "0x5D5DAC0", VA = "0x5D5EAC0")]
	private void ApplyAutoOpenLatestVersionResult(AottgChangelogResult<LatestChangelogVersionResponse> result)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ApplyAutoOpenLatestVersionResult): 12 lines keep C-only constructs
		LatestChangelogVersionResponse latest;
		bool bVar1;
		int iVar2;
		ulong unaff_RBX;
		ulong unaff_R14;
		ulong unaff_R15;
		GisketchActionContext __;
		ulong unaff_retaddr;
		ulong in_stack_ffffffffffffffe8;
		byte[] auVar3 = new byte[24];

		auVar3._8_8_ = unaff_R14;
		auVar3._0_8_ = in_stack_ffffffffffffffe8;
		auVar3._16_8_ = unaff_R15;
		__._8_16_ = auVar3._8_16_;
		__.ElementId = (String)unaff_RBX;
		if (((result != null) && (latest = result._Value_k__BackingField, latest != null)) &&(result._State_k__BackingField != 0)) {
			iVar2 = AottgChangelogVersionStatus.Evaluate(latest, "11.15.2026");
			if (iVar2 != 0) {
				AottgChangelogDialogState.SetLatestVersion(latest);
				if (iVar2 == 2) {
					this.ShowOutdatedChangelogDialog(latest);
					return;
				}
				bVar1 = AottgChangelogSeenState.ShouldAutoOpen(latest);
				if (bVar1) {
					__._24_8_ = unaff_retaddr;
					this.OpenLatestChangelog(__);
					AottgChangelogSeenState.MarkSeen(latest);
					return;
				}
			}
		}
		return;
	}

	[Token(Token = "0x60009DB")]
	[Address(RVA = "0x5D5EE20", Offset = "0x5D5DE20", VA = "0x5D5EE20")]
	private void ApplyLatestEntryResult(AottgChangelogResult<ChangelogEntryResponse> result)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ApplyLatestEntryResult): clean


		this.ApplyEntryResult(result, 0);
		return;
	}

	[Token(Token = "0x60009DC")]
	[Address(RVA = "0x5D5EF90", Offset = "0x5D5DF90", VA = "0x5D5EF90")]
	private void RetryReader()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$RetryReader): clean
		uint uVar1;
		int iVar2;

		if (Il2CppMethodInitialized_075486bb == false) {
			Il2CppMethodInitialized_075486bb = true;
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07548787 == false) {
			Il2CppMethodInitialized_07548787 = true;
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgChangelogDialogState))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			iVar2 = AottgChangelogDialogState. _ReaderMode_k__BackingField;
		}
		else {
			iVar2 = *(int)((long)(typeof(AottgChangelogDialogState)). static_fields + 0x20);
		}
		if (iVar2 != 1) {
			this.OpenLatestChangelog(__);
			return;
		}
		if (((typeof(AottgChangelogDialogState))._2). cctor_finished_or_no_cctor == 0) {
		}
		if (Il2CppMethodInitialized_07548788 == false) {
			Il2CppMethodInitialized_07548788 = true;
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgChangelogDialogState))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		this.FetchEntry(AottgChangelogDialogState. _SelectedEntryId_k__BackingField);
		return;
	}

	[Token(Token = "0x60009DD")]
	[Address(RVA = "0x5D5F280", Offset = "0x5D5E280", VA = "0x5D5F280")]
	private void OpenPreviousChangelog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$OpenPreviousChangelog): clean
		uint uVar1;
		ChangelogSummaryResponse pAVar2;

		if (Il2CppMethodInitialized_075486bc == false) {
			Il2CppMethodInitialized_075486bc = true;
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pAVar2 = AottgChangelogDialogState.PreviousSummary;
		}
		else {
			pAVar2 = AottgChangelogDialogState.PreviousSummary;
		}
		if (pAVar2 == null) {
			return;
		}
		this.FetchEntry(pAVar2._Id_k__BackingField) ;
		return;
	}

	[Token(Token = "0x60009DE")]
	[Address(RVA = "0x5D5F300", Offset = "0x5D5E300", VA = "0x5D5F300")]
	private void OpenNextChangelog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$OpenNextChangelog): 2 lines keep C-only constructs
		uint uVar1;
		int iVar2;
		GisketchOverlayManager __this_00;
		bool bVar3;
		int pageSize;
		ChangelogSummaryResponse pAVar4;
		String title;
		GisketchUIRoot pGVar5;
		Action<AottgChangelogResult<PublicChangelogListResponse>> __this_01;

		if (Il2CppMethodInitialized_075486bd == false) {
			Il2CppMethodInitialized_075486bd = true;
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pAVar4 = AottgChangelogDialogState.NextLoadedSummary;
		}
		else {
			pAVar4 = AottgChangelogDialogState.NextLoadedSummary;
		}
		if (pAVar4 != null) {
			this.FetchEntry(pAVar4._Id_k__BackingField);
			return;
		}
		if (((typeof(AottgChangelogDialogState))._2). cctor_finished_or_no_cctor == 0) {
			bVar3 = AottgChangelogDialogState.HasMoreHistory;
		}
		else {
			bVar3 = AottgChangelogDialogState.HasMoreHistory;
		}
		if (bVar3) {
			if (((typeof(Aottg2GisketchLocale))._2). cctor_finished_or_no_cctor == 0) {
			}
			title = Aottg2GisketchLocale.Text("Changelog.LoadingPrevious") ;
			this.ApplyReaderLoading(title);
			pGVar5 = this.Root;
			if ((pGVar5 != null) &&(__this_00 = pGVar5._Overlays_k__BackingField, __this_00 != null)) {
				__this_00.ShowDialog("changelog-reader", true);
			}
			if (Il2CppMethodInitialized_07548789 == false) {
				Il2CppMethodInitialized_07548789 = true;
				uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = ((typeof(AottgChangelogDialogState))._2). cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			iVar2 = AottgChangelogDialogState. _HistoryPage_k__BackingField;
			__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(Action<AottgChangelogResult<PublicChangelogListResponse>>));
			__this_01 = new Action<object>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_ApplyPreviousPageResult);
			pageSize = AottgChangelogDialogState.HistoryPageSize;
			AottgChangelogService.GetList(__this_01, iVar2 + 1, pageSize, false);
			return;
		}
		return;
	}

	[Token(Token = "0x60009DF")]
	[Address(RVA = "0x5D5F810", Offset = "0x5D5E810", VA = "0x5D5F810")]
	private void ApplyPreviousPageResult(AottgChangelogResult<PublicChangelogListResponse> result)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ApplyPreviousPageResult): clean
		int iVar1;
		uint uVar2;
		PublicChangelogListResponse list;
		MethodInfo pMVar3;
		ChangelogSummaryResponse pAVar4;
		bool failed;
		bool refreshing;
		String error;
		bool empty;

		pMVar3 = (MethodInfo)result;
		if ((result == null) ||(iVar1 = result._State_k__BackingField, iVar1 == 0)) {
			return;
		}
		if (iVar1 == 3) {
			pMVar3 = (MethodInfo)this.CurrentReaderTitle();
			refreshing = result._IsRefreshing_k__BackingField;
			error = result._Error_k__BackingField;
			failed = true;
			empty = false;
			goto label_05e5f970;
		}
		list = result._Value_k__BackingField;
		if (list != null) {
			pMVar3 = null;
			AottgChangelogDialogState.AppendHistory(list);
		}
		if ((typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor == 0) {
			pAVar4 = AottgChangelogDialogState.PreviousSummary;
		}
		else {
			pAVar4 = AottgChangelogDialogState.PreviousSummary;
		}
		if (pAVar4 != null) {
			this.FetchEntry(pAVar4._Id_k__BackingField);
			return;
		}
		pMVar3 = (MethodInfo)this.CurrentReaderTitle();
		refreshing = result._IsRefreshing_k__BackingField;
		if ((typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_0754878a != false) goto label_05e5f942;
	label_05e5f996: ;
			Il2CppMethodInitialized_0754878a = true;
			uVar2 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_0754878a == false) goto label_05e5f996;
	label_05e5f942: ;
			uVar2 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		empty = AottgChangelogDialogState. _ReaderEntry_k__BackingField == null;
		failed = false;
		error = null;
	label_05e5f970: ;
		this.ApplyReaderState((String)pMVar3, refreshing, failed, empty, error);
		this.RefreshReader();
		return;
	}

	[Token(Token = "0x60009E0")]
	[Address(RVA = "0x5D5F100", Offset = "0x5D5E100", VA = "0x5D5F100")]
	private void FetchEntry(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$FetchEntry): 1 lines keep C-only constructs
		GisketchOverlayManager __this_00;
		bool bVar1;
		String title;
		GisketchUIRoot pGVar2;
		Action<AottgChangelogResult<ChangelogEntryResponse>> __this_01;

		bVar1 = String.IsNullOrEmpty(id);
		if (bVar1) {
			return;
		}
		AottgChangelogDialogState.ClearReader(1, id);
		title = Aottg2GisketchLocale.Text("Changelog.Title");
		this.ApplyReaderLoading(title);
		pGVar2 = this.Root;
		if ((pGVar2 != null) &&(__this_00 = pGVar2._Overlays_k__BackingField, __this_00 != null)) {
			__this_00.ShowDialog("changelog-reader", true);
		}
		__this_01 = new Action<AottgChangelogResult<ChangelogEntryResponse>>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_FetchEntry_b__59_0);
		AottgChangelogService.GetEntry(id, __this_01, false);
		return;
	}

	[Token(Token = "0x60009E1")]
	[Address(RVA = "0x5D5EE30", Offset = "0x5D5DE30", VA = "0x5D5EE30")]
	private void ApplyEntryResult(AottgChangelogResult<ChangelogEntryResponse> result, AottgChangelogReaderMode mode)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ApplyEntryResult): 5 lines keep C-only constructs
		int iVar1;
		ChangelogEntryResponse entry;
		String title;
		MethodInfo method_00;
		int extraout_EDX;
		int extraout_EDX_00;
		int mode_00;
		String* __this_00;
		bool empty;

		__this_00 = (String*)this;
		mode_00 = mode;
		if (Il2CppMethodInitialized_075486c0 == false) {
			__this_00 = &"Changelog.Title";
			Il2CppMethodInitialized_075486c0 = true;
			mode_00 = extraout_EDX;
		}
		if (result == null) {
			return;
		}
		iVar1 = result._State_k__BackingField;
		if (iVar1 == 0) {
			title = Aottg2GisketchLocale.Text("Changelog.Title") ;
			this.ApplyReaderLoading(title);
			return;
		}
		if (iVar1 == 3) {
			empty = false;
		}
		else {
			entry = result._Value_k__BackingField;
			if (entry == null) {
				empty = true;
			}
			else {
				empty = false;
				__this_00 = (String*)(ulong)(uint)mode;
				AottgChangelogDialogState.SetReader(mode, entry);
				mode_00 = extraout_EDX_00;
			}
		}
		method_00 = (MethodInfo)__this_00.ReaderTitle(result._Value_k__BackingField, mode_00);
		this.ApplyReaderState((String)method_00, result._IsRefreshing_k__BackingField, iVar1 == 3, empty, result._Error_k__BackingField);
		this.RefreshReader();
		return;
	}

	[Token(Token = "0x60009E2")]
	[Address(RVA = "0x5D5F9D0", Offset = "0x5D5E9D0", VA = "0x5D5F9D0")]
	private string CurrentReaderTitle()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$CurrentReaderTitle): 18 lines keep C-only constructs
		uint uVar1;
		ChangelogEntryResponse entry;
		String pSVar2;
		int in_EDX;
		int extraout_EDX;
		int extraout_EDX_00;
		int extraout_EDX_01;
		int extraout_EDX_02;
		int extraout_EDX_03;
		int extraout_EDX_04;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_075486c1 == false) {
			Il2CppMethodInitialized_075486c1 = true;
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			in_EDX = extraout_EDX;
		}
		else {
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			in_EDX = extraout_EDX_00;
		}
		if (Il2CppMethodInitialized_0754878a == false) {
			Il2CppMethodInitialized_0754878a = true;
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			in_EDX = extraout_EDX_01;
		}
		else {
			uVar1 = ((typeof(AottgChangelogDialogState))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			entry = AottgChangelogDialogState. _ReaderEntry_k__BackingField;
			in_EDX = extraout_EDX_02;
		}
		else {
			entry = *(ChangelogEntryResponse*)((long)(typeof(AottgChangelogDialogState)).static_fields + 0x18);
		}
		if (Il2CppMethodInitialized_07548787 == false) {
			Il2CppMethodInitialized_07548787 = true;
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
			in_EDX = extraout_EDX_03;
			klass = typeof(AottgChangelogDialogState);
		}
		else {
			uVar1 = ((typeof(AottgChangelogDialogState))._2). cctor_finished_or_no_cctor;
			klass = typeof(AottgChangelogDialogState);
		}
		typeof(AottgChangelogDialogState) =(AottgChangelogDialogState)klass;
		if (uVar1 == 0) {
			in_EDX = extraout_EDX_04;
		}
		pSVar2 = klass.ReaderTitle(entry, in_EDX);
		return pSVar2;
	}

	[Token(Token = "0x60009E3")]
	[Address(RVA = "0x5D5FED0", Offset = "0x5D5EED0", VA = "0x5D5FED0")]
	private string ReaderTitle(ChangelogEntryResponse entry, AottgChangelogReaderMode mode)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ReaderTitle): clean
		uint uVar1;
		String pSVar2;

		uVar1 = (typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor;
		if (entry == null) {
			if (uVar1 == 0) {
			}
			pSVar2 = Aottg2GisketchLocale.Text("Changelog.Title");
			return pSVar2;
		}
		if (uVar1 == 0) {
		}
		pSVar2 = Aottg2GisketchLocale.Text("Changelog.VersionTitle");
		pSVar2 = String.Format(pSVar2, (object)entry._Version_k__BackingField);
		return pSVar2;
	}

	[Token(Token = "0x60009E4")]
	[Address(RVA = "0x5D5F560", Offset = "0x5D5E560", VA = "0x5D5F560")]
	private void ApplyReaderLoading(string title)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ApplyReaderLoading): clean
		GisketchUIState pGVar1;
		String pSVar2;

		pGVar1 = this.State;
		if (pGVar1 == null) {
			return;
		}
		pGVar1 = this.State;
		if (pGVar1 != null) {
			pGVar1.Set("changelog.reader.title", title);
			pGVar1 = this.State;
			pSVar2 = Aottg2GisketchLocale.Text("Common.Loading");
			pSVar2 = String.Concat(pSVar2, "...");
			if (pGVar1 != null) {
				pGVar1.Set("changelog.reader.status", pSVar2);
				pGVar1 = this.State;
				if (pGVar1 != null) {
					pGVar1.SetBool("changelog.reader.loading", true);
					pGVar1 = this.State;
					if (pGVar1 != null) {
						pGVar1.SetBool("changelog.reader.ready", false);
						pGVar1 = this.State;
						if (pGVar1 != null) {
							pGVar1.SetBool("changelog.reader.empty", false);
							pGVar1 = this.State;
							if (pGVar1 != null) {
								pGVar1.SetBool("changelog.reader.failed", false);
								pGVar1 = this.State;
								if (pGVar1 != null) {
									pGVar1.SetBool("changelog.reader.previous.enabled", false);
									pGVar1 = this.State;
									if (pGVar1 != null) {
										pGVar1.SetBool("changelog.reader.next.enabled", false);
										return;
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60009E5")]
	[Address(RVA = "0x5D5FAE0", Offset = "0x5D5EAE0", VA = "0x5D5FAE0")]
	private void ApplyReaderState(string title, bool refreshing, bool failed, bool empty, string error)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ApplyReaderState): clean
		bool value;
		bool value_00;
		GisketchUIState pGVar1;
		String pSVar2;

		pGVar1 = this.State;
		if (pGVar1 == null) {
			return;
		}
		pGVar1 = this.State;
		if (pGVar1 != null) {
			pGVar1.Set("changelog.reader.title", title);
			pGVar1 = this.State;
			if (refreshing) {
				pSVar2 = Aottg2GisketchLocale.Text("Changelog.RefreshingCached");
			}
			else {
				pSVar2 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			if (pGVar1 != null) {
				pGVar1.Set("changelog.reader.status", pSVar2);
				pGVar1 = this.State;
				pSVar2 = AottgChangelogFormatting.ErrorText(error);
				if (pGVar1 != null) {
					pGVar1.Set("changelog.reader.error", pSVar2);
					pGVar1 = this.State;
					if (pGVar1 != null) {
						pGVar1.SetBool("changelog.reader.loading", false);
						pGVar1 = this.State;
						if (pGVar1 != null) {
							pGVar1.SetBool("changelog.reader.ready", !failed && !empty);
							pGVar1 = this.State;
							if (pGVar1 != null) {
								pGVar1.SetBool("changelog.reader.empty", empty);
								pGVar1 = this.State;
								if (pGVar1 != null) {
									pGVar1.SetBool("changelog.reader.failed", failed);
									pGVar1 = this.State;
									if (pGVar1 != null) {
										value = false;
										pGVar1.SetBool("changelog.reader.refreshing", refreshing);
										pGVar1 = this.State;
										pSVar2 = "changelog.reader.previous.enabled";
										if (!failed && !empty) {
											if ((typeof(AottgChangelogDialogState)._2). cctor_finished_or_no_cctor == 0) {
											}
											value = AottgChangelogDialogState.CanGoPrevious;
										}
										if (pGVar1 != null) {
											value_00 = false;
											pGVar1.SetBool(pSVar2, value);
											pGVar1 = this.State;
											pSVar2 = "changelog.reader.next.enabled";
											if (!failed && !empty) {
												if ((typeof(AottgChangelogDialogState)._2). cctor_finished_or_no_cctor == 0) {
												}
												value_00 = AottgChangelogDialogState.CanGoNext;
											}
											if (pGVar1 != null) {
												pGVar1.SetBool(pSVar2, value_00);
												return;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60009E6")]
	[Address(RVA = "0x5D5FF70", Offset = "0x5D5EF70", VA = "0x5D5FF70")]
	private static string ReaderStatus(bool refreshing)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ReaderStatus): clean
		String pSVar1;

		if (!refreshing) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (((typeof(Aottg2GisketchLocale))._2). cctor_finished_or_no_cctor == 0) {
		}
		pSVar1 = Aottg2GisketchLocale.Text("Changelog.RefreshingCached");
		return pSVar1;
	}

	[Token(Token = "0x60009E7")]
	[Address(RVA = "0x5D5F7B0", Offset = "0x5D5E7B0", VA = "0x5D5F7B0")]
	private void ShowReader()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ShowReader): clean
		GisketchOverlayManager __this_00;
		GisketchUIRoot pGVar1;

		pGVar1 = this.Root;
		if ((pGVar1 == null) ||(__this_00 = pGVar1._Overlays_k__BackingField, __this_00 == null)) {
			return;
		}
		__this_00.ShowDialog("changelog-reader", true);
		return;
	}

	[Token(Token = "0x60009E8")]
	[Address(RVA = "0x5D5FE60", Offset = "0x5D5EE60", VA = "0x5D5FE60")]
	private void RefreshReader()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$RefreshReader): clean
		GisketchOverlayManager __this_00;
		GisketchUIRoot pGVar1;

		pGVar1 = this.Root;
		if ((pGVar1 == null) ||(pGVar1._Overlays_k__BackingField == null )) {
			return;
		}
		pGVar1 = this.Root;
		if ((pGVar1 == null) ||(__this_00 = pGVar1._Overlays_k__BackingField, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.RefreshDialogContent("changelog-reader", false);
		return;
	}

	[Token(Token = "0x60009E9")]
	[Address(RVA = "0x5D5FFF0", Offset = "0x5D5EFF0", VA = "0x5D5FFF0")]
	private static int IndexFromElement(string elementId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$IndexFromElement): 3 lines keep C-only constructs
		bool bVar1;
		uint in_EAX;
		int iVar2;
		String s;
		int iVar3;
		ulong uStack_18;

		uStack_18 = (ulong)in_EAX;
		bVar1 = String.IsNullOrEmpty(elementId);
		if (!bVar1) {
			if (elementId == null) {
				throw new NullReferenceException();
			}
			iVar2 = elementId.LastIndexOf(0x2d);
			if ((-1 < iVar2) && (iVar2 != elementId._stringLength + -1)) {
				s = elementId.Substring(iVar2 + 1);
				bVar1 = Int32.TryParse(s, (int)((long)&uStack_18 + 4));
				if (bVar1) {
				}
			}
		}
		return iVar3;
	}

	[Token(Token = "0x60009EA")]
	[Address(RVA = "0x5D60070", Offset = "0x5D5F070", VA = "0x5D60070")]
	private static void OpenHelpLink(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$OpenHelpLink): 5 lines keep C-only constructs
		bool bVar1;
		uint in_EAX;
		int iVar2;
		String pSVar3;
		JSONNode pSVar4;
		int iVar5;
		ulong uStack_18;

		uStack_18._0_4_ = in_EAX;
		uStack_18 = (ulong)(uint)uStack_18;
		bVar1 = String.IsNullOrEmpty(context.ElementId);
		iVar5 = -1;
		if (!bVar1) {
			if (context.ElementId == null) goto label_05e6020d;
			iVar2 = context.ElementId.LastIndexOf(0x2d);
			if ((-1 < iVar2) && (iVar2 != ((context.ElementId).fields)._stringLength + -1)) {
				pSVar3 = context.ElementId.Substring(iVar2 + 1);
				bVar1 = Int32.TryParse(pSVar3, (int)((long)&uStack_18 + 4));
				iVar5 = -1;
				if (bVar1) {
					iVar5 = uStack_18._4_4_;
				}
			}
		}
		pSVar4 = MiscInfo.Help;
		bVar1 = (pSVar4 == null);
		if (bVar1) {
			return;
		}
		if (pSVar4 != null) {
			bVar1 = pSVar4.get_IsArray();
			if (!bVar1) {
				return;
			}
			if (iVar5 < 0) {
				return;
			}
			iVar2 = pSVar4.get_Count();
			if (iVar2 <= iVar5) {
				return;
			}
			pSVar4 = pSVar4.get_Item(iVar5);
			if ((pSVar4 != null) &&(pSVar4 = pSVar4.get_Item("Link"), pSVar4 != null)) {
				pSVar3 = (String)(**(code*)((long)pSVar4.klass + 0x1c8))(pSVar4);
				bVar1 = String.IsNullOrWhiteSpace(pSVar3);
				if (bVar1) {
					return;
				}
				AottgExternalLinks.Show(pSVar3);
				return;
			}
		}
	label_05e6020d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60009EB")]
	[Address(RVA = "0x5D60220", Offset = "0x5D5F220", VA = "0x5D60220")]
	private void RegisterChangelogActions()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$RegisterChangelogActions): 9 lines keep C-only constructs
		object @object;
		String actionId;
		Action<GisketchActionContext> pSVar1;
		Gisketch_Aottg2UI_Game_AottgGameUiActions___c_StaticFields pGVar2;

		pSVar1 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterChangelogActions_b__70_0);
		this.RegisterAction("main.help", pSVar1);
		pSVar1 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterChangelogActions_b__70_1);
		this.RegisterAction("changelog.retryLatest", pSVar1);
		pSVar1 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterChangelogActions_b__70_2);
		this.RegisterAction("changelog.openLatest", pSVar1);
		pSVar1 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterChangelogActions_b__70_3);
		this.RegisterAction("changelog.outdated.seeChangelog", pSVar1);
		actionId = "changelog.downloadLatest";
		pGVar2 = typeof(AottgGameUiActions.c).static_fields;
		pSVar1 = pGVar2.__9__70_4;
		if (pSVar1 == null) {
			if ((typeof(AottgGameUiActions.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar2 = typeof(AottgGameUiActions.c).static_fields;
			}
			@object = (object)pGVar2.__9;
			pSVar1 = new Action<GisketchActionContext>(@object, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c_RegisterChangelogActions_b__70_4);
			pGVar2 = typeof(AottgGameUiActions.c).static_fields;
			pGVar2.__9__70_4 = pSVar1;
		}
		if (this == null) {
			throw new NullReferenceException();
		}
		this.RegisterAction(actionId, pSVar1);
		pSVar1 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterChangelogActions_b__70_5);
		this.RegisterAction("changelog.retryReader", pSVar1);
		pSVar1 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterChangelogActions_b__70_6);
		this.RegisterAction("changelog.previous", pSVar1);
		pSVar1 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterChangelogActions_b__70_7);
		this.RegisterAction("changelog.next", pSVar1);
		pSVar1 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_OpenHelpLink);
		this.RegisterAction("changelog.openHelpLink", pSVar1);
		return;
	}

	[Token(Token = "0x60009EC")]
	[Address(RVA = "0x5D605D0", Offset = "0x5D5F5D0", VA = "0x5D605D0")]
	private void OpenHelpUpdatesDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$OpenHelpUpdatesDialog): clean
		GisketchOverlayManager __this_00;
		GisketchUIRoot pGVar1;

		pGVar1 = this.Root;
		if ((pGVar1 != null) &&(__this_00 = pGVar1._Overlays_k__BackingField, __this_00 != null)) {
			__this_00.ShowDialog("help-updates", true);
		}
		this.RefreshLatestVersion(false);
		return;
	}

	[Token(Token = "0x60009ED")]
	[Address(RVA = "0x5D60630", Offset = "0x5D5F630", VA = "0x5D60630")]
	private void RefreshLatestVersion(bool forceRefresh)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$RefreshLatestVersion): 2 lines keep C-only constructs
		Action<AottgChangelogResult<LatestChangelogVersionResponse>> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Action<AottgChangelogResult<LatestChangelogVersionResponse>>));
		__this_00 = new Action<object>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_ApplyLatestVersionResult);
		AottgChangelogService.GetLatestVersion(__this_00, forceRefresh);
		return;
	}

	[Token(Token = "0x60009EE")]
	[Address(RVA = "0x5D606D0", Offset = "0x5D5F6D0", VA = "0x5D606D0")]
	private void ApplyLatestVersionResult(AottgChangelogResult<LatestChangelogVersionResponse> result)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ApplyLatestVersionResult): 2 lines keep C-only constructs
		int iVar1;
		LatestChangelogVersionResponse latestVersion;
		GisketchUIState pGVar2;
		String value;
		Action<AottgChangelogResult<ChangelogEntryResponse>> __this_00;
		bool value_00;
		bool bVar3;

		if ((result == null) || (pGVar2 = this.State, pGVar2 == null)) {
			return;
		}
		iVar1 = result._State_k__BackingField;
		latestVersion = result._Value_k__BackingField;
		if (latestVersion == null) {
			bVar3 = false;
			value_00 = false;
		}
		else {
			bVar3 = latestVersion._HasChangelog_k__BackingField == false;
			value_00 = !bVar3 && iVar1 != 3;
			bVar3 = bVar3 && (iVar1 == 0) != (iVar1 != 3);
			AottgChangelogDialogState.SetLatestVersion(latestVersion);
		}
		pGVar2 = this.State;
		if (pGVar2 != null) {
			pGVar2.SetBool("changelog.hub.loading", iVar1 == 0);
			pGVar2 = this.State;
			if (pGVar2 != null) {
				pGVar2.SetBool("changelog.hub.ready", value_00);
				pGVar2 = this.State;
				if (pGVar2 != null) {
					pGVar2.SetBool("changelog.hub.empty", bVar3) ;
					pGVar2 = this.State;
					if (pGVar2 != null) {
						pGVar2.SetBool("changelog.hub.failed", iVar1 == 3);
						pGVar2 = this.State;
						if (pGVar2 != null) {
							pGVar2.SetBool("changelog.hub.refreshing", (bool)(result._IsRefreshing_k__BackingField != false & value_00));
							pGVar2 = this.State;
							if (pGVar2 != null) {
								pGVar2.SetBool("changelog.hub.open.enabled", value_00);
								pGVar2 = this.State;
								value = AottgChangelogFormatting.ErrorText(result._Error_k__BackingField);
								if (pGVar2 != null) {
									pGVar2.Set("changelog.hub.error", value);
									this.ApplyLatestText(result._Value_k__BackingField, iVar1 == 0, iVar1 == 3, bVar3);
									if (value_00 == false) {
										return;
									}
									__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Action<AottgChangelogResult<ChangelogEntryResponse>>));
									__this_00 = new Action<object>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_ApplyLatestPreviewResult);
									if ((typeof(AottgChangelogService)._2). cctor_finished_or_no_cctor == 0) {
									}
									AottgChangelogService.GetLatest(__this_00, false);
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

	[Token(Token = "0x60009EF")]
	[Address(RVA = "0x5D60C70", Offset = "0x5D5FC70", VA = "0x5D60C70")]
	private void ApplyLatestPreviewResult(AottgChangelogResult<ChangelogEntryResponse> result)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ApplyLatestPreviewResult): clean
		int iVar1;
		ChangelogEntryResponse entry;
		GisketchOverlayManager __this_00;
		GisketchUIRoot pGVar2;

		if ((((result != null) &&(iVar1 = result._State_k__BackingField, iVar1 != 0)) && (iVar1 != 3)) &&(entry = result._Value_k__BackingField, entry != null)) {
			AottgChangelogDialogState.SetLatestPreview(entry);
			pGVar2 = this.Root;
			if ((pGVar2 != null) &&(__this_00 = pGVar2._Overlays_k__BackingField, __this_00 != null)) {
				__this_00.RefreshDialogContent("help-updates", false);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60009F0")]
	[Address(RVA = "0x5D60A30", Offset = "0x5D5FA30", VA = "0x5D60A30")]
	private void ApplyLatestText(LatestChangelogVersionResponse latest, bool loading, bool failed, bool empty)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ApplyLatestText): 2 lines keep C-only constructs
		GisketchUIState pGVar1;
		String* ppSVar2;
		String arg0;
		String pSVar3;

		pGVar1 = this.State;
		if (pGVar1 == null) {
			return;
		}
		if (loading) {
			pGVar1 = this.State;
			ppSVar2 = &"Changelog.CheckingForUpdates";
	label_05e60c36: ;
			pSVar3 = Aottg2GisketchLocale.Text(*ppSVar2);
		}
		else {
			if (failed) {
				pGVar1 = this.State;
				ppSVar2 = &"Changelog.UpdateCheckFailed";
				goto label_05e60c36;
			}
			pGVar1 = this.State;
			if ((latest == null) || (empty)) {
				ppSVar2 = &"Changelog.NoPublished";
				goto label_05e60c36;
			}
			if (pGVar1 == null) goto label_05e60c64;
			pSVar3 = latest._Version_k__BackingField;
			if (pSVar3 == null) {
				pSVar3 = "-";
			}
			pGVar1.Set("changelog.hub.version", pSVar3);
			pGVar1 = this.State;
			pSVar3 = Aottg2GisketchLocale.Text("Changelog.PublishedDate");
			arg0 = AottgChangelogFormatting.ShortDate(latest._PublishedAt_k__BackingField);
			pSVar3 = String.Format(pSVar3, (object)arg0);
			if (pGVar1 == null) goto label_05e60c64;
			pGVar1.Set("changelog.hub.date", pSVar3);
			pGVar1 = this.State;
			pSVar3 = AottgGameUiActions.LatestStatusText(latest);
		}
		if (pGVar1 != null) {
			pGVar1.Set("changelog.hub.status", pSVar3);
			return;
		}
	label_05e60c64: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60009F1")]
	[Address(RVA = "0x5D60D40", Offset = "0x5D5FD40", VA = "0x5D60D40")]
	private static string LatestStatusText(LatestChangelogVersionResponse latest)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$LatestStatusText): clean
		int iVar1;
		String pSVar2;

		iVar1 = AottgChangelogVersionStatus.Evaluate(latest, "11.15.2026");
		if (iVar1 == 1) {
			pSVar2 = Aottg2GisketchLocale.Text("Changelog.UpToDate");
			return pSVar2;
		}
		if (iVar1 != 2) {
			pSVar2 = Aottg2GisketchLocale.Text("Changelog.LatestReady");
			return pSVar2;
		}
		pSVar2 = Aottg2GisketchLocale.Text("Changelog.OutdatedLatest");
		if (latest == null) {
			throw new NullReferenceException();
		}
		pSVar2 = String.Format(pSVar2, (object)latest._Version_k__BackingField);
		return pSVar2;
	}

	[Token(Token = "0x60009F2")]
	[Address(RVA = "0x5D5ECC0", Offset = "0x5D5DCC0", VA = "0x5D5ECC0")]
	private void OpenLatestChangelog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$OpenLatestChangelog): 2 lines keep C-only constructs
		GisketchOverlayManager __this_00;
		bool bVar1;
		int pageSize;
		String title;
		GisketchUIRoot pGVar2;
		Action<AottgChangelogResult<PublicChangelogListResponse>> __this_01;
		MethodInfo pMVar3;

		AottgChangelogDialogState.ClearReader(0, null);
		title = this.CurrentReaderTitle();
		this.ApplyReaderLoading(title);
		pGVar2 = this.Root;
		if ((pGVar2 != null) &&(__this_00 = pGVar2._Overlays_k__BackingField, __this_00 != null)) {
			pMVar3 = (MethodInfo *)"changelog-reader";
			__this_00.ShowDialog("changelog-reader", true);
		}
		bVar1 = AottgChangelogDialogState.HasHistory;
		if (bVar1) {
			this.FetchLatestEntry();
			return;
		}
		__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(Action<AottgChangelogResult<PublicChangelogListResponse>>));
		__this_01 = new Action<object>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_ApplyLatestHistoryResult);
		pageSize = AottgChangelogDialogState.HistoryPageSize;
		AottgChangelogService.GetList(__this_01, 1, pageSize, false);
		return;
	}

	[Token(Token = "0x60009F3")]
	[Address(RVA = "0x5D60EE0", Offset = "0x5D5FEE0", VA = "0x5D60EE0")]
	private void ApplyLatestHistoryResult(AottgChangelogResult<PublicChangelogListResponse> result)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ApplyLatestHistoryResult): clean
		int iVar1;
		PublicChangelogListResponse list;

		if ((result == null) ||(iVar1 = result._State_k__BackingField, iVar1 == 0)) {
			return;
		}
		if ((iVar1 != 3) &&(list = result._Value_k__BackingField, list != null)) {
			AottgChangelogDialogState.AppendHistory(list);
		}
		this.FetchLatestEntry();
		return;
	}

	[Token(Token = "0x60009F4")]
	[Address(RVA = "0x5D60E50", Offset = "0x5D5FE50", VA = "0x5D60E50")]
	private void FetchLatestEntry()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$FetchLatestEntry): 1 lines keep C-only constructs
		Action<AottgChangelogResult<ChangelogEntryResponse>> __this_00;

		__this_00 = new Action<AottgChangelogResult<ChangelogEntryResponse>>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_ApplyLatestEntryResult);
		AottgChangelogService.GetLatest(__this_00, false);
		return;
	}

	[Token(Token = "0x60009F5")]
	[Address(RVA = "0x5D5EBA0", Offset = "0x5D5DBA0", VA = "0x5D5EBA0")]
	private void ShowOutdatedChangelogDialog(LatestChangelogVersionResponse latest)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ShowOutdatedChangelogDialog): clean
		GisketchOverlayManager __this_00;
		GisketchUIState pGVar1;
		GisketchUIRoot pGVar2;
		String value;

		pGVar1 = this.State;
		if ((pGVar1 == null) ||(latest == null)) {
			return;
		}
		pGVar1 = this.State;
		if (pGVar1 != null) {
			pGVar1.Set("changelog.outdated.currentVersion", "11.15.2026");
			pGVar1 = this.State;
			if (pGVar1 != null) {
				value = latest._Version_k__BackingField;
				if (value == null) {
					value = "-";
				}
				pGVar1.Set("changelog.outdated.latestVersion", value);
				pGVar2 = this.Root;
				if (pGVar2 == null) {
					return;
				}
				__this_00 = pGVar2._Overlays_k__BackingField;
				if (__this_00 == null) {
					return;
				}
				__this_00.ShowDialog("changelog-outdated", true);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60009F6")]
	[Address(RVA = "0x5D60F80", Offset = "0x5D5FF80", VA = "0x5D60F80")]
	private void OpenOutdatedLatestChangelog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$OpenOutdatedLatestChangelog): 3 lines keep C-only constructs
		uint uVar1;
		GisketchOverlayManager __this_00;
		LatestChangelogVersionResponse latest;
		GisketchUIRoot pGVar2;
		String unaff_RBX;
		MethodInfo method_00;
		GisketchActionContext ___00;

		pGVar2 = this.Root;
		if ((pGVar2 != null) &&(__this_00 = pGVar2._Overlays_k__BackingField, __this_00 != null)) {
			method_00 = (MethodInfo *)"changelog-outdated";
			__this_00.CloseDialog("changelog-outdated", false);
		}
		___00.ElementId = unaff_RBX;
		___00 = (GisketchActionContext)CONCAT248(___00._0_24_, ___00.ElementId);
		this.OpenLatestChangelog(___00);
		if (Il2CppMethodInitialized_0754878b == false) {
			Il2CppMethodInitialized_0754878b = true;
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgChangelogDialogState))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			latest = AottgChangelogDialogState. _LatestVersion_k__BackingField;
		}
		else {
			latest = *(LatestChangelogVersionResponse*)((long)(typeof(AottgChangelogDialogState)).static_fields + 8);
		}
		if (latest == null) {
			return;
		}
		AottgChangelogSeenState.MarkSeen(latest);
		return;
	}

	[Token(Token = "0x60009F7")]
	[Address(RVA = "0x5D61070", Offset = "0x5D60070", VA = "0x5D61070")]
	private static void DownloadLatestBuild()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$DownloadLatestBuild): clean
		AottgExternalLinks.Show("https://aottg2.itch.io/aottg2");
		return;
	}

	[Token(Token = "0x60009F8")]
	[Address(RVA = "0x5D610A0", Offset = "0x5D600A0", VA = "0x5D610A0")]
	private void RegisterCreditsActions()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$RegisterCreditsActions): 1 lines keep C-only constructs
		Action<GisketchActionContext> __this_00;

		__this_00 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterCreditsActions_b__83_0);
		this.RegisterAction("credits.retry", __this_00);
		return;
	}

	[Token(Token = "0x60009F9")]
	[Address(RVA = "0x5D61130", Offset = "0x5D60130", VA = "0x5D61130")]
	private void OpenCreditsScreen()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$OpenCreditsScreen): 1 lines keep C-only constructs
		GisketchScreenRouter __this_00;
		GisketchUIRoot pGVar1;
		Action<AottgCreditsResult> __this_01;

		pGVar1 = this.Root;
		if ((pGVar1 != null) &&(__this_00 = pGVar1._Screens_k__BackingField, __this_00 != null)) {
			__this_00.ShowScreen("credits");
		}
		__this_01 = new Action<AottgCreditsResult>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_ApplyCreditsResult);
		AottgCreditsService.GetCredits(__this_01, false);
		return;
	}

	[Token(Token = "0x60009FA")]
	[Address(RVA = "0x5D611F0", Offset = "0x5D601F0", VA = "0x5D611F0")]
	private void RefreshCredits(bool forceRefresh)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$RefreshCredits): 1 lines keep C-only constructs
		Action<AottgCreditsResult> __this_00;

		__this_00 = new Action<AottgCreditsResult>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_ApplyCreditsResult);
		AottgCreditsService.GetCredits(__this_00, forceRefresh);
		return;
	}

	[Token(Token = "0x60009FB")]
	[Address(RVA = "0x5D61260", Offset = "0x5D60260", VA = "0x5D61260")]
	private void ApplyCreditsResult(AottgCreditsResult result)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ApplyCreditsResult): 4 lines keep C-only constructs
		int iVar1;
		AottgCreditsResponse pAVar2;
		object obj;
		Il2CppClass pIVar3;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		GisketchScreenRouter pGVar5;
		bool bVar6;
		int iVar7;
		VirtualInvokeData pVVar8;
		GisketchUIRoot pGVar9;
		ulong uVar10;
		bool hasCredits;
		long lVar11;

		if (result == null) {
			return;
		}
		pAVar2 = result._Credits_k__BackingField;
		if (pAVar2 == null) {
			hasCredits = false;
		}
		else {
			obj = (object)pAVar2._Categories_k__BackingField;
			if (obj == null) goto label_05e613ec;
			pIVar3 = obj.klass;
			uVar10 = (ulong)(pIVar3._2).interface_offsets_count;
			if (uVar10 != 0) {
				pIVar4 = (pIVar3._1).interfaceOffsets;
				lVar11 = 0;
				do {
					if (*(IReadOnlyCollection<AottgCreditCategory>*)((long)&pIVar4.interfaceType + lVar11) == typeof(IReadOnlyCollection<AottgCreditCategory>)) {
						pVVar8 = pIVar3.vtable + *(int)((long)&pIVar4.offset + lVar11);
						goto label_05e61320;
					}
					lVar11 = lVar11 + 0x10;
				} while (uVar10 * 0x10 != lVar11);
			}
			pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IReadOnlyCollection<AottgCreditCategory>), 0);
	label_05e61320: ;
			iVar7 = (*pVVar8.methodPtr)(obj,pVVar8.method);
			hasCredits = 0 < iVar7;
		}
		iVar1 = result._State_k__BackingField;
		bVar6 = result.HasCredits;
		if (bVar6) {
			AottgCreditsScreenState.Set(result._Credits_k__BackingField);
		}
		else if ((iVar1 == 3) || (iVar1 == 0)) {
			AottgCreditsScreenState.Clear();
		}
		pGVar9 = this.Root;
		if ((pGVar9 != null) &&(pGVar9._Screens_k__BackingField != null)) {
			pGVar9 = this.Root;
			if ((pGVar9 == null) ||(pGVar5 = pGVar9._Screens_k__BackingField, pGVar5 == null)) {
	label_05e613ec: ;
				throw new NullReferenceException();
			}
			bVar6 = (pGVar5._activeId == "credits");
			if (bVar6) {
				pGVar9 = this.Root;
				if (pGVar9 == null) goto label_05e613ec;
				pGVar9.RefreshActiveScreen();
			}
		}
		this.ApplyCreditsState(result, hasCredits, iVar1 == 0, iVar1 == 3);
		return;
	}

	[Token(Token = "0x60009FC")]
	[Address(RVA = "0x5D61400", Offset = "0x5D60400", VA = "0x5D61400")]
	private void ApplyCreditsState(AottgCreditsResult result, bool hasCredits, bool loading, bool failedNoCache)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ApplyCreditsState): 4 lines keep C-only constructs
		AottgCreditsResponse pAVar1;
		object obj;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		bool bVar4;
		int iVar5;
		GisketchUIState pGVar6;
		VirtualInvokeData pVVar7;
		String pSVar8;
		ulong uVar9;
		long lVar10;
		bool value;

		pGVar6 = this.State;
		if ((pGVar6 == null) ||(result == null)) {
			return;
		}
		pGVar6 = this.State;
		if (pGVar6 != null) {
			pGVar6.SetBool("credits.loading", loading);
			pGVar6 = this.State;
			if (pGVar6 != null) {
				value = false;
				pGVar6.SetBool("credits.ready", (bool)(~failedNoCache & hasCredits));
				pGVar6 = this.State;
				bVar4 = result.HasCredits;
				pSVar8 = "credits.empty";
				if (bVar4) {
					pAVar1 = result._Credits_k__BackingField;
					if ((pAVar1 == null) ||(obj = (object)pAVar1._Categories_k__BackingField, obj == null)) goto label_05e6167a;
					pIVar2 = obj.klass;
					uVar9 = (ulong)(pIVar2._2).interface_offsets_count;
					if (uVar9 != 0) {
						pIVar3 = (pIVar2._1).interfaceOffsets;
						lVar10 = 0;
						do {
							if (*(IReadOnlyCollection<AottgCreditCategory>*)((long)&pIVar3.interfaceType + lVar10) == typeof(IReadOnlyCollection<AottgCreditCategory>)) {
								pVVar7 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar10);
								goto label_05e615b0;
							}
							lVar10 = lVar10 + 0x10;
						} while (uVar9 * 0x10 != lVar10);
					}
					pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IReadOnlyCollection<AottgCreditCategory>), 0) ;
	label_05e615b0: ;
					iVar5 = (*pVVar7.methodPtr)(obj,pVVar7.method);
					value = iVar5 == 0;
				}
				if (pGVar6 != null) {
					pGVar6.SetBool(pSVar8, value);
					pGVar6 = this.State;
					if (pGVar6 != null) {
						pGVar6.SetBool("credits.failed", failedNoCache);
						pGVar6 = this.State;
						if (pGVar6 != null) {
							pGVar6.SetBool("credits.refreshing", result._IsRefreshing_k__BackingField != false && hasCredits);
							pGVar6 = this.State;
							pSVar8 = AottgGameUiActions.CreditsErrorText(result._Error_k__BackingField);
							if (pGVar6 != null) {
								pGVar6.Set("credits.error", pSVar8);
								return;
							}
						}
					}
				}
			}
		}
	label_05e6167a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60009FD")]
	[Address(RVA = "0x5D61680", Offset = "0x5D60680", VA = "0x5D61680")]
	private static string CreditsErrorText(string error)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$CreditsErrorText): 3 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		String pSVar3;
		String* ppSVar4;

		bVar2 = String.IsNullOrEmpty(error);
		if (bVar2) {
			uVar1 = (typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor;
		}
		else {
			bVar2 = (error == "network_error");
			if (bVar2) {
				ppSVar4 = &"Network.CheckConnection";
				uVar1 = (typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor;
				goto joined_r0x05e6176d;
			}
			bVar2 = (error == "not_initialized");
			if (bVar2) {
				ppSVar4 = &"Credits.NotReady";
				uVar1 = (typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor;
				goto joined_r0x05e6176d;
			}
			uVar1 = (typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor;
		}
		ppSVar4 = &"Common.TryAgain";
	joined_r0x05e6176d: ;
		if (uVar1 == 0) {
			pSVar3 = Aottg2GisketchLocale.Text(*ppSVar4);
			return pSVar3;
		}
		pSVar3 = Aottg2GisketchLocale.Text(*ppSVar4);
		return pSVar3;
	}

	[Token(Token = "0x60009FE")]
	[Address(RVA = "0x5D617A0", Offset = "0x5D607A0", VA = "0x5D617A0")]
	private void RegisterGameCreateActions()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$RegisterGameCreateActions): 44 lines keep C-only constructs
		object pIVar1;
		String pSVar2;
		Action<GisketchActionContext> pSVar3;
		Gisketch_Aottg2UI_Game_AottgGameUiActions___c_StaticFields pGVar4;

		pSVar2 = "gameCreate.open.singleplayer";
		pGVar4 = typeof(AottgGameUiActions.c).static_fields;
		pSVar3 = pGVar4.__9__89_0;
		if (pSVar3 == null) {
			if ((typeof(AottgGameUiActions.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(AottgGameUiActions.c).static_fields;
			}
			pIVar1 = (object)pGVar4.__9;
			pSVar3 = new Action<GisketchActionContext>(pIVar1, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c_RegisterGameCreateActions_b__89_0);
			pGVar4 = typeof(AottgGameUiActions.c).static_fields;
			pGVar4.__9__89_0 = pSVar3;
		}
		if (this == null) {
			throw new NullReferenceException();
		}
		this.RegisterAction(pSVar2, pSVar3);
		pSVar2 = "gameCreate.open.multiplayer";
		pGVar4 = typeof(AottgGameUiActions.c).static_fields;
		pSVar3 = pGVar4.__9__89_1;
		if (pSVar3 == null) {
			if ((typeof(AottgGameUiActions.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(AottgGameUiActions.c).static_fields;
			}
			pIVar1 = (object)pGVar4.__9;
			pSVar3 = new Action<GisketchActionContext>(pIVar1, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c_RegisterGameCreateActions_b__89_1);
			pGVar4 = typeof(AottgGameUiActions.c).static_fields;
			pGVar4.__9__89_1 = pSVar3;
		}
		this.RegisterAction(pSVar2, pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_SelectGameCreateCategory);
		this.RegisterAction("gameCreate.select.category", pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_SelectGameCreateSubcategory);
		this.RegisterAction("gameCreate.select.subcategory", pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_SelectGameCreateExperience);
		this.RegisterAction("gameCreate.select.experience", pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterGameCreateActions_b__89_2);
		this.RegisterAction("gameCreate.navigate.root", pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterGameCreateActions_b__89_3);
		this.RegisterAction("gameCreate.navigate.category", pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterGameCreateActions_b__89_4);
		this.RegisterAction("gameCreate.navigate.subcategory", pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterGameCreateActions_b__89_5);
		this.RegisterAction("gameCreate.open.roomSettings", pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterGameCreateActions_b__89_6);
		this.RegisterAction("gameCreate.open.experiences", pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterGameCreateActions_b__89_7);
		this.RegisterAction("gameCreate.open.sandbox", pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterGameCreateActions_b__89_8);
		this.RegisterAction("gameCreate.open.favorites", pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_ChangeGameCreateField);
		this.RegisterAction("gameCreate.change.field", pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterGameCreateActions_b__89_9);
		this.RegisterAction("gameCreate.open.mapSelector", pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterGameCreateActions_b__89_10);
		this.RegisterAction("gameCreate.open.modeSelector", pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_OpenAddonSelector);
		this.RegisterAction("gameCreate.open.addonSelector", pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_SelectSandboxSection);
		this.RegisterAction("gameCreate.sandbox.select.section", pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_ChangeSandboxField);
		this.RegisterAction("gameCreate.sandbox.change.field", pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_ChangeRoomField);
		this.RegisterAction("gameCreate.room.change.field", pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_ToggleSandboxAddon);
		this.RegisterAction("gameCreate.sandbox.toggle.addon", pSVar3);
		pSVar3 = new Action<GisketchActionContext>(null, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_OpenLoad);
		this.RegisterAction("gameCreate.preset.load", pSVar3);
		pSVar3 = new Action<GisketchActionContext>(null, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_OpenSave);
		this.RegisterAction("gameCreate.preset.save", pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterGameCreateActions_b__89_11);
		this.RegisterAction("gameCreate.import", pSVar3);
		pSVar2 = "gameCreate.export";
		pGVar4 = typeof(AottgGameUiActions.c).static_fields;
		pSVar3 = pGVar4.__9__89_12;
		if (pSVar3 == null) {
			if ((typeof(AottgGameUiActions.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(AottgGameUiActions.c).static_fields;
			}
			pIVar1 = (object)pGVar4.__9;
			pSVar3 = new Action<GisketchActionContext>(pIVar1, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c_RegisterGameCreateActions_b__89_12);
			pGVar4 = typeof(AottgGameUiActions.c).static_fields;
			pGVar4.__9__89_12 = pSVar3;
		}
		this.RegisterAction(pSVar2, pSVar3);
		pSVar2 = "gameCreate.custom.openLogicFolder";
		pGVar4 = typeof(AottgGameUiActions.c).static_fields;
		pSVar3 = pGVar4.__9__89_13;
		if (pSVar3 == null) {
			if ((typeof(AottgGameUiActions.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(AottgGameUiActions.c).static_fields;
			}
			pIVar1 = (object)pGVar4.__9;
			pSVar3 = new Action<GisketchActionContext>(pIVar1, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c_RegisterGameCreateActions_b__89_13);
			pGVar4 = typeof(AottgGameUiActions.c).static_fields;
			pGVar4.__9__89_13 = pSVar3;
		}
		this.RegisterAction(pSVar2, pSVar3);
		pSVar2 = "gameCreate.custom.openMapsFolder";
		pGVar4 = typeof(AottgGameUiActions.c).static_fields;
		pSVar3 = pGVar4.__9__89_14;
		if (pSVar3 == null) {
			if ((typeof(AottgGameUiActions.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(AottgGameUiActions.c).static_fields;
			}
			pIVar1 = (object)pGVar4.__9;
			pSVar3 = new Action<GisketchActionContext>(pIVar1, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c_RegisterGameCreateActions_b__89_14);
			pGVar4 = typeof(AottgGameUiActions.c).static_fields;
			pGVar4.__9__89_14 = pSVar3;
		}
		this.RegisterAction(pSVar2, pSVar3);
		pSVar2 = "gameCreate.custom.openAddonsFolder";
		pGVar4 = typeof(AottgGameUiActions.c).static_fields;
		pSVar3 = pGVar4.__9__89_15;
		if (pSVar3 == null) {
			if ((typeof(AottgGameUiActions.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(AottgGameUiActions.c).static_fields;
			}
			pIVar1 = (object)pGVar4.__9;
			pSVar3 = new Action<GisketchActionContext>(pIVar1, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c_RegisterGameCreateActions_b__89_15);
			pGVar4 = typeof(AottgGameUiActions.c).static_fields;
			pGVar4.__9__89_15 = pSVar3;
		}
		this.RegisterAction(pSVar2, pSVar3);
		pSVar2 = "gameCreate.custom.openLogsFolder";
		pGVar4 = typeof(AottgGameUiActions.c).static_fields;
		pSVar3 = pGVar4.__9__89_16;
		if (pSVar3 == null) {
			if ((typeof(AottgGameUiActions.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(AottgGameUiActions.c).static_fields;
			}
			pIVar1 = (object)pGVar4.__9;
			pSVar3 = new Action<GisketchActionContext>(pIVar1, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c_RegisterGameCreateActions_b__89_16);
			pGVar4 = typeof(AottgGameUiActions.c).static_fields;
			pGVar4.__9__89_16 = pSVar3;
		}
		this.RegisterAction(pSVar2, pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterGameCreateActions_b__89_17);
		this.RegisterAction("gameCreate.custom.openMapsManager", pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterGameCreateActions_b__89_18);
		this.RegisterAction("gameCreate.custom.openLogicManager", pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterGameCreateActions_b__89_19);
		this.RegisterAction("gameCreate.custom.openAddonsManager", pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterGameCreateActions_b__89_20);
		this.RegisterAction("gameCreate.custom.importMap", pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterGameCreateActions_b__89_21);
		this.RegisterAction("gameCreate.custom.modifyMap", pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterGameCreateActions_b__89_22);
		this.RegisterAction("gameCreate.custom.deleteMap", pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterGameCreateActions_b__89_23);
		this.RegisterAction("gameCreate.custom.importLogic", pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterGameCreateActions_b__89_24);
		this.RegisterAction("gameCreate.custom.modifyLogic", pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterGameCreateActions_b__89_25);
		this.RegisterAction("gameCreate.custom.deleteLogic", pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterGameCreateActions_b__89_26);
		this.RegisterAction("gameCreate.custom.importAddon", pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterGameCreateActions_b__89_27);
		this.RegisterAction("gameCreate.custom.modifyAddon", pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterGameCreateActions_b__89_28);
		this.RegisterAction("gameCreate.custom.deleteAddon", pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterGameCreateActions_b__89_29);
		this.RegisterAction("gameCreate.back", pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterGameCreateActions_b__89_30);
		this.RegisterAction("gameCreate.start", pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterGameCreateActions_b__89_31);
		this.RegisterAction("gameCreate.restart", pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterGameCreateActions_b__89_32);
		this.RegisterAction("gameCreate.save.nextRestart", pSVar3);
		return;
	}

	[Token(Token = "0x60009FF")]
	[Address(RVA = "0x5D628D0", Offset = "0x5D618D0", VA = "0x5D628D0")]
	private void SelectGameCreateCategory(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$SelectGameCreateCategory): 2 lines keep C-only constructs
		bool bVar1;
		AottgGameUiActions.c__DisplayClass90_0 __this_00;
		String[] pSVar2;
		Action __this_01;

		__this_00 = il2cpp_codegen_object_new(typeof(AottgGameUiActions.c__DisplayClass90_0));
		__this_00 = new Object();
		pSVar2 = AottgGameCreateSession.Categories();
		if (__this_00 != null) {
			__this_00.categories = pSVar2;
			pSVar2 = __this_00.categories;
			if (pSVar2 != null) {
				bVar1 = AottgGameUiActions.TryElementIndex(context.ElementId, "game-create-category-", (int32_t)pSVar2.Length, ref __this_00.index);
				if (bVar1) {
					__this_01 = new Action((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c__DisplayClass90_0_SelectGameCreateCategory_b__0);
					this.SelectGameCreateHierarchy(context.GameObject, context.ElementId, __this_01);
					return;
				}
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000A00")]
	[Address(RVA = "0x5D62C10", Offset = "0x5D61C10", VA = "0x5D62C10")]
	private void SelectGameCreateSubcategory(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$SelectGameCreateSubcategory): 2 lines keep C-only constructs
		bool bVar1;
		AottgGameUiActions.c__DisplayClass91_0 __this_00;
		String[] pSVar2;
		Action __this_01;

		__this_00 = il2cpp_codegen_object_new(typeof(AottgGameUiActions.c__DisplayClass91_0));
		__this_00 = new Object();
		pSVar2 = AottgGameCreateSession.Subcategories();
		if (__this_00 != null) {
			__this_00.subcategories = pSVar2;
			pSVar2 = __this_00.subcategories;
			if (pSVar2 != null) {
				bVar1 = AottgGameUiActions.TryElementIndex(context.ElementId, "game-create-subcategory-", (int32_t)pSVar2.Length, ref __this_00.index);
				if (bVar1) {
					__this_01 = new Action((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c__DisplayClass91_0_SelectGameCreateSubcategory_b__0);
					this.SelectGameCreateHierarchy(context.GameObject, context.ElementId, __this_01);
					return;
				}
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000A01")]
	[Address(RVA = "0x5D62D60", Offset = "0x5D61D60", VA = "0x5D62D60")]
	private void SelectGameCreateExperience(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$SelectGameCreateExperience): 2 lines keep C-only constructs
		bool bVar1;
		AottgGameUiActions.c__DisplayClass92_0 __this_00;
		Experience[] pMVar2;
		Action __this_01;

		__this_00 = il2cpp_codegen_object_new(typeof(AottgGameUiActions.c__DisplayClass92_0));
		__this_00 = new Object();
		pMVar2 = AottgGameCreateSession.CurrentExperiences();
		if (__this_00 != null) {
			__this_00.experiences = pMVar2;
			pMVar2 = __this_00.experiences;
			if (pMVar2 != null) {
				bVar1 = AottgGameUiActions.TryElementIndex(context.ElementId, "game-create-experience-", (int32_t)pMVar2.Length, ref __this_00.index);
				if (bVar1) {
					__this_01 = new Action((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c__DisplayClass92_0_SelectGameCreateExperience_b__0);
					this.SelectGameCreateHierarchy(context.GameObject, context.ElementId, __this_01);
					return;
				}
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000A02")]
	[Address(RVA = "0x5D62AB0", Offset = "0x5D61AB0", VA = "0x5D62AB0")]
	private void SelectGameCreateHierarchy(GameObject source, string targetId, Action select)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$SelectGameCreateHierarchy): 2 lines keep C-only constructs
		bool bVar1;
		AottgGameUiActions.c__DisplayClass93_0 __this_00;
		Action pSVar2;
		GisketchUIRoot root;

		__this_00 = il2cpp_codegen_object_new(typeof(AottgGameUiActions.c__DisplayClass93_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.select = select;
			__this_00.__4__this = this;
			pSVar2 = new Action((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c__DisplayClass93_0_SelectGameCreateHierarchy_b__0);
			bVar1 = AottgGameCreateHierarchyTransition.Play(source, targetId, pSVar2);
			if (bVar1) {
				return;
			}
			pSVar2 = __this_00.select;
			if (pSVar2 != null) {
				(*(code)pSVar2.invoke_impl)(pSVar2.method_code);
				root = this.Root;
				AottgGameCreateScreen.Refresh(root);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000A03")]
	[Address(RVA = "0x5D62F20", Offset = "0x5D61F20", VA = "0x5D62F20")]
	private void NavigateGameCreateRoot()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$NavigateGameCreateRoot): clean
		uint uVar1;
		GisketchUIRoot root;

		if (Il2CppMethodInitialized_075486e1 == false) {
			Il2CppMethodInitialized_075486e1 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			AottgGameCreateSession.NavigateRoot();
		}
		else {
			AottgGameCreateSession.NavigateRoot();
		}
		root = this.Root;
		if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
			AottgGameCreateScreen.Refresh(root);
			return;
		}
		AottgGameCreateScreen.Refresh(root);
		return;
	}

	[Token(Token = "0x6000A04")]
	[Address(RVA = "0x5D62FE0", Offset = "0x5D61FE0", VA = "0x5D62FE0")]
	private void NavigateGameCreateCategory()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$NavigateGameCreateCategory): clean
		uint uVar1;
		bool bVar2;
		GisketchUIRoot root;

		if (Il2CppMethodInitialized_075486e2 == false) {
			Il2CppMethodInitialized_075486e2 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			bVar2 = AottgGameCreateSession.NavigateCategory();
		}
		else {
			bVar2 = AottgGameCreateSession.NavigateCategory();
		}
		if (bVar2) {
			root = this.Root;
			if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
				AottgGameCreateScreen.Refresh(root);
				return;
			}
			AottgGameCreateScreen.Refresh(root);
			return;
		}
		return;
	}

	[Token(Token = "0x6000A05")]
	[Address(RVA = "0x5D630A0", Offset = "0x5D620A0", VA = "0x5D630A0")]
	private void NavigateGameCreateSubcategory()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$NavigateGameCreateSubcategory): clean
		uint uVar1;
		bool bVar2;
		GisketchUIRoot root;

		if (Il2CppMethodInitialized_075486e3 == false) {
			Il2CppMethodInitialized_075486e3 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			bVar2 = AottgGameCreateSession.NavigateSubcategory();
		}
		else {
			bVar2 = AottgGameCreateSession.NavigateSubcategory();
		}
		if (bVar2) {
			root = this.Root;
			if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
				AottgGameCreateScreen.Refresh(root);
				return;
			}
			AottgGameCreateScreen.Refresh(root);
			return;
		}
		return;
	}

	[Token(Token = "0x6000A06")]
	[Address(RVA = "0x5D63160", Offset = "0x5D62160", VA = "0x5D63160")]
	private void ChangeGameCreateField(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ChangeGameCreateField): 1 lines keep C-only constructs
		int index;
		bool bVar1;
		ExperienceRuleField[] pSVar2;
		String value;
		int iStack_1c;

		iStack_1c = 0;
		pSVar2 = AottgGameCreateSession.VisibleFields();
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		bVar1 = AottgGameUiActions.TryElementIndex(context.ElementId, "game-create-field-", (int32_t)pSVar2.Length, ref iStack_1c);
		if (bVar1) {
			value = context.InputText;
			index = iStack_1c;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			AottgGameCreateSession.ChangeField(index, value);
		}
		return;
	}

	[Token(Token = "0x6000A07")]
	[Address(RVA = "0x5D63220", Offset = "0x5D62220", VA = "0x5D63220")]
	private void OpenGameCreateSelector(GisketchActionContext context, bool map)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$OpenGameCreateSelector): 7 lines keep C-only constructs
		uint uVar1;
		ExperienceRuleField field;
		List<AottgSandboxField> pSVar2;
		bool bVar5;
		int count;
		AottgGameUiActions.c__DisplayClass98_0 __this_00;
		ExperienceRuleField[] pSVar6;
		String[] pSVar7;
		Action<string, string> pSVar8;
		long lVar11;
		int index;

		__this_00 = il2cpp_codegen_object_new(typeof(AottgGameUiActions.c__DisplayClass98_0));
		__this_00 = new Object();
		if (__this_00 == null) goto label_05e63661;
		__this_00.__4__this = this;
		pSVar6 = AottgGameCreateSession.VisibleFields();
		if (pSVar6 == null) goto label_05e63661;
		bVar5 = AottgGameUiActions.TryElementIndex(context.ElementId, "game-create-field-", (int32_t)pSVar6.Length, ref __this_00.officialIndex);
		if (bVar5) {
			uVar1 = __this_00.officialIndex;
			if ((uint)pSVar6.Length <= uVar1) {
				throw new IndexOutOfRangeException();
			}
			field = pSVar6[(int)uVar1];
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			pSVar7 = AottgGameCreateSession.FieldOptions(field);
			pSVar8 = new Action<string, string>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c__DisplayClass98_0_OpenGameCreateSelector_b__0);
			AottgGameUiActions.OpenGameCreateSelector(context, map, pSVar7, false, pSVar8);
			return;
		}
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_075452d8 != false) goto label_05e633db;
	label_05e6340a: ;
			g_data_075452d8 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05e633e7;
	label_05e63429: ;
			pSVar2 = AottgGameCreateSession.SandboxFieldsInternal;
		}
		else {
			if (g_data_075452d8 == false) goto label_05e6340a;
	label_05e633db: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_05e63429;
	label_05e633e7: ;
			pSVar2 = AottgGameCreateSession.SandboxFieldsInternal;
		}
		if (pSVar2 == null) goto label_05e63661;
		count = pSVar2.get_Item();
		index = &__this_00.sandboxIndex;
		bVar5 = AottgGameUiActions.TryElementIndex(context.ElementId, "game-create-sandbox-field-", count, index);
		if (!bVar5) {
			return;
		}
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_075452d8 != false) goto label_05e634e2;
	label_05e63511: ;
			g_data_075452d8 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05e634ee;
	label_05e63530: ;
			pSVar2 = AottgGameCreateSession.SandboxFieldsInternal;
		}
		else {
			if (g_data_075452d8 == false) goto label_05e63511;
	label_05e634e2: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_05e63530;
	label_05e634ee: ;
			pSVar2 = AottgGameCreateSession.SandboxFieldsInternal;
		}
		if (pSVar2 == null) {
	label_05e63661: ;
			throw new NullReferenceException();
		}
		uVar1 = *index;
		lVar11 = pSVar2.get_Item((ulong)uVar1);
		if (map) {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			pSVar7 = AottgGameCreateSession.SandboxMapNames();
		}
		else {
			if (lVar11 == 0) goto label_05e63661;
			pSVar7 = *(String[]*)(lVar11 + 0x28);
		}
		pSVar8 = new Action<string, string>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c__DisplayClass98_0_OpenGameCreateSelector_b__1);
		AottgGameUiActions.OpenGameCreateSelector(context, map, pSVar7, true, pSVar8);
		return;
	}

	[Token(Token = "0x6000A08")]
	[Address(RVA = "0x5D63680", Offset = "0x5D62680", VA = "0x5D63680")]
	private static void OpenGameCreateSelector(GisketchActionContext context, bool map, string[] options, bool showMapCategories, Action<string, string> selected)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$OpenGameCreateSelector): 1 lines keep C-only constructs
		InGameSet pSVar1;
		InGameGeneralSettings pSVar2;
		StringSetting pSVar3;
		StringSetting pSVar4;
		AottgGameUiActions.c__DisplayClass99_0 __this;
		Action<string> __this_00;

		__this = new AottgGameUiActions.c__DisplayClass99_0();
		if (__this == null) goto label_05e63871;
		__this.selected = selected;
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452cd == false) goto label_05e6376e;
	label_05e6373e: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05e6374b;
	label_05e6378e: ;
			pSVar1 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if (Il2CppMethodInitialized_075452cd != false) goto label_05e6373e;
	label_05e6376e: ;
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_05e6378e;
	label_05e6374b: ;
			pSVar1 = AottgGameCreateSession._Working_k__BackingField;
		}
		if (pSVar1 != null) {
			if (!map) {
				__this_00 = new Action<string>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c__DisplayClass99_0_OpenGameCreateSelector_b__0);
				AottgGameCreatePicker.OpenMode(context, options, __this_00);
				return;
			}
			pSVar2 = pSVar1.General;
			if (((pSVar2 != null) &&(pSVar3 = pSVar2.MapName, pSVar3 != null)) &&(pSVar4 = pSVar2.MapCategory, pSVar4 != null)) {
				AottgGameCreatePicker.OpenMap(context, options, pSVar3._value, pSVar4._value, showMapCategories, __this.selected);
				return;
			}
		}
	label_05e63871: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000A09")]
	[Address(RVA = "0x5D63890", Offset = "0x5D62890", VA = "0x5D63890")]
	private void SelectSandboxSection(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$SelectSandboxSection): 1 lines keep C-only constructs
		uint uVar1;
		String[] pSVar2;
		int index;
		bool bVar3;
		GisketchUIRoot root;
		int iStack_1c;

		iStack_1c = 0;
		if (Il2CppMethodInitialized_075452d7 == false) {
			Il2CppMethodInitialized_075452d7 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = AottgGameCreateSession.SandboxSectionsInternal;
		}
		else {
			pSVar2 = *(String[]*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x28);
		}
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		bVar3 = AottgGameUiActions.TryElementIndex(context.ElementId, "game-create-sandbox-section-", (int32_t)pSVar2.Length, ref iStack_1c);
		index = iStack_1c;
		if (bVar3) {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			bVar3 = AottgGameCreateSession.SelectSandboxSection(index);
			if (bVar3) {
				root = this.Root;
				AottgGameCreateScreen.Refresh(root);
			}
		}
		return;
	}

	[Token(Token = "0x6000A0A")]
	[Address(RVA = "0x5D63A10", Offset = "0x5D62A10", VA = "0x5D63A10")]
	private void ChangeSandboxField(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ChangeSandboxField): clean
		List<AottgSandboxField> pSVar1;
		uint uVar4;
		bool bVar5;
		bool bVar6;
		int count;
		String pSVar8;
		GisketchUIRoot root;
		long lVar10;
		uint uStack_2c;

		pSVar8 = context.ElementId;
		uStack_2c = 0;
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_075452d8 != false) goto label_05e63aa4;
	label_05e63ad4: ;
			g_data_075452d8 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05e63ab1;
	label_05e63af4: ;
			pSVar1 = AottgGameCreateSession.SandboxFieldsInternal;
		}
		else {
			if (g_data_075452d8 == false) goto label_05e63ad4;
	label_05e63aa4: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_05e63af4;
	label_05e63ab1: ;
			pSVar1 = AottgGameCreateSession.SandboxFieldsInternal;
		}
		if (pSVar1 == null) goto label_05e63d0c;
		count = pSVar1.get_Item();
		bVar5 = AottgGameUiActions.TryElementIndex(pSVar8, "game-create-sandbox-field-", count, ref uStack_2c);
		if (!bVar5) {
			return;
		}
		pSVar8 = context.InputText;
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_075452d8 != false) goto label_05e63bbe;
	label_05e63bee: ;
			g_data_075452d8 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05e63bcb;
	label_05e63c0e: ;
			pSVar1 = AottgGameCreateSession.SandboxFieldsInternal;
			uVar4 = uStack_2c;
		}
		else {
			if (g_data_075452d8 == false) goto label_05e63bee;
	label_05e63bbe: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_05e63c0e;
	label_05e63bcb: ;
			pSVar1 = AottgGameCreateSession.SandboxFieldsInternal;
			uVar4 = uStack_2c;
		}
		uStack_2c = uVar4;
		if (pSVar1 != null) {
			lVar10 = pSVar1.get_Item((ulong)uVar4);
			if (lVar10 != 0) {
				bVar5 = (*(String*)(lVar10 + 0x10) == "titan.TitanHeadMode");
				bVar6 = AottgGameCreateSession.ChangeSandboxField(uStack_2c, pSVar8, null);
				if ((bVar5) && (bVar6)) {
					root = this.Root;
					AottgGameCreateScreen.RefreshTitanHeadBounds(root);
				}
				return;
			}
		}
	label_05e63d0c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000A0B")]
	[Address(RVA = "0x5D63D20", Offset = "0x5D62D20", VA = "0x5D63D20")]
	private void ToggleSandboxAddon(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ToggleSandboxAddon): 1 lines keep C-only constructs
		uint uVar1;
		String[] pSVar2;
		int index;
		bool bVar3;
		int iStack_1c;

		iStack_1c = 0;
		if (Il2CppMethodInitialized_075452da == false) {
			Il2CppMethodInitialized_075452da = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = AottgGameCreateSession._sandboxAddonNames;
		}
		else {
			pSVar2 = *(String[]*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x18);
		}
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		bVar3 = AottgGameUiActions.TryElementIndex(context.ElementId, "game-create-sandbox-addon-", (int32_t)pSVar2.Length, ref iStack_1c);
		if (bVar3) {
			if (context.Node == null) {
				bVar3 = false;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
				index = iStack_1c;
			}
			else {
				bVar3 = (((context.Node).fields).value == "true");
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
				index = iStack_1c;
			}
			iStack_1c = index;
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			AottgGameCreateSession.ToggleSandboxAddon(index, bVar3);
		}
		return;
	}

	[Token(Token = "0x6000A0C")]
	[Address(RVA = "0x5D63E90", Offset = "0x5D62E90", VA = "0x5D63E90")]
	private void OpenAddonSelector(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$OpenAddonSelector): 2 lines keep C-only constructs
		uint uVar1;
		String[] addons;
		object @object;
		Func<int, bool> __this_00;
		Gisketch_Aottg2UI_Game_AottgGameUiActions___c_StaticFields pGVar2;
		Action<int> __this_01;

		if (Il2CppMethodInitialized_075452da == false) {
			Il2CppMethodInitialized_075452da = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		addons = AottgGameCreateSession._sandboxAddonNames;
		__this_00 = new Func<int, bool>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_IsSandboxAddonSelected);
		pGVar2 = typeof(AottgGameUiActions.c).static_fields;
		__this_01 = pGVar2.__9__103_0;
		if (__this_01 == null) {
			if ((typeof(AottgGameUiActions.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar2 = typeof(AottgGameUiActions.c).static_fields;
			}
			@object = (object)pGVar2.__9;
			__this_01 = new Action<int>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c_OpenAddonSelector_b__103_0);
			pGVar2 = typeof(AottgGameUiActions.c).static_fields;
			pGVar2.__9__103_0 = __this_01;
		}
		AottgGameCreatePicker.OpenAddons(context, addons, __this_00, __this_01, null);
		return;
	}

	[Token(Token = "0x6000A0D")]
	[Address(RVA = "0x5D64090", Offset = "0x5D63090", VA = "0x5D64090")]
	private void ChangeRoomField(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ChangeRoomField): 10 lines keep C-only constructs
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		bool bVar3;
		bool bVar4;
		int iVar5;
		object pIVar6;
		VirtualInvokeData pVVar7;
		String pSVar8;
		GisketchUIRoot root;
		ulong uVar9;
		long lVar10;
		int iStack_2c;

		pSVar8 = context.ElementId;
		iStack_2c = 0;
		pIVar6 = (object)AottgGameCreateSession.MultiplayerFields;
		if (pIVar6 != null) {
			pIVar1 = pIVar6.klass;
			uVar9 = (ulong)(pIVar1._2).interface_offsets_count;
			if (uVar9 != 0) {
				pIVar2 = (pIVar1._1).interfaceOffsets;
				lVar10 = 0;
				do {
					if (*(IReadOnlyCollection<AottgSandboxField>*)((long)&pIVar2.interfaceType + lVar10) == typeof(IReadOnlyCollection<AottgSandboxField>)) {
						pVVar7 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar10);
						goto label_05e64181;
					}
					lVar10 = lVar10 + 0x10;
				} while (uVar9 * 0x10 != lVar10);
			}
			pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar6, (Il2CppClass)typeof(IReadOnlyCollection<AottgSandboxField>), 0);
	label_05e64181: ;
			iVar5 = (*pVVar7.methodPtr)(pIVar6,pVVar7.method);
			bVar3 = AottgGameUiActions.TryElementIndex(pSVar8, "game-create-room-field-", iVar5, ref iStack_2c);
			if (!bVar3) {
				return;
			}
			pSVar8 = context.InputText;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			pIVar6 = (object)AottgGameCreateSession.MultiplayerFields;
			iVar5 = iStack_2c;
			if (pIVar6 != null) {
				pIVar1 = pIVar6.klass;
				uVar9 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar9 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar10 = 0;
					do {
						if (*(IReadOnlyList<AottgSandboxField>*)((long)&pIVar2.interfaceType + lVar10) == typeof(IReadOnlyList<AottgSandboxField>)) {
							pVVar7 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar10);
							goto label_05e64241;
						}
						lVar10 = lVar10 + 0x10;
					} while (uVar9 * 0x10 != lVar10);
				}
				pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar6, (Il2CppClass)typeof(IReadOnlyList<AottgSandboxField>), 0);
	label_05e64241: ;
				pIVar6 = (*pVVar7.methodPtr)(pIVar6,iVar5,pVVar7.method);
				if (pIVar6 != null) {
					bVar3 = ((String)pIVar6[1].klass == "misc.VoiceChat");
					bVar4 = AottgGameCreateSession.ChangeMultiplayerField(iStack_2c, pSVar8);
					if (!bVar3) {
						return;
					}
					if (!bVar4) {
						return;
					}
					root = this.Root;
					AottgGameCreateScreen.Refresh(root);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000A0E")]
	[Address(RVA = "0x5D642E0", Offset = "0x5D632E0", VA = "0x5D642E0")]
	private void BackFromGameCreate()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$BackFromGameCreate): 4 lines keep C-only constructs
		uint uVar1;
		int iVar2;
		object @object;
		bool bVar3;
		GisketchUIRoot pGVar4;
		String* ppSVar5;
		Gisketch_Aottg2UI_Game_AottgGameUiActions___c_StaticFields pGVar6;
		Action<MainMenu> __this_00;
		GisketchScreenRouter __this_01;

		if (Il2CppMethodInitialized_075486ec == false) {
			Il2CppMethodInitialized_075486ec = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			bVar3 = AottgGameCreateSession.Back();
			if (bVar3) goto label_05e64317;
		}
		else {
			bVar3 = AottgGameCreateSession.Back();
			if (bVar3) {
	label_05e64317: ;
				pGVar4 = this.Root;
				AottgGameCreateScreen.Refresh(pGVar4);
				return;
			}
		}
		AottgGameCreateWeatherEditor.SaveChanges();
		if (Il2CppMethodInitialized_075452dd == false) {
			Il2CppMethodInitialized_075452dd = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			iVar2 = AottgGameCreateSession. _LaunchContext_k__BackingField;
		}
		else {
			iVar2 = *(int)((long)(typeof(AottgGameCreateSession)). static_fields + 0x38);
		}
		if (iVar2 == 2) {
			pGVar4 = this.Root;
			if (pGVar4 == null) {
				return;
			}
			__this_01 = pGVar4._Screens_k__BackingField;
			if (__this_01 == null) {
				return;
			}
			ppSVar5 = &"pause";
		}
		else {
			if (iVar2 == 1) {
				if (((typeof(AottgGameUiActions.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(AottgGameUiActions.c)) ;
					pGVar6 = typeof(AottgGameUiActions.c).static_fields;
					__this_00 = pGVar6.__9__105_0;
				}
				else {
					pGVar6 = (typeof(AottgGameUiActions.c)).static_fields;
					__this_00 = pGVar6.__9__105_0;
				}
				if (__this_00 == null) {
					if (((typeof(AottgGameUiActions.c))._2). cctor_finished_or_no_cctor == 0) {
						pGVar6 = typeof(AottgGameUiActions.c).static_fields;
					}
					@object = (object)pGVar6.__9;
					__this_00 = new Action<MainMenu>(@object, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c_BackFromGameCreate_b__105_0);
					pGVar6 = typeof(AottgGameUiActions.c).static_fields;
					pGVar6.__9__105_0 = __this_00;
				}
				AottgGameUiActions.WithMainMenu(__this_00);
				return;
			}
			pGVar4 = this.Root;
			if ((pGVar4 == null) ||(__this_01 = pGVar4._Screens_k__BackingField, __this_01 == null)) {
				return;
			}
			ppSVar5 = &"main-menu";
		}
		__this_01.ShowScreen(*ppSVar5);
		return;
	}

	[Token(Token = "0x6000A0F")]
	[Address(RVA = "0x5D646B0", Offset = "0x5D636B0", VA = "0x5D646B0")]
	private void StartCreatedGame()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$StartCreatedGame): clean
		sbyte cVar1;
		int iVar2;
		MultiplayerSettings pSVar3;
		WeatherSettings pSVar4;
		bool bVar5;
		int iVar6;

		if (Il2CppMethodInitialized_075486ed == false) {
			Il2CppMethodInitialized_075486ed = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_05e6474d;
	label_05e646d4: ;
			if (Il2CppMethodInitialized_075452dd != false) goto label_05e646dd;
	label_05e6475b: ;
			Il2CppMethodInitialized_075452dd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_05e6477e;
	label_05e646ed: ;
			iVar2 = AottgGameCreateSession. _LaunchContext_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05e646d4;
	label_05e6474d: ;
			if (Il2CppMethodInitialized_075452dd == false) goto label_05e6475b;
	label_05e646dd: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05e646ed;
	label_05e6477e: ;
			iVar2 = AottgGameCreateSession. _LaunchContext_k__BackingField;
		}
		if (iVar2 == 1) {
			if (((typeof(PhotonNetwork))._2).cctor_finished_or_no_cctor == 0) {
				if (g_data_07544cc2 == false) goto label_05e647e0;
	label_05e647b3: ;
				if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor != 0) goto label_05e647bf;
	label_05e647ff: ;
				cVar1 = PhotonNetwork.offlineMode;
			}
			else {
				if (g_data_07544cc2 != false) goto label_05e647b3;
	label_05e647e0: ;
				g_data_07544cc2 = true;
				if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) goto label_05e647ff;
	label_05e647bf: ;
				cVar1 = PhotonNetwork.offlineMode;
			}
			if (cVar1 != false) {
	label_05e64856: ;
				this.ShowNetworkErrorToast((String)method);
				return;
			}
			if (((typeof(PhotonNetwork))._2).cctor_finished_or_no_cctor == 0) {
				bVar5 = PhotonNetwork.IsConnectedAndReady;
			}
			else {
				bVar5 = PhotonNetwork.IsConnectedAndReady;
			}
			if (!bVar5) goto label_05e64856;
			if (((typeof(PhotonNetwork))._2).cctor_finished_or_no_cctor == 0) {
			}
			iVar6 = PhotonNetwork.Server;
			if (iVar6 != 0) goto label_05e64856;
		}
		bVar5 = this.PrepareGameCreateLaunch();
		if (!bVar5) {
			return;
		}
		MusicManager.PlayEffect();
		MusicManager.PlayTransition();
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452dd == false) goto label_05e648c1;
	label_05e64892: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05e6489e;
	label_05e648e0: ;
			iVar2 = AottgGameCreateSession. _LaunchContext_k__BackingField;
		}
		else {
			if (Il2CppMethodInitialized_075452dd != false) goto label_05e64892;
	label_05e648c1: ;
			Il2CppMethodInitialized_075452dd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_05e648e0;
	label_05e6489e: ;
			iVar2 = AottgGameCreateSession. _LaunchContext_k__BackingField;
		}
		if (iVar2 == 0) {
			pSVar3 = SettingsManager.MultiplayerSettings;
			if (pSVar3 == null) goto label_05e649a3;
			pSVar3.ConnectOffline();
		}
		pSVar3 = SettingsManager.MultiplayerSettings;
		if (pSVar3 != null) {
			pSVar3.StartRoom();
			pSVar4 = SettingsManager.WeatherSettings;
			if (pSVar4 != null) {
				pSVar4.Save();
				pSVar4 = SettingsManager.WeatherSettings;
				if (pSVar4 != null) {
					pSVar4.Load();
					return;
				}
			}
		}
	label_05e649a3: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000A10")]
	[Address(RVA = "0x5D64DD0", Offset = "0x5D63DD0", VA = "0x5D64DD0")]
	private void RestartCreatedGame()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$RestartCreatedGame): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		BaseMenu pUVar3;
		WeatherSettings pSVar4;
		bool bVar5;

		if (Il2CppMethodInitialized_075486ee == false) {
			Il2CppMethodInitialized_075486ee = true;
			uVar2 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			bVar5 = PhotonNetwork.IsMasterClient;
		}
		else {
			bVar5 = PhotonNetwork.IsMasterClient;
		}
		if ((bVar5) &&(bVar5 = this.PrepareGameCreateLaunch())) {
			InGameManager.RestartGame();
			pUVar3 = UIManager.CurrentMenu;
			if (pUVar3 != null) {
				bVar1 = (typeof(InGameMenu)._2).typeHierarchyDepth;
				if ((bVar1 <= (pUVar3.klass._2).typeHierarchyDepth) &&((pUVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(InGameMenu))) {
					*(byte)&(*(ulong)((sbyte)pUVar3 + 0x158)) = 1;
				}
			}
			pSVar4 = SettingsManager.WeatherSettings;
			if (pSVar4 != null) {
				pSVar4.Save();
				pSVar4 = SettingsManager.WeatherSettings;
				if (pSVar4 != null) {
					pSVar4.Load();
					AottgGisketchUiHost.HideInGameOverlay(true);
					return;
				}
			}
			throw new NullReferenceException();
		}
		return;
	}

	[Token(Token = "0x6000A11")]
	[Address(RVA = "0x5D64F70", Offset = "0x5D63F70", VA = "0x5D64F70")]
	private void SaveForNextRestart()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$SaveForNextRestart): clean
		uint uVar1;
		int iVar2;
		GisketchScreenRouter __this_00;
		bool bVar3;
		GisketchUIRoot pGVar4;

		if (Il2CppMethodInitialized_075486ef == false) {
			Il2CppMethodInitialized_075486ef = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075452dd == false) {
			Il2CppMethodInitialized_075452dd = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			iVar2 = AottgGameCreateSession. _LaunchContext_k__BackingField;
		}
		else {
			iVar2 = *(int)((long)(typeof(AottgGameCreateSession)). static_fields + 0x38);
		}
		if (iVar2 == 2) {
			if (((typeof(PhotonNetwork))._2).cctor_finished_or_no_cctor == 0) {
				bVar3 = PhotonNetwork.IsMasterClient;
			}
			else {
				bVar3 = PhotonNetwork.IsMasterClient;
			}
			if (bVar3) {
				if (((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor == 0) {
					bVar3 = AottgGameCreateSession.CanStart;
				}
				else {
					bVar3 = AottgGameCreateSession.CanStart;
				}
				if (bVar3) {
					if (((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor == 0) {
					}
					AottgGameCreateSession.SaveForNextRound();
					pGVar4 = this.Root;
					if ((pGVar4 != null) &&(__this_00 = pGVar4._Screens_k__BackingField, __this_00 != null)) {
						__this_00.ShowScreen("pause");
						return;
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x6000A12")]
	[Address(RVA = "0x5D64AD0", Offset = "0x5D63AD0", VA = "0x5D64AD0")]
	private bool PrepareGameCreateLaunch()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$PrepareGameCreateLaunch): 2 lines keep C-only constructs
		uint uVar1;
		InGameSet pSVar2;
		byte uVar3;
		GisketchUIRoot root;

		if (Il2CppMethodInitialized_075486f0 == false) {
			Il2CppMethodInitialized_075486f0 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05e64af4;
	label_05e64b36: ;
			uVar3 = AottgGameCreateSession.CanStart;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_05e64b36;
	label_05e64af4: ;
			uVar3 = AottgGameCreateSession.CanStart;
		}
		if (!(bool)uVar3) goto label_05e64c19;
		if (*(uint)((long)typeof(AottgGameCreateSession) + 0xe4) == 0) {
			if (Il2CppMethodInitialized_075452cd != false) goto label_05e64b5f;
	label_05e64bdc: ;
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05e64b6f;
	label_05e64bff: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if (Il2CppMethodInitialized_075452cd == false) goto label_05e64bdc;
	label_05e64b5f: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_05e64bff;
	label_05e64b6f: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		if (pSVar2 != null) {
			pSVar2 = SettingsManager.InGameUI;
			if (((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			if (Il2CppMethodInitialized_075452cd == false) {
				Il2CppMethodInitialized_075452cd = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = *(uint)((long)typeof(AottgGameCreateSession) + 0xe4);
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			if (pSVar2 != null) {
				pSVar2.Copy(*(BaseSetting*)((long)(typeof(AottgGameCreateSession)). static_fields + 0x40));
				pSVar2 = SettingsManager.InGameCurrent;
				if (Il2CppMethodInitialized_075452cd == false) {
					Il2CppMethodInitialized_075452cd = true;
					uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				if (pSVar2 != null) {
					pSVar2.Copy(*(BaseSetting*)((long)(typeof(AottgGameCreateSession)). static_fields + 0x40));
					return true;
				}
			}
			throw new NullReferenceException();
		}
	label_05e64c19: ;
		root = this.Root;
		AottgGameCreateScreen.Refresh(root);
		return false;
	}

	[Token(Token = "0x6000A13")]
	[Address(RVA = "0x5D65100", Offset = "0x5D64100", VA = "0x5D65100")]
	private void OpenGameCreateImport()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$OpenGameCreateImport): 1 lines keep C-only constructs
		uint uVar1;
		BaseMenu pUVar2;
		bool bVar3;
		ImportPopup __this_00;
		UnityAction __this_01;

		if (Il2CppMethodInitialized_075486f1 == false) {
			Il2CppMethodInitialized_075486f1 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			bVar3 = AottgGameCreateSession.IsSandbox;
		}
		else {
			bVar3 = AottgGameCreateSession.IsSandbox;
		}
		if (bVar3) {
			if (((typeof(UIManager))._2).cctor_finished_or_no_cctor == 0) {
			}
			pUVar2 = UIManager.CurrentMenu;
			bVar3 = ((Object)pUVar2 == null);
			if (!bVar3) {
				pUVar2 = UIManager.CurrentMenu;
				if (pUVar2 != null) {
					__this_00 = AottgGisketchUiHost.AboveOverlay<ImportPopup>((object)pUVar2.ImportPopup) ;
					__this_01 = new UnityAction((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_ImportGameCreatePreset);
					if (__this_00 != null) {
						__this_00.Show(__this_01, true, "", "");
						return;
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6000A14")]
	[Address(RVA = "0x5D652B0", Offset = "0x5D642B0", VA = "0x5D652B0")]
	private void ImportGameCreatePreset()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ImportGameCreatePreset): 5 lines keep C-only constructs
		uint uVar1;
		BaseMenu pUVar2;
		ImportPopup pUVar3;
		StringSetting pSVar4;
		BoolSetting __this_00;
		bool bVar5;
		JSONNode pSVar6;
		JSONObject a;
		JSONObject pSVar7;
		InGameSet __this_01;
		GisketchUIRoot root;
		Il2CppClass klass;
		FormatException __this_02;
		String message;
		MethodInfo lastManagedFrame;

		if (Il2CppMethodInitialized_075486f2 == false) {
			Il2CppMethodInitialized_075486f2 = true;
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pUVar2 = UIManager.CurrentMenu;
		}
		else {
			pUVar2 = *(BaseMenu*)((long)(typeof(UIManager)).static_fields + 0x40);
		}
		if (pUVar2 == null) {
			throw new NullReferenceException();
		}
		pUVar3 = pUVar2.ImportPopup;
		if (pUVar3 == null) {
			throw new NullReferenceException();
		}
		pSVar4 = pUVar3.ImportSetting;
		if (pSVar4 == null) {
			throw new NullReferenceException();
		}
		pSVar6 = JSON.Parse(pSVar4._value);
		if (pSVar6 == null) {
			throw new NullReferenceException();
		}
		a = pSVar6.get_AsObject();
		bVar5 = ((JSONNode)a == null);
		if (!bVar5) {
			if (a == null) {
				throw new NullReferenceException();
			}
			pSVar6 = a.get_Item("General");
			if (pSVar6 == null) {
				throw new NullReferenceException();
			}
			pSVar7 = pSVar6.get_AsObject();
			bVar5 = ((JSONNode)pSVar7 == null);
			if (!bVar5) {
				pSVar6 = a.get_Item("Mode");
				if (pSVar6 == null) {
					throw new NullReferenceException();
				}
				pSVar7 = pSVar6.get_AsObject();
				bVar5 = ((JSONNode)pSVar7 == null);
				if (!bVar5) {
					pSVar6 = a.get_Item("Addons");
					if (pSVar6 == null) {
						throw new NullReferenceException();
					}
					pSVar7 = pSVar6.get_AsObject();
					bVar5 = ((JSONNode)pSVar7 == null);
					if (!bVar5) {
						pSVar6 = a.get_Item("Titan");
						if (pSVar6 == null) {
							throw new NullReferenceException();
						}
						pSVar7 = pSVar6.get_AsObject();
						bVar5 = ((JSONNode)pSVar7 == null);
						if (!bVar5) {
							pSVar6 = a.get_Item("Misc");
							if (pSVar6 == null) {
								throw new NullReferenceException();
							}
							pSVar7 = pSVar6.get_AsObject();
							bVar5 = ((JSONNode)pSVar7 == null);
							if (!bVar5) {
								__this_01 = new InGameSet();
								if (__this_01 == null) {
									throw new NullReferenceException();
								}
								__this_01.DeserializeFromJsonObject((JSONNode)a);
								__this_00 = __this_01.Preset;
								if (__this_00 == null) {
									throw new NullReferenceException();
								}
								__this_00.Value = false;
								if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								AottgGameCreateSession.ReplaceSandboxWorking(__this_01);
								pUVar3.Hide();
								root = this.Root;
								AottgGameCreateScreen.Refresh(root);
								return;
							}
						}
					}
				}
			}
		}
		klass = il2cpp_codegen_get_runtime_metadata(&typeof(FormatException));
		__this_02 = (FormatException)il2cpp_codegen_object_new(klass);
		message = il2cpp_codegen_get_runtime_metadata(&"Preset must contain the core game settings sections.");
		__this_02 = new FormatException(message);
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_ImportGameCreatePreset);
		throw (object)__this_02;
	}

	[Token(Token = "0x6000A15")]
	[Address(RVA = "0x5D65880", Offset = "0x5D64880", VA = "0x5D65880")]
	private static void OpenGameCreateExport()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$OpenGameCreateExport): clean
		uint uVar1;
		BaseMenu pUVar2;
		BoolSetting __this;
		bool bVar3;
		InGameSet pSVar4;
		ExportPopup __this_00;
		String value;

		if (Il2CppMethodInitialized_075486f3 == false) {
			Il2CppMethodInitialized_075486f3 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			bVar3 = AottgGameCreateSession.IsSandbox;
		}
		else {
			bVar3 = AottgGameCreateSession.IsSandbox;
		}
		if (!bVar3) {
			return;
		}
		if (((typeof(AottgGameCreateSession))._2).cctor_finished_or_no_cctor == 0) {
		}
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = *(uint)((long)typeof(AottgGameCreateSession) + 0xe4);
		}
		if (uVar1 == 0) {
			pSVar4 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			pSVar4 = (*(Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields*)((long)typeof(AottgGameCreateSession) + 0xb8)). _Working_k__BackingField;
		}
		if (pSVar4 != null) {
			if (((typeof(UIManager))._2).cctor_finished_or_no_cctor == 0) {
			}
			pUVar2 = UIManager.CurrentMenu;
			bVar3 = ((Object)pUVar2 == null);
			if (!bVar3) {
				pSVar4 = new InGameSet();
				if (Il2CppMethodInitialized_075452cd == false) {
					Il2CppMethodInitialized_075452cd = true;
					uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				if (pSVar4 != null) {
					pSVar4.Copy(*(BaseSetting*)((long)(typeof(AottgGameCreateSession)). static_fields + 0x40));
					__this = pSVar4.Preset;
					if (__this != null) {
						__this.Value = false;
						pUVar2 = UIManager.CurrentMenu;
						if (pUVar2 != null) {
							__this_00 = AottgGisketchUiHost.AboveOverlay<ExportPopup>((object)pUVar2.ExportPopup);
							value = pSVar4.SerializeToJsonString();
							if (__this_00 != null) {
								__this_00.Show(value);
								return;
							}
						}
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6000A16")]
	[Address(RVA = "0x5D65B30", Offset = "0x5D64B30", VA = "0x5D65B30")]
	private static void OpenFolder(string path)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$OpenFolder): clean
		bool bVar1;
		Uri __this;
		String url;

		bVar1 = String.IsNullOrWhiteSpace(path);
		if (bVar1) {
			Debug.LogError((Il2CppObject *)"Could not open custom content folder because its path is unavailable.");
			return;
		}
		Directory.CreateDirectory(path);
		__this = new Uri(path);
		if (__this == null) {
			throw new NullReferenceException();
		}
		url = __this.AbsoluteUri;
		Application.OpenURL(url);
		return;
	}

	[Token(Token = "0x6000A17")]
	[Address(RVA = "0x5D65C20", Offset = "0x5D64C20", VA = "0x5D65C20")]
	private static void OpenLogsFolder()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$OpenLogsFolder): clean
		bool bVar1;
		String pSVar2;
		String value;
		Uri __this;

		value = null;
		pSVar2 = Application.consoleLogPath;
		bVar1 = String.IsNullOrWhiteSpace(pSVar2);
		if (!bVar1) {
			value = Path.GetDirectoryName(pSVar2);
		}
		bVar1 = String.IsNullOrWhiteSpace(value);
		if (bVar1) {
			Debug.LogError((Il2CppObject *)"Could not determine the game log folder.");
			return;
		}
		Directory.CreateDirectory(value);
		__this = new Uri(value);
		if (__this == null) {
			throw new NullReferenceException();
		}
		pSVar2 = __this.AbsoluteUri;
		Application.OpenURL(pSVar2);
		return;
	}

	[Token(Token = "0x6000A18")]
	[Address(RVA = "0x5D65D70", Offset = "0x5D64D70", VA = "0x5D65D70")]
	private void ImportCustomContent(CustomContentType type)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ImportCustomContent): 2 lines keep C-only constructs
		BaseMenu pUVar1;
		bool bVar2;
		AottgGameUiActions.c__DisplayClass116_0 __this_00;
		NewImportPopup __this_01;
		UnityAction __this_02;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameUiActions.c__DisplayClass116_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.type = type;
			__this_00.__4__this = this;
			pUVar1 = UIManager.CurrentMenu;
			bVar2 = ((Object)pUVar1 == null);
			if (bVar2) {
				return;
			}
			pUVar1 = UIManager.CurrentMenu;
			if (pUVar1 != null) {
				__this_01 = AottgGisketchUiHost.AboveOverlay<NewImportPopup>((object)pUVar1.NewImportPopup);
				__this_02 = new UnityAction((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c__DisplayClass116_0_ImportCustomContent_b__0);
				if (__this_01 != null) {
					__this_01.Show(__this_02, true);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000A19")]
	[Address(RVA = "0x5D65F00", Offset = "0x5D64F00", VA = "0x5D65F00")]
	private void OpenCustomContentManager(GisketchActionContext context, CustomContentType type)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$OpenCustomContentManager): 6 lines keep C-only constructs
		AottgGameUiActions.c__DisplayClass117_0 __this_00;
		String title;
		String pSVar1;
		String description;
		List<string> __this_01;
		String[] names;
		Action __this_02;
		Action<string> __this_03;
		Action<string> __this_04;
		Action __this_05;
		Enum SStack_48;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameUiActions.c__DisplayClass117_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			__this_00.type = type;
			title = AottgGameUiActions.GetCustomContentLabel(type);
			SStack_48.klass = (Enum)typeof(AottgGameUiActions.CustomContentType);
			SStack_48.monitor = (IntPtr)0xffffffffffffffff;
			pSVar1 = SStack_48.ToString();
			if (pSVar1 != null) {
				pSVar1 = pSVar1.ToLowerInvariant();
				pSVar1 = String.Concat("game-create-custom-", pSVar1, "-manager");
				description = Aottg2GisketchLocale.Text("GameCreate.Sandbox.Custom.Manager.Description");
				__this_01 = AottgGameUiActions.GetCustomContentNames(__this_00.type);
				if (__this_01 != null) {
					names = (String[])__this_01.ToArray();
					__this_02 = new Action((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c__DisplayClass117_0_OpenCustomContentManager_b__0);
					__this_03 = new Action<string>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c__DisplayClass117_0_OpenCustomContentManager_b__1);
					__this_04 = new Action<string>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c__DisplayClass117_0_OpenCustomContentManager_b__2);
					__this_05 = new Action((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c__DisplayClass117_0_OpenCustomContentManager_b__3);
					AottgGameCreatePicker.OpenCustomContentManager(context, pSVar1, title, description, names, __this_02, __this_03, __this_04, __this_05);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000A1A")]
	[Address(RVA = "0x5D66440", Offset = "0x5D65440", VA = "0x5D66440")]
	private void SelectCustomContent(CustomContentType type, Action<CustomContentType, string> operation)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$SelectCustomContent): 2 lines keep C-only constructs
		BaseMenu pUVar1;
		bool bVar2;
		AottgGameUiActions.c__DisplayClass118_0 __this_00;
		List<string> items;
		SelectListPopup __this_01;
		String pSVar3;
		String arg0;
		UnityAction __this_02;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameUiActions.c__DisplayClass118_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.operation = operation;
			__this_00.type = type;
			pUVar1 = UIManager.CurrentMenu;
			bVar2 = ((Object)pUVar1 == null);
			if (bVar2) {
				return;
			}
			items = AottgGameUiActions.GetCustomContentNames(__this_00.type);
			if (items != null) {
				if (items._size == 0) {
					pSVar3 = AottgGameUiActions.GetCustomContentLabel(__this_00.type);
					pSVar3 = String.Concat("No custom ", pSVar3, " files are available.");
					Debug.LogWarning((object)pSVar3);
					return;
				}
				pUVar1 = UIManager.CurrentMenu;
				if (pUVar1 != null) {
					__this_01 = AottgGisketchUiHost.AboveOverlay<SelectListPopup>((object)pUVar1.SelectListPopup);
					if ((typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor == 0 ) {
					}
					pSVar3 = Aottg2GisketchLocale.Text("GameCreate.Sandbox.Custom.Select.Format");
					arg0 = AottgGameUiActions.GetCustomContentLabel(__this_00.type);
					pSVar3 = String.Format(pSVar3, (object)arg0);
					__this_02 = new UnityAction((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c__DisplayClass118_0_SelectCustomContent_b__0);
					if (__this_01 != null) {
						__this_01.ShowLoad(items, pSVar3, __this_02, null, null);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000A1B")]
	[Address(RVA = "0x5D66700", Offset = "0x5D65700", VA = "0x5D66700")]
	private void ModifyCustomContent(CustomContentType type, string name)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ModifyCustomContent): 2 lines keep C-only constructs
		BaseMenu pUVar1;
		bool bVar2;
		AottgGameUiActions.c__DisplayClass119_0 __this_00;
		String initialText;
		ImportPopup __this_01;
		UnityAction __this_02;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameUiActions.c__DisplayClass119_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.type = type;
			__this_00.name = name;
			__this_00.__4__this = this;
			pUVar1 = UIManager.CurrentMenu;
			bVar2 = ((Object)pUVar1 == null);
			if (bVar2) {
				return;
			}
			initialText = AottgGameUiActions.LoadCustomContent(__this_00.type, __this_00.name);
			pUVar1 = UIManager.CurrentMenu;
			if (pUVar1 != null) {
				__this_01 = AottgGisketchUiHost.AboveOverlay<ImportPopup>((object)pUVar1.ImportPopup);
				__this_02 = new UnityAction((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c__DisplayClass119_0_ModifyCustomContent_b__0);
				if (__this_01 != null) {
					__this_01.Show(__this_02, true, "", initialText);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000A1C")]
	[Address(RVA = "0x5D66A10", Offset = "0x5D65A10", VA = "0x5D66A10")]
	private void DeleteCustomContent(CustomContentType type, string name)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$DeleteCustomContent): 2 lines keep C-only constructs
		BaseMenu pUVar1;
		bool bVar2;
		AottgGameUiActions.c__DisplayClass120_0 __this_00;
		ConfirmPopup __this_01;
		String pSVar3;
		UnityAction __this_02;
		String title;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameUiActions.c__DisplayClass120_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.type = type;
			__this_00.name = name;
			__this_00.__4__this = this;
			pUVar1 = UIManager.CurrentMenu;
			bVar2 = ((Object)pUVar1 == null);
			if (bVar2) {
				return;
			}
			pUVar1 = UIManager.CurrentMenu;
			if (pUVar1 != null) {
				__this_01 = AottgGisketchUiHost.AboveOverlay<ConfirmPopup>((object)pUVar1.ConfirmPopup);
				pSVar3 = Aottg2GisketchLocale.Text("Common.DeleteConfirm");
				pSVar3 = String.Format(pSVar3, (object)__this_00.name);
				__this_02 = new UnityAction((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c__DisplayClass120_0_DeleteCustomContent_b__0);
				title = Aottg2GisketchLocale.Text("Common.Delete");
				if (__this_01 != null) {
					__this_01.Show(pSVar3, __this_02, title);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000A1D")]
	[Address(RVA = "0x5D66300", Offset = "0x5D65300", VA = "0x5D66300")]
	private static List<string> GetCustomContentNames(CustomContentType type)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$GetCustomContentNames): 6 lines keep C-only constructs
		String[] source;
		List<string> pSVar1;
		Il2CppClass pIVar2;
		object actualValue;
		ArgumentOutOfRangeException __this;
		String paramName;
		MethodInfo lastManagedFrame;
		byte[] local_14 = new byte[4];

		if (type == 2) {
			source = BuiltinLevels.GetCustomAddons();
		}
		else if (type == 1) {
			source = BuiltinLevels.GetCustomModes();
		}
		else {
			if (type != 0) {
				pIVar2 = il2cpp_codegen_get_runtime_metadata(&typeof(AottgGameUiActions.CustomContentType));
				actualValue = (object)local_14;
				pIVar2 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentOutOfRangeException));
				__this = (ArgumentOutOfRangeException)il2cpp_codegen_object_new(pIVar2);
				paramName = il2cpp_codegen_get_runtime_metadata(&"type");
				__this = new ArgumentOutOfRangeException(paramName, actualValue, null);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_GetCustomContentNames);
				throw (object)__this;
			}
			source = BuiltinLevels.GetMapNames("Custom");
		}
		pSVar1 = (List<string>)Enumerable.ToList<string>((System_Collections_Generic_IEnumerable_TSource__o)source);
		return pSVar1;
	}

	[Token(Token = "0x6000A1E")]
	[Address(RVA = "0x5D668D0", Offset = "0x5D658D0", VA = "0x5D668D0")]
	private static string LoadCustomContent(CustomContentType type, string name)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$LoadCustomContent): 5 lines keep C-only constructs
		String pSVar1;
		Il2CppClass pIVar2;
		object actualValue;
		ArgumentOutOfRangeException __this;
		MethodInfo lastManagedFrame;
		byte[] local_14 = new byte[4];

		if (type == 2) {
			pSVar1 = BuiltinLevels.LoadAddon(name);
			return pSVar1;
		}
		if (type == 1) {
			pSVar1 = BuiltinLevels.LoadLogic(name);
			return pSVar1;
		}
		if (type != 0) {
			pIVar2 = il2cpp_codegen_get_runtime_metadata(&typeof(AottgGameUiActions.CustomContentType));
			actualValue = (object)local_14;
			pIVar2 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentOutOfRangeException));
			__this = (ArgumentOutOfRangeException)il2cpp_codegen_object_new(pIVar2);
			pSVar1 = il2cpp_codegen_get_runtime_metadata(&"type");
			__this = new ArgumentOutOfRangeException(pSVar1, actualValue, null);
			lastManagedFrame =(MethodInfo)il2cpp_codegen_get_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_LoadCustomContent);
			throw (object)__this;
		}
		pSVar1 = BuiltinLevels.LoadMap("Custom", name);
		return pSVar1;
	}

	[Token(Token = "0x6000A1F")]
	[Address(RVA = "0x5D66C30", Offset = "0x5D65C30", VA = "0x5D66C30")]
	private static bool TrySaveCustomContent(CustomContentType type, string name, string content, out string error)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$TrySaveCustomContent): 6 lines keep C-only constructs
		bool bVar1;
		MapScript __this;
		Il2CppClass pIVar2;
		object actualValue;
		ArgumentOutOfRangeException __this_00;
		String pSVar3;
		MethodInfo lastManagedFrame;
		int local_2c;

		*error = (String)**(ulong*)(g_data_07556758 + 0xb8);
		if (type == 2) {
			bVar1 = true;
			BuiltinLevels.SaveCustomAddon(name, content);
		}
		else if (type == 1) {
			bVar1 = String.IsNullOrEmpty(content);
			if (bVar1) {
				pSVar3 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				pSVar3 = CustomLogicManager.TryParseLogic(content);
			}
			*error = pSVar3;
			bVar1 = String.IsNullOrEmpty(*error);
			if (bVar1) {
				bVar1 = true;
				BuiltinLevels.SaveCustomLogic(name, content);
			}
			else {
				bVar1 = false;
			}
		}
		else {
			if (type != 0) {
				local_2c = type;
				pIVar2 = il2cpp_codegen_get_runtime_metadata(&typeof(AottgGameUiActions.CustomContentType));
				actualValue = (object)local_2c;
				pIVar2 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentOutOfRangeException));
				__this_00 = (ArgumentOutOfRangeException)il2cpp_codegen_object_new(pIVar2);
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"type");
				__this_00 = new ArgumentOutOfRangeException(pSVar3, actualValue, null);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_TrySaveCustomContent);
				throw (object)__this_00;
			}
			__this = new MapScript();
			if (__this == null) {
				throw new NullReferenceException();
			}
			__this.Deserialize(content, false);
			bVar1 = true;
			BuiltinLevels.SaveCustomMap(name, __this);
		}
		return bVar1;
	}

	[Token(Token = "0x6000A20")]
	[Address(RVA = "0x5D661D0", Offset = "0x5D651D0", VA = "0x5D661D0")]
	private static string GetCustomContentLabel(CustomContentType type)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$GetCustomContentLabel): 7 lines keep C-only constructs
		uint uVar1;
		String pSVar2;
		Il2CppClass pIVar3;
		object actualValue;
		ArgumentOutOfRangeException __this;
		MethodInfo lastManagedFrame;
		String* ppSVar4;
		byte[] local_14 = new byte[4];

		if (type == 2) {
			ppSVar4 = &"GameCreate.Sandbox.Addons";
			uVar1 = (typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor;
		}
		else if (type == 1) {
			ppSVar4 = &"GameCreate.Sandbox.Custom.Logic";
			uVar1 = (typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (type != 0) {
				pIVar3 = il2cpp_codegen_get_runtime_metadata(&typeof(AottgGameUiActions.CustomContentType));
				actualValue = (object)local_14;
				pIVar3 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentOutOfRangeException));
				__this = (ArgumentOutOfRangeException)il2cpp_codegen_object_new(pIVar3);
				pSVar2 = il2cpp_codegen_get_runtime_metadata(&"type");
				__this = new ArgumentOutOfRangeException(pSVar2, actualValue, null);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_GetCustomContentLabel);
				throw (object)__this;
			}
			ppSVar4 = &"GameCreate.Sandbox.Custom.Maps";
			uVar1 = (typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar2 = Aottg2GisketchLocale.Text(*ppSVar4);
		return pSVar2;
	}

	[Token(Token = "0x6000A21")]
	[Address(RVA = "0x5D66F20", Offset = "0x5D65F20", VA = "0x5D66F20")]
	private static string GetCustomContentFolderPath(CustomContentType type)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$GetCustomContentFolderPath): 9 lines keep C-only constructs
		String* ppSVar1;
		Il2CppClass pIVar2;
		object actualValue;
		ArgumentOutOfRangeException __this;
		String paramName;
		MethodInfo lastManagedFrame;
		byte[] local_14 = new byte[4];

		if (type == 2) {
			ppSVar1 = &BuiltinLevels.CustomAddonFolderPath;
		}
		else if (type == 1) {
			ppSVar1 = &BuiltinLevels.CustomLogicFolderPath;
		}
		else {
			if (type != 0) {
				pIVar2 = il2cpp_codegen_get_runtime_metadata(&typeof(AottgGameUiActions.CustomContentType));
				actualValue = (object)local_14;
				pIVar2 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentOutOfRangeException));
				__this = (ArgumentOutOfRangeException)il2cpp_codegen_object_new(pIVar2);
				paramName = il2cpp_codegen_get_runtime_metadata(&"type");
				__this = new ArgumentOutOfRangeException(paramName, actualValue, null);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_GetCustomContentFolderPath);
				throw (object)__this;
			}
			ppSVar1 = &BuiltinLevels.CustomMapFolderPath;
		}
		return *ppSVar1;
	}

	[Token(Token = "0x6000A22")]
	[Address(RVA = "0x5D62EC0", Offset = "0x5D61EC0", VA = "0x5D62EC0")]
	private void RefreshGameCreate()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$RefreshGameCreate): clean
		GisketchUIRoot root;

		root = this.Root;
		if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
			AottgGameCreateScreen.Refresh(root);
			return;
		}
		AottgGameCreateScreen.Refresh(root);
		return;
	}

	[Token(Token = "0x6000A23")]
	[Address(RVA = "0x5D64D50", Offset = "0x5D63D50", VA = "0x5D64D50")]
	private static void SaveAndReloadWeather()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$SaveAndReloadWeather): clean
		WeatherSettings pSVar1;

		pSVar1 = SettingsManager.WeatherSettings;
		if (pSVar1 != null) {
			pSVar1.Save();
			pSVar1 = SettingsManager.WeatherSettings;
			if (pSVar1 != null) {
				pSVar1.Load();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000A24")]
	[Address(RVA = "0x5D62A20", Offset = "0x5D61A20", VA = "0x5D62A20")]
	private static bool TryElementIndex(string elementId, string prefix, int count, out int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$TryElementIndex): 1 lines keep C-only constructs
		bool bVar1;
		String s;
		bool bVar2;

		*index = -1;
		bVar1 = String.IsNullOrEmpty(elementId);
		if (!bVar1) {
			if (elementId == null) {
	label_05e62aa8: ;
				throw new NullReferenceException();
			}
			bVar1 = elementId.StartsWith(prefix, 4);
			if (bVar1) {
				if (prefix == null) goto label_05e62aa8;
				s = elementId.Substring(prefix._stringLength);
				bVar1 = Int32.TryParse(s, index);
				if (bVar1) {
					bVar2 = *index < count && -1 < *index;
				}
			}
		}
		return bVar2;
	}

	[Token(Token = "0x6000A25")]
	[Address(RVA = "0x5D67050", Offset = "0x5D66050", VA = "0x5D67050")]
	private void RegisterInGameActions()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$RegisterInGameActions): 39 lines keep C-only constructs
		String actionId;
		object pIVar1;
		AottgGameUiActions.c__DisplayClass129_0 __this_00;
		Action<GisketchActionContext> __this_01;
		ulong uVar2;

		pIVar1 = new string[0x18];
		if (pIVar1 == null) {
	label_05e6761a: ;
			throw new NullReferenceException();
		}
		if (*(int)&pIVar1[1].monitor != 0) {
			pIVar1[2].klass = (Il2CppClass *)"ingame.wheel.select";
			if (((ulong)pIVar1[1].monitor & 0xfffffffe) != 0) {
				pIVar1[2].monitor = "ingame.scoreboard.tab";
				if (2 < *(uint)&pIVar1[1].monitor) {
					pIVar1[3].klass = (Il2CppClass *)"ingame.scoreboard.back";
					if (((ulong)pIVar1[1].monitor & 0xfffffffc) != 0) {
						pIVar1[3].monitor = "ingame.player.profile";
						if (4 < *(uint)&pIVar1[1].monitor) {
							pIVar1[4].klass = (Il2CppClass *)"ingame.player.mute";
							if (5 < *(uint)&pIVar1[1].monitor) {
								pIVar1[4].monitor = "ingame.player.kick";
								if (6 < *(uint)&pIVar1[1].monitor) {
									pIVar1[5].klass = (Il2CppClass *)"ingame.popup.back";
									if (((ulong)pIVar1[1].monitor & 0xfffffff8) != 0) {
										pIVar1[5].monitor = "ingame.player.mute.confirm";
										if (8 < *(uint)&pIVar1[1].monitor) {
											pIVar1[6].klass = (Il2CppClass *)"ingame.player.kick.confirm";
											if (9 < *(uint)&pIVar1[1].monitor) {
												pIVar1[6].monitor = "ingame.moderation.batch.session-ban";
												if (10 < *(uint)&pIVar1[1].monitor) {
													pIVar1[7].klass = (Il2CppClass *)"ingame.moderation.batch.ip-ban";
													if (0xb < *(uint)&pIVar1[1].monitor) {
														pIVar1[7].monitor = "ingame.moderation.batch.session-unban";
														if (0xc < *(uint)&pIVar1[1].monitor) {
															pIVar1[8].klass = (Il2CppClass *)"ingame.moderation.batch.ip-unban";
															if (0xd < *(uint)&pIVar1[1].monitor) {
																pIVar1[8].monitor = "ingame.moderation.player-prop.save";
																if (0xe < *(uint)&pIVar1[1].monitor) {
																	pIVar1[9].klass = (Il2CppClass *)"ingame.moderation.reason.confirm";
																	if (((ulong)pIVar1[1].monitor & 0xfffffff0) != 0) {
																		pIVar1[9].monitor = "ingame.map.zoom";
																		if (0x10 < *(uint)&pIVar1[1].monitor) {
																			pIVar1[10].klass = (Il2CppClass *)"ingame.map.back";
																			if (0x11 < *(uint)&pIVar1[1].monitor) {
																				pIVar1[10].monitor = "ingame.character.tab";
																				if (0x12 < *(uint)&pIVar1[1].monitor) {
																					pIVar1[0xb].klass = (Il2CppClass *)"ingame.character.confirm";
																					if (0x13 < *(uint)&pIVar1[1].monitor) {
																						pIVar1[0xb].monitor = "ingame.character.setting";
																						if (0x14 < *(uint)&pIVar1[1].monitor) {
																							pIVar1[0xc].klass = (Il2CppClass *)"ingame.character.choice";
																							if (0x15 < *(uint)&pIVar1[1].monitor) {
																								pIVar1[0xc].monitor = "ingame.character.picker.select";
																								if (0x16 < *(uint)&pIVar1[1].monitor) {
																									pIVar1[0xd].klass = (Il2CppClass *)"ingame.character.picker.back";
																									if (0x17 < *(uint)&pIVar1[1].monitor) {
																										pIVar1[0xd].monitor = "ingame.loading.quit";
																										if (0 < *(int)&pIVar1[1].monitor) {
																											uVar2 = 0;
																											do {
																												__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameUiActions.c__DisplayClass129_0));
																												__this_00 = new Object();
																												if (*(uint)&pIVar1[1].monitor <= uVar2) goto label_05e67615;
																												if (__this_00 ==null) goto label_05e6761a;
																												__this_00.id =(String)(&pIVar1[2].klass)[uVar2];
																												actionId = __this_00.id;
																												__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(Action<GisketchActionContext>));
																												__this_01 = new Action<GisketchActionContext>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c__DisplayClass129_0_RegisterInGameActions_b__0);
																												this.RegisterAction(actionId, __this_01);
																												uVar2 = uVar2 + 1;
																											} while ((long)uVar2 < (long)*(int)&pIVar1[1].monitor);
																										}
																										return;
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	label_05e67615: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6000A26")]
	[Address(RVA = "0x5D67630", Offset = "0x5D66630", VA = "0x5D67630")]
	internal static void HandleInGameAction(string id, GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$HandleInGameAction): 16 lines keep C-only constructs
		byte bVar1;
		Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
		bool bVar2;
		uint uVar3;
		InGameMenu pUVar4;
		String* ppSVar5;
		ScoreboardMutePopup __this;
		CharacterCategoryPanel pUVar6;
		ModerationReasonPopup __this_00;
		CharacterPopup pUVar7;
		AottgCharacterPickerPopup __this_01;
		WheelPopup __this_02;
		MapPopup __this_03;
		MethodInfo* ppMVar8;
		object pIVar9;
		PlayerPropEditPopup __this_04;
		ModerationBatchBanPopup __this_05;
		ScoreboardKickPopup __this_06;
		ScoreboardScorePanel __this_07;
		MethodInfo pMVar10;
		InGameMenu __this_08;
		_func_41 vtableDispatch;
		String a;
		int local_3c;
		int local_38;
		int local_34;

		local_34 = 0;
		local_38 = 0;
		local_3c = 0;
		pMVar10 = (MethodInfo)id;
		bVar2 = (id == "mobile.layout.open");
		if (bVar2) {
			AottgGameUiActions.HandleMobileAction(context);
			return;
		}
		bVar2 = ((Object)context.GameObject == null);
		if (bVar2) {
			return;
		}
		if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
			pUVar4 = (InGameMenu)UIManager.CurrentMenu;
			if (pUVar4 != null) goto label_05e67933;
	label_05e6794f: ;
			__this_08 = null;
			if (context.Node != null) goto label_05e6795a;
	label_05e6797b: ;
			a = null;
		}
		else {
			pUVar4 = (InGameMenu)UIManager.CurrentMenu;
			if (pUVar4 == null) goto label_05e6794f;
	label_05e67933: ;
			bVar1 = (typeof(InGameMenu)._2).typeHierarchyDepth;
			if ((((BaseMenu)pUVar4.klass)._2).typeHierarchyDepth < bVar1) goto label_05e6794f;
			__this_08 = null;
			if ((((BaseMenu)pUVar4.klass)._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(InGameMenu)) {
				__this_08 = pUVar4;
			}
			if (context.Node == null) goto label_05e6797b;
	label_05e6795a: ;
			a = ((context.Node).fields).value;
		}
		uVar3 = _PrivateImplementationDetails_.ComputeStringHash(id);
		if (uVar3 < 0x5ad6db54) {
			if (uVar3 < 0x2d9d1b37) {
				if (uVar3 < 0x17764e8e) {
					if (uVar3 == 0x1405e0ac) {
						bVar2 = (id == "ingame.character.picker.back");
						if (bVar2) {
							if (context.GameObject == null) goto label_05e68236;
							ppMVar8 = &MethodInfo_UnityEngine_GameObject_GetComponentInParent_AottgCharacterPickerPopup;
							goto label_05e67f35;
						}
					}
					else if (uVar3 == 0x17764e8d) {
						ppSVar5 = &"overlay.close";
						goto label_05e67f10;
					}
				}
				else if (uVar3 == 0x1a8496f1) {
					ppSVar5 = &"ingame.popup.back";
	label_05e67f10: ;
					bVar2 = (id == *ppSVar5);
					if (bVar2) {
						if (context.GameObject != null) {
							ppMVar8 = &MethodInfo_UnityEngine_GameObject_GetComponentInParent_AottgScoreboardPopup;
	label_05e67f35: ;
							pIVar9 = context.GameObject.GetComponentInParent<object>();
							if (pIVar9 == null) {
								return;
							}
							UNRECOVERED_JUMPTABLE_00 = pIVar9.klass.vtable[0x16].methodPtr;
							(*UNRECOVERED_JUMPTABLE_00)(pIVar9,pIVar9.klass.vtable[0x16].method,UNRECOVERED_JUMPTABLE_00);
							return;
						}
						goto label_05e68236;
					}
				}
				else if (uVar3 == 0x2a2062d8) {
					bVar2 = (id == "ingame.moderation.player-prop.save");
					if (bVar2) {
						if (context.GameObject != null) {
							__this_04 = context.GameObject.GetComponentInParent<PlayerPropEditPopup>() ;
							if (__this_04 == null) {
								return;
							}
							__this_04.Save();
							return;
						}
						goto label_05e68236;
					}
				}
				else if ((uVar3 == 0x2d9d1b36) &&(bVar2 = (id == "ingame.moderation.reason.confirm"))) {
					if (context.GameObject != null) {
						__this_00 = context.GameObject.GetComponentInParent<ModerationReasonPopup>() ;
						if (__this_00 == null) {
							return;
						}
						__this_00.Confirm();
						return;
					}
					goto label_05e68236;
				}
			}
			else if (uVar3 < 0x43ce9627) {
				if (uVar3 == 0x3d005a5f) {
					ppSVar5 = &"ingame.moderation.batch.ip-ban";
	label_05e67fde: ;
					bVar2 = (id == *ppSVar5);
					if (bVar2) {
						if (context.GameObject != null) {
							__this_05 = context.GameObject.GetComponentInParent<ModerationBatchBanPopup>();
							if (__this_05 == null) {
								return;
							}
							__this_05.Submit(id);
							return;
						}
						goto label_05e68236;
					}
				}
				else if (uVar3 == 0x41caa9e1) {
					bVar2 = (id == "ingame.wheel.select");
					if (bVar2) {
						bVar2 = Int32.TryParse(a, ref local_38);
						if (!bVar2) {
							return;
						}
						if (context.GameObject != null) {
							__this_02 = context.GameObject.GetComponentInParent<WheelPopup>();
							if (__this_02 == null) {
								return;
							}
							__this_02.OnButtonClick(local_38);
							return;
						}
						goto label_05e68236;
					}
				}
				else if ((uVar3 == 0x43ce9626) &&(bVar2 = (id == "ingame.character.choice"))) {
					if (context.GameObject != null) {
						pUVar6 = context.GameObject.GetComponentInParent<CharacterCategoryPanel>();
						if (pUVar6 == null) {
							return;
						}
						if (context.Node != null) {
							pUVar6.SelectChoice(((context.Node).fields).id, a);
							return;
						}
					}
					goto label_05e68236;
				}
			}
			else {
				if (uVar3 == 0x48836c5b) {
					ppSVar5 = &"ingame.moderation.batch.session-unban";
					goto label_05e67fde;
				}
				if (uVar3 == 0x4f3460bb) {
					bVar2 = (id == "ingame.character.setting");
					if (bVar2) {
						if (context.GameObject != null) {
							pUVar6 = context.GameObject.GetComponentInParent<CharacterCategoryPanel>() ;
							if (pUVar6 == null) {
								return;
							}
							pUVar6.OpenSetting(a);
							return;
						}
						goto label_05e68236;
					}
				}
				else if ((uVar3 == 0x5ad6db53) &&(bVar2 = (id == "ingame.character.picker.select"))) {
					bVar2 = Int32.TryParse(a, ref local_34);
					if (!bVar2) {
						return;
					}
					if (context.GameObject != null) {
						__this_01 = context.GameObject.GetComponentInParent<AottgCharacterPickerPopup>();
						if (__this_01 == null) {
							return;
						}
						__this_01.Select(local_34);
						return;
					}
					goto label_05e68236;
				}
			}
		}
		else if (uVar3 < 0x7abb5d9d) {
			if (0x757ec71c < uVar3) {
				if (uVar3 == 0x78ae9642) {
					ppSVar5 = &"ingame.moderation.batch.session-ban";
				}
				else {
					if (uVar3 != 0x79f112da) {
						if ((uVar3 == 0x7abb5d9c) &&(bVar2 = (id == "ingame.character.tab"))) {
							if (context.GameObject != null) {
								pUVar7 = context.GameObject.GetComponentInParent<CharacterPopup>();
								if (pUVar7 == null) {
									return;
								}
								pUVar7.SelectCategory(a);
								return;
							}
							goto label_05e68236;
						}
						goto label_05e68121;
					}
					ppSVar5 = &"ingame.moderation.batch.ip-unban";
				}
				goto label_05e67fde;
			}
			if (uVar3 == 0x5eb41263) {
				bVar2 = (id == "ingame.loading.quit");
				if (bVar2) {
					InGameManager.LeaveRoom();
					return;
				}
			}
			else if ((uVar3 == 0x757ec71c) &&(bVar2 = (id == "ingame.player.mute.confirm"))) {
				if (context.GameObject != null) {
					__this = context.GameObject.GetComponentInParent<ScoreboardMutePopup>();
					if (__this == null) {
						return;
					}
					__this.Confirm();
					return;
				}
				goto label_05e68236;
			}
		}
		else if (uVar3 < 0xa5ef34fe) {
			if (uVar3 == 0x9083bbf9) {
				bVar2 = (id == "ingame.map.zoom");
				if (bVar2) {
					if (context.GameObject != null) {
						__this_03 = context.GameObject.GetComponentInParent<MapPopup>();
						if (__this_03 == null) {
							return;
						}
						bVar2 = (a == "in");
						if (bVar2) {
							ppSVar5 = &"Plus";
						}
						else {
							ppSVar5 = &"Minus";
						}
						__this_03.OnBottomBarButtonClick(*ppSVar5);
						return;
					}
					goto label_05e68236;
				}
			}
			else if (uVar3 == 0xa38a235f) {
				bVar2 = (id == "ingame.character.confirm");
				if (bVar2) {
					if (context.GameObject != null) {
						pUVar7 = context.GameObject.GetComponentInParent<CharacterPopup>();
						if (pUVar7 == null) {
							return;
						}
						vtableDispatch = (pUVar7.klass.vtable)._64_OnBottomBarButtonClick.methodPtr;
						pMVar10 = (pUVar7.klass.vtable)._64_OnBottomBarButtonClick.method;
						goto label_05e67ef2;
					}
					goto label_05e68236;
				}
			}
			else if ((uVar3 == 0xa5ef34fd) &&(bVar2 = (id == "ingame.scoreboard.tab"))) {
				if (context.GameObject != null) {
					pUVar7 = (CharacterPopup)context.GameObject.GetComponentInParent<ScoreboardPopup>();
					if (pUVar7 == null) {
						return;
					}
					vtableDispatch = (pUVar7.klass.vtable)._28_SetCategoryPanel.methodPtr;
					pMVar10 = (pUVar7.klass.vtable)._28_SetCategoryPanel.method;
	label_05e67ef2: ;
					(*vtableDispatch)(pUVar7,a,pMVar10);
					return;
				}
				goto label_05e68236;
			}
		}
		else if (uVar3 == 0xe16912f1) {
			bVar2 = (id == "ingame.map.back");
			if (bVar2) {
				if (__this_08 == null) {
					return;
				}
				__this_08.SetMapMenu(false, true);
				return;
			}
		}
		else if (uVar3 == 0xf6d30cff) {
			bVar2 = (id == "ingame.player.kick.confirm");
			if (bVar2) {
				if (context.GameObject != null) {
					__this_06 = context.GameObject.GetComponentInParent<ScoreboardKickPopup>();
					if (__this_06 == null) {
						return;
					}
					__this_06.Confirm();
					return;
				}
				goto label_05e68236;
			}
		}
		else if ((uVar3 == 0xfdae281d) &&(bVar2 = (id == "ingame.scoreboard.back"))) {
			if (__this_08 == null) {
				return;
			}
			__this_08.SetScoreboardMenu(false, true);
			return;
		}
	label_05e68121: ;
		if (context.GameObject == null) {
	label_05e68236: ;
			throw new NullReferenceException();
		}
		__this_07 = context.GameObject.GetComponentInParent<ScoreboardScorePanel>();
		bVar2 = ((Object)__this_07 == null);
		if ((!bVar2) && (bVar2 = Int32.TryParse(a, ref local_3c))) {
			bVar2 = (id == "ingame.player.profile");
			if (bVar2) {
				if (__this_07 == null) goto label_05e68236;
				__this_07.OnClickProfile(local_3c);
			}
			else {
				bVar2 = (id == "ingame.player.mute");
				if (bVar2) {
					if (__this_07 == null) goto label_05e68236;
					__this_07.OnClickMute(local_3c);
				}
				else {
					bVar2 = (id == "ingame.player.kick");
					if (bVar2) {
						if (__this_07 == null) goto label_05e68236;
						__this_07.OnClickKick(local_3c);
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x6000A27")]
	[Address(RVA = "0x5D68420", Offset = "0x5D67420", VA = "0x5D68420")]
	private void RegisterMobileActions()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$RegisterMobileActions): 1 lines keep C-only constructs
		Action<GisketchActionContext> __this_00;

		__this_00 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_HandleMobileAction);
		this.RegisterAction("mobile.layout.open", __this_00);
		return;
	}

	[Token(Token = "0x6000A28")]
	[Address(RVA = "0x5D68240", Offset = "0x5D67240", VA = "0x5D68240")]
	internal static void HandleMobileAction(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$HandleMobileAction): clean
		uint uVar1;
		int role;
		bool bVar2;
		GisketchUIRoot x;
		GisketchUIRoot x_00;
		GameObject restoreObject;
		String value;
		int iStack_2c;

		iStack_2c = 0;
		if (context.Node == null) {
			value = null;
			uVar1 = (g_data_07556760._2).cctor_finished_or_no_cctor;
		}
		else {
			value = ((context.Node).fields).value;
			uVar1 = (g_data_07556760._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar2 = Enum.TryParse<MobileInputLayoutRole>(value, ref iStack_2c);
		if (!bVar2) {
			return;
		}
		x = null;
		bVar2 = ((Object)context.GameObject != null);
		if (bVar2) {
			if (context.GameObject == null) goto label_05e683fe;
			x = context.GameObject.GetComponentInParent<GisketchUIRoot>();
		}
		x_00 = null;
		bVar2 = ((Object)context.GameObject != null);
		if (bVar2) {
			if (context.GameObject == null) goto label_05e683fe;
			x_00 = (GisketchUIRoot)context.GameObject.GetComponentInParent<BasePopup>();
		}
		role = iStack_2c;
		bVar2 = ((Object)x != null);
		if (!bVar2) {
			restoreObject = null;
			bVar2 = ((Object)x_00 != null);
			x = x_00;
			if (!bVar2) goto label_05e68403;
		}
		if (x == null) {
	label_05e683fe: ;
			throw new NullReferenceException();
		}
		restoreObject = x.gameObject;
	label_05e68403: ;
		MobileLayoutEditorOverlay.Open(role, restoreObject);
		return;
	}

	[Token(Token = "0x6000A29")]
	[Address(RVA = "0x5D684B0", Offset = "0x5D674B0", VA = "0x5D684B0")]
	private void RegisterMultiplayerActions()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$RegisterMultiplayerActions): 9 lines keep C-only constructs
		int iVar1;
		uint uVar2;
		object pIVar3;
		AottgServerRegion[] pGVar4;
		Action<GisketchActionContext> pSVar5;
		ulong uVar6;
		AottgGameUiActions.c__DisplayClass133_0 __this_00;
		String pSVar7;
		Gisketch_Aottg2UI_Game_AottgGameUiActions___c_StaticFields pGVar8;
		int piVar9;
		ulong uVar10;

		pSVar7 = "multiplayer.quick-play";
		pGVar8 = typeof(AottgGameUiActions.c).static_fields;
		pSVar5 = pGVar8.__9__133_0;
		if (pSVar5 == null) {
			if ((typeof(AottgGameUiActions.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar8 = typeof(AottgGameUiActions.c).static_fields;
			}
			pIVar3 = (object)pGVar8.__9;
			pSVar5 = new Action<GisketchActionContext>(pIVar3, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c_RegisterMultiplayerActions_b__133_0);
			pGVar8 = typeof(AottgGameUiActions.c).static_fields;
			pGVar8.__9__133_0 = pSVar5;
		}
		if (this != null) {
			this.RegisterAction(pSVar7, pSVar5);
			pGVar4 = AottgServerRegion.All;
			if (pGVar4 != null) {
				if (0 < (int)pGVar4.Length) {
					uVar6 = pGVar4.Length & 0xffffffff;
					piVar9 = &pGVar4[0].Region;
					uVar10 = 0;
					do {
						if (uVar6 <= uVar10) {
							throw new IndexOutOfRangeException();
						}
						pSVar7 = ((AottgServerRegion)(piVar9 + -4)).Id;
						iVar1 = *piVar9;
						__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameUiActions.c__DisplayClass133_0));
						__this_00 = new Object();
						if (__this_00 == null) goto label_05e6883f;
						__this_00.region = iVar1;
						pSVar7 = AottgUiActionIds.Multiplayer.Region(pSVar7);
						pSVar5 = new Action<GisketchActionContext>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c__DisplayClass133_0_RegisterMultiplayerActions_b__4);
						this.RegisterAction(pSVar7, pSVar5) ;
						uVar10 = uVar10 + 1;
						uVar2 = (uint)pGVar4.Length;
						uVar6 = (ulong)uVar2;
						piVar9 = piVar9 + 0xe;
					} while ((long)uVar10 < (long)(int)uVar2);
				}
				pSVar5 = new Action<GisketchActionContext>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterMultiplayerActions_b__133_1);
				this.RegisterAction("multiplayer.server-select.back", pSVar5);
				pSVar5 = new Action<GisketchActionContext>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterMultiplayerActions_b__133_2);
				this.RegisterAction("multiplayer.room-list.back", pSVar5);
				if ((typeof(AottgGameUiActions.c)._2).cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(AottgGameUiActions.c)) ;
				}
				pSVar7 = "multiplayer.room-list.create";
				pGVar8 = typeof(AottgGameUiActions.c).static_fields;
				pSVar5 = pGVar8.__9__133_3;
				if (pSVar5 == null) {
					if ((typeof(AottgGameUiActions.c)._2).cctor_finished_or_no_cctor == 0) {
						pGVar8 = typeof(AottgGameUiActions.c).static_fields;
					}
					pIVar3 = (object)pGVar8.__9;
					pSVar5 = new Action<GisketchActionContext>(pIVar3, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c_RegisterMultiplayerActions_b__133_3);
					pGVar8 = typeof(AottgGameUiActions.c).static_fields;
					pGVar8.__9__133_3 = pSVar5;
				}
				this.RegisterAction(pSVar7, pSVar5);
				return;
			}
		}
	label_05e6883f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000A2A")]
	[Address(RVA = "0x5D68860", Offset = "0x5D67860", VA = "0x5D68860")]
	private static void ConnectRegion(MultiplayerRegion region)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ConnectRegion): clean
		MultiplayerSettings __this;

		AottgQuickPlay.Cancel();
		__this = SettingsManager.MultiplayerSettings;
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.ConnectServer(region);
		return;
	}

	[Token(Token = "0x6000A2B")]
	[Address(RVA = "0x5D688E0", Offset = "0x5D678E0", VA = "0x5D688E0")]
	private void LeaveMultiplayer(string screenId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$LeaveMultiplayer): clean
		MultiplayerSettings __this_00;
		GisketchScreenRouter __this_01;
		GisketchUIRoot pGVar1;

		AottgQuickPlay.Cancel();
		__this_00 = SettingsManager.MultiplayerSettings;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Disconnect();
		pGVar1 = this.Root;
		if ((pGVar1 == null) ||(__this_01 = pGVar1._Screens_k__BackingField, __this_01 == null)) {
			return;
		}
		__this_01.ShowScreen(screenId);
		return;
	}

	[Token(Token = "0x6000A2C")]
	[Address(RVA = "0x5D645A0", Offset = "0x5D635A0", VA = "0x5D645A0")]
	private static void WithMainMenu(Action<MainMenu> action)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$WithMainMenu): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		BaseMenu x;
		bool bVar3;

		if (Il2CppMethodInitialized_07548709 == false) {
			Il2CppMethodInitialized_07548709 = true;
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			x = UIManager.CurrentMenu;
		}
		else {
			x = *(BaseMenu*)((long)(typeof(UIManager)).static_fields + 0x40);
		}
		if (x != null) {
			bVar1 = ((typeof(MainMenu))._2).typeHierarchyDepth;
			if ((bVar1 <= (x.klass._2).typeHierarchyDepth) &&((x.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(MainMenu))) {
				if (((typeof(Object))._2).cctor_finished_or_no_cctor == 0) {
				}
				bVar3 = ((Object)x != null);
				if (bVar3) {
					if (action == null) {
						throw new NullReferenceException();
					}
					(*(code)action.invoke_impl)(action.method_code,x,action.method);
					return;
				}
			}
		}
		return;
	}

	[Token(Token = "0x6000A2D")]
	[Address(RVA = "0x5D68990", Offset = "0x5D67990", VA = "0x5D68990")]
	private void AddNetworkListeners()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$AddNetworkListeners): 2 lines keep C-only constructs
		Action<string> __this_00;
		Action<short, bool> __this_01;

		__this_00 = new Action<string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_ShowNetworkErrorToast);
		AottgNetworkNotifications.add_OnNetworkError(__this_00);
		__this_01 = new Action<short, bool>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_ShowRoomEntryFailedToast);
		AottgNetworkNotifications.add_OnRoomEntryFailed(__this_01);
		return;
	}

	[Token(Token = "0x6000A2E")]
	[Address(RVA = "0x5D68A50", Offset = "0x5D67A50", VA = "0x5D68A50")]
	private void RemoveNetworkListeners()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$RemoveNetworkListeners): 2 lines keep C-only constructs
		Action<string> __this_00;
		Action<short, bool> __this_01;

		__this_00 = new Action<string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_ShowNetworkErrorToast);
		AottgNetworkNotifications.remove_OnNetworkError(__this_00);
		__this_01 = new Action<short, bool>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_ShowRoomEntryFailedToast);
		AottgNetworkNotifications.remove_OnRoomEntryFailed(__this_01);
		return;
	}

	[Token(Token = "0x6000A2F")]
	[Address(RVA = "0x5D649B0", Offset = "0x5D639B0", VA = "0x5D649B0")]
	private void ShowNetworkErrorToast(string error)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ShowNetworkErrorToast): clean
		GisketchUIRoot __this_00;
		String title;
		String content;
		AottgToastDefinition __this_01;

		__this_00 = this.Root;
		if (__this_00 == null) {
			return;
		}
		title = Aottg2GisketchLocale.Text("Network.ErrorTitle");
		content = Aottg2GisketchLocale.Text("Network.CheckConnection") ;
		__this_01 = new AottgToastDefinition(0, "exclamation", title, content, "network.error");
		__this_00.ShowToast(__this_01);
		return;
	}

	[Token(Token = "0x6000A30")]
	[Address(RVA = "0x5D68B10", Offset = "0x5D67B10", VA = "0x5D68B10")]
	private void ShowRoomEntryFailedToast(short returnCode, bool creating)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ShowRoomEntryFailedToast): 3 lines keep C-only constructs
		uint uVar1;
		String icon;
		bool bVar2;
		GisketchUIRoot __this_00;
		String pSVar3;
		String content;
		AottgToastDefinition __this_01;
		String* ppSVar4;

		if (Il2CppMethodInitialized_0754870d == false) {
			Il2CppMethodInitialized_0754870d = true;
			uVar1 = (typeof(AottgQuickPlay)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgQuickPlay)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			bVar2 = AottgQuickPlay.IsRunning;
			if (bVar2) {
				return;
			}
		}
		else {
			bVar2 = AottgQuickPlay.IsRunning;
			if (bVar2) {
				return;
			}
		}
		__this_00 = this.Root;
		icon = "exclamation";
		if (__this_00 == null) {
			return;
		}
		if (creating) {
			ppSVar4 = &"Network.CreateRoomFailedTitle";
		}
		else {
			ppSVar4 = &"Network.JoinRoomFailedTitle";
		}
		pSVar3 = *ppSVar4;
		pSVar3 = Aottg2GisketchLocale.Text(pSVar3);
		ppSVar4 = &"Network.RoomUnavailable";
		if ((returnCode != 0x7ff6) && (returnCode != 0x7ffc)) {
			if (returnCode == 0x7ffd) {
				ppSVar4 = &"Network.RoomFull";
			}
			else {
				ppSVar4 = &"Network.CheckConnection";
			}
		}
		content = Aottg2GisketchLocale.Text(*ppSVar4);
		__this_01 = new AottgToastDefinition(0, icon, pSVar3, content, "network.error");
		__this_00.ShowToast(__this_01);
		return;
	}

	[Token(Token = "0x6000A31")]
	[Address(RVA = "0x5D68D10", Offset = "0x5D67D10", VA = "0x5D68D10")]
	private static string RoomEntryFailedMessageKey(short returnCode)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$RoomEntryFailedMessageKey): 1 lines keep C-only constructs
		String* ppSVar1;

		ppSVar1 = &"Network.RoomUnavailable";
		if ((returnCode != 0x7ff6) && (returnCode != 0x7ffc)) {
			if (returnCode != 0x7ffd) {
				return "Network.CheckConnection";
			}
			ppSVar1 = &"Network.RoomFull";
		}
		return *ppSVar1;
	}

	[Token(Token = "0x6000A32")]
	[Address(RVA = "0x5D68D90", Offset = "0x5D67D90", VA = "0x5D68D90")]
	private void RegisterPauseActions()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$RegisterPauseActions): 4 lines keep C-only constructs
		object pIVar1;
		String pSVar2;
		Action<GisketchActionContext> pSVar3;
		Gisketch_Aottg2UI_Game_AottgGameUiActions___c_StaticFields pGVar4;

		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterPauseActions_b__143_0);
		this.RegisterAction("pause.settings", pSVar3);
		pSVar2 = "pause.game";
		pGVar4 = typeof(AottgGameUiActions.c).static_fields;
		pSVar3 = pGVar4.__9__143_1;
		if (pSVar3 == null) {
			if ((typeof(AottgGameUiActions.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(AottgGameUiActions.c).static_fields;
			}
			pIVar1 = (object)pGVar4.__9;
			pSVar3 = new Action<GisketchActionContext>(pIVar1, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c_RegisterPauseActions_b__143_1);
			pGVar4 = typeof(AottgGameUiActions.c).static_fields;
			pGVar4.__9__143_1 = pSVar3;
		}
		if (this == null) {
			throw new NullReferenceException();
		}
		this.RegisterAction(pSVar2, pSVar3);
		pSVar2 = "pause.back";
		pGVar4 = typeof(AottgGameUiActions.c).static_fields;
		pSVar3 = pGVar4.__9__143_2;
		if (pSVar3 == null) {
			if ((typeof(AottgGameUiActions.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(AottgGameUiActions.c).static_fields;
			}
			pIVar1 = (object)pGVar4.__9;
			pSVar3 = new Action<GisketchActionContext>(pIVar1, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c_RegisterPauseActions_b__143_2);
			pGVar4 = typeof(AottgGameUiActions.c).static_fields;
			pGVar4.__9__143_2 = pSVar3;
		}
		this.RegisterAction(pSVar2, pSVar3);
		pSVar2 = "pause.quit";
		pGVar4 = typeof(AottgGameUiActions.c).static_fields;
		pSVar3 = pGVar4.__9__143_3;
		if (pSVar3 == null) {
			if ((typeof(AottgGameUiActions.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(AottgGameUiActions.c).static_fields;
			}
			pIVar1 = (object)pGVar4.__9;
			pSVar3 = new Action<GisketchActionContext>(pIVar1, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c_RegisterPauseActions_b__143_3);
			pGVar4 = typeof(AottgGameUiActions.c).static_fields;
			pGVar4.__9__143_3 = pSVar3;
		}
		this.RegisterAction(pSVar2, pSVar3);
		return;
	}

	[Token(Token = "0x6000A33")]
	[Address(RVA = "0x5D69060", Offset = "0x5D68060", VA = "0x5D69060")]
	private void RegisterEmoteActions()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$RegisterEmoteActions): 4 lines keep C-only constructs
		Action<GisketchActionContext> pSVar1;
		Action<T1, T2> __this_00;

		pSVar1 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_OpenEmoteText);
		this.RegisterAction("profile.emote.text.open", pSVar1);
		pSVar1 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_OpenEmoteSticker);
		this.RegisterAction("profile.emote.sticker.open", pSVar1);
		pSVar1 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_SaveEmoteText);
		this.RegisterAction("profile.emote.text.save", pSVar1);
		__this_00 = new Action<GisketchActionContext, string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_SaveEmoteSticker);
		AottgEmoteSlotActions.SaveSticker =(Action<GisketchActionContext, string>)__this_00;
		return;
	}

	[Token(Token = "0x6000A34")]
	[Address(RVA = "0x5D69200", Offset = "0x5D68200", VA = "0x5D69200")]
	private void OpenEmoteText(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$OpenEmoteText): 5 lines keep C-only constructs
		GisketchOverlayManager __this_00;
		bool bVar1;
		uint in_EAX;
		GisketchUIRoot pGVar2;
		int iVar3;
		int iVar4;
		ulong uStack_18;

		uStack_18._0_4_ = in_EAX;
		uStack_18 = (ulong)(uint)uStack_18;
		if (context.Node == null) {
			iVar4 = 0;
		}
		else {
			bVar1 = Int32.TryParse(((context.Node).fields).value, (int)((long)&uStack_18 + 4));
			iVar4 = 0;
			if (bVar1) {
				iVar3 = 7;
				if (uStack_18._4_4_ < 7) {
					iVar3 = uStack_18._4_4_;
				}
				iVar4 = 0;
				if (0 < iVar3) {
					iVar4 = iVar3;
				}
			}
		}
		AottgEmoteEditSelection.TextIndex = iVar4;
		pGVar2 = this.Root;
		if ((pGVar2 != null) &&(__this_00 = pGVar2._Overlays_k__BackingField, __this_00 != null)) {
			__this_00.ShowDialog("profile-change-emote-text", true);
		}
		return;
	}

	[Token(Token = "0x6000A35")]
	[Address(RVA = "0x5D69330", Offset = "0x5D68330", VA = "0x5D69330")]
	private void OpenEmoteSticker(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$OpenEmoteSticker): 5 lines keep C-only constructs
		GisketchOverlayManager __this_00;
		bool bVar1;
		uint in_EAX;
		GisketchUIRoot pGVar2;
		int iVar3;
		int iVar4;
		ulong uStack_18;

		uStack_18._0_4_ = in_EAX;
		uStack_18 = (ulong)(uint)uStack_18;
		if (context.Node == null) {
			iVar4 = 0;
		}
		else {
			bVar1 = Int32.TryParse(((context.Node).fields).value, (int)((long)&uStack_18 + 4));
			iVar4 = 0;
			if (bVar1) {
				iVar3 = 7;
				if (uStack_18._4_4_ < 7) {
					iVar3 = uStack_18._4_4_;
				}
				iVar4 = 0;
				if (0 < iVar3) {
					iVar4 = iVar3;
				}
			}
		}
		AottgEmoteEditSelection.StickerIndex = iVar4;
		pGVar2 = this.Root;
		if ((pGVar2 != null) &&(__this_00 = pGVar2._Overlays_k__BackingField, __this_00 != null)) {
			__this_00.ShowDialog("profile-change-emote-sticker", true);
		}
		return;
	}

	[Token(Token = "0x6000A36")]
	[Address(RVA = "0x5D69400", Offset = "0x5D68400", VA = "0x5D69400")]
	private void SaveEmoteText(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$SaveEmoteText): 5 lines keep C-only constructs
		byte bVar1;
		uint index;
		EmoteSettings pSVar2;
		ListSetting<StringSetting> __this_00;
		String id;
		bool bVar3;
		TypedSetting<T> __this_01;
		TMP_InputField x;
		MethodInfo pMVar4;
		String* ppSVar5;

		pSVar2 = SettingsManager.EmoteSettings;
		if (pSVar2 == null) {
			return;
		}
		__this_00 = pSVar2.TextEmotes;
		if (__this_00 != null) {
			index = AottgEmoteEditSelection.TextIndex;
			pMVar4 = (MethodInfo)(ulong)index;
			__this_01 = (TypedSetting<T>)__this_00.GetItemAt(index);
			id = "profile-change-emote-text-input";
			x = AottgGameUiActions.Input(context, id);
			bVar3 = ((Object)x != null);
			if (bVar3) {
				if (x == null) goto label_05e695c4;
				ppSVar5 = &x.m_Text;
			}
			else {
				ppSVar5 = *(String**)(g_data_07556758 + 0xb8);
			}
			if (*ppSVar5 != null) {
				pMVar4 = (MethodInfo)(*ppSVar5).Trim();
				if (__this_01 != null) {
					bVar1 = (typeof(StringSetting)._2).typeHierarchyDepth;
					if (((__this_01.klass._2).typeHierarchyDepth < bVar1) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(StringSetting))) {
						throw new InvalidCastException();
					}
					__this_01.Value = (object)pMVar4;
					this.SaveEmoteSettings();
					return;
				}
			}
		}
	label_05e695c4: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000A37")]
	[Address(RVA = "0x5D696C0", Offset = "0x5D686C0", VA = "0x5D696C0")]
	private void SaveEmoteSticker(GisketchActionContext context, string sticker)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$SaveEmoteSticker): 1 lines keep C-only constructs
		byte bVar1;
		EmoteSettings pSVar2;
		ListSetting<StringSetting> __this_00;
		TypedSetting<T> __this_01;

		pSVar2 = SettingsManager.EmoteSettings;
		if (pSVar2 == null) {
			return;
		}
		__this_00 = pSVar2.EmojiEmotes;
		if (__this_00 != null) {
			__this_01 = (TypedSetting<T>)__this_00.GetItemAt(AottgEmoteEditSelection. StickerIndex);
			if (__this_01 != null) {
				bVar1 = (typeof(StringSetting)._2).typeHierarchyDepth;
				if (((__this_01.klass._2).typeHierarchyDepth < bVar1) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(StringSetting))) {
					throw new InvalidCastException();
				}
				__this_01.Value = (object)sticker;
				this.SaveEmoteSettings();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000A38")]
	[Address(RVA = "0x5D695E0", Offset = "0x5D685E0", VA = "0x5D695E0")]
	private void SaveEmoteSettings()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$SaveEmoteSettings): clean
		EmoteSettings pSVar1;
		String content;

		pSVar1 = SettingsManager.EmoteSettings;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		pSVar1.Save();
		this.RefreshEmoteState();
		this.CloseTopOverlay();
		content = Aottg2GisketchLocale.Text("MainMenu.Profile.EmoteSaved") ;
		this.ProfileToast(4, "checkmark", content, "profile.save");
		return;
	}

	[Token(Token = "0x6000A39")]
	[Address(RVA = "0x5D692D0", Offset = "0x5D682D0", VA = "0x5D692D0")]
	private static int SlotIndex(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$SlotIndex): clean
		bool bVar1;
		int iVar2;
		int iVar3;
		int local_c;

		local_c = 0;
		if (context.Node == null) {
			return 0;
		}
		bVar1 = Int32.TryParse(((context.Node).fields).value, ref local_c);
		if (bVar1) {
			iVar2 = 7;
			if (local_c < 7) {
				iVar2 = local_c;
			}
			if (0 < iVar2) {
			}
		}
		return iVar3;
	}

	[Token(Token = "0x6000A3A")]
	[Address(RVA = "0x5D69B70", Offset = "0x5D68B70", VA = "0x5D69B70")]
	private void StartProfileActions()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$StartProfileActions): 3 lines keep C-only constructs
		bool bVar1;
		String pSVar2;
		MethodInfo method_00;
		bool[] local_59 = new bool[9];
		GisketchUiPerfLog.Scope local_50;
		GisketchUiPerfLog.Scope local_48;

		local_48._startMs = 0;
		local_48._enabled = false;
		local_48._hotLoop = false;
		local_48._26_6_ = 0;
		local_48._area = null;
		local_48._detail = null;
		local_59[0] = AccountManager.IsLoggedIn;
		pSVar2 = local_59.ToString();
		pSVar2 = String.Concat("loggedIn=", pSVar2);
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		method_00 = (MethodInfo *)"Profile.StartProfileActions";
		local_48 = GisketchUiPerfLog.Time("Profile.StartProfileActions", pSVar2);
		local_59[1] = false;
		local_59[2] = false;
		local_59[3] = false;
		local_59[4] = false;
		local_59[5] = false;
		local_59[6] = false;
		local_59[7] = false;
		local_59[8] = false;
		local_50 = &local_48;
		bVar1 = AccountManager.IsLoggedIn;
		if (!bVar1) {
			bVar1 = AottgGameUiActions.IsAccountAuthLoading();
			if (!bVar1) {
				AottgCharacterInfoState.ApplyLocalToRuntime();
				InGameManager.SyncLocalProfileToPlayerInfo("profile-start-local");
			}
		}
		this.RefreshProfileState();
		this.RefreshEmoteState();
		bVar1 = AccountManager.IsLoggedIn;
		if (bVar1) {
			this.RefreshRemoteProfileAndCharacter(false, false, null, true);
		}
		local_48.Dispose();
		return;
	}

	[Token(Token = "0x6000A3B")]
	[Address(RVA = "0x5D69D90", Offset = "0x5D68D90", VA = "0x5D69D90")]
	private void OpenProfileScreen()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$OpenProfileScreen): 9 lines keep C-only constructs
		GisketchScreenRouter __this_00;
		bool bVar1;
		String pSVar2;
		GisketchUIRoot pGVar3;
		MethodInfo method_00;
		bool local_69;
		GisketchUiPerfLog.Scope local_68;
		GisketchUiPerfLog.Scope local_48;

		local_68._startMs._0_4_ = 0;
		local_68._startMs._4_2_ = 0;
		local_68._startMs._6_2_ = 0;
		local_68._enabled = false;
		local_68._hotLoop = false;
		local_68._26_6_ = 0;
		local_68._area = null;
		local_68._detail = null;
		local_69 = AccountManager.IsLoggedIn;
		pSVar2 = local_69.ToString();
		pSVar2 = String.Concat("loggedIn=", pSVar2);
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		local_48 = GisketchUiPerfLog.Time("Profile.OpenProfileScreen", pSVar2);
		local_68._startMs = local_48._startMs;
		local_68._enabled = local_48._enabled;
		local_68._hotLoop = local_48._hotLoop;
		local_68._26_6_ = local_48._26_6_;
		local_68._area = local_48._area;
		local_68._detail = local_48._detail;
		local_48._area = null;
		local_48._detail = (String)&local_68;
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		GisketchUiPerfLog.Mark("Profile.OpenProfileScreen", "ShowScreen start");
		pGVar3 = this.Root;
		if ((pGVar3 != null) &&(__this_00 = pGVar3._Screens_k__BackingField, __this_00 != null)) {
			__this_00.ShowScreen("profile");
		}
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		method_00 = (MethodInfo *)"ShowScreen returned";
		GisketchUiPerfLog.Mark("Profile.OpenProfileScreen", "ShowScreen returned");
		bVar1 = AccountManager.IsLoggedIn;
		if (bVar1) {
			this.RefreshRemoteProfileAndCharacter(true, false, null, true);
		}
		else {
			bVar1 = AottgGameUiActions.IsAccountAuthLoading();
			if (!bVar1) {
				GisketchUiPerfLog.Mark("Profile.OpenProfileScreen", "local profile state refresh");
				AottgCharacterInfoState.ApplyLocalToRuntime();
				InGameManager.SyncLocalProfileToPlayerInfo("profile-open-local");
			}
			this.RefreshProfileState();
		}
		local_68.Dispose();
		return;
	}

	[Token(Token = "0x6000A3C")]
	[Address(RVA = "0x5D6A080", Offset = "0x5D69080", VA = "0x5D6A080")]
	private void OnAccountLoggedIn()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$OnAccountLoggedIn): clean
		GisketchScreenRouter pGVar1;
		bool bVar2;
		bool rebuildProfileScreen;
		GisketchUIRoot pGVar3;

		this.RefreshAccountState();
		pGVar3 = this.Root;
		rebuildProfileScreen = false;
		bVar2 = ((Object)pGVar3 != null);
		if (bVar2) {
			pGVar3 = this.Root;
			if (pGVar3 == null) goto label_05e6a160;
			if (pGVar3._Screens_k__BackingField == null) {
				rebuildProfileScreen = false;
				if (this == null) goto label_05e6a160;
				goto label_05e6a13f;
			}
			pGVar3 = this.Root;
			if ((pGVar3 == null) ||(pGVar1 = pGVar3._Screens_k__BackingField, pGVar1 == null)) goto label_05e6a160;
			rebuildProfileScreen = (pGVar1._activeId == "profile");
		}
		if (this != null) {
	label_05e6a13f: ;
			this.RefreshRemoteProfileAndCharacter(rebuildProfileScreen, false, null, true);
			return;
		}
	label_05e6a160: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000A3D")]
	[Address(RVA = "0x5D6A170", Offset = "0x5D69170", VA = "0x5D6A170")]
	private void OnAccountLoggedOut()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$OnAccountLoggedOut): clean


		this._profileIdentityLoading = false;
		AottgCharacterInfoState.ApplyLocalToRuntime();
		InGameManager.SyncLocalProfileToPlayerInfo("account-logout-local");
		this.RefreshAccountState();
		this.RebuildProfileScreen();
		return;
	}

	[Token(Token = "0x6000A3E")]
	[Address(RVA = "0x5D5B720", Offset = "0x5D5A720", VA = "0x5D5B720")]
	private void RefreshRemoteProfileAndCharacter(bool rebuildProfileScreen, [Optional][DefaultParameterValue(false)] bool forceRefresh, [Optional] Action<bool, string> onComplete, bool showProfileErrorToast = true)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$RefreshRemoteProfileAndCharacter): 5 lines keep C-only constructs
		Action<bool, string>* targetAddress;
		Action<bool, string> pSVar1;
		code *vtableDispatch;
		bool bVar2;
		AottgGameUiActions.c__DisplayClass156_0 __this_00;
		long iVar3;
		String pSVar4;
		Action<T1, T2> __this_01;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameUiActions.c__DisplayClass156_0));
		__this_00 = new Object();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.__4__this = this;
		__this_00.rebuildProfileScreen = rebuildProfileScreen;
		__this_00.showProfileErrorToast = showProfileErrorToast;
		__this_00.forceRefresh = forceRefresh;
		targetAddress = &__this_00.onComplete;
		__this_00.onComplete = onComplete;
		if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
			bVar2 = AccountManager.IsLoggedIn;
		}
		else {
			bVar2 = AccountManager.IsLoggedIn;
		}
		if (bVar2) {
			bVar2 = AottgGameUiActions.HasCachedRemoteIdentity();
			this._profileIdentityLoading = !bVar2;
			this.RefreshProfileState();
			this.RefreshAccountState();
			iVar3 = GisketchUiPerfLog.NowMs();
			__this_00.startMs = iVar3;
			pSVar4 = (__this_00.rebuildProfileScreen).ToString();
			pSVar4 = String.Concat("begin rebuild=", pSVar4);
			GisketchUiPerfLog.Mark("Profile.RefreshRemoteProfile", pSVar4);
			__this_01 = new Action<bool, string>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c__DisplayClass156_0_RefreshRemoteProfileAndCharacter);
			bVar2 = __this_00.forceRefresh;
			AccountManager.GetProfile((Action<bool, string>)__this_01, bVar2);
			return;
		}
		this._profileIdentityLoading = false;
		this.RefreshProfileState();
		pSVar1 = *targetAddress;
		if (pSVar1 == null) {
			return;
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		(*vtableDispatch)(pSVar1.method_code,0,"not_logged_in",pSVar1.method, vtableDispatch);
		return;
	}

	[Token(Token = "0x6000A3F")]
	[Address(RVA = "0x5D6A430", Offset = "0x5D69430", VA = "0x5D6A430")]
	private void RefreshRemoteCharacterInfo(bool rebuildProfileScreen, [Optional][DefaultParameterValue(false)] bool forceRefresh, [Optional] Action<bool, string> onComplete, bool showProfileErrorToast = true)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$RefreshRemoteCharacterInfo): 5 lines keep C-only constructs
		Action<bool, string>* targetAddress;
		Action<bool, string> pSVar1;
		code *vtableDispatch;
		bool bVar2;
		AottgGameUiActions.c__DisplayClass157_0 __this_00;
		long iVar3;
		String pSVar4;
		Action<T1, T2, T3> __this_01;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameUiActions.c__DisplayClass157_0));
		__this_00 = new Object();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.showProfileErrorToast = showProfileErrorToast;
		__this_00.__4__this = this;
		__this_00.rebuildProfileScreen = rebuildProfileScreen;
		targetAddress = &__this_00.onComplete;
		__this_00.onComplete = onComplete;
		if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
			bVar2 = AccountManager.IsLoggedIn;
		}
		else {
			bVar2 = AccountManager.IsLoggedIn;
		}
		if (bVar2) {
			if (((typeof(GisketchUiPerfLog))._2). cctor_finished_or_no_cctor == 0) {
			}
			iVar3 = GisketchUiPerfLog.NowMs();
			__this_00.startMs = iVar3;
			pSVar4 = (__this_00.rebuildProfileScreen).ToString();
			pSVar4 = String.Concat("begin rebuild=", pSVar4);
			GisketchUiPerfLog.Mark("Profile.RefreshRemoteCharacterInfo", pSVar4);
			__this_01 = new Action<bool, string, JSONNode>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c__DisplayClass157_0_RefreshRemoteCharacterInfo_b__0);
			AccountManager.GetCharacterInfo((Action<bool, string, JSONNode>)__this_01, forceRefresh);
			return;
		}
		this._profileIdentityLoading = false;
		this.RefreshProfileState();
		this.RefreshAccountState();
		pSVar1 = *targetAddress;
		if (pSVar1 == null) {
			return;
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		(*vtableDispatch)(pSVar1.method_code,0,"not_logged_in",pSVar1.method, vtableDispatch);
		return;
	}

	[Token(Token = "0x6000A40")]
	[Address(RVA = "0x5D6A2E0", Offset = "0x5D692E0", VA = "0x5D6A2E0")]
	private static bool HasCachedRemoteIdentity()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$HasCachedRemoteIdentity): clean
		sbyte cVar1;
		uint uVar2;

		if (Il2CppMethodInitialized_0754871c == false) {
			Il2CppMethodInitialized_0754871c = true;
			uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		if (Il2CppMethodInitialized_0754878c == false) {
			Il2CppMethodInitialized_0754878c = true;
			uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(AccountManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			cVar1 = AccountManager._ownProfileCacheHasValue;
		}
		else {
			cVar1 = *(sbyte)((long)(typeof(AccountManager)).static_fields + 0x28 );
		}
		if (cVar1 == false) {
			return false;
		}
		if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0) {
		}
		if (Il2CppMethodInitialized_0754878d == false) {
			Il2CppMethodInitialized_0754878d = true;
			uVar2 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(AccountManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		return AccountManager._ownCharacterInfoCacheHasValue != false;
	}

	[Token(Token = "0x6000A41")]
	[Address(RVA = "0x5D6A1F0", Offset = "0x5D691F0", VA = "0x5D6A1F0")]
	private void RebuildProfileScreen()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$RebuildProfileScreen): clean
		GisketchScreenRouter pGVar1;
		bool bVar2;
		GisketchUIRoot pGVar3;
		MethodInfo method_00;

		pGVar3 = this.Root;
		bVar2 = ((Object)pGVar3 != null);
		if (bVar2) {
			pGVar3 = this.Root;
			if (pGVar3 == null) {
	label_05e6a2c0: ;
				throw new NullReferenceException();
			}
			if (pGVar3._Screens_k__BackingField != null) {
				pGVar3 = this.Root;
				if ((pGVar3 == null) ||(pGVar1 = pGVar3._Screens_k__BackingField, pGVar1 == null)) goto label_05e6a2c0;
				method_00 = (MethodInfo *)"profile";
				bVar2 = (pGVar1._activeId == "profile");
				if (bVar2) {
					this.RefreshProfileState();
					this.RefreshEmoteState();
					return;
				}
			}
		}
		return;
	}

	[Token(Token = "0x6000A42")]
	[Address(RVA = "0x5D6A680", Offset = "0x5D69680", VA = "0x5D6A680")]
	private void RefreshCurrentScreenManifest()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$RefreshCurrentScreenManifest): clean
		GisketchUIState __this_00;

		this.RefreshProfileState();
		this.RefreshEmoteState();
		this.RefreshAccountState();
		__this_00 = this.State;
		if (__this_00 == null) {
			return;
		}
		__this_00.SetBool("profile.save.idle", true);
		return;
	}

	[Token(Token = "0x6000A43")]
	[Address(RVA = "0x5D5CA00", Offset = "0x5D5BA00", VA = "0x5D5CA00")]
	private void RefreshProfileState()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$RefreshProfileState): 12 lines keep C-only constructs
		sbyte cVar1;
		uint uVar2;
		uint uVar3;
		String* ppSVar4;
		String pSVar5;
		bool bVar6;
		bool linked;
		bool linked_00;
		GisketchUIState pGVar7;
		String pSVar8;
		String[] pSVar9;
		JSONNode pSVar10;
		JSONNode pSVar11;
		String pSVar12;
		String value;
		ulong uVar13;
		MethodInfo pMVar14;
		String* ppSVar15;
		bool local_7d;
		int local_7c;
		GisketchUiPerfLog.Scope local_78;
		GisketchUiPerfLog.Scope local_50;

		local_78._startMs._0_4_ = 0;
		local_78._startMs._4_2_ = 0;
		local_78._startMs._6_2_ = 0;
		local_78._enabled = false;
		local_78._hotLoop = false;
		local_78._26_6_ = 0;
		local_78._area = null;
		local_78._detail = null;
		local_7c = 0;
		pGVar7 = this.State;
		local_7d = pGVar7 != null;
		pSVar8 = local_7d.ToString();
		pSVar8 = String.Concat("state=", pSVar8);
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		local_50 = GisketchUiPerfLog.Time("Profile.RefreshProfileState", pSVar8);
		local_78._startMs = local_50._startMs;
		local_78._enabled = local_50._enabled;
		local_78._hotLoop = local_50._hotLoop;
		local_78._26_6_ = local_50._26_6_;
		local_78._area = local_50._area;
		local_78._detail = local_50._detail;
		local_50._area = null;
		local_50._detail = (String)&local_78;
		pGVar7 = this.State;
		if (pGVar7 == null) goto label_05e5d4be;
		pSVar9 = AottgActiveProfile.SocialLinks();
		bVar6 = AottgGameUiActions.IsAccountAuthLoading();
		cVar1 = true;
		if (!bVar6) {
			cVar1 = this._profileIdentityLoading;
		}
		if (pSVar9 == null) {
			throw new NullReferenceException();
		}
		local_7c = (int32_t)pSVar9.Length;
		pSVar8 = local_7c.ToString();
		pSVar8 = String.Concat("socials=", pSVar8);
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		GisketchUiPerfLog.Mark("Profile.RefreshProfileState", pSVar8);
		pGVar7 = this.State;
		if (pGVar7 == null) {
			throw new NullReferenceException();
		}
		pGVar7.SetBool("profile.identity.loading", cVar1 != false);
		pGVar7 = this.State;
		if (pGVar7 == null) {
			throw new NullReferenceException();
		}
		pGVar7.SetBool("profile.identity.ready", cVar1 == false);
		pGVar7 = this.State;
		pSVar8 = AottgActiveProfile.CharacterName();
		if (pGVar7 == null) {
			throw new NullReferenceException();
		}
		pGVar7.Set("profile.characterName", pSVar8);
		pGVar7 = this.State;
		pSVar8 = AottgActiveProfile.AccountName();
		if (pGVar7 == null) {
			throw new NullReferenceException();
		}
		pGVar7.Set("profile.accountName", pSVar8);
		pGVar7 = this.State;
		pSVar8 = AottgActiveProfile.Bio();
		if (pGVar7 == null) {
			throw new NullReferenceException();
		}
		pGVar7.Set("profile.bio", pSVar8);
		pGVar7 = this.State;
		pSVar8 = AottgActiveProfile.AvatarSprite();
		if (pGVar7 == null) {
			throw new NullReferenceException();
		}
		pGVar7.Set("profile.avatarSprite", pSVar8);
		pGVar7 = this.State;
		pSVar8 = AottgActiveProfile.BannerSprite();
		if (pGVar7 == null) {
			throw new NullReferenceException();
		}
		pGVar7.Set("profile.bannerSprite", pSVar8);
		bVar6 = AottgProfileEntitlementCatalog.IsSupporter();
		linked = AccountManager.IsOAuthProviderLinked("discord");
		linked_00 = AccountManager.IsOAuthProviderLinked("google");
		pGVar7 = this.State;
		pSVar8 = AottgGameUiActions.PatreonConnectionStatus(bVar6, cVar1 != false);
		if (pGVar7 == null) {
			throw new NullReferenceException();
		}
		pGVar7.Set("profile.patreon.status", pSVar8);
		pGVar7 = this.State;
		if (pGVar7 == null) goto label_05e5d51c;
		pGVar7.SetBool("profile.patreon.cta.visible", !bVar6 && cVar1 == false);
		pGVar7 = this.State;
		pSVar8 = AottgGameUiActions.ConnectionStatus(linked, cVar1 != false);
		if (pGVar7 == null) {
			throw new NullReferenceException();
		}
		pGVar7.Set("profile.discord.status", pSVar8);
		pGVar7 = this.State;
		if (pGVar7 == null) goto label_05e5d51c;
		pGVar7.SetBool("profile.discord.link.visible", !linked && cVar1 == false);
		pGVar7 = this.State;
		pSVar8 = AottgGameUiActions.ConnectionStatus(linked_00, cVar1 != false);
		if (pGVar7 == null) {
			throw new NullReferenceException();
		}
		pGVar7.Set("profile.google.status", pSVar8);
		pGVar7 = this.State;
		if (pGVar7 == null) goto label_05e5d51c;
		pGVar7.SetBool("profile.google.link.visible", !linked_00 && cVar1 == false);
		pGVar7 = this.State;
		if (pGVar7 == null) {
			throw new NullReferenceException();
		}
		pGVar7.SetBool("profile.socials.empty", (int)pSVar9.Length == 0);
		ppSVar15 = pSVar9.m_Items;
		uVar13 = 0;
		do {
			uVar2 = (uint)pSVar9.Length;
			bVar6 = false;
			if ((long)uVar13 < (long)(int)uVar2) {
				if (uVar2 <= uVar13) {
					throw new IndexOutOfRangeException();
				}
				bVar6 = String.IsNullOrWhiteSpace(*ppSVar15);
				bVar6 = !bVar6;
			}
			pGVar7 = this.State;
			pSVar8 = AottgProfileStateKeys.Social((int32_t)uVar13);
			if (bVar6) {
				ppSVar4 = ppSVar15;
				if ((uint)pSVar9.Length <= uVar13) {
					throw new IndexOutOfRangeException();
				}
			}
			else {
				ppSVar4 = *(String**)(g_data_07556758 + 0xb8);
			}
			if (pGVar7 == null) goto label_05e5d51c;
			pGVar7.Set(pSVar8, *ppSVar4);
			pGVar7 = this.State;
			pSVar8 = AottgProfileStateKeys.SocialVisible((int32_t)uVar13);
			if (pGVar7 == null) {
				throw new NullReferenceException();
			}
			pGVar7.SetBool(pSVar8, bVar6);
			uVar13 = uVar13 + 1;
			ppSVar15 = ppSVar15 + 1;
		} while (uVar13 != 8);
		pSVar10 = AottgCharacterInfoState.Current();
		bVar6 = (pSVar10 != null);
		if (bVar6) {
			if (pSVar10 == null) {
				throw new NullReferenceException();
			}
			pSVar11 = pSVar10.get_Item("guild");
			bVar6 = (pSVar11 != null);
			if (!bVar6) goto label_05e5d1f3;
			pSVar11 = pSVar10.get_Item("guild");
			if (pSVar11 == null) {
				throw new NullReferenceException();
			}
			pSVar8 = pSVar11.get_Value();
			uVar3 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
		}
		else {
	label_05e5d1f3: ;
			pSVar8 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			uVar3 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		bVar6 = (pSVar10 != null);
		if (bVar6) {
			if (pSVar10 == null) {
				throw new NullReferenceException();
			}
			pSVar11 = pSVar10.get_Item("guildPresetId");
			bVar6 = (pSVar11 != null);
			if (!bVar6) goto label_05e5d2d0;
			pSVar11 = pSVar10.get_Item("guildPresetId");
			if (pSVar11 == null) {
				throw new NullReferenceException();
			}
			pSVar12 = pSVar11.get_Value();
			bVar6 = String.IsNullOrEmpty(pSVar12);
			if (bVar6) goto label_05e5d2d0;
			pSVar11 = pSVar10.get_Item("guildPresetId");
			if (pSVar11 == null) {
				throw new NullReferenceException();
			}
			pSVar12 = pSVar11.get_Value();
			pSVar12 = AottgProfileEntitlementCatalog.PresetGuildLabel(pSVar12);
		}
		else {
	label_05e5d2d0: ;
			pSVar12 = Aottg2GisketchLocale.Text("Common.None");
		}
		pGVar7 = this.State;
		bVar6 = (pSVar10 != null);
		pSVar5 = "profile.characterInfoJson";
		if (bVar6) {
			if (pSVar10 == null) {
				throw new NullReferenceException();
			}
			value = pSVar10.ToString();
		}
		else {
			value = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (pGVar7 != null) {
			pGVar7.Set(pSVar5, value);
			pGVar7 = this.State;
			bVar6 = String.IsNullOrEmpty(pSVar8);
			pSVar5 = "profile.characterGuild";
			if (bVar6) {
				pSVar8 = Aottg2GisketchLocale.Text("Common.None");
			}
			if (pGVar7 != null) {
				pGVar7.Set(pSVar5, pSVar8);
				pGVar7 = this.State;
				if (pGVar7 == null) {
					throw new NullReferenceException();
				}
				pGVar7.Set("profile.characterPresetGuild", pSVar12);
				pGVar7 = this.State;
				bVar6 = (pSVar10 != null);
				pSVar8 = "profile.characterBadges";
				if (bVar6) {
					if (pSVar10 == null) {
						throw new NullReferenceException();
					}
					pMVar14 = (MethodInfo *)"badges";
					pSVar10 = pSVar10.get_Item("badges");
				}
				else {
					pSVar10 = null;
				}
				pSVar12 = AottgGameUiActions.BadgeLabels(pSVar10);
				if (pGVar7 == null) {
					throw new NullReferenceException();
				}
				pGVar7.Set(pSVar8, pSVar12);
	label_05e5d4be: ;
				local_78.Dispose();
				return;
			}
		}
	label_05e5d51c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000A44")]
	[Address(RVA = "0x5D6A7D0", Offset = "0x5D697D0", VA = "0x5D6A7D0")]
	private static string ConnectionStatus(bool linked, bool loading)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ConnectionStatus): 2 lines keep C-only constructs
		uint uVar1;
		String pSVar2;
		String* ppSVar3;

		uVar1 = (typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor;
		if (loading) {
			if (uVar1 == 0) {
			}
			pSVar2 = Aottg2GisketchLocale.Text("Common.Loading");
			pSVar2 = String.Concat(pSVar2, "...");
			return pSVar2;
		}
		if (linked) {
			if (uVar1 == 0) {
			}
			ppSVar3 = &"MainMenu.Profile.Linked";
		}
		else {
			if (uVar1 == 0) {
			}
			ppSVar3 = &"MainMenu.Profile.NotConnected";
		}
		pSVar2 = Aottg2GisketchLocale.Text(*ppSVar3);
		return pSVar2;
	}

	[Token(Token = "0x6000A45")]
	[Address(RVA = "0x5D6A6F0", Offset = "0x5D696F0", VA = "0x5D6A6F0")]
	private static string PatreonConnectionStatus(bool supporter, bool loading)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$PatreonConnectionStatus): 2 lines keep C-only constructs
		uint uVar1;
		String pSVar2;
		String* ppSVar3;

		uVar1 = (typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor;
		if (loading) {
			if (uVar1 == 0) {
			}
			pSVar2 = Aottg2GisketchLocale.Text("Common.Loading");
			pSVar2 = String.Concat(pSVar2, "...");
			return pSVar2;
		}
		if (supporter) {
			if (uVar1 == 0) {
			}
			ppSVar3 = &"MainMenu.Profile.SupporterThanks";
		}
		else {
			if (uVar1 == 0) {
			}
			ppSVar3 = &"MainMenu.Profile.NotConnected";
		}
		pSVar2 = Aottg2GisketchLocale.Text(*ppSVar3);
		return pSVar2;
	}

	[Token(Token = "0x6000A46")]
	[Address(RVA = "0x5D697D0", Offset = "0x5D687D0", VA = "0x5D697D0")]
	private void RefreshEmoteState()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$RefreshEmoteState): 2 lines keep C-only constructs
		byte bVar1;
		EmoteSettings pSVar2;
		ListSetting<StringSetting> pSVar3;
		bool bVar4;
		GisketchUIState pGVar5;
		BaseSetting pSVar6;
		String pSVar7;
		String pSVar8;
		String pSVar9;
		int index;

		pGVar5 = this.State;
		if ((pGVar5 != null) &&(SettingsManager.EmoteSettings != null)) {
			index = 0;
			do {
				pSVar2 = SettingsManager.EmoteSettings;
				if ((pSVar2 == null) ||(pSVar3 = pSVar2.TextEmotes, pSVar3 == null)) {
	label_05e69a54: ;
					throw new NullReferenceException();
				}
				pSVar6 = pSVar3.GetItemAt(index);
				if (pSVar6 == null) goto label_05e69a54;
				bVar1 = (typeof(StringSetting)._2).typeHierarchyDepth;
				if (((pSVar6.klass._2).typeHierarchyDepth < bVar1) ||((pSVar6.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(StringSetting))) {
	label_05e69a59: ;
					throw new InvalidCastException();
				}
				pSVar2 = SettingsManager.EmoteSettings;
				if ((pSVar2 == null) ||(pSVar3 = pSVar2.EmojiEmotes, pSVar3 == null)) goto label_05e69a54;
				pSVar8 = (*(ulong)((sbyte)pSVar6 + 0x20));
				pSVar6 = pSVar3.GetItemAt(index);
				if (pSVar6 == null) goto label_05e69a54;
				bVar1 = (typeof(StringSetting)._2).typeHierarchyDepth;
				if (((pSVar6.klass._2).typeHierarchyDepth < bVar1) ||((pSVar6.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(StringSetting))) goto label_05e69a59;
				pSVar9 = (*(ulong)((sbyte)pSVar6 + 0x20));
				pGVar5 = this.State;
				pSVar7 = AottgProfileStateKeys.EmoteText(index);
				if (pGVar5 == null) goto label_05e69a54;
				pGVar5.Set(pSVar7, pSVar8);
				pGVar5 = this.State;
				pSVar8 = AottgProfileStateKeys.EmoteStickerLabel(index);
				pSVar7 = AottgGameUiActions.StickerLabel(pSVar9);
				if (pGVar5 == null) goto label_05e69a54;
				pGVar5.Set(pSVar8, pSVar7);
				pGVar5 = this.State;
				pSVar8 = AottgProfileStateKeys.EmoteStickerSprite(index);
				bVar4 = String.IsNullOrEmpty(pSVar9);
				if (bVar4) {
					pSVar9 = (String)**(ulong*)(g_data_07556758 + 0xb8);
				}
				else {
					pSVar9 = AottgEmoteCatalog.Sprite(pSVar9);
				}
				if (pGVar5 == null) goto label_05e69a54;
				pGVar5.Set(pSVar8, pSVar9);
				index = index + 1;
			} while (index != 8);
		}
		return;
	}

	[Token(Token = "0x6000A47")]
	[Address(RVA = "0x5D6AE40", Offset = "0x5D69E40", VA = "0x5D6AE40")]
	private static string StickerSprite(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$StickerSprite): clean
		bool bVar1;
		String pSVar2;

		bVar1 = String.IsNullOrEmpty(value);
		if (bVar1) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		return pSVar2;
	}

	[Token(Token = "0x6000A48")]
	[Address(RVA = "0x5D6AD90", Offset = "0x5D69D90", VA = "0x5D6AD90")]
	private static string StickerLabel(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$StickerLabel): clean
		bool bVar1;
		String pSVar2;

		bVar1 = String.IsNullOrEmpty(value);
		if (bVar1) {
			pSVar2 = Aottg2GisketchLocale.Text("Common.None");
			return pSVar2;
		}
		if (value == null) {
			throw new NullReferenceException();
		}
		pSVar2 = value.Replace("Emoji", (String)**(ulong*)(g_data_07556758 + 0xb8));
		return pSVar2;
	}

	[Token(Token = "0x6000A49")]
	[Address(RVA = "0x5D6A8B0", Offset = "0x5D698B0", VA = "0x5D6A8B0")]
	private static string BadgeLabels(JSONNode badges)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$BadgeLabels): 10 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Il2CppClass pIVar3;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		bool bVar6;
		sbyte cVar7;
		int iVar8;
		List<string> __this;
		object pIVar9;
		VirtualInvokeData pVVar10;
		String pSVar11;
		String[] pSVar12;
		ulong uVar13;
		long lVar14;
		object local_48;
		byte local_38;

		local_48 = null;
		bVar6 = (badges == null);
		if (bVar6) {
	label_05e6aa4e: ;
			pSVar11 = Aottg2GisketchLocale.Text("Common.None");
			return pSVar11;
		}
		if (badges != null) {
			iVar8 = badges.get_Count();
			if (iVar8 == 0) goto label_05e6aa4e;
			__this = new List<string>();
			pIVar9 = (object)badges.get_Children();
			if (pIVar9 != null) {
				pIVar3 = pIVar9.klass;
				uVar13 = (ulong)(pIVar3._2).interface_offsets_count;
				pIVar9 = pIVar9.Dispose();
				local_38 = (byte)&local_48;
				do {
					local_48 = pIVar9;
					if (pIVar9 == null) {
						throw new NullReferenceException();
					}
					pIVar3 = pIVar9.klass;
					uVar13 = (ulong)(pIVar3._2).interface_offsets_count;
					cVar7 = pIVar9.Dispose();
					pIVar9 = local_48;
					if (cVar7 == false) {
						if (local_48 == null) goto label_05e6acd6;
						pIVar3 = local_48.klass;
						uVar13 = (ulong)(pIVar3._2).interface_offsets_count;
						if (uVar13 == 0) goto label_05e6acaf;
						pIVar4 = (pIVar3._1).interfaceOffsets;
						lVar14 = 0;
						goto label_05e6aca0;
					}
					if (local_48 == null) {
						throw new NullReferenceException();
					}
					pIVar3 = local_48.klass;
					uVar13 = (ulong)(pIVar3._2).interface_offsets_count;
					pIVar9 = pIVar9.Dispose();
					if (pIVar9 == null) {
						throw new NullReferenceException();
					}
					pSVar11 = (String)(*pIVar9.klass.vtable[9].methodPtr)(pIVar9);
					pSVar11 = AottgProfileEntitlementCatalog.BadgeLabel(pSVar11) ;
					if (__this == null) {
	label_05e6ad1e: ;
						throw new NullReferenceException();
					}
					piVar1 = &__this._version;
					*piVar1 = *piVar1 + 1;
					pSVar12 = __this._items;
					if (pSVar12 == null) goto label_05e6ad1e;
					uVar2 = __this._size;
					if (uVar2 < (uint)pSVar12.Length) {
						__this._size = uVar2 + 1;
						pSVar12[(int)uVar2] = pSVar11;
						pIVar9 = local_48;
					}
					else {
						__this.AddWithResize((object)pSVar11);
						pIVar9 = local_48;
					}
				} while(true);
			}
		}
		goto label_05e6ad32;
		while (true) {
			lVar14 = lVar14 + 0x10;
			if (!(uVar13 * 0x10 != lVar14)) break;
	label_05e6aca0: ;
			if (*(IDisposable*)((long)&pIVar4.interfaceType + lVar14) == typeof(IDisposable)) {
				pVVar10 = pIVar3.vtable + *(int)((long)&pIVar4.offset + lVar14);
				goto label_05e6accd;
			}
		}
	label_05e6acaf: ;
	label_05e6accd: ;
		pIVar9.Dispose();
	label_05e6acd6: ;
		if (__this != null) {
			pSVar12 = (String[])__this.ToArray();
			pSVar11 = String.Join(", ", pSVar12);
			return pSVar11;
		}
	label_05e6ad32: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000A4A")]
	[Address(RVA = "0x5D6AE80", Offset = "0x5D69E80", VA = "0x5D6AE80")]
	private void RegisterProfileActions()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$RegisterProfileActions): 5 lines keep C-only constructs
		Action<GisketchActionContext> pSVar1;
		GisketchUIState __this_00;
		MethodInfo method_00;

		pSVar1 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_SaveAvatar);
		this.RegisterAction("profile.save.avatar", pSVar1);
		pSVar1 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_SaveBanner);
		this.RegisterAction("profile.save.banner", pSVar1);
		pSVar1 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_SaveDetails);
		this.RegisterAction("profile.save.details", pSVar1);
		pSVar1 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_SaveCharacter);
		this.RegisterAction("profile.save.character", pSVar1);
		pSVar1 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_ImportLocalBio);
		method_00 = (MethodInfo *)"profile.importLocalBio";
		this.RegisterAction("profile.importLocalBio", pSVar1);
		this.RegisterEmoteActions();
		__this_00 = this.State;
		if (__this_00 == null) {
			return;
		}
		__this_00.SetBool("profile.save.idle", true);
		return;
	}

	[Token(Token = "0x6000A4B")]
	[Address(RVA = "0x5D6B090", Offset = "0x5D6A090", VA = "0x5D6B090")]
	private void SaveAvatar(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$SaveAvatar): clean
		bool bVar1;
		String avatarKey;
		String savingMessage;

		bVar1 = String.IsNullOrEmpty(AottgProfileDialogSelection.AvatarKey);
		if (bVar1) {
			avatarKey = AottgActiveProfile.AvatarKey();
		}
		else {
			avatarKey = AottgProfileDialogSelection.AvatarKey;
		}
		savingMessage = Aottg2GisketchLocale.Text("MainMenu.Profile.SavingAvatar");
		this.SaveProfile(context, null, null, avatarKey, null, null, savingMessage);
		return;
	}

	[Token(Token = "0x6000A4C")]
	[Address(RVA = "0x5D6B450", Offset = "0x5D6A450", VA = "0x5D6B450")]
	private void SaveBanner(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$SaveBanner): clean
		bool bVar1;
		String bannerKey;
		String savingMessage;

		bVar1 = String.IsNullOrEmpty(AottgProfileDialogSelection.BannerKey);
		if (bVar1) {
			bannerKey = AottgActiveProfile.BannerKey();
		}
		else {
			bannerKey = AottgProfileDialogSelection.BannerKey;
		}
		savingMessage = Aottg2GisketchLocale.Text("MainMenu.Profile.SavingBanner");
		this.SaveProfile(context, null, null, null, bannerKey, null, savingMessage);
		return;
	}

	[Token(Token = "0x6000A4D")]
	[Address(RVA = "0x5D6B530", Offset = "0x5D6A530", VA = "0x5D6B530")]
	private void SaveDetails(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$SaveDetails): 6 lines keep C-only constructs
		int iVar1;
		bool bVar2;
		ushort uVar3;
		TMP_InputField pTVar4;
		String value;
		String pSVar5;
		List<string> links;
		Dictionary<string, string> socials;
		String savingMessage;
		String* ppSVar6;
		uint index;
		MethodInfo method_01;

		value = null;
		bVar2 = AccountManager.IsLoggedIn;
		pSVar5 = "profile-details-name";
		if (bVar2) {
			pTVar4 = AottgGameUiActions.Input(context, pSVar5);
			bVar2 = ((Object)pTVar4 != null);
			if (bVar2) {
				if (pTVar4 == null) goto label_05e6b8f1;
				ppSVar6 = &pTVar4.m_Text;
			}
			else {
				ppSVar6 = *(String**)(g_data_07556758 + 0xb8);
			}
			if (*ppSVar6 == null) goto label_05e6b8f1;
			value = (*ppSVar6).Trim();
		}
		pSVar5 = "profile-details-bio";
		pTVar4 = AottgGameUiActions.Input(context, pSVar5);
		bVar2 = ((Object)pTVar4 != null);
		if (bVar2) {
			if (pTVar4 == null) goto label_05e6b8f1;
			ppSVar6 = &pTVar4.m_Text;
		}
		else {
			ppSVar6 = *(String**)(g_data_07556758 + 0xb8);
		}
		method_01 = (MethodInfo)*ppSVar6;
		if (method_01 == null) goto label_05e6b8f1;
		pSVar5 = method_01.Trim();
		links = AottgGameUiActions.SocialLinks(context);
		if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
			bVar2 = AccountManager.IsLoggedIn;
			if (bVar2) goto label_05e6b77c;
		}
		else {
			bVar2 = AccountManager.IsLoggedIn;
			if (bVar2) {
	label_05e6b77c: ;
				if (value == null) goto label_05e6b8f1;
				if (value._stringLength < 0x1a) {
					bVar2 = String.IsNullOrWhiteSpace(value);
					if (!bVar2) {
						iVar1 = value._stringLength;
						if (2 < iVar1) goto label_05e6b817;
						if (0 < iVar1) {
							index = 0;
							do {
								uVar3 = value.get_Chars(index);
								if ((((ushort)(uVar3 + 0x700) < 0x200) || ((ushort)(uVar3 + 0xcc00) < 0x19c0)) ||((ushort)(uVar3 + 0xb200) < 0x5200)) goto label_05e6b817;
								index = index + 1;
							} while ((int)index < value._stringLength);
						}
					}
				}
				ppSVar6 = &"MainMenu.Account.DisplayNameTooShort";
				goto label_05e6b8ba;
			}
		}
	label_05e6b817: ;
		if (pSVar5 == null) {
	label_05e6b8f1: ;
			throw new NullReferenceException();
		}
		if (pSVar5._stringLength < 0x201) {
			socials = AottgGameUiActions.ToSocials((IEnumerable<string>)links);
			savingMessage = Aottg2GisketchLocale.Text("MainMenu.Profile.SavingProfile");
			this.SaveProfile(context, value, pSVar5, null, null, socials, savingMessage);
			return;
		}
		ppSVar6 = &"MainMenu.Profile.BioTooLong";
	label_05e6b8ba: ;
		pSVar5 = Aottg2GisketchLocale.Text(*ppSVar6);
		this.ProfileToast(1, "warning", pSVar5, null);
		return;
	}

	[Token(Token = "0x6000A4E")]
	[Address(RVA = "0x5D6BEC0", Offset = "0x5D6AEC0", VA = "0x5D6BEC0")]
	private void ImportLocalBio(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ImportLocalBio): clean
		bool bVar1;
		String pSVar2;
		TMP_InputField __this_00;

		pSVar2 = AottgActiveProfile.LocalBio();
		bVar1 = String.IsNullOrWhiteSpace(pSVar2);
		if (!bVar1) {
			__this_00 = AottgGameUiActions.Input(context, "profile-details-bio");
			bVar1 = ((Object)__this_00 == null);
			if (!bVar1) {
				if (pSVar2 != null) {
					pSVar2 = pSVar2.Trim();
					if (__this_00 != null) {
						__this_00.SetTextWithoutNotify(pSVar2);
						__this_00.ForceLabelUpdate();
						pSVar2 = Aottg2GisketchLocale.Text("MainMenu.Profile.LocalBioCopied");
						this.ProfileToast(2, "information", pSVar2, "profile.save");
						return;
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6000A4F")]
	[Address(RVA = "0x5D6C020", Offset = "0x5D6B020", VA = "0x5D6C020")]
	private void SaveCharacter(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$SaveCharacter): 16 lines keep C-only constructs
		sbyte cVar1;
		bool bVar2;
		bool guildEffectEnabled;
		AottgGameUiActions.c__DisplayClass174_0 __this_00;
		TMP_InputField pTVar3;
		String pSVar4;
		String pSVar5;
		String pSVar6;
		String pSVar7;
		String pSVar8;
		String* ppSVar9;
		IEnumerable<string> badges;
		String[] nameEffectColors;
		String[] guildEffectColors;
		String guildFont;
		JSONNode pSVar10;
		Action<T1, T2, T3> __this_01;
		int variant;
		MethodInfo pMVar11;
		MethodInfo in_R9;
		JSONNode* targetAddress;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameUiActions.c__DisplayClass174_0));
		__this_00 = new Object();
		if (__this_00 == null) goto label_05e6c7e8;
		__this_00.__4__this = this;
		pSVar4 = "profile-character-name";
		pTVar3 = AottgGameUiActions.Input(context, pSVar4);
		bVar2 = ((Object)pTVar3 != null);
		if (bVar2) {
			if (pTVar3 == null) goto label_05e6c7e8;
			ppSVar9 = &pTVar3.m_Text;
		}
		else {
			ppSVar9 = *(String**)(g_data_07556758 + 0xb8);
		}
		pSVar4 = *ppSVar9;
		pSVar4 = AottgCharacterTextField.Value("profile-character-name", pSVar4);
		if (pSVar4 == null) goto label_05e6c7e8;
		pSVar5 = pSVar4.Trim();
		pSVar4 = "profile-character-guild";
		pTVar3 = AottgGameUiActions.Input(context, pSVar4);
		bVar2 = ((Object)pTVar3 != null);
		if (bVar2) {
			if (pTVar3 == null) goto label_05e6c7e8;
			ppSVar9 = &pTVar3.m_Text;
		}
		else {
			ppSVar9 = *(String**)(g_data_07556758 + 0xb8);
		}
		pSVar4 = AottgCharacterTextField.Value("profile-character-guild", *ppSVar9);
		if (pSVar4 == null) goto label_05e6c7e8;
		pSVar4 = pSVar4.Trim();
		if ((typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		pSVar6 = AottgEditCharacterDialog.SelectedGuildPresetId();
		if (Il2CppMethodInitialized_075455ec == false) {
			Il2CppMethodInitialized_075455ec = true;
			if ((typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor == 0) goto label_05e6c499;
	label_05e6c355: ;
			cVar1 = AottgEditCharacterDialog._noGuildSelected;
		}
		else {
			if ((typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor != 0) goto label_05e6c355;
	label_05e6c499: ;
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
			cVar1 = AottgEditCharacterDialog._noGuildSelected;
		}
		if (cVar1 != false) {
			pSVar4 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (((typeof(AottgCharacterTextField))._2). cctor_finished_or_no_cctor == 0) {
		}
		pSVar7 = AottgCharacterTextField.VisibleText(pSVar5);
		pSVar8 = AottgCharacterTextField.VisibleText(pSVar4);
		bVar2 = String.IsNullOrWhiteSpace(pSVar7);
		if (bVar2) {
	label_05e6c41f: ;
			ppSVar9 = &"MainMenu.Profile.CharacterNameInvalid";
		}
		else {
			if (pSVar7 == null) goto label_05e6c7e8;
			if (0x1f < pSVar7._stringLength) goto label_05e6c41f;
			if (cVar1 == false) {
				bVar2 = String.IsNullOrEmpty(pSVar6);
				if (bVar2) {
					bVar2 = String.IsNullOrWhiteSpace(pSVar8);
					if (bVar2) {
						ppSVar9 = &"MainMenu.Profile.GuildRequired";
						goto label_05e6c43e;
					}
				}
			}
			if (pSVar8 == null) {
	label_05e6c7e8: ;
				throw new NullReferenceException();
			}
			if (pSVar8._stringLength < 0x20) {
				guildEffectEnabled = false;
				badges = AottgEditCharacterDialog.SelectedBadgeIds();
				bVar2 = AottgEditCharacterDialog.NameEffectEnabled();
				in_R9 = (MethodInfo)AottgEditCharacterDialog.NameEffectType() ;
				nameEffectColors = AottgGameUiActions.EffectColors(context, "profile-character-name-effect");
				if (cVar1 == false) {
					guildEffectEnabled = AottgEditCharacterDialog.GuildEffectEnabled();
				}
				pSVar7 = AottgEditCharacterDialog.GuildEffectType();
				guildEffectColors = AottgGameUiActions.EffectColors(context, "profile-character-guild-effect");
				pSVar8 = AottgEditCharacterDialog.NameFont();
				guildFont = AottgEditCharacterDialog.GuildFont();
				pSVar10 = AottgCharacterInfoState.WithNameAndGuild(pSVar5, pSVar4, pSVar6, badges, bVar2, (String)in_R9, (IEnumerable<string>)nameEffectColors, guildEffectEnabled, pSVar7, (IEnumerable<string>)guildEffectColors, pSVar8, guildFont);
				targetAddress = &__this_00.next;
				__this_00.next = pSVar10;
				pSVar4 = Aottg2GisketchLocale.Text("MainMenu.Profile.SavingCharacter");
				bVar2 = this.TryBeginOperation("profile.save", pSVar4);
				if (!bVar2) {
					return;
				}
				pSVar4 = Aottg2GisketchLocale.Text("MainMenu.Profile.SavingCharacter");
				this.ProfileToast(2, "information", pSVar4, "profile.save");
				bVar2 = AccountManager.IsLoggedIn;
				pSVar10 = *targetAddress;
				if (bVar2) {
					__this_01 = new Action<bool, string, JSONNode>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c__DisplayClass174_0_SaveCharacter_b__0);
					AccountManager.UpdateCharacterInfo(pSVar10, (Action<bool, string, JSONNode>)__this_01, false);
					return;
				}
				AottgCharacterInfoState.SaveLocal(pSVar10);
				InGameManager.SyncLocalProfileToPlayerInfo("profile-save-local");
				pMVar11 = (MethodInfo *)"profile.save";
				this.EndOperation("profile.save");
				this.RefreshAccountState();
				this.CloseTopOverlay();
				this.RebuildProfileScreen();
				pSVar6 = Aottg2GisketchLocale.Text("MainMenu.Profile.SavedLocally");
				variant = 4;
				pSVar4 = "checkmark";
				pSVar5 = "profile.save";
				goto label_05e6c462;
			}
			ppSVar9 = &"MainMenu.Profile.GuildTooLong";
		}
	label_05e6c43e: ;
		pSVar6 = Aottg2GisketchLocale.Text(*ppSVar9);
		variant = 1;
		pSVar4 = "warning";
		pSVar5 = null;
	label_05e6c462: ;
		this.ProfileToast(variant, pSVar4, pSVar6, pSVar5);
		return;
	}

	[Token(Token = "0x6000A50")]
	[Address(RVA = "0x5D6B170", Offset = "0x5D6A170", VA = "0x5D6B170")]
	private void SaveProfile(GisketchActionContext context, string displayName, string bio, string avatarKey, string bannerKey, Dictionary<string, string> socials, string savingMessage)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$SaveProfile): 5 lines keep C-only constructs
		bool bVar1;
		AottgGameUiActions.c__DisplayClass175_0 __this_00;
		Action<T1, T2> __this_01;
		String pSVar2;
		List<string> links;
		MethodInfo pMVar3;
		String* targetAddress;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameUiActions.c__DisplayClass175_0));
		__this_00 = new Object();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.__4__this = this;
		targetAddress = &__this_00.bio;
		__this_00.bio = bio;
		bVar1 = this.TryBeginOperation("profile.save", savingMessage);
		if (bVar1) {
			this.ProfileToast(2, "information", savingMessage, "profile.save");
			bVar1 = AccountManager.IsLoggedIn;
			pSVar2 = *targetAddress;
			if (!bVar1) {
				if (avatarKey == null) {
					avatarKey = AottgActiveProfile.AvatarKey();
				}
				if (bannerKey == null) {
					bannerKey = AottgActiveProfile.BannerKey();
				}
				if (socials == null) {
					links = AottgActiveProfile.LocalSocialLinks();
					socials = AottgGameUiActions.ToSocials((IEnumerable<string>)links);
				}
				AottgGameUiActions.SaveLocalProfile(displayName, pSVar2, avatarKey, bannerKey, socials);
				pMVar3 = (MethodInfo *)"profile.save";
				this.EndOperation("profile.save");
				this.RefreshAccountState();
				this.CloseTopOverlay();
				this.RebuildProfileScreen();
				pSVar2 = Aottg2GisketchLocale.Text("MainMenu.Profile.SavedLocally");
				this.ProfileToast(4, "checkmark", pSVar2, "profile.save");
				return;
			}
			__this_01 = new Action<bool, string>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c__DisplayClass175_0_SaveProfile_b__0);
			AccountManager.UpdateProfile(displayName, pSVar2, avatarKey, bannerKey, socials, (Action<bool, string>)__this_01, false);
		}
		return;
	}

	[Token(Token = "0x6000A51")]
	[Address(RVA = "0x5D6C950", Offset = "0x5D6B950", VA = "0x5D6C950")]
	private static void SaveLocalProfile(string displayName, string bio, string avatarKey, string bannerKey, Dictionary<string, string> socials)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$SaveLocalProfile): 1 lines keep C-only constructs
		ProfileSettings pSVar1;
		NameSetting __this;
		StringSetting pSVar2;
		bool bVar3;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o collection;
		List<string> __this_00;
		String pSVar4;

		pSVar1 = SettingsManager.ProfileSettings;
		if (pSVar1 == null) {
			return;
		}
		bVar3 = String.IsNullOrEmpty(displayName);
		if (!bVar3) {
			__this = pSVar1.Name;
			if (__this == null) goto label_05e6cb6c;
			__this.Value = (object)displayName;
		}
		if (bio != null) {
			pSVar2 = pSVar1.About;
			if (pSVar2 == null) goto label_05e6cb6c;
			pSVar2.Value = (object)bio;
		}
		pSVar2 = pSVar1.ProfileIcon;
		if (pSVar2 != null) {
			pSVar2.Value = (object)avatarKey;
			pSVar2 = pSVar1.ProfileBanner;
			if ((pSVar2 != null) &&(pSVar2.Value = (object)bannerKey, socials != null)) {
				collection = socials.Values;
				__this_00 = new List<string>((IEnumerable<T>)collection);
				pSVar2 = pSVar1.SocialLinksJson;
				pSVar4 = AottgActiveProfile.SerializeSocialLinks((IEnumerable<string>)__this_00);
				if ((pSVar2 != null) &&(pSVar2.Value = (object)pSVar4, __this_00 != null)) {
					pSVar2 = pSVar1.Social;
					if (__this_00._size < 1) {
						pSVar4 = (String)**(ulong*)(g_data_07556758 + 0xb8);
					}
					else {
						pSVar4 = __this_00.get_Item(0);
					}
					if (pSVar2 != null) {
						pSVar2.Value = (object)pSVar4;
						pSVar1.Save();
						return;
					}
				}
			}
		}
	label_05e6cb6c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000A52")]
	[Address(RVA = "0x5D6CB80", Offset = "0x5D6BB80", VA = "0x5D6CB80")]
	private static void SaveLocalBio(string bio)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$SaveLocalBio): clean
		ProfileSettings pSVar1;
		StringSetting __this;

		if ((bio == null) ||(pSVar1 = SettingsManager.ProfileSettings, pSVar1 == null)) {
			return;
		}
		__this = pSVar1.About;
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Value = (object)bio;
		pSVar1.Save();
		return;
	}

	[Token(Token = "0x6000A53")]
	[Address(RVA = "0x5D6B900", Offset = "0x5D6A900", VA = "0x5D6B900")]
	private static List<string> SocialLinks(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$SocialLinks): 7 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		String[] pSVar3;
		bool bVar4;
		List<string> __this;
		MethodInfo pMVar5;
		String pSVar6;
		TMP_InputField x;
		String* ppSVar7;
		int local_34;

		__this = new List<string>();
		local_34 = 0;
		do {
			pMVar5 = (MethodInfo)local_34.ToString();
			pSVar6 = String.Concat("profile-details-social-", (String)pMVar5);
			x = AottgGameUiActions.Input(context, pSVar6);
			bVar4 = ((Object)x != null);
			if (bVar4) {
				if (x == null) goto label_05e6baf9;
				ppSVar7 = &x.m_Text;
			}
			else {
				ppSVar7 = *(String**)(g_data_07556758 + 0xb8);
			}
			if (*ppSVar7 == null) goto label_05e6baf9;
			pSVar6 = (*ppSVar7).Trim();
			bVar4 = String.IsNullOrWhiteSpace(pSVar6);
			pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
			if (!bVar4) {
				if (__this == null) {
	label_05e6baf9: ;
					throw new NullReferenceException();
				}
				piVar1 = &__this._version;
				*piVar1 = *piVar1 + 1;
				pSVar3 = __this._items;
				if (pSVar3 == null) goto label_05e6baf9;
				uVar2 = __this._size;
				if (uVar2 < (uint)pSVar3.Length) {
					__this._size = uVar2 + 1;
					pSVar3[(int)uVar2] = pSVar6;
				}
				else {
					__this.AddWithResize((object)pSVar6);
				}
			}
			local_34 = local_34 + 1;
			if (7 < local_34) {
				return __this;
			}
		} while(true);
	}

	[Token(Token = "0x6000A54")]
	[Address(RVA = "0x5D6BB00", Offset = "0x5D6AB00", VA = "0x5D6BB00")]
	private static Dictionary<string, string> ToSocials(IEnumerable<string> links)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ToSocials): 8 lines keep C-only constructs
		IEnumerable<string> pSVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		Il2CppClass pIVar3;
		object pIVar4;
		bool bVar5;
		Dictionary<string, string> __this;
		VirtualInvokeData pVVar6;
		String pSVar7;
		String pSVar8;
		ulong uVar9;
		uint uVar10;
		long lVar11;
		object local_50;
		uint[] local_44 = new uint[3];
		object* local_38;

		local_50 = null;
		local_44[0] = 0;
		__this = new Dictionary<string, string>();
		if (links == null) {
			throw new NullReferenceException();
		}
		pSVar1 = links.klass;
		uVar9 = (ulong)(pSVar1._2).interface_offsets_count;
		local_50 = links.Dispose();
		local_44[1] = 0;
		local_44[2] = 0;
		local_38 = &local_50;
		uVar10 = 1;
		do {
			pIVar4 = local_50;
			if (local_50 == null) {
				throw new NullReferenceException();
			}
			pIVar3 = local_50.klass;
			uVar9 = (ulong)(pIVar3._2).interface_offsets_count;
			bVar5 = pIVar4.Dispose();
			pIVar4 = local_50;
			if (!bVar5) {
				if (local_50 == null) {
					return __this;
				}
				pIVar3 = local_50.klass;
				uVar9 = (ulong)(pIVar3._2).interface_offsets_count;
				if (uVar9 == 0) goto label_05e6be0f;
				pIVar2 = (pIVar3._1).interfaceOffsets;
				lVar11 = 0;
				break;
			}
			if (local_50 == null) {
				throw new NullReferenceException();
			}
			pIVar3 = local_50.klass;
			uVar9 = (ulong)(pIVar3._2).interface_offsets_count;
			pSVar7 = pIVar4.Dispose();
			bVar5 = String.IsNullOrWhiteSpace(pSVar7);
			if (!bVar5 && uVar10 < 9) {
				local_44[0] = uVar10;
				pSVar8 = local_44.ToString();
				pSVar8 = String.Concat("link", pSVar8);
				if (pSVar7 == null) {
					throw new NullReferenceException();
				}
				pSVar7 = pSVar7.Trim();
				if (__this == null) {
					throw new NullReferenceException();
				}
				uVar10 = uVar10 + 1;
				__this.set_Item((object)pSVar8, (object)pSVar7);
			}
		} while(true);
		while (true) {
			lVar11 = lVar11 + 0x10;
			if (!(uVar9 * 0x10 != lVar11)) break;
			if (*(IDisposable*)((long)&pIVar2.interfaceType + lVar11) == typeof(IDisposable)) {
				pVVar6 = pIVar3.vtable + *(int)((long)&pIVar2.offset + lVar11);
				goto label_05e6be2d;
			}
		}
	label_05e6be0f: ;
	label_05e6be2d: ;
		pIVar4.Dispose();
		return __this;
	}

	[Token(Token = "0x6000A55")]
	[Address(RVA = "0x5D6C800", Offset = "0x5D6B800", VA = "0x5D6C800")]
	private static string[] EffectColors(GisketchActionContext context, string prefix)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$EffectColors): clean
		String[] pSVar1;
		String pSVar2;
		ulong uVar3;
		long lVar4;

		pSVar1 = (String[])new string[4];
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		if (0 < (int)pSVar1.Length) {
			lVar4 = 0;
			uVar3 = 0;
			do {
				pSVar2 = AottgEditCharacterDialog.ColorInputId(prefix, (int32_t)uVar3);
				pSVar2 = GisketchUIColorPicker.Value(pSVar2, "#FFFFFFFF", true);
				if ((uint)pSVar1.Length <= uVar3) {
					throw new IndexOutOfRangeException();
				}
				pSVar1[uVar3] = pSVar2;
				uVar3 = uVar3 + 1;
				lVar4 = lVar4 + 8;
			} while ((long)uVar3 < (long)(int)pSVar1.Length);
		}
		return pSVar1;
	}

	[Token(Token = "0x6000A56")]
	[Address(RVA = "0x5D69A70", Offset = "0x5D68A70", VA = "0x5D69A70")]
	private void ProfileToast(AottgToastVariant variant, string icon, string content, [Optional] string updateKey)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ProfileToast): clean
		GisketchUIRoot __this_00;
		String title;
		AottgToastDefinition __this_01;

		__this_00 = this.Root;
		if (__this_00 == null) {
			return;
		}
		title = Aottg2GisketchLocale.Text("Common.Profile");
		__this_01 = new AottgToastDefinition(variant, icon, title, content, updateKey);
		__this_00.ShowToast(__this_01);
		return;
	}

	[Token(Token = "0x6000A57")]
	[Address(RVA = "0x5D6CC20", Offset = "0x5D6BC20", VA = "0x5D6CC20")]
	private void LateUpdateSearchShortcuts()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$LateUpdateSearchShortcuts): 3 lines keep C-only constructs
		InputSettings pSVar1;
		KeybindSetting pSVar2;
		GisketchScreenRouter pGVar3;
		bool bVar4;
		GisketchUIRoot pGVar5;
		String* ppSVar6;
		GeneralInputSettings pSVar7;
		String a;
		String value;

		pSVar1 = SettingsManager.InputSettings;
		if (pSVar1 == null) {
			pSVar7 = null;
		}
		else {
			pSVar7 = pSVar1.General;
		}
		pGVar5 = this.Root;
		bVar4 = ((Object)pGVar5 == null);
		if (bVar4) {
			return;
		}
		if (pSVar7 == null) {
			return;
		}
		bVar4 = AottgGameUiActions.IsSearchShortcutBlocked();
		if (bVar4) {
			return;
		}
		pSVar2 = pSVar7.OpenCurrentScreenSearch;
		if ((pSVar2 == null) ||(bVar4 = pSVar2.GetKeyDown(false), !bVar4)) {
			pSVar2 = pSVar7.OpenSearchPalette;
			if (pSVar2 == null) {
				return;
			}
			bVar4 = pSVar2.GetKeyDown(false);
			if (!bVar4) {
				return;
			}
			ppSVar6 = &"open-global-search-keybind";
			value = "dialog.aottg-search-palette";
			goto label_05e6ce2f;
		}
		pGVar5 = this.Root;
		if (pGVar5 == null) {
	label_05e6ce5d: ;
			throw new NullReferenceException();
		}
		if (pGVar5._Screens_k__BackingField == null) {
			a = null;
		}
		else {
			pGVar5 = this.Root;
			if ((pGVar5 == null) ||(pGVar3 = pGVar5._Screens_k__BackingField, pGVar3 == null)) goto label_05e6ce5d;
			a = pGVar3._activeId;
		}
		bVar4 = String.Equals(a, "settings", 5);
		if (bVar4) {
			ppSVar6 = &"dialog.aottg-settings-search-palette";
	label_05e6ce0b: ;
			value = *ppSVar6;
		}
		else {
			value = null;
			bVar4 = String.Equals(a, "pause", 5);
			if (bVar4) {
				ppSVar6 = &"dialog.aottg-pause-search-palette";
				goto label_05e6ce0b;
			}
		}
		bVar4 = String.IsNullOrEmpty(value);
		if (bVar4) {
			return;
		}
		ppSVar6 = &"open-current-screen-search-keybind";
	label_05e6ce2f: ;
		this.OpenSearch(value, *ppSVar6);
		return;
	}

	[Token(Token = "0x6000A58")]
	[Address(RVA = "0x5D6D200", Offset = "0x5D6C200", VA = "0x5D6D200")]
	private void OpenSearch(string actionId, string sourceId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$OpenSearch): 2 lines keep C-only constructs
		GisketchActionContext context;
		GisketchUIRoot __this_00;
		GameObject gameObject;
		GisketchActionContext local_48;

		__this_00 = this.Root;
		gameObject = this.gameObject;
		local_48.Node = null;
		local_48.InputSource = 0;
		local_48._28_4_ = 0;
		local_48.ElementId = null;
		local_48.GameObject = null;
		local_48 = new GisketchActionContext(sourceId, gameObject, null, 2);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		context.GameObject = local_48.GameObject;
		context.ElementId = local_48.ElementId;
		context.Node = local_48.Node;
		context.InputSource = local_48.InputSource;
		context._28_4_ = local_48._28_4_;
		__this_00.HandleAction(actionId, context);
		return;
	}

	[Token(Token = "0x6000A59")]
	[Address(RVA = "0x5D6CE70", Offset = "0x5D6BE70", VA = "0x5D6CE70")]
	private static bool IsSearchShortcutBlocked()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$IsSearchShortcutBlocked): 1 lines keep C-only constructs
		BaseMenu pUVar1;
		KeybindPopup pUVar2;
		bool bVar3;
		EventSystem pUVar4;
		TMP_InputField x;
		InputField x_00;
		Object x_01;
		bool bVar5;

		if (Il2CppMethodInitialized_07548733 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField) ;
			Il2CppMethodInitialized_07548733 = true;
		}
		bVar3 = GisketchInputCapture.BlocksUiInput;
		if (!bVar3) {
			pUVar1 = UIManager.CurrentMenu;
			bVar3 = ((Object)pUVar1 != null);
			if (bVar3) {
				pUVar1 = UIManager.CurrentMenu;
				if (pUVar1 == null) goto label_05e6d147;
				pUVar2 = pUVar1.KeybindPopup;
				bVar3 = ((Object)pUVar2 != null);
				if (bVar3) {
					pUVar1 = UIManager.CurrentMenu;
					if ((pUVar1 == null) ||(pUVar2 = pUVar1.KeybindPopup, pUVar2 == null)) goto label_05e6d147;
					if (pUVar2.IsActive != false) {
						return true;
					}
				}
			}
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
				bVar3 = ChatManager.IsChatActive();
				if (bVar3) {
					return true;
				}
			}
			else {
				bVar3 = ChatManager.IsChatActive();
				if (bVar3) {
					return true;
				}
			}
			pUVar4 = EventSystem.current;
			x_01 = null;
			bVar3 = ((Object)pUVar4 != null);
			if (bVar3) {
				pUVar4 = EventSystem.current;
				if (pUVar4 == null) goto label_05e6d147;
				x_01 = (Object)pUVar4.m_CurrentSelected;
			}
			bVar3 = (x_01 != null);
			if (bVar3) {
				if (x_01 == null) {
	label_05e6d147: ;
					throw new NullReferenceException();
				}
				x = x_01.GetComponent<TMP_InputField>();
				bVar3 = ((Object)x != null);
				if (!bVar3) {
					x_00 = x_01.GetComponent<InputField>();
					bVar3 = ((Object)x_00 != null);
					return bVar3;
				}
			}
		}
		return bVar5;
	}

	[Token(Token = "0x6000A5A")]
	[Address(RVA = "0x5D6D290", Offset = "0x5D6C290", VA = "0x5D6D290")]
	private void RegisterViewerActions()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$RegisterViewerActions): 4 lines keep C-only constructs
		object pIVar1;
		String pSVar2;
		Action<GisketchActionContext> pSVar3;
		Gisketch_Aottg2UI_Game_AottgGameUiActions___c_StaticFields pGVar4;

		pSVar2 = "viewer.previous";
		pGVar4 = typeof(AottgGameUiActions.c).static_fields;
		pSVar3 = pGVar4.__9__185_0;
		if (pSVar3 == null) {
			if ((typeof(AottgGameUiActions.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(AottgGameUiActions.c).static_fields;
			}
			pIVar1 = (object)pGVar4.__9;
			pSVar3 = new Action<GisketchActionContext>(pIVar1, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c_RegisterViewerActions_b__185_0);
			pGVar4 = typeof(AottgGameUiActions.c).static_fields;
			pGVar4.__9__185_0 = pSVar3;
		}
		if (this == null) {
			throw new NullReferenceException();
		}
		this.RegisterAction(pSVar2, pSVar3);
		pSVar2 = "viewer.next";
		pGVar4 = typeof(AottgGameUiActions.c).static_fields;
		pSVar3 = pGVar4.__9__185_1;
		if (pSVar3 == null) {
			if ((typeof(AottgGameUiActions.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(AottgGameUiActions.c).static_fields;
			}
			pIVar1 = (object)pGVar4.__9;
			pSVar3 = new Action<GisketchActionContext>(pIVar1, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c_RegisterViewerActions_b__185_1);
			pGVar4 = typeof(AottgGameUiActions.c).static_fields;
			pGVar4.__9__185_1 = pSVar3;
		}
		this.RegisterAction(pSVar2, pSVar3);
		pSVar2 = "viewer.snapshot.save";
		pGVar4 = typeof(AottgGameUiActions.c).static_fields;
		pSVar3 = pGVar4.__9__185_2;
		if (pSVar3 == null) {
			if ((typeof(AottgGameUiActions.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(AottgGameUiActions.c).static_fields;
			}
			pIVar1 = (object)pGVar4.__9;
			pSVar3 = new Action<GisketchActionContext>(pIVar1, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c_RegisterViewerActions_b__185_2);
			pGVar4 = typeof(AottgGameUiActions.c).static_fields;
			pGVar4.__9__185_2 = pSVar3;
		}
		this.RegisterAction(pSVar2, pSVar3);
		pSVar2 = "viewer.exit";
		pGVar4 = typeof(AottgGameUiActions.c).static_fields;
		pSVar3 = pGVar4.__9__185_3;
		if (pSVar3 == null) {
			if ((typeof(AottgGameUiActions.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(AottgGameUiActions.c).static_fields;
			}
			pIVar1 = (object)pGVar4.__9;
			pSVar3 = new Action<GisketchActionContext>(pIVar1, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c_RegisterViewerActions_b__185_3);
			pGVar4 = typeof(AottgGameUiActions.c).static_fields;
			pGVar4.__9__185_3 = pSVar3;
		}
		this.RegisterAction(pSVar2, pSVar3);
		return;
	}

	[Token(Token = "0x6000A5B")]
	[Address(RVA = "0x5D6D5F0", Offset = "0x5D6C5F0", VA = "0x5D6D5F0", Slot = "5")]
	protected override void Awake()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$Awake): 1 lines keep C-only constructs
		Action<GisketchActionContext> __this_00;
		MethodInfo pMVar1;

		this.Awake();
		this.RegisterMainActions();
		this.RegisterSettingsActions();
		__this_00 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_HandleMobileAction);
		pMVar1 = (MethodInfo *)"mobile.layout.open";
		this.RegisterAction("mobile.layout.open", __this_00);
		this.RegisterPauseActions();
		this.RegisterGameCreateActions();
		this.RegisterInGameActions();
		this.RegisterAccountActions();
		this.RegisterProfileActions();
		this.RegisterMultiplayerActions();
		this.RegisterViewerActions();
		this.AddAccountListeners();
		this.AddNetworkListeners();
		return;
	}

	[Token(Token = "0x6000A5C")]
	[Address(RVA = "0x5D6DE50", Offset = "0x5D6CE50", VA = "0x5D6DE50")]
	private void Start()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$Start): clean
		GisketchUIRoot __this_00;
		String[] screenIds;

		this.EnsureScreenRouteGuard();
		this.StartAccountActions();
		this.StartProfileActions();
		this.StartChangelogActions();
		this.ShowDataFolderWarning();
		__this_00 = this.Root;
		if (__this_00 == null) {
			return;
		}
		screenIds = (String[])new string[2];
		if (screenIds == null) {
			throw new NullReferenceException();
		}
		if ((int)screenIds.Length != 0) {
			screenIds[0] = "settings";
			if ((screenIds.Length & 0xfffffffe) != 0) {
				screenIds[1] = "profile";
				__this_00.QueueScreenPrewarm(screenIds);
				return;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6000A5D")]
	[Address(RVA = "0x5D6E070", Offset = "0x5D6D070", VA = "0x5D6E070")]
	private void ShowDataFolderWarning()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ShowDataFolderWarning): clean
		sbyte cVar1;
		uint uVar2;
		GisketchUIRoot __this_00;
		String title;
		String pSVar3;
		AottgToastDefinition __this_01;

		if (Il2CppMethodInitialized_07548736 == false) {
			Il2CppMethodInitialized_07548736 = true;
			uVar2 = (typeof(FolderPaths)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(FolderPaths)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		if (Il2CppMethodInitialized_0754878e == false) {
			Il2CppMethodInitialized_0754878e = true;
			uVar2 = (typeof(FolderPaths)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(FolderPaths))._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			cVar1 = FolderPaths._IsDocumentsWritable_k__BackingField;
		}
		else {
			cVar1 = *(sbyte)((long)(typeof(FolderPaths)).static_fields + 0x98);
		}
		if ((cVar1 != false) ||(__this_00 = this.Root, __this_00 == null)) {
			return;
		}
		title = Aottg2GisketchLocale.Text("Common.DataFolderNotWritableTitle");
		pSVar3 = Aottg2GisketchLocale.Text("Common.DataFolderNotWritable");
		pSVar3 = String.Format(pSVar3, (object)FolderPaths.Documents);
		__this_01 = new AottgToastDefinition(1, "warning", title, pSVar3, null);
		__this_00.ShowToast(__this_01);
		return;
	}

	[Token(Token = "0x6000A5E")]
	[Address(RVA = "0x5D6E270", Offset = "0x5D6D270", VA = "0x5D6E270")]
	private void LateUpdate()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$LateUpdate): clean
		GisketchUIState state;

		this.EnsureScreenRouteGuard();
		this.UpdateSettingsState();
		this.LateUpdateAccountActions();
		this.LateUpdateSearchShortcuts();
		if (SceneLoader.SceneName == 1) {
			state = this.State;
			AottgMenuStatusLabel.Refresh(state);
			return;
		}
		return;
	}

	[Token(Token = "0x6000A5F")]
	[Address(RVA = "0x5D6E4A0", Offset = "0x5D6D4A0", VA = "0x5D6E4A0")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$OnDestroy): clean
		this.RemoveAccountListeners();
		this.RemoveNetworkListeners();
		return;
	}

	[Token(Token = "0x6000A60")]
	[Address(RVA = "0x5D6D6D0", Offset = "0x5D6C6D0", VA = "0x5D6D6D0")]
	private void RegisterMainActions()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$RegisterMainActions): 6 lines keep C-only constructs
		object pIVar1;
		String pSVar2;
		Action<GisketchActionContext> pSVar3;
		Gisketch_Aottg2UI_Game_AottgGameUiActions___c_StaticFields pGVar4;
		MethodInfo pMVar5;

		this.RegisterDialog("main.tutorial", "tutorial");
		pSVar2 = "main.singleplayer";
		pGVar4 = typeof(AottgGameUiActions.c).static_fields;
		pSVar3 = pGVar4.__9__195_0;
		if (pSVar3 == null) {
			if ((typeof(AottgGameUiActions.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(AottgGameUiActions.c).static_fields;
			}
			pIVar1 = (object)pGVar4.__9;
			pSVar3 = new Action<GisketchActionContext>(pIVar1, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c_RegisterMainActions_b__195_0);
			pGVar4 = typeof(AottgGameUiActions.c).static_fields;
			pGVar4.__9__195_0 = pSVar3;
		}
		if (this == null) {
			throw new NullReferenceException();
		}
		this.RegisterAction(pSVar2, pSVar3);
		this.RegisterLegacyMain("main.multiplayer", "MultiplayerButton");
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterMainActions_b__195_1);
		this.RegisterAction("main.profile", pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterMainActions_b__195_2);
		this.RegisterAction("main.settings", pSVar3);
		this.RegisterDialog("main.tools", "tools");
		this.RegisterLegacyMain("main.quests", "QuestButton");
		this.RegisterLegacyMain("main.leaderboard", "LeaderboardButton");
		this.RegisterDialog("main.social", "social");
		this.RegisterLegacyMain("main.patreon", "PatreonButton");
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterMainActions_b__195_3);
		this.RegisterAction("main.credits", pSVar3);
		pSVar2 = "main.quit";
		pGVar4 = typeof(AottgGameUiActions.c).static_fields;
		pSVar3 = pGVar4.__9__195_4;
		if (pSVar3 == null) {
			if ((typeof(AottgGameUiActions.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(AottgGameUiActions.c).static_fields;
			}
			pIVar1 = (object)pGVar4.__9;
			pSVar3 = new Action<GisketchActionContext>(pIVar1, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c_RegisterMainActions_b__195_4);
			pGVar4 = typeof(AottgGameUiActions.c).static_fields;
			pGVar4.__9__195_4 = pSVar3;
		}
		this.RegisterAction(pSVar2, pSVar3);
		pSVar3 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterCreditsActions_b__83_0);
		pMVar5 = (MethodInfo *)"credits.retry";
		this.RegisterAction("credits.retry", pSVar3);
		this.RegisterChangelogActions();
		return;
	}

	[Token(Token = "0x6000A61")]
	[Address(RVA = "0x5D6DB90", Offset = "0x5D6CB90", VA = "0x5D6DB90")]
	private void RegisterSettingsActions()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$RegisterSettingsActions): 8 lines keep C-only constructs
		Action<GisketchActionContext> pSVar1;

		pSVar1 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterSettingsActions_b__196_0);
		this.RegisterAction("settings.save", pSVar1);
		pSVar1 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterSettingsActions_b__196_1);
		this.RegisterAction("settings.load", pSVar1);
		pSVar1 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterSettingsActions_b__196_2);
		this.RegisterAction("settings.back", pSVar1);
		pSVar1 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterSettingsActions_b__196_3);
		this.RegisterAction("settings.default", pSVar1);
		pSVar1 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterSettingsActions_b__196_4);
		this.RegisterAction("settings.confirm.saveBack", pSVar1);
		pSVar1 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterSettingsActions_b__196_5);
		this.RegisterAction("settings.confirm.discardBack", pSVar1);
		pSVar1 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterSettingsActions_b__196_6);
		this.RegisterAction("settings.confirm.load", pSVar1);
		pSVar1 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_RegisterSettingsActions_b__196_7);
		this.RegisterAction("settings.confirm.default", pSVar1);
		return;
	}

	[Token(Token = "0x6000A62")]
	[Address(RVA = "0x5D6E670", Offset = "0x5D6D670", VA = "0x5D6E670")]
	private void OpenSettingsScreen()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$OpenSettingsScreen): clean


		this.OpenSettingsScreen("main-menu");
		return;
	}

	[Token(Token = "0x6000A63")]
	[Address(RVA = "0x5D6E6B0", Offset = "0x5D6D6B0", VA = "0x5D6E6B0")]
	private void OpenSettingsScreen(string returnScreenId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$OpenSettingsScreen): clean
		GisketchScreenRouter __this_00;
		bool bVar1;
		GisketchUIRoot pGVar2;

		bVar1 = String.IsNullOrEmpty(returnScreenId);
		if (this == null) {
			throw new NullReferenceException();
		}
		if (bVar1) {
			returnScreenId = "main-menu";
		}
		this._settingsLeaveTargetScreenId = returnScreenId;
		pGVar2 = this.Root;
		if ((pGVar2 == null) ||(__this_00 = pGVar2._Screens_k__BackingField, __this_00 == null)) {
			return;
		}
		__this_00.ShowScreen("settings");
		return;
	}

	[Token(Token = "0x6000A64")]
	[Address(RVA = "0x5D6E750", Offset = "0x5D6D750", VA = "0x5D6E750")]
	private void BackFromSettings()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$BackFromSettings): 4 lines keep C-only constructs
		String* targetAddress;
		String id;
		GisketchScreenRouter __this_00;
		bool bVar1;
		GisketchUIRoot pGVar2;
		String* ppSVar3;

		pGVar2 = this.Root;
		AottgSettingsDirtyRegistry.SyncAll(pGVar2);
		bVar1 = AottgSettingsDirtyRegistry.HasDirty();
		if (bVar1) {
			pGVar2 = this.Root;
			AottgSettingsUnsavedChangesDialog.Open(pGVar2, 0);
			return;
		}
		AottgGameUiActions.ApplySettings();
		targetAddress = &this._settingsLeaveTargetScreenId;
		bVar1 = String.IsNullOrEmpty(this._settingsLeaveTargetScreenId);
		ppSVar3 = targetAddress;
		if (bVar1) {
			ppSVar3 = &"main-menu";
		}
		id = *ppSVar3;
		this._settingsLeaveTargetScreenId = "main-menu";
		pGVar2 = this.Root;
		if ((pGVar2 == null) ||(__this_00 = pGVar2._Screens_k__BackingField, __this_00 == null)) {
			return;
		}
		__this_00.ShowScreen(id);
		return;
	}

	[Token(Token = "0x6000A65")]
	[Address(RVA = "0x5D6E5A0", Offset = "0x5D6D5A0", VA = "0x5D6E5A0")]
	private void RegisterLegacyMain(string actionId, string legacyButtonName)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$RegisterLegacyMain): 2 lines keep C-only constructs
		AottgGameUiActions.c__DisplayClass200_0 __this_00;
		Action<GisketchActionContext> __this_01;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameUiActions.c__DisplayClass200_0));
		__this_00 = new Object();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.legacyButtonName = legacyButtonName;
		__this_01 = new Action<GisketchActionContext>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c__DisplayClass200_0_RegisterLegacyMain_b__0);
		this.RegisterAction(actionId, __this_01);
		return;
	}

	[Token(Token = "0x6000A66")]
	[Address(RVA = "0x5D6E4C0", Offset = "0x5D6D4C0", VA = "0x5D6E4C0")]
	private void RegisterDialog(string actionId, string dialogId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$RegisterDialog): 3 lines keep C-only constructs
		AottgGameUiActions.c__DisplayClass201_0 __this_00;
		Action<GisketchActionContext> __this_01;

		if (Il2CppMethodInitialized_0754873e == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c__DisplayClass201_0_RegisterDialog_b__0) ;
			Il2CppMethodInitialized_0754873e = true;
		}
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameUiActions.c__DisplayClass201_0));
		__this_00 = new Object();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.__4__this = this;
		__this_00.dialogId = dialogId;
		__this_01 = new Action<GisketchActionContext>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c__DisplayClass201_0_RegisterDialog_b__0);
		this.RegisterAction(actionId, __this_01);
		return;
	}

	[Token(Token = "0x6000A67")]
	[Address(RVA = "0x5D6E9D0", Offset = "0x5D6D9D0", VA = "0x5D6E9D0")]
	private void SaveSettings()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$SaveSettings): 2 lines keep C-only constructs
		uint uVar1;
		SaveableSettingsContainer[] pSVar2;
		GisketchUIRoot root;
		uint uVar3;
		String* method_00;

		method_00 = (String*)this;
		if (Il2CppMethodInitialized_0754873f == false) {
			method_00 = &"checkmark";
			Il2CppMethodInitialized_0754873f = true;
		}
		pSVar2 = AottgGameUiActions.SettingsContainers();
		if (pSVar2 == null) {
	label_05e6eada: ;
			throw new NullReferenceException();
		}
		uVar1 = (uint)pSVar2.Length;
		if (0 < (int)uVar1) {
			uVar3 = 0;
			do {
				if (uVar1 <= uVar3) {
					throw new IndexOutOfRangeException();
				}
				method_00 = (String*)pSVar2[(int)uVar3];
				if ((MethodInfo)method_00 == null) goto label_05e6eada;
				(*(((SaveableSettingsContainer)((MethodInfo)method_00).methodPointer).vtable)._18_Save. methodPtr)(method_00,(((SaveableSettingsContainer)((MethodInfo)method_00).methodPointer).vtable )._18_Save.method);
				uVar3 = uVar3 + 1;
				uVar1 = (uint)pSVar2.Length;
			} while ((int)uVar3 < (int)uVar1);
		}
		AottgGameUiActions.ApplySettings();
		root = this.Root;
		AottgSettingsDirtyRegistry.CaptureBaseline(root);
		this.SettingsToast(4, "checkmark", "SettingsPopup.SavedToast", "settings.save");
		return;
	}

	[Token(Token = "0x6000A68")]
	[Address(RVA = "0x5D6EE80", Offset = "0x5D6DE80", VA = "0x5D6EE80")]
	private void LoadSettings()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$LoadSettings): clean
		bool bVar1;
		GisketchUIRoot pGVar2;

		pGVar2 = this.Root;
		AottgSettingsDirtyRegistry.SyncAll(pGVar2);
		bVar1 = AottgSettingsDirtyRegistry.HasDirty();
		if (bVar1) {
			pGVar2 = this.Root;
			AottgSettingsUnsavedChangesDialog.Open(pGVar2, 1);
			return;
		}
		this.LoadSettingsFromDisk(true);
		this.SettingsToast(4, "checkmark", "SettingsPopup.LoadedToast", "settings.load");
		return;
	}

	[Token(Token = "0x6000A69")]
	[Address(RVA = "0x5D6EF70", Offset = "0x5D6DF70", VA = "0x5D6EF70")]
	private void LoadSettingsConfirmed()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$LoadSettingsConfirmed): clean


		this.LoadSettingsFromDisk(true);
		this.SettingsToast(4, "checkmark", "SettingsPopup.LoadedToast", "settings.load");
		return;
	}

	[Token(Token = "0x6000A6A")]
	[Address(RVA = "0x5D6EFF0", Offset = "0x5D6DFF0", VA = "0x5D6EFF0")]
	private void LoadSettingsFromDisk(bool syncUi)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$LoadSettingsFromDisk): 3 lines keep C-only constructs
		uint uVar1;
		SaveableSettingsContainer[] pSVar2;
		GisketchUIRoot root;
		uint uVar3;
		AottgSettingsDirtyRegistry* method_01;

		method_01 = (AottgSettingsDirtyRegistry*)this;
		if (g_data_07548742 == false) {
			method_01 = &typeof(AottgSettingsDirtyRegistry);
			g_data_07548742 = true;
		}
		pSVar2 = AottgGameUiActions.SettingsContainers();
		if (pSVar2 == null) {
	label_05e6f0c5: ;
			throw new NullReferenceException();
		}
		uVar1 = (uint)pSVar2.Length;
		if (0 < (int)uVar1) {
			uVar3 = 0;
			do {
				if (uVar1 <= uVar3) {
					throw new IndexOutOfRangeException();
				}
				method_01 = (AottgSettingsDirtyRegistry*)pSVar2[(int)uVar3];
				if ((MethodInfo)method_01 == null) goto label_05e6f0c5;
				(*(((SaveableSettingsContainer)((MethodInfo)method_01).methodPointer).vtable)._19_Load. methodPtr)(method_01,(((SaveableSettingsContainer)((MethodInfo)method_01).methodPointer).vtable )._19_Load.method);
				uVar3 = uVar3 + 1;
				uVar1 = (uint)pSVar2.Length;
			} while ((int)uVar3 < (int)uVar1);
		}
		AottgGameUiActions.ApplySettings();
		root = this.Root;
		AottgSettingsDirtyRegistry.CaptureBaseline(root);
		if (syncUi) {
			this.SyncSettingsUiState();
			return;
		}
		return;
	}

	[Token(Token = "0x6000A6B")]
	[Address(RVA = "0x5D6E850", Offset = "0x5D6D850", VA = "0x5D6E850")]
	private static void ApplySettings()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ApplySettings): 2 lines keep C-only constructs
		SaveableSettingsContainer pSVar1;
		uint uVar2;
		SaveableSettingsContainer[] pSVar3;
		uint uVar4;
		UIManager* ppUVar5;

		if (Il2CppMethodInitialized_07548743 == false) {
			ppUVar5 = &typeof(UIManager);
			Il2CppMethodInitialized_07548743 = true;
		}
		pSVar3 = AottgGameUiActions.SettingsContainers();
		if (pSVar3 == null) {
	label_05e6e919: ;
			throw new NullReferenceException();
		}
		uVar2 = (uint)pSVar3.Length;
		if (0 < (int)uVar2) {
			uVar4 = 0;
			do {
				if (uVar2 <= uVar4) {
					throw new IndexOutOfRangeException();
				}
				pSVar1 = pSVar3[(int)uVar4];
				if (pSVar1 == null) goto label_05e6e919;
				pSVar1.Apply();
				uVar4 = uVar4 + 1;
				uVar2 = (uint)pSVar3.Length;
			} while ((int)uVar4 < (int)uVar2);
		}
		UIManager.ApplyLanguageAndTheme();
		if (SceneLoader.SceneName == 2) {
			SettingsManager.NotifySettingsChanged();
			return;
		}
		return;
	}

	[Token(Token = "0x6000A6C")]
	[Address(RVA = "0x5D6F180", Offset = "0x5D6E180", VA = "0x5D6F180")]
	private void ResetSettingsToDefault()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ResetSettingsToDefault): clean
		GisketchOverlayManager __this_00;
		GisketchUIRoot pGVar1;

		pGVar1 = this.Root;
		if ((pGVar1 == null) ||(__this_00 = pGVar1._Overlays_k__BackingField, __this_00 == null)) {
			return;
		}
		__this_00.ShowDialog("settings-default-confirm", true);
		return;
	}

	[Token(Token = "0x6000A6D")]
	[Address(RVA = "0x5D6F1E0", Offset = "0x5D6E1E0", VA = "0x5D6F1E0")]
	private void ResetSettingsToDefaultConfirmed()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ResetSettingsToDefaultConfirmed): 1 lines keep C-only constructs
		SaveableSettingsContainer[] pSVar1;
		ulong uVar2;
		GisketchUIRoot root;
		ulong uVar3;
		MethodInfo pMVar4;
		String* method_00;

		if (Il2CppMethodInitialized_07548745 == false) {
			method_00 = &"checkmark";
			Il2CppMethodInitialized_07548745 = true;
		}
		pSVar1 = AottgGameUiActions.SettingsContainers();
		if (pSVar1 == null) {
	label_05e6f2c3: ;
			throw new NullReferenceException();
		}
		if (0 < (int)pSVar1.Length) {
			uVar2 = pSVar1.Length & 0xffffffff;
			uVar3 = 0;
			do {
				if (uVar2 <= uVar3) {
					throw new IndexOutOfRangeException();
				}
				pMVar4 = (MethodInfo)pSVar1[uVar3];
				if ((pMVar4 != (MethodInfo)SettingsManager.CustomSkinSettings) &&(pMVar4 != (MethodInfo)SettingsManager.HumanCustomSettings)) {
					if (pMVar4 == null) goto label_05e6f2c3;
					pMVar4.SetDefault();
					pMVar4.Save() ;
					uVar2 = (ulong)(uint)pSVar1.Length;
				}
				uVar3 = uVar3 + 1;
			} while ((long)uVar3 < (long)(int)uVar2);
		}
		AottgGameUiActions.ApplySettings();
		root = this.Root;
		pMVar4 = null;
		AottgSettingsDirtyRegistry.CaptureBaseline(root);
		this.SyncSettingsUiState();
		this.SettingsToast(4, "checkmark", "SettingsPopup.Defaults.RestoredToast", "settings.default");
		return;
	}

	[Token(Token = "0x6000A6E")]
	[Address(RVA = "0x5D6F340", Offset = "0x5D6E340", VA = "0x5D6F340")]
	private void ConfirmSaveBack()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ConfirmSaveBack): 16 lines keep C-only constructs
		String* targetAddress;
		GisketchOverlayManager __this_00;
		String id;
		GisketchScreenRouter __this_01;
		bool bVar1;
		GisketchUIRoot pGVar2;
		String* ppSVar3;
		ulong unaff_RBX;
		ulong unaff_R14;
		ulong unaff_R15;
		GisketchActionContext ___00;
		ulong unaff_retaddr;
		ulong in_stack_ffffffffffffffe8;
		byte[] auVar4 = new byte[24];

		auVar4._8_8_ = unaff_R14;
		auVar4._0_8_ = in_stack_ffffffffffffffe8;
		auVar4._16_8_ = unaff_R15;
		___00._8_16_ = auVar4._8_16_;
		___00.ElementId = (String)unaff_RBX;
		pGVar2 = this.Root;
		if ((pGVar2 != null) &&(__this_00 = pGVar2._Overlays_k__BackingField, __this_00 != null)) {
			__this_00.CloseTop(false);
		}
		___00._24_8_ = unaff_retaddr;
		this.SaveSettings(___00);
		targetAddress = &this._settingsLeaveTargetScreenId;
		bVar1 = String.IsNullOrEmpty(this._settingsLeaveTargetScreenId);
		ppSVar3 = targetAddress;
		if (bVar1) {
			ppSVar3 = &"main-menu";
		}
		id = *ppSVar3;
		this._settingsLeaveTargetScreenId = "main-menu";
		pGVar2 = this.Root;
		if ((pGVar2 == null) ||(__this_01 = pGVar2._Screens_k__BackingField, __this_01 == null)) {
			return;
		}
		__this_01.ShowScreen(id);
		return;
	}

	[Token(Token = "0x6000A6F")]
	[Address(RVA = "0x5D6F3F0", Offset = "0x5D6E3F0", VA = "0x5D6F3F0")]
	private void ConfirmDiscardBack()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ConfirmDiscardBack): 4 lines keep C-only constructs
		String* targetAddress;
		GisketchOverlayManager __this_00;
		String id;
		GisketchScreenRouter __this_01;
		bool bVar1;
		GisketchUIRoot pGVar2;
		String* ppSVar3;

		pGVar2 = this.Root;
		if ((pGVar2 != null) &&(__this_00 = pGVar2._Overlays_k__BackingField, __this_00 != null)) {
			__this_00.CloseTop(false);
		}
		this.LoadSettingsFromDisk(false);
		targetAddress = &this._settingsLeaveTargetScreenId;
		bVar1 = String.IsNullOrEmpty(this._settingsLeaveTargetScreenId);
		ppSVar3 = targetAddress;
		if (bVar1) {
			ppSVar3 = &"main-menu";
		}
		id = *ppSVar3;
		this._settingsLeaveTargetScreenId = "main-menu";
		pGVar2 = this.Root;
		if ((pGVar2 == null) ||(__this_01 = pGVar2._Screens_k__BackingField, __this_01 == null)) {
			return;
		}
		__this_01.ShowScreen(id);
		return;
	}

	[Token(Token = "0x6000A70")]
	[Address(RVA = "0x5D6F4A0", Offset = "0x5D6E4A0", VA = "0x5D6F4A0")]
	private void ConfirmLoad()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ConfirmLoad): clean
		GisketchOverlayManager __this_00;
		GisketchUIRoot pGVar1;

		pGVar1 = this.Root;
		if ((pGVar1 != null) &&(__this_00 = pGVar1._Overlays_k__BackingField, __this_00 != null)) {
			__this_00.CloseTop(false);
		}
		this.LoadSettingsFromDisk(true);
		this.SettingsToast(4, "checkmark", "SettingsPopup.LoadedToast", "settings.load");
		return;
	}

	[Token(Token = "0x6000A71")]
	[Address(RVA = "0x5D6F540", Offset = "0x5D6E540", VA = "0x5D6F540")]
	private void ConfirmDefault()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ConfirmDefault): clean
		GisketchOverlayManager __this_00;
		GisketchUIRoot pGVar1;

		pGVar1 = this.Root;
		if ((pGVar1 != null) &&(__this_00 = pGVar1._Overlays_k__BackingField, __this_00 != null)) {
			__this_00.CloseTop(false);
		}
		this.ResetSettingsToDefaultConfirmed();
		return;
	}

	[Token(Token = "0x6000A72")]
	[Address(RVA = "0x5D6EAE0", Offset = "0x5D6DAE0", VA = "0x5D6EAE0")]
	private static SaveableSettingsContainer[] SettingsContainers()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$SettingsContainers): 8 lines keep C-only constructs
		GeneralSettings obj;
		SoundSettings obj_00;
		GraphicsSettings obj_01;
		UISettings obj_02;
		InputSettings obj_03;
		CustomSkinSettings obj_04;
		HumanCustomSettings obj_05;
		AbilitySettings obj_06;
		SaveableSettingsContainer[] pSVar1;
		object pIVar2;

		pSVar1 = (SaveableSettingsContainer[])new SaveableSettingsContainer[8];
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		obj = SettingsManager.GeneralSettings;
		if (obj != null) {
			pIVar2 = il2cpp_vm_Object_IsInst((object)obj, (((pSVar1.obj).klass)._1).element_class);
			if (pIVar2 == null) goto label_05e6ed69;
		}
		if ((int)pSVar1.Length != 0) {
			pSVar1[0] = (SaveableSettingsContainer)obj;
			obj_00 = SettingsManager.SoundSettings;
			if (obj_00 != null) {
				pIVar2 = il2cpp_vm_Object_IsInst((object)obj_00, (((pSVar1.obj).klass)._1).element_class);
				if (pIVar2 == null) goto label_05e6ed69;
			}
			if ((pSVar1.Length & 0xfffffffe) == 0) goto label_05e6ed64;
			pSVar1[1] = (SaveableSettingsContainer)obj_00;
			obj_01 = SettingsManager.GraphicsSettings;
			if (obj_01 != null) {
				pIVar2 = il2cpp_vm_Object_IsInst((object)obj_01, (((pSVar1.obj).klass)._1).element_class);
				if (pIVar2 == null) goto label_05e6ed69;
			}
			if ((uint)pSVar1.Length < 3) goto label_05e6ed64;
			pSVar1[2] = (SaveableSettingsContainer)obj_01;
			obj_02 = SettingsManager.UISettings;
			if (obj_02 != null) {
				pIVar2 = il2cpp_vm_Object_IsInst((object)obj_02, (((pSVar1.obj).klass)._1).element_class);
				if (pIVar2 == null) goto label_05e6ed69;
			}
			if ((pSVar1.Length & 0xfffffffc) == 0) goto label_05e6ed64;
			pSVar1[3] = (SaveableSettingsContainer)obj_02;
			obj_03 = SettingsManager.InputSettings;
			if (obj_03 != null) {
				pIVar2 = il2cpp_vm_Object_IsInst((object)obj_03, (((pSVar1.obj).klass)._1).element_class);
				if (pIVar2 == null) goto label_05e6ed69;
			}
			if ((uint)pSVar1.Length < 5) goto label_05e6ed64;
			pSVar1[4] = (SaveableSettingsContainer)obj_03;
			obj_04 = SettingsManager.CustomSkinSettings;
			if (obj_04 != null) {
				pIVar2 = il2cpp_vm_Object_IsInst((object)obj_04, (((pSVar1.obj).klass)._1).element_class);
				if (pIVar2 == null) goto label_05e6ed69;
			}
			if ((uint)pSVar1.Length < 6) goto label_05e6ed64;
			pSVar1[5] = (SaveableSettingsContainer)obj_04;
			obj_05 = SettingsManager.HumanCustomSettings;
			if (obj_05 != null) {
				pIVar2 = il2cpp_vm_Object_IsInst((object)obj_05, (((pSVar1.obj).klass)._1).element_class);
				if (pIVar2 == null) goto label_05e6ed69;
			}
			if (6 < (uint)pSVar1.Length) {
				pSVar1[6] = (SaveableSettingsContainer)obj_05;
				obj_06 = SettingsManager.AbilitySettings;
				if (obj_06 != null) {
					pIVar2 = il2cpp_vm_Object_IsInst((object)obj_06, (((pSVar1.obj).klass)._1).element_class);
					if (pIVar2 == null) {
	label_05e6ed69: ;
						pIVar2 = new ArrayTypeMismatchException();
						throw pIVar2;
					}
				}
				if ((pSVar1.Length & 0xfffffff8) != 0) {
					pSVar1[7] = (SaveableSettingsContainer)obj_06;
					return pSVar1;
				}
			}
		}
	label_05e6ed64: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6000A73")]
	[Address(RVA = "0x5D6F0D0", Offset = "0x5D6E0D0", VA = "0x5D6F0D0")]
	private void SyncSettingsUiState()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$SyncSettingsUiState): clean
		GisketchUIRoot pGVar1;

		pGVar1 = this.Root;
		AottgSettingsScreen.SyncState(pGVar1);
		pGVar1 = this.Root;
		AottgSettingsDirtyRegistry.SyncAll(pGVar1);
		pGVar1 = this.Root;
		AottgKeybindConflictRegistry.SyncAll(pGVar1);
		return;
	}

	[Token(Token = "0x6000A74")]
	[Address(RVA = "0x5D6ED80", Offset = "0x5D6DD80", VA = "0x5D6ED80")]
	private void SettingsToast(AottgToastVariant variant, string icon, string contentKey, string updateKey)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$SettingsToast): clean
		GisketchUIRoot __this_00;
		String title;
		String content;
		AottgToastDefinition __this_01;

		__this_00 = this.Root;
		if (__this_00 == null) {
			return;
		}
		title = Aottg2GisketchLocale.Text("Common.Settings");
		content = Aottg2GisketchLocale.Text(contentKey);
		__this_01 = new AottgToastDefinition(variant, icon, title, content, updateKey);
		__this_00.ShowToast(__this_01);
		return;
	}

	[Token(Token = "0x6000A75")]
	[Address(RVA = "0x5D6DF50", Offset = "0x5D6CF50", VA = "0x5D6DF50")]
	private void EnsureScreenRouteGuard()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$EnsureScreenRouteGuard): 2 lines keep C-only constructs
		GisketchScreenRouter pGVar1;
		bool bVar2;
		GisketchUIRoot pGVar3;
		Func<string, bool> __this_00;
		Func<string, bool> pSVar4;

		pGVar3 = this.Root;
		if ((pGVar3 == null) ||(pGVar3._Screens_k__BackingField == null)) {
			return;
		}
		pGVar3 = this.Root;
		if ((pGVar3 != null) &&(pGVar1 = pGVar3._Screens_k__BackingField, pGVar1 != null)) {
			pSVar4 = pGVar1._CanShowScreen_k__BackingField;
			__this_00 = new Func<string, bool>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_GuardScreenNavigation);
			bVar2 = ((Delegate)pSVar4 == (Delegate)__this_00);
			if (bVar2) {
				return;
			}
			pGVar3 = this.Root;
			if (pGVar3 != null) {
				pGVar1 = pGVar3._Screens_k__BackingField;
				pSVar4 = new Func<string, bool>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_GuardScreenNavigation);
				if (pGVar1 != null) {
					pGVar1._CanShowScreen_k__BackingField = pSVar4;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000A76")]
	[Address(RVA = "0x5D6F570", Offset = "0x5D6E570", VA = "0x5D6F570")]
	private bool GuardScreenNavigation(string targetScreenId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$GuardScreenNavigation): 1 lines keep C-only constructs
		byte bVar1;
		MainMenu __this_00;
		bool bVar2;
		bool bVar3;

		bVar2 = this.GuardSettingsScreenNavigation(targetScreenId);
		if (bVar2) {
			bVar3 = String.IsNullOrEmpty(targetScreenId);
			if (!bVar3) {
				bVar3 = String.Equals(targetScreenId, "main-menu", 5);
				if (!bVar3) {
					__this_00 = (MainMenu)UIManager.CurrentMenu;
					if (__this_00 != null) {
						bVar1 = (typeof(MainMenu)._2).typeHierarchyDepth;
						if ((bVar1 <= (__this_00.klass._2).typeHierarchyDepth) &&((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(MainMenu))) {
							__this_00.ClosePopups();
						}
					}
				}
			}
		}
		return bVar2;
	}

	[Token(Token = "0x6000A77")]
	[Address(RVA = "0x5D6F660", Offset = "0x5D6E660", VA = "0x5D6F660")]
	private bool GuardSettingsScreenNavigation(string targetScreenId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$GuardSettingsScreenNavigation): clean
		GisketchScreenRouter pGVar1;
		bool bVar2;
		bool bVar3;
		GisketchUIRoot pGVar4;

		bVar2 = AottgGisketchUiHost.IsInGameOverlayActive;
		if (bVar2) {
			bVar2 = String.Equals(targetScreenId, "settings", 5);
			if (bVar2) {
				this._settingsLeaveTargetScreenId = "pause";
			}
		}
		pGVar4 = this.Root;
		bVar2 = true;
		if ((pGVar4 != null) &&(pGVar4._Screens_k__BackingField != null)) {
			bVar3 = String.IsNullOrEmpty(targetScreenId);
			if (!bVar3) {
				pGVar4 = this.Root;
				if ((pGVar4 == null) ||(pGVar1 = pGVar4._Screens_k__BackingField, pGVar1 == null)) {
					throw new NullReferenceException();
				}
				bVar3 = String.Equals(pGVar1._activeId, "settings", 5);
				if (bVar3) {
					bVar3 = String.Equals(targetScreenId, "settings", 5);
					if (!bVar3) {
						pGVar4 = this.Root;
						if ((typeof(AottgSettingsDirtyRegistry)._2). cctor_finished_or_no_cctor == 0) {
						}
						AottgSettingsDirtyRegistry.SyncAll(pGVar4);
						bVar3 = AottgSettingsDirtyRegistry.HasDirty();
						if (bVar3) {
							this._settingsLeaveTargetScreenId = targetScreenId;
							bVar2 = false;
							pGVar4 = this.Root;
							AottgSettingsUnsavedChangesDialog.Open(pGVar4, 0);
						}
					}
				}
			}
		}
		return bVar2;
	}

	[Token(Token = "0x6000A78")]
	[Address(RVA = "0x5D6E920", Offset = "0x5D6D920", VA = "0x5D6E920")]
	private void ShowSettingsLeaveTarget()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$ShowSettingsLeaveTarget): 4 lines keep C-only constructs
		String* targetAddress;
		String id;
		GisketchScreenRouter __this_00;
		bool bVar1;
		String* ppSVar2;
		GisketchUIRoot pGVar3;

		targetAddress = &this._settingsLeaveTargetScreenId;
		bVar1 = String.IsNullOrEmpty(this._settingsLeaveTargetScreenId);
		ppSVar2 = targetAddress;
		if (bVar1) {
			ppSVar2 = &"main-menu";
		}
		id = *ppSVar2;
		this._settingsLeaveTargetScreenId = "main-menu";
		pGVar3 = this.Root;
		if ((pGVar3 == null) ||(__this_00 = pGVar3._Screens_k__BackingField, __this_00 == null)) {
			return;
		}
		__this_00.ShowScreen(id);
		return;
	}

	[Token(Token = "0x6000A79")]
	[Address(RVA = "0x5D6E2E0", Offset = "0x5D6D2E0", VA = "0x5D6E2E0")]
	private void UpdateSettingsState()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$UpdateSettingsState): clean
		GisketchScreenRouter pGVar1;
		bool bVar2;
		GisketchUIState pGVar3;
		String value;
		GisketchUIRoot pGVar4;

		pGVar3 = this.State;
		if (pGVar3 != null) {
			pGVar3 = this.State;
			value = AottgGameUiActions.CurrentSongText();
			if (pGVar3 == null) {
	label_05e6e494: ;
				throw new NullReferenceException();
			}
			pGVar3.Set("settings.sound.currentSong", value);
			pGVar4 = this.Root;
			AottgPlaylistActions.SyncCustomPlaylist(pGVar4);
			pGVar4 = this.Root;
			bVar2 = ((Object)pGVar4 != null);
			if (bVar2) {
				pGVar4 = this.Root;
				if (pGVar4 == null) goto label_05e6e494;
				if (pGVar4._Screens_k__BackingField != null ) {
					pGVar4 = this.Root;
					if ((pGVar4 == null) ||(pGVar1 = pGVar4._Screens_k__BackingField, pGVar1 == null)) goto label_05e6e494;
					bVar2 = String.Equals(pGVar1._activeId, "settings", 5);
					if (bVar2) {
						pGVar4 = this.Root;
						if ((typeof(AottgSettingsDirtyRegistry)._2). cctor_finished_or_no_cctor == 0) {
						}
						AottgSettingsDirtyRegistry.SyncAll(pGVar4);
						pGVar4 = this.Root;
						if ((typeof(AottgKeybindConflictRegistry)._2). cctor_finished_or_no_cctor == 0) {
						}
						AottgKeybindConflictRegistry.SyncAll(pGVar4);
						return;
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x6000A7A")]
	[Address(RVA = "0x5D6F7F0", Offset = "0x5D6E7F0", VA = "0x5D6F7F0")]
	private static string CurrentSongText()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$CurrentSongText): clean
		bool bVar1;
		String value;

		value = MusicManager.GetCurrentSong();
		bVar1 = String.IsNullOrEmpty(value);
		if (bVar1) {
			value = UIManager.GetLocaleCommon("None");
		}
		return value;
	}

	[Token(Token = "0x6000A7B")]
	[Address(RVA = "0x5D6F910", Offset = "0x5D6E910", VA = "0x5D6F910")]
	public AottgGameUiActions()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c (Gisketch.Aottg2UI.Game.AottgGameUiActions$$.ctor): clean
		this._settingsLeaveTargetScreenId = "main-menu";
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameUiActions.c.

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass4_0$$.ctor: clean
	private void c__DisplayClass4_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass5_0$$.ctor: clean
	private void c__DisplayClass5_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass36_0$$.ctor: clean
	private void c__DisplayClass36_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass90_0$$.ctor: clean
	private void c__DisplayClass90_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass91_0$$.ctor: clean
	private void c__DisplayClass91_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass92_0$$.ctor: clean
	private void c__DisplayClass92_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass93_0$$.ctor: clean
	private void c__DisplayClass93_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass98_0$$.ctor: clean
	private void c__DisplayClass98_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass99_0$$.ctor: clean
	private void c__DisplayClass99_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass116_0$$.ctor: clean
	private void c__DisplayClass116_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass117_0$$.ctor: clean
	private void c__DisplayClass117_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass118_0$$.ctor: clean
	private void c__DisplayClass118_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass119_0$$.ctor: clean
	private void c__DisplayClass119_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass120_0$$.ctor: clean
	private void c__DisplayClass120_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass129_0$$.ctor: clean
	private void c__DisplayClass129_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass133_0$$.ctor: clean
	private void c__DisplayClass133_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass156_0$$.ctor: clean
	private void c__DisplayClass156_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass157_0$$.ctor: clean
	private void c__DisplayClass157_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass174_0$$.ctor: clean
	private void c__DisplayClass174_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass175_0$$.ctor: clean
	private void c__DisplayClass175_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass200_0$$.ctor: clean
	private void c__DisplayClass200_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass201_0$$.ctor: clean
	private void c__DisplayClass201_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterAccountFormActions>b__0_0: clean
	private void RegisterAccountFormActions_b__0_0(GisketchActionContext __)
	{


		this.ShowAccountDialog("main-menu-register", true);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterAccountFormActions>b__0_1: clean
	private void RegisterAccountFormActions_b__0_1(GisketchActionContext __)
	{


		this.ShowAccountDialog("main-menu-forgot-password", true);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<Logout>b__6_0: 2 lines keep C-only constructs
	private void Logout_b__6_0(bool success, String error)
	{
		String content;
		String icon;
		int variant;
		undefined7 in_register_00000031;
		MethodInfo method_00;

		method_00 = (MethodInfo)CONCAT71(in_register_00000031, success);
		this.EndAccountOperation();
		this.RefreshAccountState();
		if (success) {
			content = Aottg2GisketchLocale.Text("MainMenu.Account.LoggedOutSuccess");
			variant = 4;
			icon = "checkmark";
		}
		else {
			content = AottgGameUiActions.ErrorText(error);
			variant = 0;
			icon = "exclamation";
		}
		this.AccountToast(variant, icon, "MainMenu.Account.Logout", content, "account.logout");
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RefreshAccount>b__7_0: 2 lines keep C-only constructs
	private void RefreshAccount_b__7_0(bool success, String error)
	{
		String content;
		String icon;
		int variant;
		undefined7 in_register_00000031;
		MethodInfo method_00;

		method_00 = (MethodInfo)CONCAT71(in_register_00000031, success);
		this.EndAccountOperation();
		this.RefreshAccountState();
		if (success) {
			content = Aottg2GisketchLocale.Text("MainMenu.Account.Refreshed");
			variant = 4;
			icon = "checkmark";
		}
		else {
			content = AottgGameUiActions.ErrorText(error);
			variant = 0;
			icon = "exclamation";
		}
		this.AccountToast(variant, icon, "Common.Refresh", content, "account.refresh");
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<GoOnline>b__11_0: 2 lines keep C-only constructs
	private void GoOnline_b__11_0(bool success, String error)
	{
		String content;
		String icon;
		int variant;
		undefined7 in_register_00000031;
		MethodInfo method_00;

		method_00 = (MethodInfo)CONCAT71(in_register_00000031, success);
		this.EndAccountOperation();
		this.RefreshAccountState();
		if (success) {
			content = Aottg2GisketchLocale.Text("MainMenu.Account.OnlineRestored");
			variant = 4;
			icon = "checkmark";
		}
		else {
			content = AottgGameUiActions.ErrorText(error);
			variant = 0;
			icon = "exclamation";
		}
		this.AccountToast(variant, icon, "MainMenu.Account.GoOnline", content, "account.goOnline");
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterAccountActions>b__28_0: clean
	private void RegisterAccountActions_b__28_0(GisketchActionContext __)
	{


		this.ShowAccountDialog("main-menu-login", false);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterAccountActions>b__28_1: clean
	private void RegisterAccountActions_b__28_1(GisketchActionContext __)
	{


		this.LoginWithOAuth("discord");
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterAccountActions>b__28_2: clean
	private void RegisterAccountActions_b__28_2(GisketchActionContext __)
	{


		this.LoginWithOAuth("google");
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<StartAccountActions>b__31_0: 2 lines keep C-only constructs
	private void StartAccountActions_b__31_0(bool success, String error)
	{
		String content;
		undefined7 in_register_00000031;
		MethodInfo method_00;

		method_00 = (MethodInfo)CONCAT71(in_register_00000031, success);
		if (success) {
			this._authMethodsUnavailable = false;
			this.RefreshAccountState();
			return;
		}
		this._authMethodsUnavailable = true;
		this.RefreshAccountState();
		content = AottgGameUiActions.ErrorText(error);
		this.AccountToast(1, "warning", "MainMenu.Account.SignIn", content, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RefreshAuthMethodsForDialog>b__34_0: 2 lines keep C-only constructs
	private void RefreshAuthMethodsForDialog_b__34_0(bool success, String error)
	{
		String content;
		undefined7 in_register_00000031;
		MethodInfo method_00;

		method_00 = (MethodInfo)CONCAT71(in_register_00000031, success);
		if (success) {
			this._authMethodsUnavailable = false;
			this.RefreshAccountState();
			return;
		}
		this._authMethodsUnavailable = true;
		this.RefreshAccountState();
		content = AottgGameUiActions.ErrorText(error);
		this.AccountToast(1, "warning", "MainMenu.Account.SignIn", content, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<LoginWithOAuth>b__37_0: 2 lines keep C-only constructs
	private void LoginWithOAuth_b__37_0(bool success, String error)
	{
		String content;
		String icon;
		int variant;
		undefined7 in_register_00000031;
		MethodInfo method_00;

		method_00 = (MethodInfo)CONCAT71(in_register_00000031, success);
		this.EndAccountOperation();
		this.RefreshAccountState();
		if (success) {
			this.CloseTopOverlay();
			content = Aottg2GisketchLocale.Text("MainMenu.Account.SignedIn");
			variant = 4;
			icon = "checkmark";
		}
		else {
			content = AottgGameUiActions.ErrorText(error);
			variant = 0;
			icon = "exclamation";
		}
		this.AccountToast(variant, icon, "MainMenu.Account.SignIn", content, "account.login");
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<FetchEntry>b__59_0: clean
	private void FetchEntry_b__59_0(ApplicationManagers_Changelog_AottgChangelogResult_ChangelogEntryResponse__o result)
	{


		this.ApplyEntryResult(result, 1);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterChangelogActions>b__70_0: clean
	private void RegisterChangelogActions_b__70_0(GisketchActionContext __)
	{
		GisketchOverlayManager __this_00;
		GisketchUIRoot pGVar1;

		pGVar1 = this.Root;
		if ((pGVar1 != null) &&(__this_00 = pGVar1._Overlays_k__BackingField, __this_00 != null)) {
			__this_00.ShowDialog("help-updates", true);
		}
		this.RefreshLatestVersion(false);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterChangelogActions>b__70_1: clean
	private void RegisterChangelogActions_b__70_1(GisketchActionContext __)
	{


		this.RefreshLatestVersion(true);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterChangelogActions>b__70_2: clean
	private void RegisterChangelogActions_b__70_2(GisketchActionContext __)
	{
		this.OpenLatestChangelog(__);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterChangelogActions>b__70_3: clean
	private void RegisterChangelogActions_b__70_3(GisketchActionContext __)
	{
		this.OpenOutdatedLatestChangelog(__);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterChangelogActions>b__70_5: clean
	private void RegisterChangelogActions_b__70_5(GisketchActionContext __)
	{
		this.RetryReader(__);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterChangelogActions>b__70_6: clean
	private void RegisterChangelogActions_b__70_6(GisketchActionContext __)
	{
		uint uVar1;
		ChangelogSummaryResponse pAVar2;

		if (Il2CppMethodInitialized_075486bc == false) {
			Il2CppMethodInitialized_075486bc = true;
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgChangelogDialogState)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pAVar2 = AottgChangelogDialogState.PreviousSummary;
		}
		else {
			pAVar2 = AottgChangelogDialogState.PreviousSummary;
		}
		if (pAVar2 == null) {
			return;
		}
		this.FetchEntry(pAVar2._Id_k__BackingField) ;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterChangelogActions>b__70_7: clean
	private void RegisterChangelogActions_b__70_7(GisketchActionContext __)
	{
		this.OpenNextChangelog(__);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterCreditsActions>b__83_0: 1 lines keep C-only constructs
	private void RegisterCreditsActions_b__83_0(GisketchActionContext __)
	{
		Action<AottgCreditsResult> __this_00;

		__this_00 = new Action<AottgCreditsResult>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_ApplyCreditsResult);
		AottgCreditsService.GetCredits(__this_00, true);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterGameCreateActions>b__89_2: clean
	private void RegisterGameCreateActions_b__89_2(GisketchActionContext __)
	{
		this.NavigateGameCreateRoot(__);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterGameCreateActions>b__89_3: clean
	private void RegisterGameCreateActions_b__89_3(GisketchActionContext __)
	{
		this.NavigateGameCreateCategory(__);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterGameCreateActions>b__89_4: clean
	private void RegisterGameCreateActions_b__89_4(GisketchActionContext __)
	{
		this.NavigateGameCreateSubcategory(__);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterGameCreateActions>b__89_5: clean
	private void RegisterGameCreateActions_b__89_5(GisketchActionContext __)
	{
		uint uVar1;
		GisketchUIRoot root;

		if (Il2CppMethodInitialized_0754875a == false) {
			Il2CppMethodInitialized_0754875a = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			AottgGameCreateSession.OpenRoomSettings();
		}
		else {
			AottgGameCreateSession.OpenRoomSettings();
		}
		root = this.Root;
		if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
			AottgGameCreateScreen.Refresh(root);
			return;
		}
		AottgGameCreateScreen.Refresh(root);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterGameCreateActions>b__89_6: clean
	private void RegisterGameCreateActions_b__89_6(GisketchActionContext __)
	{
		uint uVar1;
		GisketchUIRoot root;

		if (Il2CppMethodInitialized_0754875b == false) {
			Il2CppMethodInitialized_0754875b = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			AottgGameCreateSession.OpenExperiences();
		}
		else {
			AottgGameCreateSession.OpenExperiences();
		}
		root = this.Root;
		if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
			AottgGameCreateScreen.Refresh(root);
			return;
		}
		AottgGameCreateScreen.Refresh(root);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterGameCreateActions>b__89_7: clean
	private void RegisterGameCreateActions_b__89_7(GisketchActionContext __)
	{
		uint uVar1;
		GisketchUIRoot root;

		if (Il2CppMethodInitialized_0754875c == false) {
			Il2CppMethodInitialized_0754875c = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			AottgGameCreateSession.SelectSandbox();
		}
		else {
			AottgGameCreateSession.SelectSandbox();
		}
		root = this.Root;
		if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
			AottgGameCreateScreen.Refresh(root);
			return;
		}
		AottgGameCreateScreen.Refresh(root);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterGameCreateActions>b__89_8: clean
	private void RegisterGameCreateActions_b__89_8(GisketchActionContext __)
	{
		uint uVar1;
		GisketchUIRoot root;

		if (Il2CppMethodInitialized_0754875d == false) {
			Il2CppMethodInitialized_0754875d = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			AottgGameCreateSession.OpenFavorites();
		}
		else {
			AottgGameCreateSession.OpenFavorites();
		}
		root = this.Root;
		if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
			AottgGameCreateScreen.Refresh(root);
			return;
		}
		AottgGameCreateScreen.Refresh(root);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterGameCreateActions>b__89_9: clean
	private void RegisterGameCreateActions_b__89_9(GisketchActionContext context)
	{


		AottgGameUiActions.OpenGameCreateSelector(this, context, true);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterGameCreateActions>b__89_10: clean
	private void RegisterGameCreateActions_b__89_10(GisketchActionContext context)
	{


		AottgGameUiActions.OpenGameCreateSelector(this, context, false);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterGameCreateActions>b__89_11: clean
	private void RegisterGameCreateActions_b__89_11(GisketchActionContext __)
	{
		this.OpenGameCreateImport(__);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterGameCreateActions>b__89_17: clean
	private void RegisterGameCreateActions_b__89_17(GisketchActionContext context)
	{


		this.OpenCustomContentManager(context, 0);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterGameCreateActions>b__89_18: clean
	private void RegisterGameCreateActions_b__89_18(GisketchActionContext context)
	{


		this.OpenCustomContentManager(context, 1);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterGameCreateActions>b__89_19: clean
	private void RegisterGameCreateActions_b__89_19(GisketchActionContext context)
	{


		this.OpenCustomContentManager(context, 2);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterGameCreateActions>b__89_20: clean
	private void RegisterGameCreateActions_b__89_20(GisketchActionContext __)
	{


		this.ImportCustomContent(0);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterGameCreateActions>b__89_21: 1 lines keep C-only constructs
	private void RegisterGameCreateActions_b__89_21(GisketchActionContext __)
	{
		Action<T1, T2> __this_00;
		Action<T1, T2> __this_01;

		__this_01 = __this_00;
		__this_00 = new Action<AottgGameUiActions.CustomContentType, string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_ModifyCustomContent);
		__this_01.SelectCustomContent(0, (Action<AottgGameUiActions.CustomContentType, string>)__this_00);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterGameCreateActions>b__89_22: 1 lines keep C-only constructs
	private void RegisterGameCreateActions_b__89_22(GisketchActionContext __)
	{
		Action<T1, T2> __this_00;
		Action<T1, T2> __this_01;

		__this_01 = __this_00;
		__this_00 = new Action<AottgGameUiActions.CustomContentType, string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_DeleteCustomContent);
		__this_01.SelectCustomContent(0, (Action<AottgGameUiActions.CustomContentType, string>)__this_00);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterGameCreateActions>b__89_23: clean
	private void RegisterGameCreateActions_b__89_23(GisketchActionContext __)
	{


		this.ImportCustomContent(1);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterGameCreateActions>b__89_24: 1 lines keep C-only constructs
	private void RegisterGameCreateActions_b__89_24(GisketchActionContext __)
	{
		Action<T1, T2> __this_00;
		Action<T1, T2> __this_01;

		__this_01 = __this_00;
		__this_00 = new Action<AottgGameUiActions.CustomContentType, string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_ModifyCustomContent);
		__this_01.SelectCustomContent(1, (Action<AottgGameUiActions.CustomContentType, string>)__this_00);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterGameCreateActions>b__89_25: 1 lines keep C-only constructs
	private void RegisterGameCreateActions_b__89_25(GisketchActionContext __)
	{
		Action<T1, T2> __this_00;
		Action<T1, T2> __this_01;

		__this_01 = __this_00;
		__this_00 = new Action<AottgGameUiActions.CustomContentType, string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_DeleteCustomContent);
		__this_01.SelectCustomContent(1, (Action<AottgGameUiActions.CustomContentType, string>)__this_00);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterGameCreateActions>b__89_26: clean
	private void RegisterGameCreateActions_b__89_26(GisketchActionContext __)
	{


		this.ImportCustomContent(2);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterGameCreateActions>b__89_27: 1 lines keep C-only constructs
	private void RegisterGameCreateActions_b__89_27(GisketchActionContext __)
	{
		Action<T1, T2> __this_00;
		Action<T1, T2> __this_01;

		__this_01 = __this_00;
		__this_00 = new Action<AottgGameUiActions.CustomContentType, string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_ModifyCustomContent);
		__this_01.SelectCustomContent(2, (Action<AottgGameUiActions.CustomContentType, string>)__this_00);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterGameCreateActions>b__89_28: 1 lines keep C-only constructs
	private void RegisterGameCreateActions_b__89_28(GisketchActionContext __)
	{
		Action<T1, T2> __this_00;
		Action<T1, T2> __this_01;

		__this_01 = __this_00;
		__this_00 = new Action<AottgGameUiActions.CustomContentType, string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_DeleteCustomContent);
		__this_01.SelectCustomContent(2, (Action<AottgGameUiActions.CustomContentType, string>)__this_00);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterGameCreateActions>b__89_29: clean
	private void RegisterGameCreateActions_b__89_29(GisketchActionContext __)
	{
		this.BackFromGameCreate(__);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterGameCreateActions>b__89_30: clean
	private void RegisterGameCreateActions_b__89_30(GisketchActionContext __)
	{
		this.StartCreatedGame(__);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterGameCreateActions>b__89_31: clean
	private void RegisterGameCreateActions_b__89_31(GisketchActionContext __)
	{
		this.RestartCreatedGame(__);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterGameCreateActions>b__89_32: clean
	private void RegisterGameCreateActions_b__89_32(GisketchActionContext __)
	{
		this.SaveForNextRestart(__);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterMultiplayerActions>b__133_1: clean
	private void RegisterMultiplayerActions_b__133_1(GisketchActionContext __)
	{


		this.LeaveMultiplayer("main-menu");
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterMultiplayerActions>b__133_2: clean
	private void RegisterMultiplayerActions_b__133_2(GisketchActionContext __)
	{


		this.LeaveMultiplayer("server-select");
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterPauseActions>b__143_0: clean
	private void RegisterPauseActions_b__143_0(GisketchActionContext __)
	{


		this.OpenSettingsScreen("pause");
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterMainActions>b__195_1: clean
	private void RegisterMainActions_b__195_1(GisketchActionContext __)
	{
		this.OpenProfileScreen(__);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterMainActions>b__195_2: clean
	private void RegisterMainActions_b__195_2(GisketchActionContext __)
	{


		this.OpenSettingsScreen("main-menu");
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterMainActions>b__195_3: clean
	private void RegisterMainActions_b__195_3(GisketchActionContext __)
	{
		this.OpenCreditsScreen(__);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterSettingsActions>b__196_0: clean
	private void RegisterSettingsActions_b__196_0(GisketchActionContext __)
	{
		this.SaveSettings(__);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterSettingsActions>b__196_1: clean
	private void RegisterSettingsActions_b__196_1(GisketchActionContext __)
	{
		this.LoadSettings(__);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterSettingsActions>b__196_2: clean
	private void RegisterSettingsActions_b__196_2(GisketchActionContext __)
	{
		this.BackFromSettings(__);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterSettingsActions>b__196_3: clean
	private void RegisterSettingsActions_b__196_3(GisketchActionContext __)
	{
		GisketchOverlayManager __this_00;
		GisketchUIRoot pGVar1;

		pGVar1 = this.Root;
		if ((pGVar1 == null) ||(__this_00 = pGVar1._Overlays_k__BackingField, __this_00 == null)) {
			return;
		}
		__this_00.ShowDialog("settings-default-confirm", true);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterSettingsActions>b__196_4: clean
	private void RegisterSettingsActions_b__196_4(GisketchActionContext __)
	{
		this.ConfirmSaveBack(__);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterSettingsActions>b__196_5: clean
	private void RegisterSettingsActions_b__196_5(GisketchActionContext __)
	{
		this.ConfirmDiscardBack(__);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterSettingsActions>b__196_6: clean
	private void RegisterSettingsActions_b__196_6(GisketchActionContext __)
	{
		this.ConfirmLoad(__);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterSettingsActions>b__196_7: clean
	private void RegisterSettingsActions_b__196_7(GisketchActionContext __)
	{
		GisketchOverlayManager __this_00;
		GisketchUIRoot pGVar1;

		pGVar1 = this.Root;
		if ((pGVar1 != null) &&(__this_00 = pGVar1._Overlays_k__BackingField, __this_00 != null)) {
			__this_00.CloseTop(false);
		}
		this.ResetSettingsToDefaultConfirmed();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgGameUiActions.c();
		AottgGameUiActions.c.__9 =(AottgGameUiActions.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c$$<RegisterAccountFormActions>b__0_2: clean
	private void c__RegisterAccountFormActions_b__0_2(GisketchActionContext __)
	{
		AottgGameUiActions.OpenAccountDetails();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c$$<RegisterChangelogActions>b__70_4: clean
	private void c__RegisterChangelogActions_b__70_4(GisketchActionContext __)
	{
		AottgExternalLinks.Show("https://aottg2.itch.io/aottg2");
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c$$<RegisterGameCreateActions>b__89_0: clean
	private void c__RegisterGameCreateActions_b__89_0(GisketchActionContext __)
	{
		AottgGisketchUiHost.ShowGameCreate(false, false);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c$$<RegisterGameCreateActions>b__89_1: clean
	private void c__RegisterGameCreateActions_b__89_1(GisketchActionContext __)
	{
		AottgGisketchUiHost.ShowGameCreate(true, false);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c$$<RegisterGameCreateActions>b__89_12: clean
	private void c__RegisterGameCreateActions_b__89_12(GisketchActionContext __)
	{
		AottgGameUiActions.OpenGameCreateExport();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c$$<RegisterGameCreateActions>b__89_13: clean
	private void c__RegisterGameCreateActions_b__89_13(GisketchActionContext __)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07548768 == false) {
			Il2CppMethodInitialized_07548768 = true;
			uVar1 = (typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			AottgGameUiActions.OpenFolder(BuiltinLevels.CustomLogicFolderPath);
			return;
		}
		AottgGameUiActions.OpenFolder(*(String*)((long)(typeof(BuiltinLevels)).static_fields + 0x28));
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c$$<RegisterGameCreateActions>b__89_14: clean
	private void c__RegisterGameCreateActions_b__89_14(GisketchActionContext __)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07548769 == false) {
			Il2CppMethodInitialized_07548769 = true;
			uVar1 = (typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			AottgGameUiActions.OpenFolder(BuiltinLevels.CustomMapFolderPath);
			return;
		}
		AottgGameUiActions.OpenFolder(*(String*)((long)(typeof(BuiltinLevels)).static_fields + 0x10));
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c$$<RegisterGameCreateActions>b__89_15: clean
	private void c__RegisterGameCreateActions_b__89_15(GisketchActionContext __)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754876a == false) {
			Il2CppMethodInitialized_0754876a = true;
			uVar1 = (typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			AottgGameUiActions.OpenFolder(BuiltinLevels.CustomAddonFolderPath);
			return;
		}
		AottgGameUiActions.OpenFolder(*(String*)((long)(typeof(BuiltinLevels)).static_fields + 0x30));
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c$$<RegisterGameCreateActions>b__89_16: clean
	private void c__RegisterGameCreateActions_b__89_16(GisketchActionContext __)
	{
		AottgGameUiActions.OpenLogsFolder();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c$$<OpenAddonSelector>b__103_0: clean
	private void c__OpenAddonSelector_b__103_0(int index)
	{
		bool bVar1;

		bVar1 = AottgGameCreateSession.IsSandboxAddonSelected(index);
		AottgGameCreateSession.ToggleSandboxAddon(index, !bVar1);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c$$<BackFromGameCreate>b__105_0: clean
	private void c__BackFromGameCreate_b__105_0(MainMenu menu)
	{
		if (menu == null) {
			throw new NullReferenceException();
		}
		menu.ShowMultiplayerRoomList();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c$$<RegisterMultiplayerActions>b__133_0: clean
	private void c__RegisterMultiplayerActions_b__133_0(GisketchActionContext __)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754876c == false) {
			Il2CppMethodInitialized_0754876c = true;
			uVar1 = (typeof(AottgQuickPlay)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgQuickPlay)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			AottgQuickPlay.Begin();
			return;
		}
		AottgQuickPlay.Begin();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c$$<RegisterMultiplayerActions>b__133_3: clean
	private void c__RegisterMultiplayerActions_b__133_3(GisketchActionContext __)
	{
		AottgGisketchUiHost.ShowGameCreate(true, false);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c$$<RegisterPauseActions>b__143_1: clean
	private void c__RegisterPauseActions_b__143_1(GisketchActionContext __)
	{
		AottgGisketchUiHost.ShowGameCreate(false, true);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c$$<RegisterPauseActions>b__143_2: clean
	private void c__RegisterPauseActions_b__143_2(GisketchActionContext __)
	{
		AottgGisketchUiHost.HideInGameOverlay(true);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c$$<RegisterPauseActions>b__143_3: clean
	private void c__RegisterPauseActions_b__143_3(GisketchActionContext __)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754876d == false) {
			Il2CppMethodInitialized_0754876d = true;
			uVar1 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(InGameManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			InGameManager.LeaveRoom();
			return;
		}
		InGameManager.LeaveRoom();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c$$<RegisterViewerActions>b__185_0: 1 lines keep C-only constructs
	private void c__RegisterViewerActions_b__185_0(GisketchActionContext __)
	{
		byte bVar1;
		uint uVar2;
		ViewerMenu __this_00;

		if (Il2CppMethodInitialized_0754876e == false) {
			Il2CppMethodInitialized_0754876e = true;
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			__this_00 = (ViewerMenu)UIManager.CurrentMenu;
		}
		else {
			__this_00 = *(ViewerMenu*)((long)(typeof(UIManager)).static_fields + 0x40);
		}
		if (__this_00 != null) {
			bVar1 = ((typeof(ViewerMenu))._2).typeHierarchyDepth;
			if ((bVar1 <= (__this_00.klass._2).typeHierarchyDepth) &&((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(ViewerMenu))) {
				__this_00.Step(-1);
				return;
			}
		}
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c$$<RegisterViewerActions>b__185_1: 1 lines keep C-only constructs
	private void c__RegisterViewerActions_b__185_1(GisketchActionContext __)
	{
		byte bVar1;
		uint uVar2;
		ViewerMenu __this_00;

		if (Il2CppMethodInitialized_0754876f == false) {
			Il2CppMethodInitialized_0754876f = true;
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			__this_00 = (ViewerMenu)UIManager.CurrentMenu;
		}
		else {
			__this_00 = *(ViewerMenu*)((long)(typeof(UIManager)).static_fields + 0x40);
		}
		if (__this_00 != null) {
			bVar1 = ((typeof(ViewerMenu))._2).typeHierarchyDepth;
			if ((bVar1 <= (__this_00.klass._2).typeHierarchyDepth) &&((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(ViewerMenu))) {
				__this_00.Step(1);
				return;
			}
		}
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c$$<RegisterViewerActions>b__185_2: 1 lines keep C-only constructs
	private void c__RegisterViewerActions_b__185_2(GisketchActionContext __)
	{
		byte bVar1;
		uint uVar2;
		SnapshotViewerMenu __this_00;

		if (Il2CppMethodInitialized_07548770 == false) {
			Il2CppMethodInitialized_07548770 = true;
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			__this_00 = (SnapshotViewerMenu)UIManager.CurrentMenu;
		}
		else {
			__this_00 = *(SnapshotViewerMenu*)((long)(typeof(UIManager)).static_fields + 0x40);
		}
		if (__this_00 != null) {
			bVar1 = ((typeof(SnapshotViewerMenu))._2).typeHierarchyDepth;
			if ((bVar1 <= (__this_00.klass._2).typeHierarchyDepth) &&((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(SnapshotViewerMenu))) {
				__this_00.Save();
				return;
			}
		}
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c$$<RegisterViewerActions>b__185_3: clean
	private void c__RegisterViewerActions_b__185_3(GisketchActionContext __)
	{
		SceneLoader.LoadScene(1);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c$$<RegisterMainActions>b__195_0: clean
	private void c__RegisterMainActions_b__195_0(GisketchActionContext __)
	{
		AottgGisketchUiHost.ShowGameCreate(false, false);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c$$<RegisterMainActions>b__195_4: clean
	private void c__RegisterMainActions_b__195_4(GisketchActionContext __)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07548771 == false) {
			Il2CppMethodInitialized_07548771 = true;
			uVar1 = (typeof(Application)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Application)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			Application.Quit();
			return;
		}
		Application.Quit();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass116_0$$<ImportCustomContent>b__0: 7 lines keep C-only constructs
	private void c__DisplayClass116_0__ImportCustomContent_b__0()
	{
		BaseMenu pUVar1;
		NewImportPopup __this_00;
		StringSetting pSVar2;
		AottgGameUiActions __this_01;
		bool bVar3;
		AottgGameUiActions.c__DisplayClass116_1 __this_02;
		String* ppSVar4;
		List<string> source;
		Func<string, bool> __this_03;
		String pSVar5;
		GisketchUIRoot root;
		AottgGameUiActions.c__DisplayClass116_1 targetAddress;
		String pSStack_38;

		pSStack_38 = null;
		__this_02 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameUiActions.c__DisplayClass116_1));
		__this_02 = new Object();
		pUVar1 = UIManager.CurrentMenu;
		if ((((pUVar1 == null) ||(__this_00 = pUVar1.NewImportPopup, __this_00 == null)) ||(pSVar2 = __this_00.FileName, pSVar2 == null)) ||(__this_02 == null)) goto label_05e713e6;
		targetAddress = &__this_02.fields;
		__this_02.name = pSVar2._value;
		bVar3 = String.IsNullOrWhiteSpace(__this_02.name);
		if (bVar3) {
			ppSVar4 = &"Common.EmptyName";
		}
		else {
			pSVar5 = targetAddress.name;
			bVar3 = BuiltinLevels.IsValidCustomFileName(pSVar5);
			if (bVar3) {
				source = AottgGameUiActions.GetCustomContentNames(this.type);
				__this_03 = new Func<string, bool>((object)__this_02, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c__DisplayClass116_1_ImportCustomContent_b__1);
				bVar3 = Enumerable.Any<string>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_03);
				if (!bVar3) {
					pSVar2 = __this_00.ImportSetting;
					if (pSVar2 == null) {
	label_05e713e6: ;
						throw new NullReferenceException();
					}
					bVar3 = AottgGameUiActions.TrySaveCustomContent(this.type, targetAddress.name, pSVar2._value, ref pSStack_38);
					if (bVar3) {
						__this_00.Hide();
						__this_01 = this.__4__this;
						if (__this_01 == null) goto label_05e713e6;
						if (Il2CppMethodInitialized_07548700 == false) {
							il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgGameCreateScreen)) ;
							Il2CppMethodInitialized_07548700 = true;
						}
						root = __this_01.Root;
						AottgGameCreateScreen.Refresh(root);
					}
					else {
						__this_00.ShowError(pSStack_38);
					}
					return;
				}
				ppSVar4 = &"GameCreate.Sandbox.Custom.Error.AlreadyExists";
			}
			else {
				ppSVar4 = &"Common.InvalidName";
			}
		}
		pSVar5 = Aottg2GisketchLocale.Text(*ppSVar4);
		__this_00.ShowError(pSVar5);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass116_1$$.ctor: clean
	private void c__DisplayClass116_1__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass116_1$$<ImportCustomContent>b__1: clean
	private bool c__DisplayClass116_1__ImportCustomContent_b__1(String existing)
	{
		bool bVar1;

		bVar1 = String.Equals(existing, this.name, 5);
		return bVar1;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass117_0$$<OpenCustomContentManager>b__0: clean
	private void c__DisplayClass117_0__OpenCustomContentManager_b__0()
	{
		AottgGameUiActions __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.ImportCustomContent(this.type);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass117_0$$<OpenCustomContentManager>b__1: clean
	private void c__DisplayClass117_0__OpenCustomContentManager_b__1(String name)
	{
		AottgGameUiActions __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.ModifyCustomContent(this.type, name);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass117_0$$<OpenCustomContentManager>b__2: clean
	private void c__DisplayClass117_0__OpenCustomContentManager_b__2(String name)
	{
		AottgGameUiActions __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.DeleteCustomContent(this.type, name);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass117_0$$<OpenCustomContentManager>b__3: clean
	private void c__DisplayClass117_0__OpenCustomContentManager_b__3()
	{
		String path;

		path = AottgGameUiActions.GetCustomContentFolderPath(this.type);
		AottgGameUiActions.OpenFolder(path);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass118_0$$<SelectCustomContent>b__0: clean
	private void c__DisplayClass118_0__SelectCustomContent_b__0()
	{
		int iVar1;
		Action<AottgGameUiActions.CustomContentType, string> pSVar2;
		BaseMenu pUVar3;
		SelectListPopup pUVar4;
		StringSetting pSVar5;

		pSVar2 = this.operation;
		iVar1 = this.type;
		pUVar3 = UIManager.CurrentMenu;
		if ((((pUVar3 == null) ||(pUVar4 = pUVar3.SelectListPopup, pUVar4 == null)) ||(pSVar5 = pUVar4.FinishSetting, pSVar5 == null)) ||(pSVar2 == null)) {
			throw new NullReferenceException();
		}
		(*(code)pSVar2.invoke_impl)(pSVar2.method_code,iVar1,pSVar5._value,pSVar2.method);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass119_0$$<ModifyCustomContent>b__0: clean
	private void c__DisplayClass119_0__ModifyCustomContent_b__0()
	{
		BaseMenu pUVar1;
		ImportPopup __this_00;
		StringSetting pSVar2;
		AottgGameUiActions __this_01;
		bool bVar3;
		GisketchUIRoot root;
		String pSStack_18;

		pSStack_18 = null;
		pUVar1 = UIManager.CurrentMenu;
		if (((pUVar1 != null) &&(__this_00 = pUVar1.ImportPopup, __this_00 != null)) &&(pSVar2 = __this_00.ImportSetting, pSVar2 != null)) {
			bVar3 = AottgGameUiActions.TrySaveCustomContent(this.type, this.name, pSVar2._value, ref pSStack_18);
			if (!bVar3) {
				__this_00.ShowError(pSStack_18);
				return;
			}
			__this_00.Hide();
			__this_01 = this.__4__this;
			if (__this_01 != null) {
				root = __this_01.Root;
				AottgGameCreateScreen.Refresh(root);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass120_0$$<DeleteCustomContent>b__0: clean
	private void c__DisplayClass120_0__DeleteCustomContent_b__0()
	{
		int iVar1;
		String pSVar2;
		AottgGameUiActions __this_00;
		GisketchUIRoot root;

		iVar1 = this.type;
		if (iVar1 == 2) {
			pSVar2 = this.name;
			BuiltinLevels.DeleteCustomAddon(pSVar2);
		}
		else if (iVar1 == 1) {
			pSVar2 = this.name;
			BuiltinLevels.DeleteCustomLogic(pSVar2);
		}
		else if (iVar1 == 0) {
			pSVar2 = this.name;
			BuiltinLevels.DeleteCustomMap(pSVar2);
		}
		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		root = __this_00.Root;
		AottgGameCreateScreen.Refresh(root);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass129_0$$<RegisterInGameActions>b__0: clean
	private void c__DisplayClass129_0__RegisterInGameActions_b__0(GisketchActionContext context)
	{
		AottgGameUiActions.HandleInGameAction(this.id, context);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass133_0$$<RegisterMultiplayerActions>b__4: 5 lines keep C-only constructs
	private void c__DisplayClass133_0__RegisterMultiplayerActions_b__4(GisketchActionContext __)
	{
		int iVar1;
		Il2CppClass __this_00;
		bool bVar2;
		int iVar3;
		object __this_01;
		Action<T1, T2> __this_02;

		iVar1 = this.region;
		AottgQuickPlay.Cancel();
		__this_00 = (Il2CppClass)SettingsManager.MultiplayerSettings;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_01 = new MultiplayerSettings.c__DisplayClass21_0();
		if (__this_01 == null) {
			throw new NullReferenceException();
		}
		__this_01[1].klass = __this_00;
		*(int)&__this_01[1].monitor = iVar1;
		if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
			bVar2 = AccountManager.IsLoggedIn;
		}
		else {
			bVar2 = AccountManager.IsLoggedIn;
		}
		if (bVar2) {
			iVar3 = *(int)((long)&(__this_00._1) + 4) + 1;
			*(int)((long)&(__this_00._1) + 4) = iVar3;
			*(int)((long)&__this_01[1].monitor + 4) = iVar3;
			__this_02 = new Action<bool, string>(__this_01, (intptr_t)MethodInfo_Settings_MultiplayerSettings_c__DisplayClass21_0_ConnectServer_b__0);
			AccountManager.Refresh((Action<bool, string>)__this_02, true);
			return;
		}
		__this_00.ConnectServerInternal(*(int)&__this_01[1].monitor);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass156_0$$<RefreshRemoteProfileAndCharacter>b__0: 5 lines keep C-only constructs
	private void c__DisplayClass156_0__RefreshRemoteProfileAndCharacter_b__0(bool success, String error)
	{
		String* targetAddress;
		bool forceRefresh;
		AottgGameUiActions pGVar1;
		AottgGameUiActions.c__DisplayClass156_1 __this_00;
		String[] values;
		String pSVar2;
		long iVar3;
		MethodInfo method_00;
		Action<T1, T2> __this_01;
		bool rebuildProfileScreen;
		long iStack_38;

		iStack_38 = 0;
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameUiActions.c__DisplayClass156_1));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.CS___8__locals1 = this;
			__this_00.success = success;
			targetAddress = &__this_00.error;
			__this_00.error = error;
			values = (String[])new string[5];
			if (values != null) {
				if ((int)values.Length != 0) {
					values[0] = "profile callback success=";
					pSVar2 = (__this_00.success).ToString();
					if ((values.Length & 0xfffffffe) != 0) {
						values[1] = pSVar2;
						if (2 < (uint)values.Length) {
							values[2] = " elapsed=";
							if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0 ) {
							}
							iVar3 = GisketchUiPerfLog.NowMs();
							iStack_38 = iVar3 - this.startMs;
							pSVar2 = iStack_38.ToString();
							if ((values.Length & 0xfffffffc) != 0) {
								values[3] = pSVar2;
								if (4 < (uint)values.Length) {
									values[4] = "ms";
									method_00 = (MethodInfo)String.Concat(values);
									GisketchUiPerfLog.Mark("Profile.RefreshRemoteProfile", (String)method_00);
									pGVar1 = this.__4__this;
									if (pGVar1 != null) {
										pGVar1.RefreshAccountState();
										rebuildProfileScreen = this.rebuildProfileScreen;
										if ((this.showProfileErrorToast & ~__this_00.success & rebuildProfileScreen) != 0) {
											pGVar1 = this.__4__this;
											pSVar2 = AottgGameUiActions.ErrorText(*targetAddress);
											if (pGVar1 == null) goto label_05e71af9;
											pGVar1.ProfileToast(1, "warning", pSVar2, null);
											rebuildProfileScreen = this.rebuildProfileScreen;
										}
										pGVar1 = this.__4__this;
										forceRefresh = this.forceRefresh;
										__this_01 = new Action<bool, string>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c__DisplayClass156_1_RefreshRemoteProfileAndCharacter);
										if (pGVar1 != null) {
											pGVar1.RefreshRemoteCharacterInfo(rebuildProfileScreen, forceRefresh, (Action<bool, string>)__this_01, this.showProfileErrorToast);
											return;
										}
									}
									goto label_05e71af9;
								}
							}
						}
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
	label_05e71af9: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass156_1$$.ctor: clean
	private void c__DisplayClass156_1__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass156_1$$<RefreshRemoteProfileAndCharacter>b__1: 1 lines keep C-only constructs
	private void c__DisplayClass156_1__RefreshRemoteProfileAndCharacter_b__1(bool characterSuccess, String characterError)
	{
		AottgGameUiActions.c__DisplayClass156_0 pGVar1;
		Action<bool, string> pSVar2;
		code *vtableDispatch;

		pGVar1 = this.CS___8__locals1;
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		pSVar2 = pGVar1.onComplete;
		if (pSVar2 == null) {
			return;
		}
		if (this.success == false) {
			characterError = this.error;
			characterSuccess = false;
		}
		vtableDispatch = (code)pSVar2.invoke_impl;
		(*vtableDispatch)(pSVar2.method_code,characterSuccess,characterError,pSVar2.method, vtableDispatch);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass157_0$$<RefreshRemoteCharacterInfo>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass157_0__RefreshRemoteCharacterInfo_b__0(bool success, String error, JSONNode characterInfo)
	{
		AottgGameUiActions pGVar1;
		Action<bool, string> pSVar2;
		GisketchScreenRouter pGVar3;
		bool bVar4;
		String[] values;
		String pSVar5;
		long iVar6;
		MethodInfo pMVar7;
		GisketchUIRoot pGVar8;
		bool bStack_39;
		long iStack_38;

		bStack_39 = success;
		iStack_38 = 0;
		values = (String[])new string[5];
		if (values == null) goto label_05e71f52;
		if ((int)values.Length == 0) {
	label_05e71f4d: ;
			throw new IndexOutOfRangeException();
		}
		values[0] = "callback success=";
		pSVar5 = bStack_39.ToString();
		if ((values.Length & 0xfffffffe) == 0) goto label_05e71f4d;
		values[1] = pSVar5;
		if ((uint)values.Length < 3) goto label_05e71f4d;
		values[2] = " elapsed=";
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		iVar6 = GisketchUiPerfLog.NowMs();
		iStack_38 = iVar6 - this.startMs;
		pSVar5 = iStack_38.ToString();
		if ((values.Length & 0xfffffffc) == 0) goto label_05e71f4d;
		values[3] = pSVar5;
		if ((uint)values.Length < 5) goto label_05e71f4d;
		values[4] = "ms";
		pMVar7 = (MethodInfo)String.Concat(values);
		GisketchUiPerfLog.Mark("Profile.RefreshRemoteCharacterInfo", (String)pMVar7);
		if (bStack_39 == false) {
			if (this.showProfileErrorToast != false) {
				pGVar1 = this.__4__this;
				if (pGVar1 == null) goto label_05e71f52;
				pGVar8 = pGVar1.Root;
				pMVar7 = null;
				bVar4 = ((Object)pGVar8 != null);
				if (bVar4) {
					pGVar1 = this.__4__this;
					if (pGVar1 == null) goto label_05e71f52;
					pMVar7 = null;
					pGVar8 = pGVar1.Root;
					if (pGVar8 == null) goto label_05e71f52;
					if (pGVar8._Screens_k__BackingField !=null) {
						pGVar1 = this.__4__this;
						if (((pGVar1 == null) ||(pGVar8 = pGVar1.Root , pGVar8 == null)) ||(pGVar3 = pGVar8._Screens_k__BackingField, pGVar3 == null)) goto label_05e71f52;
						pMVar7 = (MethodInfo *)"profile";
						bVar4 = (pGVar3._activeId == "profile");
						if (bVar4) {
							pGVar1 = this.__4__this;
							pSVar5 = AottgGameUiActions.ErrorText(error);
							if (pGVar1 == null) goto label_05e71f52;
							pMVar7 = (MethodInfo)0x1;
							pGVar1.ProfileToast(1, "warning", pSVar5, null);
						}
					}
				}
			}
		}
		else {
			AottgCharacterInfoState.SetRemote(characterInfo);
			AottgCharacterInfoState.ApplyCurrentToRuntime();
			pMVar7 = null;
			InGameManager.SyncLocalProfileToPlayerInfo("profile-refresh-remote");
		}
		pGVar1 = this.__4__this;
		if (pGVar1 != null) {
			pGVar1._profileIdentityLoading = false;
			pGVar1.RefreshAccountState();
			if (this.rebuildProfileScreen == false) {
				pGVar1 = this.__4__this;
				if (pGVar1 != null) {
					pGVar1.RefreshProfileState();
					pGVar1 = this.__4__this;
					if (pGVar1 != null) {
						pGVar1.RefreshEmoteState();
						pSVar2 = this.onComplete;
						goto joined_r0x05e71f42;
					}
				}
			}
			else {
				pMVar7 = (MethodInfo *)"RebuildProfileScreen";
				GisketchUiPerfLog.Mark("Profile.RefreshRemoteCharacterInfo", "RebuildProfileScreen");
				pGVar1 = this.__4__this;
				if (pGVar1 != null) {
					pGVar1.RebuildProfileScreen();
					pSVar2 = this.onComplete;
	joined_r0x05e71f42: ;
					if (pSVar2 != null) {
						(*(code)pSVar2.invoke_impl)(pSVar2.method_code,bStack_39,error,pSVar2.method);
					}
					return;
				}
			}
		}
	label_05e71f52: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass174_0$$<SaveCharacter>b__0: clean
	private void c__DisplayClass174_0__SaveCharacter_b__0(bool success, String error, JSONNode characterInfo)
	{
		String content;
		String icon;
		int variant;
		MethodInfo pMVar1;
		AottgGameUiActions pGVar2;

		pGVar2 = this.__4__this;
		if (pGVar2 != null) {
			pMVar1 = (MethodInfo *)"profile.save";
			pGVar2.EndOperation("profile.save");
			if (success) {
				if (characterInfo == null) {
					characterInfo = this.next;
				}
				AottgCharacterInfoState.SetRemote(characterInfo);
				AottgCharacterInfoState.ApplyCurrentToRuntime();
				InGameManager.SyncLocalProfileToPlayerInfo("profile-save-remote");
				pGVar2 = this.__4__this;
				if (pGVar2 != null) {
					pGVar2.RefreshAccountState();
					pGVar2 = this.__4__this;
					if (pGVar2 != null) {
						pGVar2.CloseTopOverlay();
						pGVar2 = this.__4__this;
						if (pGVar2 != null) {
							pGVar2.RebuildProfileScreen();
							pGVar2 = this.__4__this;
							content = Aottg2GisketchLocale.Text("MainMenu.Profile.CharacterSaved");
							if (pGVar2 != null) {
								variant = 4;
								icon = "checkmark";
								goto label_05e720e6;
							}
						}
					}
				}
			}
			else {
				pGVar2 = this.__4__this;
				content = AottgGameUiActions.ErrorText(error);
				if (pGVar2 != null) {
					variant = 0;
					icon = "exclamation";
	label_05e720e6: ;
					pGVar2.ProfileToast(variant, icon, content, "profile.save");
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass175_0$$<SaveProfile>b__0: clean
	private void c__DisplayClass175_0__SaveProfile_b__0(bool success, String error)
	{
		ProfileSettings pSVar1;
		StringSetting __this_00;
		String pSVar2;
		String icon;
		int variant;
		MethodInfo method_00;
		AottgGameUiActions pGVar3;

		pGVar3 = this.__4__this;
		if (pGVar3 != null) {
			method_00 = (MethodInfo *)"profile.save";
			pGVar3.EndOperation("profile.save");
			if (success) {
				pSVar2 = this.bio;
				if ((pSVar2 != null) &&(pSVar1 = SettingsManager.ProfileSettings, pSVar1 != null)) {
					__this_00 = pSVar1.About;
					if (__this_00 == null) goto label_05e722c2;
					__this_00.Value = (object)pSVar2;
					pSVar1.Save();
				}
				pGVar3 = this.__4__this;
				if (pGVar3 != null) {
					pGVar3.RefreshAccountState();
					pGVar3 = this.__4__this;
					if (pGVar3 != null) {
						pGVar3.CloseTopOverlay();
						pGVar3 = this.__4__this;
						if (pGVar3 != null) {
							pGVar3.RebuildProfileScreen();
							pGVar3 = this.__4__this;
							pSVar2 = Aottg2GisketchLocale.Text("MainMenu.Profile.ProfileSaved");
							if (pGVar3 != null) {
								variant = 4;
								icon = "checkmark";
								goto label_05e722b0;
							}
						}
					}
				}
			}
			else {
				pGVar3 = this.__4__this;
				if (pGVar3 != null) {
					pGVar3.RefreshAccountState();
					pGVar3 = this.__4__this;
					pSVar2 = AottgGameUiActions.ErrorText(error);
					if (pGVar3 != null) {
						variant = 0;
						icon = "exclamation";
	label_05e722b0: ;
						pGVar3.ProfileToast(variant, icon, pSVar2, "profile.save");
						return;
					}
				}
			}
		}
	label_05e722c2: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass200_0$$<RegisterLegacyMain>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass200_0__RegisterLegacyMain_b__0(GisketchActionContext __)
	{
		Action<MainMenu> __this_00;

		__this_00 = this.__9__1;
		if (__this_00 == null) {
			__this_00 = new Action<MainMenu>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameUiActions_c__DisplayClass200_0_RegisterLegacyMain_b__1);
			this.__9__1 = __this_00;
		}
		AottgGameUiActions.WithMainMenu(__this_00);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass200_0$$<RegisterLegacyMain>b__1: clean
	private void c__DisplayClass200_0__RegisterLegacyMain_b__1(MainMenu menu)
	{
		if (menu == null) {
			throw new NullReferenceException();
		}
		menu.OpenIntroAction(this.legacyButtonName);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass201_0$$<RegisterDialog>b__0: clean
	private void c__DisplayClass201_0__RegisterDialog_b__0(GisketchActionContext __)
	{
		AottgGameUiActions __this_00;
		GisketchOverlayManager __this_01;
		GisketchUIRoot pGVar1;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		pGVar1 = __this_00.Root;
		if ((pGVar1 == null) ||(__this_01 = pGVar1._Overlays_k__BackingField, __this_01 == null)) {
			return;
		}
		__this_01.ShowDialog(this.dialogId, true);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass36_0$$<LoginWithEmail>b__0: 3 lines keep C-only constructs
	private void c__DisplayClass36_0__LoginWithEmail_b__0(bool success, String error)
	{
		GisketchActionContext pGVar1;
		GisketchActionContext context;
		bool bVar2;
		TMP_InputField __this_00;
		String pSVar3;
		String icon;
		int variant;
		undefined7 in_register_00000031;
		MethodInfo pMVar4;
		AottgGameUiActions pGVar5;

		pMVar4 = (MethodInfo)CONCAT71(in_register_00000031, success);
		pGVar5 = this.__4__this;
		if (pGVar5 != null) {
			pGVar5.EndAccountOperation();
			pGVar5 = this.__4__this;
			if (pGVar5 != null) {
				pGVar5.RefreshAccountState();
				pSVar3 = "account-login-password";
				if (success) {
					pGVar1 = &this.context;
					context = pGVar1.fields;
					__this_00 = AottgGameUiActions.Input((GisketchActionContext)context, pSVar3);
					pMVar4 = null;
					bVar2 = ((Object)__this_00 != null);
					if (bVar2) {
						if (__this_00 == null) goto label_05e725bb;
						pMVar4 = (MethodInfo)**(ulong*)(g_data_07556758 + 0xb8);
						__this_00.text = (String)pMVar4;
					}
					pGVar5 = this.__4__this;
					if (pGVar5 != null) {
						pGVar5.CloseTopOverlay();
						pGVar5 = this.__4__this;
						pSVar3 = Aottg2GisketchLocale.Text("MainMenu.Account.SignedIn");
						if (pGVar5 != null) {
							variant = 4;
							icon = "checkmark";
							goto label_05e725aa;
						}
					}
				}
				else {
					pGVar5 = this.__4__this;
					pSVar3 = AottgGameUiActions.ErrorText(error);
					if (pGVar5 != null) {
						variant = 0;
						icon = "exclamation";
	label_05e725aa: ;
						pGVar5.AccountToast(variant, icon, "MainMenu.Account.SignIn", pSVar3, "account.login");
						return;
					}
				}
			}
		}
	label_05e725bb: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass4_0$$<RegisterWithEmail>b__0: 4 lines keep C-only constructs
	private void c__DisplayClass4_0__RegisterWithEmail_b__0(bool success, String error)
	{
		GisketchActionContext pGVar1;
		GisketchActionContext GVar2;
		bool bVar3;
		TMP_InputField pTVar4;
		String pSVar5;
		String* method_00;
		String icon;
		int variant;
		undefined7 in_register_00000031;
		MethodInfo pMVar6;
		AottgGameUiActions pGVar7;

		pMVar6 = (MethodInfo)CONCAT71(in_register_00000031, success);
		pGVar7 = this.__4__this;
		if (pGVar7 != null) {
			pGVar7.EndAccountOperation();
			pGVar7 = this.__4__this;
			if (pGVar7 != null) {
				pGVar7.RefreshAccountState();
				pSVar5 = "account-register-password";
				if (success) {
					GVar2 = this.context;
					pTVar4 = AottgGameUiActions.Input((GisketchActionContext)GVar2, pSVar5);
					pMVar6 = null;
					bVar3 = ((Object)pTVar4 != null);
					if (bVar3) {
						if (pTVar4 == null) goto label_05e72884;
						pMVar6 = (MethodInfo)**(ulong*)(g_data_07556758 + 0xb8);
						pTVar4.text = (String)pMVar6;
					}
					pSVar5 = "account-register-confirm-password";
					pGVar1 = &this.context;
					method_00 = &"account-register-confirm-password";
					GVar2 = pGVar1.fields;
					pTVar4 = AottgGameUiActions.Input((GisketchActionContext)GVar2, pSVar5);
					bVar3 = ((Object)pTVar4 != null);
					if (bVar3) {
						if (pTVar4 == null) goto label_05e72884;
						pTVar4.text = (String)**(ulong*)(g_data_07556758 + 0xb8);
					}
					pGVar7 = this.__4__this;
					if (pGVar7 != null) {
						pGVar7.ShowAccountDialog("main-menu-login", false);
						pGVar7 = this.__4__this;
						pSVar5 = Aottg2GisketchLocale.Text("MainMenu.Account.Created");
						if (pGVar7 != null) {
							variant = 4;
							icon = "checkmark";
							goto label_05e72873;
						}
					}
				}
				else {
					pGVar7 = this.__4__this;
					pSVar5 = AottgGameUiActions.ErrorText(error);
					if (pGVar7 != null) {
						variant = 0;
						icon = "exclamation";
	label_05e72873: ;
						pGVar7.AccountToast(variant, icon, "MainMenu.Account.CreateAccount", pSVar5, "account.register.email");
						return;
					}
				}
			}
		}
	label_05e72884: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass5_0$$<ForgotPassword>b__0: 3 lines keep C-only constructs
	private void c__DisplayClass5_0__ForgotPassword_b__0(bool success, String error)
	{
		GisketchActionContext pGVar1;
		GisketchActionContext context;
		bool bVar2;
		TMP_InputField __this_00;
		String pSVar3;
		String icon;
		int variant;
		undefined7 in_register_00000031;
		MethodInfo method_00;
		AottgGameUiActions pGVar4;

		method_00 = (MethodInfo)CONCAT71(in_register_00000031, success);
		pGVar4 = this.__4__this;
		if (pGVar4 != null) {
			pGVar4.EndAccountOperation();
			pGVar4 = this.__4__this;
			if (pGVar4 != null) {
				pGVar4.RefreshAccountState();
				pSVar3 = "account-forgot-email";
				if (success) {
					pGVar1 = &this.context;
					context = pGVar1.fields;
					__this_00 = AottgGameUiActions.Input((GisketchActionContext)context, pSVar3);
					bVar2 = ((Object)__this_00 != null);
					if (bVar2) {
						if (__this_00 == null) goto label_05e72aa3;
						__this_00.text = (String)**(ulong*)(g_data_07556758 + 0xb8);
					}
					pGVar4 = this.__4__this;
					if (pGVar4 != null) {
						pGVar4.ShowAccountDialog("main-menu-login", false);
						pGVar4 = this.__4__this;
						pSVar3 = Aottg2GisketchLocale.Text("MainMenu.Account.ResetSent");
						if (pGVar4 != null) {
							variant = 4;
							icon = "checkmark";
							goto label_05e72a92;
						}
					}
				}
				else {
					pGVar4 = this.__4__this;
					pSVar3 = AottgGameUiActions.ErrorText(error);
					if (pGVar4 != null) {
						variant = 0;
						icon = "exclamation";
	label_05e72a92: ;
						pGVar4.AccountToast(variant, icon, "MainMenu.Account.ForgotPasswordTitle", pSVar3, "account.forgotPassword");
						return;
					}
				}
			}
		}
	label_05e72aa3: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass90_0$$<SelectGameCreateCategory>b__0: clean
	private void c__DisplayClass90_0__SelectGameCreateCategory_b__0()
	{
		uint uVar1;
		String[] pSVar2;
		String category;

		pSVar2 = this.categories;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		uVar1 = this.index;
		if ((uint)pSVar2.Length <= uVar1) {
			throw new IndexOutOfRangeException();
		}
		category = pSVar2[(int)uVar1];
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			AottgGameCreateSession.SelectCategory(category);
			return;
		}
		AottgGameCreateSession.SelectCategory(category);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass91_0$$<SelectGameCreateSubcategory>b__0: clean
	private void c__DisplayClass91_0__SelectGameCreateSubcategory_b__0()
	{
		uint uVar1;
		String[] pSVar2;
		String subcategory;

		pSVar2 = this.subcategories;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		uVar1 = this.index;
		if ((uint)pSVar2.Length <= uVar1) {
			throw new IndexOutOfRangeException();
		}
		subcategory = pSVar2[(int)uVar1];
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			AottgGameCreateSession.SelectSubcategory(subcategory);
			return;
		}
		AottgGameCreateSession.SelectSubcategory(subcategory);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass92_0$$<SelectGameCreateExperience>b__0: clean
	private void c__DisplayClass92_0__SelectGameCreateExperience_b__0()
	{
		uint uVar1;
		Experience[] pMVar2;
		Experience experience;

		pMVar2 = this.experiences;
		if (pMVar2 == null) {
			throw new NullReferenceException();
		}
		uVar1 = this.index;
		if ((uint)pMVar2.Length <= uVar1) {
			throw new IndexOutOfRangeException();
		}
		experience = pMVar2[(int)uVar1];
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			AottgGameCreateSession.SelectExperience(experience);
			return;
		}
		AottgGameCreateSession.SelectExperience(experience);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass93_0$$<SelectGameCreateHierarchy>b__0: clean
	private void c__DisplayClass93_0__SelectGameCreateHierarchy_b__0()
	{
		Action pSVar1;
		AottgGameUiActions __this_00;
		GisketchUIRoot root;

		pSVar1 = this.select;
		if (pSVar1 != null) {
			(*(code)pSVar1.invoke_impl)(pSVar1.method_code);
			__this_00 = this.__4__this;
			if (__this_00 != null) {
				root = __this_00.Root;
				if ((typeof(AottgGameCreateScreen)._2).cctor_finished_or_no_cctor == 0) {
					AottgGameCreateScreen.Refresh(root);
					return;
				}
				AottgGameCreateScreen.Refresh(root);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass98_0$$<OpenGameCreateSelector>b__0: clean
	private void c__DisplayClass98_0__OpenGameCreateSelector_b__0(String value, String __)
	{
		int index;
		AottgGameUiActions __this_00;
		GisketchUIRoot root;

		index = this.officialIndex;
		AottgGameCreateSession.ChangeField(index, value);
		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		root = __this_00.Root;
		AottgGameCreateScreen.Refresh(root);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass98_0$$<OpenGameCreateSelector>b__1: clean
	private void c__DisplayClass98_0__OpenGameCreateSelector_b__1(String value, String mapCategory)
	{
		int index;
		AottgGameUiActions __this_00;
		bool bVar1;
		GisketchUIRoot root;

		index = this.sandboxIndex;
		bVar1 = AottgGameCreateSession.ChangeSandboxField(index, value, mapCategory);
		if (bVar1) {
			__this_00 = this.__4__this;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			root = __this_00.Root;
			AottgGameCreateScreen.Refresh(root);
			return;
		}
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass99_0$$<OpenGameCreateSelector>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass99_0__OpenGameCreateSelector_b__0(String value)
	{
		Action<string, string> pSVar1;
		code *vtableDispatch;

		pSVar1 = this.selected;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		(*vtableDispatch)(pSVar1.method_code,value,0,pSVar1.method,vtableDispatch) ;
		return;
	}
}
