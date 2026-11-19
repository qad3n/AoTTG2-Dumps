// ==================== AoTTG2 cross-reference ====================
// Type: UI.ScoreboardProfilePopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/ScoreboardProfilePopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardProfilePopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using Photon.Realtime;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x200086A")]
internal class ScoreboardProfilePopup : AottgScoreboardPopup
{
	[Token(Token = "0x4002A9D")]
	private const float ContentWidth = 484f;

	[Token(Token = "0x4002A9E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private ProfileSettings _profile;

	[Token(Token = "0x4002A9F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private readonly List<GameObject> _items;

	[Token(Token = "0x4002AA0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private Transform _content;

	[Token(Token = "0x17000DED")]
	protected override string DialogId
	{
		[Token(Token = "0x6005048")]
		[Address(RVA = "0x5C4A400", Offset = "0x5C49400", VA = "0x5C4A400", Slot = "62")]
		get
		{
			// Lifted from source/cpp/UI/ScoreboardProfilePopup.c (UI.ScoreboardProfilePopup$$get_DialogId): clean
			return "ingame-scoreboard-profile";
		}
	}

	[Token(Token = "0x6005049")]
	[Address(RVA = "0x5C4A430", Offset = "0x5C49430", VA = "0x5C4A430", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/ScoreboardProfilePopup.c (UI.ScoreboardProfilePopup$$Setup): clean
		GisketchView __this_00;
		GameObject __this_01;
		Transform pUVar1;

		this.Setup(parent);
		__this_00 = this._Dialog_k__BackingField;
		if (__this_00 != null) {
			__this_01 = __this_00.Find("ingame-scoreboard-profile-content");
			if (__this_01 != null) {
				pUVar1 = __this_01.transform;
				this._content = pUVar1;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600504A")]
	[Address(RVA = "0x5C4A4C0", Offset = "0x5C494C0", VA = "0x5C4A4C0")]
	public void Show(Player player)
	{
		// Lifted from source/cpp/UI/ScoreboardProfilePopup.c (UI.ScoreboardProfilePopup$$Show): 104 lines keep C-only constructs
		int piVar1;
		ProfileSettings* targetAddress;
		int length;
		uint uVar2;
		Dictionary<int, object> __this_00;
		List<GameObject> pSVar3;
		AottgInGameView __this_01;
		StringSetting pSVar4;
		GameObject[] pUVar5;
		ProfileSettings pSVar6;
		NameSetting pSVar7;
		BoolSetting pSVar8;
		ColorSetting pSVar9;
		Color255 pUVar10;
		GisketchView pGVar11;
		Object obj;
		bool bVar12;
		RawImage __this_02;
		String pSVar13;
		Texture value;
		GameObject pUVar14;
		String pSVar15;
		MethodInfo pMVar16;
		String pSVar17;
		ScrollRect __this_03;
		String* tierLabel;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dc_02;
		uint extraout_XMM0_Dc_03;
		uint extraout_XMM0_Dc_04;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		uint extraout_XMM0_Dd_02;
		uint extraout_XMM0_Dd_03;
		uint extraout_XMM0_Dd_04;
		uint uVar18;
		uint uVar19;
		Color UVar20;
		Color colorA;
		Color colorA_00;
		Color colorB;
		Color colorB_00;
		Color colorC;
		Color colorC_00;
		object local_e0;
		byte[] local_d8 = new byte[16];
		byte[] local_c0 = new byte[16];
		Object local_b0;
		byte[] local_a8 = new byte[16];
		byte[] local_98 = new byte[16];
		byte[] local_88 = new byte[8];
		Object local_78;
		byte[] local_68 = new byte[16];
		byte[] local_58 = new byte[16];
		byte[] local_48 = new byte[16];

		local_e0 = null;
		local_88 = (byte[])0x0;
		local_78 = null;
		if (player == null) {
			return;
		}
		__this_00 = (Dictionary<int, object>)InGameManager.AllPlayerInfo;
		if (__this_00 == null) goto label_05d4b347;
		bVar12 = __this_00.TryGetValue(player.actorNumber, ref local_e0);
		if (!bVar12) {
			return;
		}
		if (local_e0 == null) goto label_05d4b347;
		if (local_e0[3].klass == null) {
			return;
		}
		pSVar3 = this._items;
		if (pSVar3 == null) goto label_05d4b347;
		local_c0.GetEnumerator((List<object>)pSVar3);
		local_78 = local_b0;
		local_88 = (byte[])local_c0._0_8_;
		local_c0._0_8_ = null;
		local_c0._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_88;
		while (true) {
			bVar12 = local_88.MoveNext();
			obj = local_78;
			if (!(bVar12)) break;
			if (local_78 == null) {
				throw new NullReferenceException();
			}
			local_78.SetActive(false);
			Object.Destroy(obj);
		}
		local_88.Dispose();
		pSVar3 = this._items;
		if (pSVar3 == null) goto label_05d4b347;
		piVar1 = &pSVar3._version;
		*piVar1 = *piVar1 + 1;
		length = pSVar3._size;
		pSVar3._size = 0;
		if (0 < length) {
			Array.Clear((Array)pSVar3._items, 0, length);
		}
		if (local_e0 == null) goto label_05d4b347;
		targetAddress = &this._profile;
		this._profile = (ProfileSettings)local_e0[3].klass;
		__this_01 = this._View_k__BackingField;
		if (__this_01 == null) goto label_05d4b347;
		uVar18 = 0;
		uVar19 = 0;
		__this_02 = __this_01.RawImage(this._content, 256.0, 256.0);
		if ((*targetAddress == null) ||(pSVar4 = ((*targetAddress).fields).ProfileIcon, pSVar4 == null)) goto label_05d4b347;
		pSVar15 = ResourcePaths.UI;
		pSVar13 = pSVar4._value;
		pSVar13 = UIManager.GetProfileIcon(pSVar13);
		pSVar13 = String.Concat("Icons/Profile/", pSVar13);
		value = (Texture)ResourceManager.LoadAsset(pSVar15, pSVar13, true, false);
		if (__this_02 == null) goto label_05d4b347;
		if ((value != null) &&(value.klass != (Texture)typeof(Texture2D))) {
			throw new InvalidCastException();
		}
		__this_02.texture = value;
		pSVar3 = this._items;
		pUVar14 = __this_02.gameObject;
		pMVar16 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
		if (pSVar3 == null) goto label_05d4b347;
		piVar1 = &pSVar3._version;
		*piVar1 = *piVar1 + 1;
		pUVar5 = pSVar3._items;
		if (pUVar5 == null) goto label_05d4b347;
		uVar2 = pSVar3._size;
		if (uVar2 < (uint)pUVar5.Length) {
			pSVar3._size = uVar2 + 1;
			pUVar5[(int)uVar2] = pUVar14;
		}
		else {
			pSVar3.AddWithResize((object)pUVar14);
		}
		pSVar6 = *targetAddress;
		if ((((pSVar6 == null) ||(pSVar7 = pSVar6.Name, pSVar7 == null)) ||(pSVar8 = pSVar6.NameEffectEnabled, pSVar8 == null)) ||(((pSVar4 = pSVar6.NameEffect, pSVar4 == null ||(pSVar9 = pSVar6.NameEffectColorA, pSVar9 == null)) ||(pUVar10 = pSVar9._value, pUVar10 == null)))) goto label_05d4b347;
		pSVar15 = pSVar7._value;
		bVar12 = pSVar8._value;
		pSVar13 = pSVar4._value;
		UVar20 = pUVar10.ToColor();
		if ((*targetAddress == null) ||(pSVar9 = ((*targetAddress).fields).NameEffectColorB, pSVar9 == null)) goto label_05d4b347;
		local_a8._8_4_ = uVar18;
		local_a8._0_8_ = UVar20._8_8_;
		local_a8._12_4_ = uVar19;
		local_98._8_4_ = extraout_XMM0_Dc;
		local_98._0_8_ = UVar20._0_8_;
		local_98._12_4_ = extraout_XMM0_Dd;
		pUVar10 = pSVar9._value;
		if (pUVar10 == null) goto label_05d4b347;
		UVar20 = pUVar10.ToColor();
		if ((*targetAddress == null) ||(pSVar9 = ((*targetAddress).fields).NameEffectColorC, pSVar9 == null)) goto label_05d4b347;
		local_48._8_4_ = uVar18;
		local_48._0_8_ = UVar20._8_8_;
		local_48._12_4_ = uVar19;
		local_d8._8_4_ = extraout_XMM0_Dc_00;
		local_d8._0_8_ = UVar20._0_8_;
		local_d8._12_4_ = extraout_XMM0_Dd_00;
		pUVar10 = pSVar9._value;
		if (pUVar10 == null) goto label_05d4b347;
		UVar20 = pUVar10.ToColor();
		if ((*targetAddress == null) ||(pSVar9 = ((*targetAddress).fields).NameEffectColorD, pSVar9 == null)) goto label_05d4b347;
		local_68._8_4_ = uVar18;
		local_68._0_8_ = UVar20._8_8_;
		local_68._12_4_ = uVar19;
		local_58._8_4_ = extraout_XMM0_Dc_01;
		local_58._0_8_ = UVar20._0_8_;
		local_58._12_4_ = extraout_XMM0_Dd_01;
		pUVar10 = pSVar9._value;
		if (pUVar10 == null) goto label_05d4b347;
		UVar20 = pUVar10.ToColor();
		uVar18 = local_a8._8_4_;
		uVar19 = local_a8._12_4_;
		colorA.b = (float)local_a8._0_4_;
		colorA.a = (float)local_a8._4_4_;
		colorA.r = (float)local_98._0_4_;
		colorA.g = (float)local_98._4_4_;
		colorB.b = (float)local_48._0_4_;
		colorB.a = (float)local_48._4_4_;
		colorB.r = (float)local_d8._0_4_;
		colorB.g = (float)local_d8._4_4_;
		colorC.b = (float)local_68._0_4_;
		colorC.a = (float)local_68._4_4_;
		colorC.r = (float)local_58._0_4_;
		colorC.g = (float)local_58._4_4_;
		this.AddEffectRow(player, "Name", pSVar15, bVar12, pSVar13, colorA, colorB, colorC, UVar20);
		pSVar6 = this._profile;
		if ((pSVar6 == null) ||(pSVar7 = pSVar6.Guild, pSVar7 == null)) goto label_05d4b347;
		pSVar15 = pSVar7._value;
		pSVar15 = ChatFilter.FilterBadWords(pSVar15);
		pSVar15 = MiscExtensions.HexColor(pSVar15);
		if ((*targetAddress == null) ||(pSVar4 = ((*targetAddress).fields).GuildRoleSprite, pSVar4 == null)) goto label_05d4b347;
		pSVar13 = pSVar4._value;
		pMVar16 = (MethodInfo)RoleSpriteHelpers.ComposeGuildWithRoleSprite(player, pSVar15, pSVar13);
		pSVar6 = *targetAddress;
		if ((((pSVar6 == null) ||(pSVar8 = pSVar6.GuildEffectEnabled, pSVar8 == null)) ||(pSVar4 = pSVar6.GuildEffect, pSVar4 == null)) ||((pSVar9 = pSVar6.GuildEffectColorA, pSVar9 == null ||(pUVar10 = pSVar9._value, pUVar10 == null)))) goto label_05d4b347;
		bVar12 = pSVar8._value;
		pSVar15 = pSVar4._value;
		UVar20 = pUVar10.ToColor();
		if ((*targetAddress == null) ||(pSVar9 = ((*targetAddress).fields).GuildEffectColorB, pSVar9 == null)) goto label_05d4b347;
		local_a8._8_4_ = uVar18;
		local_a8._0_8_ = UVar20._8_8_;
		local_a8._12_4_ = uVar19;
		local_98._8_4_ = extraout_XMM0_Dc_02;
		local_98._0_8_ = UVar20._0_8_;
		local_98._12_4_ = extraout_XMM0_Dd_02;
		pUVar10 = pSVar9._value;
		if (pUVar10 == null) goto label_05d4b347;
		UVar20 = pUVar10.ToColor();
		if ((*targetAddress == null) ||(pSVar9 = ((*targetAddress).fields).GuildEffectColorC, pSVar9 == null)) goto label_05d4b347;
		local_48._8_4_ = uVar18;
		local_48._0_8_ = UVar20._8_8_;
		local_48._12_4_ = uVar19;
		local_d8._8_4_ = extraout_XMM0_Dc_03;
		local_d8._0_8_ = UVar20._0_8_;
		local_d8._12_4_ = extraout_XMM0_Dd_03;
		pUVar10 = pSVar9._value;
		if (pUVar10 == null) goto label_05d4b347;
		UVar20 = pUVar10.ToColor();
		if ((*targetAddress == null) ||(pSVar9 = ((*targetAddress).fields).GuildEffectColorD, pSVar9 == null)) goto label_05d4b347;
		local_68._8_4_ = uVar18;
		local_68._0_8_ = UVar20._8_8_;
		local_68._12_4_ = uVar19;
		local_58._8_4_ = extraout_XMM0_Dc_04;
		local_58._0_8_ = UVar20._0_8_;
		local_58._12_4_ = extraout_XMM0_Dd_04;
		pUVar10 = pSVar9._value;
		if (pUVar10 == null) goto label_05d4b347;
		UVar20 = pUVar10.ToColor();
		colorA_00.b = (float)local_a8._0_4_;
		colorA_00.a = (float)local_a8._4_4_;
		colorA_00.r = (float)local_98._0_4_;
		colorA_00.g = (float)local_98._4_4_;
		colorB_00.b = (float)local_48._0_4_;
		colorB_00.a = (float)local_48._4_4_;
		colorB_00.r = (float)local_d8._0_4_;
		colorB_00.g = (float)local_d8._4_4_;
		colorC_00.b = (float)local_68._0_4_;
		colorC_00.a = (float)local_68._4_4_;
		colorC_00.r = (float)local_58._0_4_;
		colorC_00.g = (float)local_58._4_4_;
		this.AddEffectRow(player, "Guild", (String)pMVar16, bVar12, pSVar15, colorA_00, colorB_00, colorC_00, UVar20);
		pSVar15 = UIManager.GetLocaleCommon("Social");
		pSVar6 = this._profile;
		if (pSVar6 == null) goto label_05d4b347;
		pSVar4 = pSVar6.Social;
		tierLabel = (String*)local_c0;
		if (pSVar4 == null) goto label_05d4b347;
		pSVar13 = ChatFilter.FilterBadWords(pSVar4._value);
		pSVar13 = MiscExtensions.HexColor(pSVar13);
		this.AddRow(pSVar15, pSVar13);
		pSVar15 = UIManager.GetLocaleCommon("About");
		pSVar6 = this._profile;
		if ((pSVar6 == null) ||(pSVar4 = pSVar6.About, pSVar4 == null)) goto label_05d4b347;
		pSVar13 = ChatFilter.FilterBadWords(pSVar4._value);
		pSVar13 = MiscExtensions.HexColor(pSVar13);
		this.AddRow(pSVar15, pSVar13);
		pSVar15 = this.GetAuthoritativeDisplayName(player);
		local_c0._0_8_ = null;
		bVar12 = PatreonHelper.TryGetRemoteTierLabel(player, tierLabel);
		if (!bVar12) {
			if (player.IsLocal != false) {
				tierLabel = (String*)local_c0;
				bVar12 = PatreonHelper.TryGetLocalTierLabel(tierLabel);
				if (bVar12) goto label_05d4ae1c;
			}
			tierLabel = &"None";
		}
	label_05d4ae1c: ;
		local_98._0_8_ = *tierLabel;
		bVar12 = (*tierLabel != "None");
		pSVar17 = "SupporterThanks";
		pSVar13 = "No";
		local_a8[0] = bVar12;
		if (bVar12) {
			pSVar13 = UIManager.GetLocale("ScoreboardPopup", "ProfilePopup", pSVar17, "", "");
			pSVar17 = ChatFilter.FilterBadWords(pSVar15);
			pSVar17 = MiscExtensions.HexColor(pSVar17);
			pSVar13 = String.Format(pSVar13, (object)pSVar17);
		}
		else {
			pSVar13 = UIManager.GetLocale("ScoreboardPopup", "ProfilePopup", pSVar13, "", "");
			pSVar13 = MiscExtensions.HexColor(pSVar13);
		}
		pSVar17 = "DisplayName";
		local_d8._0_8_ = pSVar13;
		pMVar16 = (MethodInfo *)"";
		pSVar13 = UIManager.GetLocale("ScoreboardPopup", "ProfilePopup", pSVar17, "", "");
		pSVar15 = ChatFilter.FilterBadWords(pSVar15);
		pSVar15 = MiscExtensions.HexColor(pSVar15);
		this.AddRow(pSVar13, pSVar15);
		pSVar15 = "UserId";
		pMVar16 = (MethodInfo *)"";
		pSVar15 = UIManager.GetLocale("ScoreboardPopup", "ProfilePopup", pSVar15, "", "");
		pSVar13 = this.GetDisplayUserId(player);
		pSVar13 = MiscExtensions.HexColor(pSVar13);
		this.AddRow(pSVar15, pSVar13);
		pSVar15 = "PatreonTier";
		pSVar13 = (String)local_98._0_8_;
		pMVar16 = (MethodInfo *)"";
		pSVar15 = UIManager.GetLocale("ScoreboardPopup", "ProfilePopup", pSVar15, "", "");
		if (local_a8[0] == false) {
			pSVar13 = UIManager.GetLocaleCommon("None");
		}
		pSVar13 = MiscExtensions.HexColor(pSVar13);
		this.AddRow(pSVar15, pSVar13);
		pSVar15 = "PatreonSupporter";
		pMVar16 = (MethodInfo *)"";
		pSVar15 = UIManager.GetLocale("ScoreboardPopup", "ProfilePopup", pSVar15, "", "");
		this.AddRow(pSVar15, (String)local_d8._0_8_);
		this.Show();
		pGVar11 = this._Dialog_k__BackingField;
		if (((pGVar11 != null) &&(pUVar14 = pGVar11._Root_k__BackingField, pUVar14 != null)) &&(__this_03 = pUVar14.GetComponentInChildren<ScrollRect>(), __this_03 != null)) {
			__this_03.verticalNormalizedPosition = 1.0;
			return;
		}
	label_05d4b347: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600504B")]
	[Address(RVA = "0x5C4BA70", Offset = "0x5C4AA70", VA = "0x5C4BA70")]
	private static string Locale(string item)
	{
		// Lifted from source/cpp/UI/ScoreboardProfilePopup.c (UI.ScoreboardProfilePopup$$Locale): clean
		String pSVar1;

		pSVar1 = UIManager.GetLocale("ScoreboardPopup", "ProfilePopup", item, "", "");
		return pSVar1;
	}

	[Token(Token = "0x600504C")]
	[Address(RVA = "0x5C4B6B0", Offset = "0x5C4A6B0", VA = "0x5C4B6B0")]
	private void AddRow(string label, string value)
	{
		// Lifted from source/cpp/UI/ScoreboardProfilePopup.c (UI.ScoreboardProfilePopup$$AddRow): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		AottgInGameView __this_00;
		Transform parent;
		List<GameObject> __this_01;
		GameObject[] pUVar3;
		String pSVar5;
		TMP_Text label_00;
		GameObject item;

		__this_00 = this._View_k__BackingField;
		parent = this._content;
		pSVar5 = String.Concat("_b_", label, ": </b>", value);
		if (__this_00 != null) {
			pSVar5 = __this_00.Readable(pSVar5);
			label_00 = __this_00.Text(parent, pSVar5, 484.0, 40.0, "inGameInfo");
			AottgInGameView.FitTextHeight(label_00, 40.0);
			if (label_00 != null) {
				__this_01 = this._items;
				item = label_00.gameObject;
				if (__this_01 != null) {
					piVar1 = &__this_01._version;
					*piVar1 = *piVar1 + 1;
					pUVar3 = __this_01._items;
					if (pUVar3 != null) {
						uVar2 = __this_01._size;
						if (uVar2 < (uint)pUVar3.Length) {
							__this_01._size = uVar2 + 1;
							pUVar3[(int)uVar2] = item;
							return;
						}
						__this_01.AddWithResize((object)item);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600504D")]
	[Address(RVA = "0x5C4B840", Offset = "0x5C4A840", VA = "0x5C4B840")]
	private string GetAuthoritativeDisplayName(Player player)
	{
		// Lifted from source/cpp/UI/ScoreboardProfilePopup.c (UI.ScoreboardProfilePopup$$GetAuthoritativeDisplayName): clean
		ProfileSettings pSVar1;
		NameSetting pSVar2;
		bool bVar3;
		String pSVar4;
		String local_18;

		local_18 = null;
		if (player != null) {
			bVar3 = PatreonHelper.TryGetRemoteDisplayName(player, ref local_18);
			if (bVar3) {
				return local_18;
			}
			bVar3 = String.IsNullOrEmpty(player.nickName);
			if (!bVar3) {
				return player.nickName;
			}
		}
		pSVar1 = this._profile;
		if (pSVar1 != null) {
			pSVar2 = pSVar1.Name;
			if (pSVar2 != null) {
				bVar3 = String.IsNullOrEmpty(pSVar2._value);
				if (bVar3) goto label_05d4b8e7;
				pSVar1 = this._profile;
				if ((pSVar1 != null) &&(pSVar2 = pSVar1.Name, pSVar2 != null)) {
					return pSVar2._value;
				}
			}
			throw new NullReferenceException();
		}
	label_05d4b8e7: ;
		pSVar4 = AccountManager.Username;
		bVar3 = String.IsNullOrEmpty(pSVar4);
		pSVar4 = "NotAvailable";
		if (bVar3) {
			pSVar4 = UIManager.GetLocale("ScoreboardPopup", "ProfilePopup", pSVar4, "", "");
			return pSVar4;
		}
		pSVar4 = AccountManager.Username;
		return pSVar4;
	}

	[Token(Token = "0x600504E")]
	[Address(RVA = "0x5C4BB00", Offset = "0x5C4AB00", VA = "0x5C4BB00")]
	private string GetDisplayUserId(Player player)
	{
		// Lifted from source/cpp/UI/ScoreboardProfilePopup.c (UI.ScoreboardProfilePopup$$GetDisplayUserId): clean
		ProfileSettings pSVar1;
		StringSetting pSVar2;
		bool bVar3;
		String pSVar4;
		String local_18;

		local_18 = null;
		if (player != null) {
			bVar3 = String.IsNullOrEmpty(player._UserId_k__BackingField);
			if (!bVar3) {
				return player._UserId_k__BackingField;
			}
			bVar3 = PatreonHelper.TryGetRemoteAccountId(player, ref local_18);
			if (bVar3) {
				return local_18;
			}
		}
		pSVar1 = this._profile;
		if ((pSVar1 != null) &&(pSVar2 = pSVar1.ID, pSVar2 != null)) {
			bVar3 = String.IsNullOrEmpty(pSVar2._value);
			if (!bVar3) {
				pSVar1 = this._profile;
				if ((pSVar1 == null) ||(pSVar2 = pSVar1.ID, pSVar2 == null)) {
					throw new NullReferenceException();
				}
				return pSVar2._value;
			}
		}
		pSVar4 = "NotAvailable";
		pSVar4 = UIManager.GetLocale("ScoreboardPopup", "ProfilePopup", pSVar4, "", "");
		return pSVar4;
	}

	[Token(Token = "0x600504F")]
	[Address(RVA = "0x5C4BA00", Offset = "0x5C4AA00", VA = "0x5C4BA00")]
	private string GetPatreonTierLabel(Player player)
	{
		// Lifted from source/cpp/UI/ScoreboardProfilePopup.c (UI.ScoreboardProfilePopup$$GetPatreonTierLabel): 3 lines keep C-only constructs
		bool bVar1;
		String* tierLabel;
		String pSStack_18;

		tierLabel = &pSStack_18;
		pSStack_18 = null;
		if (player == null) {
	label_05d4ba4e: ;
			tierLabel = &pSStack_18;
			bVar1 = PatreonHelper.TryGetLocalTierLabel(tierLabel);
			if (bVar1) goto label_05d4ba63;
		}
		else {
			bVar1 = PatreonHelper.TryGetRemoteTierLabel(player, ref pSStack_18);
			if (bVar1) goto label_05d4ba63;
			if (player.IsLocal != false) goto label_05d4ba4e;
		}
		tierLabel = &"None";
	label_05d4ba63: ;
		return *tierLabel;
	}

	[Token(Token = "0x6005050")]
	[Address(RVA = "0x5C4B3C0", Offset = "0x5C4A3C0", VA = "0x5C4B3C0")]
	private void AddEffectRow(Player player, string labelKey, string value, bool enabled, string effectName, Color colorA, Color colorB, Color colorC, Color colorD)
	{
		// Lifted from source/cpp/UI/ScoreboardProfilePopup.c (UI.ScoreboardProfilePopup$$AddEffectRow): 58 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		AottgInGameView pGVar3;
		List<GameObject> __this_00;
		GameObject[] pUVar4;
		int effect;
		bool bVar5;
		String pSVar6;
		EffectText __this_01;
		String pSVar7;
		GameObject item;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		uint in_XMM2_Dc;
		uint in_XMM2_Dd;
		uint in_XMM3_Dc;
		uint in_XMM3_Dd;
		uint in_XMM4_Dc;
		uint in_XMM4_Dd;
		uint in_XMM5_Dc;
		uint in_XMM5_Dd;
		uint in_XMM6_Dc;
		uint in_XMM6_Dd;
		uint in_XMM7_Dc;
		uint in_XMM7_Dd;
		Color colorA_00;
		Color colorB_00;
		Color colorD_00;
		Color colorC_00;
		int local_bc;
		byte[] local_b8 = new byte[16];
		byte[] local_a8 = new byte[16];
		byte[] local_98 = new byte[16];
		byte[] local_88 = new byte[16];
		byte[] local_78 = new byte[16];
		byte[] local_68 = new byte[16];
		byte[] local_58 = new byte[16];
		byte[] local_48 = new byte[16];

		local_48._8_4_ = in_XMM7_Dc;
		local_48._0_8_ = colorD._8_8_;
		local_48._12_4_ = in_XMM7_Dd;
		local_58._8_4_ = in_XMM6_Dc;
		local_58._0_8_ = colorD._0_8_;
		local_58._12_4_ = in_XMM6_Dd;
		local_68._8_4_ = in_XMM5_Dc;
		local_68._0_8_ = colorC._8_8_;
		local_68._12_4_ = in_XMM5_Dd;
		local_78._8_4_ = in_XMM4_Dc;
		local_78._0_8_ = colorC._0_8_;
		local_78._12_4_ = in_XMM4_Dd;
		local_88._8_4_ = in_XMM3_Dc;
		local_88._0_8_ = colorB._8_8_;
		local_88._12_4_ = in_XMM3_Dd;
		local_98._8_4_ = in_XMM2_Dc;
		local_98._0_8_ = colorB._0_8_;
		local_98._12_4_ = in_XMM2_Dd;
		local_a8._8_4_ = in_XMM1_Dc;
		local_a8._0_8_ = colorA._8_8_;
		local_a8._12_4_ = in_XMM1_Dd;
		local_b8._8_4_ = in_XMM0_Dc;
		local_b8._0_8_ = colorA._0_8_;
		local_b8._12_4_ = in_XMM0_Dd;
		local_bc = 0;
		pSVar6 = ChatFilter.FilterBadWords(value);
		pSVar6 = MiscExtensions.HexColor(pSVar6);
		if (((enabled) &&(bVar5 = PatreonHelper.HasNameEffectAccess(player))) &&(bVar5 = NameEffectPresets.TryResolve(effectName, ref local_bc))) {
			pGVar3 = this._View_k__BackingField;
			if (pGVar3 != null) {
				__this_01 = pGVar3.PlayerName(this._content, 484.0);
				pGVar3 = this._View_k__BackingField;
				pSVar7 = UIManager.GetLocaleCommon(labelKey);
				effect = local_bc;
				colorA_00.b = (float)local_a8._0_4_;
				colorA_00.a = (float)local_a8._4_4_;
				colorA_00.r = (float)local_b8._0_4_;
				colorA_00.g = (float)local_b8._4_4_;
				colorB_00.b = (float)local_88._0_4_;
				colorB_00.a = (float)local_88._4_4_;
				colorB_00.r = (float)local_98._0_4_;
				colorB_00.g = (float)local_98._4_4_;
				colorD_00.b = (float)local_48._0_4_;
				colorD_00.a = (float)local_48._4_4_;
				colorD_00.r = (float)local_58._0_4_;
				colorD_00.g = (float)local_58._4_4_;
				colorC_00.b = (float)local_68._0_4_;
				colorC_00.a = (float)local_68._4_4_;
				colorC_00.r = (float)local_78._0_4_;
				colorC_00.g = (float)local_78._4_4_;
				pSVar6 = EffectText.Compose(pSVar6, effect, colorA_00, colorB_00, colorC_00, colorD_00);
				pSVar6 = String.Concat("_b_", pSVar7, ": </b>", pSVar6);
				if ((pGVar3 != null) &&(pSVar6 = pGVar3.Readable(pSVar6), __this_01 != null)) {
					__this_01.text = pSVar6;
					__this_00 = this._items;
					item = __this_01.gameObject;
					if (__this_00 != null) {
						piVar1 = &__this_00._version;
						*piVar1 = *piVar1 + 1;
						pUVar4 = __this_00._items;
						if (pUVar4 != null) {
							uVar2 = __this_00._size;
							if (uVar2 < (uint)pUVar4.Length) {
								__this_00._size = uVar2 + 1;
								pUVar4[(int)uVar2] = item;
								return;
							}
							__this_00.AddWithResize((object)item);
							return;
						}
					}
				}
			}
			throw new NullReferenceException();
		}
		pSVar7 = UIManager.GetLocaleCommon(labelKey);
		this.AddRow(pSVar7, pSVar6);
		return;
	}

	[Token(Token = "0x6005051")]
	[Address(RVA = "0x5C4BC70", Offset = "0x5C4AC70", VA = "0x5C4BC70")]
	public ScoreboardProfilePopup()
	{
		// Lifted from source/cpp/UI/ScoreboardProfilePopup.c (UI.ScoreboardProfilePopup$$.ctor): clean
		List<GameObject> __this_00;

		__this_00 = new List<GameObject>();
		this._items = __this_00;
		base();
		return;
	}
}
