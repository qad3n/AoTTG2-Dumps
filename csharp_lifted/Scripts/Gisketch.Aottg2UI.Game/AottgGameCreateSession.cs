// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateSession
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Map;
using Settings;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200026E")]
internal static class AottgGameCreateSession
{
	[Token(Token = "0x4000C94")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly List<Experience> ExperiencesInternal;

	[Token(Token = "0x4000C95")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly SandboxGameCreateConfiguration SandboxConfiguration;

	[Token(Token = "0x4000C96")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly List<AottgSandboxField> SandboxFieldsInternal;

	[Token(Token = "0x4000C97")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static string[] _sandboxAddonNames;

	[Token(Token = "0x4000C98")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static bool _isMultiplayer;

	[Token(Token = "0x4000C99")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x21")]
	private static bool _showSandboxVariableNames;

	[Token(Token = "0x4000C9A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x22")]
	private static bool _showLockedSettings;

	[Token(Token = "0x4000C9B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x23")]
	private static bool _titanSpawnPresetCustom;

	[Token(Token = "0x4000C9C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private static AottgGameCreateConfigurationMode _configurationMode;

	[Token(Token = "0x4000C9D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static readonly string[] SandboxSectionsInternal;

	[Token(Token = "0x4000C9E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static readonly string[] CategoryOrder;

	[Token(Token = "0x4000CAA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private static readonly HashSet<string> MultiplayerMiscIds;

	[Token(Token = "0x4000CAB")]
	private const string EnabledSuffix = "Enabled";

	[Token(Token = "0x4000CAC")]
	private const string ModeFieldPrefix = "mode.";

	[Token(Token = "0x4000CAD")]
	private const string ModeLabelKeyPrefix = "CreateGamePopup.Mode.";

	[Token(Token = "0x4000CAE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private static readonly Dictionary<string, string> FieldLabelKeys;

	[Token(Token = "0x17000174")]
	public static AottgGameCreateLaunchContext LaunchContext
	{
		[Token(Token = "0x6000E6D")]
		[Address(RVA = "0x5797230", Offset = "0x5796230", VA = "0x5797230")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_LaunchContext): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754524b == false) {
				Il2CppMethodInitialized_0754524b = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AottgGameCreateSession. _LaunchContext_k__BackingField;
			}
			return *(int)((long)(typeof(AottgGameCreateSession)).static_fields + 0x38 );
		}
		[Token(Token = "0x6000E6E")]
		[Address(RVA = "0x57972A0", Offset = "0x57962A0", VA = "0x57972A0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$set_LaunchContext): clean
			AottgGameCreateSession._LaunchContext_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000175")]
	public static InGameSet Working
	{
		[Token(Token = "0x6000E6F")]
		[Address(RVA = "0x57972F0", Offset = "0x57962F0", VA = "0x57972F0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_Working): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754524d == false) {
				Il2CppMethodInitialized_0754524d = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AottgGameCreateSession._Working_k__BackingField;
			}
			return *(InGameSet*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x40 );
		}
		[Token(Token = "0x6000E70")]
		[Address(RVA = "0x5797360", Offset = "0x5796360", VA = "0x5797360")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$set_Working): clean

			AottgGameCreateSession._Working_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000176")]
	public static string Category
	{
		[Token(Token = "0x6000E71")]
		[Address(RVA = "0x57973C0", Offset = "0x57963C0", VA = "0x57973C0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_Category): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754524f == false) {
				Il2CppMethodInitialized_0754524f = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AottgGameCreateSession._Category_k__BackingField;
			}
			return *(String*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x48 );
		}
		[Token(Token = "0x6000E72")]
		[Address(RVA = "0x5797430", Offset = "0x5796430", VA = "0x5797430")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$set_Category): clean

			AottgGameCreateSession._Category_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000177")]
	public static string Subcategory
	{
		[Token(Token = "0x6000E73")]
		[Address(RVA = "0x5797490", Offset = "0x5796490", VA = "0x5797490")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_Subcategory): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07545251 == false) {
				Il2CppMethodInitialized_07545251 = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AottgGameCreateSession._Subcategory_k__BackingField ;
			}
			return *(String*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x50 );
		}
		[Token(Token = "0x6000E74")]
		[Address(RVA = "0x5797500", Offset = "0x5796500", VA = "0x5797500")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$set_Subcategory): clean

			AottgGameCreateSession._Subcategory_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000178")]
	public static Experience Experience
	{
		[Token(Token = "0x6000E75")]
		[Address(RVA = "0x5797560", Offset = "0x5796560", VA = "0x5797560")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_Experience): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07545253 == false) {
				Il2CppMethodInitialized_07545253 = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AottgGameCreateSession._Experience_k__BackingField;
			}
			return *(Experience*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x58 );
		}
		[Token(Token = "0x6000E76")]
		[Address(RVA = "0x57975D0", Offset = "0x57965D0", VA = "0x57975D0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$set_Experience): clean

			AottgGameCreateSession._Experience_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000179")]
	public static ExperienceRuleResult RuleResult
	{
		[Token(Token = "0x6000E77")]
		[Address(RVA = "0x5797630", Offset = "0x5796630", VA = "0x5797630")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_RuleResult): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07545255 == false) {
				Il2CppMethodInitialized_07545255 = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AottgGameCreateSession._RuleResult_k__BackingField;
			}
			return *(ExperienceRuleResult*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x60 );
		}
		[Token(Token = "0x6000E78")]
		[Address(RVA = "0x57976A0", Offset = "0x57966A0", VA = "0x57976A0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$set_RuleResult): clean

			AottgGameCreateSession._RuleResult_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x1700017A")]
	public static string LoadError
	{
		[Token(Token = "0x6000E79")]
		[Address(RVA = "0x5797700", Offset = "0x5796700", VA = "0x5797700")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_LoadError): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07545257 == false) {
				Il2CppMethodInitialized_07545257 = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AottgGameCreateSession._LoadError_k__BackingField;
			}
			return *(String*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x68 );
		}
		[Token(Token = "0x6000E7A")]
		[Address(RVA = "0x5797770", Offset = "0x5796770", VA = "0x5797770")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$set_LoadError): clean

			AottgGameCreateSession._LoadError_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x1700017B")]
	public static string SandboxSection
	{
		[Token(Token = "0x6000E7B")]
		[Address(RVA = "0x57977D0", Offset = "0x57967D0", VA = "0x57977D0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_SandboxSection): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07545259 == false) {
				Il2CppMethodInitialized_07545259 = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AottgGameCreateSession. _SandboxSection_k__BackingField;
			}
			return *(String*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x70 );
		}
		[Token(Token = "0x6000E7C")]
		[Address(RVA = "0x5797840", Offset = "0x5796840", VA = "0x5797840")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$set_SandboxSection): clean

			AottgGameCreateSession._SandboxSection_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x1700017C")]
	public static bool ShowRoomSettings
	{
		[Token(Token = "0x6000E7D")]
		[Address(RVA = "0x57978A0", Offset = "0x57968A0", VA = "0x57978A0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_ShowRoomSettings): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754525b == false) {
				Il2CppMethodInitialized_0754525b = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AottgGameCreateSession. _ShowRoomSettings_k__BackingField;
			}
			return (bool)*(byte)((long)(typeof(AottgGameCreateSession)).static_fields + 0x78);
		}
		[Token(Token = "0x6000E7E")]
		[Address(RVA = "0x5797910", Offset = "0x5796910", VA = "0x5797910")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$set_ShowRoomSettings): clean
			AottgGameCreateSession._ShowRoomSettings_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x1700017D")]
	public static bool ShowFavorites
	{
		[Token(Token = "0x6000E7F")]
		[Address(RVA = "0x5797960", Offset = "0x5796960", VA = "0x5797960")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_ShowFavorites): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754525d == false) {
				Il2CppMethodInitialized_0754525d = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AottgGameCreateSession. _ShowFavorites_k__BackingField;
			}
			return (bool)*(byte)((long)(typeof(AottgGameCreateSession)).static_fields + 0x79);
		}
		[Token(Token = "0x6000E80")]
		[Address(RVA = "0x57979D0", Offset = "0x57969D0", VA = "0x57979D0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$set_ShowFavorites): clean
			AottgGameCreateSession._ShowFavorites_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x1700017E")]
	public static string SelectedPresetName
	{
		[Token(Token = "0x6000E81")]
		[Address(RVA = "0x5797A20", Offset = "0x5796A20", VA = "0x5797A20")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_SelectedPresetName): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754525f == false) {
				Il2CppMethodInitialized_0754525f = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AottgGameCreateSession. _SelectedPresetName_k__BackingField;
			}
			return *(String*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x80 );
		}
		[Token(Token = "0x6000E82")]
		[Address(RVA = "0x5797A90", Offset = "0x5796A90", VA = "0x5797A90")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$set_SelectedPresetName): clean

			AottgGameCreateSession._SelectedPresetName_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x1700017F")]
	public static bool ShowSandboxVariableNames
	{
		[Token(Token = "0x6000E83")]
		[Address(RVA = "0x5797AF0", Offset = "0x5796AF0", VA = "0x5797AF0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_ShowSandboxVariableNames): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07545261 == false) {
				Il2CppMethodInitialized_07545261 = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AottgGameCreateSession._showSandboxVariableNames;
			}
			return (bool)*(byte)((long)(typeof(AottgGameCreateSession)).static_fields + 0x21);
		}
	}

	[Token(Token = "0x17000180")]
	public static bool ShowLockedSettings
	{
		[Token(Token = "0x6000E84")]
		[Address(RVA = "0x5797B60", Offset = "0x5796B60", VA = "0x5797B60")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_ShowLockedSettings): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07545262 == false) {
				Il2CppMethodInitialized_07545262 = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AottgGameCreateSession._showLockedSettings;
			}
			return (bool)*(byte)((long)(typeof(AottgGameCreateSession)).static_fields + 0x22);
		}
	}

	[Token(Token = "0x17000181")]
	public static string MapDescription
	{
		[Token(Token = "0x6000E85")]
		[Address(RVA = "0x57953B0", Offset = "0x57943B0", VA = "0x57953B0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_MapDescription): clean
			uint uVar1;
			SandboxGameCreateConfiguration pSVar2;

			if (Il2CppMethodInitialized_07545263 == false) {
				Il2CppMethodInitialized_07545263 = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pSVar2 = AottgGameCreateSession.SandboxConfiguration;
			}
			else {
				pSVar2 = *(SandboxGameCreateConfiguration*)((long)(typeof(AottgGameCreateSession)).static_fields + 8);
			}
			if (pSVar2 == null) {
				throw new NullReferenceException();
			}
			return pSVar2._MapDescription_k__BackingField;
		}
	}

	[Token(Token = "0x17000182")]
	public static string ModeDescription
	{
		[Token(Token = "0x6000E86")]
		[Address(RVA = "0x5795430", Offset = "0x5794430", VA = "0x5795430")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_ModeDescription): clean
			uint uVar1;
			InGameGeneralSettings pSVar2;
			StringSetting pSVar3;
			String fallback;
			String pSVar4;
			Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields pGVar5;
			InGameSet pSVar6;

			if (Il2CppMethodInitialized_07545264 == false) {
				Il2CppMethodInitialized_07545264 = true;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589551d;
		label_05895458: ;
				if (Il2CppMethodInitialized_075452cd != false) goto label_05895465;
		label_0589552f: ;
				Il2CppMethodInitialized_075452cd = true;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_05895552;
		label_05895475: ;
				pGVar5 = typeof(AottgGameCreateSession).static_fields;
				pSVar6 = pGVar5._Working_k__BackingField;
				if (pSVar6 != null) goto label_05895489;
		label_0589556e: ;
				pSVar4 = null;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05895458;
		label_0589551d: ;
				if (Il2CppMethodInitialized_075452cd == false) goto label_0589552f;
		label_05895465: ;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05895475;
		label_05895552: ;
				pGVar5 = typeof(AottgGameCreateSession).static_fields;
				pSVar6 = pGVar5._Working_k__BackingField;
				if (pSVar6 == null) goto label_0589556e;
		label_05895489: ;
				pSVar2 = pSVar6.General;
				if ((pSVar2 == null) ||(pSVar3 = pSVar2.GameMode, pSVar3 == null)) goto label_05895582;
				pSVar4 = pSVar3._value;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pGVar5 = typeof(AottgGameCreateSession).static_fields;
			}
			if (pGVar5.SandboxConfiguration != null) {
				fallback = (pGVar5.SandboxConfiguration).ModeDescription;
				pSVar4 = ContentLocale.ModeDescription(pSVar4, fallback);
				return pSVar4;
			}
		label_05895582: ;
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000183")]
	public static bool IsSandbox
	{
		[Token(Token = "0x6000E87")]
		[Address(RVA = "0x577A250", Offset = "0x5779250", VA = "0x577A250")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_IsSandbox): clean
			uint uVar1;
			Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields pGVar2;
			InGameSet pSVar3;

			if (Il2CppMethodInitialized_07545265 == false) {
				Il2CppMethodInitialized_07545265 = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			if (Il2CppMethodInitialized_075452cd == false) {
				Il2CppMethodInitialized_075452cd = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pGVar2 = typeof(AottgGameCreateSession).static_fields;
				pSVar3 = pGVar2._Working_k__BackingField;
			}
			else {
				pGVar2 = (typeof(AottgGameCreateSession)).static_fields;
				pSVar3 = pGVar2._Working_k__BackingField;
			}
			if (pSVar3 == null) {
				return false;
			}
			if (((typeof(AottgGameCreateSession))._2).cctor_finished_or_no_cctor == 0) {
				return AottgGameCreateSession._configurationMode == 1;
			}
			return pGVar2._configurationMode == 1;
		}
	}

	[Token(Token = "0x17000184")]
	public static bool IsMultiplayer
	{
		[Token(Token = "0x6000E88")]
		[Address(RVA = "0x5797BD0", Offset = "0x5796BD0", VA = "0x5797BD0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_IsMultiplayer): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07545266 == false) {
				Il2CppMethodInitialized_07545266 = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AottgGameCreateSession._isMultiplayer;
			}
			return (bool)*(byte)((long)(typeof(AottgGameCreateSession)).static_fields + 0x20);
		}
	}

	[Token(Token = "0x17000185")]
	public static bool IsConfigured
	{
		[Token(Token = "0x6000E89")]
		[Address(RVA = "0x578E120", Offset = "0x578D120", VA = "0x578E120")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_IsConfigured): clean
			uint uVar1;
			bool bVar2;

			bVar2 = AottgGameCreateSession.IsSandbox;
			if (bVar2) {
				return true;
			}
			if (Il2CppMethodInitialized_075452d6 == false) {
				Il2CppMethodInitialized_075452d6 = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			return AottgGameCreateSession._RuleResult_k__BackingField !=null;
		}
	}

	[Token(Token = "0x17000186")]
	public static bool CanStart
	{
		[Token(Token = "0x6000E8A")]
		[Address(RVA = "0x578E1D0", Offset = "0x578D1D0", VA = "0x578E1D0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_CanStart): clean
			uint uVar1;
			ExperienceRuleResult result;
			bool bVar2;
			bool bVar3;
			Il2CppClass pIVar4;

			if (Il2CppMethodInitialized_07545268 == false) {
				Il2CppMethodInitialized_07545268 = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
				pIVar4 = typeof(AottgGameCreateSession);
			}
			else {
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
				pIVar4 = typeof(AottgGameCreateSession);
			}
			typeof(AottgGameCreateSession) =(AottgGameCreateSession)pIVar4;
			if (uVar1 == 0) {
				bVar2 = AottgGameCreateSession.IsConfigured;
				pIVar4 = typeof(AottgGameCreateSession);
			}
			else {
				bVar2 = AottgGameCreateSession.IsConfigured;
				pIVar4 = typeof(AottgGameCreateSession);
			}
			typeof(AottgGameCreateSession) =(AottgGameCreateSession)pIVar4;
			if (bVar2) {
				bVar3 = AottgGameCreateSession.IsSandbox;
				bVar2 = true;
				if (!bVar3) {
					if (Il2CppMethodInitialized_075452d6 == false) {
						Il2CppMethodInitialized_075452d6 = true;
						uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
					}
					else {
						uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
					}
					if (uVar1 == 0) {
					}
					result = AottgGameCreateSession. _RuleResult_k__BackingField;
					if ((typeof(ExperienceRuleEngine)._2).cctor_finished_or_no_cctor == 0) {
						bVar2 = ExperienceRuleEngine.Validate(result);
						return bVar2;
					}
					bVar2 = ExperienceRuleEngine.Validate(result);
					return bVar2;
				}
			}
			else {
				bVar2 = false;
			}
			return bVar2;
		}
	}

	[Token(Token = "0x17000187")]
	public static IReadOnlyList<Experience> Experiences
	{
		[Token(Token = "0x6000E8B")]
		[Address(RVA = "0x5797C40", Offset = "0x5796C40", VA = "0x5797C40")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_Experiences): 2 lines keep C-only constructs
			uint uVar1;

			if (Il2CppMethodInitialized_07545269 == false) {
				Il2CppMethodInitialized_07545269 = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return (System_Collections_Generic_IReadOnlyList_Experience__o)AottgGameCreateSession.ExperiencesInternal;
			}
			return *(System_Collections_Generic_IReadOnlyList_Experience__o*)(typeof(AottgGameCreateSession)).static_fields;
		}
	}

	[Token(Token = "0x17000188")]
	public static IReadOnlyList<AottgSandboxField> SandboxFields
	{
		[Token(Token = "0x6000E8C")]
		[Address(RVA = "0x5797CB0", Offset = "0x5796CB0", VA = "0x5797CB0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_SandboxFields): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754526a == false) {
				Il2CppMethodInitialized_0754526a = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return (IReadOnlyList<AottgSandboxField>)AottgGameCreateSession.SandboxFieldsInternal;
			}
			return *(IReadOnlyList<AottgSandboxField>*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x10 );
		}
	}

	[Token(Token = "0x17000189")]
	public static string[] SandboxSections
	{
		[Token(Token = "0x6000E8D")]
		[Address(RVA = "0x5797D20", Offset = "0x5796D20", VA = "0x5797D20")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_SandboxSections): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754526b == false) {
				Il2CppMethodInitialized_0754526b = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AottgGameCreateSession.SandboxSectionsInternal;
			}
			return *(String[]*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x28 );
		}
	}

	[Token(Token = "0x1700018A")]
	public static string[] SandboxAddonNames
	{
		[Token(Token = "0x6000E8E")]
		[Address(RVA = "0x5797D90", Offset = "0x5796D90", VA = "0x5797D90")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_SandboxAddonNames): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754526c == false) {
				Il2CppMethodInitialized_0754526c = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return AottgGameCreateSession._sandboxAddonNames;
			}
			return *(String[]*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x18 );
		}
	}

	[Token(Token = "0x1700018B")]
	public static IReadOnlyList<AottgSandboxField> MultiplayerFields
	{
		[Token(Token = "0x6000E8F")]
		[Address(RVA = "0x57865C0", Offset = "0x57855C0", VA = "0x57865C0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_MultiplayerFields): 4 lines keep C-only constructs
			uint uVar1;
			IReadOnlyList<AottgSandboxField> pSVar2;
			Il2CppClass klass;

			if (Il2CppMethodInitialized_0754526d == false) {
				Il2CppMethodInitialized_0754526d = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
				klass = typeof(AottgGameCreateSession);
			}
			else {
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
				klass = typeof(AottgGameCreateSession);
			}
			typeof(AottgGameCreateSession) =(AottgGameCreateSession)klass;
			if (uVar1 == 0) {
				return pSVar2;
			}
			return pSVar2;
		}
	}

	[Token(Token = "0x1700018C")]
	public static string SelectedVariant
	{
		[Token(Token = "0x6000E90")]
		[Address(RVA = "0x5788DF0", Offset = "0x5787DF0", VA = "0x5788DF0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_SelectedVariant): clean
			uint uVar1;
			InGameSet pSVar2;
			StringSetting pSVar3;

			if (Il2CppMethodInitialized_0754526e == false) {
				Il2CppMethodInitialized_0754526e = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			if (Il2CppMethodInitialized_075452cd == false) {
				Il2CppMethodInitialized_075452cd = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = *(uint)((long)typeof(AottgGameCreateSession) + 0xe4);
			}
			if (uVar1 == 0) {
				pSVar2 = AottgGameCreateSession._Working_k__BackingField;
			}
			else {
				pSVar2 = (*(Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields*)((long)typeof(AottgGameCreateSession) + 0xb8)). _Working_k__BackingField;
			}
			if (pSVar2 == null) {
				return (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			if (((typeof(AottgGameCreateSession))._2).cctor_finished_or_no_cctor == 0) {
			}
			if (Il2CppMethodInitialized_075452cd == false) {
				Il2CppMethodInitialized_075452cd = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pSVar2 = AottgGameCreateSession._Working_k__BackingField;
			}
			else {
				pSVar2 = *(InGameSet*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x40);
			}
			if (pSVar2 != null) {
				pSVar3 = pSVar2.ExperienceVariant;
				if (pSVar3 != null) {
					return pSVar3._value;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x1700018D")]
	public static string[] VariantNames
	{
		[Token(Token = "0x6000E91")]
		[Address(RVA = "0x5788C20", Offset = "0x5787C20", VA = "0x5788C20")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$get_VariantNames): 2 lines keep C-only constructs
			uint uVar1;
			ExperienceRuleResult pSVar2;
			PresetDefinition pSVar3;
			Dictionary<object, object> __this;
			String[] pSVar4;
			System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o source;

			if (Il2CppMethodInitialized_0754526f == false) {
				Il2CppMethodInitialized_0754526f = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			if (Il2CppMethodInitialized_075452d6 == false) {
				Il2CppMethodInitialized_075452d6 = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = *(uint)((long)typeof(AottgGameCreateSession) + 0xe4);
			}
			if (uVar1 == 0) {
				pSVar2 = AottgGameCreateSession. _RuleResult_k__BackingField;
			}
			else {
				pSVar2 = (*(Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields*)((long)typeof(AottgGameCreateSession) + 0xb8)). _RuleResult_k__BackingField;
			}
			if (((pSVar2 == null) ||(pSVar3 = pSVar2.Experience, pSVar3 == null)) ||(pSVar3.Variants == null)) {
				pSVar4 = (String[])new string[0];
				return pSVar4;
			}
			if (((typeof(AottgGameCreateSession))._2).cctor_finished_or_no_cctor == 0) {
			}
			if (Il2CppMethodInitialized_075452d6 == false) {
				Il2CppMethodInitialized_075452d6 = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pSVar2 = AottgGameCreateSession. _RuleResult_k__BackingField;
			}
			else {
				pSVar2 = *(ExperienceRuleResult*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x60);
			}
			if (((pSVar2 == null) ||(pSVar3 = pSVar2.Experience, pSVar3 == null)) ||(__this = (Dictionary<object, object>)pSVar3.Variants, __this == null)) {
				throw new NullReferenceException();
			}
			source = __this.Keys;
			pSVar4 = (String[])Enumerable.ToArray<string>((System_Collections_Generic_IEnumerable_TSource__o)source);
			return pSVar4;
		}
	}

	[Token(Token = "0x6000E92")]
	[Address(RVA = "0x57987E0", Offset = "0x57977E0", VA = "0x57987E0")]
	public static void Begin(AottgGameCreateLaunchContext launchContext, bool multiplayer = false)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$Begin): 12 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		int iVar3;
		IntPtr pvVar4;
		List<AottgSandboxField> pSVar5;
		SandboxGameCreateConfiguration __this;
		InGameSet pSVar6;
		BoolSetting pSVar7;
		List<Experience> pSVar8;
		StringSetting pSVar9;
		object @object;
		bool bVar10;
		String[] pSVar11;
		InGameSet __this_00;
		String pSVar12;
		InGameSet __this_01;
		Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields pGVar13;
		List<Experience> collection;
		Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_StaticFields pGVar14;
		Func<Experience, bool> __this_02;
		Experience experience;
		Il2CppClass pIVar15;

		if (Il2CppMethodInitialized_07545270 == false) {
			Il2CppMethodInitialized_07545270 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589891e;
	label_05898811: ;
			if (g_data_075452df != false) goto label_0589881e;
	label_05898930: ;
			g_data_075452df = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_05898954;
	label_0589882f: ;
			pIVar15 = typeof(AottgGameCreateSession);
			pGVar13 = typeof(AottgGameCreateSession).static_fields;
			pGVar13._LaunchContext_k__BackingField = launchContext;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05898811;
	label_0589891e: ;
			if (g_data_075452df == false) goto label_05898930;
	label_0589881e: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589882f;
	label_05898954: ;
			pIVar15 = typeof(AottgGameCreateSession);
			pGVar13 = typeof(AottgGameCreateSession).static_fields;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			pGVar13._LaunchContext_k__BackingField = launchContext;
			if (uVar2 == 0) {
				pGVar13 = typeof(AottgGameCreateSession).static_fields;
				pIVar15 = typeof(AottgGameCreateSession);
			}
		}
		pGVar13._isMultiplayer = launchContext == 1 || multiplayer;
		if (Il2CppMethodInitialized_075452e0 == false) {
			Il2CppMethodInitialized_075452e0 = true;
			pIVar15 = typeof(AottgGameCreateSession);
		}
		if ((pIVar15._2).cctor_finished_or_no_cctor == 0) {
			pIVar15 = typeof(AottgGameCreateSession);
		}
		pGVar13 = pIVar15.static_fields;
		pGVar13._Category_k__BackingField = null;
		pGVar13 = typeof(AottgGameCreateSession).static_fields;
		pGVar13._Subcategory_k__BackingField = null;
		pGVar13 = typeof(AottgGameCreateSession).static_fields;
		pGVar13._Experience_k__BackingField = null;
		pGVar13 = typeof(AottgGameCreateSession).static_fields;
		pGVar13._RuleResult_k__BackingField = null;
		pGVar13 = typeof(AottgGameCreateSession).static_fields;
		pGVar13._LoadError_k__BackingField = null;
		pSVar12 = "General";
		pGVar13 = typeof(AottgGameCreateSession).static_fields;
		pGVar13._SandboxSection_k__BackingField = pSVar12;
		if (Il2CppMethodInitialized_075452e6 == false) {
			Il2CppMethodInitialized_075452e6 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_05898e15;
	label_05898b77: ;
			pIVar15 = typeof(AottgGameCreateSession);
			AottgGameCreateSession._ShowRoomSettings_k__BackingField = false;
			if (Il2CppMethodInitialized_075452e7 != false) goto label_05898b8f;
	label_05898e36: ;
			Il2CppMethodInitialized_075452e7 = true;
			pIVar15 = typeof(AottgGameCreateSession);
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_05898e56;
	label_05898b9c: ;
			*(byte)((long)pIVar15.static_fields + 0x79) = 0;
			if (Il2CppMethodInitialized_075452e8 != false) goto label_05898bb4;
	label_05898e77: ;
			Il2CppMethodInitialized_075452e8 = true;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			pIVar15 = typeof(AottgGameCreateSession);
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05898b77;
	label_05898e15: ;
			pIVar15 = typeof(AottgGameCreateSession);
			AottgGameCreateSession._ShowRoomSettings_k__BackingField = false;
			if (Il2CppMethodInitialized_075452e7 == false) goto label_05898e36;
	label_05898b8f: ;
			if ((pIVar15._2).cctor_finished_or_no_cctor != 0) goto label_05898b9c;
	label_05898e56: ;
			pIVar15 = typeof(AottgGameCreateSession);
			AottgGameCreateSession._ShowFavorites_k__BackingField = false;
			if (Il2CppMethodInitialized_075452e8 == false) goto label_05898e77;
	label_05898bb4: ;
			uVar2 = (pIVar15._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			pIVar15 = typeof(AottgGameCreateSession);
		}
		pvVar4 = pIVar15.static_fields;
		*(ulong)((long)pvVar4 + 0x80) = 0;
		pGVar13 = typeof(AottgGameCreateSession).static_fields;
		pGVar13._showSandboxVariableNames = false;
		pGVar13._showLockedSettings = false;
		pGVar13._titanSpawnPresetCustom = false;
		pSVar5 = pGVar13.SandboxFieldsInternal;
		if (pSVar5 == null) goto label_058997f2;
		piVar1 = &pSVar5._version;
		*piVar1 = *piVar1 + 1;
		iVar3 = pSVar5._size;
		pSVar5._size = 0;
		if (0 < iVar3) {
			Array.Clear((Array)pSVar5._items, 0, iVar3);
		}
		pSVar11 = (String[])new string[0];
		pGVar13 = typeof(AottgGameCreateSession).static_fields;
		pGVar13._sandboxAddonNames = pSVar11;
		__this = AottgGameCreateSession.SandboxConfiguration;
		if (__this == null) goto label_058997f2;
		__this.Reset();
		pSVar6 = SettingsManager.InGameUI;
		if (pSVar6 == null) {
			pSVar6 = SettingsManager.InGameCurrent;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		__this_00 = new InGameSet();
		if (pSVar6 != null) {
			pSVar12 = pSVar6.SerializeToJsonString();
			if (__this_00 == null) goto label_058997f2;
			__this_00.DeserializeFromJsonString(pSVar12);
		}
		__this_01 = new InGameSet();
		if (pSVar6 != null) {
			pSVar12 = pSVar6.SerializeToJsonString();
			if (__this_01 == null) goto label_058997f2;
			__this_01.DeserializeFromJsonString(pSVar12);
		}
		pGVar13 = typeof(AottgGameCreateSession).static_fields;
		pGVar13._Working_k__BackingField = __this_01;
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_05898ef5;
	label_05898dd8: ;
			pGVar13 = typeof(AottgGameCreateSession).static_fields;
			pSVar6 = pGVar13._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05898dd8;
	label_05898ef5: ;
			pGVar13 = typeof(AottgGameCreateSession).static_fields;
			pSVar6 = pGVar13._Working_k__BackingField;
		}
		if ((pSVar6 == null) ||(pSVar7 = pSVar6.Sandbox, pSVar7 == null)) goto label_058997f2;
		bVar10 = pSVar7._value;
		if (((typeof(AottgGameCreateSession))._2).cctor_finished_or_no_cctor == 0) {
			pGVar13 = typeof(AottgGameCreateSession).static_fields;
		}
		pGVar13._configurationMode = (uint)bVar10;
		pSVar8 = pGVar13.ExperiencesInternal;
		if (pSVar8 == null) goto label_058997f2;
		piVar1 = &pSVar8._version;
		*piVar1 = *piVar1 + 1;
		iVar3 = pSVar8._size;
		pSVar8._size = 0;
		if (0 < iVar3) {
			Array.Clear((Array)pSVar8._items, 0, iVar3);
		}
		BuiltinLevels.Init();
		pSVar8 = AottgGameCreateSession.ExperiencesInternal;
		collection = BuiltinLevels.GetExperiences();
		if (pSVar8 == null) {
			throw new NullReferenceException();
		}
		pSVar8.AddRange((IEnumerable<T>)collection);
		uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		if (launchContext != 2) {
			if (uVar2 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				if (Il2CppMethodInitialized_075452cd == false) goto label_0589964f;
	label_0589961f: ;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589962c;
	label_0589966f: ;
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				pSVar6 = AottgGameCreateSession._Working_k__BackingField ;
			}
			else {
				if (Il2CppMethodInitialized_075452cd != false) goto label_0589961f;
	label_0589964f: ;
				Il2CppMethodInitialized_075452cd = true;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589966f;
	label_0589962c: ;
				pSVar6 = AottgGameCreateSession._Working_k__BackingField ;
			}
			if ((pSVar6 == null) ||(pSVar9 = pSVar6.ExperienceName, pSVar9 == null)) goto label_058997f2;
			pSVar9.Value = (@object)**(ulong*)(g_data_07556758 + 0xb8);
			if (Il2CppMethodInitialized_075452cd == false) {
				Il2CppMethodInitialized_075452cd = true;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589970c;
	label_058996d7: ;
				pSVar6 = AottgGameCreateSession._Working_k__BackingField ;
			}
			else {
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058996d7;
	label_0589970c: ;
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				pSVar6 = AottgGameCreateSession._Working_k__BackingField ;
			}
			if ((pSVar6 == null) ||(pSVar9 = pSVar6.ExperienceVariant, pSVar9 == null)) goto label_058997f2;
			pSVar9.Value = (@object)**(ulong*)(g_data_07556758 + 0xb8);
			if (Il2CppMethodInitialized_075452cd == false) {
				Il2CppMethodInitialized_075452cd = true;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589979b;
	label_05899769: ;
				pSVar6 = AottgGameCreateSession._Working_k__BackingField ;
			}
			else {
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05899769;
	label_0589979b: ;
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				pSVar6 = AottgGameCreateSession._Working_k__BackingField ;
			}
			if ((pSVar6 != null) &&(pSVar7 = pSVar6.Sandbox, pSVar7 != null)) {
				pSVar7.Value = false;
				AottgGameCreateSession._configurationMode = 0;
				return;
			}
			goto label_058997f2;
		}
		if (uVar2 == 0) {
			if (Il2CppMethodInitialized_075452cd == false) goto label_05899021;
	label_05898ff1: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05898ffe;
	label_05899041: ;
			pSVar6 = AottgGameCreateSession._Working_k__BackingField;
			pIVar15 = typeof(AottgGameCreateSession);
		}
		else {
			if (Il2CppMethodInitialized_075452cd != false) goto label_05898ff1;
	label_05899021: ;
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_05899041;
	label_05898ffe: ;
			pSVar6 = AottgGameCreateSession._Working_k__BackingField;
			pIVar15 = typeof(AottgGameCreateSession);
		}
		typeof(AottgGameCreateSession) =(AottgGameCreateSession)pIVar15;
		if ((pSVar6 == null) ||(pSVar7 = pSVar6.Sandbox, pSVar7 == null)) goto label_058997f2;
		uVar2 = (pIVar15._2).cctor_finished_or_no_cctor;
		if (pSVar7._value != false) {
			if (uVar2 == 0) {
			}
			AottgGameCreateSession.RefreshSandbox();
			return;
		}
		if (uVar2 == 0) {
			if (Il2CppMethodInitialized_075452cd == false) goto label_058990d3;
	label_058990a3: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058990b0;
	label_058990f3: ;
			pSVar6 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if (Il2CppMethodInitialized_075452cd != false) goto label_058990a3;
	label_058990d3: ;
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058990f3;
	label_058990b0: ;
			pSVar6 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar6 == null) ||(pSVar7 = pSVar6.Sandbox, pSVar7 == null)) goto label_058997f2;
		if (pSVar7._value == false) {
			if (((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				if (Il2CppMethodInitialized_075452cd == false) goto label_0589916c;
	label_0589913c: ;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05899149;
	label_0589918c: ;
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				pSVar6 = AottgGameCreateSession._Working_k__BackingField ;
			}
			else {
				if (Il2CppMethodInitialized_075452cd != false) goto label_0589913c;
	label_0589916c: ;
				Il2CppMethodInitialized_075452cd = true;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589918c;
	label_05899149: ;
				pSVar6 = AottgGameCreateSession._Working_k__BackingField ;
			}
			if ((pSVar6 == null) ||(pSVar9 = pSVar6.ExperienceName, pSVar9 == null)) goto label_058997f2;
			bVar10 = String.IsNullOrEmpty(pSVar9._value);
			if (!bVar10) {
				pSVar8 = AottgGameCreateSession.ExperiencesInternal;
				pGVar14 = typeof(AottgGameCreateSession.c).static_fields;
				__this_02 = pGVar14.__9__85_0;
				if (__this_02 == null) {
					if ((typeof(AottgGameCreateSession.c)._2).cctor_finished_or_no_cctor == 0) {
						pGVar14 = typeof(AottgGameCreateSession.c).static_fields;
					}
					@object = (object)pGVar14.__9;
					__this_02 = new Func<Experience, bool>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_Begin_b__85_0);
					pGVar14 = typeof(AottgGameCreateSession.c).static_fields;
					pGVar14.__9__85_0 = __this_02;
				}
				experience = Enumerable.FirstOrDefault<Experience>((System_Collections_Generic_IEnumerable_TSource__o)pSVar8, (System_Func_TSource__bool__o)__this_02);
				if (experience != null) {
					pSVar12 = experience.Category;
					if (Il2CppMethodInitialized_075452e0 == false) {
						Il2CppMethodInitialized_075452e0 = true;
						uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
					}
					else {
						uVar2 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
					}
					if (uVar2 == 0) {
					}
					pGVar13 = typeof(AottgGameCreateSession).static_fields;
					pGVar13._Category_k__BackingField = pSVar12;
					pSVar12 = experience.SubCategory;
					pGVar13 = typeof(AottgGameCreateSession).static_fields;
					pGVar13._Subcategory_k__BackingField = pSVar12;
					AottgGameCreateSession.ConfigureExperience(experience, __this_00, null, false);
					return;
				}
			}
		}
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452cd == false) goto label_05899391;
	label_05899361: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589936e;
	label_058993b1: ;
			pSVar6 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if (Il2CppMethodInitialized_075452cd != false) goto label_05899361;
	label_05899391: ;
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058993b1;
	label_0589936e: ;
			pSVar6 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar6 == null) ||(pSVar9 = pSVar6.ExperienceName, pSVar9 == null)) goto label_058997f2;
		pSVar9.Value = (@object)**(ulong*)(g_data_07556758 + 0xb8);
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589944e;
	label_05899419: ;
			pSVar6 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05899419;
	label_0589944e: ;
			pSVar6 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar6 == null) ||(pSVar9 = pSVar6.ExperienceVariant, pSVar9 == null)) goto label_058997f2;
		pSVar9.Value = (@object)**(ulong*)(g_data_07556758 + 0xb8);
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058994e0;
	label_058994ab: ;
			pSVar6 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058994ab;
	label_058994e0: ;
			pSVar6 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar6 != null) &&(pSVar7 = pSVar6.Sandbox, pSVar7 != null)) {
			pSVar7.Value = false;
			return;
		}
	label_058997f2: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000E93")]
	[Address(RVA = "0x579B580", Offset = "0x579A580", VA = "0x579B580")]
	public static void SaveForNextRound()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SaveForNextRound): 5 lines keep C-only constructs
		uint uVar1;
		InGameSet pSVar2;
		bool bVar3;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_07545271 == false) {
			Il2CppMethodInitialized_07545271 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
			klass = typeof(AottgGameCreateSession);
		}
		else {
			pSVar2 = *(InGameSet*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x40);
			klass = typeof(AottgGameCreateSession);
		}
		typeof(AottgGameCreateSession) =(AottgGameCreateSession)klass;
		if (pSVar2 != null) {
			if ((klass._2).cctor_finished_or_no_cctor == 0) {
				bVar3 = AottgGameCreateSession.CanStart;
			}
			else {
				bVar3 = AottgGameCreateSession.CanStart;
			}
			if (bVar3) {
				pSVar2 = SettingsManager.InGameUI;
				if (((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor == 0) {
				}
				if (Il2CppMethodInitialized_075452cd == false) {
					Il2CppMethodInitialized_075452cd = true;
					uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				if (pSVar2 == null) {
					throw new NullReferenceException();
				}
				pSVar2.Copy(*(BaseSetting*)((long)(typeof(AottgGameCreateSession)). static_fields + 0x40));
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6000E94")]
	[Address(RVA = "0x579B710", Offset = "0x579A710", VA = "0x579B710")]
	private static void CacheExperiencePreview(string previewPath)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$CacheExperiencePreview): clean
		uint uVar1;
		String previewPath_00;
		bool bVar2;
		String[] pSVar3;
		ulong uVar4;
		ulong uVar5;
		Sprite local_28;

		local_28 = null;
		bVar2 = String.IsNullOrEmpty(previewPath);
		if (!bVar2) {
			bVar2 = GisketchSpriteLoader.TryGetCached(previewPath, ref local_28);
			if (!bVar2) {
				if (previewPath != null) {
					pSVar3 = previewPath.Split(0x7c, 0);
					if (pSVar3 != null) {
						if ((int)pSVar3.Length < 1) {
							return;
						}
						uVar4 = pSVar3.Length & 0xffffffff;
						uVar5 = 0;
						do {
							if (uVar4 <= uVar5) {
								throw new IndexOutOfRangeException();
							}
							previewPath_00 = pSVar3[uVar5];
							AottgGameCreateSession.CachePreviewSprite(previewPath_00);
							uVar5 = uVar5 + 1;
							uVar1 = (uint)pSVar3.Length;
							uVar4 = (ulong)uVar1;
						} while ((long)uVar5 < (long)(int)uVar1);
						return;
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6000E95")]
	[Address(RVA = "0x579B810", Offset = "0x579A810", VA = "0x579B810")]
	private static void CachePreviewSprite(string previewPath)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$CachePreviewSprite): 6 lines keep C-only constructs
		byte[] auVar1 = new byte[16];
		bool bVar2;
		int iVar3;
		int iVar4;
		String pSVar5;
		Texture2D texture;
		Sprite sprite;
		String path;
		Sprite local_30;

		local_30 = null;
		bVar2 = String.IsNullOrEmpty(previewPath);
		if (!bVar2) {
			bVar2 = GisketchSpriteLoader.TryGetCached(previewPath, ref local_30);
			if (!bVar2) {
				pSVar5 = String.Concat(ResourcePaths.BuiltinMaps, "/");
				if (previewPath == null) {
	label_0589ba3b: ;
					throw new NullReferenceException();
				}
				bVar2 = previewPath.StartsWith(pSVar5, 4);
				if (bVar2) {
					if (pSVar5 == null) goto label_0589ba3b;
					path = ResourcePaths.BuiltinMaps;
					pSVar5 = previewPath.Substring(pSVar5._stringLength);
				}
				else {
					path = (String)**(ulong*)(g_data_07556758 + 0xb8);
					pSVar5 = previewPath;
				}
				texture = (Texture2D)ResourceManager.LoadAsset(path, pSVar5, false, false);
				if ((texture != null) && (texture.klass == typeof(Texture2D))) {
					iVar3 = texture.get_width();
					iVar4 = texture.get_height();
					auVar1._4_4_ = (float)iVar4;
					auVar1._0_4_ = (float)iVar3;
					auVar1._8_8_ = 0;
					sprite = Sprite.Create(texture, (Rect)(auVar1 << 0x40), (Vector2)0x3f0000003f000000);
					GisketchSpriteLoader.Store(previewPath, sprite);
				}
			}
		}
		return;
	}

	[Token(Token = "0x6000E96")]
	[Address(RVA = "0x577D770", Offset = "0x577C770", VA = "0x577D770")]
	public static void CacheExperiencePreviews(IEnumerable<Experience> experiences)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$CacheExperiencePreviews): 9 lines keep C-only constructs
		IEnumerable<Experience> pSVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		Il2CppClass pIVar3;
		sbyte cVar4;
		VirtualInvokeData pVVar5;
		object pIVar6;
		object pIVar7;
		ulong uVar8;
		long lVar9;
		object local_40;
		object* local_30;

		if (experiences == null) {
			return;
		}
		BuiltinLevels.ResolveExperiencePreviews(experiences);
		pSVar1 = experiences.klass;
		uVar8 = (ulong)(pSVar1._2).interface_offsets_count;
		pIVar6 = experiences.Dispose();
		local_30 = &local_40;
		do {
			local_40 = pIVar6;
			if (pIVar6 == null) {
				throw new NullReferenceException();
			}
			pIVar3 = pIVar6.klass;
			uVar8 = (ulong)(pIVar3._2).interface_offsets_count;
			cVar4 = pIVar6.Dispose();
			pIVar6 = local_40;
			if (cVar4 == false) {
				if (local_40 == null) {
					return;
				}
				pIVar3 = local_40.klass;
				uVar8 = (ulong)(pIVar3._2).interface_offsets_count;
				if (uVar8 == 0) goto label_0587da4f;
				pIVar2 = (pIVar3._1).interfaceOffsets;
				lVar9 = 0;
				break;
			}
			if (local_40 == null) {
				throw new NullReferenceException();
			}
			pIVar3 = local_40.klass;
			uVar8 = (ulong)(pIVar3._2).interface_offsets_count;
			pIVar7 = pIVar6.Dispose();
			pIVar6 = local_40;
			if (pIVar7 != null) {
				pIVar3 = pIVar7[3].klass;
				AottgGameCreateSession.CacheExperiencePreview((String)pIVar3);
				pIVar6 = local_40;
			}
		} while(true);
		while (true) {
			lVar9 = lVar9 + 0x10;
			if (!(uVar8 * 0x10 != lVar9)) break;
			if (*(IDisposable*)((long)&pIVar2.interfaceType + lVar9) == typeof(IDisposable)) {
				pVVar5 = pIVar3.vtable + *(int)((long)&pIVar2.offset + lVar9);
				goto label_0587da6d;
			}
		}
	label_0587da4f: ;
	label_0587da6d: ;
		pIVar6.Dispose();
		return;
	}

	[Token(Token = "0x6000E97")]
	[Address(RVA = "0x577C850", Offset = "0x577B850", VA = "0x577C850")]
	public static string[] Categories()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$Categories): 14 lines keep C-only constructs
		uint uVar1;
		List<Experience> source;
		object pIVar2;
		Func<Experience, string> __this;
		System_Collections_Generic_IEnumerable_TResult__o source_00;
		Func<string, bool> __this_00;
		System_Collections_Generic_IEnumerable_TSource__o pSVar3;
		Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_StaticFields pGVar4;
		Func<string, int> __this_01;
		System_Linq_IOrderedEnumerable_TSource__o source_01;
		String[] pSVar5;

		source = AottgGameCreateSession.ExperiencesInternal;
		if ((typeof(AottgGameCreateSession.c)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession.c)) ;
			pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			__this = pGVar4.__9__90_0;
		}
		else {
			pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			__this = pGVar4.__9__90_0;
		}
		if (__this == null) {
			if (((typeof(AottgGameCreateSession.c))._2). cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			}
			pIVar2 = (object)pGVar4.__9;
			__this = new Func<Experience, string>(pIVar2, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_Categories_b__90_0);
			pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			pGVar4.__9__90_0 = __this;
		}
		source_00 = Enumerable.Select<Experience, string>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TResult__o)__this);
		if ((typeof(AottgGameCreateSession.c)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession.c)) ;
			pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			__this_00 = pGVar4.__9__90_1;
		}
		else {
			pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			__this_00 = pGVar4.__9__90_1;
		}
		if (__this_00 == null) {
			if (((typeof(AottgGameCreateSession.c))._2). cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			}
			pIVar2 = (object)pGVar4.__9;
			__this_00 = new Func<string, bool>(pIVar2, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_Categories_b__90_1);
			pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			pGVar4.__9__90_1 = __this_00;
		}
		pSVar3 = Enumerable.Where<string>((System_Collections_Generic_IEnumerable_TSource__o)source_00, (System_Func_TSource__bool__o)__this_00);
		if (Il2CppMethodInitialized_07542886 == false) {
			Il2CppMethodInitialized_07542886 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(StringComparer))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar3 = Enumerable.Distinct<string>(pSVar3, (System_Collections_Generic_IEqualityComparer_TSource__o)StringComparer.s_ordinalIgnoreCase);
		if ((typeof(AottgGameCreateSession.c)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession.c)) ;
			pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			__this_01 = pGVar4.__9__90_2;
		}
		else {
			pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			__this_01 = pGVar4.__9__90_2;
		}
		if (__this_01 == null) {
			if (((typeof(AottgGameCreateSession.c))._2). cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			}
			pIVar2 = (object)pGVar4.__9;
			__this_01 = new Func<string, int>(pIVar2, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_Categories_b__90_2);
			pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			pGVar4.__9__90_2 = __this_01;
		}
		source_01 = Enumerable.OrderBy<string, int>(pSVar3, (System_Func_TSource__TKey__o)__this_01);
		pSVar5 = (String[])Enumerable.ToArray<string>((System_Collections_Generic_IEnumerable_TSource__o)source_01);
		return pSVar5;
	}

	[Token(Token = "0x6000E98")]
	[Address(RVA = "0x577CE00", Offset = "0x577BE00", VA = "0x577CE00")]
	public static string[] Subcategories()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$Subcategories): 12 lines keep C-only constructs
		uint uVar1;
		List<Experience> source;
		object pIVar2;
		Func<Experience, bool> __this;
		System_Collections_Generic_IEnumerable_TSource__o pSVar3;
		Func<Experience, string> __this_00;
		System_Collections_Generic_IEnumerable_TResult__o source_00;
		Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_StaticFields pGVar4;
		Func<string, bool> __this_01;
		String[] pSVar5;

		source = AottgGameCreateSession.ExperiencesInternal;
		if ((typeof(AottgGameCreateSession.c)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession.c)) ;
			pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			__this = pGVar4.__9__91_0;
		}
		else {
			pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			__this = pGVar4.__9__91_0;
		}
		if (__this == null) {
			if (((typeof(AottgGameCreateSession.c))._2). cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			}
			pIVar2 = (object)pGVar4.__9;
			__this = new Func<Experience, bool>(pIVar2, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_Subcategories_b__91_0);
			pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			pGVar4.__9__91_0 = __this;
		}
		pSVar3 = Enumerable.Where<Experience>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this);
		if ((typeof(AottgGameCreateSession.c)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession.c)) ;
			pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			__this_00 = pGVar4.__9__91_1;
		}
		else {
			pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			__this_00 = pGVar4.__9__91_1;
		}
		if (__this_00 == null) {
			if (((typeof(AottgGameCreateSession.c))._2). cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			}
			pIVar2 = (object)pGVar4.__9;
			__this_00 = new Func<Experience, string>(pIVar2, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_Subcategories_b__91_1);
			pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			pGVar4.__9__91_1 = __this_00;
		}
		source_00 = Enumerable.Select<Experience, string>(pSVar3, (System_Func_TSource__TResult__o)__this_00);
		if ((typeof(AottgGameCreateSession.c)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession.c)) ;
			pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			__this_01 = pGVar4.__9__91_2;
		}
		else {
			pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			__this_01 = pGVar4.__9__91_2;
		}
		if (__this_01 == null) {
			if (((typeof(AottgGameCreateSession.c))._2). cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			}
			pIVar2 = (object)pGVar4.__9;
			__this_01 = new Func<string, bool>(pIVar2, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_Subcategories_b__91_2);
			pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			pGVar4.__9__91_2 = __this_01;
		}
		pSVar3 = Enumerable.Where<string>((System_Collections_Generic_IEnumerable_TSource__o)source_00, (System_Func_TSource__bool__o)__this_01);
		if (Il2CppMethodInitialized_07542886 == false) {
			Il2CppMethodInitialized_07542886 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(StringComparer))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar3 = Enumerable.Distinct<string>(pSVar3, (System_Collections_Generic_IEqualityComparer_TSource__o)StringComparer.s_ordinalIgnoreCase);
		pSVar5 = (String[])Enumerable.ToArray<string>(pSVar3);
		return pSVar5;
	}

	[Token(Token = "0x6000E99")]
	[Address(RVA = "0x577DCF0", Offset = "0x577CCF0", VA = "0x577DCF0")]
	public static Experience[] CurrentExperiences()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$CurrentExperiences): clean
		uint uVar1;
		String category;
		Experience[] pMVar2;

		if (Il2CppMethodInitialized_07545277 == false) {
			Il2CppMethodInitialized_07545277 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075452d4 == false) {
			Il2CppMethodInitialized_075452d4 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			category = AottgGameCreateSession. _Category_k__BackingField;
		}
		else {
			category = *(String*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x48);
		}
		if (Il2CppMethodInitialized_075452d3 == false) {
			Il2CppMethodInitialized_075452d3 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pMVar2 = AottgGameCreateSession.ExperiencesIn(category, AottgGameCreateSession. _Subcategory_k__BackingField);
		return pMVar2;
	}

	[Token(Token = "0x6000E9A")]
	[Address(RVA = "0x577D640", Offset = "0x577C640", VA = "0x577D640")]
	public static Experience[] ExperiencesIn(string category, string subcategory)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ExperiencesIn): 4 lines keep C-only constructs
		List<Experience> source;
		AottgGameCreateSession.c__DisplayClass93_0 __this;
		Func<Experience, bool> __this_00;
		System_Collections_Generic_IEnumerable_TSource__o source_00;
		Experience[] pMVar1;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateSession.c__DisplayClass93_0));
		__this = new AottgGameCreateSession.c__DisplayClass93_0();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.category = category;
		__this.subcategory = subcategory;
		source = AottgGameCreateSession.ExperiencesInternal;
		__this_00 = new Func<Experience, bool>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass93_0_ExperiencesIn_b__0);
		source_00 = Enumerable.Where<Experience>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_00);
		pMVar1 = (Experience[])Enumerable.ToArray<Experience>(source_00);
		return pMVar1;
	}

	[Token(Token = "0x6000E9B")]
	[Address(RVA = "0x579BA40", Offset = "0x579AA40", VA = "0x579BA40")]
	private static Experience SingleExperience(string category, string subcategory)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SingleExperience): clean
		Experience[] pMVar1;

		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
		}
		pMVar1 = AottgGameCreateSession.ExperiencesIn(category, subcategory);
		if (pMVar1 == null) {
			throw new NullReferenceException();
		}
		if ((int)pMVar1.Length == 1) {
			return pMVar1[0];
		}
		return null;
	}

	[Token(Token = "0x6000E9C")]
	[Address(RVA = "0x579BAB0", Offset = "0x579AAB0", VA = "0x579BAB0")]
	public static string CategoryPreview(string category)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$CategoryPreview): 3 lines keep C-only constructs
		List<Experience> source;
		AottgGameCreateSession.c__DisplayClass95_0 __this;
		Func<Experience, bool> __this_00;
		Experience pMVar1;
		String pSVar2;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateSession.c__DisplayClass95_0));
		__this = new AottgGameCreateSession.c__DisplayClass95_0();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.category = category;
		source = AottgGameCreateSession.ExperiencesInternal;
		__this_00 = new Func<Experience, bool>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass95_0_CategoryPreview_b__0);
		pMVar1 = Enumerable.FirstOrDefault<Experience>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_00);
		if (pMVar1 != null) {
		}
		return pSVar2;
	}

	[Token(Token = "0x6000E9D")]
	[Address(RVA = "0x579BBD0", Offset = "0x579ABD0", VA = "0x579BBD0")]
	public static string SubcategoryPreview(string subcategory)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SubcategoryPreview): 3 lines keep C-only constructs
		List<Experience> source;
		AottgGameCreateSession.c__DisplayClass96_0 __this;
		Func<Experience, bool> __this_00;
		Experience pMVar1;
		String pSVar2;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateSession.c__DisplayClass96_0));
		__this = new AottgGameCreateSession.c__DisplayClass96_0();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.subcategory = subcategory;
		source = AottgGameCreateSession.ExperiencesInternal;
		__this_00 = new Func<Experience, bool>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass96_0_SubcategoryPreview_b__0);
		pMVar1 = Enumerable.FirstOrDefault<Experience>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_00);
		if (pMVar1 != null) {
		}
		return pSVar2;
	}

	[Token(Token = "0x6000E9E")]
	[Address(RVA = "0x5789360", Offset = "0x5788360", VA = "0x5789360")]
	public static ExperienceRuleField[] VisibleFields()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$VisibleFields): 5 lines keep C-only constructs
		uint uVar1;
		ExperienceRuleResult pSVar2;
		List<ExperienceRuleField> source;
		object @object;
		Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_StaticFields pGVar3;
		Func<ExperienceRuleField, bool> __this;
		System_Collections_Generic_IEnumerable_TSource__o source_00;
		ExperienceRuleField[] pSVar4;

		if (Il2CppMethodInitialized_0754527c == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_ExperienceRuleField) ;
			Il2CppMethodInitialized_0754527c = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075452d6 == false) {
			Il2CppMethodInitialized_075452d6 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = *(uint)((long)typeof(AottgGameCreateSession) + 0xe4);
		}
		if (uVar1 == 0) {
			pSVar2 = AottgGameCreateSession. _RuleResult_k__BackingField;
		}
		else {
			pSVar2 = (*(Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields*)((long)typeof(AottgGameCreateSession) + 0xb8)). _RuleResult_k__BackingField;
		}
		if (pSVar2 == null) {
			pSVar4 = (ExperienceRuleField[])new ExperienceRuleField[0];
			return pSVar4;
		}
		if (((typeof(AottgGameCreateSession))._2).cctor_finished_or_no_cctor == 0) {
		}
		if (Il2CppMethodInitialized_075452d6 == false) {
			Il2CppMethodInitialized_075452d6 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = AottgGameCreateSession. _RuleResult_k__BackingField;
		}
		else {
			pSVar2 = *(ExperienceRuleResult*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x60);
		}
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		source = pSVar2.Fields;
		if (((typeof(AottgGameCreateSession.c))._2). cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession.c)) ;
			pGVar3 = typeof(AottgGameCreateSession.c).static_fields;
			__this = pGVar3.__9__97_0;
		}
		else {
			pGVar3 = (typeof(AottgGameCreateSession.c)).static_fields;
			__this = pGVar3.__9__97_0;
		}
		if (__this == null) {
			if (((typeof(AottgGameCreateSession.c))._2). cctor_finished_or_no_cctor == 0) {
				pGVar3 = typeof(AottgGameCreateSession.c).static_fields;
			}
			@object = (object)pGVar3.__9;
			__this = new Func<ExperienceRuleField, bool>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_VisibleFields_b__97_0);
			pGVar3 = typeof(AottgGameCreateSession.c).static_fields;
			pGVar3.__9__97_0 = __this;
		}
		source_00 = Enumerable.Where<ExperienceRuleField>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this);
		pSVar4 = (ExperienceRuleField[])Enumerable.ToArray<ExperienceRuleField>(source_00);
		return pSVar4;
	}

	[Token(Token = "0x6000E9F")]
	[Address(RVA = "0x5787200", Offset = "0x5786200", VA = "0x5787200")]
	public static ExperienceRuleField[] LockedFields()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$LockedFields): 5 lines keep C-only constructs
		uint uVar1;
		ExperienceRuleResult pSVar2;
		List<ExperienceRuleField> source;
		object @object;
		Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_StaticFields pGVar3;
		Func<ExperienceRuleField, bool> __this;
		System_Collections_Generic_IEnumerable_TSource__o source_00;
		ExperienceRuleField[] pSVar4;

		if (Il2CppMethodInitialized_0754527d == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_ExperienceRuleField) ;
			Il2CppMethodInitialized_0754527d = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075452d6 == false) {
			Il2CppMethodInitialized_075452d6 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = *(uint)((long)typeof(AottgGameCreateSession) + 0xe4);
		}
		if (uVar1 == 0) {
			pSVar2 = AottgGameCreateSession. _RuleResult_k__BackingField;
		}
		else {
			pSVar2 = (*(Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields*)((long)typeof(AottgGameCreateSession) + 0xb8)). _RuleResult_k__BackingField;
		}
		if (pSVar2 == null) {
			pSVar4 = (ExperienceRuleField[])new ExperienceRuleField[0];
			return pSVar4;
		}
		if (((typeof(AottgGameCreateSession))._2).cctor_finished_or_no_cctor == 0) {
		}
		if (Il2CppMethodInitialized_075452d6 == false) {
			Il2CppMethodInitialized_075452d6 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = AottgGameCreateSession. _RuleResult_k__BackingField;
		}
		else {
			pSVar2 = *(ExperienceRuleResult*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x60);
		}
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		source = pSVar2.Fields;
		if (((typeof(AottgGameCreateSession.c))._2). cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession.c)) ;
			pGVar3 = typeof(AottgGameCreateSession.c).static_fields;
			__this = pGVar3.__9__98_0;
		}
		else {
			pGVar3 = (typeof(AottgGameCreateSession.c)).static_fields;
			__this = pGVar3.__9__98_0;
		}
		if (__this == null) {
			if (((typeof(AottgGameCreateSession.c))._2). cctor_finished_or_no_cctor == 0) {
				pGVar3 = typeof(AottgGameCreateSession.c).static_fields;
			}
			@object = (object)pGVar3.__9;
			__this = new Func<ExperienceRuleField, bool>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_LockedFields_b__98_0);
			pGVar3 = typeof(AottgGameCreateSession.c).static_fields;
			pGVar3.__9__98_0 = __this;
		}
		source_00 = Enumerable.Where<ExperienceRuleField>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this);
		pSVar4 = (ExperienceRuleField[])Enumerable.ToArray<ExperienceRuleField>(source_00);
		return pSVar4;
	}

	[Token(Token = "0x6000EA0")]
	[Address(RVA = "0x579BCF0", Offset = "0x579ACF0", VA = "0x579BCF0")]
	public static bool ChangeField(int index, string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ChangeField): 5 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		uint uVar3;
		uint uVar4;
		ExperienceRuleField pSVar5;
		TypedSetting<T> __this;
		TypedSetting<T> pSVar6;
		WeatherSettings __this_00;
		InGameSet pSVar7;
		InGameGeneralSettings pSVar8;
		StringSetting __this_01;
		StringSetting pSVar9;
		bool bVar10;
		int value_00;
		ExperienceRuleField[] pSVar11;
		CultureInfo pSVar12;
		String pSVar13;
		SandboxGameCreateConfiguration __this_02;
		float fVar14;
		double dVar15;
		bool local_39;
		float local_38;
		float local_34;
		int local_30;
		float local_2c;

		local_39 = false;
		local_30 = 0;
		local_34 = 0.0;
		local_38 = 0.0;
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			pSVar11 = AottgGameCreateSession.VisibleFields();
		}
		else {
			pSVar11 = AottgGameCreateSession.VisibleFields();
		}
		if (index < 0) {
			return false;
		}
		if (pSVar11 == null) goto label_0589c361;
		uVar3 = (uint)pSVar11.Length;
		if ((int)uVar3 <= index) {
			return false;
		}
		if (uVar3 <= (uint)index) {
			throw new IndexOutOfRangeException();
		}
		pSVar5 = pSVar11[(uint)index];
		if (pSVar5 == null) goto label_0589c361;
		if (pSVar5.Editable == false) {
			return false;
		}
		__this = (TypedSetting<T>)pSVar5.Setting;
		if (__this == null) {
			return false;
		}
		pSVar6 = __this.klass;
		bVar1 = (pSVar6._2).typeHierarchyDepth;
		bVar2 = ((typeof(StringSetting))._2).typeHierarchyDepth;
		if ((bVar1 < bVar2) ||((pSVar6._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(StringSetting))) {
			bVar2 = ((typeof(BoolSetting))._2).typeHierarchyDepth;
			if ((bVar1 < bVar2) ||((pSVar6._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(BoolSetting))) {
				bVar2 = ((typeof(IntSetting))._2).typeHierarchyDepth;
				if ((bVar1 < bVar2) ||((pSVar6._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(IntSetting))) {
					bVar2 = ((typeof(FloatSetting))._2).typeHierarchyDepth;
					if (bVar1 < bVar2) {
						return false;
					}
					if ((pSVar6._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(FloatSetting)) {
						return false;
					}
					if (((typeof(CultureInfo))._2).cctor_finished_or_no_cctor == 0) {
					}
					pSVar12 = CultureInfo.InvariantCulture;
					bVar10 = Single.TryParse(value, 0xa7, (IFormatProvider)pSVar12, ref local_38);
					if (!bVar10) {
						return false;
					}
					__this.Value = local_38;
				}
				else {
					pSVar13 = pSVar5.Id;
					if (((typeof(ExperienceRuleEngine))._2).cctor_finished_or_no_cctor == 0) {
					}
					bVar10 = ExperienceRuleEngine.TryParseValueName(pSVar13, value, ref local_30);
					if (bVar10) {
						value_00 = local_30;
					}
					else {
						bVar10 = WeatherSettings.IsWeatherSetting(pSVar5.Id);
						if ((!bVar10) ||(__this_00 = SettingsManager.WeatherSettings, __this_00 == null)) {
							pSVar12 = CultureInfo.InvariantCulture;
							bVar10 = Single.TryParse(value, 0xa7, (IFormatProvider)pSVar12, ref local_34);
							if (!bVar10) {
								return false;
							}
							fVar14 = local_34;
							if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
								local_2c = local_34;
								fVar14 = local_2c;
							}
							dVar15 = (double)il2cpp_runtime_helper_02fb2080((double)fVar14);
							value_00 = (int32_t)dVar15;
						}
						else {
							value_00 = __this_00.FindWeatherIndex(value);
							if (value_00 < 0) {
								return false;
							}
						}
					}
					__this.Value = value_00;
				}
			}
			else {
				bVar10 = Boolean.TryParse(value, ref local_39);
				if (!bVar10) {
					return false;
				}
				__this.Value = local_39;
			}
		}
		else {
			if (value == null) {
				value = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			__this.Value = (object)value;
		}
		bVar10 = String.Equals(pSVar5.Id, "general.MapName", 5);
		if (bVar10) {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				if (Il2CppMethodInitialized_075452cd != false) goto label_0589c15d;
	label_0589c18c: ;
				Il2CppMethodInitialized_075452cd = true;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589c169;
	label_0589c1ab: ;
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				pSVar7 = AottgGameCreateSession._Working_k__BackingField ;
			}
			else {
				if (Il2CppMethodInitialized_075452cd == false) goto label_0589c18c;
	label_0589c15d: ;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589c1ab;
	label_0589c169: ;
				pSVar7 = AottgGameCreateSession._Working_k__BackingField ;
			}
			if ((pSVar7 == null) ||(pSVar8 = pSVar7.General, pSVar8 == null)) goto label_0589c361;
			__this_01 = pSVar8.MapCategory;
			if (Il2CppMethodInitialized_075452cd == false) {
				Il2CppMethodInitialized_075452cd = true;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589c1ea;
	label_0589c21a: ;
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				pSVar7 = AottgGameCreateSession._Working_k__BackingField ;
			}
			else {
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589c21a;
	label_0589c1ea: ;
				pSVar7 = AottgGameCreateSession._Working_k__BackingField ;
			}
			if (((pSVar7 == null) ||(pSVar8 = pSVar7.General, pSVar8 == null)) ||(pSVar9 = pSVar8.MapName, pSVar9 == null)) goto label_0589c361;
			pSVar13 = pSVar9._value;
			if (((typeof(BuiltinLevels))._2).cctor_finished_or_no_cctor == 0) {
			}
			pSVar13 = BuiltinLevels.FindMapCategory(pSVar13);
			if (__this_01 == null) goto label_0589c361;
			__this_01.Value = (object)pSVar13;
		}
		bVar10 = String.Equals(pSVar5.Id, "general.MapName", 5);
		if ((!bVar10) &&(bVar10 = String.Equals(pSVar5.Id, "general.GameMode", 5), !bVar10)) {
			return true;
		}
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			__this_02 = AottgGameCreateSession.SandboxConfiguration;
			if (Il2CppMethodInitialized_075452cd != false) goto label_0589c2f2;
	label_0589c339: ;
			Il2CppMethodInitialized_075452cd = true;
			uVar4 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			__this_02 = AottgGameCreateSession.SandboxConfiguration;
			if (Il2CppMethodInitialized_075452cd == false) goto label_0589c339;
	label_0589c2f2: ;
			uVar4 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar4 == 0) {
		}
		if (__this_02 != null) {
			__this_02.RefreshDescriptions(*(InGameSet*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x40));
			return true;
		}
	label_0589c361: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000EA1")]
	[Address(RVA = "0x579C370", Offset = "0x579B370", VA = "0x579C370")]
	public static void SelectCategory(string category)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SelectCategory): 5 lines keep C-only constructs
		uint uVar1;
		Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields pGVar2;
		InGameSet pSVar3;
		BoolSetting __this;
		StringSetting __this_00;
		String subcategory;
		String[] pSVar4;
		MethodInfo method_00;
		Il2CppClass klass;
		MethodInfo method_01;

		if (Il2CppMethodInitialized_0754527f == false) {
			Il2CppMethodInitialized_0754527f = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589c398;
	label_0589c43c: ;
			if (Il2CppMethodInitialized_075452e7 != false) goto label_0589c3a5;
	label_0589c44e: ;
			Il2CppMethodInitialized_075452e7 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589c43c;
	label_0589c398: ;
			if (Il2CppMethodInitialized_075452e7 == false) goto label_0589c44e;
	label_0589c3a5: ;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		klass = typeof(AottgGameCreateSession);
		pGVar2 = typeof(AottgGameCreateSession).static_fields;
		pGVar2._ShowFavorites_k__BackingField = false;
		pGVar2._configurationMode = 0;
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			klass = typeof(AottgGameCreateSession);
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589c3e1;
	label_0589c49d: ;
			pSVar3 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((((AottgGameCreateSession)klass)._2).cctor_finished_or_no_cctor == 0) goto label_0589c49d;
	label_0589c3e1: ;
			pSVar3 = ((AottgGameCreateSession)klass).static_fields. _Working_k__BackingField;
		}
		if ((pSVar3 == null) ||(__this = pSVar3.Sandbox, __this == null)) goto label_0589c7da;
		__this.Value = false;
		if (Il2CppMethodInitialized_075452e0 == false) {
			Il2CppMethodInitialized_075452e0 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pGVar2 = typeof(AottgGameCreateSession).static_fields;
		pGVar2._Category_k__BackingField = category;
		if (Il2CppMethodInitialized_075452e1 == false) {
			Il2CppMethodInitialized_075452e1 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pGVar2 = typeof(AottgGameCreateSession).static_fields;
		pGVar2._Subcategory_k__BackingField = null;
		if (Il2CppMethodInitialized_075452e2 == false) {
			Il2CppMethodInitialized_075452e2 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pGVar2 = typeof(AottgGameCreateSession).static_fields;
		pGVar2._Experience_k__BackingField = null;
		if (Il2CppMethodInitialized_075452e3 == false) {
			Il2CppMethodInitialized_075452e3 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pGVar2 = typeof(AottgGameCreateSession).static_fields;
		pGVar2._RuleResult_k__BackingField = null;
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589c5d0;
	label_0589c6cc: ;
			pSVar3 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589c6cc;
	label_0589c5d0: ;
			pSVar3 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar3 == null) ||(__this_00 = pSVar3.ExperienceName, __this_00 == null)) goto label_0589c7da;
		__this_00.Value = (object)**(ulong*)(g_data_07556758 + 0xb8);
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589c731;
	label_0589c765: ;
			pSVar3 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589c765;
	label_0589c731: ;
			pSVar3 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar3 != null) &&(method_01 = (MethodInfo)pSVar3.ExperienceVariant, method_01 != null)) {
			method_00 = (MethodInfo)**(ulong*)(g_data_07556758 + 0xb8);
			method_01.Value = (object)method_00;
			pSVar4 = AottgGameCreateSession.Subcategories();
			if (pSVar4 != null) {
				if ((int)pSVar4.Length != 1) {
					return;
				}
				subcategory = pSVar4[0];
				AottgGameCreateSession.SelectSubcategory(subcategory);
				return;
			}
		}
	label_0589c7da: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000EA2")]
	[Address(RVA = "0x579C7E0", Offset = "0x579B7E0", VA = "0x579C7E0")]
	public static void SelectSubcategory(string subcategory)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SelectSubcategory): clean
		uint uVar1;
		Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields pGVar2;
		String category;
		Experience experience;
		Experience[] pMVar3;

		if (Il2CppMethodInitialized_07545280 == false) {
			Il2CppMethodInitialized_07545280 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075452e1 == false) {
			Il2CppMethodInitialized_075452e1 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pGVar2 = typeof(AottgGameCreateSession).static_fields;
		pGVar2._Subcategory_k__BackingField = subcategory;
		if (Il2CppMethodInitialized_075452e2 == false) {
			Il2CppMethodInitialized_075452e2 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pGVar2 = typeof(AottgGameCreateSession).static_fields;
		pGVar2._Experience_k__BackingField = null;
		if (Il2CppMethodInitialized_075452e3 == false) {
			Il2CppMethodInitialized_075452e3 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pGVar2 = typeof(AottgGameCreateSession).static_fields;
		pGVar2._RuleResult_k__BackingField = null;
		if (Il2CppMethodInitialized_075452d4 == false) {
			Il2CppMethodInitialized_075452d4 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			category = AottgGameCreateSession. _Category_k__BackingField;
		}
		else {
			category = *(String*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x48);
		}
		if (Il2CppMethodInitialized_07545279 == false) {
			Il2CppMethodInitialized_07545279 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pMVar3 = AottgGameCreateSession.ExperiencesIn(category, subcategory);
		if (pMVar3 == null) {
			throw new NullReferenceException();
		}
		if (((int)pMVar3.Length != 1) ||(experience = pMVar3[0], experience == null)) {
			return;
		}
		AottgGameCreateSession.ConfigureExperience(experience, null, null, false);
		return;
	}

	[Token(Token = "0x6000EA3")]
	[Address(RVA = "0x578FD50", Offset = "0x578ED50", VA = "0x578FD50")]
	public static void SelectExperience(Experience experience)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SelectExperience): clean
		uint uVar1;
		String pSVar2;
		Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields pGVar3;

		if (experience == null) {
			throw new NullReferenceException();
		}
		pSVar2 = experience.Category;
		if (Il2CppMethodInitialized_075452e0 == false) {
			Il2CppMethodInitialized_075452e0 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pGVar3 = typeof(AottgGameCreateSession).static_fields;
		pGVar3._Category_k__BackingField = pSVar2;
		pSVar2 = experience.SubCategory;
		if (Il2CppMethodInitialized_075452e1 == false) {
			Il2CppMethodInitialized_075452e1 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pGVar3 = typeof(AottgGameCreateSession).static_fields;
		pGVar3._Subcategory_k__BackingField = pSVar2;
		AottgGameCreateSession.ConfigureExperience(experience, null, null, false);
		return;
	}

	[Token(Token = "0x6000EA4")]
	[Address(RVA = "0x578E4D0", Offset = "0x578D4D0", VA = "0x578E4D0")]
	public static bool SelectVariant(string variant)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SelectVariant): 8 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		PresetDefinition pSVar4;
		Dictionary<object, object> __this;
		InGameSet pSVar5;
		ExperienceRuleResult pSVar7;
		List<string> __this_00;
		String[] pSVar8;
		MethodInfo pMVar9;
		bool bVar10;
		InGameSet __this_01;
		String pSVar11;
		Experience pMVar12;

		if (Il2CppMethodInitialized_07545282 == false) {
			Il2CppMethodInitialized_07545282 = true;
			if (variant == null) goto label_0588e585;
	label_0588e4ee: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0588e505;
	label_0588e5b4: ;
			if (g_data_075452d2 == false) goto label_0588e5c6;
	label_0588e512: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0588e522;
	label_0588e5e9: ;
			pMVar12 = AottgGameCreateSession. _Experience_k__BackingField;
		}
		else {
			if (variant != null) goto label_0588e4ee;
	label_0588e585: ;
			variant = (String)**(ulong*)(g_data_07556758 + 0xb8);
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0588e5b4;
	label_0588e505: ;
			if (g_data_075452d2 != false) goto label_0588e512;
	label_0588e5c6: ;
			g_data_075452d2 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0588e5e9;
	label_0588e522: ;
			pMVar12 = AottgGameCreateSession. _Experience_k__BackingField;
		}
		if (pMVar12 != null) {
			if (((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				if (Il2CppMethodInitialized_075452d6 == false) goto label_0588e642;
	label_0588e615: ;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0588e621;
	label_0588e661: ;
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				pSVar7 = AottgGameCreateSession. _RuleResult_k__BackingField;
			}
			else {
				if (Il2CppMethodInitialized_075452d6 != false) goto label_0588e615;
	label_0588e642: ;
				Il2CppMethodInitialized_075452d6 = true;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0588e661;
	label_0588e621: ;
				pSVar7 = AottgGameCreateSession. _RuleResult_k__BackingField;
			}
			if (pSVar7 != null) {
				bVar10 = String.IsNullOrEmpty(variant);
				if (!bVar10) {
					if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
						if (Il2CppMethodInitialized_075452d6 == false) goto label_0588e6d1;
	label_0588e6a2: ;
						if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0588e6ae;
	label_0588e6f0: ;
						pSVar7 = AottgGameCreateSession. _RuleResult_k__BackingField;
					}
					else {
						if (Il2CppMethodInitialized_075452d6 != false) goto label_0588e6a2;
	label_0588e6d1: ;
						Il2CppMethodInitialized_075452d6 = true;
						if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0588e6f0;
	label_0588e6ae: ;
						pSVar7 = AottgGameCreateSession. _RuleResult_k__BackingField;
					}
					if ((pSVar7 == null) ||(pSVar4 = pSVar7.Experience, pSVar4 == null)) goto label_0588ec7d;
					if (pSVar4.Variants == null) goto label_0588e8e8;
					if (((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor == 0) {
						if (Il2CppMethodInitialized_075452d6 == false) goto label_0588e765;
	label_0588e736: ;
						if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0588e742;
	label_0588e784: ;
						pSVar7 = AottgGameCreateSession. _RuleResult_k__BackingField;
					}
					else {
						if (Il2CppMethodInitialized_075452d6 != false) goto label_0588e736;
	label_0588e765: ;
						Il2CppMethodInitialized_075452d6 = true;
						if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0588e784;
	label_0588e742: ;
						pSVar7 = AottgGameCreateSession. _RuleResult_k__BackingField;
					}
					if (((pSVar7 == null) ||(pSVar4 = pSVar7.Experience, pSVar4 == null)) ||(__this = (Dictionary<object, object>)pSVar4.Variants, __this == null)) goto label_0588ec7d;
					bVar10 = __this.ContainsKey((object)variant);
					if (!bVar10) goto label_0588e8e8;
				}
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
					if (g_data_075452d2 == false) goto label_0588eb36;
	label_0588e7f1: ;
					if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0588e801;
	label_0588eb59: ;
					pMVar12 = AottgGameCreateSession. _Experience_k__BackingField;
					if (Il2CppMethodInitialized_075452cd == false) goto label_0588eb79;
	label_0588e819: ;
					if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0588e826;
	label_0588eb98: ;
					pSVar5 = AottgGameCreateSession. _Working_k__BackingField;
				}
				else {
					if (g_data_075452d2 != false) goto label_0588e7f1;
	label_0588eb36: ;
					g_data_075452d2 = true;
					if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0588eb59;
	label_0588e801: ;
					pMVar12 = AottgGameCreateSession. _Experience_k__BackingField;
					if (Il2CppMethodInitialized_075452cd != false) goto label_0588e819;
	label_0588eb79: ;
					Il2CppMethodInitialized_075452cd = true;
					if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0588eb98;
	label_0588e826: ;
					pSVar5 = AottgGameCreateSession. _Working_k__BackingField;
				}
				__this_01 = new InGameSet();
				if (pSVar5 != null) {
					pSVar11 = pSVar5.SerializeToJsonString();
					if (__this_01 == null) goto label_0588ec7d;
					__this_01.DeserializeFromJsonString(pSVar11);
				}
				AottgGameCreateSession.ConfigureExperience(pMVar12, __this_01, variant, true) ;
				if (Il2CppMethodInitialized_075452d6 == false) {
					Il2CppMethodInitialized_075452d6 = true;
					if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0588ebe0;
	label_0588e8d1: ;
					pSVar7 = AottgGameCreateSession. _RuleResult_k__BackingField;
				}
				else {
					if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0588e8d1;
	label_0588ebe0: ;
					pSVar7 = AottgGameCreateSession. _RuleResult_k__BackingField;
				}
				if (pSVar7 == null) {
					return false;
				}
				if (((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor == 0) {
					if (Il2CppMethodInitialized_075452d6 == false) goto label_0588ec46;
	label_0588ec0c: ;
					uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
				}
				else {
					if (Il2CppMethodInitialized_075452d6 != false) goto label_0588ec0c;
	label_0588ec46: ;
					Il2CppMethodInitialized_075452d6 = true;
					uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
					pSVar7 = AottgGameCreateSession. _RuleResult_k__BackingField;
				}
				else {
					pSVar7 = *(ExperienceRuleResult*)((long)(typeof(AottgGameCreateSession)). static_fields + 0x60);
				}
				if (pSVar7 != null) {
					bVar10 = pSVar7.IsValid;
					return bVar10;
				}
				goto label_0588ec7d;
			}
		}
	label_0588e8e8: ;
		pSVar11 = Aottg2GisketchLocale.Text("GameCreate.Configuration.UnknownVariant") ;
		pSVar11 = String.Format(pSVar11, (object)variant);
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452e4 == false) goto label_0588e98f;
	label_0588e936: ;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_075452e4 != false) goto label_0588e936;
	label_0588e98f: ;
			Il2CppMethodInitialized_075452e4 = true;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		AottgGameCreateSession._LoadError_k__BackingField = pSVar11;
		if (Il2CppMethodInitialized_075452d6 == false) {
			Il2CppMethodInitialized_075452d6 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0588e9d7;
	label_0588e96e: ;
			pSVar7 = AottgGameCreateSession. _RuleResult_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0588e96e;
	label_0588e9d7: ;
			pSVar7 = AottgGameCreateSession. _RuleResult_k__BackingField;
		}
		if (pSVar7 == null) {
			return false;
		}
		if (((typeof(AottgGameCreateSession))._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452d6 == false) goto label_0588ea32;
	label_0588ea03: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0588ea0f;
	label_0588ea51: ;
			pSVar7 = AottgGameCreateSession. _RuleResult_k__BackingField;
		}
		else {
			if (Il2CppMethodInitialized_075452d6 != false) goto label_0588ea03;
	label_0588ea32: ;
			Il2CppMethodInitialized_075452d6 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0588ea51;
	label_0588ea0f: ;
			pSVar7 = AottgGameCreateSession. _RuleResult_k__BackingField;
		}
		if (pSVar7 != null) {
			__this_00 = pSVar7.Errors;
			if (Il2CppMethodInitialized_075452d5 == false) {
				Il2CppMethodInitialized_075452d5 = true;
				uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar2 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
			}
			pMVar9 = MethodInfo_System_Collections_Generic_List_string_Add;
			if (uVar2 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				pMVar9 = MethodInfo_System_Collections_Generic_List_string_Add;
			}
			MethodInfo_System_Collections_Generic_List_string_Add = pMVar9;
			if (__this_00 != null) {
				pSVar11 = *(String*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x68);
				piVar1 = &__this_00._version;
				*piVar1 = *piVar1 + 1;
				pSVar8 = __this_00._items;
				if (pSVar8 != null) {
					uVar3 = __this_00._size;
					if (uVar3 < (uint)pSVar8.Length) {
						__this_00._size = uVar3 + 1;
						pSVar8[(int)uVar3] = pSVar11;
					}
					else {
						__this_00.AddWithResize((object)pSVar11);
					}
					return false;
				}
			}
		}
	label_0588ec7d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000EA5")]
	[Address(RVA = "0x5799C50", Offset = "0x5798C50", VA = "0x5799C50")]
	private static void ConfigureExperience(Experience experience, InGameSet persisted, [Optional] string variant, bool changingVariant = false)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ConfigureExperience): 28 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		IntPtr pvVar4;
		Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields pGVar5;
		StringSetting pSVar6;
		OrdinalIgnoreCaseComparer comparer;
		Dictionary<object, object> __this;
		InGameGeneralSettings pSVar7;
		StringSetting pSVar8;
		SandboxGameCreateConfiguration pSVar9;
		List<string> pSVar10;
		MethodInfo pMVar11;
		BaseSetting setting;
		BaseSetting setting_00;
		bool bVar12;
		InGameSet pSVar13;
		PresetDefinition __this_00;
		String* ppSVar14;
		object pIVar15;
		ulong uVar16;
		List<UIRule> __this_01;
		Func<string, string> pSVar17;
		ExperienceRuleResult pSVar18;
		String pSVar19;
		MethodInfo method_00;
		String[] pSVar20;
		InGameSet pSVar21;
		ulong uVar22;
		MethodInfo pMVar23;
		Il2CppClass pIVar24;
		HashSet<string> local_c0;
		String local_b0;
		byte[] local_a8 = new byte[16];
		MethodInfo local_98;
		long local_90;
		InGameSet local_88;
		BaseSetting local_80;
		BaseSetting local_78;
		object local_70;
		byte[] local_68 = new byte[8];
		MethodInfo local_58;
		byte[] local_48 = new byte[8];
		MethodInfo local_38;

		pIVar24 = typeof(AottgGameCreateSession);
		local_70 = null;
		local_48 = (byte[])0x0;
		local_38 = null;
		local_68 = (byte[])0x0;
		local_58 = null;
		local_78 = null;
		local_80 = null;
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			pIVar24 = typeof(AottgGameCreateSession);
			AottgGameCreateSession._configurationMode = 0;
			if (Il2CppMethodInitialized_075452e2 != false) goto label_05899e1f;
	label_05899f52: ;
			Il2CppMethodInitialized_075452e2 = true;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			pIVar24 = typeof(AottgGameCreateSession);
		}
		else {
			AottgGameCreateSession._configurationMode = 0;
			if (Il2CppMethodInitialized_075452e2 == false) goto label_05899f52;
	label_05899e1f: ;
			uVar2 = (pIVar24._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			pIVar24 = typeof(AottgGameCreateSession);
		}
		pvVar4 = pIVar24.static_fields;
		*(Experience*)((long)pvVar4 + 0x58) = experience;
		if (Il2CppMethodInitialized_075452e3 == false) {
			Il2CppMethodInitialized_075452e3 = true;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		pGVar5 = typeof(AottgGameCreateSession).static_fields;
		pGVar5._RuleResult_k__BackingField = null;
		if (Il2CppMethodInitialized_075452e4 == false) {
			Il2CppMethodInitialized_075452e4 = true;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		pGVar5 = typeof(AottgGameCreateSession).static_fields;
		pGVar5._LoadError_k__BackingField = null;
		pMVar23 = null;
		pSVar13 = AottgGameCreateSession.CreateOfficialWorkingSet(persisted);
		if (Il2CppMethodInitialized_075452e9 == false) {
			Il2CppMethodInitialized_075452e9 = true;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		pGVar5 = typeof(AottgGameCreateSession).static_fields;
		pGVar5._Working_k__BackingField = pSVar13;
		if (experience == null) {
			pSVar19 = null;
			uVar2 = (typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor;
		}
		else {
			pSVar19 = experience.Name;
			uVar2 = (typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		__this_00 = BuiltinLevels.LoadExperience(pSVar19);
		if (variant == null) {
			if (persisted == null) {
				ppSVar14 = *(String**)(g_data_07556758 + 0xb8);
			}
			else {
				pSVar6 = persisted.ExperienceVariant;
				if (pSVar6 == null) {
					throw new NullReferenceException();
				}
				ppSVar14 = &pSVar6._value;
			}
			variant = *ppSVar14;
		}
		bVar12 = String.IsNullOrEmpty(variant);
		local_b0 = variant;
		if ((bVar12) && (__this_00 != null)) {
			local_b0 = __this_00.DefaultVariant;
		}
		bVar12 = true;
		local_88 = persisted;
		if (changingVariant) {
	label_0589a100: ;
			pSVar13 = local_88;
			local_c0 = null;
			if ((bVar12) && (__this_00 != null)) {
				if (Il2CppMethodInitialized_07542886 == false) {
					Il2CppMethodInitialized_07542886 = true;
					uVar2 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar2 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
				}
				comparer = StringComparer.s_ordinalIgnoreCase;
				local_c0 = new HashSet<string>((IEqualityComparer<T>)comparer);
				pIVar15 = new string[2];
				if (pSVar13 == null) {
					throw new NullReferenceException();
				}
				pSVar6 = pSVar13.ExperienceVariant;
				if (pSVar6 == null) {
					throw new NullReferenceException();
				}
				if (pIVar15 == null) {
					throw new NullReferenceException();
				}
				if (*(int)&pIVar15[1].monitor == 0) {
					throw new IndexOutOfRangeException();
				}
				pIVar15[2].klass = (Il2CppClass)pSVar6._value;
				if (((ulong)pIVar15[1].monitor & 0xfffffffe) == 0) {
					throw new IndexOutOfRangeException();
				}
				pIVar15[2].monitor = local_b0;
				if (0 < (int)pIVar15[1].monitor) {
					uVar16 = (ulong)pIVar15[1].monitor & 0xffffffff;
					uVar22 = 0;
					do {
						if (uVar16 <= uVar22) {
							throw new IndexOutOfRangeException();
						}
						pIVar24 = (&pIVar15[2].klass)[uVar22];
						bVar12 = String.IsNullOrEmpty((String)pIVar24);
						if (((!bVar12) &&(__this = (Dictionary<object, object>)__this_00.Variants, __this != null)) &&(bVar12 = __this.TryGetValue((object)pIVar24, ref local_70))) {
							__this_01 = RuleParser.Parse((IEnumerable<string>)local_70, null);
							if (__this_01 == null) {
								throw new NullReferenceException();
							}
							local_a8.GetEnumerator((List<object>)__this_01);
							local_38 = local_98;
							local_48 = (byte[])local_a8._0_8_;
							local_a8._0_8_ = null;
							local_a8._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_48;
							if (local_c0 == null) {
								bVar12 = local_48.MoveNext();
								if (bVar12) {
									if (local_38 != null) {
										throw new NullReferenceException();
									}
	label_0589a3ab: ;
									throw new NullReferenceException();
								}
							}
							else {
								while (bVar12 = local_48.MoveNext()) {
									if (local_38 == null) goto label_0589a3ab;
									local_c0.Add((object)local_38.name);
								}
							}
							local_48.Dispose();
						}
						uVar22 = uVar22 + 1;
						uVar16 = (ulong)*(uint)&pIVar15[1].monitor;
					} while ((long)uVar22 < (long)(int)*(uint)&pIVar15[1].monitor);
				}
				pSVar13 = new InGameSet();
				if (local_c0 == null) {
					throw new NullReferenceException();
				}
				local_a8.GetEnumerator((HashSet<object>)local_c0);
				local_58 = local_98;
				local_68 = (byte[])local_a8._0_8_;
				local_a8._0_8_ = null;
				local_90 = 0;
				local_a8._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_68;
				while (true) {
					bVar12 = local_68.MoveNext();
					pMVar23 = local_58;
					if (!(bVar12)) break;
					if (Il2CppMethodInitialized_075452cd == false) {
						Il2CppMethodInitialized_075452cd = true;
						if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589a4cd;
	label_0589a516: ;
						pSVar21 = AottgGameCreateSession. _Working_k__BackingField;
						if (Il2CppMethodInitialized_075452c6 != false) goto label_0589a4e1;
	label_0589a539: ;
						Il2CppMethodInitialized_075452c6 = true;
						uVar2 = (typeof(ExperienceRuleEngine)._2).cctor_finished_or_no_cctor;
					}
					else {
						if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589a516;
	label_0589a4cd: ;
						pSVar21 = AottgGameCreateSession. _Working_k__BackingField;
						if (Il2CppMethodInitialized_075452c6 == false) goto label_0589a539;
	label_0589a4e1: ;
						uVar2 = (typeof(ExperienceRuleEngine)._2).cctor_finished_or_no_cctor;
					}
					if (uVar2 == 0) {
					}
					bVar12 = ExperienceRuleEngine.TryResolveSetting(pSVar21, (String)pMVar23, ref local_78);
					if (bVar12) {
						bVar12 = ExperienceRuleEngine.TryResolveSetting(pSVar13, (String)pMVar23, ref local_80);
						setting_00 = local_78;
						setting = local_80;
						if (bVar12) {
							pIVar15 = AottgGameCreateSession.SettingValue(setting);
							AottgGameCreateSession.SetSettingValue(setting_00, pIVar15);
						}
					}
				}
				local_68.Dispose();
				if (local_90 != 0) {
					throw;
				}
			}
		}
		else {
			if (persisted != null) {
				pSVar6 = persisted.ExperienceVariant;
				if (pSVar6 == null) {
					throw new NullReferenceException();
				}
				bVar12 = String.Equals(pSVar6._value, local_b0, 5);
				bVar12 = !bVar12;
				goto label_0589a100;
			}
			local_c0 = null;
		}
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		pSVar13 = AottgGameCreateSession._Working_k__BackingField;
		pSVar21 = local_88;
		pSVar17 = new Func<string, string>(null, (intptr_t)MethodInfo_Map_BuiltinLevels_FindMapCategory);
		pMVar23 = null;
		pSVar18 = ExperienceRuleEngine.Apply(__this_00, pSVar13, pSVar17, local_b0);
		if (Il2CppMethodInitialized_075452e3 == false) {
			Il2CppMethodInitialized_075452e3 = true;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		pGVar5 = typeof(AottgGameCreateSession).static_fields;
		pGVar5._RuleResult_k__BackingField = pSVar18;
		if (Il2CppMethodInitialized_075452d6 == false) {
			Il2CppMethodInitialized_075452d6 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589a7d2;
	label_0589a859: ;
			pSVar18 = AottgGameCreateSession. _RuleResult_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589a859;
	label_0589a7d2: ;
			pSVar18 = AottgGameCreateSession. _RuleResult_k__BackingField;
		}
		if (pSVar18 == null) {
			throw new NullReferenceException();
		}
		method_00 = null;
		bVar12 = pSVar18.IsValid;
		if (bVar12) {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			if (Il2CppMethodInitialized_075452d6 == false) {
				Il2CppMethodInitialized_075452d6 = true;
				uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			AottgGameCreateSession.RestoreEditableValues(AottgGameCreateSession. _RuleResult_k__BackingField, pSVar21, local_c0, true);
			if (Il2CppMethodInitialized_075452cd == false) {
				Il2CppMethodInitialized_075452cd = true;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589a8f7;
	label_0589aa6d: ;
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				pSVar13 = AottgGameCreateSession. _Working_k__BackingField;
			}
			else {
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589aa6d;
	label_0589a8f7: ;
				pSVar13 = AottgGameCreateSession. _Working_k__BackingField;
			}
			if (pSVar13 == null) {
				throw new NullReferenceException();
			}
			pSVar7 = pSVar13.General;
			if (pSVar7 == null) {
				throw new NullReferenceException();
			}
			pSVar6 = pSVar7.MapCategory;
			if (Il2CppMethodInitialized_075452cd == false) {
				Il2CppMethodInitialized_075452cd = true;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589a936;
	label_0589aabc: ;
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				pSVar13 = AottgGameCreateSession. _Working_k__BackingField;
			}
			else {
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589aabc;
	label_0589a936: ;
				pSVar13 = AottgGameCreateSession. _Working_k__BackingField;
			}
			if (pSVar13 == null) {
				throw new NullReferenceException();
			}
			pSVar7 = pSVar13.General;
			if (pSVar7 == null) {
				throw new NullReferenceException();
			}
			pSVar8 = pSVar7.MapName;
			if (pSVar8 == null) {
				throw new NullReferenceException();
			}
			pSVar19 = pSVar8._value;
			if (((typeof(BuiltinLevels))._2).cctor_finished_or_no_cctor == 0) {
			}
			pSVar19 = BuiltinLevels.FindMapCategory(pSVar19);
			if (pSVar6 == null) {
				throw new NullReferenceException();
			}
			pSVar6.Value = (object)pSVar19;
			pSVar9 = AottgGameCreateSession.SandboxConfiguration;
			if (pSVar9 == null) {
				throw new NullReferenceException();
			}
			pSVar9.Reset();
			pSVar9 = AottgGameCreateSession.SandboxConfiguration;
			if (Il2CppMethodInitialized_075452cd == false) {
				Il2CppMethodInitialized_075452cd = true;
				uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			if (pSVar9 == null) {
				throw new NullReferenceException();
			}
			pSVar9.Refresh(*(InGameSet*)((long)(typeof(AottgGameCreateSession)). static_fields + 0x40));
			if (Il2CppMethodInitialized_075452cd == false) {
				Il2CppMethodInitialized_075452cd = true;
				uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			pSVar13 = AottgGameCreateSession._Working_k__BackingField;
			pSVar17 = new Func<string, string>(null, (intptr_t)MethodInfo_Map_BuiltinLevels_FindMapCategory);
			pMVar23 = null;
			pSVar18 = ExperienceRuleEngine.Apply(__this_00, pSVar13, pSVar17, local_b0);
			if (Il2CppMethodInitialized_075452e3 == false) {
				Il2CppMethodInitialized_075452e3 = true;
				uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			pGVar5 = typeof(AottgGameCreateSession).static_fields;
			pGVar5._RuleResult_k__BackingField = pSVar18;
			pSVar9 = AottgGameCreateSession.SandboxConfiguration;
			if (pSVar9 == null) {
				throw new NullReferenceException();
			}
			method_00 = null;
			bVar12 = String.IsNullOrEmpty(pSVar9._LastError_k__BackingField);
			if (!bVar12) {
				if (Il2CppMethodInitialized_075452d6 == false) {
					Il2CppMethodInitialized_075452d6 = true;
					if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589ac86;
	label_0589b22b: ;
					pGVar5 = typeof(AottgGameCreateSession).static_fields;
					pSVar18 = pGVar5._RuleResult_k__BackingField;
					pMVar11 = MethodInfo_System_Collections_Generic_List_string_Add;
				}
				else {
					if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589b22b;
	label_0589ac86: ;
					pGVar5 = typeof(AottgGameCreateSession).static_fields;
					pSVar18 = pGVar5._RuleResult_k__BackingField;
					pMVar11 = MethodInfo_System_Collections_Generic_List_string_Add;
				}
				MethodInfo_System_Collections_Generic_List_string_Add = pMVar11;
				if (pSVar18 == null) {
					throw new NullReferenceException();
				}
				if (pGVar5.SandboxConfiguration == null) {
					throw new NullReferenceException();
				}
				pSVar10 = pSVar18.Errors;
				if (pSVar10 == null) {
	label_0589b297: ;
					throw new NullReferenceException();
				}
				method_00 = (MethodInfo)pGVar5.SandboxConfiguration._LastError_k__BackingField;
				piVar1 = &pSVar10._version;
				*piVar1 = *piVar1 + 1;
				pSVar20 = pSVar10._items;
				if (pSVar20 == null) goto label_0589b297;
				uVar3 = pSVar10._size;
				if (uVar3 < (uint)pSVar20.Length) {
					pSVar10._size = uVar3 + 1;
					pSVar20[(int)uVar3] = (String)method_00;
				}
				else {
					pSVar10.AddWithResize((object)method_00);
				}
			}
		}
		if (pSVar21 == null) goto label_0589ae6c;
		if (Il2CppMethodInitialized_075452d6 == false) {
			Il2CppMethodInitialized_075452d6 = true;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		AottgGameCreateSession.RestoreEditableValues(AottgGameCreateSession. _RuleResult_k__BackingField, pSVar21, local_c0, false);
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589adbb;
	label_0589b088: ;
			pSVar13 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589b088;
	label_0589adbb: ;
			pSVar13 = AottgGameCreateSession._Working_k__BackingField;
		}
		if (pSVar13 == null) {
			throw new NullReferenceException();
		}
		pSVar7 = pSVar13.General;
		if (pSVar7 == null) {
			throw new NullReferenceException();
		}
		pSVar6 = pSVar7.MapCategory;
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589adfa;
	label_0589b0d7: ;
			pSVar13 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589b0d7;
	label_0589adfa: ;
			pSVar13 = AottgGameCreateSession._Working_k__BackingField;
		}
		if (pSVar13 == null) {
			throw new NullReferenceException();
		}
		pSVar7 = pSVar13.General;
		if (pSVar7 == null) {
			throw new NullReferenceException();
		}
		pSVar8 = pSVar7.MapName;
		if (pSVar8 == null) {
			throw new NullReferenceException();
		}
		pSVar19 = pSVar8._value;
		if (((typeof(BuiltinLevels))._2).cctor_finished_or_no_cctor == 0) {
		}
		method_00 = (MethodInfo)BuiltinLevels.FindMapCategory(pSVar19);
		if (pSVar6 == null) {
			throw new NullReferenceException();
		}
		pSVar6.Value = (object)method_00;
	label_0589ae6c: ;
		if (Il2CppMethodInitialized_075452d6 == false) {
			Il2CppMethodInitialized_075452d6 = true;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		AottgGameCreateSession.ValidateContentOptions(AottgGameCreateSession. _RuleResult_k__BackingField);
		if (Il2CppMethodInitialized_075452d6 == false) {
			Il2CppMethodInitialized_075452d6 = true;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			pSVar18 = AottgGameCreateSession. _RuleResult_k__BackingField;
		}
		else {
			pSVar18 = (*(Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields*)((long)typeof(AottgGameCreateSession) + 0xb8)). _RuleResult_k__BackingField;
		}
		if (pSVar18 == null) {
			return;
		}
		if (((typeof(AottgGameCreateSession))._2).cctor_finished_or_no_cctor == 0) {
		}
		if (Il2CppMethodInitialized_075452d6 == false) {
			Il2CppMethodInitialized_075452d6 = true;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			pSVar18 = AottgGameCreateSession. _RuleResult_k__BackingField;
		}
		else {
			pSVar18 = (*(Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields*)((long)typeof(AottgGameCreateSession) + 0xb8)). _RuleResult_k__BackingField;
		}
		if (pSVar18 == null) {
			throw new NullReferenceException();
		}
		bVar12 = pSVar18.IsValid;
		if (bVar12) {
			return;
		}
		if (Il2CppMethodInitialized_075452d6 == false) {
			Il2CppMethodInitialized_075452d6 = true;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			pSVar18 = AottgGameCreateSession. _RuleResult_k__BackingField;
		}
		else {
			pSVar18 = *(ExperienceRuleResult*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x60);
		}
		if (pSVar18 == null) {
			throw new NullReferenceException();
		}
		pSVar10 = pSVar18.Errors;
		if (pSVar10 == null) {
			throw new NullReferenceException();
		}
		pSVar20 = (String[])pSVar10.ToArray();
		pSVar19 = String.Join("\n", pSVar20);
		if (Il2CppMethodInitialized_075452e4 == false) {
			Il2CppMethodInitialized_075452e4 = true;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		pGVar5 = typeof(AottgGameCreateSession).static_fields;
		pGVar5._LoadError_k__BackingField = pSVar19;
		return;
	}

	[Token(Token = "0x6000EA6")]
	[Address(RVA = "0x579D5C0", Offset = "0x579C5C0", VA = "0x579D5C0")]
	public static void SelectSandbox()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SelectSandbox): 11 lines keep C-only constructs
		uint uVar1;
		Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields pGVar2;
		IntPtr pvVar3;
		InGameSet pSVar4;
		InGameSet pSVar5;
		StringSetting pSVar6;
		BoolSetting __this;
		InGameGeneralSettings pSVar7;
		IntSetting __this_00;
		InGameSet __this_01;
		String pSVar8;
		MethodInfo extraout_RDX;
		MethodInfo pMVar9;
		MethodInfo extraout_RDX_00;
		MethodInfo extraout_RDX_01;
		MethodInfo extraout_RDX_02;
		Il2CppClass pIVar10;

		if (Il2CppMethodInitialized_07545284 == false) {
			Il2CppMethodInitialized_07545284 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589d5ec;
	label_0589d96f: ;
			if (Il2CppMethodInitialized_075452e7 != false) goto label_0589d5f9;
	label_0589d981: ;
			Il2CppMethodInitialized_075452e7 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589d96f;
	label_0589d5ec: ;
			if (Il2CppMethodInitialized_075452e7 == false) goto label_0589d981;
	label_0589d5f9: ;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pIVar10 = typeof(AottgGameCreateSession);
		pGVar2 = typeof(AottgGameCreateSession).static_fields;
		pGVar2._ShowFavorites_k__BackingField = false;
		pGVar2._configurationMode = 1;
		if (Il2CppMethodInitialized_075452e8 == false) {
			Il2CppMethodInitialized_075452e8 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			pIVar10 = typeof(AottgGameCreateSession);
		}
		else {
			uVar1 = (((AottgGameCreateSession)pIVar10)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pIVar10 = typeof(AottgGameCreateSession);
		}
		pvVar3 = pIVar10.static_fields;
		*(ulong)((long)pvVar3 + 0x80) = 0;
		if (Il2CppMethodInitialized_075452e6 == false) {
			Il2CppMethodInitialized_075452e6 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pIVar10 = typeof(AottgGameCreateSession);
		AottgGameCreateSession._ShowRoomSettings_k__BackingField = false;
		pSVar8 = "Sandbox";
		if (Il2CppMethodInitialized_075452e0 == false) {
			Il2CppMethodInitialized_075452e0 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			pIVar10 = typeof(AottgGameCreateSession);
		}
		else {
			uVar1 = (((AottgGameCreateSession)pIVar10)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pIVar10 = typeof(AottgGameCreateSession);
		}
		pvVar3 = pIVar10.static_fields;
		*(String*)((long)pvVar3 + 0x48) = pSVar8;
		if (Il2CppMethodInitialized_075452e1 == false) {
			Il2CppMethodInitialized_075452e1 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pGVar2 = typeof(AottgGameCreateSession).static_fields;
		pGVar2._Subcategory_k__BackingField = null;
		if (Il2CppMethodInitialized_075452e2 == false) {
			Il2CppMethodInitialized_075452e2 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pGVar2 = typeof(AottgGameCreateSession).static_fields;
		pGVar2._Experience_k__BackingField = null;
		if (Il2CppMethodInitialized_075452e3 == false) {
			Il2CppMethodInitialized_075452e3 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pGVar2 = typeof(AottgGameCreateSession).static_fields;
		pGVar2._RuleResult_k__BackingField = null;
		if (Il2CppMethodInitialized_075452e4 == false) {
			Il2CppMethodInitialized_075452e4 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pGVar2 = typeof(AottgGameCreateSession).static_fields;
		pGVar2._LoadError_k__BackingField = null;
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar4 = AottgGameCreateSession._Working_k__BackingField;
		pSVar5 = SettingsManager.InGameUI;
		__this_01 = new InGameSet();
		if (pSVar5 != null) {
			pSVar8 = pSVar5.SerializeToJsonString();
			if (__this_01 == null) goto label_0589de57;
			__this_01.DeserializeFromJsonString(pSVar8);
		}
		if (Il2CppMethodInitialized_075452e9 == false) {
			Il2CppMethodInitialized_075452e9 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pGVar2 = typeof(AottgGameCreateSession).static_fields;
		pGVar2._Working_k__BackingField = __this_01;
		if (pSVar4 != null) {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				pMVar9 = extraout_RDX_00;
				if (Il2CppMethodInitialized_075452cd != false) goto label_0589d894;
	label_0589de27: ;
				Il2CppMethodInitialized_075452cd = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
				pMVar9 = extraout_RDX_01;
			}
			else {
				pMVar9 = extraout_RDX;
				if (Il2CppMethodInitialized_075452cd == false) goto label_0589de27;
	label_0589d894: ;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				pMVar9 = extraout_RDX_02;
			}
			AottgGameCreateSession.CopyRoomSettings(pSVar4, AottgGameCreateSession. _Working_k__BackingField);
		}
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452cd != false) goto label_0589d8d4;
	label_0589db6b: ;
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589d8e4;
	label_0589db8e: ;
			pSVar4 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if (Il2CppMethodInitialized_075452cd == false) goto label_0589db6b;
	label_0589d8d4: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589db8e;
	label_0589d8e4: ;
			pSVar4 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar4 == null) ||(pSVar6 = pSVar4.ExperienceName, pSVar6 == null)) goto label_0589de57;
		pSVar6.Value = (object)**(ulong*)(g_data_07556758 + 0xb8);
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589dbf3;
	label_0589dc27: ;
			pSVar4 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589dc27;
	label_0589dbf3: ;
			pSVar4 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar4 == null) ||(pSVar6 = pSVar4.ExperienceVariant, pSVar6 == null)) goto label_0589de57;
		pSVar6.Value = (object)**(ulong*)(g_data_07556758 + 0xb8);
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589dc81;
	label_0589dcb5: ;
			pSVar4 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589dcb5;
	label_0589dc81: ;
			pSVar4 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar4 == null) ||(__this = pSVar4.Sandbox, __this == null)) goto label_0589de57;
		__this.Value = true;
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589dd0a;
	label_0589dd3e: ;
			pSVar4 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589dd3e;
	label_0589dd0a: ;
			pSVar4 = AottgGameCreateSession._Working_k__BackingField;
		}
		if (((pSVar4 != null) &&(pSVar7 = pSVar4.General, pSVar7 != null)) &&(__this_00 = pSVar7.Difficulty, __this_00 != null)) {
			__this_00.Value = 2;
			pSVar8 = "General";
			if (Il2CppMethodInitialized_075452e5 == false) {
				Il2CppMethodInitialized_075452e5 = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			pGVar2 = typeof(AottgGameCreateSession).static_fields;
			pGVar2._SandboxSection_k__BackingField = pSVar8;
			pMVar9 = (MethodInfo)AottgGameCreateSession.SandboxConfiguration;
			if (pMVar9 != null) {
				pMVar9.Reset();
				AottgGameCreateSession.RefreshSandbox();
				return;
			}
		}
	label_0589de57: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000EA7")]
	[Address(RVA = "0x578AF50", Offset = "0x5789F50", VA = "0x578AF50")]
	public static bool SelectSandboxSection(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SelectSandboxSection): 1 lines keep C-only constructs
		uint uVar1;
		String pSVar2;
		WeatherSettings pSVar4;
		SetSettingsContainer<WeatherSet> pSVar5;
		IntSetting __this;
		InGameSet pSVar6;
		IntSetting pSVar7;
		bool bVar8;
		String[] pSVar9;

		bVar8 = AottgGameCreateSession.IsSandbox;
		if ((index < 0) || (!bVar8)) {
			return false;
		}
		pSVar9 = AottgGameCreateSession.SandboxSectionsInternal;
		if (pSVar9 == null) goto label_0588b213;
		if ((int)pSVar9.Length <= index) {
			return false;
		}
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			pSVar9 = AottgGameCreateSession.SandboxSectionsInternal;
			if (pSVar9 == null) goto label_0588b213;
		}
		if ((uint)pSVar9.Length <= (uint)index) {
			throw new IndexOutOfRangeException();
		}
		pSVar2 = pSVar9[(uint)index];
		if (Il2CppMethodInitialized_075452e5 == false) {
			Il2CppMethodInitialized_075452e5 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		AottgGameCreateSession._SandboxSection_k__BackingField = pSVar2;
		if (Il2CppMethodInitialized_075452cf == false) {
			Il2CppMethodInitialized_075452cf = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar8 = (AottgGameCreateSession. _SandboxSection_k__BackingField == "Weather");
		if (!bVar8) goto label_0588b1f4;
		pSVar4 = SettingsManager.WeatherSettings;
		if ((pSVar4 == null) ||(pSVar5 = pSVar4.WeatherSets, pSVar5 == null)) goto label_0588b213;
		__this = pSVar5.SelectedSetIndex;
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452cd == false) goto label_0588b196;
	label_0588b0f6: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0588b106;
	label_0588b1b9: ;
			pSVar6 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if (Il2CppMethodInitialized_075452cd != false) goto label_0588b0f6;
	label_0588b196: ;
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0588b1b9;
	label_0588b106: ;
			pSVar6 = AottgGameCreateSession._Working_k__BackingField;
		}
		if (((pSVar6 != null) &&(pSVar7 = pSVar6.WeatherIndex, pSVar7 != null)) &&(__this != null)) {
			__this.Value = pSVar7._value;
	label_0588b1f4: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			AottgGameCreateSession.RebuildSandboxFields();
			return true;
		}
	label_0588b213: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000EA8")]
	[Address(RVA = "0x578BBC0", Offset = "0x578ABC0", VA = "0x578BBC0")]
	public static void SetShowSandboxVariableNames(bool show)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SetShowSandboxVariableNames): 4 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_07545286 == false) {
			Il2CppMethodInitialized_07545286 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgGameCreateSession);
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgGameCreateSession);
		}
		typeof(AottgGameCreateSession) =(AottgGameCreateSession)klass;
		if (uVar1 == 0) {
			bVar2 = AottgGameCreateSession.IsSandbox;
			if (bVar2) goto label_0588bc25;
		}
		else {
			bVar2 = AottgGameCreateSession.IsSandbox;
			if (bVar2) {
	label_0588bc25: ;
				AottgGameCreateSession._showSandboxVariableNames = show;
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6000EA9")]
	[Address(RVA = "0x579EE70", Offset = "0x579DE70", VA = "0x579EE70")]
	public static void SetShowLockedSettings(bool show)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SetShowLockedSettings): clean
		AottgGameCreateSession._showLockedSettings = show;
		return;
	}

	[Token(Token = "0x6000EAA")]
	[Address(RVA = "0x578C470", Offset = "0x578B470", VA = "0x578C470")]
	public static string TitanSpawnPreset()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$TitanSpawnPreset): 7 lines keep C-only constructs
		sbyte cVar1;
		InGameSet pSVar2;
		Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields pGVar3;
		InGameTitanSettings pSVar4;
		BoolSetting pSVar5;
		bool bVar6;
		Single[] actual;
		Single[] pSVar7;
		String* ppSVar9;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_07545288 == false) {
			Il2CppMethodInitialized_07545288 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0588c56c;
	label_0588c499: ;
			if (Il2CppMethodInitialized_075452cd != false) goto label_0588c4a6;
	label_0588c57e: ;
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0588c5a2;
	label_0588c4b7: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0588c499;
	label_0588c56c: ;
			if (Il2CppMethodInitialized_075452cd == false) goto label_0588c57e;
	label_0588c4a6: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0588c4b7;
	label_0588c5a2: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		ppSVar9 = &"Default";
		if (pSVar2 == null) goto label_0588c797;
		ppSVar9 = &"Default";
		if (((typeof(AottgGameCreateSession))._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452cd == false) goto label_0588c606;
	label_0588c5d6: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0588c5e3;
	label_0588c626: ;
			pGVar3 = typeof(AottgGameCreateSession).static_fields;
			pSVar2 = pGVar3._Working_k__BackingField;
		}
		else {
			if (Il2CppMethodInitialized_075452cd != false) goto label_0588c5d6;
	label_0588c606: ;
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0588c626;
	label_0588c5e3: ;
			pGVar3 = typeof(AottgGameCreateSession).static_fields;
			pSVar2 = pGVar3._Working_k__BackingField;
		}
		if (((pSVar2 == null) ||(pSVar4 = pSVar2.Titan, pSVar4 == null)) ||(pSVar5 = pSVar4.TitanSpawnEnabled, pSVar5 == null)) {
	label_0588c7a6: ;
			throw new NullReferenceException();
		}
		if (pSVar5._value == false) goto label_0588c797;
		if (((typeof(AottgGameCreateSession))._2).cctor_finished_or_no_cctor == 0) {
			cVar1 = AottgGameCreateSession._titanSpawnPresetCustom;
			klass = typeof(AottgGameCreateSession);
		}
		else {
			cVar1 = pGVar3._titanSpawnPresetCustom;
			klass = typeof(AottgGameCreateSession);
		}
		typeof(AottgGameCreateSession) =(AottgGameCreateSession)klass;
		if (cVar1 == false) {
			actual = AottgGameCreateSession.TitanSpawnProbabilities();
			pSVar7 = (Single[])new float[6];
			if (pSVar7 == null) goto label_0588c7a6;
			if ((int)pSVar7.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pSVar7[0] = 100.0;
			bVar6 = AottgGameCreateSession.Matches(actual, pSVar7);
			if (bVar6) {
				ppSVar9 = &"All Normal";
				goto label_0588c797;
			}
			pSVar7 = (Single[])new float[6];
			RuntimeHelpers.InitializeArray((Array)pSVar7, FieldRva_PrivateImplementationDetails_0A95B058D7E04CB679EC0BB7F95FA5C0DC8DD51BCB9AD7669DDBDD3EA54E9D23);
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			bVar6 = AottgGameCreateSession.Matches(actual, pSVar7);
			if (bVar6) {
				ppSVar9 = &"Variety";
				goto label_0588c797;
			}
			pSVar7 = (Single[])new float[6];
			RuntimeHelpers.InitializeArray((Array)pSVar7, FieldRva_PrivateImplementationDetails_E9A2C0082D51D723E68D8CF41DC35C2AADBFDECED5F50F2C2900AAFF99643D89);
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			bVar6 = AottgGameCreateSession.Matches(actual, pSVar7);
			if (bVar6) {
				ppSVar9 = &"All Abnormals";
				goto label_0588c797;
			}
		}
		ppSVar9 = &"Custom";
	label_0588c797: ;
		return *ppSVar9;
	}

	[Token(Token = "0x6000EAB")]
	[Address(RVA = "0x578C8D0", Offset = "0x578B8D0", VA = "0x578C8D0")]
	public static void SetTitanSpawnPreset(string preset)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SetTitanSpawnPreset): clean
		uint uVar1;
		InGameSet pSVar2;
		InGameTitanSettings pSVar3;
		BoolSetting __this;
		bool bVar4;
		Single[] values;
		RuntimeFieldHandle pSVar5;
		RuntimeFieldHandle fldHandle;

		if (Il2CppMethodInitialized_07545289 == false) {
			Il2CppMethodInitialized_07545289 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0588c8f8;
	label_0588c9c2: ;
			if (Il2CppMethodInitialized_075452cd != false) goto label_0588c905;
	label_0588c9d4: ;
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0588c915;
	label_0588c9f7: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0588c9c2;
	label_0588c8f8: ;
			if (Il2CppMethodInitialized_075452cd == false) goto label_0588c9d4;
	label_0588c905: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0588c9f7;
	label_0588c915: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		if (pSVar2 == null) {
			return;
		}
		if (((typeof(AottgGameCreateSession))._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452cd != false) goto label_0588ca23;
	label_0588ca52: ;
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0588ca2f;
	label_0588ca71: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if (Il2CppMethodInitialized_075452cd == false) goto label_0588ca52;
	label_0588ca23: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0588ca71;
	label_0588ca2f: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar2 != null) &&(pSVar3 = pSVar2.Titan, pSVar3 != null)) {
			__this = pSVar3.TitanSpawnEnabled;
			bVar4 = (preset != "Default");
			if (__this != null) {
				__this.Value = bVar4;
				bVar4 = (preset == "Custom");
				AottgGameCreateSession._titanSpawnPresetCustom = bVar4;
				bVar4 = (preset == "All Normal");
				if (bVar4) {
					fldHandle.value = (RuntimeFieldHandle)6;
					values = (Single[])new float[6];
					if (values == null) goto label_0588cbee;
					if ((int)values.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					values[0] = 100.0;
					uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
				}
				else {
					bVar4 = (preset == "Variety");
					if (bVar4) {
						values = (Single[])new float[6];
						pSVar5 = (RuntimeFieldHandle)& FieldRva_PrivateImplementationDetails_0A95B058D7E04CB679EC0BB7F95FA5C0DC8DD51BCB9AD7669DDBDD3EA54E9D23 ;
					}
					else {
						bVar4 = (preset == "All Abnormals");
						if (!bVar4) {
							return;
						}
						values = (Single[])new float[6];
						pSVar5 = (RuntimeFieldHandle)& FieldRva_PrivateImplementationDetails_E9A2C0082D51D723E68D8CF41DC35C2AADBFDECED5F50F2C2900AAFF99643D89 ;
					}
					fldHandle.value = (RuntimeFieldHandle)pSVar5.value;
					RuntimeHelpers.InitializeArray((Array)values, fldHandle);
					uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				AottgGameCreateSession.SetTitanSpawnProbabilities(values);
				return;
			}
		}
	label_0588cbee: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000EAC")]
	[Address(RVA = "0x579EEC0", Offset = "0x579DEC0", VA = "0x579EEC0")]
	public static float[] TitanSpawnProbabilities()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$TitanSpawnProbabilities): 23 lines keep C-only constructs
		uint uVar1;
		InGameSet pSVar2;
		InGameTitanSettings pSVar3;
		FloatSetting pSVar4;
		Single[] pSVar5;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_0754528a == false) {
			Il2CppMethodInitialized_0754528a = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589eee8;
	label_0589efb6: ;
			if (Il2CppMethodInitialized_075452cd != false) goto label_0589eef5;
	label_0589efc8: ;
			Il2CppMethodInitialized_075452cd = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589efb6;
	label_0589eee8: ;
			if (Il2CppMethodInitialized_075452cd == false) goto label_0589efc8;
	label_0589eef5: ;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (AottgGameCreateSession._Working_k__BackingField ==null) {
			pSVar5 = (Single[])new float[0];
			return pSVar5;
		}
		pSVar5 = (Single[])new float[6];
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452cd != false) goto label_0589ef4b;
	label_0589f018: ;
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589ef5b;
	label_0589f03b: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
			klass = typeof(AottgGameCreateSession);
		}
		else {
			if (Il2CppMethodInitialized_075452cd == false) goto label_0589f018;
	label_0589ef4b: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589f03b;
	label_0589ef5b: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
			klass = typeof(AottgGameCreateSession);
		}
		typeof(AottgGameCreateSession) =(AottgGameCreateSession)klass;
		if ((((pSVar2 == null) ||(pSVar3 = pSVar2.Titan, pSVar3 == null)) ||(pSVar4 = pSVar3.TitanSpawnNormal, pSVar4 == null)) ||(pSVar5 == null)) goto label_0589f348;
		if ((int)pSVar5.Length == 0) goto label_0589f34d;
		pSVar5[0] = pSVar4._value;
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			klass = typeof(AottgGameCreateSession);
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589f0a0;
	label_0589f0d0: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
			klass = typeof(AottgGameCreateSession);
		}
		else {
			if ((klass._2).cctor_finished_or_no_cctor == 0) goto label_0589f0d0;
	label_0589f0a0: ;
			pSVar2 = klass.static_fields._Working_k__BackingField;
		}
		if (((pSVar2 == null) ||(pSVar3 = pSVar2.Titan, pSVar3 == null)) ||(pSVar4 = pSVar3.TitanSpawnAbnormal, pSVar4 == null)) goto label_0589f348;
		if ((pSVar5.Length & 0xfffffffe) == 0) goto label_0589f34d;
		pSVar5[1] = pSVar4._value;
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			klass = typeof(AottgGameCreateSession);
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589f12f;
	label_0589f15f: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
			klass = typeof(AottgGameCreateSession);
		}
		else {
			if ((klass._2).cctor_finished_or_no_cctor == 0) goto label_0589f15f;
	label_0589f12f: ;
			pSVar2 = klass.static_fields._Working_k__BackingField;
		}
		if (((pSVar2 == null) ||(pSVar3 = pSVar2.Titan, pSVar3 == null)) ||(pSVar4 = pSVar3.TitanSpawnJumper, pSVar4 == null)) goto label_0589f348;
		if ((uint)pSVar5.Length < 3) goto label_0589f34d;
		pSVar5[2] = pSVar4._value;
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			klass = typeof(AottgGameCreateSession);
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589f1bb;
	label_0589f1eb: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
			klass = typeof(AottgGameCreateSession);
		}
		else {
			if ((klass._2).cctor_finished_or_no_cctor == 0) goto label_0589f1eb;
	label_0589f1bb: ;
			pSVar2 = klass.static_fields._Working_k__BackingField;
		}
		if (((pSVar2 == null) ||(pSVar3 = pSVar2.Titan, pSVar3 == null)) ||(pSVar4 = pSVar3.TitanSpawnCrawler, pSVar4 == null)) goto label_0589f348;
		if ((pSVar5.Length & 0xfffffffc) == 0) goto label_0589f34d;
		pSVar5[3] = pSVar4._value;
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			klass = typeof(AottgGameCreateSession);
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589f24a;
	label_0589f27a: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
			klass = typeof(AottgGameCreateSession);
		}
		else {
			if ((klass._2).cctor_finished_or_no_cctor == 0) goto label_0589f27a;
	label_0589f24a: ;
			pSVar2 = klass.static_fields._Working_k__BackingField;
		}
		if (((pSVar2 == null) ||(pSVar3 = pSVar2.Titan, pSVar3 == null)) ||(pSVar4 = pSVar3.TitanSpawnThrower, pSVar4 == null)) goto label_0589f348;
		if ((uint)pSVar5.Length < 5) goto label_0589f34d;
		pSVar5[4] = pSVar4._value;
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			klass = typeof(AottgGameCreateSession);
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589f2d6;
	label_0589f303: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((klass._2).cctor_finished_or_no_cctor == 0) goto label_0589f303;
	label_0589f2d6: ;
			pSVar2 = klass.static_fields._Working_k__BackingField;
		}
		if (((pSVar2 != null) &&(pSVar3 = pSVar2.Titan, pSVar3 != null)) &&(pSVar4 = pSVar3.TitanSpawnPunk, pSVar4 != null)) {
			if (5 < (uint)pSVar5.Length) {
				pSVar5[5] = pSVar4._value;
				return pSVar5;
			}
	label_0589f34d: ;
			throw new IndexOutOfRangeException();
		}
	label_0589f348: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000EAD")]
	[Address(RVA = "0x579F5C0", Offset = "0x579E5C0", VA = "0x579F5C0")]
	public static void SetTitanSpawnProbability(int index, float value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SetTitanSpawnProbability): 6 lines keep C-only constructs
		InGameSet pSVar1;
		InGameTitanSettings pSVar2;
		BoolSetting __this;
		FloatSetting __this_00;
		FloatSetting[] pSVar3;
		Il2CppClass klass;
		float fVar4;

		if (Il2CppMethodInitialized_0754528b == false) {
			Il2CppMethodInitialized_0754528b = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589f5f2;
	label_0589f672: ;
			if (Il2CppMethodInitialized_075452cd != false) goto label_0589f5ff;
	label_0589f684: ;
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589f610;
	label_0589f6a8: ;
			pSVar1 = AottgGameCreateSession._Working_k__BackingField;
			klass = typeof(AottgGameCreateSession);
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589f672;
	label_0589f5f2: ;
			if (Il2CppMethodInitialized_075452cd == false) goto label_0589f684;
	label_0589f5ff: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589f6a8;
	label_0589f610: ;
			pSVar1 = AottgGameCreateSession._Working_k__BackingField;
			klass = typeof(AottgGameCreateSession);
		}
		if (pSVar1 == null) {
			typeof(AottgGameCreateSession) =(AottgGameCreateSession)klass;
			return;
		}
		typeof(AottgGameCreateSession) =(AottgGameCreateSession)klass;
		if ((klass._2).cctor_finished_or_no_cctor == 0) {
			pSVar3 = AottgGameCreateSession.TitanSpawnSettings();
		}
		else {
			pSVar3 = AottgGameCreateSession.TitanSpawnSettings();
		}
		if (index < 0) {
			return;
		}
		if (pSVar3 == null) goto label_0589f825;
		if ((int)pSVar3.Length <= index) {
			return;
		}
		if (((typeof(AottgGameCreateSession))._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452cd != false) goto label_0589f70b;
	label_0589f744: ;
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589f718;
	label_0589f764: ;
			pSVar1 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if (Il2CppMethodInitialized_075452cd == false) goto label_0589f744;
	label_0589f70b: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589f764;
	label_0589f718: ;
			pSVar1 = AottgGameCreateSession._Working_k__BackingField;
		}
		if (((pSVar1 != null) &&(pSVar2 = pSVar1.Titan, pSVar2 != null)) &&(__this = pSVar2.TitanSpawnEnabled, __this != null)) {
			__this.Value = true;
			AottgGameCreateSession._titanSpawnPresetCustom = true;
			if ((uint)pSVar3.Length <= (uint)index) {
				throw new IndexOutOfRangeException();
			}
			__this_00 = pSVar3[(uint)index];
			fVar4 = Math.Min(100.0, value);
			fVar4 = Math.Max(0.0, fVar4);
			if (__this_00 != null) {
				__this_00.Value = fVar4;
				return;
			}
		}
	label_0589f825: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000EAE")]
	[Address(RVA = "0x579FCD0", Offset = "0x579ECD0", VA = "0x579FCD0")]
	public static void ResetTitanSpawnProbabilities()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ResetTitanSpawnProbabilities): 1 lines keep C-only constructs
		Single[] values;
		MethodInfo method_00;

		AottgGameCreateSession._titanSpawnPresetCustom = true;
		method_00 = (MethodInfo)&g_data_00000006;
		values = (Single[])new float[6];
		AottgGameCreateSession.SetTitanSpawnProbabilities(values);
		return;
	}

	[Token(Token = "0x6000EAF")]
	[Address(RVA = "0x579FD40", Offset = "0x579ED40", VA = "0x579FD40")]
	public static void AutofillTitanSpawnProbabilities()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$AutofillTitanSpawnProbabilities): 7 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		object pIVar3;
		int iVar4;
		Single[] values;
		Func<float, bool> pSVar5;
		Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_StaticFields pGVar6;
		System_Collections_Generic_IEnumerable_TSource__o source;
		ulong uVar7;
		ulong uVar8;
		float fVar9;

		values = AottgGameCreateSession.TitanSpawnProbabilities();
		if ((typeof(AottgGameCreateSession.c)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession.c)) ;
			pGVar6 = typeof(AottgGameCreateSession.c).static_fields;
			pSVar5 = pGVar6.__9__114_0;
		}
		else {
			pGVar6 = typeof(AottgGameCreateSession.c).static_fields;
			pSVar5 = pGVar6.__9__114_0;
		}
		if (pSVar5 == null) {
			if (((typeof(AottgGameCreateSession.c))._2). cctor_finished_or_no_cctor == 0) {
				pGVar6 = typeof(AottgGameCreateSession.c).static_fields;
			}
			pIVar3 = (object)pGVar6.__9;
			pSVar5 = new Func<float, bool>(pIVar3, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_AutofillTitanSpawnProbabilities_b__114_0);
			pGVar6 = typeof(AottgGameCreateSession.c).static_fields;
			pGVar6.__9__114_0 = pSVar5;
		}
		iVar4 = Enumerable.Count<float>((System_Collections_Generic_IEnumerable_TSource__o)values, (System_Func_TSource__bool__o)pSVar5);
		if (iVar4 == 0) {
			return;
		}
		if ((typeof(AottgGameCreateSession.c)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession.c)) ;
			pGVar6 = typeof(AottgGameCreateSession.c).static_fields;
			pSVar5 = pGVar6.__9__114_1;
		}
		else {
			pGVar6 = typeof(AottgGameCreateSession.c).static_fields;
			pSVar5 = pGVar6.__9__114_1;
		}
		if (pSVar5 == null) {
			if (((typeof(AottgGameCreateSession.c))._2). cctor_finished_or_no_cctor == 0) {
				pGVar6 = typeof(AottgGameCreateSession.c).static_fields;
			}
			pIVar3 = (object)pGVar6.__9;
			pSVar5 = new Func<float, bool>(pIVar3, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_AutofillTitanSpawnProbabilities_b__114_1);
			pGVar6 = typeof(AottgGameCreateSession.c).static_fields;
			pGVar6.__9__114_1 = pSVar5;
		}
		source = Enumerable.Where<float>((System_Collections_Generic_IEnumerable_TSource__o)values, (System_Func_TSource__bool__o)pSVar5);
		fVar9 = Enumerable.Sum((IEnumerable<float>)source);
		fVar9 = Math.Max(0.0, 100.0 - fVar9);
		AottgGameCreateSession._titanSpawnPresetCustom = true;
		if (values == null) {
			throw new NullReferenceException();
		}
		if (0 < (int)values.Length) {
			uVar7 = values.Length & 0xffffffff;
			uVar8 = 0;
			do {
				if (uVar7 <= uVar8) {
	label_058a00b4: ;
					throw new IndexOutOfRangeException();
				}
				fVar1 = values[uVar8];
				if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
					uVar2 = (uint)values.Length;
				}
				else {
					uVar2 = (uint)values.Length;
				}
				uVar7 = (ulong)uVar2;
				if (ABS(fVar1) < 0.0001) {
					if (uVar7 <= uVar8) goto label_058a00b4;
					values[uVar8] = fVar9 / (float)iVar4;
				}
				uVar8 = uVar8 + 1;
			} while ((long)uVar8 < (long)(int)uVar2);
		}
		AottgGameCreateSession.SetTitanSpawnProbabilities(values);
		return;
	}

	[Token(Token = "0x6000EB0")]
	[Address(RVA = "0x57A00C0", Offset = "0x579F0C0", VA = "0x57A00C0")]
	public static void SetTitanHealthEnabled(bool enabled)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SetTitanHealthEnabled): 2 lines keep C-only constructs
		InGameSet pSVar1;
		InGameTitanSettings pSVar2;
		IntSetting __this;
		IntSetting pSVar3;
		int iVar4;

		if (Il2CppMethodInitialized_0754528e == false) {
			Il2CppMethodInitialized_0754528e = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058a00ec;
	label_058a01af: ;
			if (Il2CppMethodInitialized_075452cd != false) goto label_058a00f9;
	label_058a01c1: ;
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058a010a;
	label_058a01e5: ;
			pSVar1 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058a01af;
	label_058a00ec: ;
			if (Il2CppMethodInitialized_075452cd == false) goto label_058a01c1;
	label_058a00f9: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058a01e5;
	label_058a010a: ;
			pSVar1 = AottgGameCreateSession._Working_k__BackingField;
		}
		if (pSVar1 == null) {
			return;
		}
		if (((typeof(AottgGameCreateSession))._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452cd != false) goto label_058a0136;
	label_058a0217: ;
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058a0147;
	label_058a023b: ;
			pSVar1 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if (Il2CppMethodInitialized_075452cd == false) goto label_058a0217;
	label_058a0136: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058a023b;
	label_058a0147: ;
			pSVar1 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.Titan, pSVar2 == null)) goto label_058a034d;
		__this = pSVar2.TitanHealthMode;
		iVar4 = 0;
		if (enabled) {
			if (((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				if (Il2CppMethodInitialized_075452cd != false) goto label_058a0289;
	label_058a02b9: ;
				Il2CppMethodInitialized_075452cd = true;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058a0296;
	label_058a02d9: ;
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				pSVar1 = AottgGameCreateSession._Working_k__BackingField ;
			}
			else {
				if (Il2CppMethodInitialized_075452cd == false) goto label_058a02b9;
	label_058a0289: ;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058a02d9;
	label_058a0296: ;
				pSVar1 = AottgGameCreateSession._Working_k__BackingField ;
			}
			if (((pSVar1 == null) ||(pSVar2 = pSVar1.Titan, pSVar2 == null)) ||(pSVar3 = pSVar2.TitanHealthMode, pSVar3 == null)) goto label_058a034d;
			iVar4 = pSVar3._value;
			if (((typeof(Math))._2).cctor_finished_or_no_cctor == 0) {
			}
			iVar4 = Math.Max(1, iVar4);
		}
		if (__this != null) {
			__this.Value = iVar4;
			return;
		}
	label_058a034d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000EB1")]
	[Address(RVA = "0x579F830", Offset = "0x579E830", VA = "0x579F830")]
	private static FloatSetting[] TitanSpawnSettings()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$TitanSpawnSettings): 6 lines keep C-only constructs
		InGameSet pSVar1;
		InGameTitanSettings pSVar2;
		FloatSetting pSVar3;
		FloatSetting[] pSVar4;
		object pIVar5;

		pSVar4 = (FloatSetting[])new FloatSetting[6];
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452cd == false) goto label_0589f8bf;
	label_0589f890: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589f89c;
	label_0589f8de: ;
			pSVar1 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if (Il2CppMethodInitialized_075452cd != false) goto label_0589f890;
	label_0589f8bf: ;
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589f8de;
	label_0589f89c: ;
			pSVar1 = AottgGameCreateSession._Working_k__BackingField;
		}
		if (((pSVar1 == null) ||(pSVar2 = pSVar1.Titan, pSVar2 == null)) ||(pSVar4 == null)) goto label_0589fcb4;
		pSVar3 = pSVar2.TitanSpawnNormal;
		if ((pSVar3 != null) &&(pIVar5 = il2cpp_vm_Object_IsInst((object)pSVar3, (((pSVar4.obj).klass)._1).element_class), pIVar5 == null)) goto label_0589fcbe;
		if ((int)pSVar4.Length == 0) goto label_0589fcb9;
		pSVar4[0] = pSVar3;
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589f995;
	label_0589f961: ;
			pSVar1 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589f961;
	label_0589f995: ;
			pSVar1 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.Titan, pSVar2 == null)) goto label_0589fcb4;
		pSVar3 = pSVar2.TitanSpawnAbnormal;
		if ((pSVar3 != null) &&(pIVar5 = il2cpp_vm_Object_IsInst((object)pSVar3, (((pSVar4.obj).klass)._1).element_class), pIVar5 == null)) goto label_0589fcbe;
		if ((pSVar4.Length & 0xfffffffe) == 0) goto label_0589fcb9;
		pSVar4[1] = pSVar3;
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589fa46;
	label_0589fa12: ;
			pSVar1 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589fa12;
	label_0589fa46: ;
			pSVar1 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.Titan, pSVar2 == null)) goto label_0589fcb4;
		pSVar3 = pSVar2.TitanSpawnJumper;
		if ((pSVar3 != null) &&(pIVar5 = il2cpp_vm_Object_IsInst((object)pSVar3, (((pSVar4.obj).klass)._1).element_class), pIVar5 == null)) goto label_0589fcbe;
		if ((uint)pSVar4.Length < 3) goto label_0589fcb9;
		pSVar4[2] = pSVar3;
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589faf4;
	label_0589fac0: ;
			pSVar1 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589fac0;
	label_0589faf4: ;
			pSVar1 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.Titan, pSVar2 == null)) goto label_0589fcb4;
		pSVar3 = pSVar2.TitanSpawnCrawler;
		if ((pSVar3 != null) &&(pIVar5 = il2cpp_vm_Object_IsInst((object)pSVar3, (((pSVar4.obj).klass)._1).element_class), pIVar5 == null)) goto label_0589fcbe;
		if ((pSVar4.Length & 0xfffffffc) == 0) goto label_0589fcb9;
		pSVar4[3] = pSVar3;
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589fba5;
	label_0589fb71: ;
			pSVar1 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589fb71;
	label_0589fba5: ;
			pSVar1 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.Titan, pSVar2 == null)) goto label_0589fcb4;
		pSVar3 = pSVar2.TitanSpawnThrower;
		if ((pSVar3 != null) &&(pIVar5 = il2cpp_vm_Object_IsInst((object)pSVar3, (((pSVar4.obj).klass)._1).element_class), pIVar5 == null)) goto label_0589fcbe;
		if ((uint)pSVar4.Length < 5) goto label_0589fcb9;
		pSVar4[4] = pSVar3;
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589fc53;
	label_0589fc1f: ;
			pSVar1 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589fc1f;
	label_0589fc53: ;
			pSVar1 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar1 != null) &&(pSVar2 = pSVar1.Titan, pSVar2 != null)) {
			pSVar3 = pSVar2.TitanSpawnPunk;
			if ((pSVar3 == null) ||(pIVar5 = il2cpp_vm_Object_IsInst((object)pSVar3, (((pSVar4.obj).klass)._1).element_class), pIVar5 != null)) {
				if (5 < (uint)pSVar4.Length) {
					pSVar4[5] = pSVar3;
					return pSVar4;
				}
	label_0589fcb9: ;
				throw new IndexOutOfRangeException();
			}
	label_0589fcbe: ;
			pIVar5 = new ArrayTypeMismatchException();
			throw pIVar5;
		}
	label_0589fcb4: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000EB2")]
	[Address(RVA = "0x579F470", Offset = "0x579E470", VA = "0x579F470")]
	private static void SetTitanSpawnProbabilities(float[] values)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SetTitanSpawnProbabilities): 5 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		FloatSetting[] pSVar3;
		uint uVar4;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_07545290 == false) {
			Il2CppMethodInitialized_07545290 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			klass = typeof(AottgGameCreateSession);
		}
		else {
			klass = typeof(AottgGameCreateSession);
		}
		typeof(AottgGameCreateSession) =(AottgGameCreateSession)klass;
		if (((values != null) && (*(long)((long)klass.static_fields + 0x40) != 0)) &&(5 < (int)values.Length)) {
			pSVar3 = AottgGameCreateSession.TitanSpawnSettings();
			if (pSVar3 == null) {
	label_0589f5af: ;
				throw new NullReferenceException();
			}
			uVar2 = (uint)pSVar3.Length;
			if (0 < (int)uVar2) {
				uVar4 = 0;
				do {
					if ((uVar2 <= uVar4) || ((uint)values.Length <= uVar4)) {
						throw new IndexOutOfRangeException();
					}
					if (pSVar3[(int)uVar4] == null) goto label_0589f5af;
					(pSVar3[(int)uVar4]).Value = values[(int)uVar4];
					uVar4 = uVar4 + 1;
					uVar2 = (uint)pSVar3.Length;
				} while ((int)uVar4 < (int)uVar2);
			}
		}
		return;
	}

	[Token(Token = "0x6000EB3")]
	[Address(RVA = "0x579F360", Offset = "0x579E360", VA = "0x579F360")]
	private static bool Matches(float[] actual, params float[] expected)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$Matches): clean
		float fVar1;
		uint uVar2;
		bool bVar3;
		int iVar4;
		ulong uVar5;
		ulong uVar6;
		float fVar7;

		if ((actual == null) || (expected == null)) {
			throw new NullReferenceException();
		}
		iVar4 = (int)actual.Length;
		if (iVar4 == (int)expected.Length) {
			if (iVar4 < 1) {
			}
			else {
				uVar5 = actual.Length & 0xffffffff;
				uVar6 = 0;
				do {
					if ((uVar5 <= uVar6) || ((uint)expected.Length <= uVar6)) {
						throw new IndexOutOfRangeException();
					}
					fVar7 = actual[uVar6];
					fVar1 = expected[uVar6];
					fVar7 = ABS(fVar7 - fVar1);
					bVar3 = fVar7 <= 0.001;
					if (0.001 < fVar7) {
						return bVar3;
					}
					uVar6 = uVar6 + 1;
					uVar2 = (uint)actual.Length;
					uVar5 = (ulong)uVar2;
				} while ((long)uVar6 < (long)(int)uVar2);
			}
		}
		else {
		}
		return bVar3;
	}

	[Token(Token = "0x6000EB4")]
	[Address(RVA = "0x57930A0", Offset = "0x57920A0", VA = "0x57930A0")]
	public static bool ChangeSandboxField(int index, string value, [Optional] string mapCategory)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ChangeSandboxField): 5 lines keep C-only constructs
		TypedSetting<T> __this;
		SandboxGameCreateConfiguration pSVar1;
		bool bVar2;
		List<AottgSandboxField> __this_00;
		AottgSandboxField field;
		long lVar3;
		String pSVar4;
		InGameSet settings;

		bVar2 = AottgGameCreateSession.IsSandbox;
		if (index < 0) {
			return false;
		}
		if (!bVar2) {
			return false;
		}
		__this_00 = AottgGameCreateSession.SandboxFieldsInternal;
		if (__this_00 == null) goto label_058933b8;
		if (index < __this_00._size) {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				__this_00 = AottgGameCreateSession.SandboxFieldsInternal ;
				if (__this_00 == null) goto label_058933b8;
			}
			field = __this_00.get_Item(index);
			bVar2 = AottgGameCreateSession.SetValue(field, value);
			if (bVar2) {
				if (field != null) {
					bVar2 = (field._Id_k__BackingField == "general.MapName");
					if (!bVar2) {
	label_0589332f: ;
						bVar2 = (field._Id_k__BackingField == "general.MapCategory");
						if (((bVar2) ||(bVar2 = (field._Id_k__BackingField == "general.MapName"))) ||(bVar2 = (field._Id_k__BackingField == "general.GameMode"))) {
							AottgGameCreateSession.RefreshSandbox();
						}
						else {
							AottgGameCreateSession.RebuildSandboxFields();
						}
						return true;
					}
					lVar3 = il2cpp_runtime_helper_058a7670(0);
					if ((lVar3 != 0) && (*(long)(lVar3 + 0x48) != 0)) {
						__this = *(TypedSetting<T>*)(*(long)(lVar3 + 0x48) + 0x30);
						pSVar1 = AottgGameCreateSession.SandboxConfiguration ;
						lVar3 = il2cpp_runtime_helper_058a7670(0);
						if ((lVar3 != 0) &&((*(long)(lVar3 + 0x48) != 0 && (lVar3 = *(long)(*(long)(lVar3 + 0x48) + 0x38), lVar3 != 0) ))) {
							pSVar4 = *(String*)(lVar3 + 0x20);
							if (mapCategory == null) {
								if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								lVar3 = il2cpp_runtime_helper_058a7670(0);
								if (((lVar3 == 0) || (*(long)(lVar3 + 0x48) == 0)) ||(lVar3 = *(long)(*(long)(lVar3 + 0x48) + 0x30), lVar3 == 0)) goto label_058933b8;
								mapCategory = *(String*)(lVar3 + 0x20);
							}
							if ((pSVar1 != null) &&(pSVar4 = pSVar1.FindMapCategory(pSVar4, mapCategory), __this != null)) {
								__this.Value = (object)pSVar4;
								if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pSVar1 = AottgGameCreateSession. SandboxConfiguration;
								settings = (InGameSet)il2cpp_runtime_helper_058a7670(0);
								if (pSVar1 != null) {
									pSVar1.ApplyMapChange(settings);
									goto label_0589332f;
								}
							}
						}
					}
				}
	label_058933b8: ;
				throw new NullReferenceException();
			}
		}
		return false;
	}

	[Token(Token = "0x6000EB5")]
	[Address(RVA = "0x57A06A0", Offset = "0x579F6A0", VA = "0x57A06A0")]
	public static bool ChangeMultiplayerField(int index, string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ChangeMultiplayerField): 15 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		Il2CppClass pIVar3;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		Settings_TypedSetting_int__o __this;
		bool bVar5;
		int iVar6;
		object obj;
		VirtualInvokeData pVVar7;
		AottgSandboxField field;
		ulong uVar8;
		AottgGameCreateSession klass;
		long lVar9;
		int value_00;

		if (Il2CppMethodInitialized_07545293 == false) {
			Il2CppMethodInitialized_07545293 = true;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		if (Il2CppMethodInitialized_0754526d == false) {
			Il2CppMethodInitialized_0754526d = true;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgGameCreateSession);
		}
		else {
			uVar2 = *(uint)((long)typeof(AottgGameCreateSession) + 0xe4);
			klass = typeof(AottgGameCreateSession);
		}
		typeof(AottgGameCreateSession) = klass;
		if (uVar2 == 0) {
			obj = (object)AottgGameCreateSession.BuildMultiplayerFields();
		}
		else {
			obj = (object)AottgGameCreateSession.BuildMultiplayerFields();
		}
		if (Il2CppMethodInitialized_075452ce == false) {
			Il2CppMethodInitialized_075452ce = true;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = *(uint)((long)typeof(AottgGameCreateSession) + 0xe4);
		}
		if (uVar2 == 0) {
		}
		if ((index < 0) ||(*(sbyte)((long)(typeof(AottgGameCreateSession)).static_fields + 0x20) == false)) {
			return false;
		}
		if (obj != null) {
			pIVar3 = obj.klass;
			uVar8 = (ulong)(pIVar3._2).interface_offsets_count;
			if (uVar8 != 0) {
				pIVar4 = (pIVar3._1).interfaceOffsets;
				lVar9 = 0;
				do {
					if (*(Il2CppClass*)((long)&pIVar4.interfaceType + lVar9) ==typeof(IReadOnlyCollection<AottgSandboxField>)) {
						pVVar7 = (VirtualInvokeData)&pIVar3.vtable[*(int)((long)&pIVar4.offset + lVar9)].methodPtr;
						goto label_058a08b1;
					}
					lVar9 = lVar9 + 0x10;
				} while (uVar8 * 0x10 != lVar9);
			}
			pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IReadOnlyCollection<AottgSandboxField>), 0);
	label_058a08b1: ;
			iVar6 = (*pVVar7.methodPtr)(obj,pVVar7.method);
			if (iVar6 <= index) {
				return false;
			}
			pIVar3 = obj.klass;
			uVar8 = (ulong)(pIVar3._2).interface_offsets_count;
			if (uVar8 != 0) {
				pIVar4 = (pIVar3._1).interfaceOffsets;
				lVar9 = 0;
				do {
					if (*(IReadOnlyList<AottgSandboxField>*)((long)&pIVar4.interfaceType + lVar9) == typeof(IReadOnlyList<AottgSandboxField>)) {
						pVVar7 = (VirtualInvokeData)&pIVar3.vtable[*(int)((long)&pIVar4.offset + lVar9)].methodPtr;
						goto label_058a0928;
					}
					lVar9 = lVar9 + 0x10;
				} while (uVar8 * 0x10 != lVar9);
			}
			pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IReadOnlyList<AottgSandboxField>), 0);
	label_058a0928: ;
			field = (AottgSandboxField)(*pVVar7.methodPtr)(obj,index,pVVar7.method);
			if (field != null) {
				value_00 = 0;
				bVar5 = (field._Id_k__BackingField == "misc.VoiceChat");
				if (!bVar5) {
					if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
					}
					bVar5 = AottgGameCreateSession.SetValue(field, value);
					return bVar5;
				}
				bVar5 = (value == "Global");
				if (!bVar5) {
					bVar5 = (value == "Proximity");
					value_00 = 1;
					if (!bVar5) {
						bVar5 = (value == "None");
						value_00 = 2;
						if (!bVar5) {
							return false;
						}
					}
				}
				__this = (Settings_TypedSetting_int__o)field._Setting_k__BackingField;
				if (__this != null) {
					bVar1 = (typeof(IntSetting)._2).typeHierarchyDepth;
					if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(IntSetting) )) {
						throw new InvalidCastException();
					}
					__this.Value = value_00;
					return true;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000EB6")]
	[Address(RVA = "0x57A0A40", Offset = "0x579FA40", VA = "0x57A0A40")]
	public static bool ToggleSandboxAddon(int index, bool enabled)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ToggleSandboxAddon): 8 lines keep C-only constructs
		uint uVar1;
		InGameSet pSVar2;
		InGameGeneralSettings pSVar3;
		ListSetting<StringSetting> pSVar4;
		List<T> source;
		List<object> __this;
		String defaultValue;
		bool bVar5;
		AottgGameCreateSession.c__DisplayClass121_0 __this_00;
		String[] pSVar6;
		Func<StringSetting, bool> __this_01;
		long lVar7;
		Predicate<T> match;
		StringSetting __this_02;
		MethodInfo method_00;

		if (Il2CppMethodInitialized_07545294 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value) ;
			Il2CppMethodInitialized_07545294 = true;
		}
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateSession.c__DisplayClass121_0));
		__this_00 = new AottgGameCreateSession.c__DisplayClass121_0();
		bVar5 = AottgGameCreateSession.IsSandbox;
		if (index < 0) {
			return false;
		}
		if (!bVar5) {
			return false;
		}
		pSVar6 = AottgGameCreateSession._sandboxAddonNames;
		if (pSVar6 == null) goto label_058a0ea9;
		if ((int)pSVar6.Length <= index) {
			return false;
		}
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			pSVar6 = AottgGameCreateSession._sandboxAddonNames;
			if (pSVar6 == null) goto label_058a0ea9;
		}
		if ((uint)pSVar6.Length <= (uint)index) {
			throw new IndexOutOfRangeException();
		}
		if (__this_00 == null) goto label_058a0ea9;
		__this_00.addonName = pSVar6[(uint)index];
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058a0bc8;
	label_058a0c03: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058a0c03;
	label_058a0bc8: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		if (((pSVar2 == null) ||(pSVar3 = pSVar2.General, pSVar3 == null)) ||(pSVar4 = pSVar3.Addons, pSVar4 == null)) goto label_058a0ea9;
		source = pSVar4._value;
		__this_01 = new Func<StringSetting, bool>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass121_0_ToggleSandboxAddon_b__0);
		bVar5 = Enumerable.Any<StringSetting>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_01);
		if ((bVar5) || (!enabled)) {
			if (bVar5 && !enabled) {
				lVar7 = il2cpp_runtime_helper_058a7670(0);
				if (((lVar7 == 0) || (*(long)(lVar7 + 0x48) == 0)) ||(lVar7 = *(long)(*(long)(lVar7 + 0x48) + 0x58), lVar7 == 0)) goto label_058a0ea9;
				__this = *(List<object>*)(lVar7 + 0x20);
				match = new Predicate<StringSetting>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass121_0_ToggleSandboxAddon_b__1);
				if (__this == null) goto label_058a0ea9;
				__this.RemoveAll(match);
			}
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				if (Il2CppMethodInitialized_075452cd != false) goto label_058a0ca5;
	label_058a0d76: ;
				Il2CppMethodInitialized_075452cd = true;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058a0cb5;
	label_058a0d99: ;
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				pSVar2 = AottgGameCreateSession._Working_k__BackingField ;
			}
			else {
				if (Il2CppMethodInitialized_075452cd == false) goto label_058a0d76;
	label_058a0ca5: ;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058a0d99;
	label_058a0cb5: ;
				pSVar2 = AottgGameCreateSession._Working_k__BackingField ;
			}
			if ((pSVar2 == null) ||(pSVar3 = pSVar2.General, pSVar3 == null)) goto label_058a0ea9;
			pSVar4 = pSVar3.Addons;
			defaultValue = __this_00.addonName;
			__this_02 = new StringSetting(defaultValue, 0x7fffffff);
			if (pSVar4 == null) goto label_058a0ea9;
			pSVar4.AddItem((BaseSetting)__this_02);
		}
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			method_00 = (MethodInfo)AottgGameCreateSession.SandboxConfiguration;
			if (Il2CppMethodInitialized_075452cd != false) goto label_058a0e2c;
	label_058a0e81: ;
			Il2CppMethodInitialized_075452cd = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			method_00 = (MethodInfo)AottgGameCreateSession.SandboxConfiguration;
			if (Il2CppMethodInitialized_075452cd == false) goto label_058a0e81;
	label_058a0e2c: ;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (method_00 != null) {
			method_00.SyncAddonSettings(*(InGameSet*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x40));
			AottgGameCreateSession.RebuildSandboxFields();
			return true;
		}
	label_058a0ea9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000EB7")]
	[Address(RVA = "0x5786000", Offset = "0x5785000", VA = "0x5786000")]
	public static bool IsSandboxAddonSelected(int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$IsSandboxAddonSelected): 4 lines keep C-only constructs
		int iVar1;
		String[] pSVar2;
		InGameSet pSVar3;
		InGameGeneralSettings pSVar4;
		ListSetting<StringSetting> pSVar5;
		List<T> source;
		bool bVar6;
		AottgGameCreateSession.c__DisplayClass122_0 __this;
		Func<StringSetting, bool> __this_00;

		if (Il2CppMethodInitialized_07545295 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value) ;
			Il2CppMethodInitialized_07545295 = true;
		}
		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateSession.c__DisplayClass122_0));
		__this = new AottgGameCreateSession.c__DisplayClass122_0();
		if (__this == null) goto label_058861bd;
		__this.index = index;
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			bVar6 = AottgGameCreateSession.IsSandbox;
		}
		else {
			bVar6 = AottgGameCreateSession.IsSandbox;
		}
		if ((!bVar6) || (iVar1 = __this.index, iVar1 < 0)) {
			return false;
		}
		if (((typeof(AottgGameCreateSession))._2).cctor_finished_or_no_cctor == 0) {
		}
		pSVar2 = AottgGameCreateSession._sandboxAddonNames;
		if (pSVar2 == null) goto label_058861bd;
		if ((int)pSVar2.Length <= iVar1) {
			return false;
		}
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452cd != false) goto label_058860f8;
	label_0588612e: ;
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05886104;
	label_0588614d: ;
			pSVar3 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if (Il2CppMethodInitialized_075452cd == false) goto label_0588612e;
	label_058860f8: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0588614d;
	label_05886104: ;
			pSVar3 = AottgGameCreateSession._Working_k__BackingField;
		}
		if (((pSVar3 != null) &&(pSVar4 = pSVar3.General, pSVar4 != null)) &&(pSVar5 = pSVar4.Addons, pSVar5 != null)) {
			source = pSVar5._value;
			__this_00 = new Func<StringSetting, bool>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass122_0_IsSandboxAddonSelected_b__0);
			bVar6 = Enumerable.Any<StringSetting>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_00);
			return bVar6;
		}
	label_058861bd: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000EB8")]
	[Address(RVA = "0x57A0EC0", Offset = "0x579FEC0", VA = "0x57A0EC0")]
	public static void ReplaceSandboxWorking(InGameSet settings)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ReplaceSandboxWorking): 6 lines keep C-only constructs
		uint uVar1;
		Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields pGVar2;
		IntPtr pvVar3;
		StringSetting pSVar4;
		BoolSetting __this;
		InGameSet pSVar5;
		String pSVar6;
		Il2CppClass klass;
		MethodInfo method_00;

		if (settings == null) {
			return;
		}
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452e6 != false) goto label_058a0f41;
	label_058a11a7: ;
			Il2CppMethodInitialized_075452e6 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_075452e6 == false) goto label_058a11a7;
	label_058a0f41: ;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		klass = typeof(AottgGameCreateSession);
		pGVar2 = typeof(AottgGameCreateSession).static_fields;
		pGVar2._ShowRoomSettings_k__BackingField = false;
		pGVar2._configurationMode = 1;
		pSVar6 = "Sandbox";
		if (Il2CppMethodInitialized_075452e0 == false) {
			Il2CppMethodInitialized_075452e0 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgGameCreateSession);
		}
		else {
			uVar1 = (((AottgGameCreateSession)klass)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			klass = typeof(AottgGameCreateSession);
		}
		pvVar3 = klass.static_fields;
		*(String*)((long)pvVar3 + 0x48) = pSVar6;
		if (Il2CppMethodInitialized_075452e1 == false) {
			Il2CppMethodInitialized_075452e1 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pGVar2 = typeof(AottgGameCreateSession).static_fields;
		pGVar2._Subcategory_k__BackingField = null;
		if (Il2CppMethodInitialized_075452e2 == false) {
			Il2CppMethodInitialized_075452e2 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pGVar2 = typeof(AottgGameCreateSession).static_fields;
		pGVar2._Experience_k__BackingField = null;
		if (Il2CppMethodInitialized_075452e3 == false) {
			Il2CppMethodInitialized_075452e3 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pGVar2 = typeof(AottgGameCreateSession).static_fields;
		pGVar2._RuleResult_k__BackingField = null;
		if (Il2CppMethodInitialized_075452e8 == false) {
			Il2CppMethodInitialized_075452e8 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pGVar2 = typeof(AottgGameCreateSession).static_fields;
		pGVar2._SelectedPresetName_k__BackingField = null;
		pSVar6 = "General";
		if (Il2CppMethodInitialized_075452e5 == false) {
			Il2CppMethodInitialized_075452e5 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pGVar2 = typeof(AottgGameCreateSession).static_fields;
		pGVar2._SandboxSection_k__BackingField = pSVar6;
		pSVar5 = new InGameSet();
		pSVar6 = settings.SerializeToJsonString();
		if (pSVar5 == null) goto label_058a14c6;
		pSVar5.DeserializeFromJsonString(pSVar6);
		if (Il2CppMethodInitialized_075452e9 == false) {
			Il2CppMethodInitialized_075452e9 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pGVar2 = typeof(AottgGameCreateSession).static_fields;
		pGVar2._Working_k__BackingField = pSVar5;
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058a1176;
	label_058a1346: ;
			pSVar5 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058a1346;
	label_058a1176: ;
			pSVar5 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar5 == null) ||(pSVar4 = pSVar5.ExperienceName, pSVar4 == null)) goto label_058a14c6;
		pSVar4.Value = (object)**(ulong*)(g_data_07556758 + 0xb8);
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058a13ab;
	label_058a13df: ;
			pSVar5 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058a13df;
	label_058a13ab: ;
			pSVar5 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar5 == null) ||(pSVar4 = pSVar5.ExperienceVariant, pSVar4 == null)) goto label_058a14c6;
		pSVar4.Value = (object)**(ulong*)(g_data_07556758 + 0xb8);
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058a1439;
	label_058a146a: ;
			pSVar5 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058a146a;
	label_058a1439: ;
			pSVar5 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar5 != null) &&(__this = pSVar5.Sandbox, __this != null)) {
			__this.Value = true;
			method_00 = (MethodInfo)AottgGameCreateSession.SandboxConfiguration;
			if (method_00 != null) {
				method_00.Reset();
				AottgGameCreateSession.RefreshSandbox();
				return;
			}
		}
	label_058a14c6: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000EB9")]
	[Address(RVA = "0x57A14D0", Offset = "0x57A04D0", VA = "0x57A14D0")]
	public static void RefreshSandboxContent()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$RefreshSandboxContent): 5 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		MethodInfo method_00;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_07545297 == false) {
			Il2CppMethodInitialized_07545297 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgGameCreateSession);
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgGameCreateSession);
		}
		typeof(AottgGameCreateSession) =(AottgGameCreateSession)klass;
		if (uVar1 == 0) {
			bVar2 = AottgGameCreateSession.IsSandbox;
		}
		else {
			bVar2 = AottgGameCreateSession.IsSandbox;
		}
		if (bVar2) {
			if (((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			method_00 = (MethodInfo)AottgGameCreateSession.SandboxConfiguration;
			if (method_00 == null) {
				throw new NullReferenceException();
			}
			method_00.Reset();
			AottgGameCreateSession.RefreshSandbox();
			return;
		}
		return;
	}

	[Token(Token = "0x6000EBA")]
	[Address(RVA = "0x5780380", Offset = "0x577F380", VA = "0x5780380")]
	public static string[] FieldOptions(ExperienceRuleField field)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$FieldOptions): 18 lines keep C-only constructs
		uint uVar1;
		WeatherSettings pSVar2;
		SetSettingsContainer<WeatherSet> __this;
		ExperienceRuleResult pSVar3;
		UIRule pSVar4;
		BaseSetting pSVar5;
		InspectorSettingMetadata pSVar6;
		Dictionary<string, BaseSetting> settings;
		List<ExperienceRuleField> source;
		InGameSet pSVar7;
		InGameGeneralSettings pSVar8;
		StringSetting pSVar9;
		object pIVar10;
		bool bVar11;
		AottgGameCreateSession.c__DisplayClass125_0 __this_00;
		String[] pSVar12;
		Func<string, bool> __this_01;
		Func<T1, T2, TResult> __this_02;
		System_Collections_Generic_IEnumerable_TSource__o source_00;
		String pSVar13;
		Func<ExperienceRuleField, bool> __this_03;
		ExperienceRuleField pSVar14;
		Func<string, string> __this_04;
		long lVar15;
		Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_StaticFields pGVar16;
		OrdinalIgnoreCaseComparer comparer;
		List<string> pSVar17;
		Func<string, string>* targetAddress;
		AottgGameCreateSession.c__DisplayClass125_0 targetAddress_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateSession.c__DisplayClass125_0));
		__this_00 = new AottgGameCreateSession.c__DisplayClass125_0();
		if (__this_00 == null) goto label_05880e98;
		targetAddress_00 = &__this_00.fields;
		__this_00.field = field;
		pSVar14 = __this_00.field;
		if ((pSVar14 == null) ||(pSVar14.Rule == null)) {
	label_05880938: ;
			pSVar12 = (String[])new string[0];
			return pSVar12;
		}
		bVar11 = WeatherSettings.IsWeatherSetting(pSVar14.Id);
		if (bVar11) {
			pSVar2 = SettingsManager.WeatherSettings;
			if (pSVar2 == null) {
				pSVar12 = (String[])new string[0];
				pSVar14 = targetAddress_00.field;
			}
			else {
				__this = pSVar2.WeatherSets;
				if (__this == null) goto label_05880e98;
				pSVar12 = __this.GetSetNames();
				pSVar14 = targetAddress_00.field;
			}
			if (pSVar14 == null) goto label_05880e98;
			pSVar4 = pSVar14.Rule;
			if (pSVar4 == null) goto label_05880e98;
			pSVar17 = pSVar4.AllowedValues;
			if ((pSVar17 == null) || (pSVar17._size < 1)) {
				return pSVar12;
			}
			__this_02 = new Func<string, int, bool>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass125_0_FieldOptions_b__2);
			source_00 = Enumerable.Where<string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar12, (System_Func_TSource__int__bool__o)__this_02);
			goto label_05880e78;
		}
		if (targetAddress_00.field == null) goto label_05880e98;
		bVar11 = String.Equals(targetAddress_00.field.Id, "general.MapName", 5);
		pSVar14 = targetAddress_00.field;
		if (bVar11) {
			if ((pSVar14 == null) ||(pSVar4 = pSVar14.Rule, pSVar4 == null)) goto label_05880e98;
			pSVar17 = pSVar4.AllowedValues;
			if ((pSVar17 == null) || (pSVar17._size == 0)) {
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
					if (Il2CppMethodInitialized_075452d6 != false) goto label_05880635;
	label_05880969: ;
					Il2CppMethodInitialized_075452d6 = true;
					if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05880646;
	label_0588098d: ;
					pSVar3 = AottgGameCreateSession. _RuleResult_k__BackingField;
				}
				else {
					if (Il2CppMethodInitialized_075452d6 == false) goto label_05880969;
	label_05880635: ;
					if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0588098d;
	label_05880646: ;
					pSVar3 = AottgGameCreateSession. _RuleResult_k__BackingField;
				}
				if (pSVar3 != null) {
					if (((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor == 0) {
						if (Il2CppMethodInitialized_075452d6 != false) goto label_058809ba;
	label_05880a32: ;
						Il2CppMethodInitialized_075452d6 = true;
						if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058809cb;
	label_05880a56: ;
						pSVar3 = AottgGameCreateSession. _RuleResult_k__BackingField;
					}
					else {
						if (Il2CppMethodInitialized_075452d6 == false) goto label_05880a32;
	label_058809ba: ;
						if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_05880a56;
	label_058809cb: ;
						pSVar3 = AottgGameCreateSession. _RuleResult_k__BackingField;
					}
					if (pSVar3 == null) goto label_05880e98;
					source = pSVar3.Fields;
					if (((typeof(AottgGameCreateSession.c))._2). cctor_finished_or_no_cctor == 0) {
					}
					pGVar16 = typeof(AottgGameCreateSession.c).static_fields;
					__this_03 = pGVar16.__9__125_3;
					if (__this_03 == null) {
						if ((typeof(AottgGameCreateSession.c)._2).cctor_finished_or_no_cctor == 0) {
							pGVar16 = typeof(AottgGameCreateSession.c).static_fields;
						}
						pIVar10 = (object)pGVar16.__9;
						__this_03 = new Func<ExperienceRuleField, bool>(pIVar10, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_FieldOptions_b__125_3);
						pGVar16 = typeof(AottgGameCreateSession.c).static_fields;
						pGVar16.__9__125_3 = __this_03;
					}
					pSVar14 = Enumerable.FirstOrDefault<ExperienceRuleField>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_03);
					if (pSVar14 == null) goto label_05880bd2;
					if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
						if (Il2CppMethodInitialized_075452cd != false) goto label_05880b38;
	label_05880b68: ;
						Il2CppMethodInitialized_075452cd = true;
						if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05880b45;
	label_05880b88: ;
						pSVar7 = AottgGameCreateSession. _Working_k__BackingField;
					}
					else {
						if (Il2CppMethodInitialized_075452cd == false) goto label_05880b68;
	label_05880b38: ;
						if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_05880b88;
	label_05880b45: ;
						pSVar7 = AottgGameCreateSession. _Working_k__BackingField;
					}
					if (((pSVar7 == null) ||(pSVar8 = pSVar7.General, pSVar8 == null)) ||(pSVar9 = pSVar8.MapCategory, pSVar9 == null)) goto label_05880e98;
					bVar11 = String.IsNullOrEmpty(pSVar9._value);
					if (!bVar11) {
						lVar15 = il2cpp_runtime_helper_058a7670(0);
						if (((lVar15 == 0) || (*(long)(lVar15 + 0x48) == 0)) ||(lVar15 = *(long)(*(long)(lVar15 + 0x48) + 0x30), lVar15 == 0)) goto label_05880e98;
						pSVar13 = *(String*)(lVar15 + 0x20);
						pSVar12 = BuiltinLevels.GetMapNames(pSVar13);
						pGVar16 = typeof(AottgGameCreateSession.c).static_fields;
						__this_04 = pGVar16.__9__125_4;
						if (__this_04 == null) {
							if ((typeof(AottgGameCreateSession.c)._2).cctor_finished_or_no_cctor == 0 ) {
								pGVar16 = typeof(AottgGameCreateSession.c).static_fields;
							}
							pIVar10 = (object)pGVar16.__9;
							__this_04 = new Func<string, string>(pIVar10, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_FieldOptions_b__125_4);
							pGVar16 = typeof(AottgGameCreateSession.c).static_fields;
							pGVar16.__9__125_4 = __this_04;
							targetAddress = &pGVar16.__9__125_4;
							goto label_05880e39;
						}
						goto label_05880e41;
					}
				}
			}
	label_05880bd2: ;
			if (targetAddress_00.field == null) {
	label_05880e98: ;
				throw new NullReferenceException();
			}
			pSVar4 = targetAddress_00.field.Rule;
			pSVar12 = BuiltinLevels.QueryMapsNames(pSVar4);
			if ((typeof(AottgGameCreateSession.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar16 = typeof(AottgGameCreateSession.c).static_fields;
				__this_04 = pGVar16.__9__125_0;
				if (__this_04 != null) goto label_05880c2b;
	label_05880c9a: ;
				if ((typeof(AottgGameCreateSession.c)._2).cctor_finished_or_no_cctor == 0) {
					pGVar16 = typeof(AottgGameCreateSession.c).static_fields;
				}
				pIVar10 = (object)pGVar16.__9;
				__this_04 = new Func<string, string>(pIVar10, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_FieldOptions_b__125_0);
				pGVar16 = typeof(AottgGameCreateSession.c).static_fields;
				pGVar16.__9__125_0 = __this_04;
				if ((typeof(StringComparer)._2).cctor_finished_or_no_cctor != 0) goto label_05880c43;
	label_05880d12: ;
				if (Il2CppMethodInitialized_07542886 != false) goto label_05880c50;
	label_05880d24: ;
				Il2CppMethodInitialized_07542886 = true;
				uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
			}
			else {
				pGVar16 = typeof(AottgGameCreateSession.c).static_fields;
				__this_04 = pGVar16.__9__125_0;
				if (__this_04 == null) goto label_05880c9a;
	label_05880c2b: ;
				if ((typeof(StringComparer)._2).cctor_finished_or_no_cctor == 0) goto label_05880d12;
	label_05880c43: ;
				if (Il2CppMethodInitialized_07542886 == false) goto label_05880d24;
	label_05880c50: ;
				uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			comparer = StringComparer.s_ordinalIgnoreCase;
		}
		else {
			if ((pSVar14 == null) ||(pSVar4 = pSVar14.Rule, pSVar4 == null)) goto label_05880e98;
			pSVar17 = pSVar4.AllowedValues;
			if ((pSVar17 == null) || (pSVar17._size == 0)) {
				pSVar5 = pSVar14.Setting;
				if (((pSVar5 != null) &&(pSVar6 = pSVar5.InspectorMetadata, pSVar6 != null)) && (pSVar17 = pSVar6.Dropbox, pSVar17 != null)) {
					if (0 < pSVar17._size) goto label_05880a07;
					pSVar13 = pSVar14.Id;
					if (pSVar13 != null) {
						bVar11 = pSVar13.StartsWith("mode.", 5);
						if (!bVar11) goto label_05880938;
						lVar15 = il2cpp_runtime_helper_058a7670(0);
						if (((lVar15 != 0) && (*(long)(lVar15 + 0x50) != 0)) &&((targetAddress_00.field != null &&(pSVar13 = targetAddress_00.field.Id, pSVar13 != null)))) {
							settings = *(Dictionary<string, BaseSetting>*)(*(long)(lVar15 + 0x50) + 0x30);
							pSVar13 = pSVar13.Substring(5);
							pSVar13 = String.Concat(pSVar13, "Dropbox");
							pSVar12 = AottgGameCreateSession.MetadataOptions(settings, pSVar13);
							return pSVar12;
						}
					}
				}
				goto label_05880e98;
			}
			bVar11 = String.Equals(pSVar14.Id, "general.GameMode", 5);
			pSVar14 = targetAddress_00.field;
			if (!bVar11) {
				if (((pSVar14 != null) &&(pSVar4 = pSVar14.Rule, pSVar4 != null)) &&(pSVar17 = pSVar4.AllowedValues, pSVar17 != null)) {
	label_05880a07: ;
					pSVar12 = (String[])pSVar17.ToArray();
					return pSVar12;
				}
				goto label_05880e98;
			}
			if (pSVar14 == null) goto label_05880e98;
			pSVar4 = pSVar14.Rule;
			pSVar12 = BuiltinLevels.QueryModeNames(pSVar4);
			if (targetAddress_00.field == null) goto label_05880e98;
			pSVar4 = targetAddress_00.field.Rule;
			__this_01 = new Func<string, bool>((object)pSVar4, (intptr_t)MethodInfo_Settings_UIRule_MatchesAllowedValues);
			pSVar12 = (String[])Enumerable.Where<string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar12, (System_Func_TSource__bool__o)__this_01);
			pGVar16 = typeof(AottgGameCreateSession.c).static_fields;
			__this_04 = pGVar16.__9__125_1;
			if (__this_04 == null) {
				if ((typeof(AottgGameCreateSession.c)._2).cctor_finished_or_no_cctor == 0) {
					pGVar16 = typeof(AottgGameCreateSession.c).static_fields;
				}
				pIVar10 = (object)pGVar16.__9;
				__this_04 = new Func<string, string>(pIVar10, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_FieldOptions_b__125_1);
				pGVar16 = typeof(AottgGameCreateSession.c).static_fields;
				pGVar16.__9__125_1 = __this_04;
				targetAddress = &pGVar16.__9__125_1;
	label_05880e39: ;
			}
	label_05880e41: ;
			comparer = (OrdinalIgnoreCaseComparer)il2cpp_runtime_helper_058a77c0(0);
		}
		source_00 = (System_Collections_Generic_IEnumerable_TSource__o)Enumerable.OrderBy<string, string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar12, (System_Func_TSource__TKey__o)__this_04, (System_Collections_Generic_IComparer_TKey__o)comparer);
	label_05880e78: ;
		pSVar12 = (String[])Enumerable.ToArray<string>(source_00);
		return pSVar12;
	}

	[Token(Token = "0x6000EBB")]
	[Address(RVA = "0x57A1820", Offset = "0x57A0820", VA = "0x57A1820")]
	public static string[] SandboxMapNames()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SandboxMapNames): 13 lines keep C-only constructs
		uint uVar1;
		SandboxGameCreateConfiguration pSVar2;
		object @object;
		String[] pSVar3;
		Func<string, IEnumerable<string>> __this;
		System_Collections_Generic_IEnumerable_TResult__o source;
		System_Collections_Generic_IEnumerable_TSource__o source_00;
		System_Linq_IOrderedEnumerable_TSource__o source_01;
		Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_StaticFields pGVar4;
		System_Func_TSource__TKey__o __this_00;

		if (Il2CppMethodInitialized_07545299 == false) {
			Il2CppMethodInitialized_07545299 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = AottgGameCreateSession.SandboxConfiguration;
		}
		else {
			pSVar2 = *(SandboxGameCreateConfiguration*)((long)(typeof(AottgGameCreateSession)).static_fields + 8);
		}
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		pSVar3 = pSVar2.GetMapCategories();
		pSVar2 = AottgGameCreateSession.SandboxConfiguration;
		__this = new Func<string, IEnumerable<string>>((object)pSVar2, (intptr_t)MethodInfo_Settings_SandboxGameCreateConfiguration_GetMapNames);
		source = Enumerable.SelectMany<string, string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar3, (System_Func_TSource__IEnumerable_TResult___o)__this);
		if (Il2CppMethodInitialized_07542886 == false) {
			Il2CppMethodInitialized_07542886 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(StringComparer))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		source_00 = Enumerable.Distinct<string>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Collections_Generic_IEqualityComparer_TSource__o)StringComparer.s_ordinalIgnoreCase);
		if ((typeof(AottgGameCreateSession.c)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession.c)) ;
			pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			__this_00 = (System_Func_TSource__TKey__o)pGVar4.__9__126_0;
		}
		else {
			pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			__this_00 = (System_Func_TSource__TKey__o)pGVar4.__9__126_0;
		}
		if (__this_00 == null) {
			if (((typeof(AottgGameCreateSession.c))._2). cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			}
			@object = (object)pGVar4.__9;
			__this_00 = new Func<string, string>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_SandboxMapNames_b__126_0);
			pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			pGVar4.__9__126_0 = (Func<string, string>)__this_00;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(StringComparer))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07542886 == false) {
			Il2CppMethodInitialized_07542886 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(StringComparer))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		source_01 = Enumerable.OrderBy<string, string>(source_00, __this_00, (System_Collections_Generic_IComparer_TKey__o)StringComparer.s_ordinalIgnoreCase);
		pSVar3 = (String[])Enumerable.ToArray<string>((System_Collections_Generic_IEnumerable_TSource__o)source_01);
		return pSVar3;
	}

	[Token(Token = "0x6000EBC")]
	[Address(RVA = "0x57A1B90", Offset = "0x57A0B90", VA = "0x57A1B90")]
	public static string[] PresetNames()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$PresetNames): 8 lines keep C-only constructs
		uint uVar1;
		InGameSettings pSVar2;
		SetSettingsContainer<InGameSet> __this;
		object @object;
		String[] pSVar3;
		System_Linq_IOrderedEnumerable_TSource__o source;
		Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_StaticFields pGVar4;
		System_Func_TSource__TKey__o __this_00;

		pSVar2 = SettingsManager.InGameSettings;
		if (pSVar2 == null) {
			pSVar3 = (String[])new string[0];
			return pSVar3;
		}
		__this = pSVar2.InGameSets;
		if (__this == null) {
			throw new NullReferenceException();
		}
		pSVar3 = __this.GetSetNames();
		if ((typeof(AottgGameCreateSession.c)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession.c)) ;
			pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			__this_00 = (System_Func_TSource__TKey__o)pGVar4.__9__127_0;
		}
		else {
			pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			__this_00 = (System_Func_TSource__TKey__o)pGVar4.__9__127_0;
		}
		if (__this_00 == null) {
			if (((typeof(AottgGameCreateSession.c))._2). cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			}
			@object = (object)pGVar4.__9;
			__this_00 = new Func<string, string>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_PresetNames_b__127_0);
			pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			pGVar4.__9__127_0 = (Func<string, string>)__this_00;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(StringComparer))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07542886 == false) {
			Il2CppMethodInitialized_07542886 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(StringComparer))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		source = Enumerable.OrderBy<string, string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar3, __this_00, (System_Collections_Generic_IComparer_TKey__o)StringComparer.s_ordinalIgnoreCase);
		pSVar3 = (String[])Enumerable.ToArray<string>((System_Collections_Generic_IEnumerable_TSource__o)source);
		return pSVar3;
	}

	[Token(Token = "0x6000EBD")]
	[Address(RVA = "0x57A1E00", Offset = "0x57A0E00", VA = "0x57A1E00")]
	public static string[] CustomPresetNames()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$CustomPresetNames): 16 lines keep C-only constructs
		uint uVar1;
		InGameSettings pSVar2;
		SetSettingsContainer<InGameSet> pSVar3;
		ListSetting<T> __this;
		object pIVar4;
		List<BaseSetting> source;
		System_Collections_Generic_IEnumerable_TResult__o pSVar5;
		Func<InGameSet, bool> __this_00;
		System_Collections_Generic_IEnumerable_TSource__o source_00;
		Func<InGameSet, string> __this_01;
		System_Linq_IOrderedEnumerable_TSource__o source_01;
		String[] pSVar6;
		Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_StaticFields pGVar7;
		System_Func_TSource__TKey__o __this_02;

		pSVar2 = SettingsManager.InGameSettings;
		if (pSVar2 == null) {
			pSVar6 = (String[])new string[0];
			return pSVar6;
		}
		pSVar3 = pSVar2.InGameSets;
		if ((pSVar3 == null) ||(__this = pSVar3.Sets, __this == null)) {
			throw new NullReferenceException();
		}
		source = __this.GetItems();
		pSVar5 = Enumerable.Cast<InGameSet>((IEnumerable)source);
		if ((typeof(AottgGameCreateSession.c)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession.c)) ;
			pGVar7 = typeof(AottgGameCreateSession.c).static_fields;
			__this_00 = pGVar7.__9__128_0;
		}
		else {
			pGVar7 = typeof(AottgGameCreateSession.c).static_fields;
			__this_00 = pGVar7.__9__128_0;
		}
		if (__this_00 == null) {
			if (((typeof(AottgGameCreateSession.c))._2). cctor_finished_or_no_cctor == 0) {
				pGVar7 = typeof(AottgGameCreateSession.c).static_fields;
			}
			pIVar4 = (object)pGVar7.__9;
			__this_00 = new Func<InGameSet, bool>(pIVar4, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_CustomPresetNames_b__128_0);
			pGVar7 = typeof(AottgGameCreateSession.c).static_fields;
			pGVar7.__9__128_0 = __this_00;
		}
		source_00 = Enumerable.Where<InGameSet>((System_Collections_Generic_IEnumerable_TSource__o)pSVar5, (System_Func_TSource__bool__o)__this_00);
		if ((typeof(AottgGameCreateSession.c)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession.c)) ;
			pGVar7 = typeof(AottgGameCreateSession.c).static_fields;
			__this_01 = pGVar7.__9__128_1;
		}
		else {
			pGVar7 = typeof(AottgGameCreateSession.c).static_fields;
			__this_01 = pGVar7.__9__128_1;
		}
		if (__this_01 == null) {
			if (((typeof(AottgGameCreateSession.c))._2). cctor_finished_or_no_cctor == 0) {
				pGVar7 = typeof(AottgGameCreateSession.c).static_fields;
			}
			pIVar4 = (object)pGVar7.__9;
			__this_01 = new Func<InGameSet, string>(pIVar4, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_CustomPresetNames_b__128_1);
			pGVar7 = typeof(AottgGameCreateSession.c).static_fields;
			pGVar7.__9__128_1 = __this_01;
		}
		pSVar5 = Enumerable.Select<InGameSet, string>(source_00, (System_Func_TSource__TResult__o)__this_01);
		if ((typeof(AottgGameCreateSession.c)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession.c)) ;
			pGVar7 = typeof(AottgGameCreateSession.c).static_fields;
			__this_02 = (System_Func_TSource__TKey__o)pGVar7.__9__128_2;
		}
		else {
			pGVar7 = typeof(AottgGameCreateSession.c).static_fields;
			__this_02 = (System_Func_TSource__TKey__o)pGVar7.__9__128_2;
		}
		if (__this_02 == null) {
			if (((typeof(AottgGameCreateSession.c))._2). cctor_finished_or_no_cctor == 0) {
				pGVar7 = typeof(AottgGameCreateSession.c).static_fields;
			}
			pIVar4 = (object)pGVar7.__9;
			__this_02 = new Func<string, string>(pIVar4, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_CustomPresetNames_b__128_2);
			pGVar7 = typeof(AottgGameCreateSession.c).static_fields;
			pGVar7.__9__128_2 = (Func<string, string>)__this_02;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(StringComparer))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07542886 == false) {
			Il2CppMethodInitialized_07542886 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(StringComparer))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		source_01 = Enumerable.OrderBy<string, string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar5, __this_02, (System_Collections_Generic_IComparer_TKey__o)StringComparer.s_ordinalIgnoreCase);
		pSVar6 = (String[])Enumerable.ToArray<string>((System_Collections_Generic_IEnumerable_TSource__o)source_01);
		return pSVar6;
	}

	[Token(Token = "0x6000EBE")]
	[Address(RVA = "0x57A2260", Offset = "0x57A1260", VA = "0x57A2260")]
	private static string FavoriteExperienceId(Experience experience)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$FavoriteExperienceId): 7 lines keep C-only constructs
		object source;
		Func<string, string> __this;
		System_Collections_Generic_IEnumerable_TResult__o values;
		String pSVar1;

		source = new string[3];
		if ((experience == null) || (source == null)) {
			throw new NullReferenceException();
		}
		if (*(int)&source[1].monitor != 0) {
			source[2].klass = (Il2CppClass)experience.Category;
			if (((ulong)source[1].monitor & 0xfffffffe) != 0) {
				source[2].monitor = experience.SubCategory;
				if (2 < *(uint)&source[1].monitor) {
					source[3].klass = (Il2CppClass)experience.Name;
					__this = new Func<string, string>(null, (intptr_t)MethodInfo_System_Uri_EscapeDataString);
					values = Enumerable.Select<string, string>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TResult__o)__this);
					pSVar1 = String.Join("|", (IEnumerable<string>)values);
					return pSVar1;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6000EBF")]
	[Address(RVA = "0x5790F40", Offset = "0x578FF40", VA = "0x5790F40")]
	public static bool IsFavorite(Experience experience)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$IsFavorite): 5 lines keep C-only constructs
		UISettings pSVar1;
		ListSetting<StringSetting> pSVar2;
		List<T> source;
		bool bVar3;
		AottgGameCreateSession.c__DisplayClass130_0 __this;
		Func<StringSetting, bool> __this_00;

		if (Il2CppMethodInitialized_0754529d == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass130_0_IsFavorite_b__0) ;
			Il2CppMethodInitialized_0754529d = true;
		}
		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateSession.c__DisplayClass130_0));
		__this = new AottgGameCreateSession.c__DisplayClass130_0();
		if (__this != null) {
			__this.experience = experience;
			pSVar1 = SettingsManager.UISettings;
			if ((pSVar1 != null) &&(pSVar2 = pSVar1.FavoriteExperiences, pSVar2 != null) ) {
				source = pSVar2._value;
				__this_00 = new Func<StringSetting, bool>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass130_0_IsFavorite_b__0);
				bVar3 = Enumerable.Any<StringSetting>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_00);
				return bVar3;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000EC0")]
	[Address(RVA = "0x578B960", Offset = "0x578A960", VA = "0x578B960")]
	public static bool IsFavoritePreset(string name)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$IsFavoritePreset): 4 lines keep C-only constructs
		UISettings pSVar1;
		ListSetting<StringSetting> pSVar2;
		List<T> source;
		bool bVar3;
		AottgGameCreateSession.c__DisplayClass131_0 __this;
		Func<StringSetting, bool> __this_00;

		if (Il2CppMethodInitialized_0754529e == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value) ;
			Il2CppMethodInitialized_0754529e = true;
		}
		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateSession.c__DisplayClass131_0));
		__this = new AottgGameCreateSession.c__DisplayClass131_0();
		if (__this != null) {
			__this.name = name;
			pSVar1 = SettingsManager.UISettings;
			if ((pSVar1 != null) &&(pSVar2 = pSVar1.FavoriteSandboxPresets, pSVar2 != null)) {
				source = pSVar2._value;
				__this_00 = new Func<StringSetting, bool>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass131_0_IsFavoritePreset_b__0);
				bVar3 = Enumerable.Any<StringSetting>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_00);
				return bVar3;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000EC1")]
	[Address(RVA = "0x577E1A0", Offset = "0x577D1A0", VA = "0x577E1A0")]
	public static Experience[] FavoriteExperiences()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$FavoriteExperiences): 3 lines keep C-only constructs
		List<Experience> source;
		Func<Experience, bool> __this;
		System_Collections_Generic_IEnumerable_TSource__o source_00;
		Experience[] pMVar1;

		source = AottgGameCreateSession.ExperiencesInternal;
		__this = new Func<Experience, bool>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_IsFavorite);
		source_00 = Enumerable.Where<Experience>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this);
		pMVar1 = (Experience[])Enumerable.ToArray<Experience>(source_00);
		return pMVar1;
	}

	[Token(Token = "0x6000EC2")]
	[Address(RVA = "0x577E270", Offset = "0x577D270", VA = "0x577E270")]
	public static string[] FavoritePresetNames()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$FavoritePresetNames): 3 lines keep C-only constructs
		String[] pSVar1;
		Func<string, bool> __this;
		System_Collections_Generic_IEnumerable_TSource__o source;

		pSVar1 = AottgGameCreateSession.PresetNames();
		__this = new Func<string, bool>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_IsFavoritePreset);
		source = Enumerable.Where<string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar1, (System_Func_TSource__bool__o)__this);
		pSVar1 = (String[])Enumerable.ToArray<string>(source);
		return pSVar1;
	}

	[Token(Token = "0x6000EC3")]
	[Address(RVA = "0x57910D0", Offset = "0x57900D0", VA = "0x57910D0")]
	public static void ToggleFavorite(Experience experience)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ToggleFavorite): clean
		UISettings pSVar1;
		ListSetting<StringSetting> favorites;
		String id;

		pSVar1 = SettingsManager.UISettings;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		favorites = pSVar1.FavoriteExperiences;
		id = AottgGameCreateSession.FavoriteExperienceId(experience);
		AottgGameCreateSession.ToggleFavorite(favorites, id, 5);
		return;
	}

	[Token(Token = "0x6000EC4")]
	[Address(RVA = "0x5791C10", Offset = "0x5790C10", VA = "0x5791C10")]
	public static void ToggleFavoritePreset(string name)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ToggleFavoritePreset): clean
		UISettings pSVar1;
		ListSetting<StringSetting> favorites;

		pSVar1 = SettingsManager.UISettings;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		favorites = pSVar1.FavoriteSandboxPresets;
		AottgGameCreateSession.ToggleFavorite(favorites, name, 4);
		return;
	}

	[Token(Token = "0x6000EC5")]
	[Address(RVA = "0x57A23A0", Offset = "0x57A13A0", VA = "0x57A23A0")]
	private static void ToggleFavorite(ListSetting<StringSetting> favorites, string id, StringComparison comparison)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ToggleFavorite): 5 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<object> pSVar3;
		String defaultValue;
		Object[] pSVar4;
		UISettings pSVar5;
		int iVar7;
		AottgGameCreateSession.c__DisplayClass136_0 __this;
		Predicate<T> match;
		StringSetting __this_00;

		if (Il2CppMethodInitialized_075452a3 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value) ;
			Il2CppMethodInitialized_075452a3 = true;
		}
		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateSession.c__DisplayClass136_0));
		__this = new AottgGameCreateSession.c__DisplayClass136_0();
		if (__this != null) {
			__this.id = id;
			__this.comparison = comparison;
			if (favorites != null) {
				pSVar3 = (List<object>)favorites._value;
				match = new Predicate<StringSetting>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass136_0_ToggleFavorite_b__0);
				if (pSVar3 != null) {
					iVar7 = pSVar3.RemoveAll(match);
					if (iVar7 == 0) {
						pSVar3 = (List<object>)favorites._value;
						defaultValue = __this.id;
						__this_00 = new StringSetting(defaultValue, 0x7fffffff);
						if (pSVar3 == null) goto label_058a2585;
						piVar1 = &pSVar3._version;
						*piVar1 = *piVar1 + 1;
						pSVar4 = pSVar3._items;
						if (pSVar4 == null) goto label_058a2585;
						uVar2 = pSVar3._size;
						if (uVar2 < (uint)pSVar4.Length) {
							pSVar3._size = uVar2 + 1;
							pSVar4[(int)uVar2] = (object)__this_00;
						}
						else {
							pSVar3.AddWithResize((object)__this_00);
						}
					}
					pSVar5 = SettingsManager.UISettings;
					if (pSVar5 != null) {
						pSVar5.Save();
						return;
					}
				}
			}
		}
	label_058a2585: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000EC6")]
	[Address(RVA = "0x57A2590", Offset = "0x57A1590", VA = "0x57A2590")]
	public static void OpenFavorites()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$OpenFavorites): 9 lines keep C-only constructs
		uint uVar1;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_075452a4 == false) {
			Il2CppMethodInitialized_075452a4 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075452e6 == false) {
			Il2CppMethodInitialized_075452e6 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgGameCreateSession);
		}
		else {
			uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
			klass = typeof(AottgGameCreateSession);
		}
		typeof(AottgGameCreateSession) =(AottgGameCreateSession)klass;
		if (uVar1 == 0) {
			klass = typeof(AottgGameCreateSession);
			AottgGameCreateSession._ShowRoomSettings_k__BackingField = false;
		}
		else {
			*(byte)((long)klass.static_fields + 0x78) = 0;
		}
		if (Il2CppMethodInitialized_075452e7 == false) {
			Il2CppMethodInitialized_075452e7 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgGameCreateSession);
		}
		else {
			uVar1 = (klass._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			AottgGameCreateSession._ShowFavorites_k__BackingField = true;
			return;
		}
		*(byte)((long)klass.static_fields + 0x79) = 1;
		return;
	}

	[Token(Token = "0x6000EC7")]
	[Address(RVA = "0x578FF40", Offset = "0x578EF40", VA = "0x578FF40")]
	public static bool LoadPreset(string name)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$LoadPreset): 7 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		InGameSettings pSVar3;
		SetSettingsContainer<InGameSet> pSVar4;
		ListSetting<T> __this;
		StringSetting pSVar5;
		object settings;
		bool bVar7;
		List<BaseSetting> __this_00;
		System_Collections_Generic_List_Enumerator_object__o local_58;
		byte[] local_40 = new byte[16];
		InGameSet local_30;

		bVar7 = String.IsNullOrWhiteSpace(name);
		if (bVar7) {
			return false;
		}
		pSVar3 = SettingsManager.InGameSettings;
		if (pSVar3 != null) {
			pSVar4 = pSVar3.InGameSets;
			if (((pSVar4 == null) ||(__this = pSVar4.Sets, __this == null)) ||(__this_00 = __this.GetItems(), __this_00 == null)) {
				throw new NullReferenceException();
			}
			local_40.GetEnumerator((List<object>)__this_00);
			local_58._current = (object)local_30;
			local_58._list = (List<T>)local_40._0_8_;
			local_58._index = local_40._8_4_;
			local_58._version = local_40._12_4_;
			local_40._0_8_ = null;
			local_40._8_8_ = &local_58;
			while (true) {
				bVar7 = local_58.MoveNext();
				settings = local_58._current;
				if (!(bVar7)) break;
				if ((InGameSet)local_58._current == null) {
					throw new NullReferenceException();
				}
				bVar1 = (typeof(InGameSet)._2).typeHierarchyDepth;
				if (((((InGameSet)(local_58._current).klass)._2).typeHierarchyDepth < bVar1) ||((((InGameSet)(local_58._current).klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameSet))) {
					throw new InvalidCastException();
				}
				pSVar5 = ((InGameSet)((long)local_58._current + 0x10)).Name;
				if (pSVar5 == null) {
					throw new NullReferenceException();
				}
				bVar7 = String.Equals(pSVar5._value, name, 4);
				if (bVar7) {
					local_58.Dispose();
					if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
						AottgGameCreateSession.ReplaceSandboxWorking((InGameSet)settings);
					}
					else {
						AottgGameCreateSession.ReplaceSandboxWorking((InGameSet)settings);
					}
					if (Il2CppMethodInitialized_075452e8 == false) {
						Il2CppMethodInitialized_075452e8 = true;
						uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
					}
					else {
						uVar2 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
					}
					if (uVar2 == 0) {
					}
					AottgGameCreateSession._SelectedPresetName_k__BackingField = name;
					return true;
				}
			}
			local_58.Dispose();
		}
		return false;
	}

	[Token(Token = "0x6000EC8")]
	[Address(RVA = "0x57A26B0", Offset = "0x57A16B0", VA = "0x57A26B0")]
	public static bool SavePreset(string name, out string error)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SavePreset): 11 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		InGameSettings pSVar3;
		SetSettingsContainer<InGameSet> pSVar4;
		ListSetting<T> pSVar5;
		StringSetting pSVar6;
		BoolSetting pSVar7;
		bool bVar9;
		bool bVar10;
		String pSVar11;
		String* ppSVar12;
		List<BaseSetting> __this;
		InGameSet pSVar13;
		AottgGameCreateSession klass;
		byte[] local_68 = new byte[8];
		InGameSet local_58;
		byte[] local_48 = new byte[16];
		InGameSet local_38;

		local_68 = (byte[])0x0;
		local_58 = null;
		*error = null;
		if (name == null) {
			pSVar11 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			pSVar11 = name.Trim();
		}
		bVar10 = String.IsNullOrEmpty(pSVar11);
		if (bVar10) {
			ppSVar12 = &"GameCreate.Presets.Save.NameRequired";
			goto label_058a2a6b;
		}
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452cd == false) goto label_058a2878;
	label_058a284b: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058a2857;
	label_058a2897: ;
			pSVar13 = AottgGameCreateSession._Working_k__BackingField;
			klass = typeof(AottgGameCreateSession);
		}
		else {
			if (Il2CppMethodInitialized_075452cd != false) goto label_058a284b;
	label_058a2878: ;
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058a2897;
	label_058a2857: ;
			pSVar13 = AottgGameCreateSession._Working_k__BackingField;
			klass = typeof(AottgGameCreateSession);
		}
		typeof(AottgGameCreateSession) = klass;
		if (pSVar13 != null) {
			if (*(uint)((long)klass + 0xe4) == 0) {
				bVar10 = AottgGameCreateSession.IsSandbox;
			}
			else {
				bVar10 = AottgGameCreateSession.IsSandbox;
			}
			if (bVar10) {
				pSVar3 = SettingsManager.InGameSettings;
				if (pSVar3 != null) {
					pSVar4 = pSVar3.InGameSets;
					if (((pSVar4 != null) &&(pSVar5 = pSVar4.Sets, pSVar5 != null)) &&(__this = pSVar5.GetItems(), __this != null)) {
						local_48.GetEnumerator((List<object>)__this);
						local_58 = local_38;
						local_68 = (byte[])local_48._0_8_;
						local_48._0_8_ = null;
						local_48._8_8_ = local_68;
						do {
							bVar10 = local_68.MoveNext();
							pSVar13 = local_58;
							if (!bVar10) {
								local_68.Dispose();
								pSVar13 = new InGameSet();
								bVar9 = true;
								bVar10 = true;
								uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
								goto joined_r0x058a2afb;
							}
							if (local_58 == null) {
								throw new NullReferenceException();
							}
							bVar1 = (typeof(InGameSet)._2).typeHierarchyDepth;
							if (((local_58.klass._2).typeHierarchyDepth < bVar1) ||((local_58.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameSet))) {
								throw new InvalidCastException();
							}
							pSVar6 = local_58.Name;
							if (pSVar6 == null) {
								throw new NullReferenceException();
							}
							bVar10 = String.Equals(pSVar6._value, pSVar11, 4);
						} while (!bVar10);
						local_68.Dispose();
						pSVar7 = pSVar13.Preset;
						if (pSVar7 != null) {
							if (pSVar7._value != false) {
								if ((typeof(Aottg2GisketchLocale)._2). cctor_finished_or_no_cctor == 0) {
								}
								ppSVar12 = &"GameCreate.Presets.Save.BuiltInProtected";
								goto label_058a2a6b;
							}
							bVar9 = false;
							bVar10 = false;
							uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
	joined_r0x058a2afb: ;
							if (uVar2 == 0) {
								bVar10 = bVar9;
							}
							if (Il2CppMethodInitialized_075452cd == false) {
								Il2CppMethodInitialized_075452cd = true;
								uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
							}
							else {
								uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
							}
							if (uVar2 == 0) {
							}
							if (pSVar13 != null) {
								pSVar13.Copy(*(BaseSetting*)((long)((Il2CppClass)typeof(AottgGameCreateSession)). static_fields + 0x40));
								pSVar6 = pSVar13.Name;
								if (pSVar6 != null) {
									pSVar6.Value = (object)pSVar11;
									pSVar7 = pSVar13.Preset;
									if (pSVar7 != null) {
										pSVar7.Value = false;
										if (bVar10) {
											pSVar3 = SettingsManager.InGameSettings;
											if (((pSVar3 == null) ||(pSVar4 = pSVar3.InGameSets, pSVar4 == null)) ||(pSVar5 = pSVar4.Sets, pSVar5 == null)) goto label_058a2cc8;
											pSVar5.AddItem((BaseSetting)pSVar13);
										}
										pSVar3 = SettingsManager.InGameSettings;
										if (pSVar3 != null) {
											pSVar3.Save();
											if ((typeof(AottgGameCreateSession)._2). cctor_finished_or_no_cctor == 0) {
											}
											if (Il2CppMethodInitialized_075452e8 == false) {
												Il2CppMethodInitialized_075452e8 = true;
												uVar2 = (typeof(AottgGameCreateSession)._2). cctor_finished_or_no_cctor;
											}
											else {
												uVar2 = *(uint)((long)typeof(AottgGameCreateSession) + 0xe4);
											}
											if (uVar2 == 0) {
											}
											AottgGameCreateSession._SelectedPresetName_k__BackingField = pSVar11;
											return true;
										}
									}
								}
							}
						}
					}
	label_058a2cc8: ;
					throw new NullReferenceException();
				}
				if (((typeof(Aottg2GisketchLocale))._2). cctor_finished_or_no_cctor == 0) {
				}
				ppSVar12 = &"GameCreate.Presets.Save.SettingsUnavailable";
				goto label_058a2a6b;
			}
		}
		ppSVar12 = &"GameCreate.Presets.Save.SandboxRequired";
	label_058a2a6b: ;
		pSVar11 = Aottg2GisketchLocale.Text(*ppSVar12);
		*error = pSVar11;
		return false;
	}

	[Token(Token = "0x6000EC9")]
	[Address(RVA = "0x57A2D40", Offset = "0x57A1D40", VA = "0x57A2D40")]
	public static bool DeletePreset(string name)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$DeletePreset): 8 lines keep C-only constructs
		InGameSettings pSVar1;
		SetSettingsContainer<InGameSet> pSVar2;
		ListSetting<T> pSVar3;
		BoolSetting pSVar4;
		List<object> pSVar5;
		UISettings pSVar6;
		ListSetting<StringSetting> pSVar7;
		bool bVar8;
		int iVar9;
		AottgGameCreateSession.c__DisplayClass140_0 __this;
		List<BaseSetting> source;
		System_Collections_Generic_IEnumerable_TResult__o source_00;
		Func<InGameSet, bool> __this_00;
		InGameSet item;
		Predicate<T> match;
		String a;

		if (Il2CppMethodInitialized_075452a7 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value) ;
			Il2CppMethodInitialized_075452a7 = true;
		}
		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateSession.c__DisplayClass140_0));
		__this = new AottgGameCreateSession.c__DisplayClass140_0();
		if (__this != null) {
			__this.name = name;
			bVar8 = String.IsNullOrWhiteSpace(__this.name);
			if (bVar8) {
				return false;
			}
			pSVar1 = SettingsManager.InGameSettings;
			if (pSVar1 == null) {
				return false;
			}
			pSVar2 = pSVar1.InGameSets;
			if ((pSVar2 != null) &&(pSVar3 = pSVar2.Sets, pSVar3 != null)) {
				source = pSVar3.GetItems();
				source_00 = Enumerable.Cast<InGameSet>((IEnumerable)source);
				__this_00 = new Func<InGameSet, bool>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass140_0_DeletePreset_b__0);
				item = Enumerable.FirstOrDefault<InGameSet>((System_Collections_Generic_IEnumerable_TSource__o)source_00, (System_Func_TSource__bool__o)__this_00);
				if (item == null) {
					return false;
				}
				pSVar4 = item.Preset;
				if (pSVar4 != null) {
					if (pSVar4._value != false) {
						return false;
					}
					pSVar1 = SettingsManager.InGameSettings;
					if ((((pSVar1 != null) &&(pSVar2 = pSVar1.InGameSets, pSVar2 != null)) &&(pSVar3 = pSVar2.Sets, pSVar3 != null)) &&(pSVar5 = (List<object>)pSVar3._value, pSVar5 != null)) {
						bVar8 = pSVar5.Remove((object)item);
						if (!bVar8) {
							return false;
						}
						pSVar1 = SettingsManager.InGameSettings;
						if (pSVar1 != null) {
							pSVar1.Save();
							pSVar6 = SettingsManager.UISettings;
							if (pSVar6 == null) goto label_058a3041;
							pSVar7 = pSVar6.FavoriteSandboxPresets;
							if (pSVar7 != null) {
								pSVar5 = (List<object>)pSVar7._value;
								match = new Predicate<StringSetting>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c__DisplayClass140_0_DeletePreset_b__1);
								if (pSVar5 != null) {
									iVar9 = pSVar5.RemoveAll(match);
									if (0 < iVar9) {
										pSVar6 = SettingsManager.UISettings;
										if (pSVar6 == null) goto label_058a30aa;
										pSVar6.Save();
									}
	label_058a3041: ;
									a = (String)il2cpp_runtime_helper_058a7830(0);
									bVar8 = String.Equals(a, __this.name, 4);
									if (!bVar8) {
										return true;
									}
									il2cpp_runtime_helper_058a7aa0(0, 0);
									return true;
								}
							}
						}
					}
				}
			}
		}
	label_058a30aa: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000ECA")]
	[Address(RVA = "0x57A30B0", Offset = "0x57A20B0", VA = "0x57A30B0")]
	public static bool Back()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$Back): 21 lines keep C-only constructs
		sbyte cVar1;
		uint uVar2;
		int iVar3;
		ExperienceRuleResult pSVar4;
		Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields pGVar5;
		InGameSet pSVar6;
		StringSetting pSVar7;
		BoolSetting __this;
		bool bVar8;
		bool bVar9;
		Experience[] pMVar10;
		String[] pSVar11;
		Experience pMVar12;
		String pSVar13;
		MethodInfo pMVar14;
		String subcategory;
		Il2CppClass pIVar15;

		if (Il2CppMethodInitialized_075452a8 == false) {
			Il2CppMethodInitialized_075452a8 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058a31ba;
	label_058a30db: ;
			if (g_data_075452d0 != false) goto label_058a30e8;
	label_058a31cc: ;
			g_data_075452d0 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058a31ef;
	label_058a30f8: ;
			cVar1 = AottgGameCreateSession. _ShowRoomSettings_k__BackingField;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058a30db;
	label_058a31ba: ;
			if (g_data_075452d0 == false) goto label_058a31cc;
	label_058a30e8: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058a30f8;
	label_058a31ef: ;
			cVar1 = AottgGameCreateSession. _ShowRoomSettings_k__BackingField;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (cVar1 != false) {
			if (uVar2 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			if (Il2CppMethodInitialized_075452e6 == false) {
				Il2CppMethodInitialized_075452e6 = true;
				uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
				pIVar15 = typeof(AottgGameCreateSession);
			}
			else {
				uVar2 = *(uint)((long)typeof(AottgGameCreateSession) + 0xe4);
				pIVar15 = typeof(AottgGameCreateSession);
			}
			typeof(AottgGameCreateSession) =(AottgGameCreateSession)pIVar15;
			if (uVar2 == 0) {
				pIVar15 = typeof(AottgGameCreateSession);
				AottgGameCreateSession._ShowRoomSettings_k__BackingField = false;
			}
			else {
				(*(Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields*)((long)pIVar15 + 0xb8)). _ShowRoomSettings_k__BackingField = false;
			}
			if (Il2CppMethodInitialized_075452dd == false) {
				Il2CppMethodInitialized_075452dd = true;
				uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
				pIVar15 = typeof(AottgGameCreateSession);
			}
			else {
				uVar2 = (pIVar15._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
				pIVar15 = typeof(AottgGameCreateSession);
			}
			return *(int)((long)pIVar15.static_fields + 0x38) != 1;
		}
		if (uVar2 == 0) {
			if (g_data_075452d1 == false) goto label_058a3312;
	label_058a3223: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058a3233;
	label_058a3335: ;
			cVar1 = AottgGameCreateSession. _ShowFavorites_k__BackingField;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (g_data_075452d1 != false) goto label_058a3223;
	label_058a3312: ;
			g_data_075452d1 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058a3335;
	label_058a3233: ;
			cVar1 = AottgGameCreateSession. _ShowFavorites_k__BackingField;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (cVar1 != false) {
			if (uVar2 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			if (Il2CppMethodInitialized_075452e7 == false) {
				Il2CppMethodInitialized_075452e7 = true;
				uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar2 = *(uint)((long)typeof(AottgGameCreateSession) + 0xe4);
			}
			if (uVar2 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			AottgGameCreateSession._ShowFavorites_k__BackingField = false;
			return true;
		}
		if (uVar2 == 0) {
			if (g_data_075452d2 == false) goto label_058a33d8;
	label_058a3361: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058a3371;
	label_058a33fb: ;
			pMVar12 = AottgGameCreateSession. _Experience_k__BackingField;
		}
		else {
			if (g_data_075452d2 != false) goto label_058a3361;
	label_058a33d8: ;
			g_data_075452d2 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058a33fb;
	label_058a3371: ;
			pMVar12 = AottgGameCreateSession. _Experience_k__BackingField;
		}
		if (pMVar12 == null) {
			if (((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				if (Il2CppMethodInitialized_075452d6 == false) goto label_058a3451;
	label_058a3427: ;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058a3433;
	label_058a3470: ;
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				pSVar4 = AottgGameCreateSession. _RuleResult_k__BackingField;
				pIVar15 = typeof(AottgGameCreateSession);
			}
			else {
				if (Il2CppMethodInitialized_075452d6 != false) goto label_058a3427;
	label_058a3451: ;
				Il2CppMethodInitialized_075452d6 = true;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058a3470;
	label_058a3433: ;
				pSVar4 = AottgGameCreateSession. _RuleResult_k__BackingField;
				pIVar15 = typeof(AottgGameCreateSession);
			}
			typeof(AottgGameCreateSession) =(AottgGameCreateSession)pIVar15;
			if (pSVar4 == null) {
				bVar8 = AottgGameCreateSession.IsSandbox;
				if (!bVar8) {
					pSVar13 = (String)il2cpp_runtime_helper_058a76e0(0);
					bVar8 = String.IsNullOrEmpty(pSVar13);
					uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
					if (bVar8) {
						if (uVar2 == 0) {
						}
						pSVar13 = (String)il2cpp_runtime_helper_058a7750(0);
						bVar8 = String.IsNullOrEmpty(pSVar13);
						if (bVar8) {
							return false;
						}
						il2cpp_runtime_helper_058a78a0(0, 0);
						return true;
					}
					if (uVar2 == 0) {
					}
					il2cpp_runtime_helper_058a7920(0, 0);
					pSVar11 = AottgGameCreateSession.Subcategories();
					if (pSVar11 != null) {
						iVar3 = (int)pSVar11.Length;
						goto joined_r0x058a3a0b;
					}
					goto label_058a3cae;
				}
			}
		}
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			bVar8 = AottgGameCreateSession.IsSandbox;
			if (!bVar8) goto label_058a359d;
	label_058a34c1: ;
			bVar8 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058a34d1;
	label_058a3a49: ;
			if (Il2CppMethodInitialized_075452e2 == false) goto label_058a3a5b;
	label_058a34de: ;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			bVar8 = AottgGameCreateSession.IsSandbox;
			if (bVar8) goto label_058a34c1;
	label_058a359d: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				if (Il2CppMethodInitialized_075452d4 == false) goto label_058a3adf;
	label_058a35ba: ;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058a35ca;
	label_058a3b02: ;
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				pSVar13 = AottgGameCreateSession. _Category_k__BackingField;
				if (Il2CppMethodInitialized_075452d3 == false) goto label_058a3b22;
	label_058a35e2: ;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058a35ef;
	label_058a3b41: ;
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				subcategory = AottgGameCreateSession. _Subcategory_k__BackingField;
				if (Il2CppMethodInitialized_07545279 == false) goto label_058a3b61;
	label_058a3607: ;
				uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (Il2CppMethodInitialized_075452d4 != false) goto label_058a35ba;
	label_058a3adf: ;
				Il2CppMethodInitialized_075452d4 = true;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058a3b02;
	label_058a35ca: ;
				pSVar13 = AottgGameCreateSession. _Category_k__BackingField;
				if (Il2CppMethodInitialized_075452d3 != false) goto label_058a35e2;
	label_058a3b22: ;
				Il2CppMethodInitialized_075452d3 = true;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058a3b41;
	label_058a35ef: ;
				subcategory = AottgGameCreateSession. _Subcategory_k__BackingField;
				if (Il2CppMethodInitialized_07545279 != false) goto label_058a3607;
	label_058a3b61: ;
				Il2CppMethodInitialized_07545279 = true;
				uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			pMVar10 = AottgGameCreateSession.ExperiencesIn(pSVar13, subcategory);
			if (pMVar10 == null) goto label_058a3cae;
			if ((int)pMVar10.Length == 1) {
				pMVar12 = pMVar10[0];
			}
			else {
				pMVar12 = null;
			}
			bVar8 = pMVar12 == null;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058a3a49;
	label_058a34d1: ;
			if (Il2CppMethodInitialized_075452e2 != false) goto label_058a34de;
	label_058a3a5b: ;
			Il2CppMethodInitialized_075452e2 = true;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		pGVar5 = typeof(AottgGameCreateSession).static_fields;
		pGVar5._Experience_k__BackingField = null;
		pGVar5 = typeof(AottgGameCreateSession).static_fields;
		pGVar5._RuleResult_k__BackingField = null;
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058a365e;
	label_058a356f: ;
			pSVar6 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058a356f;
	label_058a365e: ;
			pSVar6 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar6 == null) ||(pSVar7 = pSVar6.ExperienceName, pSVar7 == null)) goto label_058a3cae;
		pSVar7.Value = (object)**(ulong*)(g_data_07556758 + 0xb8);
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058a36f8;
	label_058a36c4: ;
			pSVar6 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058a36c4;
	label_058a36f8: ;
			pSVar6 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar6 == null) ||(pSVar7 = pSVar6.ExperienceVariant, pSVar7 == null)) goto label_058a3cae;
		pSVar7.Value = (object)**(ulong*)(g_data_07556758 + 0xb8);
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058a3787;
	label_058a3753: ;
			pSVar6 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058a3753;
	label_058a3787: ;
			pSVar6 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar6 == null) ||(__this = pSVar6.Sandbox, __this == null)) goto label_058a3cae;
		__this.Value = false;
		pIVar15 = typeof(AottgGameCreateSession);
		AottgGameCreateSession._configurationMode = 0;
		if (Il2CppMethodInitialized_075452d4 == false) {
			Il2CppMethodInitialized_075452d4 = true;
			pIVar15 = typeof(AottgGameCreateSession);
		}
		if ((pIVar15._2).cctor_finished_or_no_cctor == 0) {
			pIVar15 = typeof(AottgGameCreateSession);
		}
		bVar9 = String.Equals(pIVar15.static_fields._Category_k__BackingField, "Sandbox", 5);
		if (bVar9) {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				if (Il2CppMethodInitialized_075452e0 == false) goto label_058a3b9c;
	label_058a3922: ;
				uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (Il2CppMethodInitialized_075452e0 != false) goto label_058a3922;
	label_058a3b9c: ;
				Il2CppMethodInitialized_075452e0 = true;
				uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			pGVar5 = typeof(AottgGameCreateSession).static_fields;
			pGVar5._Category_k__BackingField = null;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058a395c;
	label_058a383a: ;
			if (g_data_075452d1 != false) goto label_058a3847;
	label_058a396e: ;
			g_data_075452d1 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058a3991;
	label_058a3857: ;
			cVar1 = AottgGameCreateSession. _ShowFavorites_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058a383a;
	label_058a395c: ;
			if (g_data_075452d1 == false) goto label_058a396e;
	label_058a3847: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058a3857;
	label_058a3991: ;
			cVar1 = AottgGameCreateSession. _ShowFavorites_k__BackingField;
		}
		if (cVar1 != false) {
			if (((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			if (Il2CppMethodInitialized_075452e0 == false) {
				Il2CppMethodInitialized_075452e0 = true;
				uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar2 = *(uint)((long)typeof(AottgGameCreateSession) + 0xe4);
			}
			if (uVar2 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			pGVar5 = typeof(AottgGameCreateSession).static_fields;
			pGVar5._Category_k__BackingField = null;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			pGVar5 = typeof(AottgGameCreateSession).static_fields;
			pGVar5._Subcategory_k__BackingField = null;
			return true;
		}
		if (bVar8) {
			return true;
		}
		if (((typeof(AottgGameCreateSession))._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452e1 == false) goto label_058a3c51;
	label_058a39cf: ;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_075452e1 != false) goto label_058a39cf;
	label_058a3c51: ;
			Il2CppMethodInitialized_075452e1 = true;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		pGVar5 = typeof(AottgGameCreateSession).static_fields;
		pGVar5._Subcategory_k__BackingField = null;
		pMVar14 = (MethodInfo)&pGVar5._Subcategory_k__BackingField;
		pSVar11 = AottgGameCreateSession.Subcategories();
		if (pSVar11 != null) {
			iVar3 = (int)pSVar11.Length;
	joined_r0x058a3a0b: ;
			if (iVar3 != 1) {
				return true;
			}
			if (((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			il2cpp_runtime_helper_058a78a0(0, 0);
			return true;
		}
	label_058a3cae: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000ECB")]
	[Address(RVA = "0x57A3CC0", Offset = "0x57A2CC0", VA = "0x57A3CC0")]
	public static void NavigateRoot()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$NavigateRoot): 1 lines keep C-only constructs
		uint uVar1;
		bool bVar2;

		if (Il2CppMethodInitialized_075452a9 == false) {
			Il2CppMethodInitialized_075452a9 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075452e6 == false) {
			Il2CppMethodInitialized_075452e6 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		AottgGameCreateSession._ShowRoomSettings_k__BackingField = false;
		do {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			bVar2 = AottgGameCreateSession.Back();
		} while (bVar2);
		return;
	}

	[Token(Token = "0x6000ECC")]
	[Address(RVA = "0x57A3D80", Offset = "0x57A2D80", VA = "0x57A3D80")]
	public static bool NavigateCategory()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$NavigateCategory): 11 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_075452aa == false) {
			Il2CppMethodInitialized_075452aa = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075452e6 == false) {
			Il2CppMethodInitialized_075452e6 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgGameCreateSession);
		}
		else {
			uVar1 = *(uint)((long)typeof(AottgGameCreateSession) + 0xe4);
			klass = typeof(AottgGameCreateSession);
		}
		typeof(AottgGameCreateSession) =(AottgGameCreateSession)klass;
		if (uVar1 == 0) {
			klass = typeof(AottgGameCreateSession);
			AottgGameCreateSession._ShowRoomSettings_k__BackingField = false;
		}
		else {
			*(byte)((long)klass.static_fields + 0x78) = 0;
		}
		if (Il2CppMethodInitialized_075452d4 == false) {
			Il2CppMethodInitialized_075452d4 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgGameCreateSession);
		}
		else {
			uVar1 = (klass._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			klass = typeof(AottgGameCreateSession);
		}
		bVar2 = String.IsNullOrEmpty(*(String*)((long)klass.static_fields + 0x48));
		if (!bVar2) {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				bVar2 = AottgGameCreateSession.IsSandbox;
			}
			else {
				bVar2 = AottgGameCreateSession.IsSandbox;
			}
			if (!bVar2) {
				if (((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor == 0) {
				}
				if (Il2CppMethodInitialized_075452d4 == false) {
					Il2CppMethodInitialized_075452d4 = true;
					uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				AottgGameCreateSession.SelectCategory(AottgGameCreateSession. _Category_k__BackingField);
				return true;
			}
			return false;
		}
		return false;
	}

	[Token(Token = "0x6000ECD")]
	[Address(RVA = "0x57A3F60", Offset = "0x57A2F60", VA = "0x57A3F60")]
	public static bool NavigateSubcategory()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$NavigateSubcategory): 10 lines keep C-only constructs
		uint uVar1;
		Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields pGVar2;
		InGameSet pSVar3;
		StringSetting pSVar4;
		bool bVar5;
		Experience[] pMVar6;
		String[] pSVar7;
		MethodInfo pMVar8;
		String subcategory;
		Il2CppClass klass;
		Experience pMVar9;
		String category;

		if (Il2CppMethodInitialized_075452ab == false) {
			Il2CppMethodInitialized_075452ab = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058a4044;
	label_058a3f8c: ;
			if (Il2CppMethodInitialized_075452e6 != false) goto label_058a3f99;
	label_058a4056: ;
			Il2CppMethodInitialized_075452e6 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058a4079;
	label_058a3fa9: ;
			klass = typeof(AottgGameCreateSession);
			AottgGameCreateSession._ShowRoomSettings_k__BackingField = false;
			if (Il2CppMethodInitialized_075452d3 != false) goto label_058a3fc1;
	label_058a4099: ;
			Il2CppMethodInitialized_075452d3 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgGameCreateSession);
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058a3f8c;
	label_058a4044: ;
			if (Il2CppMethodInitialized_075452e6 == false) goto label_058a4056;
	label_058a3f99: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058a3fa9;
	label_058a4079: ;
			klass = typeof(AottgGameCreateSession);
			AottgGameCreateSession._ShowRoomSettings_k__BackingField = false;
			if (Il2CppMethodInitialized_075452d3 == false) goto label_058a4099;
	label_058a3fc1: ;
			uVar1 = (klass._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			klass = typeof(AottgGameCreateSession);
		}
		bVar5 = String.IsNullOrEmpty(*(String*)((long)klass.static_fields + 0x50));
		if (bVar5) {
			return false;
		}
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			bVar5 = AottgGameCreateSession.IsSandbox;
		}
		else {
			bVar5 = AottgGameCreateSession.IsSandbox;
		}
		if (bVar5) {
			return false;
		}
		if (((typeof(AottgGameCreateSession))._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452d4 == false) goto label_058a4243;
	label_058a40f4: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058a4104;
	label_058a4266: ;
			category = AottgGameCreateSession. _Category_k__BackingField;
			if (Il2CppMethodInitialized_075452d3 == false) goto label_058a4286;
	label_058a411c: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058a4129;
	label_058a42a5: ;
			subcategory = AottgGameCreateSession. _Subcategory_k__BackingField;
			if (Il2CppMethodInitialized_07545279 == false) goto label_058a42c5;
	label_058a4141: ;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_075452d4 != false) goto label_058a40f4;
	label_058a4243: ;
			Il2CppMethodInitialized_075452d4 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058a4266;
	label_058a4104: ;
			category = AottgGameCreateSession. _Category_k__BackingField;
			if (Il2CppMethodInitialized_075452d3 != false) goto label_058a411c;
	label_058a4286: ;
			Il2CppMethodInitialized_075452d3 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058a42a5;
	label_058a4129: ;
			subcategory = AottgGameCreateSession. _Subcategory_k__BackingField;
			if (Il2CppMethodInitialized_07545279 != false) goto label_058a4141;
	label_058a42c5: ;
			Il2CppMethodInitialized_07545279 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pMVar6 = AottgGameCreateSession.ExperiencesIn(category, subcategory);
		if (pMVar6 == null) goto label_058a4560;
		if ((int)pMVar6.Length == 1) {
			pMVar9 = pMVar6[0];
		}
		else {
			pMVar9 = null;
		}
		pGVar2 = typeof(AottgGameCreateSession).static_fields;
		pGVar2._Experience_k__BackingField = null;
		if (Il2CppMethodInitialized_075452e3 == false) {
			Il2CppMethodInitialized_075452e3 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pGVar2 = typeof(AottgGameCreateSession).static_fields;
		pGVar2._RuleResult_k__BackingField = null;
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058a4341;
	label_058a4218: ;
			pSVar3 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058a4218;
	label_058a4341: ;
			pSVar3 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar3 == null) ||(pSVar4 = pSVar3.ExperienceName, pSVar4 == null)) goto label_058a4560;
		pSVar4.Value = (object)**(ulong*)(g_data_07556758 + 0xb8);
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058a43db;
	label_058a43a7: ;
			pSVar3 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058a43a7;
	label_058a43db: ;
			pSVar3 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar3 == null) ||(pSVar4 = pSVar3.ExperienceVariant, pSVar4 == null)) goto label_058a4560;
		pSVar4.Value = (object)**(ulong*)(g_data_07556758 + 0xb8);
		if (pMVar9 == null) {
			return true;
		}
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452e1 == false) goto label_058a44ee;
	label_058a4449: ;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_075452e1 != false) goto label_058a4449;
	label_058a44ee: ;
			Il2CppMethodInitialized_075452e1 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pGVar2 = typeof(AottgGameCreateSession).static_fields;
		pGVar2._Subcategory_k__BackingField = null;
		pMVar8 = (MethodInfo)&pGVar2._Subcategory_k__BackingField;
		pSVar7 = AottgGameCreateSession.Subcategories();
		if (pSVar7 != null) {
			if ((int)pSVar7.Length != 1) {
				return true;
			}
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			if (Il2CppMethodInitialized_075452e0 == false) {
				Il2CppMethodInitialized_075452e0 = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			pGVar2 = typeof(AottgGameCreateSession).static_fields;
			pGVar2._Category_k__BackingField = null;
			return true;
		}
	label_058a4560: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000ECE")]
	[Address(RVA = "0x57A4570", Offset = "0x57A3570", VA = "0x57A4570")]
	public static void OpenRoomSettings()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$OpenRoomSettings): clean
		sbyte cVar1;
		uint uVar2;

		if (Il2CppMethodInitialized_075452ac == false) {
			Il2CppMethodInitialized_075452ac = true;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		if (Il2CppMethodInitialized_075452ce == false) {
			Il2CppMethodInitialized_075452ce = true;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			cVar1 = AottgGameCreateSession._isMultiplayer;
		}
		else {
			cVar1 = *(sbyte)((long)(typeof(AottgGameCreateSession)). static_fields + 0x20);
		}
		if (cVar1 == false) {
			return;
		}
		if (((typeof(AottgGameCreateSession))._2).cctor_finished_or_no_cctor == 0) {
		}
		if (Il2CppMethodInitialized_075452e6 == false) {
			Il2CppMethodInitialized_075452e6 = true;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			AottgGameCreateSession._ShowRoomSettings_k__BackingField = true;
			return;
		}
		*(byte)((long)(typeof(AottgGameCreateSession)).static_fields + 0x78) = 1;
		return;
	}

	[Token(Token = "0x6000ECF")]
	[Address(RVA = "0x57A4690", Offset = "0x57A3690", VA = "0x57A4690")]
	public static void OpenExperiences()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$OpenExperiences): 13 lines keep C-only constructs
		uint uVar1;
		IntPtr pvVar2;
		InGameSet pSVar3;
		Il2CppClass klass;
		MethodInfo method_00;

		if (Il2CppMethodInitialized_075452ad == false) {
			Il2CppMethodInitialized_075452ad = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075452e6 == false) {
			Il2CppMethodInitialized_075452e6 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgGameCreateSession);
		}
		else {
			uVar1 = *(uint)((long)typeof(AottgGameCreateSession) + 0xe4);
			klass = typeof(AottgGameCreateSession);
		}
		typeof(AottgGameCreateSession) =(AottgGameCreateSession)klass;
		if (uVar1 == 0) {
			klass = typeof(AottgGameCreateSession);
			AottgGameCreateSession._ShowRoomSettings_k__BackingField = false;
		}
		else {
			((AottgGameCreateSession)klass).static_fields. _ShowRoomSettings_k__BackingField = false;
		}
		if (Il2CppMethodInitialized_075452e7 == false) {
			Il2CppMethodInitialized_075452e7 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgGameCreateSession);
		}
		else {
			uVar1 = (klass._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			klass = typeof(AottgGameCreateSession);
		}
		pvVar2 = klass.static_fields;
		*(byte)((long)pvVar2 + 0x79) = 0;
		*(uint)((long)pvVar2 + 0x24) = 0;
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			klass = typeof(AottgGameCreateSession);
		}
		else {
			uVar1 = (klass._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar3 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			pSVar3 = *(InGameSet*)((long)klass.static_fields + 0x40);
		}
		if ((pSVar3 == null) ||(method_00 = (MethodInfo)pSVar3.Sandbox, method_00 == null)) {
			throw new NullReferenceException();
		}
		method_00.Value = false;
		AottgGameCreateSession.NavigateRoot();
		return;
	}

	[Token(Token = "0x6000ED0")]
	[Address(RVA = "0x57998C0", Offset = "0x57988C0", VA = "0x57998C0")]
	private static void RefreshSandbox()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$RefreshSandbox): 10 lines keep C-only constructs
		uint uVar1;
		Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields pGVar2;
		String pSVar3;
		object @object;
		String[] pSVar4;
		System_Linq_IOrderedEnumerable_TSource__o source;
		Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_StaticFields pGVar5;
		System_Func_TSource__TKey__o __this;
		SandboxGameCreateConfiguration pSVar6;
		MethodInfo method_00;

		if (Il2CppMethodInitialized_075452ae == false) {
			Il2CppMethodInitialized_075452ae = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058998e9;
	label_0589998e: ;
			pSVar6 = AottgGameCreateSession.SandboxConfiguration;
			if (Il2CppMethodInitialized_075452cd != false) goto label_05899901;
	label_058999ae: ;
			Il2CppMethodInitialized_075452cd = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589998e;
	label_058998e9: ;
			pSVar6 = AottgGameCreateSession.SandboxConfiguration;
			if (Il2CppMethodInitialized_075452cd == false) goto label_058999ae;
	label_05899901: ;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (pSVar6 == null) goto label_05899c41;
		pSVar6.Refresh(*(InGameSet*)((long)(typeof(AottgGameCreateSession)). static_fields + 0x40));
		pSVar6 = AottgGameCreateSession.SandboxConfiguration;
		if (pSVar6 == null) goto label_05899c41;
		pSVar4 = pSVar6.GetAddonNames();
		if ((typeof(AottgGameCreateSession.c)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession.c)) ;
			pGVar5 = typeof(AottgGameCreateSession.c).static_fields;
			__this = (System_Func_TSource__TKey__o)pGVar5.__9__147_0;
			if (__this != null) goto label_05899a43;
	label_05899b53: ;
			if ((typeof(AottgGameCreateSession.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar5 = typeof(AottgGameCreateSession.c).static_fields;
			}
			@object = (object)pGVar5.__9;
			__this = new Func<string, string>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_RefreshSandbox_b__147_0);
			pGVar5 = typeof(AottgGameCreateSession.c).static_fields;
			pGVar5.__9__147_0 = (Func<string, string>)__this;
			if ((typeof(StringComparer)._2).cctor_finished_or_no_cctor != 0) goto label_05899a5b;
	label_05899bd1: ;
			if (Il2CppMethodInitialized_07542886 != false) goto label_05899a68;
	label_05899be3: ;
			Il2CppMethodInitialized_07542886 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			pGVar5 = typeof(AottgGameCreateSession.c).static_fields;
			__this = (System_Func_TSource__TKey__o)pGVar5.__9__147_0;
			if (__this == null) goto label_05899b53;
	label_05899a43: ;
			if ((typeof(StringComparer)._2).cctor_finished_or_no_cctor == 0) goto label_05899bd1;
	label_05899a5b: ;
			if (Il2CppMethodInitialized_07542886 == false) goto label_05899be3;
	label_05899a68: ;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		source = Enumerable.OrderBy<string, string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar4, __this, (System_Collections_Generic_IComparer_TKey__o)StringComparer.s_ordinalIgnoreCase);
		pSVar4 = (String[])Enumerable.ToArray<string>((System_Collections_Generic_IEnumerable_TSource__o)source);
		pGVar2 = typeof(AottgGameCreateSession).static_fields;
		pGVar2._sandboxAddonNames = pSVar4;
		pSVar6 = AottgGameCreateSession.SandboxConfiguration;
		if (pSVar6 != null) {
			pSVar3 = pSVar6._LastError_k__BackingField;
			if (Il2CppMethodInitialized_075452e4 == false) {
				Il2CppMethodInitialized_075452e4 = true;
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			pGVar2 = typeof(AottgGameCreateSession).static_fields;
			pGVar2._LoadError_k__BackingField = pSVar3;
			method_00 = (MethodInfo)&pGVar2._LoadError_k__BackingField;
			AottgGameCreateSession.RebuildSandboxFields();
			return;
		}
	label_05899c41: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000ED1")]
	[Address(RVA = "0x579E170", Offset = "0x579D170", VA = "0x579E170")]
	private static void RebuildSandboxFields()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$RebuildSandboxFields): 33 lines keep C-only constructs
		int piVar1;
		int length;
		uint uVar2;
		List<AottgSandboxField> pSVar3;
		Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields pGVar4;
		InGameGeneralSettings pSVar5;
		StringSetting setting;
		SandboxGameCreateConfiguration __this;
		IntSetting setting_00;
		WeatherSettings pSVar6;
		SetSettingsContainer<WeatherSet> __this_00;
		InGameModeSettings pSVar7;
		InGameAddonSettings pSVar8;
		Dictionary<string, Dictionary<string, BaseSetting>> source;
		Il2CppClass pIVar9;
		Il2CppRuntimeInterfaceOffsetPair pIVar10;
		bool bVar11;
		String pSVar12;
		String[] pSVar13;
		MethodInfo pMVar14;
		object pIVar15;
		VirtualInvokeData pVVar16;
		Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_StaticFields pGVar17;
		Func<T, TResult> __this_01;
		ulong uVar18;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo extraout_RDX_01;
		MethodInfo extraout_RDX_02;
		MethodInfo extraout_RDX_03;
		MethodInfo extraout_RDX_04;
		InGameSet pSVar19;
		AottgSandboxField[] method_00;
		long lVar20;
		byte[] auVar21 = new byte[16];
		object local_50;
		int[] local_44 = new int[3];
		object* local_38;

		local_44[0] = 0;
		local_50 = null;
		method_00 = (AottgSandboxField[])typeof(AottgGameCreateSession);
		pSVar3 = AottgGameCreateSession.SandboxFieldsInternal;
		if (pSVar3 == null) goto label_0589ee05;
		piVar1 = &pSVar3._version;
		*piVar1 = *piVar1 + 1;
		length = pSVar3._size;
		pSVar3._size = 0;
		if (0 < length) {
			method_00 = pSVar3._items;
			Array.Clear((Array)method_00, 0, length);
		}
		bVar11 = AottgGameCreateSession.IsSandbox;
		if (!bVar11) {
			return;
		}
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452cf != false) goto label_0589e36a;
	label_0589e46b: ;
			Il2CppMethodInitialized_075452cf = true;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_075452cf == false) goto label_0589e46b;
	label_0589e36a: ;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		pSVar12 = AottgGameCreateSession. _SandboxSection_k__BackingField;
		pMVar14 = (MethodInfo *)"General";
		bVar11 = (pSVar12 == "General");
		if (!bVar11) {
			bVar11 = (pSVar12 == "Mode");
			if (!bVar11) {
				bVar11 = (pSVar12 == "Titans");
				if (!bVar11) {
					bVar11 = (pSVar12 == "Misc");
					if (!bVar11) {
						return;
					}
					if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
						if (Il2CppMethodInitialized_075452cd != false) goto label_0589e4f0;
	label_0589ed9d: ;
						Il2CppMethodInitialized_075452cd = true;
						uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
					}
					else {
						if (Il2CppMethodInitialized_075452cd == false) goto label_0589ed9d;
	label_0589e4f0: ;
						uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
					}
					if (uVar2 == 0) {
						pGVar4 = typeof(AottgGameCreateSession).static_fields;
						pSVar19 = pGVar4._Working_k__BackingField;
					}
					else {
						pGVar4 = (typeof(AottgGameCreateSession)).static_fields;
						pSVar19 = pGVar4._Working_k__BackingField;
					}
					if (pSVar19 != null) {
						AottgGameCreateSession.AddContainerFields("misc", (BaseSettingsContainer)pSVar19.Misc, pGVar4.MultiplayerMiscIds);
						return;
					}
					goto label_0589ee05;
				}
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
					if (Il2CppMethodInitialized_075452cd != false) goto label_0589ecfd;
	label_0589ed2c: ;
					Il2CppMethodInitialized_075452cd = true;
					if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589ed09;
	label_0589ed4b: ;
					pSVar19 = AottgGameCreateSession. _Working_k__BackingField;
				}
				else {
					if (Il2CppMethodInitialized_075452cd == false) goto label_0589ed2c;
	label_0589ecfd: ;
					if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589ed4b;
	label_0589ed09: ;
					pSVar19 = AottgGameCreateSession. _Working_k__BackingField;
				}
				if (pSVar19 != null) {
					AottgGameCreateSession.AddContainerFields("titan", (BaseSettingsContainer)pSVar19.Titan, null);
					return;
				}
				goto label_0589ee05;
			}
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				pMVar14 = extraout_RDX_00;
				if (Il2CppMethodInitialized_075452cd != false) goto label_0589e430;
	label_0589e849: ;
				Il2CppMethodInitialized_075452cd = true;
				pMVar14 = extraout_RDX_01;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589e440;
	label_0589e86c: ;
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				pSVar19 = AottgGameCreateSession. _Working_k__BackingField;
				pMVar14 = extraout_RDX_02;
			}
			else {
				pMVar14 = extraout_RDX;
				if (Il2CppMethodInitialized_075452cd == false) goto label_0589e849;
	label_0589e430: ;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589e86c;
	label_0589e440: ;
				pSVar19 = AottgGameCreateSession. _Working_k__BackingField;
			}
			if ((pSVar19 == null) ||(pSVar7 = pSVar19.Mode, pSVar7 == null)) goto label_0589ee05;
			AottgGameCreateSession.AddDynamicFields("mode", pSVar7.Current);
			if (Il2CppMethodInitialized_075452cd == false) {
				Il2CppMethodInitialized_075452cd = true;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589e8bd;
	label_0589e8f1: ;
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				pSVar19 = AottgGameCreateSession. _Working_k__BackingField;
			}
			else {
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589e8f1;
	label_0589e8bd: ;
				pSVar19 = AottgGameCreateSession. _Working_k__BackingField;
			}
			if ((pSVar19 == null) ||(pSVar8 = pSVar19.Addons, pSVar8 == null)) goto label_0589ee05;
			source = pSVar8.Current;
			if (((typeof(AottgGameCreateSession.c))._2). cctor_finished_or_no_cctor == 0) {
				pGVar17 = typeof(AottgGameCreateSession.c).static_fields;
				__this_01 = (Func<T, TResult>)pGVar17.__9__148_0;
				if (__this_01 != null) goto label_0589e94d;
	label_0589ea25: ;
				if ((typeof(AottgGameCreateSession.c)._2).cctor_finished_or_no_cctor == 0) {
					pGVar17 = typeof(AottgGameCreateSession.c).static_fields;
				}
				pIVar15 = (object)pGVar17.__9;
				__this_01 = (Func<T, TResult>)il2cpp_codegen_object_new((Il2CppClass)typeof(Func<KeyValuePair<string, Dictionary<string, BaseSetting>>, string>));
				__this_01 = new Func<KeyValuePair<object, object>, object>(pIVar15, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_RebuildSandboxFields_b__148_0);
				pGVar17 = typeof(AottgGameCreateSession.c).static_fields;
				pGVar17.__9__148_0 =(Func<KeyValuePair<string, Dictionary<string, BaseSetting>>, string>)__this_01;
				if ((typeof(StringComparer)._2).cctor_finished_or_no_cctor != 0) goto label_0589e965;
	label_0589eaa3: ;
				if (Il2CppMethodInitialized_07542886 != false) goto label_0589e972;
	label_0589eab5: ;
				Il2CppMethodInitialized_07542886 = true;
				uVar2 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
			}
			else {
				pGVar17 = (typeof(AottgGameCreateSession.c)).static_fields;
				__this_01 = (Func<T, TResult>)pGVar17.__9__148_0;
				if (__this_01 == null) goto label_0589ea25;
	label_0589e94d: ;
				if ((typeof(StringComparer)._2).cctor_finished_or_no_cctor == 0) goto label_0589eaa3;
	label_0589e965: ;
				if (Il2CppMethodInitialized_07542886 == false) goto label_0589eab5;
	label_0589e972: ;
				uVar2 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
			}
			pIVar15 = (object)Enumerable.OrderBy<KeyValuePair<string, Dictionary<string, BaseSetting>>, string>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TKey__o)__this_01, (System_Collections_Generic_IComparer_TKey__o)StringComparer.s_ordinalIgnoreCase);
			if (pIVar15 != null) {
				pIVar9 = pIVar15.klass;
				uVar18 = (ulong)(pIVar9._2).interface_offsets_count;
				local_50 = pIVar15.Dispose();
				local_44[1] = 0;
				local_44[2] = 0;
				local_38 = &local_50;
				do {
					pIVar15 = local_50;
					if (local_50 == null) {
						throw new NullReferenceException();
					}
					pIVar9 = local_50.klass;
					uVar18 = (ulong)(pIVar9._2).interface_offsets_count;
					bVar11 = pIVar15.Dispose();
					pIVar15 = local_50;
					if (!bVar11) {
						if (local_50 == null) {
							return;
						}
						pIVar9 = local_50.klass;
						uVar18 = (ulong)(pIVar9._2).interface_offsets_count;
						if (uVar18 == 0) goto label_0589ecaf;
						pIVar10 = (pIVar9._1).interfaceOffsets;
						lVar20 = 0;
						goto label_0589eca0;
					}
					if (local_50 == null) {
						throw new NullReferenceException();
					}
					pIVar9 = local_50.klass;
					uVar18 = (ulong)(pIVar9._2).interface_offsets_count;
					auVar21 = pIVar15.Dispose();
					pSVar12 = String.Concat("addon.", auVar21._0_8_);
					pMVar14 = extraout_RDX_03;
					if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
						pMVar14 = extraout_RDX_04;
					}
					AottgGameCreateSession.AddDynamicFields(pSVar12, auVar21._8_8_);
				} while(true);
			}
			goto label_0589ee05;
		}
		pSVar12 = AottgGameCreateSession.FieldLabel("general.MapName");
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589e3de;
	label_0589e53c: ;
			pSVar19 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589e53c;
	label_0589e3de: ;
			pSVar19 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar19 == null) ||(pSVar5 = pSVar19.General, pSVar5 == null)) goto label_0589ee05;
		setting = pSVar5.MapName;
		pSVar13 = AottgGameCreateSession.SandboxMapNames();
		AottgGameCreateSession.AddSandboxField("general.MapName", pSVar12, (BaseSetting)setting, pSVar13, null);
		__this = AottgGameCreateSession.SandboxConfiguration;
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		if (__this == null) goto label_0589ee05;
		pSVar19 = *(InGameSet*)((long)(typeof(AottgGameCreateSession)).static_fields + 0x40);
		pSVar13 = __this.GetGameModes(pSVar19, local_44);
		pMVar14 = (MethodInfo)AottgGameCreateSession.FieldLabel("general.GameMode");
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589e61e;
	label_0589e652: ;
			pSVar19 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589e652;
	label_0589e61e: ;
			pSVar19 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar19 == null) ||(pSVar5 = pSVar19.General, pSVar5 == null)) goto label_0589ee05;
		AottgGameCreateSession.AddSandboxField("general.GameMode", (String)pMVar14, (BaseSetting)pSVar5.GameMode, pSVar13, null);
		pSVar12 = AottgGameCreateSession.FieldLabel("general.Difficulty");
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589e6b9;
	label_0589e6ed: ;
			pSVar19 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589e6ed;
	label_0589e6b9: ;
			pSVar19 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar19 == null) ||(pSVar5 = pSVar19.General, pSVar5 == null)) goto label_0589ee05;
		setting_00 = pSVar5.Difficulty;
		pSVar13 = AottgGameCreateSession.SettingOptions("general.Difficulty");
		AottgGameCreateSession.AddSandboxField("general.Difficulty", pSVar12, (BaseSetting)setting_00, pSVar13, null);
		pSVar6 = SettingsManager.WeatherSettings;
		if (pSVar6 == null) {
			pMVar14 = null;
			pSVar13 = (String[])new string[0];
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			__this_00 = pSVar6.WeatherSets;
			if (__this_00 == null) goto label_0589ee05;
			pMVar14 = MethodInfo_Settings_SetSettingsContainer_WeatherSet_GetSetNames;
			pSVar13 = __this_00.GetSetNames();
			uVar2 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		pSVar12 = AottgGameCreateSession.FieldLabel("general.Weather");
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589e7aa;
	label_0589e800: ;
			pSVar19 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589e800;
	label_0589e7aa: ;
			pSVar19 = AottgGameCreateSession._Working_k__BackingField;
		}
		if (pSVar19 != null) {
			AottgGameCreateSession.AddSandboxField("general.Weather", pSVar12, (BaseSetting)pSVar19.WeatherIndex, pSVar13, null);
			return;
		}
	label_0589ee05: ;
		throw new NullReferenceException();
		while (true) {
			lVar20 = lVar20 + 0x10;
			if (!(uVar18 * 0x10 != lVar20)) break;
	label_0589eca0: ;
			if (*(IDisposable*)((long)&pIVar10.interfaceType + lVar20) == typeof(IDisposable)) {
				pVVar16 = (VirtualInvokeData)&pIVar9.vtable[*(int)((long)&pIVar10.offset + lVar20)].methodPtr;
				goto label_0589eccd;
			}
		}
	label_0589ecaf: ;
	label_0589eccd: ;
		pIVar15.Dispose();
		return;
	}

	[Token(Token = "0x6000ED2")]
	[Address(RVA = "0x57A5080", Offset = "0x57A4080", VA = "0x57A5080")]
	private static void AddContainerFields(string prefix, BaseSettingsContainer container, [Optional] HashSet<string> excluded)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$AddContainerFields): 13 lines keep C-only constructs
		byte bVar1;
		OrderedDictionary pSVar2;
		Il2CppClass pIVar3;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		sbyte cVar5;
		bool bVar6;
		object pIVar7;
		VirtualInvokeData pVVar8;
		String pSVar9;
		BaseSetting setting;
		String label;
		String[] options;
		ulong uVar10;
		MethodInfo method_00;
		long lVar11;
		object local_60;
		object local_58;
		String local_50;
		object* local_40;
		object* local_38;

		local_50 = prefix;
		if (Il2CppMethodInitialized_075452b0 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_075452b0 = true;
		}
		local_60 = null;
		local_58 = null;
		if (((container == null) ||(pSVar2 = container.Settings, pSVar2 == null)) ||(pIVar7 = (object)pSVar2.Keys, pIVar7 == null)) {
			throw new NullReferenceException();
		}
		pIVar3 = pIVar7.klass;
		uVar10 = (ulong)(pIVar3._2).interface_offsets_count;
		pIVar7 = (object)pIVar7.Dispose();
		local_40 = &local_60;
		local_38 = &local_58;
		do {
			local_60 = pIVar7;
			if (pIVar7 == null) {
				throw new NullReferenceException();
			}
			pIVar3 = pIVar7.klass;
			uVar10 = (ulong)(pIVar3._2).interface_offsets_count;
			cVar5 = pIVar7.Dispose();
			pIVar7 = local_60;
			if (cVar5 == false) {
				pIVar7 = (local_60 as IDisposable);
				if (pIVar7 == null) {
					return;
				}
				pIVar3 = pIVar7.klass;
				uVar10 = (ulong)(pIVar3._2).interface_offsets_count;
				local_58 = pIVar7;
				if (uVar10 == 0) goto label_058a544f;
				pIVar4 = (pIVar3._1).interfaceOffsets;
				lVar11 = 0;
				break;
			}
			if (local_60 == null) {
				throw new NullReferenceException();
			}
			pIVar3 = local_60.klass;
			uVar10 = (ulong)(pIVar3._2).interface_offsets_count;
			pSVar9 = (String)pIVar7.Dispose();
			if ((pSVar9 != null) && (pSVar9.klass != g_data_07556758)) {
				throw new InvalidCastException();
			}
			if ((excluded == null) ||(bVar6 = excluded.Contains((object)pSVar9), pIVar7 = local_60, !bVar6)) {
				pSVar2 = container.Settings;
				if (pSVar2 == null) {
					throw new NullReferenceException();
				}
				setting = (BaseSetting)pSVar2.get_Item((object)pSVar9);
				if (setting != null) {
					bVar1 = (typeof(BaseSetting)._2).typeHierarchyDepth;
					if (((setting.klass._2).typeHierarchyDepth < bVar1) ||((setting.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(BaseSetting))) {
						throw new InvalidCastException();
					}
				}
				method_00 = (MethodInfo *)".";
				pSVar9 = String.Concat(local_50, ".", pSVar9);
				bVar6 = AottgGameCreateSession.IsSupported(setting);
				pIVar7 = local_60;
				if (bVar6) {
					label = AottgGameCreateSession.FieldLabel(pSVar9);
					options = AottgGameCreateSession.SettingOptions(pSVar9);
					AottgGameCreateSession.AddSandboxField(pSVar9, label, setting, options, null);
					pIVar7 = local_60;
				}
			}
		} while(true);
		while (true) {
			lVar11 = lVar11 + 0x10;
			if (!(uVar10 * 0x10 != lVar11)) break;
			if (*(IDisposable*)((long)&pIVar4.interfaceType + lVar11) == typeof(IDisposable)) {
				pVVar8 = pIVar3.vtable + *(int)((long)&pIVar4.offset + lVar11);
				goto label_058a546d;
			}
		}
	label_058a544f: ;
	label_058a546d: ;
		pIVar7.Dispose();
		return;
	}

	[Token(Token = "0x6000ED3")]
	[Address(RVA = "0x578A5F0", Offset = "0x57895F0", VA = "0x578A5F0")]
	public static string[] SettingOptions(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SettingOptions): 1 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		String[] pSVar3;

		bVar2 = (id == "general.Difficulty");
		if (bVar2) {
			pSVar3 = UIManager.GetLocaleOptions("CreateGamePopup.General.DifficultyOptions");
			return pSVar3;
		}
		bVar2 = (id == "misc.VoiceChat");
		if (bVar2) {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			if (Il2CppMethodInitialized_075452b3 == false) {
				Il2CppMethodInitialized_075452b3 = true;
				uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = ((typeof(UIManager))._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			pSVar3 = UIManager.GetLocaleOptions("CreateGamePopup.Misc.VoiceChatOptions");
			return pSVar3;
		}
		bVar2 = (id == "misc.PVP");
		if (bVar2) {
			pSVar3 = UIManager.GetLocaleOptions("CreateGamePopup.Misc.PVPOptions");
			return pSVar3;
		}
		bVar2 = (id == "titan.TitanHeadMode");
		if (bVar2) {
			pSVar3 = UIManager.GetLocaleOptions("CreateGamePopup.Titans.HeadOptions");
			return pSVar3;
		}
		bVar2 = (id == "titan.TitanHealthMode");
		if (!bVar2) {
			pSVar3 = (String[])new string[0];
			return pSVar3;
		}
		if (Il2CppMethodInitialized_075452b2 == false) {
			Il2CppMethodInitialized_075452b2 = true;
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(UIManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar3 = UIManager.GetLocaleOptions("CreateGamePopup.Titans.HealthOptions");
		return pSVar3;
	}

	[Token(Token = "0x6000ED4")]
	[Address(RVA = "0x5786E90", Offset = "0x5785E90", VA = "0x5786E90")]
	public static string[] TitanHealthOptions()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$TitanHealthOptions): clean
		String[] pSVar1;

		pSVar1 = UIManager.GetLocaleOptions("CreateGamePopup.Titans.HealthOptions");
		return pSVar1;
	}

	[Token(Token = "0x6000ED5")]
	[Address(RVA = "0x5786B20", Offset = "0x5785B20", VA = "0x5786B20")]
	public static string[] VoiceChatOptions()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$VoiceChatOptions): clean
		String[] pSVar1;

		pSVar1 = UIManager.GetLocaleOptions("CreateGamePopup.Misc.VoiceChatOptions");
		return pSVar1;
	}

	[Token(Token = "0x6000ED6")]
	[Address(RVA = "0x5785780", Offset = "0x5784780", VA = "0x5785780")]
	public static string FieldLabel(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$FieldLabel): 2 lines keep C-only constructs
		bool bVar1;
		int iVar2;
		String pSVar3;
		String key;
		MethodInfo method_00;

		bVar1 = String.IsNullOrEmpty(id);
		if (bVar1) {
			pSVar3 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			if (id == null) {
				throw new NullReferenceException();
			}
			method_00 = (MethodInfo)&g_data_0000002e;
			iVar2 = id.LastIndexOf(0x2e);
			pSVar3 = id;
			if (-1 < iVar2) {
				method_00 = (MethodInfo)(ulong)(iVar2 + 1U);
				pSVar3 = id.Substring(iVar2 + 1U);
			}
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			pSVar3 = AottgGameCreateSession.Label(pSVar3);
			key = AottgGameCreateSession.FieldLabelKey(id);
			if (key != null) {
				pSVar3 = Aottg2GisketchLocale.Text(key, pSVar3) ;
				return pSVar3;
			}
		}
		return pSVar3;
	}

	[Token(Token = "0x6000ED7")]
	[Address(RVA = "0x5789E50", Offset = "0x5788E50", VA = "0x5789E50")]
	public static string FieldDescription(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$FieldDescription): 15 lines keep C-only constructs
		InGameSet pSVar1;
		InGameGeneralSettings pSVar2;
		StringSetting pSVar3;
		InGameModeSettings pSVar4;
		bool bVar5;
		String pSVar6;
		String pSVar7;
		String fallback;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo extraout_RDX_01;
		MethodInfo extraout_RDX_02;
		MethodInfo pMVar8;
		MethodInfo extraout_RDX_03;
		MethodInfo extraout_RDX_04;

		bVar5 = String.IsNullOrEmpty(id);
		if (!bVar5) {
			if (id == null) goto label_0588a1fb;
			bVar5 = id.StartsWith("mode.", 5);
			if (!bVar5) goto label_05889fda;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				if (Il2CppMethodInitialized_075452cd == false) goto label_05889f9d;
	label_05889f07: ;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05889f17;
	label_05889fc0: ;
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				pSVar1 = AottgGameCreateSession._Working_k__BackingField ;
			}
			else {
				if (Il2CppMethodInitialized_075452cd != false) goto label_05889f07;
	label_05889f9d: ;
				Il2CppMethodInitialized_075452cd = true;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_05889fc0;
	label_05889f17: ;
				pSVar1 = AottgGameCreateSession._Working_k__BackingField ;
			}
			if (pSVar1 != null) {
				if ("mode." == null) goto label_0588a1fb;
				pSVar6 = id.Substring(("mode.".fields)._stringLength);
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
					pMVar8 = extraout_RDX_00;
					if (Il2CppMethodInitialized_075452cd == false) goto label_0588a117;
	label_05889f62: ;
					if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05889f72;
	label_0588a13a: ;
					pSVar1 = AottgGameCreateSession. _Working_k__BackingField;
					pMVar8 = extraout_RDX_02;
				}
				else {
					pMVar8 = extraout_RDX;
					if (Il2CppMethodInitialized_075452cd != false) goto label_05889f62;
	label_0588a117: ;
					Il2CppMethodInitialized_075452cd = true;
					pMVar8 = extraout_RDX_01;
					if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0588a13a;
	label_05889f72: ;
					pSVar1 = AottgGameCreateSession. _Working_k__BackingField;
				}
				if (((pSVar1 == null) ||(pSVar2 = pSVar1.General, pSVar2 == null)) ||(pSVar3 = pSVar2.GameMode, pSVar3 == null)) goto label_0588a1fb;
				pSVar7 = pSVar3._value;
				if (Il2CppMethodInitialized_075452cd == false) {
					Il2CppMethodInitialized_075452cd = true;
					pMVar8 = extraout_RDX_03;
					if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0588a1b3;
	label_0588a186: ;
					pSVar1 = AottgGameCreateSession. _Working_k__BackingField;
				}
				else {
					if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0588a186;
	label_0588a1b3: ;
					pSVar1 = AottgGameCreateSession. _Working_k__BackingField;
					pMVar8 = extraout_RDX_04;
				}
				if ((pSVar1 != null) &&(pSVar4 = pSVar1.Mode, pSVar4 != null)) {
					fallback = AottgGameCreateSession.ScriptTooltip(pSVar4.Current, pSVar6);
					pSVar6 = ContentLocale.ModeSettingTooltip(pSVar7, pSVar6, fallback);
					return pSVar6;
				}
				goto label_0588a1fb;
			}
		}
	label_05889fda: ;
		pMVar8 = null;
		bVar5 = String.IsNullOrEmpty(id);
		if (!bVar5) {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				pSVar6 = AottgGameCreateSession.FieldLabelKey(id);
				pMVar8 = (MethodInfo *)"Tooltip";
			}
			else {
				pSVar6 = AottgGameCreateSession.FieldLabelKey(id);
				pMVar8 = (MethodInfo *)"Tooltip";
			}
			"Tooltip" = (String)pMVar8;
			if (pSVar6 != null) {
				pSVar7 = String.Concat(pSVar6, (String)pMVar8);
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
					pSVar7 = AottgGameCreateSession.DescriptionText(pSVar7);
				}
				else {
					pSVar7 = AottgGameCreateSession.DescriptionText(pSVar7);
				}
				if (pSVar7 != null) {
					return pSVar7;
				}
				bVar5 = pSVar6.EndsWith("Enabled", 4);
				if (bVar5) {
					if ("Enabled" == null) {
	label_0588a1fb: ;
						throw new NullReferenceException();
					}
					pSVar6 = pSVar6.Substring(0, pSVar6._stringLength -("Enabled".fields)._stringLength);
					pMVar8 = (MethodInfo *)"Tooltip";
					pSVar6 = String.Concat(pSVar6, "Tooltip");
					pSVar6 = AottgGameCreateSession.DescriptionText(pSVar6);
					if (pSVar6 != null) {
						return pSVar6;
					}
				}
			}
		}
		return (String)**(ulong*)(g_data_07556758 + 0xb8);
	}

	[Token(Token = "0x6000ED8")]
	[Address(RVA = "0x57A5960", Offset = "0x57A4960", VA = "0x57A5960")]
	private static string DescriptionText(string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$DescriptionText): clean
		String subCategory;
		String item;
		bool bVar1;
		Char[] separator;
		String[] pSVar2;
		String pSVar3;

		separator = (Char[])new char[1];
		if (separator != null) {
			if ((int)separator.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			separator[0] = 0x2e;
			if ((key != null) &&(pSVar2 = key.Split(separator, 3), pSVar2 != null)) {
				if ((int)pSVar2.Length == 3) {
					pSVar3 = pSVar2[0];
					subCategory = pSVar2[1];
					item = pSVar2[2];
					bVar1 = UIManager.HasLocale(pSVar3, subCategory, item, "English");
					if (bVar1) {
						pSVar3 = Aottg2GisketchLocale.Text(key);
						return pSVar3;
					}
				}
				return null;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000ED9")]
	[Address(RVA = "0x57A5730", Offset = "0x57A4730", VA = "0x57A5730")]
	private static string FieldLabelKey(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$FieldLabelKey): 1 lines keep C-only constructs
		Dictionary<object, object> __this;
		bool bVar1;
		String pSVar2;
		String local_20;

		local_20 = null;
		__this = (Dictionary<object, object>)AottgGameCreateSession.FieldLabelKeys;
		if (__this == null) {
	label_058a5832: ;
			throw new NullReferenceException();
		}
		bVar1 = __this.TryGetValue((object)id, (object*)&local_20);
		if (bVar1) {
			pSVar2 = local_20;
		}
		else {
			if (id == null) goto label_058a5832;
			pSVar2 = null;
			bVar1 = id.StartsWith("mode.", 5);
			if (bVar1) {
				if ("mode." == null) goto label_058a5832;
				pSVar2 = id.Substring(("mode.".fields)._stringLength);
				pSVar2 = String.Concat("CreateGamePopup.Mode.", pSVar2);
			}
		}
		return pSVar2;
	}

	[Token(Token = "0x6000EDA")]
	[Address(RVA = "0x5797E00", Offset = "0x5796E00", VA = "0x5797E00")]
	private static IReadOnlyList<AottgSandboxField> BuildMultiplayerFields()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$BuildMultiplayerFields): 12 lines keep C-only constructs
		sbyte cVar1;
		InGameSet pSVar2;
		InGameGeneralSettings pSVar3;
		StringSetting pSVar4;
		IntSetting pSVar5;
		InGameMiscSettings pSVar6;
		BoolSetting pSVar7;
		FloatSetting pSVar8;
		String pSVar9;
		object pIVar10;
		Il2CppClass pIVar11;
		MethodInfo pMVar12;

		if (Il2CppMethodInitialized_075452b8 == false) {
			Il2CppMethodInitialized_075452b8 = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05897e2c;
	label_05897f0f: ;
			if (Il2CppMethodInitialized_075452ce != false) goto label_05897e39;
	label_05897f21: ;
			Il2CppMethodInitialized_075452ce = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05897e4a;
	label_05897f45: ;
			cVar1 = AottgGameCreateSession._isMultiplayer;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_05897f0f;
	label_05897e2c: ;
			if (Il2CppMethodInitialized_075452ce == false) goto label_05897f21;
	label_05897e39: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_05897f45;
	label_05897e4a: ;
			cVar1 = AottgGameCreateSession._isMultiplayer;
		}
		if (cVar1 == false) goto label_05898060;
		if (((typeof(AottgGameCreateSession))._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452cd != false) goto label_05897f79;
	label_05898021: ;
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05897f8a;
	label_05898045: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if (Il2CppMethodInitialized_075452cd == false) goto label_05898021;
	label_05897f79: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_05898045;
	label_05897f8a: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		if (pSVar2 == null) {
	label_05898060: ;
			pIVar10 = new AottgSandboxField[0];
			return (IReadOnlyList<AottgSandboxField>)pIVar10;
		}
		pMVar12 = (MethodInfo)&g_data_00000009;
		pIVar10 = new AottgSandboxField[9];
		pSVar9 = AottgGameCreateSession.FieldLabel("general.RoomName");
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05897ff6;
	label_058980a3: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058980a3;
	label_05897ff6: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar2 == null) ||(pSVar3 = pSVar2.General, pSVar3 == null)) goto label_058987cb;
		pSVar4 = pSVar3.RoomName;
		pIVar11 = new AottgSandboxField("general.RoomName", pSVar9, (BaseSetting)pSVar4, null, null);
		if (pIVar10 == null) goto label_058987cb;
		if (*(int)&pIVar10[1].monitor == 0) goto label_058987d0;
		pIVar10[2].klass = pIVar11;
		pSVar9 = AottgGameCreateSession.FieldLabel("general.MaxPlayers");
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05898148;
	label_0589817d: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589817d;
	label_05898148: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar2 == null) ||(pSVar3 = pSVar2.General, pSVar3 == null)) goto label_058987cb;
		pSVar5 = pSVar3.MaxPlayers;
		pMVar12 = new AottgSandboxField("general.MaxPlayers", pSVar9, (BaseSetting)pSVar5, null, null);
		if (((ulong)pIVar10[1].monitor & 0xfffffffe) == 0) goto label_058987d0;
		pIVar10[2].monitor = pMVar12;
		pSVar9 = AottgGameCreateSession.FieldLabel("general.Password");
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589821c;
	label_05898251: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_05898251;
	label_0589821c: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar2 == null) ||(pSVar3 = pSVar2.General, pSVar3 == null)) goto label_058987cb;
		pSVar4 = pSVar3.Password;
		pIVar11 = new AottgSandboxField("general.Password", pSVar9, (BaseSetting)pSVar4, null, null);
		if (*(uint)&pIVar10[1].monitor < 3) goto label_058987d0;
		pIVar10[3].klass = pIVar11;
		pSVar9 = AottgGameCreateSession.FieldLabel("misc.Motd");
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058982ed;
	label_05898322: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_05898322;
	label_058982ed: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar2 == null) ||(pSVar6 = pSVar2.Misc, pSVar6 == null)) goto label_058987cb;
		pSVar4 = pSVar6.Motd;
		pMVar12 = new AottgSandboxField("misc.Motd", pSVar9, (BaseSetting)pSVar4, null, null);
		if (((ulong)pIVar10[1].monitor & 0xfffffffc) == 0) goto label_058987d0;
		pIVar10[3].monitor = pMVar12;
		pSVar9 = AottgGameCreateSession.FieldLabel("misc.AllowVoteKicking");
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058983c4;
	label_058983f9: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058983f9;
	label_058983c4: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar2 == null) ||(pSVar6 = pSVar2.Misc, pSVar6 == null)) goto label_058987cb;
		pSVar7 = pSVar6.AllowVoteKicking;
		pIVar11 = new AottgSandboxField("misc.AllowVoteKicking", pSVar9, (BaseSetting)pSVar7, null, null);
		if (*(uint)&pIVar10[1].monitor < 5) goto label_058987d0;
		pIVar10[4].klass = pIVar11;
		pSVar9 = AottgGameCreateSession.FieldLabel("misc.AccountRequired");
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05898498;
	label_058984cd: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058984cd;
	label_05898498: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar2 == null) ||(pSVar6 = pSVar2.Misc, pSVar6 == null)) goto label_058987cb;
		pSVar7 = pSVar6.AccountRequired;
		pMVar12 = new AottgSandboxField("misc.AccountRequired", pSVar9, (BaseSetting)pSVar7, null, null);
		if (*(uint)&pIVar10[1].monitor < 6) goto label_058987d0;
		pIVar10[4].monitor = pMVar12;
		pSVar9 = AottgGameCreateSession.FieldLabel("misc.VoiceChat");
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589856c;
	label_058985a1: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058985a1;
	label_0589856c: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar2 == null) ||(pSVar6 = pSVar2.Misc, pSVar6 == null)) goto label_058987cb;
		pSVar5 = pSVar6.VoiceChat;
		pIVar11 = new AottgSandboxField("misc.VoiceChat", pSVar9, (BaseSetting)pSVar5, null, null);
		if (*(uint)&pIVar10[1].monitor < 7) goto label_058987d0;
		pIVar10[5].klass = pIVar11;
		pSVar9 = AottgGameCreateSession.FieldLabel("misc.ProximityMinDistance");
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05898640;
	label_05898675: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_05898675;
	label_05898640: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar2 == null) ||(pSVar6 = pSVar2.Misc, pSVar6 == null)) goto label_058987cb;
		pSVar8 = pSVar6.ProximityMinDistance;
		pMVar12 = new AottgSandboxField("misc.ProximityMinDistance", pSVar9, (BaseSetting)pSVar8, null, null);
		if (((ulong)pIVar10[1].monitor & 0xfffffff8) == 0) goto label_058987d0;
		pIVar10[5].monitor = pMVar12;
		pSVar9 = AottgGameCreateSession.FieldLabel("misc.ProximityMaxDistance");
		if (Il2CppMethodInitialized_075452cd == false) {
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_05898717;
	label_0589874c: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589874c;
	label_05898717: ;
			pSVar2 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar2 != null) &&(pSVar6 = pSVar2.Misc, pSVar6 != null)) {
			pSVar8 = pSVar6.ProximityMaxDistance;
			pIVar11 = new AottgSandboxField("misc.ProximityMaxDistance", pSVar9, (BaseSetting)pSVar8, null, null);
			if (8 < *(uint)&pIVar10[1].monitor) {
				pIVar10[6].klass = pIVar11;
				return (IReadOnlyList<AottgSandboxField>)pIVar10;
			}
	label_058987d0: ;
			throw new IndexOutOfRangeException();
		}
	label_058987cb: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000EDB")]
	[Address(RVA = "0x57A49E0", Offset = "0x57A39E0", VA = "0x57A49E0")]
	private static void AddDynamicFields(string prefix, Dictionary<string, BaseSetting> settings)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$AddDynamicFields): 23 lines keep C-only constructs
		uint uVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		InspectorSettingMetadata pSVar4;
		List<string> __this;
		sbyte cVar5;
		bool bVar6;
		object pIVar7;
		VirtualInvokeData pVVar8;
		Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_StaticFields pGVar9;
		Func<T, TResult> __this_00;
		String[] options;
		String id;
		String pSVar10;
		String label;
		ulong uVar11;
		BaseSetting setting;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo extraout_RDX_01;
		MethodInfo extraout_RDX_02;
		MethodInfo pMVar12;
		MethodInfo method_00;
		long lVar13;
		byte[] auVar14 = new byte[16];
		object local_58;
		Dictionary<string, BaseSetting> local_50;
		String local_48;
		byte local_38;

		local_50 = settings;
		local_58 = null;
		if (local_50 == null) {
			return;
		}
		if ((typeof(AottgGameCreateSession.c)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession.c)) ;
			pGVar9 = typeof(AottgGameCreateSession.c).static_fields;
			__this_00 = (Func<T, TResult>)pGVar9.__9__163_0;
		}
		else {
			pGVar9 = typeof(AottgGameCreateSession.c).static_fields;
			__this_00 = (Func<T, TResult>)pGVar9.__9__163_0;
		}
		if (__this_00 == null) {
			if (((typeof(AottgGameCreateSession.c))._2). cctor_finished_or_no_cctor == 0) {
				pGVar9 = typeof(AottgGameCreateSession.c).static_fields;
			}
			pIVar7 = (object)pGVar9.__9;
			__this_00 = new Func<KeyValuePair<string, BaseSetting>, string>(pIVar7, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_AddDynamicFields_b__163_0);
			pGVar9 = typeof(AottgGameCreateSession.c).static_fields;
			pGVar9.__9__163_0 = (Func<KeyValuePair<string, BaseSetting>, string>)__this_00;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(StringComparer))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07542886 == false) {
			Il2CppMethodInitialized_07542886 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(StringComparer))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pIVar7 = (object)Enumerable.OrderBy<KeyValuePair<string, BaseSetting>, string>((System_Collections_Generic_IEnumerable_TSource__o)local_50, (System_Func_TSource__TKey__o)__this_00, (System_Collections_Generic_IComparer_TKey__o)StringComparer.s_ordinalIgnoreCase);
		if (pIVar7 == null) {
			throw new NullReferenceException();
		}
		pIVar2 = pIVar7.klass;
		uVar11 = (ulong)(pIVar2._2).interface_offsets_count;
		local_48 = prefix;
		pIVar7 = pIVar7.Dispose();
		local_38 = (byte)&local_58;
		do {
			local_58 = pIVar7;
			if (pIVar7 == null) {
				throw new NullReferenceException();
			}
			pIVar2 = pIVar7.klass;
			uVar11 = (ulong)(pIVar2._2).interface_offsets_count;
			cVar5 = pIVar7.Dispose();
			pIVar7 = local_58;
			if (cVar5 == false) {
				if (local_58 == null) {
					return;
				}
				pIVar2 = local_58.klass;
				uVar11 = (ulong)(pIVar2._2).interface_offsets_count;
				if (uVar11 == 0) goto label_058a4faf;
				pIVar3 = (pIVar2._1).interfaceOffsets;
				lVar13 = 0;
				break;
			}
			if (local_58 == null) {
				throw new NullReferenceException();
			}
			pIVar2 = local_58.klass;
			uVar11 = (ulong)(pIVar2._2).interface_offsets_count;
			pMVar12 = pVVar8.method;
			auVar14 = pIVar7.Dispose();
			setting = auVar14._8_8_;
			method_00 = auVar14._0_8_;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			bVar6 = AottgGameCreateSession.IsSupported(setting);
			pIVar7 = local_58;
			if (bVar6) {
				bVar6 = AottgGameCreateSession.IsMetadataField((String)method_00);
				pIVar7 = local_58;
				if (!bVar6) {
					if (setting == null) {
						throw new NullReferenceException();
					}
					pSVar4 = setting.InspectorMetadata;
					if (pSVar4 == null) {
						throw new NullReferenceException();
					}
					__this = pSVar4.Dropbox;
					if (__this == null) {
						throw new NullReferenceException();
					}
					if (__this._size < 1) {
						pSVar10 = String.Concat((String)method_00, "Dropbox");
						pMVar12 = extraout_RDX;
						if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
							pMVar12 = extraout_RDX_00;
						}
						options = AottgGameCreateSession.MetadataOptions(local_50, pSVar10);
					}
					else {
						options = (String[])__this.ToArray();
					}
					pSVar10 = local_48;
					id = String.Concat(local_48, ".", (String)method_00);
					pMVar12 = (MethodInfo *)"mode";
					bVar6 = (pSVar10 == "mode");
					uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
					if (bVar6) {
						method_00 = pMVar12;
						if (uVar1 == 0) {
							method_00 = pMVar12;
						}
						pSVar10 = AottgGameCreateSession.FieldDescription(id);
					}
					else {
						pMVar12 = extraout_RDX_01;
						if (uVar1 == 0) {
							pMVar12 = extraout_RDX_02;
						}
						pSVar10 = AottgGameCreateSession.ScriptTooltip(local_50, (String)method_00);
					}
					label = AottgGameCreateSession.FieldLabel(id);
					AottgGameCreateSession.AddSandboxField(id, label, setting, options, pSVar10) ;
					pIVar7 = local_58;
				}
			}
		} while(true);
		while (true) {
			lVar13 = lVar13 + 0x10;
			if (!(uVar11 * 0x10 != lVar13)) break;
			if (*(IDisposable*)((long)&pIVar3.interfaceType + lVar13) == typeof(IDisposable)) {
				pVVar8 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar13);
				goto label_058a4fcd;
			}
		}
	label_058a4faf: ;
	label_058a4fcd: ;
		pIVar7.Dispose();
		return;
	}

	[Token(Token = "0x6000EDC")]
	[Address(RVA = "0x57A4860", Offset = "0x57A3860", VA = "0x57A4860")]
	private static void AddSandboxField(string id, string label, BaseSetting setting, [Optional] string[] options, [Optional] string tooltip)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$AddSandboxField): 3 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<AottgSandboxField> __this;
		AottgSandboxField[] pGVar3;
		bool bVar4;
		AottgSandboxField __this_00;

		if (setting != null) {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				bVar4 = AottgGameCreateSession.IsSupported(setting);
			}
			else {
				bVar4 = AottgGameCreateSession.IsSupported(setting);
			}
			if (bVar4) {
				if (((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor == 0) {
				}
				__this = AottgGameCreateSession.SandboxFieldsInternal;
				__this_00 = new AottgSandboxField(id, label, setting, options, tooltip);
				if (__this != null) {
					piVar1 = &__this._version;
					*piVar1 = *piVar1 + 1;
					pGVar3 = __this._items;
					if (pGVar3 != null) {
						uVar2 = __this._size;
						if (uVar2 < (uint)pGVar3.Length) {
							__this._size = uVar2 + 1;
							pGVar3[(int)uVar2] = __this_00;
							return;
						}
						__this.AddWithResize((object)__this_00);
						return;
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6000EDD")]
	[Address(RVA = "0x57A0360", Offset = "0x579F360", VA = "0x57A0360")]
	private static bool SetValue(AottgSandboxField field, string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SetValue): 2 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		TypedSetting<T> __this;
		TypedSetting<T> pSVar3;
		String[] pSVar4;
		bool bVar5;
		int value_00;
		CultureInfo pSVar6;
		float fVar7;
		double dVar8;
		bool local_25;
		float local_24;
		float local_20;
		float local_1c;

		local_25 = false;
		local_20 = 0.0;
		local_24 = 0.0;
		if (field == null) {
	label_058a0698: ;
			throw new NullReferenceException();
		}
		__this = (TypedSetting<T>)field._Setting_k__BackingField;
		if (__this == null) {
	label_058a04d8: ;
			bVar5 = false;
		}
		else {
			pSVar3 = __this.klass;
			bVar1 = (pSVar3._2).typeHierarchyDepth;
			bVar2 = (typeof(StringSetting)._2).typeHierarchyDepth;
			if ((bVar1 < bVar2) ||((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(StringSetting))) {
				bVar2 = (typeof(BoolSetting)._2).typeHierarchyDepth;
				if ((bVar1 < bVar2) ||((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(BoolSetting))) {
					bVar2 = (typeof(IntSetting)._2).typeHierarchyDepth;
					if ((bVar1 < bVar2) ||((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(IntSetting))) {
						bVar2 = (typeof(FloatSetting)._2).typeHierarchyDepth;
						if ((bVar1 < bVar2) ||((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(FloatSetting))) goto label_058a04d8;
						pSVar6 = CultureInfo.InvariantCulture;
						bVar5 = Single.TryParse(value, 0xa7, (IFormatProvider)pSVar6, ref local_24);
						if (!bVar5) {
							return false;
						}
						__this.Value = local_24;
					}
					else {
						value_00 = Array.IndexOf<string>((Object[])field._Options_k__BackingField, (object)value);
						pSVar4 = field._Options_k__BackingField;
						if (pSVar4 == null) goto label_058a0698;
						if ((value_00 < 0) || (pSVar4.Length == 0)) {
							pSVar6 = CultureInfo.InvariantCulture;
							bVar5 = Single.TryParse(value, 0xa7, (IFormatProvider)pSVar6, ref local_20);
							if (!bVar5) {
								return false;
							}
							fVar7 = local_20;
							if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
								local_1c = local_20;
								fVar7 = local_1c;
							}
							dVar8 = (double)il2cpp_runtime_helper_02fb2080((double)fVar7);
							value_00 = (int32_t)dVar8;
						}
						__this.Value = value_00;
					}
				}
				else {
					bVar5 = Boolean.TryParse(value, ref local_25);
					if (!bVar5) {
						return false;
					}
					__this.Value = local_25;
				}
			}
			else {
				if (value == null) {
					value = (String)**(ulong*)(g_data_07556758 + 0xb8);
				}
				__this.Value = (object)value;
			}
			bVar5 = true;
		}
		return bVar5;
	}

	[Token(Token = "0x6000EDE")]
	[Address(RVA = "0x57A5520", Offset = "0x57A4520", VA = "0x57A5520")]
	private static bool IsSupported(BaseSetting setting)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$IsSupported): 1 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		BaseSetting pSVar3;

		if (setting == null) {
			return false;
		}
		pSVar3 = setting.klass;
		bVar1 = (pSVar3._2).typeHierarchyDepth;
		bVar2 = (typeof(BoolSetting)._2).typeHierarchyDepth;
		if ((((bVar2 <= bVar1) &&((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(BoolSetting))) ||((bVar2 = (typeof(IntSetting)._2).typeHierarchyDepth, bVar2 <= bVar1 &&((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(IntSetting))))) ||((bVar2 = (typeof(FloatSetting)._2).typeHierarchyDepth, bVar2 <= bVar1 &&((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(FloatSetting))))) {
			return true;
		}
		bVar2 = (typeof(StringSetting)._2).typeHierarchyDepth;
		if (bVar1 < bVar2) {
			return false;
		}
		return (pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(StringSetting);
	}

	[Token(Token = "0x6000EDF")]
	[Address(RVA = "0x57A5AB0", Offset = "0x57A4AB0", VA = "0x57A5AB0")]
	public static bool IsMetadataField(string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$IsMetadataField): clean
		bool bVar1;

		bVar1 = (key == "Description");
		if (!bVar1) {
			if (key == null) {
				throw new NullReferenceException();
			}
			bVar1 = key.EndsWith("Tooltip", 4);
			if (!bVar1) {
				bVar1 = key.EndsWith("Dropbox", 4);
				return bVar1;
			}
		}
		return true;
	}

	[Token(Token = "0x6000EE0")]
	[Address(RVA = "0x57A1570", Offset = "0x57A0570", VA = "0x57A1570")]
	private static string[] MetadataOptions(Dictionary<string, BaseSetting> settings, string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$MetadataOptions): 8 lines keep C-only constructs
		object pIVar1;
		bool bVar2;
		String value;
		String[] pSVar3;
		Func<string, string> __this;
		System_Collections_Generic_IEnumerable_TResult__o source;
		Gisketch_Aottg2UI_Game_AottgGameCreateSession___c_StaticFields pGVar4;
		Func<string, bool> __this_00;
		System_Collections_Generic_IEnumerable_TSource__o source_00;

		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
		}
		value = AottgGameCreateSession.MetadataString(settings, key);
		bVar2 = String.IsNullOrEmpty(value);
		if (bVar2) {
			pSVar3 = (String[])new string[0];
			return pSVar3;
		}
		if (value == null) {
			throw new NullReferenceException();
		}
		pSVar3 = value.Split(0x2c, 0);
		if ((typeof(AottgGameCreateSession.c)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession.c)) ;
			pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			__this = pGVar4.__9__168_0;
		}
		else {
			pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			__this = pGVar4.__9__168_0;
		}
		if (__this == null) {
			if (((typeof(AottgGameCreateSession.c))._2). cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			}
			pIVar1 = (object)pGVar4.__9;
			__this = new Func<string, string>(pIVar1, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_MetadataOptions_b__168_0);
			pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			pGVar4.__9__168_0 = __this;
		}
		source = Enumerable.Select<string, string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar3, (System_Func_TSource__TResult__o)__this);
		if ((typeof(AottgGameCreateSession.c)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession.c)) ;
			pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			__this_00 = pGVar4.__9__168_1;
		}
		else {
			pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			__this_00 = pGVar4.__9__168_1;
		}
		if (__this_00 == null) {
			if (((typeof(AottgGameCreateSession.c))._2). cctor_finished_or_no_cctor == 0) {
				pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			}
			pIVar1 = (object)pGVar4.__9;
			__this_00 = new Func<string, bool>(pIVar1, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession_c_MetadataOptions_b__168_1);
			pGVar4 = typeof(AottgGameCreateSession.c).static_fields;
			pGVar4.__9__168_1 = __this_00;
		}
		source_00 = Enumerable.Where<string>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_00);
		pSVar3 = (String[])Enumerable.ToArray<string>(source_00);
		return pSVar3;
	}

	[Token(Token = "0x6000EE1")]
	[Address(RVA = "0x57A5840", Offset = "0x57A4840", VA = "0x57A5840")]
	private static string ScriptTooltip(Dictionary<string, BaseSetting> settings, string name)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ScriptTooltip): 4 lines keep C-only constructs
		bool bVar1;
		String pSVar2;
		object local_18;

		local_18 = null;
		if (settings != null) {
			bVar1 = settings.TryGetValue((object)name, ref local_18);
			if (bVar1) {
				if ((local_18 != null) && (local_18[1].klass != null)) {
					bVar1 = String.IsNullOrEmpty((String)((local_18[1].klass)._1).name);
					if (bVar1) {
						pSVar2 = String.Concat(name, "Tooltip");
						if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
						}
						pSVar2 = AottgGameCreateSession.MetadataString(settings, pSVar2);
						return pSVar2;
					}
					if ((local_18 != null) && (local_18[1].klass != null)) {
						return (String)((local_18[1].klass)._1).name;
					}
				}
				throw new NullReferenceException();
			}
		}
		return (String)**(ulong*)(g_data_07556758 + 0xb8);
	}

	[Token(Token = "0x6000EE2")]
	[Address(RVA = "0x57A5B50", Offset = "0x57A4B50", VA = "0x57A5B50")]
	private static string MetadataString(Dictionary<string, BaseSetting> settings, string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$MetadataString): 2 lines keep C-only constructs
		byte bVar1;
		bool bVar2;
		object local_18;

		local_18 = null;
		if (settings == null) {
			throw new NullReferenceException();
		}
		bVar2 = settings.TryGetValue((object)key, ref local_18);
		if ((bVar2) && (local_18 != null)) {
			bVar1 = (typeof(StringSetting)._2).typeHierarchyDepth;
			if ((bVar1 <= (local_18.klass._2).typeHierarchyDepth) &&(((local_18.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(StringSetting) && (local_18[2].klass != null)))) {
				return (String)local_18[2].klass;
			}
		}
		return (String)**(ulong*)(g_data_07556758 + 0xb8);
	}

	[Token(Token = "0x6000EE3")]
	[Address(RVA = "0x57A5620", Offset = "0x57A4620", VA = "0x57A5620")]
	private static string Label(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$Label): clean
		bool bVar1;
		ushort uVar2;
		int iVar3;

		if (value == null) {
	label_058a572a: ;
			throw new NullReferenceException();
		}
		iVar3 = value._stringLength;
		if (0 < iVar3 + -1) {
			iVar3 = iVar3 + -2;
			do {
				if (value == null) goto label_058a572a;
				uVar2 = value.get_Chars(iVar3 + 1);
				bVar1 = Char.IsUpper(uVar2);
				if (bVar1) {
					uVar2 = value.get_Chars(iVar3);
					bVar1 = Char.IsUpper(uVar2);
					if (!bVar1) {
						value = value.Insert(iVar3 + 1, " ");
					}
				}
				bVar1 = 0 < iVar3;
				iVar3 = iVar3 + -1;
			} while (bVar1);
		}
		return value;
	}

	[Token(Token = "0x6000EE4")]
	[Address(RVA = "0x5799830", Offset = "0x5798830", VA = "0x5799830")]
	private static InGameSet Clone(InGameSet source)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$Clone): clean
		InGameSet __this;
		String pSVar1;

		__this = new InGameSet();
		if (source != null) {
			pSVar1 = source.SerializeToJsonString();
			if (__this == null) {
				throw new NullReferenceException();
			}
			__this.DeserializeFromJsonString(pSVar1);
		}
		return __this;
	}

	[Token(Token = "0x6000EE5")]
	[Address(RVA = "0x579CA80", Offset = "0x579BA80", VA = "0x579CA80")]
	private static InGameSet CreateOfficialWorkingSet([Optional] InGameSet source)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$CreateOfficialWorkingSet): 5 lines keep C-only constructs
		int piVar1;
		int length;
		InGameGeneralSettings pSVar2;
		ListSetting<StringSetting> pSVar3;
		List<T> pSVar4;
		InGameAddonSettings pSVar5;
		Dictionary<object, object> __this;
		BoolSetting __this_00;
		InGameSet __this_01;

		if (Il2CppMethodInitialized_075452c3 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value) ;
			Il2CppMethodInitialized_075452c3 = true;
		}
		__this_01 = new InGameSet();
		if (source == null) {
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				if (Il2CppMethodInitialized_075452cd == false) goto label_0589cb59;
	label_0589cb2d: ;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589cb39;
	label_0589cb78: ;
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
				source = AottgGameCreateSession._Working_k__BackingField ;
			}
			else {
				if (Il2CppMethodInitialized_075452cd != false) goto label_0589cb2d;
	label_0589cb59: ;
				Il2CppMethodInitialized_075452cd = true;
				if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589cb78;
	label_0589cb39: ;
				source = AottgGameCreateSession._Working_k__BackingField ;
			}
			if ((source == null) &&(source = SettingsManager.InGameUI, source == null)) goto label_0589cbc3;
		}
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
		}
		AottgGameCreateSession.CopyRoomSettings(source, __this_01);
	label_0589cbc3: ;
		if ((((__this_01 != null) &&(pSVar2 = __this_01.General, pSVar2 != null)) &&(pSVar3 = pSVar2.Addons, pSVar3 != null)) &&(pSVar4 = pSVar3._value, pSVar4 != null)) {
			piVar1 = &pSVar4._version;
			*piVar1 = *piVar1 + 1;
			length = pSVar4._size;
			pSVar4._size = 0;
			if (0 < length) {
				Array.Clear((Array)pSVar4._items, 0, length);
			}
			pSVar5 = __this_01.Addons;
			if ((pSVar5 != null) &&(__this = (Dictionary<object, object>)pSVar5.Current, __this != null)) {
				__this.Clear();
				__this_00 = __this_01.Sandbox;
				if (__this_00 != null) {
					__this_00.Value = false;
					return __this_01;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000EE6")]
	[Address(RVA = "0x579DE60", Offset = "0x579CE60", VA = "0x579DE60")]
	private static void CopyRoomSettings(InGameSet source, InGameSet target)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$CopyRoomSettings): clean
		InGameGeneralSettings pSVar1;
		InGameGeneralSettings pSVar2;
		StringSetting pSVar3;
		StringSetting pSVar4;
		IntSetting pSVar5;
		IntSetting pSVar6;
		InGameMiscSettings pSVar7;
		InGameMiscSettings pSVar8;
		BoolSetting pSVar9;
		BoolSetting pSVar10;
		FloatSetting pSVar11;
		FloatSetting pSVar12;

		if ((((target != null) &&(pSVar1 = target.General, pSVar1 != null)) &&(source != null)) &&(((pSVar2 = source.General, pSVar2 != null &&(pSVar3 = pSVar2.RoomName, pSVar3 != null)) &&(pSVar4 = pSVar1.RoomName, pSVar4 != null)))) {
			pSVar4.Value = (object)pSVar3._value;
			pSVar1 = target.General;
			if (((pSVar1 != null) &&(pSVar2 = source.General, pSVar2 != null)) &&((pSVar3 = pSVar2.Password, pSVar3 != null &&(pSVar4 = pSVar1.Password, pSVar4 != null)))) {
				pSVar4.Value = (object)pSVar3._value;
				pSVar1 = target.General;
				if ((((pSVar1 != null) &&(pSVar2 = source.General, pSVar2 != null)) &&(pSVar5 = pSVar2.MaxPlayers, pSVar5 != null)) &&(pSVar6 = pSVar1.MaxPlayers, pSVar6 != null)) {
					pSVar6.Value = pSVar5._value;
					pSVar7 = target.Misc;
					if (((pSVar7 != null) &&(pSVar8 = source.Misc, pSVar8 != null)) &&((pSVar3 = pSVar8.Motd, pSVar3 != null &&(pSVar4 = pSVar7.Motd, pSVar4 != null)))) {
						pSVar4.Value = (object)pSVar3._value;
						pSVar7 = target.Misc;
						if ((((pSVar7 != null) &&(pSVar8 = source.Misc, pSVar8 != null)) &&(pSVar9 = pSVar8.AllowVoteKicking, pSVar9 != null)) &&(pSVar10 = pSVar7.AllowVoteKicking, pSVar10 != null)) {
							pSVar10.Value = pSVar9._value;
							pSVar7 = target.Misc;
							if ((((pSVar7 != null) &&(pSVar8 = source.Misc, pSVar8 != null)) &&(pSVar5 = pSVar8.VoiceChat, pSVar5 != null)) &&(pSVar6 = pSVar7.VoiceChat, pSVar6 != null)) {
								pSVar6.Value = pSVar5._value;
								pSVar7 = target.Misc;
								if (((pSVar7 != null) &&(pSVar8 = source.Misc, pSVar8 != null)) &&((pSVar11 = pSVar8.ProximityMinDistance, pSVar11 != null && (pSVar12 = pSVar7.ProximityMinDistance, pSVar12 != null)))) {
									pSVar12.Value = pSVar11._value;
									pSVar7 = target.Misc;
									if (((pSVar7 != null) &&(pSVar8 = source.Misc, pSVar8 != null)) &&((pSVar11 = pSVar8.ProximityMaxDistance, pSVar11 != null &&(pSVar12 = pSVar7.ProximityMaxDistance, pSVar12 != null)))) {
										pSVar12.Value = pSVar11._value;
										pSVar7 = target.Misc;
										if ((((pSVar7 != null) &&(pSVar8 = source.Misc, pSVar8 != null)) &&(pSVar9 = pSVar8.AccountRequired, pSVar9 != null)) &&(pSVar10 = pSVar7.AccountRequired, pSVar10 != null)) {
											pSVar10.Value = pSVar9._value;
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000EE7")]
	[Address(RVA = "0x579CD20", Offset = "0x579BD20", VA = "0x579CD20")]
	private static void RestoreEditableValues(ExperienceRuleResult result, InGameSet persisted, [Optional] HashSet<string> resetIds, bool contentOnly = false)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$RestoreEditableValues): 5 lines keep C-only constructs
		uint uVar1;
		BaseSetting pSVar2;
		BaseSetting setting;
		bool bVar3;
		ExperienceRuleField pSVar4;
		object value;
		MethodInfo pMVar5;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		int index;
		List<ExperienceRuleField> __this;
		BaseSetting local_48;
		HashSet<string> local_40;
		object local_38;

		if (Il2CppMethodInitialized_075452c5 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_075452c5 = true;
		}
		local_48 = null;
		if (((result == null) || (persisted == null)) ||(bVar3 = result.IsValid, !bVar3)) {
			return;
		}
		__this = result.Fields;
		if (__this != null) {
			index = 0;
			local_40 = resetIds;
			do {
				if (__this._size <= index) {
					return;
				}
				pSVar4 = __this.get_Item(index);
				if (pSVar4 == null) break;
				if ((((pSVar4.Visible != false) && (pSVar4.Editable != false)) &&((resetIds == null ||(bVar3 = resetIds.Contains((object)pSVar4.Id), !bVar3)))) &&(((!contentOnly ||(bVar3 = (pSVar4.Id != "general.MapName"), !bVar3)) ||(bVar3 = (pSVar4.Id != "general.GameMode"), !bVar3)))) {
					pMVar5 = (MethodInfo)pSVar4.Id;
					if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
						if (Il2CppMethodInitialized_075452c6 != false) goto label_0589cecb;
	label_0589cfe3: ;
						Il2CppMethodInitialized_075452c6 = true;
						uVar1 = (typeof(ExperienceRuleEngine)._2).cctor_finished_or_no_cctor;
					}
					else {
						if (Il2CppMethodInitialized_075452c6 == false) goto label_0589cfe3;
	label_0589cecb: ;
						uVar1 = (typeof(ExperienceRuleEngine)._2).cctor_finished_or_no_cctor;
					}
					if (uVar1 == 0) {
					}
					bVar3 = ExperienceRuleEngine.TryResolveSetting(persisted, (String)pMVar5, ref local_48);
					if (bVar3) {
						pSVar2 = pSVar4.Setting;
						local_38 = AottgGameCreateSession.SettingValue(pSVar2);
						setting = local_48;
						pSVar2 = pSVar4.Setting;
						value = AottgGameCreateSession.SettingValue(setting);
						AottgGameCreateSession.SetSettingValue(pSVar2, value);
						bVar3 = ExperienceRuleEngine.Validate(result);
						resetIds = local_40;
						if (!bVar3) {
							pSVar2 = pSVar4.Setting;
							pMVar5 = extraout_RDX;
							if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
								pMVar5 = extraout_RDX_00;
							}
							AottgGameCreateSession.SetSettingValue(pSVar2, local_38);
						}
					}
				}
				index = index + 1;
				__this = result.Fields;
			} while (__this != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000EE8")]
	[Address(RVA = "0x579CC60", Offset = "0x579BC60", VA = "0x579CC60")]
	private static bool TryResolveSetting(InGameSet settings, string id, out BaseSetting setting)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$TryResolveSetting): clean
		bool bVar1;

		bVar1 = ExperienceRuleEngine.TryResolveSetting(settings, id, setting);
		return bVar1;
	}

	[Token(Token = "0x6000EE9")]
	[Address(RVA = "0x57A5C20", Offset = "0x57A4C20", VA = "0x57A5C20")]
	private static object SettingValue(BaseSetting setting)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SettingValue): 1 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		BaseSetting pSVar3;
		object pIVar4;
		byte local_11;
		uint local_10;
		uint local_c;

		if (setting != null) {
			pSVar3 = setting.klass;
			bVar1 = (pSVar3._2).typeHierarchyDepth;
			bVar2 = (typeof(StringSetting)._2).typeHierarchyDepth;
			if ((bVar2 <= bVar1) &&((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(StringSetting))) {
				return (*(ulong)((sbyte)setting + 0x20));
			}
			bVar2 = (typeof(BoolSetting)._2).typeHierarchyDepth;
			if ((bVar2 <= bVar1) &&((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(BoolSetting))) {
				local_11 = *(byte)((long)&(*(ulong)((sbyte)setting + 0x18)) + 1);
				return pIVar4;
			}
			bVar2 = (typeof(IntSetting)._2).typeHierarchyDepth;
			if ((bVar2 <= bVar1) &&((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(IntSetting))) {
				local_c = *(uint)((long)&(*(ulong)((sbyte)setting + 0x18)) + 4);
				return pIVar4;
			}
			bVar2 = (typeof(FloatSetting)._2).typeHierarchyDepth;
			if ((bVar2 <= bVar1) &&((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(FloatSetting))) {
				local_10 = *(uint)((long)&(*(ulong)((sbyte)setting + 0x18)) + 4);
				return pIVar4;
			}
		}
		return null;
	}

	[Token(Token = "0x6000EEA")]
	[Address(RVA = "0x579CCC0", Offset = "0x579BCC0", VA = "0x579CCC0")]
	private static void CopySettingValue(BaseSetting target, BaseSetting source)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$CopySettingValue): clean
		object value;

		value = AottgGameCreateSession.SettingValue(source);
		AottgGameCreateSession.SetSettingValue(target, value);
		return;
	}

	[Token(Token = "0x6000EEB")]
	[Address(RVA = "0x57A5DC0", Offset = "0x57A4DC0", VA = "0x57A5DC0")]
	private static void SetSettingValue(BaseSetting setting, object value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$SetSettingValue): 10 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		BaseSetting pSVar3;
		IntPtr pvVar4;
		int piVar5;
		float pfVar6;

		if (setting != null) {
			pSVar3 = setting.klass;
			bVar1 = (pSVar3._2).typeHierarchyDepth;
			bVar2 = (typeof(StringSetting)._2).typeHierarchyDepth;
			if ((((bVar2 <= bVar1) && (value != null)) &&((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(StringSetting))) &&(value.klass == g_data_07556758)) {
				setting.Value = value;
				return;
			}
			bVar2 = (typeof(BoolSetting)._2).typeHierarchyDepth;
			if (((bVar2 <= bVar1) &&((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(BoolSetting))) &&((value != null && (value.klass == g_data_075566f0)))) {
				pvVar4 = il2cpp_vm_Object_Unbox(value);
				setting.Value = *(bool)pvVar4;
				return;
			}
			bVar2 = (typeof(IntSetting)._2).typeHierarchyDepth;
			if (((bVar2 <= bVar1) &&((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(IntSetting))) &&((value != null && (value.klass == g_data_07556710)))) {
				piVar5 = il2cpp_vm_Object_Unbox(value);
				setting.Value = *piVar5;
				return;
			}
			bVar2 = (typeof(FloatSetting)._2).typeHierarchyDepth;
			if ((((bVar2 <= bVar1) &&((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(FloatSetting))) &&(value != null)) && (value.klass == g_data_07556740)) {
				pfVar6 = il2cpp_vm_Object_Unbox(value);
				setting.Value = *pfVar6;
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6000EEC")]
	[Address(RVA = "0x579D030", Offset = "0x579C030", VA = "0x579D030")]
	private static void ValidateContentOptions(ExperienceRuleResult result)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$ValidateContentOptions): 12 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<ExperienceRuleField> __this;
		InGameSet pSVar3;
		InGameGeneralSettings pSVar4;
		StringSetting pSVar5;
		List<string> pSVar6;
		UIRule pSVar7;
		object field;
		bool bVar8;
		String[] pSVar9;
		String pSVar10;
		String pSVar11;
		MethodInfo pMVar12;
		System_Collections_Generic_List_Enumerator_object__o local_68;
		byte[] local_48 = new byte[16];
		ExperienceRuleField local_38;

		local_68._list = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._current = null;
		if (result != null) {
			__this = result.Fields;
			if (__this == null) {
				throw new NullReferenceException();
			}
			local_48.GetEnumerator((List<object>)__this);
			local_68._current = (object)local_38;
			local_68._list = (List<T>)local_48._0_8_;
			local_68._index = local_48._8_4_;
			local_68._version = local_48._12_4_;
			local_48._0_8_ = null;
			local_48._8_8_ = &local_68;
	label_0589d180: ;
			bVar8 = local_68.MoveNext();
			field = local_68._current;
			if (bVar8) {
				if ((ExperienceRuleField)local_68._current == null) {
					throw new NullReferenceException();
				}
				bVar8 = String.Equals(((ExperienceRuleField)((long)local_68._current + 0x10)).Id, "general.MapCategory", 5);
				if (bVar8) {
					if (Il2CppMethodInitialized_075452cd == false) {
						Il2CppMethodInitialized_075452cd = true;
						if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_0589d21c;
	label_0589d1eb: ;
						pSVar3 = AottgGameCreateSession. _Working_k__BackingField;
					}
					else {
						if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_0589d1eb;
	label_0589d21c: ;
						pSVar3 = AottgGameCreateSession. _Working_k__BackingField;
					}
					if (pSVar3 == null) {
						throw new NullReferenceException();
					}
					pSVar4 = pSVar3.General;
					if (pSVar4 == null) {
						throw new NullReferenceException();
					}
					pSVar5 = pSVar4.MapCategory;
					if (pSVar5 == null) {
						throw new NullReferenceException();
					}
					pSVar11 = pSVar5._value;
					if (((typeof(BuiltinLevels))._2).cctor_finished_or_no_cctor == 0) {
					}
					pSVar9 = BuiltinLevels.GetMapNames(pSVar11);
					if (pSVar9 == null) {
						throw new NullReferenceException();
					}
					if (pSVar9.Length == 0) {
						pSVar6 = result.Errors;
						pSVar11 = ((ExperienceRuleField)((long)field + 0x10)).Id;
						pSVar10 = Aottg2GisketchLocale.Text("GameCreate.Configuration.NoContent");
						pSVar11 = String.Format(pSVar10, (object)pSVar11);
						pMVar12 = MethodInfo_System_Collections_Generic_List_string_Add;
						if (pSVar6 == null) {
	label_0589d51c: ;
							throw new NullReferenceException();
						}
						piVar1 = &pSVar6._version;
						*piVar1 = *piVar1 + 1;
						pSVar9 = pSVar6._items;
						if (pSVar9 == null) goto label_0589d51c;
						uVar2 = pSVar6._size;
						if (uVar2 < (uint)pSVar9.Length) {
							pSVar6._size = uVar2 + 1;
							pSVar9[(int)uVar2] = pSVar11;
						}
						else {
							pSVar6.AddWithResize((object)pSVar11);
						}
					}
				}
				pMVar12 = (MethodInfo *)"general.MapName";
				bVar8 = String.Equals(((ExperienceRuleField)((long)field + 0x10)).Id, "general.MapName", 5);
				if ((bVar8) ||(pMVar12 = (MethodInfo *)"general.GameMode", bVar8 = String.Equals(((ExperienceRuleField)((long)field + 0x10)).Id, "general.GameMode", 5), bVar8)) {
					pSVar7 = ((ExperienceRuleField)((long)field + 0x10)).Rule;
					if (pSVar7 == null) {
						throw new NullReferenceException();
					}
					pSVar6 = pSVar7.AllowedValues;
					if ((pSVar6 != null) && (0 < pSVar6._size)) {
						pSVar9 = AottgGameCreateSession.FieldOptions((ExperienceRuleField)field);
						if (pSVar9 == null) {
							throw new NullReferenceException();
						}
						if (pSVar9.Length == 0) {
							pSVar6 = result.Errors;
							pSVar11 = ((ExperienceRuleField)((long)field + 0x10)).Id;
							pSVar10 = Aottg2GisketchLocale.Text("GameCreate.Configuration.NoContent");
							pSVar11 = String.Format(pSVar10, (object)pSVar11);
							pMVar12 = MethodInfo_System_Collections_Generic_List_string_Add;
							if (pSVar6 != null) {
								piVar1 = &pSVar6._version;
								*piVar1 = *piVar1 + 1;
								pSVar9 = pSVar6._items;
								if (pSVar9 != null) {
									uVar2 = pSVar6._size;
									if (uVar2 < (uint)pSVar9.Length) {
										pSVar6._size = uVar2 + 1;
										pSVar9[(int)uVar2] = pSVar11;
									}
									else {
										pSVar6.AddWithResize((object)pSVar11);
									}
									goto label_0589d180;
								}
							}
							throw new NullReferenceException();
						}
					}
				}
				goto label_0589d180;
			}
			local_68.Dispose();
		}
		return;
	}

	[Token(Token = "0x6000EED")]
	[Address(RVA = "0x57A5FD0", Offset = "0x57A4FD0", VA = "0x57A5FD0")]
	private static string NoContentError(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c (Gisketch.Aottg2UI.Game.AottgGameCreateSession$$NoContentError): clean
		String pSVar1;

		pSVar1 = Aottg2GisketchLocale.Text("GameCreate.Configuration.NoContent");
		pSVar1 = String.Format(pSVar1, (object)id);
		return pSVar1;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateSession.c.

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession$$.cctor: 1 lines keep C-only constructs
	static AottgGameCreateSession()
	{
		uint uVar1;
		Gisketch_Aottg2UI_Game_AottgGameCreateSession_StaticFields pGVar2;
		OrdinalIgnoreCaseComparer pSVar3;
		List<Experience> __this;
		SandboxGameCreateConfiguration __this_00;
		List<AottgSandboxField> __this_01;
		String[] pSVar4;
		HashSet<string> __this_02;
		Dictionary<string, string> __this_03;

		__this = new List<Experience>();
		AottgGameCreateSession.ExperiencesInternal = __this;
		__this_00 = new SandboxGameCreateConfiguration();
		pGVar2 = typeof(AottgGameCreateSession).static_fields;
		pGVar2.SandboxConfiguration = __this_00;
		__this_01 = new List<AottgSandboxField>();
		pGVar2 = typeof(AottgGameCreateSession).static_fields;
		pGVar2.SandboxFieldsInternal = __this_01;
		pSVar4 = (String[])new string[0];
		pGVar2 = typeof(AottgGameCreateSession).static_fields;
		pGVar2._sandboxAddonNames = pSVar4;
		pSVar4 = (String[])new string[6];
		if (pSVar4 == null) goto label_058a7660;
		if ((int)pSVar4.Length == 0) {
	label_058a765b: ;
			throw new IndexOutOfRangeException();
		}
		pSVar4[0] = "General";
		if ((pSVar4.Length & 0xfffffffe) == 0) goto label_058a765b;
		pSVar4[1] = "Mode";
		if ((uint)pSVar4.Length < 3) goto label_058a765b;
		pSVar4[2] = "Titans";
		if ((pSVar4.Length & 0xfffffffc) == 0) goto label_058a765b;
		pSVar4[3] = "Misc";
		if ((uint)pSVar4.Length < 5) goto label_058a765b;
		pSVar4[4] = "Weather";
		if ((uint)pSVar4.Length < 6) goto label_058a765b;
		pSVar4[5] = "Custom";
		pGVar2 = typeof(AottgGameCreateSession).static_fields;
		pGVar2.SandboxSectionsInternal = pSVar4;
		pSVar4 = (String[])new string[4];
		if (pSVar4 == null) goto label_058a7660;
		if ((int)pSVar4.Length == 0) goto label_058a765b;
		pSVar4[0] = "Casual";
		if ((pSVar4.Length & 0xfffffffe) == 0) goto label_058a765b;
		pSVar4[1] = "Competitive";
		if ((uint)pSVar4.Length < 3) goto label_058a765b;
		pSVar4[2] = "Mission";
		if ((pSVar4.Length & 0xfffffffc) == 0) goto label_058a765b;
		pSVar4[3] = "PVP";
		pGVar2 = typeof(AottgGameCreateSession).static_fields;
		pGVar2.CategoryOrder = pSVar4;
		if ((typeof(StringComparer)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07542886 != false) goto label_058a6b78;
	label_058a75f7: ;
			Il2CppMethodInitialized_07542886 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_07542886 == false) goto label_058a75f7;
	label_058a6b78: ;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar3 = StringComparer.s_ordinalIgnoreCase;
		__this_02 = new HashSet<string>((IEqualityComparer<T>)pSVar3);
		if (__this_02 != null) {
			__this_02.Add((Il2CppObject *)"Motd");
			__this_02.Add((Il2CppObject *)"AllowVoteKicking");
			__this_02.Add((Il2CppObject *)"VoiceChat");
			__this_02.Add((Il2CppObject *)"ProximityMinDistance");
			__this_02.Add((Il2CppObject *)"ProximityMaxDistance");
			__this_02.Add((Il2CppObject *)"AccountRequired");
			pGVar2 = typeof(AottgGameCreateSession).static_fields;
			pGVar2.MultiplayerMiscIds = __this_02;
			if (Il2CppMethodInitialized_07542886 == false) {
				Il2CppMethodInitialized_07542886 = true;
				uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			pSVar3 = StringComparer.s_ordinalIgnoreCase;
			__this_03 = new Dictionary<string, string>((System_Collections_Generic_IEqualityComparer_TKey__o)pSVar3);
			if (__this_03 != null) {
				__this_03.Add((Il2CppObject *)"general.MapCategory", (Il2CppObject *)"Common.Category");
				__this_03.Add((Il2CppObject *)"general.MapName", (Il2CppObject *)"Common.Map");
				__this_03.Add((Il2CppObject *)"general.GameMode", (Il2CppObject *)"CreateGamePopup.General.GameMode");
				__this_03.Add((Il2CppObject *)"general.Difficulty", (Il2CppObject *)"CreateGamePopup.General.Difficulty");
				__this_03.Add((Il2CppObject *)"general.Weather", (Il2CppObject *)"CreateGamePopup.General.Weather");
				__this_03.Add((Il2CppObject *)"general.WeatherIndex", (Il2CppObject *)"CreateGamePopup.General.Weather");
				__this_03.Add((Il2CppObject *)"general.RoomName", (Il2CppObject *)"CreateGamePopup.General.RoomName");
				__this_03.Add((Il2CppObject *)"general.MaxPlayers", (Il2CppObject *)"CreateGamePopup.General.MaxPlayers");
				__this_03.Add((Il2CppObject *)"general.Password", (Il2CppObject *)"Common.Password");
				__this_03.Add((Il2CppObject *)"general.Addons", (Il2CppObject *)"GameCreate.Sandbox.Addons");
				__this_03.Add((Il2CppObject *)"titan.TitanSpawnEnabled", (Il2CppObject *)"CreateGamePopup.Titans.SpawnEnabled");
				__this_03.Add((Il2CppObject *)"titan.TitanSpawnNormal", (Il2CppObject *)"CreateGamePopup.Titans.Normal");
				__this_03.Add((Il2CppObject *)"titan.TitanSpawnAbnormal", (Il2CppObject *)"CreateGamePopup.Titans.Abnormal");
				__this_03.Add((Il2CppObject *)"titan.TitanSpawnJumper", (Il2CppObject *)"CreateGamePopup.Titans.Jumper");
				__this_03.Add((Il2CppObject *)"titan.TitanSpawnCrawler", (Il2CppObject *)"CreateGamePopup.Titans.Crawler");
				__this_03.Add((Il2CppObject *)"titan.TitanSpawnThrower", (Il2CppObject *)"CreateGamePopup.Titans.Thrower");
				__this_03.Add((Il2CppObject *)"titan.TitanSpawnPunk", (Il2CppObject *)"CreateGamePopup.Titans.Punk");
				__this_03.Add((Il2CppObject *)"titan.TitanSizeEnabled", (Il2CppObject *)"CreateGamePopup.Titans.SizeEnabled");
				__this_03.Add((Il2CppObject *)"titan.TitanSizeMin", (Il2CppObject *)"CreateGamePopup.Titans.MinSize");
				__this_03.Add((Il2CppObject *)"titan.TitanSizeMax", (Il2CppObject *)"CreateGamePopup.Titans.MaxSize");
				__this_03.Add((Il2CppObject *)"titan.TitanHealthMode", (Il2CppObject *)"CreateGamePopup.Titans.HealthMode");
				__this_03.Add((Il2CppObject *)"titan.TitanHealthMin", (Il2CppObject *)"CreateGamePopup.Titans.MinHealth");
				__this_03.Add((Il2CppObject *)"titan.TitanHealthMax", (Il2CppObject *)"CreateGamePopup.Titans.MaxHealth");
				__this_03.Add((Il2CppObject *)"titan.TitanHeadMode", (Il2CppObject *)"CreateGamePopup.Titans.HeadMode");
				__this_03.Add((Il2CppObject *)"titan.TitanHeadRandomMin", (Il2CppObject *)"CreateGamePopup.Titans.HeadRandomMin");
				__this_03.Add((Il2CppObject *)"titan.TitanHeadRandomMax", (Il2CppObject *)"CreateGamePopup.Titans.HeadRandomMax");
				__this_03.Add((Il2CppObject *)"titan.TitanDecapitationEnabled", (Il2CppObject *)"CreateGamePopup.Titans.DecapitationEnabled");
				__this_03.Add((Il2CppObject *)"titan.TitanDecapitationMinDamage", (Il2CppObject *)"CreateGamePopup.Titans.DecapitationMinDamage");
				__this_03.Add((Il2CppObject *)"titan.TitanArmorEnabled", (Il2CppObject *)"CreateGamePopup.Titans.ArmorEnabled");
				__this_03.Add((Il2CppObject *)"titan.TitanArmorCrawlerEnabled", (Il2CppObject *)"GameCreate.Sandbox.Titans.ArmorCrawlerEnabled");
				__this_03.Add((Il2CppObject *)"titan.TitanArmor", (Il2CppObject *)"CreateGamePopup.Titans.Armor");
				__this_03.Add((Il2CppObject *)"titan.TitanStandardModels", (Il2CppObject *)"CreateGamePopup.Titans.StandardModels");
				__this_03.Add((Il2CppObject *)"titan.TitanSmartMovement", (Il2CppObject *)"CreateGamePopup.Titans.SmartMovement");
				__this_03.Add((Il2CppObject *)"titan.TitanChanceWarded", (Il2CppObject *)"CreateGamePopup.Titans.Warded");
				__this_03.Add((Il2CppObject *)"titan.TitanWardedEnabled", (Il2CppObject *)"CreateGamePopup.Titans.WardedEnabled");
				__this_03.Add((Il2CppObject *)"misc.PVP", (Il2CppObject *)"CreateGamePopup.Misc.PVP");
				__this_03.Add((Il2CppObject *)"misc.EndlessRespawnEnabled", (Il2CppObject *)"CreateGamePopup.Misc.EndlessRespawnEnabled");
				__this_03.Add((Il2CppObject *)"misc.EndlessRespawnTime", (Il2CppObject *)"CreateGamePopup.Misc.EndlessRespawnTime");
				__this_03.Add((Il2CppObject *)"misc.AllowSpawnTime", (Il2CppObject *)"CreateGamePopup.Misc.AllowSpawnTime");
				__this_03.Add((Il2CppObject *)"misc.InvincibilityTime", (Il2CppObject *)"CreateGamePopup.Misc.InvincibilityTime");
				__this_03.Add((Il2CppObject *)"misc.ThunderspearPVP", (Il2CppObject *)"CreateGamePopup.Misc.ThunderspearPVP");
				__this_03.Add((Il2CppObject *)"misc.APGPVP", (Il2CppObject *)"CreateGamePopup.Misc.APGPVP");
				__this_03.Add((Il2CppObject *)"misc.AllowBlades", (Il2CppObject *)"CreateGamePopup.Misc.AllowBlades");
				__this_03.Add((Il2CppObject *)"misc.AllowAHSS", (Il2CppObject *)"CreateGamePopup.Misc.AllowAHSS");
				__this_03.Add((Il2CppObject *)"misc.AllowAPG", (Il2CppObject *)"CreateGamePopup.Misc.AllowAPG");
				__this_03.Add((Il2CppObject *)"misc.AllowThunderspears", (Il2CppObject *)"CreateGamePopup.Misc.AllowThunderspears");
				__this_03.Add((Il2CppObject *)"misc.AllowUnarmed", (Il2CppObject *)"CreateGamePopup.Misc.AllowUnarmed");
				__this_03.Add((Il2CppObject *)"misc.AllowCivilian", (Il2CppObject *)"CreateGamePopup.Misc.AllowCivilian");
				__this_03.Add((Il2CppObject *)"misc.AllowPlayerTitans", (Il2CppObject *)"CreateGamePopup.Misc.AllowPlayerTitans");
				__this_03.Add((Il2CppObject *)"misc.AllowShifterSpecials", (Il2CppObject *)"CreateGamePopup.Misc.AllowShifterSpecials");
				__this_03.Add((Il2CppObject *)"misc.AllowShifters", (Il2CppObject *)"CreateGamePopup.Misc.AllowShifters");
				__this_03.Add((Il2CppObject *)"misc.AllowVoteKicking", (Il2CppObject *)"CreateGamePopup.Misc.AllowVoteKicking");
				__this_03.Add((Il2CppObject *)"misc.Horses", (Il2CppObject *)"CreateGamePopup.Misc.Horses");
				__this_03.Add((Il2CppObject *)"misc.HorsebackCombat", (Il2CppObject *)"CreateGamePopup.Misc.HorsebackCombat");
				__this_03.Add((Il2CppObject *)"misc.DestructibleEnvironment", (Il2CppObject *)"CreateGamePopup.Misc.DestructibleEnvironment");
				__this_03.Add((Il2CppObject *)"misc.GunsAirReload", (Il2CppObject *)"CreateGamePopup.Misc.GunsAirReload");
				__this_03.Add((Il2CppObject *)"misc.AllowStock", (Il2CppObject *)"CreateGamePopup.Misc.AllowStock");
				__this_03.Add((Il2CppObject *)"misc.ClearKDROnRestart", (Il2CppObject *)"CreateGamePopup.Misc.ClearKDROnRestart");
				__this_03.Add((Il2CppObject *)"misc.GlobalMinimapDisable", (Il2CppObject *)"CreateGamePopup.Misc.GlobalMinimapDisable");
				__this_03.Add((Il2CppObject *)"misc.RealismMode", (Il2CppObject *)"CreateGamePopup.Misc.RealismMode");
				__this_03.Add((Il2CppObject *)"misc.RealismImpactThreshold", (Il2CppObject *)"CreateGamePopup.Misc.RealismImpact");
				__this_03.Add((Il2CppObject *)"misc.RealismMaxReel", (Il2CppObject *)"CreateGamePopup.Misc.RealismHookLength");
				__this_03.Add((Il2CppObject *)"misc.RealismMaxSpeed", (Il2CppObject *)"CreateGamePopup.Misc.RealismMaxSpeed");
				__this_03.Add((Il2CppObject *)"misc.HookDamageMultiplier", (Il2CppObject *)"CreateGamePopup.Misc.HookDamageMultiplier");
				__this_03.Add((Il2CppObject *)"misc.CustomStats", (Il2CppObject *)"CreateGamePopup.Misc.CustomStats");
				__this_03.Add((Il2CppObject *)"misc.CustomPerks", (Il2CppObject *)"CreateGamePopup.Misc.CustomPerks");
				__this_03.Add((Il2CppObject *)"misc.Motd", (Il2CppObject *)"CreateGamePopup.Misc.MOTD");
				__this_03.Add((Il2CppObject *)"misc.VoiceChat", (Il2CppObject *)"CreateGamePopup.Misc.VoiceChat");
				__this_03.Add((Il2CppObject *)"misc.ProximityMinDistance", (Il2CppObject *)"CreateGamePopup.Misc.ProximityMinDistance");
				__this_03.Add((Il2CppObject *)"misc.ProximityMaxDistance", (Il2CppObject *)"CreateGamePopup.Misc.ProximityMaxDistance");
				__this_03.Add((Il2CppObject *)"misc.HumanHealth", (Il2CppObject *)"CreateGamePopup.Misc.HumanHealth");
				__this_03.Add((Il2CppObject *)"misc.ShifterHealth", (Il2CppObject *)"CreateGamePopup.Misc.ShifterHealth");
				__this_03.Add((Il2CppObject *)"misc.HorseHealth", (Il2CppObject *)"CreateGamePopup.Misc.HorseHealth");
				__this_03.Add((Il2CppObject *)"misc.AccountRequired", (Il2CppObject *)"CreateGamePopup.Misc.AccountRequired");
				pGVar2 = typeof(AottgGameCreateSession).static_fields;
				pGVar2.FieldLabelKeys = __this_03;
				return;
			}
		}
	label_058a7660: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgGameCreateSession.c();
		AottgGameCreateSession.c.__9 =(AottgGameCreateSession.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<Begin>b__85_0: clean
	private bool c__Begin_b__85_0(Experience item)
	{
		String a;
		InGameSet pSVar1;
		StringSetting pSVar2;
		bool bVar3;

		if (item == null) goto label_058a7c7e;
		a = item.Name;
		if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075452cd == false) goto label_058a7c24;
	label_058a7bf8: ;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor != 0) goto label_058a7c04;
	label_058a7c43: ;
			pSVar1 = AottgGameCreateSession._Working_k__BackingField;
		}
		else {
			if (Il2CppMethodInitialized_075452cd != false) goto label_058a7bf8;
	label_058a7c24: ;
			Il2CppMethodInitialized_075452cd = true;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) goto label_058a7c43;
	label_058a7c04: ;
			pSVar1 = AottgGameCreateSession._Working_k__BackingField;
		}
		if ((pSVar1 != null) &&(pSVar2 = pSVar1.ExperienceName, pSVar2 != null)) {
			bVar3 = String.Equals(a, pSVar2._value, 5);
			return bVar3;
		}
	label_058a7c7e: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<Categories>b__90_0: clean
	private String c__Categories_b__90_0(Experience item)
	{
		if (item == null) {
			throw new NullReferenceException();
		}
		return item.Category;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<Categories>b__90_1: clean
	private bool c__Categories_b__90_1(String value)
	{
		bool bVar1;

		bVar1 = String.IsNullOrWhiteSpace(value);
		return !bVar1;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<Categories>b__90_2: clean
	private int c__Categories_b__90_2(String value)
	{
		String[] pSVar1;
		int iVar2;

		iVar2 = Array.IndexOf<string>((Object[])AottgGameCreateSession.CategoryOrder, (object)value);
		if (-1 < iVar2) {
			return iVar2;
		}
		pSVar1 = AottgGameCreateSession.CategoryOrder;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		return (int32_t)pSVar1.Length;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<Subcategories>b__91_0: clean
	private bool c__Subcategories_b__91_0(Experience item)
	{
		uint uVar1;
		String a;
		bool bVar2;

		if (item == null) {
			throw new NullReferenceException();
		}
		a = item.Category;
		if (Il2CppMethodInitialized_075452d4 == false) {
			Il2CppMethodInitialized_075452d4 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar2 = String.Equals(a, AottgGameCreateSession. _Category_k__BackingField, 5);
		return bVar2;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<Subcategories>b__91_1: clean
	private String c__Subcategories_b__91_1(Experience item)
	{
		if (item == null) {
			throw new NullReferenceException();
		}
		return item.SubCategory;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<Subcategories>b__91_2: clean
	private bool c__Subcategories_b__91_2(String value)
	{
		bool bVar1;

		bVar1 = String.IsNullOrWhiteSpace(value);
		return !bVar1;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<VisibleFields>b__97_0: clean
	private bool c__VisibleFields_b__97_0(ExperienceRuleField field)
	{
		if (field == null) {
			throw new NullReferenceException();
		}
		return field.Visible;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<LockedFields>b__98_0: clean
	private bool c__LockedFields_b__98_0(ExperienceRuleField field)
	{
		if (field == null) {
			throw new NullReferenceException();
		}
		return field.Locked;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<AutofillTitanSpawnProbabilities>b__114_0: clean
	private bool c__AutofillTitanSpawnProbabilities_b__114_0(float value)
	{
		return ABS(value) < 0.0001;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<AutofillTitanSpawnProbabilities>b__114_1: clean
	private bool c__AutofillTitanSpawnProbabilities_b__114_1(float value)
	{
		return 0.0 < value;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<FieldOptions>b__125_3: clean
	private bool c__FieldOptions_b__125_3(ExperienceRuleField candidate)
	{
		bool bVar1;

		if (candidate == null) {
			throw new NullReferenceException();
		}
		bVar1 = String.Equals(candidate.Id, "general.MapCategory", 5);
		return bVar1;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<FieldOptions>b__125_4: clean
	private String c__FieldOptions_b__125_4(String value)
	{
		return value;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<FieldOptions>b__125_0: clean
	private String c__FieldOptions_b__125_0(String value)
	{
		return value;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<FieldOptions>b__125_1: clean
	private String c__FieldOptions_b__125_1(String value)
	{
		return value;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<SandboxMapNames>b__126_0: clean
	private String c__SandboxMapNames_b__126_0(String value)
	{
		return value;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<PresetNames>b__127_0: clean
	private String c__PresetNames_b__127_0(String name)
	{
		return name;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<CustomPresetNames>b__128_0: clean
	private bool c__CustomPresetNames_b__128_0(InGameSet preset)
	{
		BoolSetting pSVar1;

		if ((preset == null) ||(pSVar1 = preset.Preset, pSVar1 == null)) {
			throw new NullReferenceException();
		}
		return pSVar1._value == false;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<CustomPresetNames>b__128_1: clean
	private String c__CustomPresetNames_b__128_1(InGameSet preset)
	{
		StringSetting pSVar1;

		if ((preset == null) ||(pSVar1 = preset.Name, pSVar1 == null)) {
			throw new NullReferenceException();
		}
		return pSVar1._value;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<CustomPresetNames>b__128_2: clean
	private String c__CustomPresetNames_b__128_2(String name)
	{
		return name;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<RefreshSandbox>b__147_0: clean
	private String c__RefreshSandbox_b__147_0(String value)
	{
		return value;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<RebuildSandboxFields>b__148_0: clean
	private String c__RebuildSandboxFields_b__148_0(System_Collections_Generic_KeyValuePair_string__Dictionary_string__BaseSetting___o item)
	{
		return item.key;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<AddDynamicFields>b__163_0: clean
	private String c__AddDynamicFields_b__163_0(System_Collections_Generic_KeyValuePair_string__BaseSetting__o item)
	{
		return item.key;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<MetadataOptions>b__168_0: clean
	private String c__MetadataOptions_b__168_0(String item)
	{
		String pSVar1;

		if (item == null) {
			throw new NullReferenceException();
		}
		return pSVar1;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c$$<MetadataOptions>b__168_1: clean
	private bool c__MetadataOptions_b__168_1(String item)
	{
		if (item == null) {
			throw new NullReferenceException();
		}
		return 0 < item._stringLength;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass121_0$$.ctor: clean
	private void c__DisplayClass121_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass121_0$$<ToggleSandboxAddon>b__0: clean
	private bool c__DisplayClass121_0__ToggleSandboxAddon_b__0(StringSetting item)
	{
		bool bVar1;

		if (item == null) {
			throw new NullReferenceException();
		}
		bVar1 = (item._value == this.addonName);
		return bVar1;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass121_0$$<ToggleSandboxAddon>b__1: clean
	private bool c__DisplayClass121_0__ToggleSandboxAddon_b__1(StringSetting item)
	{
		bool bVar1;

		if (item == null) {
			throw new NullReferenceException();
		}
		bVar1 = (item._value == this.addonName);
		return bVar1;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass122_0$$.ctor: clean
	private void c__DisplayClass122_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass122_0$$<IsSandboxAddonSelected>b__0: 1 lines keep C-only constructs
	private bool c__DisplayClass122_0__IsSandboxAddonSelected_b__0(StringSetting item)
	{
		uint uVar1;
		String a;
		String[] pSVar2;
		bool bVar3;

		if (item != null) {
			a = item._value;
			if ((typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgGameCreateSession)) ;
			}
			pSVar2 = AottgGameCreateSession._sandboxAddonNames;
			if (pSVar2 != null) {
				uVar1 = this.index;
				if ((uint)pSVar2.Length <= uVar1) {
					throw new IndexOutOfRangeException();
				}
				bVar3 = (a == pSVar2[(int)uVar1]);
				return bVar3;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass125_0$$.ctor: clean
	private void c__DisplayClass125_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass125_0$$<FieldOptions>b__2: clean
	private bool c__DisplayClass125_0__FieldOptions_b__2(String name, int index)
	{
		ExperienceRuleField pSVar1;
		UIRule pSVar2;
		bool bVar3;
		String pSVar4;
		CultureInfo provider;
		int iStack_14;

		pSVar1 = this.field;
		if (pSVar1 != null) {
			bVar3 = String.Equals(pSVar1.Id, "general.Weather", 5);
			pSVar1 = this.field;
			if (bVar3) {
				if ((pSVar1 != null) &&(pSVar2 = pSVar1.Rule, pSVar2 != null)) {
					bVar3 = UIRule.MatchesAllowedValues(pSVar2, name);
					if (bVar3) {
						return true;
					}
					pSVar1 = this.field;
					if ((pSVar1 != null) && (name != null)) {
						pSVar2 = pSVar1.Rule;
						pSVar4 = name.TrimEnd(0x2a);
						if (pSVar2 != null) {
							bVar3 = UIRule.MatchesAllowedValues(pSVar2, pSVar4);
							return bVar3;
						}
					}
				}
			}
			else if (pSVar1 != null) {
				pSVar2 = pSVar1.Rule;
				provider = CultureInfo.InvariantCulture;
				pSVar4 = iStack_14.ToString((IFormatProvider)provider);
				if (pSVar2 != null) {
					bVar3 = UIRule.MatchesAllowedValues(pSVar2, pSVar4);
					return bVar3;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass130_0$$.ctor: clean
	private void c__DisplayClass130_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass130_0$$<IsFavorite>b__0: clean
	private bool c__DisplayClass130_0__IsFavorite_b__0(StringSetting item)
	{
		String a;
		Experience experience;
		bool bVar1;
		String b;

		if (item == null) {
			throw new NullReferenceException();
		}
		a = item._value;
		experience = this.experience;
		b = AottgGameCreateSession.FavoriteExperienceId(experience);
		bVar1 = String.Equals(a, b, 5);
		return bVar1;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass131_0$$.ctor: clean
	private void c__DisplayClass131_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass131_0$$<IsFavoritePreset>b__0: clean
	private bool c__DisplayClass131_0__IsFavoritePreset_b__0(StringSetting item)
	{
		bool bVar1;

		if (item == null) {
			throw new NullReferenceException();
		}
		bVar1 = String.Equals(item._value, this.name, 4);
		return bVar1;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass136_0$$.ctor: clean
	private void c__DisplayClass136_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass136_0$$<ToggleFavorite>b__0: clean
	private bool c__DisplayClass136_0__ToggleFavorite_b__0(StringSetting item)
	{
		bool bVar1;

		if (item == null) {
			throw new NullReferenceException();
		}
		bVar1 = String.Equals(item._value, this.id, this.comparison);
		return bVar1;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass140_0$$.ctor: clean
	private void c__DisplayClass140_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass140_0$$<DeletePreset>b__0: clean
	private bool c__DisplayClass140_0__DeletePreset_b__0(InGameSet candidate)
	{
		StringSetting pSVar1;
		bool bVar2;

		if ((candidate == null) ||(pSVar1 = candidate.Name, pSVar1 == null)) {
			throw new NullReferenceException();
		}
		bVar2 = String.Equals(pSVar1._value, this.name, 4);
		return bVar2;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass140_0$$<DeletePreset>b__1: clean
	private bool c__DisplayClass140_0__DeletePreset_b__1(StringSetting item)
	{
		bool bVar1;

		if (item == null) {
			throw new NullReferenceException();
		}
		bVar1 = String.Equals(item._value, this.name, 4);
		return bVar1;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass93_0$$.ctor: clean
	private void c__DisplayClass93_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass93_0$$<ExperiencesIn>b__0: clean
	private bool c__DisplayClass93_0__ExperiencesIn_b__0(Experience item)
	{
		bool bVar1;

		if (item == null) {
			throw new NullReferenceException();
		}
		bVar1 = String.Equals(item.Category, this.category, 5) ;
		if (bVar1) {
			bVar1 = String.Equals(item.SubCategory, this.subcategory, 5);
			return bVar1;
		}
		return false;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass95_0$$.ctor: clean
	private void c__DisplayClass95_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass95_0$$<CategoryPreview>b__0: clean
	private bool c__DisplayClass95_0__CategoryPreview_b__0(Experience item)
	{
		bool bVar1;
		bool bVar2;

		if (item == null) {
			throw new NullReferenceException();
		}
		bVar2 = false;
		bVar1 = String.Equals(item.Category, this.category, 5) ;
		if (bVar1) {
			bVar2 = String.IsNullOrEmpty(item.Preview);
			bVar2 = !bVar2;
		}
		return bVar2;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass96_0$$.ctor: clean
	private void c__DisplayClass96_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateSession.<>c__DisplayClass96_0$$<SubcategoryPreview>b__0: clean
	private bool c__DisplayClass96_0__SubcategoryPreview_b__0(Experience item)
	{
		uint uVar1;
		String a;
		bool bVar2;
		bool bVar3;

		if (item == null) {
			throw new NullReferenceException();
		}
		a = item.Category;
		if (Il2CppMethodInitialized_075452d4 == false) {
			Il2CppMethodInitialized_075452d4 = true;
			uVar1 = (typeof(AottgGameCreateSession)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgGameCreateSession))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar3 = false;
		bVar2 = String.Equals(a, AottgGameCreateSession. _Category_k__BackingField, 5);
		if (bVar2) {
			bVar3 = false;
			bVar2 = String.Equals(item.SubCategory, this.subcategory, 5);
			if (bVar2) {
				bVar3 = String.IsNullOrEmpty(item.Preview);
				bVar3 = !bVar3;
			}
		}
		return bVar3;
	}
}
