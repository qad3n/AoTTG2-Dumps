// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgActiveProfile
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgActiveProfile.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002E4")]
internal static class AottgActiveProfile
{
	[Token(Token = "0x170001F9")]
	public static bool UsesRemote
	{
		[Token(Token = "0x6001187")]
		[Address(RVA = "0x57D5340", Offset = "0x57D4340", VA = "0x57D5340")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgActiveProfile.c (Gisketch.Aottg2UI.Game.AottgActiveProfile$$get_UsesRemote): clean
			uint uVar1;
			bool bVar2;

			if (Il2CppMethodInitialized_0754549c == false) {
				Il2CppMethodInitialized_0754549c = true;
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return bVar2;
			}
			return bVar2;
		}
	}

	[Token(Token = "0x6001188")]
	[Address(RVA = "0x57D53A0", Offset = "0x57D43A0", VA = "0x57D53A0")]
	public static string PlayerName()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgActiveProfile.c (Gisketch.Aottg2UI.Game.AottgActiveProfile$$PlayerName): 3 lines keep C-only constructs
		ProfileSettings pSVar1;
		NameSetting pSVar2;
		bool bVar3;
		String* ppSVar4;
		String pSVar5;

		if (Il2CppMethodInitialized_0754549d == false) {
			Il2CppMethodInitialized_0754549d = true;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_058d53bd;
	label_058d542f: ;
			bVar3 = AccountManager.IsLoggedIn;
			if (bVar3) {
	label_058d543f: ;
				pSVar5 = AccountManager.Username;
				bVar3 = String.IsNullOrEmpty(pSVar5);
				if (!bVar3) {
					pSVar5 = AccountManager.Username;
					goto label_058d54fd;
				}
			}
		}
		else {
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_058d542f;
	label_058d53bd: ;
			bVar3 = AccountManager.IsLoggedIn;
			if (bVar3) goto label_058d543f;
		}
		pSVar1 = SettingsManager.ProfileSettings;
		if (pSVar1 == null) {
			ppSVar4 = *(String**)(g_data_07556758 + 0xb8);
		}
		else {
			pSVar2 = pSVar1.Name;
			if (pSVar2 == null) {
				throw new NullReferenceException();
			}
			ppSVar4 = &pSVar2._value;
		}
		pSVar5 = *ppSVar4;
		bVar3 = String.IsNullOrEmpty(pSVar5);
		if (bVar3) {
			pSVar5 = Aottg2GisketchLocale.Text("MainMenu.Profile.Guest");
			return pSVar5;
		}
	label_058d54fd: ;
		if ((typeof(MiscExtensions)._2).cctor_finished_or_no_cctor == 0) {
			pSVar5 = MiscExtensions.StripHex(pSVar5);
			return pSVar5;
		}
		pSVar5 = MiscExtensions.StripHex(pSVar5);
		return pSVar5;
	}

	[Token(Token = "0x6001189")]
	[Address(RVA = "0x57D5530", Offset = "0x57D4530", VA = "0x57D5530")]
	public static string CharacterName()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgActiveProfile.c (Gisketch.Aottg2UI.Game.AottgActiveProfile$$CharacterName): 1 lines keep C-only constructs
		bool bVar1;
		JSONNode pSVar2;
		JSONNode a;
		String pSVar3;
		String* ppSVar4;

		if (Il2CppMethodInitialized_0754549e == false) {
			ppSVar4 = &"name";
			Il2CppMethodInitialized_0754549e = true;
		}
		pSVar2 = AottgCharacterInfoState.Current();
		bVar1 = (pSVar2 != null);
		if (bVar1) {
			if (pSVar2 == null) {
	label_058d56c2: ;
				throw new NullReferenceException();
			}
			a = pSVar2.get_Item("name");
			bVar1 = (a != null);
			if (bVar1) {
				pSVar2 = pSVar2.get_Item("name");
				if (pSVar2 == null) goto label_058d56c2;
				pSVar3 = pSVar2.get_Value();
				goto label_058d5653;
			}
		}
		pSVar3 = (String)**(ulong*)(g_data_07556758 + 0xb8);
	label_058d5653: ;
		bVar1 = String.IsNullOrWhiteSpace(pSVar3);
		if (bVar1) {
			pSVar3 = Aottg2GisketchLocale.Text("MainMenu.Profile.Guest");
			return pSVar3;
		}
		pSVar3 = MiscExtensions.StripHex(pSVar3);
		return pSVar3;
	}

	[Token(Token = "0x600118A")]
	[Address(RVA = "0x57D57B0", Offset = "0x57D47B0", VA = "0x57D57B0")]
	public static string AccountName()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgActiveProfile.c (Gisketch.Aottg2UI.Game.AottgActiveProfile$$AccountName): clean
		uint uVar1;
		bool bVar2;
		String pSVar3;

		if (Il2CppMethodInitialized_0754549f == false) {
			Il2CppMethodInitialized_0754549f = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			bVar2 = AccountManager.IsLoggedIn;
		}
		else {
			bVar2 = AccountManager.IsLoggedIn;
		}
		if (bVar2) {
			if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0) {
			}
			pSVar3 = AccountManager.Username;
			bVar2 = String.IsNullOrEmpty(pSVar3);
			if (!bVar2) {
				pSVar3 = AccountManager.Username;
				if ((typeof(MiscExtensions)._2).cctor_finished_or_no_cctor == 0) {
					pSVar3 = MiscExtensions.StripHex(pSVar3);
					return pSVar3;
				}
				pSVar3 = MiscExtensions.StripHex(pSVar3);
				return pSVar3;
			}
		}
		pSVar3 = Aottg2GisketchLocale.Text("MainMenu.Profile.LocalProfile");
		return pSVar3;
	}

	[Token(Token = "0x600118B")]
	[Address(RVA = "0x57D58D0", Offset = "0x57D48D0", VA = "0x57D58D0")]
	public static string AuthHandle()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgActiveProfile.c (Gisketch.Aottg2UI.Game.AottgActiveProfile$$AuthHandle): clean
		uint uVar1;
		bool bVar2;
		String pSVar3;

		if (Il2CppMethodInitialized_075454a0 == false) {
			Il2CppMethodInitialized_075454a0 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			bVar2 = AccountManager.IsLoggedIn;
		}
		else {
			bVar2 = AccountManager.IsLoggedIn;
		}
		if (bVar2) {
			if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0) {
			}
			pSVar3 = AccountManager.Username;
			bVar2 = String.IsNullOrEmpty(pSVar3);
			if (!bVar2) {
				pSVar3 = AccountManager.Username;
				if ((typeof(MiscExtensions)._2).cctor_finished_or_no_cctor == 0) {
					pSVar3 = MiscExtensions.StripHex(pSVar3);
					return pSVar3;
				}
				pSVar3 = MiscExtensions.StripHex(pSVar3);
				return pSVar3;
			}
		}
		pSVar3 = Aottg2GisketchLocale.Text("MainMenu.Profile.LocalProfile");
		return pSVar3;
	}

	[Token(Token = "0x600118C")]
	[Address(RVA = "0x57D59F0", Offset = "0x57D49F0", VA = "0x57D59F0")]
	public static string AvatarKey()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgActiveProfile.c (Gisketch.Aottg2UI.Game.AottgActiveProfile$$AvatarKey): clean
		uint uVar1;
		ProfileSettings pSVar2;
		StringSetting pSVar3;
		bool bVar4;
		String pSVar5;

		if (Il2CppMethodInitialized_075454a1 == false) {
			Il2CppMethodInitialized_075454a1 = true;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_058d5ae7;
	label_058d5a15: ;
			bVar4 = AccountManager.IsLoggedIn;
		}
		else {
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_058d5a15;
	label_058d5ae7: ;
			bVar4 = AccountManager.IsLoggedIn;
		}
		if (!bVar4) {
			pSVar2 = SettingsManager.ProfileSettings;
			if (pSVar2 != null) {
				pSVar3 = pSVar2.ProfileIcon;
				if (pSVar3 == null) {
					throw new NullReferenceException();
				}
				return pSVar3._value;
			}
			goto label_058d5b28;
		}
		if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075454ea == false) goto label_058d5b42;
	label_058d5a41: ;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_075454ea != false) goto label_058d5a41;
	label_058d5b42: ;
			Il2CppMethodInitialized_075454ea = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar4 = String.IsNullOrEmpty(AccountManager. _ProfileAvatarKey_k__BackingField);
		if (!bVar4) {
			if (Il2CppMethodInitialized_075454ea == false) {
				Il2CppMethodInitialized_075454ea = true;
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = ((typeof(AccountManager))._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AccountManager._ProfileAvatarKey_k__BackingField;
			}
			return *(String*)((long)(typeof(AccountManager)).static_fields + 0x10);
		}
	label_058d5b28: ;
		return pSVar5;
	}

	[Token(Token = "0x600118D")]
	[Address(RVA = "0x57D5BD0", Offset = "0x57D4BD0", VA = "0x57D5BD0")]
	public static string BannerKey()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgActiveProfile.c (Gisketch.Aottg2UI.Game.AottgActiveProfile$$BannerKey): clean
		uint uVar1;
		ProfileSettings pSVar2;
		StringSetting pSVar3;
		bool bVar4;
		String pSVar5;

		if (Il2CppMethodInitialized_075454a2 == false) {
			Il2CppMethodInitialized_075454a2 = true;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_058d5cc7;
	label_058d5bf5: ;
			bVar4 = AccountManager.IsLoggedIn;
		}
		else {
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_058d5bf5;
	label_058d5cc7: ;
			bVar4 = AccountManager.IsLoggedIn;
		}
		if (!bVar4) {
			pSVar2 = SettingsManager.ProfileSettings;
			if (pSVar2 != null) {
				pSVar3 = pSVar2.ProfileBanner;
				if (pSVar3 == null) {
					throw new NullReferenceException();
				}
				return pSVar3._value;
			}
			goto label_058d5d08;
		}
		if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075454eb == false) goto label_058d5d22;
	label_058d5c21: ;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_075454eb != false) goto label_058d5c21;
	label_058d5d22: ;
			Il2CppMethodInitialized_075454eb = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar4 = String.IsNullOrEmpty(AccountManager. _ProfileBannerKey_k__BackingField);
		if (!bVar4) {
			if (Il2CppMethodInitialized_075454eb == false) {
				Il2CppMethodInitialized_075454eb = true;
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = ((typeof(AccountManager))._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AccountManager._ProfileBannerKey_k__BackingField;
			}
			return *(String*)((long)(typeof(AccountManager)).static_fields + 0x18);
		}
	label_058d5d08: ;
		return pSVar5;
	}

	[Token(Token = "0x600118E")]
	[Address(RVA = "0x57D5DB0", Offset = "0x57D4DB0", VA = "0x57D5DB0")]
	public static string AvatarSprite()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgActiveProfile.c (Gisketch.Aottg2UI.Game.AottgActiveProfile$$AvatarSprite): clean
		String pSVar1;

		pSVar1 = AottgActiveProfile.AvatarKey();
		pSVar1 = AottgProfilePresetCatalog.AvatarSprite(pSVar1);
		return pSVar1;
	}

	[Token(Token = "0x600118F")]
	[Address(RVA = "0x57D5DD0", Offset = "0x57D4DD0", VA = "0x57D5DD0")]
	public static string BannerSprite()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgActiveProfile.c (Gisketch.Aottg2UI.Game.AottgActiveProfile$$BannerSprite): clean
		String pSVar1;

		pSVar1 = AottgActiveProfile.BannerKey();
		pSVar1 = AottgProfilePresetCatalog.BannerSprite(pSVar1);
		return pSVar1;
	}

	[Token(Token = "0x6001190")]
	[Address(RVA = "0x57D5DF0", Offset = "0x57D4DF0", VA = "0x57D5DF0")]
	public static string Bio()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgActiveProfile.c (Gisketch.Aottg2UI.Game.AottgActiveProfile$$Bio): 4 lines keep C-only constructs
		uint uVar1;
		ProfileSettings pSVar2;
		StringSetting pSVar3;
		bool bVar4;
		String* ppSVar5;
		String pSVar6;

		if (Il2CppMethodInitialized_075454a3 == false) {
			Il2CppMethodInitialized_075454a3 = true;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_058d5e11;
	label_058d5e9f: ;
			bVar4 = AccountManager.IsLoggedIn;
			if (bVar4) goto label_058d5e20;
	label_058d5eb3: ;
			pSVar2 = SettingsManager.ProfileSettings;
			if (pSVar2 == null) {
				pSVar6 = null;
				goto label_058d5f0d;
			}
			pSVar3 = pSVar2.About;
			if (pSVar3 == null) {
				throw new NullReferenceException();
			}
			ppSVar5 = &pSVar3._value;
		}
		else {
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_058d5e9f;
	label_058d5e11: ;
			bVar4 = AccountManager.IsLoggedIn;
			if (!bVar4) goto label_058d5eb3;
	label_058d5e20: ;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
				if (g_data_075454ec != false) goto label_058d5e3d;
	label_058d5f5c: ;
				g_data_075454ec = true;
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (g_data_075454ec == false) goto label_058d5f5c;
	label_058d5e3d: ;
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			ppSVar5 = &AccountManager._ProfileDescription_k__BackingField ;
		}
		pSVar6 = *ppSVar5;
	label_058d5f0d: ;
		bVar4 = String.IsNullOrWhiteSpace(pSVar6);
		if (!bVar4) {
			return pSVar6;
		}
		pSVar6 = Aottg2GisketchLocale.Text("MainMenu.Profile.NoBio");
		return pSVar6;
	}

	[Token(Token = "0x6001191")]
	[Address(RVA = "0x57D5FA0", Offset = "0x57D4FA0", VA = "0x57D5FA0")]
	public static string LocalBio()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgActiveProfile.c (Gisketch.Aottg2UI.Game.AottgActiveProfile$$LocalBio): clean
		ProfileSettings pSVar1;
		StringSetting pSVar2;

		pSVar1 = SettingsManager.ProfileSettings;
		if (pSVar1 == null) {
			return null;
		}
		pSVar2 = pSVar1.About;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		return pSVar2._value;
	}

	[Token(Token = "0x6001192")]
	[Address(RVA = "0x57D6000", Offset = "0x57D5000", VA = "0x57D6000")]
	public static bool CanImportLocalBio()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgActiveProfile.c (Gisketch.Aottg2UI.Game.AottgActiveProfile$$CanImportLocalBio): clean
		uint uVar1;
		ProfileSettings pSVar2;
		StringSetting pSVar3;
		bool bVar4;
		String pSVar5;
		String pSVar6;

		pSVar2 = SettingsManager.ProfileSettings;
		if (pSVar2 == null) {
			pSVar5 = null;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			pSVar3 = pSVar2.About;
			if (pSVar3 == null) goto label_058d61a9;
			pSVar5 = pSVar3._value;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar4 = AccountManager.IsLoggedIn;
		if (!bVar4) {
			return false;
		}
		bVar4 = String.IsNullOrWhiteSpace(pSVar5);
		if (bVar4) {
			return false;
		}
		if (pSVar5 == null) goto label_058d61a9;
		pSVar5 = pSVar5.Trim();
		if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_075454ec != false) goto label_058d60e0;
	label_058d612f: ;
			g_data_075454ec = true;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_058d60ec;
	label_058d614e: ;
			pSVar6 = AccountManager._ProfileDescription_k__BackingField;
		}
		else {
			if (g_data_075454ec == false) goto label_058d612f;
	label_058d60e0: ;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_058d614e;
	label_058d60ec: ;
			pSVar6 = AccountManager._ProfileDescription_k__BackingField;
		}
		if ((pSVar6 != null) ||(pSVar6 = (String)**(long*)(g_data_07556758 + 0xb8), pSVar6 != null)) {
			pSVar6 = pSVar6.Trim();
			bVar4 = String.Equals(pSVar5, pSVar6, 4);
			return !bVar4;
		}
	label_058d61a9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001193")]
	[Address(RVA = "0x57D61B0", Offset = "0x57D51B0", VA = "0x57D61B0")]
	public static string[] SocialLinks()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgActiveProfile.c (Gisketch.Aottg2UI.Game.AottgActiveProfile$$SocialLinks): 5 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Dictionary<object, object> __this;
		bool bVar3;
		List<string> pSVar4;
		String[] pSVar5;
		MethodInfo pMVar6;
		System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_48;

		local_48._current.key = null;
		local_48._current.value = null;
		local_48._dictionary = null;
		local_48._version = 0;
		local_48._index = 0;
		local_48._getEnumeratorRetType = 0;
		local_48._36_4_ = 0;
		if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
			pMVar6 = null;
			bVar3 = AccountManager.IsLoggedIn;
		}
		else {
			pMVar6 = null;
			bVar3 = AccountManager.IsLoggedIn;
		}
		if (!bVar3) {
			pSVar4 = AottgActiveProfile.LocalSocialLinks();
			if (pSVar4 != null) {
				pSVar5 = (String[])pSVar4.ToArray();
				return pSVar5;
			}
			goto label_058d6462;
		}
		pSVar4 = new List<string>();
		if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_075454ed != false) goto label_058d62b0;
	label_058d6322: ;
			g_data_075454ed = true;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_058d62c0;
	label_058d6345: ;
			__this = (Dictionary<object, object>)AccountManager._ProfileSocials_k__BackingField;
		}
		else {
			if (g_data_075454ed == false) goto label_058d6322;
	label_058d62b0: ;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_058d6345;
	label_058d62c0: ;
			__this = (Dictionary<object, object>)AccountManager._ProfileSocials_k__BackingField;
		}
		if (__this != null) {
			local_48 = __this.GetEnumerator();
			if (pSVar4 == null) {
				bVar3 = local_48.MoveNext();
				if (bVar3) {
	label_058d645d: ;
					throw new NullReferenceException();
				}
			}
			else {
				while (true) {
					bVar3 = local_48.MoveNext();
					pMVar6 = MethodInfo_System_Collections_Generic_List_string_Add;
					if (!(bVar3)) break;
					piVar1 = &pSVar4._version;
					*piVar1 = *piVar1 + 1;
					pSVar5 = pSVar4._items;
					if (pSVar5 == null) goto label_058d645d;
					uVar2 = pSVar4._size;
					if (uVar2 < (uint)pSVar5.Length) {
						pSVar4._size = uVar2 + 1;
						pSVar5[(int)uVar2] = (String)local_48._current.value;
					}
					else {
						pSVar4.AddWithResize(local_48._current.value);
					}
				}
			}
			local_48.Dispose();
			if (pSVar4 != null) {
				pSVar5 = (String[])pSVar4.ToArray();
				return pSVar5;
			}
		}
	label_058d6462: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001194")]
	[Address(RVA = "0x57D64D0", Offset = "0x57D54D0", VA = "0x57D64D0")]
	public static List<string> LocalSocialLinks()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgActiveProfile.c (Gisketch.Aottg2UI.Game.AottgActiveProfile$$LocalSocialLinks): 19 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		ProfileSettings pSVar3;
		StringSetting pSVar4;
		Il2CppClass pIVar5;
		Il2CppRuntimeInterfaceOffsetPair pIVar6;
		String[] pSVar7;
		bool bVar9;
		sbyte cVar10;
		List<string> __this;
		String* ppSVar11;
		JSONNode pSVar12;
		JSONArray a;
		object pIVar13;
		VirtualInvokeData pVVar14;
		String pSVar15;
		ulong uVar16;
		long lVar17;
		object local_48;
		byte local_38;

		local_48 = null;
		__this = new List<string>();
		pSVar3 = SettingsManager.ProfileSettings;
		if (pSVar3 == null) {
			ppSVar11 = *(String**)(g_data_07556758 + 0xb8);
		}
		else {
			pSVar4 = pSVar3.SocialLinksJson;
			if (pSVar4 == null) goto label_058d6a36;
			ppSVar11 = &pSVar4._value;
		}
		pSVar15 = *ppSVar11;
		bVar9 = String.IsNullOrWhiteSpace(pSVar15);
		if (!bVar9) {
			pSVar12 = JSON.Parse(pSVar15);
			if (pSVar12 == null) {
				throw new NullReferenceException();
			}
			a = pSVar12.get_AsArray();
			bVar9 = ((JSONNode)a != null);
			if (bVar9) {
				if (a == null) {
					throw new NullReferenceException();
				}
				pIVar13 = (object)a.get_Children() ;
				if (pIVar13 == null) {
					throw new NullReferenceException();
				}
				pIVar5 = pIVar13.klass;
				uVar16 = (ulong)(pIVar5._2).interface_offsets_count;
				local_48 = pIVar13.Dispose();
				local_38 = (byte)&local_48;
	joined_r0x058d66f5: ;
				do {
					if (local_48 == null) {
						throw new NullReferenceException();
					}
					pIVar5 = local_48.klass;
					uVar16 = (ulong)(pIVar5._2).interface_offsets_count;
					cVar10 = (*pVVar14.methodPtr)();
					pIVar13 = local_48;
					if (cVar10 == false) {
						if (local_48 == null) goto label_058d694e;
						pIVar5 = local_48.klass;
						uVar16 = (ulong)(pIVar5._2).interface_offsets_count;
						if (uVar16 == 0) goto label_058d690f;
						pIVar6 = (pIVar5._1).interfaceOffsets;
						lVar17 = 0;
						goto label_058d6900;
					}
					if (local_48 == null) {
						throw new NullReferenceException();
					}
					pIVar5 = local_48.klass;
					uVar16 = (ulong)(pIVar5._2).interface_offsets_count;
					pIVar13 = pIVar13.Dispose();
					if (pIVar13 == null) {
						throw new NullReferenceException();
					}
					pSVar15 = (String)(*pIVar13.klass.vtable[9].methodPtr)(pIVar13);
					bVar9 = String.IsNullOrWhiteSpace(pSVar15);
				} while (bVar9);
				pSVar15 = (String)(*pIVar13.klass.vtable[9].methodPtr)(pIVar13,pIVar13.klass.vtable[9].method);
				if (__this != null) {
					piVar1 = &__this._version;
					*piVar1 = *piVar1 + 1;
					pSVar7 = __this._items;
					if (pSVar7 != null) {
						uVar2 = __this._size;
						if (uVar2 < (uint)pSVar7.Length) {
							__this._size = uVar2 + 1;
							pSVar7[(int)uVar2] = pSVar15;
						}
						else {
							__this.AddWithResize((object)pSVar15);
						}
						goto joined_r0x058d66f5;
					}
				}
				throw new NullReferenceException();
			}
		}
		goto label_058d694e;
		while (true) {
			lVar17 = lVar17 + 0x10;
			if (!(uVar16 * 0x10 != lVar17)) break;
	label_058d6900: ;
			if (*(IDisposable*)((long)&pIVar6.interfaceType + lVar17) == typeof(IDisposable)) {
				pVVar14 = pIVar5.vtable + *(int)((long)&pIVar6.offset + lVar17);
				goto label_058d692d;
			}
		}
	label_058d690f: ;
	label_058d692d: ;
		pIVar13.Dispose();
	label_058d694e: ;
		pSVar3 = SettingsManager.ProfileSettings;
		if (pSVar3 == null) {
			ppSVar11 = *(String**)(g_data_07556758 + 0xb8);
		}
		else {
			pSVar4 = pSVar3.Social;
			if (pSVar4 == null) goto label_058d6a36;
			ppSVar11 = &pSVar4._value;
		}
		if (__this == null) {
	label_058d6a36: ;
			throw new NullReferenceException();
		}
		if (__this._size == 0) {
			pSVar15 = *ppSVar11;
			bVar9 = String.IsNullOrWhiteSpace(pSVar15);
			if (!bVar9) {
				piVar1 = &__this._version;
				*piVar1 = *piVar1 + 1;
				pSVar7 = __this._items;
				if (pSVar7 == null) goto label_058d6a36;
				uVar2 = __this._size;
				if (uVar2 < (uint)pSVar7.Length) {
					__this._size = uVar2 + 1;
					pSVar7[(int)uVar2] = pSVar15;
				}
				else {
					__this.AddWithResize((object)pSVar15);
				}
			}
		}
		return __this;
	}

	[Token(Token = "0x6001195")]
	[Address(RVA = "0x57D6B30", Offset = "0x57D5B30", VA = "0x57D6B30")]
	public static string SerializeSocialLinks(IEnumerable<string> links)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgActiveProfile.c (Gisketch.Aottg2UI.Game.AottgActiveProfile$$SerializeSocialLinks): 7 lines keep C-only constructs
		IEnumerable<string> pSVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		Il2CppClass pIVar3;
		sbyte cVar4;
		bool bVar5;
		JSONArray __this;
		VirtualInvokeData pVVar6;
		object pIVar7;
		String pSVar8;
		JSONNode pSVar9;
		ulong uVar10;
		long lVar11;
		object local_48;
		byte local_38;

		local_48 = null;
		__this = new JSONArray();
		if (links != null) {
			pSVar1 = links.klass;
			uVar10 = (ulong)(pSVar1._2).interface_offsets_count;
			pIVar7 = links.Dispose();
			local_38 = (byte)&local_48;
			do {
				local_48 = pIVar7;
				if (pIVar7 == null) {
					throw new NullReferenceException();
				}
				pIVar3 = pIVar7.klass;
				uVar10 = (ulong)(pIVar3._2).interface_offsets_count;
				cVar4 = pIVar7.Dispose();
				pIVar7 = local_48;
				if (cVar4 == false) {
					if (local_48 == null) break;
					pIVar3 = local_48.klass;
					uVar10 = (ulong)(pIVar3._2).interface_offsets_count;
					if (uVar10 == 0) goto label_058d6e4f;
					pIVar2 = (pIVar3._1).interfaceOffsets;
					lVar11 = 0;
					goto label_058d6e40;
				}
				if (local_48 == null) {
					throw new NullReferenceException();
				}
				pIVar3 = local_48.klass;
				uVar10 = (ulong)(pIVar3._2).interface_offsets_count;
				pSVar8 = pIVar7.Dispose();
				bVar5 = String.IsNullOrWhiteSpace(pSVar8);
				pIVar7 = local_48;
				if (!bVar5) {
					if (pSVar8 == null) {
						throw new NullReferenceException();
					}
					pSVar8 = pSVar8.Trim();
					pSVar9 = ((JSONNode)pSVar8);
					if (__this == null) {
						throw new NullReferenceException();
					}
					__this.Add(pSVar9);
					pIVar7 = local_48;
				}
			} while(true);
		}
		goto label_058d6e7b;
		while (true) {
			lVar11 = lVar11 + 0x10;
			if (!(uVar10 * 0x10 != lVar11)) break;
	label_058d6e40: ;
			if (*(IDisposable*)((long)&pIVar2.interfaceType + lVar11) == typeof(IDisposable)) {
				pVVar6 = pIVar3.vtable + *(int)((long)&pIVar2.offset + lVar11);
				goto label_058d6e6d;
			}
		}
	label_058d6e4f: ;
	label_058d6e6d: ;
		pIVar7.Dispose();
	label_058d6e7b: ;
		if (__this == null) {
			throw new NullReferenceException();
		}
		pSVar8 = __this.ToString() ;
		return pSVar8;
	}
}
