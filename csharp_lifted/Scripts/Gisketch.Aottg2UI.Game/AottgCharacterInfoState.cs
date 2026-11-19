// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCharacterInfoState
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterInfoState.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using SimpleJSONFixed;
using Utility;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002EA")]
internal static class AottgCharacterInfoState
{
	[Token(Token = "0x4000EBA")]
	private const int MaxVisibleTextLength = 31;

	[Token(Token = "0x4000EBB")]
	[FieldOffset(Offset = "0x0")]
	private static JSONNode _remote;

	[Token(Token = "0x60011C1")]
	[Address(RVA = "0x57D56D0", Offset = "0x57D46D0", VA = "0x57D56D0")]
	public static JSONNode Current()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterInfoState.c (Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$Current): clean
		uint uVar1;
		bool bVar2;
		JSONNode pSVar3;
		MethodInfo method_00;

		if (Il2CppMethodInitialized_075454c6 == false) {
			Il2CppMethodInitialized_075454c6 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			method_00 = null;
			bVar2 = AccountManager.IsLoggedIn;
		}
		else {
			method_00 = null;
			bVar2 = AccountManager.IsLoggedIn;
		}
		if (bVar2) {
			method_00 = (MethodInfo)AottgCharacterInfoState._remote;
			if (((typeof(JSONNode))._2).cctor_finished_or_no_cctor == 0) {
			}
			bVar2 = ((JSONNode)method_00 != null);
			if (bVar2) {
				return AottgCharacterInfoState._remote;
			}
		}
		return pSVar3;
	}

	[Token(Token = "0x60011C2")]
	[Address(RVA = "0x57D9990", Offset = "0x57D8990", VA = "0x57D9990")]
	public static void SetRemote(JSONNode node)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterInfoState.c (Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$SetRemote): clean
		JSONNode pSVar1;

		pSVar1 = AottgCharacterInfoState.Sanitize(node);
		AottgCharacterInfoState._remote = pSVar1;
		return;
	}

	[Token(Token = "0x60011C3")]
	[Address(RVA = "0x57D9FA0", Offset = "0x57D8FA0", VA = "0x57D9FA0")]
	public static void ClearRemote()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterInfoState.c (Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ClearRemote): clean
		AottgCharacterInfoState._remote =null;
		return;
	}

	[Token(Token = "0x60011C4")]
	[Address(RVA = "0x57D9FF0", Offset = "0x57D8FF0", VA = "0x57D9FF0")]
	public static void ApplyCurrentToRuntime()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterInfoState.c (Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ApplyCurrentToRuntime): clean
		JSONNode node;

		node = AottgCharacterInfoState.Current();
		AottgCharacterInfoState.ApplyToRuntime(node, false);
		return;
	}

	[Token(Token = "0x60011C5")]
	[Address(RVA = "0x57DA330", Offset = "0x57D9330", VA = "0x57DA330")]
	public static void ApplyLocalToRuntime()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterInfoState.c (Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ApplyLocalToRuntime): clean
		JSONNode node;
		ProfileSettings method_01;

		AottgCharacterInfoState._remote =null;
		method_01 = SettingsManager.ProfileSettings;
		if (method_01 != null) {
			method_01.Load();
		}
		node = AottgCharacterInfoState.Local();
		AottgCharacterInfoState.ApplyToRuntime(node, false);
		return;
	}

	[Token(Token = "0x60011C6")]
	[Address(RVA = "0x57DA3D0", Offset = "0x57D93D0", VA = "0x57DA3D0")]
	public static void SaveLocal(JSONNode node)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterInfoState.c (Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$SaveLocal): clean


		AottgCharacterInfoState.ApplyToRuntime(node, true);
		return;
	}

	[Token(Token = "0x60011C7")]
	[Address(RVA = "0x57DA3E0", Offset = "0x57D93E0", VA = "0x57DA3E0")]
	public static JSONNode WithNameAndGuild(string name, string guild, string guildPresetId, IEnumerable<string> badges, bool nameEffectEnabled, string nameEffectType, IEnumerable<string> nameEffectColors, bool guildEffectEnabled, string guildEffectType, IEnumerable<string> guildEffectColors, string nameFont, string guildFont)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterInfoState.c (Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$WithNameAndGuild): 3 lines keep C-only constructs
		JSONNode pSVar1;
		JSONObject __this;
		JSONNode pSVar2;
		String pSVar3;
		JSONArray pSVar4;
		JSONObject pSVar5;
		MethodInfo pMVar6;
		String* method_02;
		undefined3 in_register_00000081;
		uint uVar7;

		uVar7 = CONCAT31(in_register_00000081, nameEffectEnabled);
		if (Il2CppMethodInitialized_075454ca == false) {
			method_02 = &"version";
			Il2CppMethodInitialized_075454ca = true;
		}
		pSVar1 = AottgCharacterInfoState.Current();
		__this = new JSONObject();
		pSVar2 = ((JSONNode)1);
		if (__this != null) {
			__this.set_Item("version", pSVar2);
			pSVar3 = AottgCharacterInfoState.TrimColoredText(name, 0x1f);
			pSVar2 = ((JSONNode)pSVar3);
			__this.set_Item("name", pSVar2);
			pSVar3 = AottgCharacterInfoState.TrimColoredText(guild, 0x1f);
			pSVar2 = ((JSONNode)pSVar3);
			__this.set_Item("guild", pSVar2);
			pSVar2 = ((JSONNode)guildPresetId);
			pMVar6 = (MethodInfo *)"guildPresetId";
			__this.set_Item("guildPresetId", pSVar2);
			pSVar4 = AottgCharacterInfoState.BadgesArray(badges);
			__this.set_Item("badges", (JSONNode)pSVar4);
			if (pSVar1 != null) {
				pSVar2 = pSVar1.get_Item("nameEffect");
				pSVar5 = AottgCharacterInfoState.EffectWith(pSVar2, nameEffectEnabled, nameEffectType, nameEffectColors);
				__this.set_Item("nameEffect", (JSONNode)pSVar5);
				pSVar1 = pSVar1.get_Item("guildEffect");
				pSVar5 = AottgCharacterInfoState.EffectWith(pSVar1, guildEffectEnabled, guildEffectType, guildEffectColors);
				__this.set_Item("guildEffect", (JSONNode)pSVar5);
				pSVar3 = NameFontCatalog.Normalize(nameFont);
				pSVar1 = ((JSONNode)pSVar3);
				__this.set_Item("nameFont", pSVar1);
				pSVar3 = NameFontCatalog.Normalize(guildFont);
				pSVar1 = ((JSONNode)pSVar3);
				pMVar6 = (MethodInfo *)"guildFont";
				__this.set_Item("guildFont", pSVar1);
				pSVar1 = AottgCharacterInfoState.Sanitize((JSONNode)__this);
				return pSVar1;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60011C8")]
	[Address(RVA = "0x57D99E0", Offset = "0x57D89E0", VA = "0x57D99E0")]
	public static JSONNode Sanitize(JSONNode node)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterInfoState.c (Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$Sanitize): 9 lines keep C-only constructs
		ProfileSettings pSVar1;
		NameSetting pSVar2;
		StringSetting pSVar3;
		bool bVar4;
		JSONObject __this;
		JSONNode pSVar5;
		String pSVar6;
		JSONArray pSVar7;
		JSONObject pSVar8;
		String* ppSVar9;
		MethodInfo pMVar10;

		__this = new JSONObject();
		pSVar5 = ((JSONNode)1);
		if (__this == null) {
	label_058d9f8e: ;
			throw new NullReferenceException();
		}
		__this.set_Item("version", pSVar5);
		pSVar1 = SettingsManager.ProfileSettings;
		if (pSVar1 == null) {
			ppSVar9 = &"GUEST";
		}
		else {
			pSVar2 = pSVar1.Name;
			if (pSVar2 == null) goto label_058d9f8e;
			ppSVar9 = &pSVar2._value;
		}
		pSVar6 = AottgCharacterInfoState.String(node, "name", *ppSVar9) ;
		pSVar6 = AottgCharacterInfoState.TrimColoredText(pSVar6, 0x1f);
		pSVar5 = ((JSONNode)pSVar6);
		__this.set_Item("name", pSVar5);
		pSVar1 = SettingsManager.ProfileSettings;
		if (pSVar1 == null) {
			ppSVar9 = *(String**)(g_data_07556758 + 0xb8);
		}
		else {
			pSVar2 = pSVar1.Guild;
			if (pSVar2 == null) goto label_058d9f8e;
			ppSVar9 = &pSVar2._value;
		}
		pSVar6 = AottgCharacterInfoState.StringAllowEmpty(node, "guild", *ppSVar9);
		pSVar6 = AottgCharacterInfoState.TrimColoredText(pSVar6, 0x1f);
		pSVar5 = ((JSONNode)pSVar6);
		__this.set_Item("guild", pSVar5);
		pSVar6 = AottgCharacterInfoState.OptionalString(node, "guildPresetId", 0x40);
		pSVar5 = AottgProfileEntitlementCatalog.AllowedPresetGuild(pSVar6) ;
		__this.set_Item("guildPresetId", pSVar5);
		bVar4 = (node != null);
		pSVar6 = "badges";
		if (bVar4) {
			if (node == null) goto label_058d9f8e;
			pMVar10 = (MethodInfo *)"badges";
			pSVar5 = node.get_Item("badges");
		}
		else {
			pSVar5 = null;
		}
		pSVar7 = AottgCharacterInfoState.Badges(pSVar5);
		pSVar7 = AottgProfileEntitlementCatalog.AllowedBadges((JSONNode)pSVar7);
		__this.set_Item(pSVar6, (JSONNode)pSVar7);
		bVar4 = (node != null);
		pSVar6 = "nameEffect";
		if (bVar4) {
			if (node == null) goto label_058d9f8e;
			pMVar10 = (MethodInfo *)"nameEffect";
			pSVar8 = (JSONObject)node.get_Item("nameEffect");
		}
		else {
			pSVar8 = AottgCharacterInfoState.LegacyEffect(true);
		}
		pSVar8 = AottgCharacterInfoState.Effect((JSONNode)pSVar8);
		__this.set_Item(pSVar6, (JSONNode)pSVar8);
		bVar4 = (node != null);
		pSVar6 = "guildEffect";
		if (bVar4) {
			if (node == null) goto label_058d9f8e;
			pMVar10 = (MethodInfo *)"guildEffect";
			pSVar8 = (JSONObject)node.get_Item("guildEffect");
		}
		else {
			pSVar8 = AottgCharacterInfoState.LegacyEffect(false);
		}
		pSVar8 = AottgCharacterInfoState.Effect((JSONNode)pSVar8);
		__this.set_Item(pSVar6, (JSONNode)pSVar8) ;
		pSVar1 = SettingsManager.ProfileSettings;
		if (pSVar1 == null) {
			ppSVar9 = &"Normal";
		}
		else {
			pSVar3 = pSVar1.NameFont;
			if (pSVar3 == null) goto label_058d9f8e;
			ppSVar9 = &pSVar3._value;
		}
		pSVar6 = AottgCharacterInfoState.String(node, "nameFont", *ppSVar9) ;
		pSVar6 = NameFontCatalog.Normalize(pSVar6);
		pSVar5 = ((JSONNode)pSVar6);
		__this.set_Item("nameFont", pSVar5);
		pSVar1 = SettingsManager.ProfileSettings;
		if (pSVar1 == null) {
			ppSVar9 = &"Normal";
		}
		else {
			pSVar3 = pSVar1.GuildFont;
			if (pSVar3 == null) goto label_058d9f8e;
			ppSVar9 = &pSVar3._value;
		}
		pSVar6 = AottgCharacterInfoState.String(node, "guildFont", *ppSVar9) ;
		pSVar6 = NameFontCatalog.Normalize(pSVar6);
		pSVar5 = ((JSONNode)pSVar6);
		__this.set_Item("guildFont", pSVar5);
		return (JSONNode)__this;
	}

	[Token(Token = "0x60011C9")]
	[Address(RVA = "0x57DC2E0", Offset = "0x57DB2E0", VA = "0x57DC2E0")]
	public static string DisplayGuild(JSONNode info)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterInfoState.c (Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$DisplayGuild): clean
		bool bVar1;
		JSONNode pSVar2;
		String pSVar3;

		bVar1 = (info != null);
		if (bVar1) {
			if (info == null) goto label_058dc4de;
			pSVar2 = info.get_Item("guildPresetId");
			bVar1 = (pSVar2 != null);
			if (!bVar1) goto label_058dc3ce;
			pSVar2 = info.get_Item("guildPresetId");
			if (pSVar2 == null) goto label_058dc4de;
			pSVar3 = pSVar2.get_Value();
		}
		else {
	label_058dc3ce: ;
			pSVar3 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		bVar1 = String.IsNullOrWhiteSpace(pSVar3);
		if (!bVar1) {
			pSVar3 = AottgProfileEntitlementCatalog.PresetGuildLabel(pSVar3) ;
			return pSVar3;
		}
		bVar1 = (info != null);
		if (bVar1) {
			if (info != null) {
				pSVar2 = info.get_Item("guild");
				bVar1 = (pSVar2 != null);
				if (!bVar1) goto label_058dc4ba;
				pSVar2 = info.get_Item("guild");
				if (pSVar2 != null) {
					pSVar3 = pSVar2.get_Value();
					return pSVar3;
				}
			}
	label_058dc4de: ;
			throw new NullReferenceException();
		}
	label_058dc4ba: ;
		return (String)**(ulong*)(g_data_07556758 + 0xb8);
	}

	[Token(Token = "0x60011CA")]
	[Address(RVA = "0x57D9880", Offset = "0x57D8880", VA = "0x57D9880")]
	private static JSONNode Local()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterInfoState.c (Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$Local): 3 lines keep C-only constructs
		ProfileSettings pSVar1;
		StringSetting pSVar2;
		String value;
		bool bVar3;
		String* ppSVar4;
		JSONNode pSVar5;

		pSVar1 = SettingsManager.ProfileSettings;
		if (pSVar1 == null) {
			ppSVar4 = *(String**)(g_data_07556758 + 0xb8);
		}
		else {
			pSVar2 = pSVar1.CharacterInfoJson;
			if (pSVar2 == null) {
				throw new NullReferenceException();
			}
			ppSVar4 = &pSVar2._value;
		}
		value = *ppSVar4;
		bVar3 = String.IsNullOrWhiteSpace(value);
		if (bVar3) {
			pSVar5 = AottgCharacterInfoState.Sanitize(null);
			return pSVar5;
		}
		pSVar5 = JSON.Parse(value);
		pSVar5 = AottgCharacterInfoState.Sanitize(pSVar5);
		return pSVar5;
	}

	[Token(Token = "0x60011CB")]
	[Address(RVA = "0x57DADD0", Offset = "0x57D9DD0", VA = "0x57DADD0")]
	private static string LocalName()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterInfoState.c (Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$LocalName): clean
		ProfileSettings pSVar1;
		NameSetting pSVar2;

		pSVar1 = SettingsManager.ProfileSettings;
		if (pSVar1 == null) {
			return "GUEST";
		}
		pSVar2 = pSVar1.Name;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		return pSVar2._value;
	}

	[Token(Token = "0x60011CC")]
	[Address(RVA = "0x57DAF80", Offset = "0x57D9F80", VA = "0x57DAF80")]
	private static string LocalGuild()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterInfoState.c (Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$LocalGuild): clean
		ProfileSettings pSVar1;
		NameSetting pSVar2;

		pSVar1 = SettingsManager.ProfileSettings;
		if (pSVar1 == null) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		pSVar2 = pSVar1.Guild;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		return pSVar2._value;
	}

	[Token(Token = "0x60011CD")]
	[Address(RVA = "0x57DC1E0", Offset = "0x57DB1E0", VA = "0x57DC1E0")]
	private static string LocalNameFont()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterInfoState.c (Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$LocalNameFont): clean
		ProfileSettings pSVar1;
		StringSetting pSVar2;

		pSVar1 = SettingsManager.ProfileSettings;
		if (pSVar1 == null) {
			return "Normal";
		}
		pSVar2 = pSVar1.NameFont;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		return pSVar2._value;
	}

	[Token(Token = "0x60011CE")]
	[Address(RVA = "0x57DC260", Offset = "0x57DB260", VA = "0x57DC260")]
	private static string LocalGuildFont()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterInfoState.c (Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$LocalGuildFont): clean
		ProfileSettings pSVar1;
		StringSetting pSVar2;

		pSVar1 = SettingsManager.ProfileSettings;
		if (pSVar1 == null) {
			return "Normal";
		}
		pSVar2 = pSVar1.GuildFont;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		return pSVar2._value;
	}

	[Token(Token = "0x60011CF")]
	[Address(RVA = "0x57DAE50", Offset = "0x57D9E50", VA = "0x57DAE50")]
	private static string String(JSONNode node, string key, string fallback)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterInfoState.c (Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$String): clean
		bool bVar1;
		JSONNode pSVar2;
		String pSVar3;

		bVar1 = (node == null);
		if (bVar1) {
			return fallback;
		}
		if (node != null) {
			pSVar2 = node.get_Item(key) ;
			bVar1 = (pSVar2 == null);
			if (bVar1) {
				return fallback;
			}
			pSVar2 = node.get_Item(key) ;
			if (pSVar2 != null) {
				pSVar3 = pSVar2.get_Value();
				bVar1 = String.IsNullOrWhiteSpace(pSVar3);
				if (bVar1) {
					return fallback;
				}
				pSVar2 = node.get_Item(key);
				if (pSVar2 != null) {
					pSVar3 = pSVar2.get_Value();
					return pSVar3;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60011D0")]
	[Address(RVA = "0x57DB000", Offset = "0x57DA000", VA = "0x57DB000")]
	private static string StringAllowEmpty(JSONNode node, string key, string fallback)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterInfoState.c (Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$StringAllowEmpty): clean
		bool bVar1;
		JSONNode pSVar2;

		bVar1 = (node == null);
		if (!bVar1) {
			if (node == null) {
	label_058db0fa: ;
				throw new NullReferenceException();
			}
			pSVar2 = node.get_Item(key) ;
			bVar1 = (pSVar2 == null);
			if (!bVar1) {
				pSVar2 = node.get_Item(key);
				if (pSVar2 == null) goto label_058db0fa;
				fallback = pSVar2.get_Value();
				if (fallback == null) {
					fallback = (String)**(ulong*)(g_data_07556758 + 0xb8);
				}
			}
		}
		return fallback;
	}

	[Token(Token = "0x60011D1")]
	[Address(RVA = "0x57DB100", Offset = "0x57DA100", VA = "0x57DB100")]
	private static string OptionalString(JSONNode node, string key, int max)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterInfoState.c (Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$OptionalString): clean
		bool bVar1;
		JSONNode pSVar2;
		String pSVar3;

		bVar1 = (node == null);
		if (bVar1) {
	label_058db1e0: ;
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (node != null) {
			pSVar2 = node.get_Item(key) ;
			bVar1 = (pSVar2 == null);
			if (bVar1) goto label_058db1e0;
			pSVar2 = node.get_Item(key) ;
			if (pSVar2 != null) {
				pSVar3 = pSVar2.get_Value();
				bVar1 = String.IsNullOrWhiteSpace(pSVar3);
				if (bVar1) goto label_058db1e0;
				pSVar2 = node.get_Item(key);
				if ((pSVar2 != null) &&((pSVar3 = pSVar2.get_Value(), pSVar3 != null ||(pSVar3 = (String)**(long*)(g_data_07556758 + 0xb8), pSVar3 != null)))) {
					if (max < pSVar3._stringLength) {
						pSVar3 = pSVar3.Substring(0, max);
						return pSVar3;
					}
					return pSVar3;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60011D2")]
	[Address(RVA = "0x57DB280", Offset = "0x57DA280", VA = "0x57DB280")]
	private static JSONArray Badges(JSONNode node)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterInfoState.c (Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$Badges): 8 lines keep C-only constructs
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		bool bVar3;
		sbyte cVar4;
		int iVar5;
		JSONArray __this;
		object pIVar6;
		VirtualInvokeData pVVar7;
		String __this_00;
		JSONNode pSVar8;
		ulong uVar9;
		long lVar10;
		object local_48;
		byte local_38;

		local_48 = null;
		__this = new JSONArray();
		bVar3 = (node == null);
		if (bVar3) {
			return __this;
		}
		if ((node == null) ||(pIVar6 = (object)node.get_Children(), pIVar6 == null)) {
			throw new NullReferenceException();
		}
		pIVar1 = pIVar6.klass;
		uVar9 = (ulong)(pIVar1._2).interface_offsets_count;
		pIVar6 = pIVar6.Dispose();
		local_38 = (byte)&local_48;
		do {
			local_48 = pIVar6;
			if (pIVar6 == null) {
				throw new NullReferenceException();
			}
			pIVar1 = pIVar6.klass;
			uVar9 = (ulong)(pIVar1._2).interface_offsets_count;
			cVar4 = pIVar6.Dispose();
			pIVar6 = local_48;
			if (cVar4 == false) {
				if (local_48 == null) {
					return __this;
				}
				pIVar1 = local_48.klass;
				uVar9 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar9 == 0) goto label_058db60f;
				pIVar2 = (pIVar1._1).interfaceOffsets;
				lVar10 = 0;
				break;
			}
			if (local_48 == null) {
				throw new NullReferenceException();
			}
			pIVar1 = local_48.klass;
			uVar9 = (ulong)(pIVar1._2).interface_offsets_count;
			pIVar6 = pIVar6.Dispose();
			if (pIVar6 == null) {
				throw new NullReferenceException();
			}
			__this_00 = (String)(*pIVar6.klass.vtable[9].methodPtr)(pIVar6);
			if ((__this_00 == null) &&(__this_00 = (String)**(long*)(g_data_07556758 + 0xb8), __this_00 == null)) {
				throw new NullReferenceException();
			}
			if (0x40 < __this_00._stringLength) {
				__this_00 = __this_00.Substring(0, 0x40);
			}
			bVar3 = String.IsNullOrWhiteSpace(__this_00);
			pIVar6 = local_48;
			if (!bVar3) {
				if (__this == null) {
					throw new NullReferenceException();
				}
				iVar5 = __this.get_Count();
				pIVar6 = local_48;
				if (iVar5 < 0x40) {
					pSVar8 = ((JSONNode)__this_00);
					__this.Add(pSVar8);
					pIVar6 = local_48;
				}
			}
		} while(true);
		while (true) {
			lVar10 = lVar10 + 0x10;
			if (!(uVar9 * 0x10 != lVar10)) break;
			if (*(IDisposable*)((long)&pIVar2.interfaceType + lVar10) == typeof(IDisposable)) {
				pVVar7 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar10);
				goto label_058db62d;
			}
		}
	label_058db60f: ;
	label_058db62d: ;
		pIVar6.Dispose();
		return __this;
	}

	[Token(Token = "0x60011D3")]
	[Address(RVA = "0x57DA850", Offset = "0x57D9850", VA = "0x57DA850")]
	private static JSONArray BadgesArray(IEnumerable<string> items)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterInfoState.c (Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$BadgesArray): 7 lines keep C-only constructs
		IEnumerable<string> pSVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		Il2CppClass pIVar3;
		sbyte cVar4;
		bool bVar5;
		int iVar6;
		JSONArray __this;
		VirtualInvokeData pVVar7;
		object pIVar8;
		String __this_00;
		JSONNode pSVar9;
		ulong uVar10;
		long lVar11;
		object local_48;
		byte local_38;

		local_48 = null;
		__this = new JSONArray();
		if (items == null) {
			return __this;
		}
		pSVar1 = items.klass;
		uVar10 = (ulong)(pSVar1._2).interface_offsets_count;
		pIVar8 = items.Dispose();
		local_38 = (byte)&local_48;
		do {
			local_48 = pIVar8;
			if (pIVar8 == null) {
				throw new NullReferenceException();
			}
			pIVar3 = pIVar8.klass;
			uVar10 = (ulong)(pIVar3._2).interface_offsets_count;
			cVar4 = pIVar8.Dispose();
			pIVar8 = local_48;
			if (cVar4 == false) {
				if (local_48 == null) {
					return __this;
				}
				pIVar3 = local_48.klass;
				uVar10 = (ulong)(pIVar3._2).interface_offsets_count;
				if (uVar10 == 0) goto label_058dab6f;
				pIVar2 = (pIVar3._1).interfaceOffsets;
				lVar11 = 0;
				break;
			}
			if (local_48 == null) {
				throw new NullReferenceException();
			}
			pIVar3 = local_48.klass;
			uVar10 = (ulong)(pIVar3._2).interface_offsets_count;
			__this_00 = pIVar8.Dispose();
			if ((__this_00 == null) &&(__this_00 = (String)**(long*)(g_data_07556758 + 0xb8), __this_00 == null)) {
				throw new NullReferenceException();
			}
			if (0x40 < __this_00._stringLength) {
				__this_00 = __this_00.Substring(0, 0x40);
			}
			bVar5 = String.IsNullOrWhiteSpace(__this_00);
			pIVar8 = local_48;
			if (!bVar5) {
				if (__this == null) {
					throw new NullReferenceException();
				}
				iVar6 = __this.get_Count();
				pIVar8 = local_48;
				if (iVar6 < 0x40) {
					pSVar9 = ((JSONNode)__this_00);
					__this.Add(pSVar9);
					pIVar8 = local_48;
				}
			}
		} while(true);
		while (true) {
			lVar11 = lVar11 + 0x10;
			if (!(uVar10 * 0x10 != lVar11)) break;
			if (*(IDisposable*)((long)&pIVar2.interfaceType + lVar11) == typeof(IDisposable)) {
				pVVar7 = pIVar3.vtable + *(int)((long)&pIVar2.offset + lVar11);
				goto label_058dab8d;
			}
		}
	label_058dab6f: ;
	label_058dab8d: ;
		pIVar8.Dispose();
		return __this;
	}

	[Token(Token = "0x60011D4")]
	[Address(RVA = "0x57DBBA0", Offset = "0x57DABA0", VA = "0x57DBBA0")]
	private static JSONObject Effect(JSONNode node)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterInfoState.c (Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$Effect): clean
		uint uVar1;
		bool bVar2;
		bool b;
		JSONObject __this;
		JSONNode pSVar3;
		String pSVar4;
		JSONArray __this_00;

		__this = new JSONObject();
		b = false;
		bVar2 = (node != null);
		pSVar4 = "enabled";
		if (bVar2) {
			if ((node == null) ||(pSVar3 = node.get_Item("enabled"), pSVar3 == null)) goto label_058dc183;
			b = pSVar3.get_AsBool();
		}
		pSVar3 = ((JSONNode)b);
		if (__this != null) {
			__this.set_Item(pSVar4, pSVar3);
			pSVar4 = AottgCharacterInfoState.String(node, "type", "None");
			if ((pSVar4 != null) ||(pSVar4 = (String)**(long*)(g_data_07556758 + 0xb8), pSVar4 != null)) {
				if (0x20 < pSVar4._stringLength) {
					pSVar4 = pSVar4.Substring(0, 0x20);
				}
				pSVar3 = ((JSONNode)pSVar4);
				__this.set_Item("type", pSVar3);
				__this_00 = new JSONArray();
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
				if (__this_00 == null) {
					if (uVar1 == 0) {
					}
					pSVar3 = null;
					bVar2 = (node != null);
					if (bVar2) {
						if (node == null) goto label_058dc183;
						pSVar3 = node.get_Item("colors");
					}
					pSVar4 = AottgCharacterInfoState.ColorString(pSVar3, 0, "#FFFFFFFF");
					((JSONNode)pSVar4);
					throw new NullReferenceException();
				}
				if (node != null) {
					if (uVar1 == 0) {
					}
					pSVar3 = null;
					bVar2 = (node != null);
					if (bVar2) {
						pSVar3 = node.get_Item("colors");
					}
					pSVar4 = AottgCharacterInfoState.ColorString(pSVar3, 0, "#FFFFFFFF");
					pSVar3 = ((JSONNode)pSVar4);
					__this_00.Add(pSVar3);
					pSVar3 = null;
					bVar2 = (node != null);
					if (bVar2) {
						pSVar3 = node.get_Item("colors");
					}
					pSVar4 = AottgCharacterInfoState.ColorString(pSVar3, 1, "#FFFFFFFF");
					pSVar3 = ((JSONNode)pSVar4);
					__this_00.Add(pSVar3);
					pSVar3 = null;
					bVar2 = (node != null);
					if (bVar2) {
						pSVar3 = node.get_Item("colors");
					}
					pSVar4 = AottgCharacterInfoState.ColorString(pSVar3, 2, "#FFFFFFFF");
					pSVar3 = ((JSONNode)pSVar4);
					__this_00.Add(pSVar3);
					pSVar3 = null;
					bVar2 = (node != null);
					if (bVar2) {
						pSVar3 = node.get_Item("colors");
					}
	label_058dc0f1: ;
					pSVar4 = AottgCharacterInfoState.ColorString(pSVar3, 3, "#FFFFFFFF");
					pSVar3 = ((JSONNode)pSVar4);
					__this_00.Add(pSVar3);
					__this.set_Item("colors", (JSONNode)__this_00);
					return __this;
				}
				if (uVar1 == 0) {
				}
				bVar2 = (null != null);
				if (!bVar2) {
					pSVar4 = AottgCharacterInfoState.ColorString(null, 0, "#FFFFFFFF");
					pSVar3 = ((JSONNode)pSVar4);
					__this_00.Add(pSVar3);
					bVar2 = (null != null);
					if (!bVar2) {
						pSVar4 = AottgCharacterInfoState.ColorString(null, 1, "#FFFFFFFF");
						pSVar3 = ((JSONNode)pSVar4);
						__this_00.Add(pSVar3);
						bVar2 = (null != null);
						if (!bVar2) {
							pSVar4 = AottgCharacterInfoState.ColorString(null, 2, "#FFFFFFFF");
							pSVar3 = ((JSONNode)pSVar4);
							__this_00.Add(pSVar3);
							bVar2 = (null != null);
							if (!bVar2) {
								pSVar3 = null;
								goto label_058dc0f1;
							}
						}
					}
				}
			}
		}
	label_058dc183: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60011D5")]
	[Address(RVA = "0x57DAC20", Offset = "0x57D9C20", VA = "0x57DAC20")]
	private static JSONObject EffectWith(JSONNode current, bool enabled, string type, IEnumerable<string> colors)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterInfoState.c (Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$EffectWith): 5 lines keep C-only constructs
		String pSVar1;
		bool bVar2;
		JSONObject pSVar3;
		JSONNode pSVar4;
		JSONArray pSVar5;
		undefined7 in_register_00000031;
		MethodInfo method_00;
		byte[] auVar6 = new byte[16];

		method_00 = (MethodInfo)CONCAT71(in_register_00000031, enabled);
		pSVar3 = AottgCharacterInfoState.Effect(current);
		pSVar4 = ((JSONNode)enabled);
		if (pSVar3 != null) {
			pSVar3.set_Item("enabled", pSVar4);
			bVar2 = String.IsNullOrWhiteSpace(type);
			pSVar1 = "type";
			if (bVar2) {
				type = "None";
			}
			if ((type != null) ||(type = (String)**(long*)(g_data_07556758 + 0xb8), type != null)) {
				if (0x20 < type._stringLength) {
					type = type.Substring(0, 0x20);
				}
				pSVar4 = ((JSONNode)type);
				pSVar3.set_Item(pSVar1, pSVar4);
				auVar6 = (byte[])pSVar3.get_Item("colors");
				pSVar5 = AottgCharacterInfoState.ColorArray(colors, auVar6._0_8_);
				pSVar3.set_Item("colors", (JSONNode)pSVar5);
				return pSVar3;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60011D6")]
	[Address(RVA = "0x57DC680", Offset = "0x57DB680", VA = "0x57DC680")]
	private static JSONArray ColorArray(IEnumerable<string> colors, JSONNode fallback)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterInfoState.c (Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ColorArray): 2 lines keep C-only constructs
		bool bVar1;
		uint uVar2;
		JSONArray __this;
		object pIVar3;
		String pSVar4;
		JSONNode pSVar5;
		String pSVar6;
		Il2CppClass pIVar8;
		Color local_58;
		Color local_40;

		pIVar8 = null;
		__this = new JSONArray();
		pIVar3 = ((object)colors as string[]);
		if (pIVar3 != null) {
			if ((int)pIVar3[1].monitor < 1) {
				pIVar8 = null;
			}
			else {
				if (((ulong)pIVar3[1].monitor & 0xffffffff) == 0) goto label_058dca6c;
				pIVar8 = pIVar3[2].klass;
			}
		}
		pSVar4 = AottgCharacterInfoState.ColorString(fallback, 0, "#FFFFFFFF");
		local_58.r = 0.0;
		local_58.g = 0.0;
		local_58.b = 0.0;
		local_58.a = 0.0;
		bVar1 = ColorUtility.TryParseHtmlString((String)pIVar8, ref local_58);
		if (bVar1) {
			local_40.r = local_58.r;
			local_40.g = local_58.g;
			local_40.b = local_58.b;
			local_40.a = local_58.a;
			pSVar4 = ColorUtility.ToHtmlStringRGBA(ref local_40);
			pSVar4 = String.Concat("#", pSVar4);
		}
		pSVar5 = ((JSONNode)pSVar4);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add(pSVar5);
		if ((pIVar3 == null) || ((int)pIVar3[1].monitor < 2)) {
			pSVar4 = null;
		}
		else {
			if (((ulong)pIVar3[1].monitor & 0xfffffffe) == 0) goto label_058dca6c;
			pSVar4 = pIVar3[2].monitor;
		}
		pSVar6 = AottgCharacterInfoState.ColorString(fallback, 1, "#FFFFFFFF");
		local_58.r = 0.0;
		local_58.g = 0.0;
		local_58.b = 0.0;
		local_58.a = 0.0;
		bVar1 = ColorUtility.TryParseHtmlString(pSVar4, ref local_58);
		if (bVar1) {
			local_40.r = local_58.r;
			local_40.g = local_58.g;
			local_40.b = local_58.b;
			local_40.a = local_58.a;
			pSVar4 = ColorUtility.ToHtmlStringRGBA(ref local_40);
			pSVar6 = String.Concat("#", pSVar4);
		}
		pIVar8 = null;
		pSVar5 = ((JSONNode)pSVar6);
		__this.Add(pSVar5);
		if (pIVar3 != null) {
			uVar2 = (uint)pIVar3[1].monitor;
			if ((int)uVar2 < 3) {
				pIVar8 = null;
			}
			else {
				if (uVar2 < 3) goto label_058dca6c;
				pIVar8 = pIVar3[3].klass;
			}
		}
		pSVar4 = AottgCharacterInfoState.ColorString(fallback, 2, "#FFFFFFFF");
		local_58.r = 0.0;
		local_58.g = 0.0;
		local_58.b = 0.0;
		local_58.a = 0.0;
		bVar1 = ColorUtility.TryParseHtmlString((String)pIVar8, ref local_58);
		if (bVar1) {
			local_40.r = local_58.r;
			local_40.g = local_58.g;
			local_40.b = local_58.b;
			local_40.a = local_58.a;
			pSVar4 = ColorUtility.ToHtmlStringRGBA(ref local_40);
			pSVar4 = String.Concat("#", pSVar4);
		}
		pSVar6 = null;
		pSVar5 = ((JSONNode)pSVar4);
		__this.Add(pSVar5);
		if (pIVar3 != null) {
			if ((int)pIVar3[1].monitor < 4) {
				pSVar6 = null;
			}
			else {
				if (((ulong)pIVar3[1].monitor & 0xfffffffc) == 0) {
	label_058dca6c: ;
					throw new IndexOutOfRangeException();
				}
				pSVar6 = pIVar3[3].monitor;
			}
		}
		pSVar4 = AottgCharacterInfoState.ColorString(fallback, 3, "#FFFFFFFF");
		local_58.r = 0.0;
		local_58.g = 0.0;
		local_58.b = 0.0;
		local_58.a = 0.0;
		bVar1 = ColorUtility.TryParseHtmlString(pSVar6, ref local_58);
		if (bVar1) {
			local_40.r = local_58.r;
			local_40.g = local_58.g;
			local_40.b = local_58.b;
			local_40.a = local_58.a;
			pSVar4 = ColorUtility.ToHtmlStringRGBA(ref local_40);
			pSVar4 = String.Concat("#", pSVar4);
		}
		pSVar5 = ((JSONNode)pSVar4);
		__this.Add(pSVar5);
		return __this;
	}

	[Token(Token = "0x60011D7")]
	[Address(RVA = "0x57DA010", Offset = "0x57D9010", VA = "0x57DA010")]
	private static void ApplyToRuntime(JSONNode node, bool saveLocal)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterInfoState.c (Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ApplyToRuntime): 2 lines keep C-only constructs
		ProfileSettings pSVar1;
		StringSetting pSVar2;
		NameSetting pSVar3;
		JSONNode pSVar4;
		String pSVar5;
		JSONNode pSVar6;
		MethodInfo pMVar7;
		undefined7 in_register_00000031;

		pMVar7 = (MethodInfo)CONCAT71(in_register_00000031, saveLocal);
		pSVar1 = SettingsManager.ProfileSettings;
		if (pSVar1 == null) {
			return;
		}
		pSVar4 = AottgCharacterInfoState.Sanitize(node);
		if (pSVar4 != null) {
			pSVar2 = pSVar1.CharacterInfoJson;
			pSVar5 = pSVar4.ToString();
			if (pSVar2 != null) {
				pSVar2.Value = (object)pSVar5;
				pSVar3 = pSVar1.Name;
				pSVar6 = pSVar4.get_Item("name");
				if ((pSVar6 != null) &&(pMVar7 = (MethodInfo)pSVar6.get_Value(), pSVar3 != null)) {
					pSVar3.Value = (object)pMVar7;
					pSVar3 = pSVar1.Guild;
					pSVar5 = AottgCharacterInfoState.DisplayGuild(pSVar4);
					if (pSVar3 != null) {
						pSVar3.Value = (object)pSVar5;
						pSVar2 = pSVar1.GuildRoleSprite;
						if (pSVar2 != null) {
							pSVar2.Value = (object)**(ulong*)(g_data_07556758 + 0xb8);
							pSVar2 = pSVar1.NameFont;
							pSVar6 = pSVar4.get_Item("nameFont");
							if ((pSVar6 != null) &&(pSVar5 = pSVar6.get_Value(), pSVar2 != null)) {
								pSVar2.Value = (object)pSVar5;
								pSVar2 = pSVar1.GuildFont;
								pSVar6 = pSVar4.get_Item("guildFont");
								if ((pSVar6 != null) &&(pSVar5 = pSVar6.get_Value(), pSVar2 != null)) {
									pSVar2.Value = (object)pSVar5;
									pSVar6 = pSVar4.get_Item("nameEffect");
									AottgCharacterInfoState.ApplyEffect(pSVar6, pSVar1.NameEffectEnabled, pSVar1.NameEffect, pSVar1.NameEffectColorA, pSVar1.NameEffectColorB, pSVar1.NameEffectColorC, pSVar1.NameEffectColorD);
									pSVar4 = pSVar4.get_Item("guildEffect");
									AottgCharacterInfoState.ApplyEffect(pSVar4, pSVar1.GuildEffectEnabled, pSVar1.GuildEffect, pSVar1.GuildEffectColorA, pSVar1.GuildEffectColorB, pSVar1.GuildEffectColorC, pSVar1.GuildEffectColorD);
									if (saveLocal) {
										pSVar1.Save();
										return;
									}
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

	[Token(Token = "0x60011D8")]
	[Address(RVA = "0x57DCB00", Offset = "0x57DBB00", VA = "0x57DCB00")]
	private static void ApplyEffect(JSONNode effect, BoolSetting enabled, StringSetting type, ColorSetting colorA, ColorSetting colorB, ColorSetting colorC, ColorSetting colorD)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterInfoState.c (Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ApplyEffect): clean
		bool bVar1;
		byte value;
		JSONNode pSVar2;
		String value_00;
		Color255 pUVar3;

		value = false;
		bVar1 = (effect != null);
		if (bVar1) {
			if (effect == null) goto label_058dce1a;
			pSVar2 = effect.get_Item("enabled");
			if (pSVar2 == null) goto label_058dce1a;
			value = pSVar2.get_AsBool();
		}
		if (enabled == null) goto label_058dce1a;
		enabled.Value = (bool)value;
		bVar1 = (effect != null);
		if (bVar1) {
			if (effect == null) goto label_058dce1a;
			pSVar2 = effect.get_Item("type");
			bVar1 = (pSVar2 != null);
			if (!bVar1) goto label_058dccf1;
			pSVar2 = effect.get_Item("type");
			if (pSVar2 == null) goto label_058dce1a;
			value_00 = pSVar2.get_Value();
		}
		else {
	label_058dccf1: ;
			value_00 = "None";
		}
		if (type != null) {
			type.Value = (object)value_00;
			pSVar2 = null;
			bVar1 = (effect != null);
			if (bVar1) {
				if (effect == null) goto label_058dce1a;
				pSVar2 = effect.get_Item("colors");
			}
			if (colorA != null) {
				pUVar3 = AottgCharacterInfoState.ParseColor(pSVar2, 0, colorA._value);
				colorA.Value = (object)pUVar3;
				if (colorB != null) {
					pUVar3 = AottgCharacterInfoState.ParseColor(pSVar2, 1, colorB._value);
					colorB.Value = (object)pUVar3;
					if (colorC != null) {
						pUVar3 = AottgCharacterInfoState.ParseColor(pSVar2, 2, colorC._value);
						colorC.Value = (object)pUVar3;
						if (colorD != null) {
							pUVar3 = AottgCharacterInfoState.ParseColor(pSVar2, 3, colorD._value);
							colorD.Value = (object)pUVar3;
							return;
						}
					}
				}
			}
		}
	label_058dce1a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60011D9")]
	[Address(RVA = "0x57DB6D0", Offset = "0x57DA6D0", VA = "0x57DB6D0")]
	private static JSONObject LegacyEffect(bool name)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterInfoState.c (Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$LegacyEffect): clean
		bool b;
		ProfileSettings pSVar1;
		String s;
		Color255 pUVar2;
		JSONObject __this;
		BoolSetting pSVar3;
		JSONNode pSVar4;
		StringSetting pSVar5;
		JSONArray __this_00;
		String pSVar6;
		ColorSetting pSVar7;
		Color local_40;

		pSVar1 = SettingsManager.ProfileSettings;
		if (pSVar1 == null) {
			return null;
		}
		__this = new JSONObject();
		pSVar6 = "enabled";
		if (name) {
			pSVar3 = pSVar1.NameEffectEnabled;
		}
		else {
			pSVar3 = pSVar1.GuildEffectEnabled;
		}
		if (pSVar3 != null) {
			b = pSVar3._value;
			pSVar4 = ((JSONNode)b);
			if (__this != null) {
				__this.set_Item(pSVar6, pSVar4);
				pSVar6 = "type";
				if (name) {
					pSVar5 = pSVar1.NameEffect;
				}
				else {
					pSVar5 = pSVar1.GuildEffect;
				}
				if (pSVar5 != null) {
					s = pSVar5._value;
					pSVar4 = ((JSONNode)s);
					__this.set_Item(pSVar6, pSVar4);
					__this_00 = new JSONArray();
					if (name) {
						pSVar7 = pSVar1.NameEffectColorA;
					}
					else {
						pSVar7 = pSVar1.GuildEffectColorA;
					}
					if (pSVar7 != null) {
						pUVar2 = pSVar7._value;
						if (pUVar2 != null) {
							local_40 = pUVar2.ToColor();
							pSVar6 = ColorUtility.ToHtmlStringRGBA(ref local_40);
							pSVar6 = String.Concat("#", pSVar6);
							pSVar4 = ((JSONNode)pSVar6);
							if (__this_00 != null) {
								__this_00.Add(pSVar4);
								if (name) {
									pSVar7 = pSVar1.NameEffectColorB;
								}
								else {
									pSVar7 = pSVar1.GuildEffectColorB;
								}
								if (pSVar7 != null) {
									pUVar2 = pSVar7._value;
									if (pUVar2 != null) {
										local_40 = pUVar2.ToColor();
										pSVar6 = ColorUtility.ToHtmlStringRGBA(ref local_40);
										pSVar6 = String.Concat("#", pSVar6);
										pSVar4 = ((JSONNode)pSVar6);
										__this_00.Add(pSVar4);
										if (name) {
											pSVar7 = pSVar1.NameEffectColorC;
										}
										else {
											pSVar7 = pSVar1.GuildEffectColorC;
										}
										if (pSVar7 != null) {
											pUVar2 = pSVar7._value;
											if (pUVar2 != null) {
												local_40 = pUVar2.ToColor();
												pSVar6 = ColorUtility.ToHtmlStringRGBA(ref local_40) ;
												pSVar6 = String.Concat("#", pSVar6);
												pSVar4 = ((JSONNode)pSVar6);
												__this_00.Add(pSVar4);
												if (name) {
													pSVar7 = pSVar1.NameEffectColorD;
												}
												else {
													pSVar7 = pSVar1.GuildEffectColorD;
												}
												if (pSVar7 != null) {
													pUVar2 = pSVar7._value;
													if (pUVar2 != null) {
														local_40 = pUVar2.ToColor();
														pSVar6 = ColorUtility.ToHtmlStringRGBA(ref local_40);
														pSVar6 = String.Concat("#", pSVar6);
														pSVar4 = ((JSONNode)pSVar6);
														__this_00.Add(pSVar4);
														__this.set_Item("colors", (JSONNode)__this_00);
														return __this;
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

	[Token(Token = "0x60011DA")]
	[Address(RVA = "0x57DC530", Offset = "0x57DB530", VA = "0x57DC530")]
	private static string ColorString(JSONNode colors, int index, string fallback)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterInfoState.c (Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ColorString): clean
		bool bVar1;
		JSONNode pSVar2;
		String pSVar3;
		Color local_48;
		Color local_38;

		bVar1 = (colors != null);
		pSVar3 = fallback;
		if (bVar1) {
			if (colors == null) {
	label_058dc67b: ;
				throw new NullReferenceException();
			}
			pSVar2 = colors.get_Item(index);
			bVar1 = (pSVar2 != null);
			if (bVar1) {
				pSVar2 = colors.get_Item(index);
				if (pSVar2 == null) goto label_058dc67b;
				pSVar3 = pSVar2.get_Value();
			}
		}
		local_48.r = 0.0;
		local_48.g = 0.0;
		local_48.b = 0.0;
		local_48.a = 0.0;
		bVar1 = ColorUtility.TryParseHtmlString(pSVar3, ref local_48);
		if (bVar1) {
			local_38.r = local_48.r;
			local_38.g = local_48.g;
			local_38.b = local_48.b;
			local_38.a = local_48.a;
			pSVar3 = ColorUtility.ToHtmlStringRGBA(ref local_38);
			fallback = String.Concat("#", pSVar3);
		}
		return fallback;
	}

	[Token(Token = "0x60011DB")]
	[Address(RVA = "0x57DCA80", Offset = "0x57DBA80", VA = "0x57DCA80")]
	private static string ColorStringValue(string value, string fallback)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterInfoState.c (Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ColorStringValue): clean
		bool bVar1;
		String str1;
		Color UStack_38;
		Color UStack_20;

		UStack_38.r = 0.0;
		UStack_38.g = 0.0;
		UStack_38.b = 0.0;
		UStack_38.a = 0.0;
		bVar1 = ColorUtility.TryParseHtmlString(value, ref UStack_38);
		if (bVar1) {
			UStack_20.r = UStack_38.r;
			UStack_20.g = UStack_38.g;
			UStack_20.b = UStack_38.b;
			UStack_20.a = UStack_38.a;
			str1 = ColorUtility.ToHtmlStringRGBA(ref UStack_20);
			fallback = String.Concat("#", str1);
		}
		return fallback;
	}

	[Token(Token = "0x60011DC")]
	[Address(RVA = "0x57DCE20", Offset = "0x57DBE20", VA = "0x57DCE20")]
	private static Color255 ParseColor(JSONNode colors, int index, Color255 fallback)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterInfoState.c (Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ParseColor): clean
		bool bVar1;
		JSONNode pSVar2;
		String htmlString;
		Color color;
		Color local_58;
		float local_48;
		float fStack_44;
		Color local_38;

		local_58.r = 0.0;
		local_58.g = 0.0;
		local_58.b = 0.0;
		local_58.a = 0.0;
		bVar1 = (colors != null);
		if (bVar1) {
			if (colors == null) {
	label_058dcf7b: ;
				throw new NullReferenceException();
			}
			pSVar2 = colors.get_Item(index);
			bVar1 = (pSVar2 != null);
			if (bVar1) {
				pSVar2 = colors.get_Item(index);
				if (pSVar2 == null) goto label_058dcf7b;
				htmlString = pSVar2.get_Value();
				goto label_058dcf22;
			}
		}
		htmlString = (String)**(ulong*)(g_data_07556758 + 0xb8);
	label_058dcf22: ;
		bVar1 = ColorUtility.TryParseHtmlString(htmlString, ref local_58);
		if (bVar1) {
			local_38.r = local_58.r;
			local_38.g = local_58.g;
			local_38.b = 0.0;
			local_38.a = 0.0;
			local_48 = local_58.b;
			fStack_44 = local_58.a;
			color.b = local_48;
			color.a = fStack_44;
			color.r = local_38.r;
			color.g = local_38.g;
			fallback = new Color255(color);
		}
		return fallback;
	}

	[Token(Token = "0x60011DD")]
	[Address(RVA = "0x57DCF80", Offset = "0x57DBF80", VA = "0x57DCF80")]
	private static string ColorHex(Color255 color)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterInfoState.c (Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$ColorHex): clean
		String pSVar1;
		Color UStack_18;

		if (color == null) {
			throw new NullReferenceException();
		}
		UStack_18 = color.ToColor();
		pSVar1 = ColorUtility.ToHtmlStringRGBA(ref UStack_18);
		pSVar1 = String.Concat("#", pSVar1);
		return pSVar1;
	}

	[Token(Token = "0x60011DE")]
	[Address(RVA = "0x57DC4F0", Offset = "0x57DB4F0", VA = "0x57DC4F0")]
	private static string Trim(string value, int max)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterInfoState.c (Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$Trim): clean
		String pSVar1;

		if ((value == null) &&(value = (String)**(long*)(g_data_07556758 + 0xb8), value == null)) {
			throw new NullReferenceException();
		}
		if (max < value._stringLength) {
			pSVar1 = value.Substring(0, max);
			return pSVar1;
		}
		return value;
	}

	[Token(Token = "0x60011DF")]
	[Address(RVA = "0x57DA780", Offset = "0x57D9780", VA = "0x57DA780")]
	private static string TrimColoredText(string value, int max)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterInfoState.c (Gisketch.Aottg2UI.Game.AottgCharacterInfoState$$TrimColoredText): clean
		int iVar1;
		AottgCharacterTextColorCodec.Document pGVar2;
		String pSVar3;
		List<string> __this;

		pGVar2 = AottgCharacterTextColorCodec.Parse(value);
		if ((pGVar2 != null) &&(pSVar3 = pGVar2.Text, pSVar3 != null)) {
			if (pSVar3._stringLength <= max) {
				__this = pGVar2.Colors;
	label_058da845: ;
				pSVar3 = AottgCharacterTextColorCodec.Serialize(pSVar3, (IList<string>)__this);
				return pSVar3;
			}
			pSVar3 = pSVar3.Substring(0, max);
			pGVar2.Text = pSVar3;
			__this = pGVar2.Colors;
			while ((__this != null &&(pSVar3 = pGVar2.Text, pSVar3 != null))) {
				iVar1 = __this._size;
				if (iVar1 <= pSVar3._stringLength) goto label_058da845;
				__this.RemoveAt(iVar1 + -1);
				__this = pGVar2.Colors;
			}
		}
		throw new NullReferenceException();
	}
}
