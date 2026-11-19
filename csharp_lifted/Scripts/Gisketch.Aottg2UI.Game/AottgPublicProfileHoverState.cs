// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverState.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using ApplicationManagers.PublicProfiles;
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000339")]
internal static class AottgPublicProfileHoverState
{
	[Token(Token = "0x600143A")]
	[Address(RVA = "0x580D720", Offset = "0x580C720", VA = "0x580D720")]
	public static GameObject ShowLoading(GisketchUIRoot root, string accountId, GameObject anchor)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverState.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$ShowLoading): 2 lines keep C-only constructs
		GisketchUIState pGVar1;
		GisketchOverlayManager __this;
		bool bVar2;
		AottgProfilePreset[] pGVar3;
		String pSVar4;
		GameObject pUVar5;
		String* method_00;
		String* method_01;

		bVar2 = ((Object)root == null);
		if (bVar2) {
			return null;
		}
		if (root != null) {
			pGVar1 = root._State_k__BackingField;
			if (pGVar1 == null) {
				return null;
			}
			if (root._Overlays_k__BackingField == null ) {
				return null;
			}
			pGVar1.Set("publicProfile.hover.accountId", accountId);
			pGVar1 = root._State_k__BackingField;
			if (pGVar1 != null) {
				pGVar1.SetBool("publicProfile.hover.loading", true);
				pGVar1 = root._State_k__BackingField;
				if (pGVar1 != null) {
					pGVar1.SetBool("publicProfile.hover.ready", false) ;
					pGVar1 = root._State_k__BackingField;
					if (pGVar1 != null) {
						pGVar1.SetBool("publicProfile.hover.error", false);
						pGVar1 = root._State_k__BackingField;
						if (pGVar1 != null) {
							pGVar1.SetBool("publicProfile.hover.hasBio", false);
							pGVar1 = root._State_k__BackingField;
							if (pGVar1 != null) {
								pGVar1.SetBool("publicProfile.hover.hasBadges", false);
								pGVar1 = root._State_k__BackingField;
								if (pGVar1 != null) {
									pGVar1.Set("publicProfile.hover.characterName", (String)**(ulong*)(g_data_07556758 + 0xb8));
									pGVar1 = root._State_k__BackingField;
									if (pGVar1 != null) {
										pGVar1.Set("publicProfile.hover.displayName", (String)**(ulong*)(g_data_07556758 + 0xb8));
										pGVar1 = root._State_k__BackingField;
										if (pGVar1 != null) {
											pGVar1.Set("publicProfile.hover.bio", (String)**(ulong*)(g_data_07556758 + 0xb8));
											method_00 = (String*)root._State_k__BackingField;
											if ((MethodInfo)method_00 != null) {
												method_00.Set("publicProfile.hover.badgesJson", (String)**(ulong*)(g_data_07556758 + 0xb8));
												method_01 = (String*)root._State_k__BackingField;
												if (Il2CppMethodInitialized_07545649 == false) {
													method_00 = &"UI/Icons/Profile/";
													Il2CppMethodInitialized_07545649 = true;
												}
												pGVar3 = AottgProfilePresetCatalog.Avatars();
												pSVar4 = AottgProfilePresetCatalog.AllowedKey(null, pGVar3, "Gisketch1");
												pSVar4 = String.Concat("UI/Icons/Profile/", pSVar4, "Icon");
												if ((MethodInfo)method_01 != null) {
													method_01.Set("publicProfile.hover.avatarSprite", pSVar4);
													pGVar1 = root._State_k__BackingField;
													if (Il2CppMethodInitialized_0754564a == false) {
														method_01 = &"UI/Backgrounds/";
														Il2CppMethodInitialized_0754564a = true;
													}
													pGVar3 = AottgProfilePresetCatalog.Banners();
													pSVar4 = AottgProfilePresetCatalog.AllowedKey(null, pGVar3, "MainBackground2Texture");
													pSVar4 = String.Concat("UI/Backgrounds/", pSVar4) ;
													if (pGVar1 != null) {
														pGVar1.Set("publicProfile.hover.bannerSprite", pSVar4);
														pGVar1 = root._State_k__BackingField;
														if (pGVar1 != null) {
															pGVar1.Set("publicProfile.hover.errorText", (String)**(ulong*)(g_data_07556758 + 0xb8));
															__this = root._Overlays_k__BackingField;
															if (__this != null) {
																pUVar5 = __this.ShowPopover("public-profile-hover", anchor, false, 8.0);
																return pUVar5;
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

	[Token(Token = "0x600143B")]
	[Address(RVA = "0x580CDB0", Offset = "0x580BDB0", VA = "0x580CDB0")]
	public static void ShowReady(GisketchUIRoot root, string accountId, AottgPublicProfile profile)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverState.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$ShowReady): 6 lines keep C-only constructs
		GisketchUIState pGVar1;
		bool bVar2;
		String value;
		AottgProfilePreset[] pGVar3;
		MethodInfo pMVar4;
		String* ppSVar5;
		MethodInfo method_03;
		String pSVar6;
		bool local_31;
		String local_30;

		local_31 = false;
		bVar2 = AottgPublicProfileHoverState.IsActive(root, accountId);
		if ((!bVar2) || (profile == null)) {
			return;
		}
		pSVar6 = profile._Description_k__BackingField;
		if (pSVar6 == null) {
			pSVar6 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		value = AottgPublicProfileHoverState.BadgesJson(profile, ref local_31);
		if ((root != null) &&(pGVar1 = root._State_k__BackingField, pGVar1 != null)) {
			pGVar1.SetBool("publicProfile.hover.loading", false);
			pGVar1 = root._State_k__BackingField;
			if (pGVar1 != null) {
				pGVar1.SetBool("publicProfile.hover.ready", true);
				pGVar1 = root._State_k__BackingField;
				if (pGVar1 != null) {
					pGVar1.SetBool("publicProfile.hover.error", false) ;
					pGVar1 = root._State_k__BackingField;
					bVar2 = String.IsNullOrWhiteSpace(pSVar6);
					if (pGVar1 != null) {
						pGVar1.SetBool("publicProfile.hover.hasBio", !bVar2);
						pGVar1 = root._State_k__BackingField;
						if (pGVar1 != null) {
							pGVar1.SetBool("publicProfile.hover.hasBadges", local_31);
							pGVar1 = root._State_k__BackingField;
							bVar2 = String.IsNullOrWhiteSpace(profile._CharacterName_k__BackingField);
							if (pGVar1 != null) {
								pGVar1.Set("publicProfile.hover.characterName", (&profile._DisplayName_k__BackingField)[!bVar2]);
								pGVar1 = root._State_k__BackingField;
								if (pGVar1 != null) {
									pGVar1.Set("publicProfile.hover.displayName", profile._DisplayName_k__BackingField);
									pGVar1 = root._State_k__BackingField;
									if (pGVar1 != null) {
										pGVar1.Set("publicProfile.hover.bio", pSVar6);
										pMVar4 = (MethodInfo)root._State_k__BackingField;
										if (pMVar4 != null) {
											pMVar4.Set("publicProfile.hover.badgesJson", value);
											method_03 = (MethodInfo)root._State_k__BackingField;
											pSVar6 = profile._AvatarKey_k__BackingField;
											local_30 = null;
											pGVar3 = AottgProfilePresetCatalog.Avatars();
											ppSVar5 = &local_30;
											bVar2 = AottgProfilePresetCatalog.TryPresetSprite(pSVar6, pGVar3, ppSVar5);
											if (!bVar2) {
												ppSVar5 = *(String**)(g_data_07556758 + 0xb8);
											}
											if (method_03 != null) {
												pMVar4 = null;
												method_03.Set("publicProfile.hover.avatarSprite", *ppSVar5);
												pGVar1 = root._State_k__BackingField;
												pSVar6 = profile._BannerKey_k__BackingField;
												local_30 = null;
												pGVar3 = AottgProfilePresetCatalog.Banners();
												ppSVar5 = &local_30;
												bVar2 = AottgProfilePresetCatalog.TryPresetSprite(pSVar6, pGVar3, ppSVar5);
												if (!bVar2) {
													ppSVar5 = *(String**)(g_data_07556758 + 0xb8);
												}
												if (pGVar1 != null) {
													pGVar1.Set("publicProfile.hover.bannerSprite", *ppSVar5);
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x600143C")]
	[Address(RVA = "0x580D100", Offset = "0x580C100", VA = "0x580D100")]
	public static void ShowError(GisketchUIRoot root, string accountId, string error)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverState.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$ShowError): clean
		GisketchUIState pGVar1;
		bool bVar2;
		String value;
		MethodInfo pMVar3;

		bVar2 = AottgPublicProfileHoverState.IsActive(root, accountId);
		if (bVar2) {
			if ((root != null) &&(pGVar1 = root._State_k__BackingField, pGVar1 != null)) {
				pGVar1.SetBool("publicProfile.hover.loading", false);
				pGVar1 = root._State_k__BackingField;
				if (pGVar1 != null) {
					pGVar1.SetBool("publicProfile.hover.ready", false) ;
					pGVar1 = root._State_k__BackingField;
					if (pGVar1 != null) {
						pGVar1.SetBool("publicProfile.hover.error", true);
						pGVar1 = root._State_k__BackingField;
						if (pGVar1 != null) {
							pGVar1.SetBool("publicProfile.hover.hasBio", false);
							pGVar1 = root._State_k__BackingField;
							if (pGVar1 != null) {
								pGVar1.SetBool("publicProfile.hover.hasBadges", false);
								pGVar1 = root._State_k__BackingField;
								if (pGVar1 != null) {
									pGVar1.Set("publicProfile.hover.characterName", (String)**(ulong*)(g_data_07556758 + 0xb8));
									pGVar1 = root._State_k__BackingField;
									if (pGVar1 != null) {
										pMVar3 = (MethodInfo *)"publicProfile.hover.badgesJson";
										pGVar1.Set("publicProfile.hover.badgesJson", (String)**(ulong*)(g_data_07556758 + 0xb8));
										pGVar1 = root._State_k__BackingField;
										value = AottgPublicProfileHoverState.ErrorText(error);
										if (pGVar1 != null) {
											pGVar1.Set("publicProfile.hover.errorText", value);
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
		return;
	}

	[Token(Token = "0x600143D")]
	[Address(RVA = "0x580CB00", Offset = "0x580BB00", VA = "0x580CB00")]
	public static void Close(GisketchUIRoot root, string accountId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverState.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$Close): clean
		GisketchUIState __this;
		GisketchOverlayManager __this_00;
		bool bVar1;
		String a;

		bVar1 = ((Object)root == null);
		if (bVar1) {
			return;
		}
		if (root != null) {
			if (root._State_k__BackingField == null) {
				return;
			}
			if (root._Overlays_k__BackingField == null ) {
				return;
			}
			bVar1 = String.IsNullOrEmpty(accountId);
			if (!bVar1) {
				__this = root._State_k__BackingField;
				if (__this == null) goto label_0590cc06;
				a = __this.Get("publicProfile.hover.accountId", "");
				bVar1 = (a != accountId);
				if (bVar1) {
					return;
				}
			}
			__this_00 = root._Overlays_k__BackingField;
			if (__this_00 != null) {
				__this_00.ClosePopover("public-profile-hover", true);
				return;
			}
		}
	label_0590cc06: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600143E")]
	[Address(RVA = "0x5810550", Offset = "0x580F550", VA = "0x5810550")]
	private static bool IsActive(GisketchUIRoot root, string accountId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverState.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$IsActive): clean
		GisketchUIState __this;
		bool bVar1;
		String a;

		bVar1 = ((Object)root != null);
		if (bVar1) {
			if (root == null) {
				throw new NullReferenceException();
			}
			__this = root._State_k__BackingField;
			if (__this != null) {
				a = __this.Get("publicProfile.hover.accountId", "");
				bVar1 = (a == accountId);
				return bVar1;
			}
		}
		return false;
	}

	[Token(Token = "0x600143F")]
	[Address(RVA = "0x58107B0", Offset = "0x580F7B0", VA = "0x58107B0")]
	private static string ErrorText(string error)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverState.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$ErrorText): clean
		bool bVar1;
		String pSVar2;

		bVar1 = (error == "network_error");
		if (bVar1) {
			pSVar2 = Aottg2GisketchLocale.Text("MainMenu.Profile.LoadFailed");
			return pSVar2;
		}
		pSVar2 = Aottg2GisketchLocale.Text("MainMenu.Profile.Unavailable");
		return pSVar2;
	}

	[Token(Token = "0x6001440")]
	[Address(RVA = "0x5810780", Offset = "0x580F780", VA = "0x5810780")]
	private static string CharacterName(AottgPublicProfile profile)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverState.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$CharacterName): 1 lines keep C-only constructs
		bool bVar1;

		if (profile == null) {
			throw new NullReferenceException();
		}
		bVar1 = String.IsNullOrWhiteSpace(profile._CharacterName_k__BackingField);
		return (&profile._DisplayName_k__BackingField)[!bVar1];
	}

	[Token(Token = "0x6001441")]
	[Address(RVA = "0x5810610", Offset = "0x580F610", VA = "0x5810610")]
	private static string BadgesJson(AottgPublicProfile profile, out bool hasBadges)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverState.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$BadgesJson): 7 lines keep C-only constructs
		bool bVar1;
		bool bVar2;
		int iVar3;
		JSONNode a;
		JSONArray a_00;
		JSONObject __this;
		String pSVar4;
		ulong extraout_RDX;
		byte[] auVar5 = new byte[16];

		*hasBadges = false;
		if (profile != null) {
			a = AottgPublicProfileHoverState.Parse(profile._CharacterInfoJson_k__BackingField);
			bVar1 = (a != null);
			auVar5._8_8_ = 0;
			auVar5._0_8_ = extraout_RDX;
			auVar5 = auVar5 << 0x40;
			if (bVar1) {
				if (a == null) goto label_0591077a;
				auVar5 = (byte[])a.get_Item("badges");
			}
			a_00 = AottgProfileEntitlementCatalog.AllowedBadges(auVar5._0_8_, (IEnumerable<string>)profile._Roles_k__BackingField);
			__this = new JSONObject();
			if (__this != null) {
				__this.set_Item("badges", (JSONNode)a_00);
				bVar1 = false;
				bVar2 = ((JSONNode)a_00 != null);
				if (bVar2) {
					if (a_00 == null) goto label_0591077a;
					iVar3 = a_00.get_Count();
					bVar1 = 0 < iVar3;
				}
				*hasBadges = bVar1;
				return pSVar4;
			}
		}
	label_0591077a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001442")]
	[Address(RVA = "0x5810850", Offset = "0x580F850", VA = "0x5810850")]
	private static JSONNode Parse(string json)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverState.c (Gisketch.Aottg2UI.Game.AottgPublicProfileHoverState$$Parse): clean
		bool bVar1;
		JSONNode pSVar2;

		bVar1 = String.IsNullOrWhiteSpace(json);
		if (!bVar1) {
		}
		return pSVar2;
	}
}
