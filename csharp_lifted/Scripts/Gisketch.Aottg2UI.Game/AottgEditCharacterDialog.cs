// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgEditCharacterDialog
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002FB")]
[AottgDialog("profile-edit-character")]
public sealed class AottgEditCharacterDialog : AottgDialog
{
	[Token(Token = "0x4000F31")]
	public const string Id = "profile-edit-character";

	[Token(Token = "0x4000F32")]
	public const string NameInputId = "profile-character-name";

	[Token(Token = "0x4000F33")]
	public const string GuildInputId = "profile-character-guild";

	[Token(Token = "0x4000F34")]
	public const string PresetGuildSelectId = "profile-character-preset-guild";

	[Token(Token = "0x4000F35")]
	public const string NameEffectPrefix = "profile-character-name-effect";

	[Token(Token = "0x4000F36")]
	public const string GuildEffectPrefix = "profile-character-guild-effect";

	[Token(Token = "0x4000F37")]
	internal const string EffectsDraftKey = "profile-character-effects-draft";

	[Token(Token = "0x4000F38")]
	private const string NoGuild = "__none";

	[Token(Token = "0x4000F39")]
	private const string BadgePrefix = "profile-character-badge-";

	[Token(Token = "0x4000F3A")]
	private const string BadgesDraftKey = "profile-character-badges-draft";

	[Token(Token = "0x4000F3B")]
	private const float FormPanelWidth = 640f;

	[Token(Token = "0x4000F3C")]
	private const float PreviewPanelWidth = 420f;

	[Token(Token = "0x4000F3D")]
	private const float SplitGap = 24f;

	[Token(Token = "0x4000F3E")]
	[FieldOffset(Offset = "0x0")]
	private static string _selectedGuildPresetId;

	[Token(Token = "0x4000F3F")]
	[FieldOffset(Offset = "0x8")]
	private static bool _noGuildSelected;

	[Token(Token = "0x4000F40")]
	[FieldOffset(Offset = "0x9")]
	private static bool _nameEffectEnabled;

	[Token(Token = "0x4000F41")]
	[FieldOffset(Offset = "0xA")]
	private static bool _guildEffectEnabled;

	[Token(Token = "0x4000F42")]
	[FieldOffset(Offset = "0x10")]
	private static string _nameEffectType;

	[Token(Token = "0x4000F43")]
	[FieldOffset(Offset = "0x18")]
	private static string _guildEffectType;

	[Token(Token = "0x4000F44")]
	[FieldOffset(Offset = "0x20")]
	private static string _nameFont;

	[Token(Token = "0x4000F45")]
	[FieldOffset(Offset = "0x28")]
	private static string _guildFont;

	[Token(Token = "0x4000F46")]
	[FieldOffset(Offset = "0x30")]
	private static readonly HashSet<string> SelectedBadges;

	[Token(Token = "0x17000203")]
	protected override string Title
	{
		[Token(Token = "0x600129A")]
		[Address(RVA = "0x57EF6A0", Offset = "0x57EE6A0", VA = "0x57EF6A0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_Title): clean
			String pSVar1;

			pSVar1 = Aottg2GisketchLocale.Text("MainMenu.Profile.EditCharacter");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000204")]
	protected override string TitleIcon
	{
		[Token(Token = "0x600129B")]
		[Address(RVA = "0x57EF700", Offset = "0x57EE700", VA = "0x57EF700", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_TitleIcon): clean
			return "material-icons/edit";
		}
	}

	[Token(Token = "0x17000205")]
	protected override string RootStyle
	{
		[Token(Token = "0x600129C")]
		[Address(RVA = "0x57EF730", Offset = "0x57EE730", VA = "0x57EF730", Slot = "6")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_RootStyle): clean
			return "clear";
		}
	}

	[Token(Token = "0x17000206")]
	protected override string BodyStyle
	{
		[Token(Token = "0x600129D")]
		[Address(RVA = "0x57EF760", Offset = "0x57EE760", VA = "0x57EF760", Slot = "8")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_BodyStyle): clean
			return "clear";
		}
	}

	[Token(Token = "0x17000207")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x600129E")]
		[Address(RVA = "0x57EF790", Offset = "0x57EE790", VA = "0x57EF790", Slot = "13")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_BodyScrollable): clean
			return false;
		}
	}

	[Token(Token = "0x17000208")]
	protected override bool GuardUnsavedChanges
	{
		[Token(Token = "0x600129F")]
		[Address(RVA = "0x57EF7A0", Offset = "0x57EE7A0", VA = "0x57EF7A0", Slot = "12")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_GuardUnsavedChanges): clean
			return true;
		}
	}

	[Token(Token = "0x17000209")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60012A0")]
		[Address(RVA = "0x57EF7B0", Offset = "0x57EE7B0", VA = "0x57EF7B0", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_RootLayout): clean
			GisketchLength width;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Points(1084.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x1700020A")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x60012A1")]
		[Address(RVA = "0x57EF870", Offset = "0x57EE870", VA = "0x57EF870", Slot = "17")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$get_BodyLayout): clean
			GisketchLayoutDefinition pGVar1;

			pGVar1 = AottgUi.Layout("Row", null, "Stretch", null, null, 24.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x60012A2")]
	[Address(RVA = "0x57EF920", Offset = "0x57EE920", VA = "0x57EF920", Slot = "19")]
	protected override void BuildHeader(AottgUi header)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$BuildHeader): clean
		return;
	}

	[Token(Token = "0x60012A3")]
	[Address(RVA = "0x57EF930", Offset = "0x57EE930", VA = "0x57EF930", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$BuildBody): 13 lines keep C-only constructs
		AottgEditCharacterDialog.c__DisplayClass39_0 __this_00;
		MethodInfo method_00;
		String pSVar1;
		Action<AottgUi> __this_01;
		GisketchLength width;
		GisketchLength minHeight;
		GisketchLayoutDefinition layout;
		GisketchMotionDefinition pGVar2;
		GisketchNodeDefinition pGVar3;
		AottgCharacterNamePreviewPanel __this_02;
		JSONNode* targetAddress;
		MethodInfo pMVar4;
		GisketchUiPerfLog.Scope local_68;
		GisketchUiPerfLog.Scope local_40;

		if (Il2CppMethodInitialized_07545587 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c__DisplayClass39_0_BuildBody_b__0) ;
			Il2CppMethodInitialized_07545587 = true;
		}
		local_68._startMs._0_4_ = 0;
		local_68._startMs._4_2_ = 0;
		local_68._startMs._6_2_ = 0;
		local_68._enabled = false;
		local_68._hotLoop = false;
		local_68._26_6_ = 0;
		local_68._area = null;
		local_68._detail = null;
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgEditCharacterDialog.c__DisplayClass39_0));
		__this_00 = new Object();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.__4__this = this;
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		local_40 = GisketchUiPerfLog.Time("Dialog.EditCharacter.BuildBody", "start");
		local_68._startMs = local_40._startMs;
		local_68._enabled = local_40._enabled;
		local_68._hotLoop = local_40._hotLoop;
		local_68._26_6_ = local_40._26_6_;
		local_68._area = local_40._area;
		local_68._detail = local_40._detail;
		local_40._area = null;
		local_40._detail = (String)&local_68;
		method_00 = (MethodInfo)AottgCharacterInfoState.Current();
		targetAddress = &__this_00.info;
		__this_00.info = (JSONNode)method_00;
		pMVar4 = (MethodInfo)*targetAddress;
		if ((typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		AottgEditCharacterDialog.InitializeSelection((JSONNode)pMVar4);
		pSVar1 = AottgEditCharacterDialog.BadgesDraftValue();
		if (body == null) {
			throw new NullReferenceException();
		}
		pMVar4 = (MethodInfo)body;
		body.FormDraft("profile-character-badges-draft", pSVar1, "Badges", null) ;
		pSVar1 = AottgEditCharacterDialog.EffectsDraftValue();
		body.FormDraft("profile-character-effects-draft", pSVar1, "Effects", null) ;
		__this_01 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c__DisplayClass39_0_BuildBody_b__0);
		width = AottgUi.Points(640.0);
		minHeight = AottgUi.Points(0.0);
		layout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, minHeight, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		pGVar2 = ProfileDialogUi.PanelEnterMotion();
		pGVar3 = body.Panel("profilePreviewDialog", __this_01, "profile-edit-character-form", layout, pGVar2);
		pGVar2 = ProfileDialogUi.PanelExitMotion();
		if (pGVar3 == null) {
			throw new NullReferenceException();
		}
		pGVar3.exit = pGVar2;
		__this_02 = new AottgCharacterNamePreviewPanel("profile-character-dialog-name-preview", 420.0, true, "Center", false);
		body.Component((AottgComponent)__this_02);
		local_68.Dispose();
		return;
	}

	[Token(Token = "0x60012A4")]
	[Address(RVA = "0x57F13F0", Offset = "0x57F03F0", VA = "0x57F13F0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$BuildFooter): clean
		return;
	}

	[Token(Token = "0x60012A5")]
	[Address(RVA = "0x57DF430", Offset = "0x57DE430", VA = "0x57DF430")]
	public static string SelectedGuildPresetId()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SelectedGuildPresetId): 5 lines keep C-only constructs
		sbyte cVar1;
		uint uVar2;
		AottgEditCharacterDialog* ppGVar3;

		if (Il2CppMethodInitialized_07545588 == false) {
			Il2CppMethodInitialized_07545588 = true;
			uVar2 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
			cVar1 = AottgEditCharacterDialog._noGuildSelected;
		}
		else {
			cVar1 = *(sbyte)((long)(typeof(AottgEditCharacterDialog)). static_fields + 8);
		}
		if (cVar1 == false) {
			ppGVar3 = &typeof(AottgEditCharacterDialog);
			if (((typeof(AottgEditCharacterDialog))._2). cctor_finished_or_no_cctor == 0) {
			}
		}
		else {
			ppGVar3 = (AottgEditCharacterDialog*)&g_data_07556758;
		}
		return (*ppGVar3).static_fields._selectedGuildPresetId;
	}

	[Token(Token = "0x60012A6")]
	[Address(RVA = "0x57F1400", Offset = "0x57F0400", VA = "0x57F1400")]
	public static bool NoGuildSelected()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$NoGuildSelected): 1 lines keep C-only constructs
		uint uVar1;

		if (Il2CppMethodInitialized_07545589 == false) {
			Il2CppMethodInitialized_07545589 = true;
			uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
			return AottgEditCharacterDialog._noGuildSelected;
		}
		return (bool)*(byte)((long)(typeof(AottgEditCharacterDialog)). static_fields + 8);
	}

	[Token(Token = "0x60012A7")]
	[Address(RVA = "0x57DF4D0", Offset = "0x57DE4D0", VA = "0x57DF4D0")]
	public static IEnumerable<string> SelectedBadgeIds()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SelectedBadgeIds): 1 lines keep C-only constructs
		String[] pSVar1;

		if ((typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		pSVar1 = AottgProfileEntitlementCatalog.OrderedBadgeIds((IEnumerable<string>)AottgEditCharacterDialog.SelectedBadges);
		return (IEnumerable<string>)pSVar1;
	}

	[Token(Token = "0x60012A8")]
	[Address(RVA = "0x57F0FE0", Offset = "0x57EFFE0", VA = "0x57F0FE0")]
	internal static string EffectsDraftValue()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$EffectsDraftValue): 38 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		bool bVar4;
		ulong in_RAX;
		MethodInfo parts;
		String pSVar5;
		String[] pSVar6;
		MethodInfo pMVar8;
		ulong uStack_28;

		uStack_28 = in_RAX;
		parts = new List<string>();
		if ((typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		if (Il2CppMethodInitialized_0754558d == false) {
			Il2CppMethodInitialized_0754558d = true;
			uVar2 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(AottgEditCharacterDialog))._2). cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		bVar4 = AottgEditCharacterDialog.EffectEnabled("profile-character-name-effect");
		uStack_28 = CONCAT17(bVar4, (undefined7)uStack_28);
		pSVar5 = (((long)&uStack_28 + 7)).ToString();
		if (parts != null) {
			piVar1 = (int)((long)&parts.name + 4);
			*piVar1 = *piVar1 + 1;
			pSVar6 = ((List<string>)&parts.invoker_method)._items;
			if (pSVar6 != null) {
				uVar3 = *(uint)&parts.name;
				if (uVar3 < (uint)pSVar6.Length) {
					*(uint)&parts.name = uVar3 + 1;
					pMVar8 = (MethodInfo)(pSVar6.m_Items + (int)uVar3);
					pSVar6[(int)uVar3] = pSVar5;
				}
				else {
					parts.AddWithResize((object)pSVar5);
				}
				pSVar5 = AottgEditCharacterDialog.NameEffectType();
				piVar1 = (int)((long)&parts.name + 4);
				*piVar1 = *piVar1 + 1;
				pSVar6 = ((List<string>)&parts.invoker_method)._items;
				if (pSVar6 != null) {
					uVar3 = *(uint)&parts.name;
					if (uVar3 < (uint)pSVar6.Length) {
						*(uint)&parts.name = uVar3 + 1;
						pMVar8 = (MethodInfo)(pSVar6.m_Items + (int)uVar3);
						pSVar6[(int)uVar3] = pSVar5;
					}
					else {
						parts.AddWithResize((object)pSVar5);
					}
					pSVar5 = AottgEditCharacterDialog.NameFont();
					piVar1 = (int)((long)&parts.name + 4);
					*piVar1 = *piVar1 + 1;
					pSVar6 = ((List<string>)&parts.invoker_method)._items;
					if (pSVar6 != null) {
						uVar3 = *(uint)&parts.name;
						if (uVar3 < (uint)pSVar6.Length) {
							*(uint)&parts.name = uVar3 + 1;
							pSVar6[(int)uVar3] = pSVar5;
						}
						else {
							parts.AddWithResize((object)pSVar5);
						}
						pMVar8 = (MethodInfo *)"profile-character-name-effect";
						AottgEditCharacterDialog.AddEffectColors((List<string>)parts, "profile-character-name-effect");
						bVar4 = AottgEditCharacterDialog.EffectEnabled("profile-character-guild-effect") ;
						uStack_28 = CONCAT17(bVar4, (undefined7)uStack_28);
						pSVar5 = (((long)&uStack_28 + 7)).ToString();
						piVar1 = (int)((long)&parts.name + 4);
						*piVar1 = *piVar1 + 1;
						pSVar6 = ((List<string>)&parts.invoker_method)._items;
						if (pSVar6 != null) {
							uVar3 = *(uint)&parts.name;
							if (uVar3 < (uint)pSVar6.Length) {
								*(uint)&parts.name = uVar3 + 1;
								pMVar8 = (MethodInfo)(pSVar6.m_Items + (int)uVar3);
								pSVar6[(int)uVar3] = pSVar5;
							}
							else {
								parts.AddWithResize((object)pSVar5);
							}
							pSVar5 = AottgEditCharacterDialog.GuildEffectType();
							piVar1 = (int)((long)&parts.name + 4);
							*piVar1 = *piVar1 + 1;
							pSVar6 = ((List<string>)&parts.invoker_method)._items;
							if (pSVar6 != null) {
								uVar3 = *(uint)&parts.name;
								if (uVar3 < (uint)pSVar6.Length) {
									*(uint)&parts.name = uVar3 + 1;
									pMVar8 = (MethodInfo)(pSVar6.m_Items + (int)uVar3);
									pSVar6[(int)uVar3] = pSVar5;
								}
								else {
									parts.AddWithResize((object)pSVar5);
								}
								pSVar5 = AottgEditCharacterDialog.GuildFont();
								piVar1 = (int)((long)&parts.name + 4);
								*piVar1 = *piVar1 + 1;
								pSVar6 = ((List<string>)&parts.invoker_method)._items;
								if (pSVar6 != null) {
									uVar3 = *(uint)&parts.name;
									if (uVar3 < (uint)pSVar6.Length) {
										*(uint)&parts.name = uVar3 + 1;
										pSVar6[(int)uVar3] = pSVar5;
									}
									else {
										parts.AddWithResize((object)pSVar5);
									}
									AottgEditCharacterDialog.AddEffectColors((List<string>)parts, "profile-character-guild-effect");
									pSVar6 = (String[])parts.ToArray();
									pSVar5 = String.Join("|", pSVar6);
									return pSVar5;
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60012A9")]
	[Address(RVA = "0x57E5890", Offset = "0x57E4890", VA = "0x57E5890")]
	internal static void SyncEffectsDraft(GameObject source)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SyncEffectsDraft): 1 lines keep C-only constructs
		String value;

		if ((typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		value = AottgEditCharacterDialog.EffectsDraftValue();
		GisketchFormState.SetDraft(source, "profile-character-effects-draft", value);
		return;
	}

	[Token(Token = "0x60012AA")]
	[Address(RVA = "0x57E0A70", Offset = "0x57DFA70", VA = "0x57E0A70")]
	public static bool NameEffectEnabled()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$NameEffectEnabled): 1 lines keep C-only constructs
		uint uVar1;
		bool bVar2;

		if (Il2CppMethodInitialized_0754558d == false) {
			Il2CppMethodInitialized_0754558d = true;
			uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
			bVar2 = AottgEditCharacterDialog.EffectEnabled("profile-character-name-effect");
			return bVar2;
		}
		bVar2 = AottgEditCharacterDialog.EffectEnabled("profile-character-name-effect");
		return bVar2;
	}

	[Token(Token = "0x60012AB")]
	[Address(RVA = "0x57E09F0", Offset = "0x57DF9F0", VA = "0x57E09F0")]
	public static bool GuildEffectEnabled()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$GuildEffectEnabled): 1 lines keep C-only constructs
		uint uVar1;
		bool bVar2;

		if (Il2CppMethodInitialized_0754558e == false) {
			Il2CppMethodInitialized_0754558e = true;
			uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
			bVar2 = AottgEditCharacterDialog.EffectEnabled("profile-character-guild-effect");
			return bVar2;
		}
		bVar2 = AottgEditCharacterDialog.EffectEnabled("profile-character-guild-effect");
		return bVar2;
	}

	[Token(Token = "0x60012AC")]
	[Address(RVA = "0x57E0C00", Offset = "0x57DFC00", VA = "0x57E0C00")]
	public static string NameEffectType()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$NameEffectType): 2 lines keep C-only constructs
		uint uVar1;
		bool bVar2;

		if (Il2CppMethodInitialized_0754558f == false) {
			Il2CppMethodInitialized_0754558f = true;
			uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		if (Il2CppMethodInitialized_0754558d == false) {
			Il2CppMethodInitialized_0754558d = true;
			uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgEditCharacterDialog))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		bVar2 = AottgEditCharacterDialog.EffectEnabled("profile-character-name-effect");
		if (bVar2) {
			return AottgEditCharacterDialog._nameEffectType;
		}
		return "None";
	}

	[Token(Token = "0x60012AD")]
	[Address(RVA = "0x57E0AF0", Offset = "0x57DFAF0", VA = "0x57E0AF0")]
	public static string GuildEffectType()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$GuildEffectType): 2 lines keep C-only constructs
		uint uVar1;
		bool bVar2;

		if (Il2CppMethodInitialized_07545590 == false) {
			Il2CppMethodInitialized_07545590 = true;
			uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		if (Il2CppMethodInitialized_0754558e == false) {
			Il2CppMethodInitialized_0754558e = true;
			uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgEditCharacterDialog))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		bVar2 = AottgEditCharacterDialog.EffectEnabled("profile-character-guild-effect");
		if (bVar2) {
			return AottgEditCharacterDialog._guildEffectType;
		}
		return "None";
	}

	[Token(Token = "0x60012AE")]
	[Address(RVA = "0x57DF660", Offset = "0x57DE660", VA = "0x57DF660")]
	public static string NameFont()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$NameFont): 1 lines keep C-only constructs
		bool bVar1;
		String pSVar2;

		if (Il2CppMethodInitialized_07545591 == false) {
			Il2CppMethodInitialized_07545591 = true;
			bVar1 = PatreonHelper.LocalPlayerHasNameEffectAccess();
		}
		else {
			bVar1 = PatreonHelper.LocalPlayerHasNameEffectAccess();
		}
		if (!bVar1) {
			return "Normal";
		}
		if (((typeof(AottgEditCharacterDialog))._2). cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		pSVar2 = AottgEditCharacterDialog._nameFont;
		if ((typeof(NameFontCatalog)._2).cctor_finished_or_no_cctor == 0) {
			pSVar2 = NameFontCatalog.Normalize(pSVar2);
			return pSVar2;
		}
		pSVar2 = NameFontCatalog.Normalize(pSVar2);
		return pSVar2;
	}

	[Token(Token = "0x60012AF")]
	[Address(RVA = "0x57DF710", Offset = "0x57DE710", VA = "0x57DF710")]
	public static string GuildFont()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$GuildFont): 1 lines keep C-only constructs
		bool bVar1;
		String pSVar2;

		if (Il2CppMethodInitialized_07545592 == false) {
			Il2CppMethodInitialized_07545592 = true;
			bVar1 = PatreonHelper.LocalPlayerHasNameEffectAccess();
		}
		else {
			bVar1 = PatreonHelper.LocalPlayerHasNameEffectAccess();
		}
		if (!bVar1) {
			return "Normal";
		}
		if (((typeof(AottgEditCharacterDialog))._2). cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		pSVar2 = AottgEditCharacterDialog._guildFont;
		if ((typeof(NameFontCatalog)._2).cctor_finished_or_no_cctor == 0) {
			pSVar2 = NameFontCatalog.Normalize(pSVar2);
			return pSVar2;
		}
		pSVar2 = NameFontCatalog.Normalize(pSVar2);
		return pSVar2;
	}

	[Token(Token = "0x60012B0")]
	[Address(RVA = "0x57E1B00", Offset = "0x57E0B00", VA = "0x57E1B00")]
	internal static bool EffectEnabled(string prefix)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$EffectEnabled): clean
		uint uVar1;
		bool bVar2;
		String type;
		MethodInfo method_00;

		bVar2 = PatreonHelper.LocalPlayerHasNameEffectAccess();
		if (bVar2) {
			method_00 = (MethodInfo *)"profile-character-name-effect";
			bVar2 = (prefix == "profile-character-name-effect");
			uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
			if (bVar2) {
				if (uVar1 == 0) {
				}
				bVar2 = AottgEditCharacterDialog._nameEffectEnabled;
				uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (uVar1 == 0) {
				}
				bVar2 = AottgEditCharacterDialog._guildEffectEnabled;
				uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			type = AottgEditCharacterDialog.EffectType(prefix);
			bVar2 = AottgCharacterEffectUi.IsEffect(bVar2, type);
			return bVar2;
		}
		return false;
	}

	[Token(Token = "0x60012B1")]
	[Address(RVA = "0x57E1BE0", Offset = "0x57E0BE0", VA = "0x57E1BE0")]
	internal static string EffectType(string prefix)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$EffectType): 5 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		String* ppSVar3;
		String pSVar4;
		int local_24;
		Enum local_20;

		local_24 = 0;
		bVar2 = (prefix == "profile-character-name-effect");
		uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		if (bVar2) {
			if (uVar1 == 0) {
			}
			ppSVar3 = &AottgEditCharacterDialog._nameEffectType;
		}
		else {
			if (uVar1 == 0) {
			}
			ppSVar3 = &AottgEditCharacterDialog._guildEffectType;
		}
		bVar2 = NameEffectPresets.TryResolve(*ppSVar3, ref local_24);
		if (bVar2) {
			local_20.klass = (Enum)typeof(NameEffectType);
			local_20.monitor = (IntPtr)0xffffffffffffffff;
			return pSVar4;
		}
		return "None";
	}

	[Token(Token = "0x60012B2")]
	[Address(RVA = "0x57E1CE0", Offset = "0x57E0CE0", VA = "0x57E1CE0")]
	internal static string EffectColor(string prefix, int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$EffectColor): 1 lines keep C-only constructs
		uint uVar1;
		String pSVar2;
		int local_14;

		if (Il2CppMethodInitialized_07545595 == false) {
			Il2CppMethodInitialized_07545595 = true;
			uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		pSVar2 = local_14.ToString();
		pSVar2 = String.Concat(prefix, "-color-", pSVar2);
		pSVar2 = GisketchUIColorPicker.Value(pSVar2, "#FFFFFFFF", true);
		return pSVar2;
	}

	[Token(Token = "0x60012B3")]
	[Address(RVA = "0x57E5740", Offset = "0x57E4740", VA = "0x57E5740")]
	internal static void SetEffect(string prefix, bool enabled, string type)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SetEffect): 3 lines keep C-only constructs
		uint uVar1;
		bool bVar3;
		Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_StaticFields pGVar4;
		String* targetAddress;

		bVar3 = (prefix == "profile-character-name-effect");
		uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		if (bVar3) {
			if (uVar1 == 0) {
				pGVar4 = typeof(AottgEditCharacterDialog).static_fields;
				uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
				pGVar4._nameEffectEnabled = enabled;
				if (!enabled) {
					type = "None";
				}
				if (uVar1 == 0) {
					pGVar4 = typeof(AottgEditCharacterDialog).static_fields;
				}
			}
			else {
				pGVar4 = typeof(AottgEditCharacterDialog).static_fields;
				pGVar4._nameEffectEnabled = enabled;
				if (!enabled) {
					type = "None";
				}
			}
			pGVar4._nameEffectType = type;
			targetAddress = &pGVar4._nameEffectType;
		}
		else {
			if (uVar1 == 0) {
				pGVar4 = typeof(AottgEditCharacterDialog).static_fields;
				uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
				pGVar4._guildEffectEnabled = enabled;
				if (!enabled) {
					type = "None";
				}
				if (uVar1 == 0) {
					pGVar4 = typeof(AottgEditCharacterDialog).static_fields;
				}
			}
			else {
				pGVar4 = typeof(AottgEditCharacterDialog).static_fields;
				pGVar4._guildEffectEnabled = enabled;
				if (!enabled) {
					type = "None";
				}
			}
			pGVar4._guildEffectType = type;
			targetAddress = &pGVar4._guildEffectType;
		}
		return;
	}

	[Token(Token = "0x60012B4")]
	[Address(RVA = "0x57E1A80", Offset = "0x57E0A80", VA = "0x57E1A80")]
	internal static string Font(string prefix)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$Font): 1 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		String pSVar3;

		bVar2 = (prefix == "profile-character-name-effect");
		uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		if (bVar2) {
			if (uVar1 == 0) {
				return pSVar3;
			}
			return pSVar3;
		}
		if (uVar1 == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
			return pSVar3;
		}
		return pSVar3;
	}

	[Token(Token = "0x60012B5")]
	[Address(RVA = "0x57E4060", Offset = "0x57E3060", VA = "0x57E4060")]
	internal static void SetFont(string prefix, string font)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SetFont): 3 lines keep C-only constructs
		uint uVar1;
		Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_StaticFields pGVar2;
		bool bVar3;
		String pSVar4;
		String* targetAddress;

		bVar3 = (prefix == "profile-character-name-effect");
		uVar1 = (typeof(NameFontCatalog)._2).cctor_finished_or_no_cctor;
		if (bVar3) {
			if (uVar1 == 0) {
			}
			pSVar4 = NameFontCatalog.Normalize(font);
			pGVar2 = typeof(AottgEditCharacterDialog).static_fields;
			pGVar2._nameFont = pSVar4;
			targetAddress = &pGVar2._nameFont;
		}
		else {
			if (uVar1 == 0) {
			}
			pSVar4 = NameFontCatalog.Normalize(font);
			pGVar2 = typeof(AottgEditCharacterDialog).static_fields;
			pGVar2._guildFont = pSVar4;
			targetAddress = &pGVar2._guildFont;
		}
		return;
	}

	[Token(Token = "0x60012B6")]
	[Address(RVA = "0x57F16E0", Offset = "0x57F06E0", VA = "0x57F16E0")]
	private static void RefreshPreview(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$RefreshPreview): clean


		if ((typeof(AottgCharacterNamePreview)._2).cctor_finished_or_no_cctor == 0) {
			AottgCharacterNamePreview.Refresh(context.GameObject);
			return;
		}
		AottgCharacterNamePreview.Refresh(context.GameObject);
		return;
	}

	[Token(Token = "0x60012B7")]
	[Address(RVA = "0x57F1730", Offset = "0x57F0730", VA = "0x57F1730")]
	private static void PresetGuild(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$PresetGuild): 2 lines keep C-only constructs
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c_StaticFields pGVar1;
		Action<AottgUi> __this;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		if (Il2CppMethodInitialized_0754559a == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgGuildPresetChoicePreview)) ;
			Il2CppMethodInitialized_0754559a = true;
		}
		AottgGuildPresetChoicePreview.Register();
		style = "default";
		pGVar1 = typeof(AottgEditCharacterDialog.c).static_fields;
		__this = pGVar1.__9__59_0;
		if (__this == null) {
			if ((typeof(AottgEditCharacterDialog.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgEditCharacterDialog.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c_PresetGuild_b__59_0);
			pGVar1 = typeof(AottgEditCharacterDialog.c).static_fields;
			pGVar1.__9__59_0 = __this;
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", null, "Stretch", null, null, 8.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (body == null) {
			throw new NullReferenceException();
		}
		body.Panel(style, __this, "profile-character-preset-guild-group", layout, null);
		return;
	}

	[Token(Token = "0x60012B8")]
	[Address(RVA = "0x57F1A50", Offset = "0x57F0A50", VA = "0x57F1A50")]
	private static void Badges(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$Badges): 10 lines keep C-only constructs
		AottgEditCharacterDialog.c__DisplayClass60_0 __this;
		List<AottgProfileEntitlementOption> pSVar1;
		String pSVar2;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		int local_6c;
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
		local_6c = 0;
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		local_48 = GisketchUiPerfLog.Time("Dialog.EditCharacter.Badges", "load");
		local_68._startMs = local_48._startMs;
		local_68._enabled = local_48._enabled;
		local_68._hotLoop = local_48._hotLoop;
		local_68._26_6_ = local_48._26_6_;
		local_68._area = local_48._area;
		local_68._detail = local_48._detail;
		local_48._area = null;
		local_48._detail = (String)&local_68;
		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgEditCharacterDialog.c__DisplayClass60_0));
		__this = new Object();
		pSVar1 = AottgProfileEntitlementCatalog.VisibleBadges();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.badges = pSVar1;
		pSVar1 = __this.badges;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		local_6c = pSVar1._size;
		pSVar2 = local_6c.ToString();
		pSVar2 = String.Concat("count=", pSVar2);
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		GisketchUiPerfLog.Mark("Dialog.EditCharacter.Badges", pSVar2);
		__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c__DisplayClass60_0_Badges_b__0);
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", null, "Stretch", null, null, 8.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (body == null) {
			throw new NullReferenceException();
		}
		body.Panel("default", __this_00, "profile-character-badges-group", layout, null);
		local_68.Dispose();
		return;
	}

	[Token(Token = "0x60012B9")]
	[Address(RVA = "0x57E12E0", Offset = "0x57E02E0", VA = "0x57E12E0")]
	public static string ColorInputId(string prefix, int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$ColorInputId): clean
		String pSVar1;
		int local_c;

		local_c = index;
		pSVar1 = local_c.ToString();
		pSVar1 = String.Concat(prefix, "-color-", pSVar1);
		return pSVar1;
	}

	[Token(Token = "0x60012BA")]
	[Address(RVA = "0x57EFD80", Offset = "0x57EED80", VA = "0x57EFD80")]
	private static void InitializeSelection(JSONNode info)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$InitializeSelection): 29 lines keep C-only constructs
		uint uVar1;
		Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_StaticFields pGVar2;
		HashSet<object> pSVar3;
		Il2CppClass pIVar4;
		Il2CppRuntimeInterfaceOffsetPair pIVar5;
		HashSet<string> pSVar6;
		bool bVar7;
		sbyte cVar8;
		String pSVar9;
		JSONNode pSVar10;
		JSONArray pSVar11;
		object pIVar12;
		VirtualInvokeData pVVar13;
		ulong uVar14;
		long lVar15;
		bool local_99;
		object local_98;
		int local_8c;
		object* local_80;
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
		local_98 = null;
		local_8c = 0;
		local_99 = (info != null);
		pSVar9 = local_99.ToString();
		pSVar9 = String.Concat("info=", pSVar9);
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		local_50 = GisketchUiPerfLog.Time("Dialog.EditCharacter.InitializeSelection", pSVar9);
		local_78._startMs = local_50._startMs;
		local_78._enabled = local_50._enabled;
		local_78._hotLoop = local_50._hotLoop;
		local_78._26_6_ = local_50._26_6_;
		local_78._area = local_50._area;
		local_78._detail = local_50._detail;
		local_50._area = null;
		local_50._detail = (String)&local_78;
		if (info == null) {
			throw new NullReferenceException();
		}
		pSVar10 = info.get_Item("guildPresetId");
		bVar7 = (pSVar10 != null);
		if (bVar7) {
			pSVar10 = info.get_Item("guildPresetId");
			if (pSVar10 == null) {
				throw new NullReferenceException();
			}
			pSVar9 = pSVar10.get_Value();
			uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		else {
			pSVar9 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		AottgEditCharacterDialog._selectedGuildPresetId = pSVar9;
		Il2CppCodeGenWriteBarrier(&AottgEditCharacterDialog._selectedGuildPresetId) ;
		bVar7 = String.IsNullOrEmpty(AottgEditCharacterDialog. _selectedGuildPresetId);
		if (bVar7) {
			pSVar10 = info.get_Item("guild");
			bVar7 = (pSVar10 != null);
			if (bVar7) {
				pSVar10 = info.get_Item("guild");
				if (pSVar10 == null) {
					throw new NullReferenceException();
				}
				pSVar9 = pSVar10.get_Value();
				uVar1 = (typeof(AottgCharacterTextField)._2).cctor_finished_or_no_cctor;
			}
			else {
				pSVar9 = (String)**(long*)(g_data_07556758 + 0xb8);
				uVar1 = (typeof(AottgCharacterTextField)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			if (pSVar9 == null) {
				pSVar9 = (String)**(ulong*)(g_data_07556758 + 0xb8);
				uVar1 = (typeof(MiscExtensions)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(MiscExtensions)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			pSVar9 = MiscExtensions.StripRichText(pSVar9);
			pSVar9 = MiscExtensions.StripHex(pSVar9);
			bVar7 = String.IsNullOrWhiteSpace(pSVar9);
			uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		else {
			bVar7 = false;
			uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		AottgEditCharacterDialog._noGuildSelected = bVar7;
		pSVar10 = info.get_Item("nameEffect");
		bVar7 = (pSVar10 != null);
		if (bVar7) {
			pSVar10 = info.get_Item("nameEffect");
			if (pSVar10 == null) {
				throw new NullReferenceException();
			}
			pSVar10 = pSVar10.get_Item("enabled");
			if (pSVar10 == null) {
				throw new NullReferenceException();
			}
			bVar7 = pSVar10.get_AsBool();
			uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		else {
			bVar7 = false;
			uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		AottgEditCharacterDialog._nameEffectEnabled = bVar7;
		pSVar10 = info.get_Item("guildEffect");
		bVar7 = (pSVar10 != null);
		if (bVar7) {
			pSVar10 = info.get_Item("guildEffect");
			if (pSVar10 == null) {
				throw new NullReferenceException();
			}
			pSVar10 = pSVar10.get_Item("enabled");
			if (pSVar10 == null) {
				throw new NullReferenceException();
			}
			bVar7 = pSVar10.get_AsBool();
			uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		else {
			bVar7 = false;
			uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		AottgEditCharacterDialog._guildEffectEnabled = bVar7;
		pSVar10 = info.get_Item("nameEffect");
		bVar7 = (pSVar10 != null);
		if (bVar7) {
			pSVar10 = info.get_Item("nameEffect");
			if (pSVar10 == null) {
				throw new NullReferenceException();
			}
			pSVar10 = pSVar10.get_Item("type");
			bVar7 = (pSVar10 != null);
			if (!bVar7) goto label_058f052a;
			pSVar10 = info.get_Item("nameEffect");
			if (pSVar10 == null) {
				throw new NullReferenceException();
			}
			pSVar10 = pSVar10.get_Item("type");
			if (pSVar10 == null) {
				throw new NullReferenceException();
			}
			pSVar9 = pSVar10.get_Value();
			uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		else {
	label_058f052a: ;
			uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
			pSVar9 = "None";
		}
		if (uVar1 == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		pGVar2 = typeof(AottgEditCharacterDialog).static_fields;
		pGVar2._nameEffectType = pSVar9;
		pSVar10 = info.get_Item("guildEffect");
		bVar7 = (pSVar10 != null);
		if (bVar7) {
			pSVar10 = info.get_Item("guildEffect");
			if (pSVar10 == null) {
				throw new NullReferenceException();
			}
			pSVar10 = pSVar10.get_Item("type");
			bVar7 = (pSVar10 != null);
			if (!bVar7) goto label_058f0675;
			pSVar10 = info.get_Item("guildEffect");
			if (pSVar10 == null) {
				throw new NullReferenceException();
			}
			pSVar10 = pSVar10.get_Item("type");
			if (pSVar10 == null) {
				throw new NullReferenceException();
			}
			pSVar9 = pSVar10.get_Value();
			uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		else {
	label_058f0675: ;
			uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
			pSVar9 = "None";
		}
		if (uVar1 == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		pGVar2 = typeof(AottgEditCharacterDialog).static_fields;
		pGVar2._guildEffectType = pSVar9;
		pSVar10 = info.get_Item("nameFont");
		bVar7 = (pSVar10 != null);
		if (bVar7) {
			pSVar10 = info.get_Item("nameFont");
			if (pSVar10 == null) {
				throw new NullReferenceException();
			}
			pSVar9 = pSVar10.get_Value();
			uVar1 = (typeof(NameFontCatalog)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(NameFontCatalog)._2).cctor_finished_or_no_cctor;
			pSVar9 = "Normal";
		}
		if (uVar1 == 0) {
		}
		pSVar9 = NameFontCatalog.Normalize(pSVar9);
		if ((typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		pGVar2 = typeof(AottgEditCharacterDialog).static_fields;
		pGVar2._nameFont = pSVar9;
		pSVar10 = info.get_Item("guildFont");
		bVar7 = (pSVar10 != null);
		if (bVar7) {
			pSVar10 = info.get_Item("guildFont");
			if (pSVar10 == null) {
				throw new NullReferenceException();
			}
			pSVar9 = pSVar10.get_Value();
			uVar1 = (typeof(NameFontCatalog)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(NameFontCatalog)._2).cctor_finished_or_no_cctor;
			pSVar9 = "Normal";
		}
		if (uVar1 == 0) {
		}
		pSVar9 = NameFontCatalog.Normalize(pSVar9);
		if ((typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		pGVar2 = typeof(AottgEditCharacterDialog).static_fields;
		pGVar2._guildFont = pSVar9;
		pSVar10 = info.get_Item("nameEffect");
		AottgEditCharacterDialog.RegisterEffectColors("profile-character-name-effect", pSVar10);
		pSVar10 = info.get_Item("guildEffect");
		AottgEditCharacterDialog.RegisterEffectColors("profile-character-guild-effect", pSVar10);
		pSVar3 = (HashSet<object>)AottgEditCharacterDialog.SelectedBadges;
		if (pSVar3 == null) {
			throw new NullReferenceException();
		}
		pSVar3.Clear();
		pSVar10 = info.get_Item("badges");
		bVar7 = (pSVar10 == null);
		if (!bVar7) {
			pSVar11 = AottgProfileEntitlementCatalog.AllowedBadges(pSVar10);
			if (pSVar11 == null) {
				throw new NullReferenceException();
			}
			pIVar12 = (object)pSVar11.get_Children();
			if (pIVar12 == null) {
				throw new NullReferenceException();
			}
			pIVar4 = pIVar12.klass;
			uVar14 = (ulong)(pIVar4._2).interface_offsets_count;
			local_98 = pIVar12.Dispose();
			local_80 = &local_98;
			do {
				if (local_98 == null) {
					throw new NullReferenceException();
				}
				pIVar4 = local_98.klass;
				uVar14 = (ulong)(pIVar4._2).interface_offsets_count;
				cVar8 = (*pVVar13.methodPtr)();
				pIVar12 = local_98;
				if (cVar8 == false) {
					if (local_98 == null) goto label_058f0c16;
					pIVar4 = local_98.klass;
					uVar14 = (ulong)(pIVar4._2).interface_offsets_count;
					if (uVar14 == 0) goto label_058f0bef;
					pIVar5 = (pIVar4._1).interfaceOffsets;
					lVar15 = 0;
					goto label_058f0be0;
				}
				if (local_98 == null) {
					throw new NullReferenceException();
				}
				pIVar4 = local_98.klass;
				uVar14 = (ulong)(pIVar4._2).interface_offsets_count;
				pIVar12 = pIVar12.Dispose();
				if (pIVar12 == null) {
					throw new NullReferenceException();
				}
				pSVar9 = (String)(*pIVar12.klass.vtable[9].methodPtr)(pIVar12);
				bVar7 = String.IsNullOrWhiteSpace(pSVar9);
				if (!bVar7) {
					pSVar3 = (HashSet<object>)AottgEditCharacterDialog.SelectedBadges;
					pIVar12 = (object)(*pIVar12.klass.vtable[9].methodPtr)(pIVar12,pIVar12.klass.vtable[9].method);
					if (pSVar3 == null) {
						throw new NullReferenceException();
					}
					pSVar3.Add(pIVar12);
				}
			} while(true);
		}
	label_058f0cc5: ;
		local_78.Dispose();
		return;
		while (true) {
			lVar15 = lVar15 + 0x10;
			if (!(uVar14 * 0x10 != lVar15)) break;
	label_058f0be0: ;
			if (*(IDisposable*)((long)&pIVar5.interfaceType + lVar15) == typeof(IDisposable)) {
				pVVar13 = (VirtualInvokeData)&pIVar4.vtable[*(int)((long)&pIVar5.offset + lVar15)].methodPtr;
				goto label_058f0c0d;
			}
		}
	label_058f0bef: ;
	label_058f0c0d: ;
		pIVar12.Dispose();
	label_058f0c16: ;
		if ((typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		pSVar6 = AottgEditCharacterDialog.SelectedBadges;
		if (pSVar6 == null) {
			throw new NullReferenceException();
		}
		local_8c = pSVar6._count;
		pSVar9 = local_8c.ToString();
		pSVar9 = String.Concat("badges=", pSVar9, " presetGuild=", AottgEditCharacterDialog. _selectedGuildPresetId);
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		GisketchUiPerfLog.Mark("Dialog.EditCharacter.InitializeSelection", pSVar9);
		goto label_058f0cc5;
	}

	[Token(Token = "0x60012BB")]
	[Address(RVA = "0x57F2120", Offset = "0x57F1120", VA = "0x57F2120")]
	private static void SelectPresetGuild(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SelectPresetGuild): 7 lines keep C-only constructs
		sbyte cVar1;
		uint uVar2;
		GisketchUIState __this;
		bool bVar3;
		String* ppSVar4;
		Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_StaticFields pGVar5;
		MethodInfo key;
		GisketchUIRoot pGVar6;
		MethodInfo method_00;
		String pSVar7;

		if (context.Node == null) {
			ppSVar4 = *(String**)(g_data_07556758 + 0xb8);
		}
		else {
			ppSVar4 = &((context.Node).fields).value;
		}
		pSVar7 = *ppSVar4;
		bVar3 = (pSVar7 == "__none");
		if ((typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
			AottgEditCharacterDialog._noGuildSelected = bVar3;
		}
		else {
			AottgEditCharacterDialog._noGuildSelected = bVar3;
		}
		if (context.Node != null) {
			bVar3 = String.IsNullOrEmpty(pSVar7);
			if (((!bVar3) &&(bVar3 = (pSVar7 == "__none"), !bVar3)) &&(bVar3 = (pSVar7 == "Custom"), !bVar3)) goto label_058f2272;
		}
		pSVar7 = (String)**(ulong*)(g_data_07556758 + 0xb8);
	label_058f2272: ;
		if ((typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		AottgEditCharacterDialog._selectedGuildPresetId = pSVar7;
		Il2CppCodeGenWriteBarrier(&AottgEditCharacterDialog._selectedGuildPresetId) ;
		if (Il2CppMethodInitialized_075455a4 == false) {
			Il2CppMethodInitialized_075455a4 = true;
			uVar2 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
			pGVar5 = typeof(AottgEditCharacterDialog).static_fields;
			cVar1 = pGVar5._noGuildSelected;
		}
		else {
			pGVar5 = (typeof(AottgEditCharacterDialog)).static_fields;
			cVar1 = pGVar5._noGuildSelected;
		}
		if (cVar1 == false) {
			if (((typeof(AottgEditCharacterDialog))._2). cctor_finished_or_no_cctor == 0) {
				pGVar5 = typeof(AottgEditCharacterDialog).static_fields;
			}
			bVar3 = String.IsNullOrEmpty(pGVar5._selectedGuildPresetId);
		}
		else {
			bVar3 = false;
		}
		AottgCharacterTextField.SetFieldVisible(context.GameObject, "profile-character-guild", bVar3);
		pSVar7 = "profile-character-guild";
		method_00 = (MethodInfo *)".enabled";
		key = (MethodInfo)String.Concat(pSVar7, ".enabled");
		if (((context.GameObject != null) &&(method_00 = MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot, pGVar6 = context.GameObject.GetComponentInParent<GisketchUIRoot>(), pGVar6 != null)) &&(__this = pGVar6._State_k__BackingField, __this != null)) {
			__this.SetBool((String)key, bVar3);
			method_00 = key;
		}
		AottgCharacterNamePreview.Refresh(context.GameObject);
		return;
	}

	[Token(Token = "0x60012BC")]
	[Address(RVA = "0x57F25D0", Offset = "0x57F15D0", VA = "0x57F25D0")]
	private static void ToggleBadge(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$ToggleBadge): 5 lines keep C-only constructs
		uint uVar1;
		HashSet<object> pSVar2;
		bool bVar3;
		String pSVar4;
		MethodInfo method_00;
		Il2CppClass klass;

		if ((context.Node != null) &&(bVar3 = String.IsNullOrEmpty(((context.Node).fields).id), !bVar3)) {
			pSVar4 = ((context.Node).fields).id;
			if (pSVar4 == null) goto label_058f27e5;
			bVar3 = pSVar4.StartsWith("profile-character-badge-");
			if (bVar3) {
				if (("profile-character-badge-" == null) ||(pSVar4 = ((context.Node).fields).id, pSVar4 == null)) goto label_058f27e5;
				pSVar4 = pSVar4.Substring(("profile-character-badge-".fields)._stringLength);
			}
			else {
				pSVar4 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			bVar3 = String.IsNullOrEmpty(pSVar4);
			if (!bVar3) {
				bVar3 = (((context.Node).fields).value == "true");
				uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
				if (bVar3) {
					if (uVar1 == 0) {
					}
					pSVar2 = (HashSet<object>)AottgEditCharacterDialog.SelectedBadges;
					if (pSVar2 == null) {
	label_058f27e5: ;
						throw new NullReferenceException();
					}
					pSVar2.Add((object)pSVar4);
					uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
					klass = typeof(AottgEditCharacterDialog);
				}
				else {
					if (uVar1 == 0) {
					}
					pSVar2 = (HashSet<object>)AottgEditCharacterDialog.SelectedBadges;
					if (pSVar2 == null) goto label_058f27e5;
					pSVar2.Remove((object)pSVar4);
					uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
					klass = typeof(AottgEditCharacterDialog);
				}
				typeof(AottgEditCharacterDialog) =(AottgEditCharacterDialog)klass;
				if (uVar1 == 0) {
				}
				pSVar4 = AottgEditCharacterDialog.BadgesDraftValue();
				method_00 = (MethodInfo *)"profile-character-badges-draft";
				GisketchFormState.SetDraft(context.GameObject, "profile-character-badges-draft", pSVar4);
				if (Il2CppMethodInitialized_07545599 == false) {
					il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgCharacterNamePreview)) ;
					Il2CppMethodInitialized_07545599 = true;
				}
				AottgCharacterNamePreview.Refresh(context.GameObject);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60012BD")]
	[Address(RVA = "0x57F2560", Offset = "0x57F1560", VA = "0x57F2560")]
	private static void SetState(GisketchActionContext context, string key, bool value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SetState): clean
		GisketchUIState __this;
		GisketchUIRoot pGVar1;

		if (context.GameObject != null) {
			pGVar1 = context.GameObject.GetComponentInParent<GisketchUIRoot>();
			if ((pGVar1 != null) &&(__this = pGVar1._State_k__BackingField, __this != null)) {
				__this.SetBool(key, value);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60012BE")]
	[Address(RVA = "0x57F27F0", Offset = "0x57F17F0", VA = "0x57F27F0")]
	private static string SelectedPresetGuildValue()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$SelectedPresetGuildValue): 3 lines keep C-only constructs
		sbyte cVar1;
		uint uVar2;
		bool bVar3;
		Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_StaticFields pGVar4;

		if (Il2CppMethodInitialized_075455a1 == false) {
			Il2CppMethodInitialized_075455a1 = true;
			uVar2 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
			pGVar4 = typeof(AottgEditCharacterDialog).static_fields;
			cVar1 = pGVar4._noGuildSelected;
		}
		else {
			pGVar4 = (typeof(AottgEditCharacterDialog)).static_fields;
			cVar1 = pGVar4._noGuildSelected;
		}
		if (cVar1 != false) {
			return "__none";
		}
		if (((typeof(AottgEditCharacterDialog))._2). cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
			pGVar4 = typeof(AottgEditCharacterDialog).static_fields;
		}
		bVar3 = String.IsNullOrEmpty(pGVar4._selectedGuildPresetId);
		if (bVar3) {
			return "Custom";
		}
		if ((typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
			return AottgEditCharacterDialog._selectedGuildPresetId;
		}
		return AottgEditCharacterDialog._selectedGuildPresetId;
	}

	[Token(Token = "0x60012BF")]
	[Address(RVA = "0x57F28E0", Offset = "0x57F18E0", VA = "0x57F28E0")]
	private static GisketchChoiceOptionDefinition[] PresetGuildOptions()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$PresetGuildOptions): 27 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		String SVar4;
		byte bVar5;
		ulong uVar6;
		bool bVar7;
		List<GisketchChoiceOptionDefinition> __this;
		GisketchChoiceOptionDefinition pGVar8;
		String pSVar9;
		List<AottgProfileEntitlementOption> __this_00;
		GisketchChoiceOptionDefinition[] pGVar10;
		int[] local_cc = new int[3];
		String local_b8;
		String pSStack_a0;
		ulong uStack_90;
		byte[] local_88 = new byte[32];
		ulong uStack_60;
		byte[] local_58 = new byte[24];
		ulong uStack_40;

		local_58._16_8_ = 0;
		uStack_40._0_1_ = false;
		uStack_40._1_1_ = false;
		uStack_40._2_6_ = 0;
		local_58._0_8_ = null;
		local_58._8_8_ = null;
		uStack_90 = 0;
		local_b8._stringLength = 0;
		local_b8._firstChar = 0;
		local_b8._6_2_ = 0;
		pSStack_a0 = null;
		local_b8.klass = null;
		local_b8.monitor = null;
		local_cc[0] = 0;
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		GisketchUiPerfLog.Time((GisketchUiPerfLog.Scope)local_88, "Dialog.EditCharacter.PresetGuildOptions", "load");
		local_58._16_8_ = local_88._16_8_;
		uStack_40 = (String)local_88._24_8_;
		local_58._0_8_ = local_88._0_8_;
		local_58._8_8_ = local_88._8_8_;
		local_cc[1] = 0;
		local_cc[2] = 0;
		__this = new List<GisketchChoiceOptionDefinition>();
		pGVar8 = new GisketchChoiceOptionDefinition();
		if (pGVar8 == null) {
			throw new NullReferenceException();
		}
		pGVar8.value = "__none";
		pSVar9 = Aottg2GisketchLocale.Text("Common.None");
		pGVar8.text = pSVar9;
		pGVar8.textKey = "Common.None";
		if (__this != null) {
			piVar1 = &__this._version;
			*piVar1 = *piVar1 + 1;
			pGVar10 = __this._items;
			if (pGVar10 != null) {
				uVar2 = __this._size;
				if (uVar2 < (uint)pGVar10.Length) {
					__this._size = uVar2 + 1;
					pGVar10[(int)uVar2] = pGVar8;
				}
				else {
					__this.AddWithResize((object)pGVar8);
				}
				pGVar8 = new GisketchChoiceOptionDefinition();
				if (pGVar8 == null) {
					throw new NullReferenceException();
				}
				pGVar8.value = "Custom";
				pSVar9 = Aottg2GisketchLocale.Text("MainMenu.Profile.CustomGuild");
				pGVar8.text = pSVar9;
				pGVar8.textKey = "MainMenu.Profile.CustomGuild";
				piVar1 = &__this._version;
				*piVar1 = *piVar1 + 1;
				pGVar10 = __this._items;
				if (pGVar10 == null) {
					throw new NullReferenceException();
				}
				uVar2 = __this._size;
				if (uVar2 < (uint)pGVar10.Length) {
					__this._size = uVar2 + 1;
					pGVar10[(int)uVar2] = pGVar8;
				}
				else {
					__this.AddWithResize((object)pGVar8);
				}
				__this_00 = AottgProfileEntitlementCatalog.VisiblePresetGuilds();
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				local_88.GetEnumerator(__this_00);
				uStack_90 = uStack_60;
				local_b8._stringLength = local_88._16_4_;
				local_b8._firstChar = local_88._20_2_;
				local_b8._6_2_ = local_88._22_2_;
				pSStack_a0 = (String)local_88._24_8_;
				local_b8.klass = (String)local_88._0_8_;
				local_b8.monitor = (IntPtr)local_88._8_8_;
				local_88._0_8_ = null;
				local_88._8_8_ = &local_b8;
				while(true) {
					bVar7 = local_b8.MoveNext();
					uVar6 = uStack_90;
					pSVar9 = pSStack_a0;
					SVar4 = local_b8;
					if (!bVar7) {
						local_b8.Dispose();
						pGVar10 = (GisketchChoiceOptionDefinition[])__this.ToArray();
						if (pGVar10 == null) {
							throw new NullReferenceException();
						}
						local_cc[0] = (int32_t)pGVar10.Length;
						pSVar9 = local_cc.ToString();
						pSVar9 = String.Concat("count=", pSVar9);
						GisketchUiPerfLog.Mark("Dialog.EditCharacter.PresetGuildOptions", pSVar9);
						local_58.Dispose();
						return pGVar10;
					}
					bVar5 = (byte)uStack_90;
					pGVar8 = new GisketchChoiceOptionDefinition();
					if (pGVar8 == null) break;
					pGVar8.value = (String)SVar4;
					pGVar8.text = pSVar9;
					pGVar8.enabled = (bool)(bVar5 & 1);
					if ((uVar6 & 1) == 0) {
						pSVar9 = "MainMenu.Profile.SupporterOnlyFeature";
					}
					else {
						pSVar9 = null;
					}
					pGVar8.tooltipKey = pSVar9;
					piVar1 = &__this._version;
					*piVar1 = *piVar1 + 1;
					pGVar10 = __this._items;
					if (pGVar10 == null) {
						throw new NullReferenceException();
					}
					uVar2 = __this._size;
					if (uVar2 < (uint)pGVar10.Length) {
						__this._size = uVar2 + 1;
						pGVar10[(int)uVar2] = pGVar8;
					}
					else {
						__this.AddWithResize((object)pGVar8);
					}
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60012C0")]
	[Address(RVA = "0x57F2430", Offset = "0x57F1430", VA = "0x57F2430")]
	private static string PresetGuildId(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$PresetGuildId): clean
		bool bVar1;

		bVar1 = String.IsNullOrEmpty(value);
		if (((bVar1) || (bVar1 = (value == "__none"))) || (bVar1 = (value == "Custom"))) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		return value;
	}

	[Token(Token = "0x60012C1")]
	[Address(RVA = "0x57F24C0", Offset = "0x57F14C0", VA = "0x57F24C0")]
	private static bool CustomGuildSelected()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$CustomGuildSelected): 2 lines keep C-only constructs
		sbyte cVar1;
		uint uVar2;
		Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_StaticFields pGVar3;
		bool bVar4;

		if (Il2CppMethodInitialized_075455a4 == false) {
			Il2CppMethodInitialized_075455a4 = true;
			uVar2 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
			pGVar3 = typeof(AottgEditCharacterDialog).static_fields;
			cVar1 = pGVar3._noGuildSelected;
		}
		else {
			pGVar3 = (typeof(AottgEditCharacterDialog)).static_fields;
			cVar1 = pGVar3._noGuildSelected;
		}
		if (cVar1 != false) {
			return false;
		}
		if (((typeof(AottgEditCharacterDialog))._2). cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
			bVar4 = String.IsNullOrEmpty(AottgEditCharacterDialog. _selectedGuildPresetId);
			return bVar4;
		}
		return bVar4;
	}

	[Token(Token = "0x60012C2")]
	[Address(RVA = "0x57F2F90", Offset = "0x57F1F90", VA = "0x57F2F90")]
	private static GisketchLayoutDefinition ChoiceRowLayout()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$ChoiceRowLayout): clean
		GisketchLength width;
		GisketchLayoutDefinition pGVar1;

		width = AottgUi.Percent(100.0);
		pGVar1 = AottgUi.Layout("Row", null, "Center", null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		return pGVar1;
	}

	[Token(Token = "0x60012C3")]
	[Address(RVA = "0x57F0E80", Offset = "0x57EFE80", VA = "0x57F0E80")]
	private static string BadgesDraftValue()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$BadgesDraftValue): 2 lines keep C-only constructs
		uint uVar1;
		String[] pSVar2;
		List<string> __this;
		String pSVar3;

		if (Il2CppMethodInitialized_075455a6 == false) {
			Il2CppMethodInitialized_075455a6 = true;
			uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		if (Il2CppMethodInitialized_0754558a == false) {
			Il2CppMethodInitialized_0754558a = true;
			uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgEditCharacterDialog))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		pSVar2 = AottgProfileEntitlementCatalog.OrderedBadgeIds((IEnumerable<string>)AottgEditCharacterDialog.SelectedBadges);
		__this = new List<string>((IEnumerable<T>)pSVar2);
		if (__this == null) {
			throw new NullReferenceException();
		}
		pSVar2 = (String[])__this.ToArray();
		pSVar3 = String.Join("|", pSVar2);
		return pSVar3;
	}

	[Token(Token = "0x60012C4")]
	[Address(RVA = "0x57F1470", Offset = "0x57F0470", VA = "0x57F1470")]
	private static void AddEffectColors(List<string> parts, string prefix)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$AddEffectColors): 9 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		String[] pSVar4;
		String pSVar5;

		uVar2 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		if (parts == null) {
			if (uVar2 == 0) {
			}
			AottgEditCharacterDialog.EffectColor(prefix, 0);
			throw new NullReferenceException();
		}
		if (uVar2 == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		pSVar5 = AottgEditCharacterDialog.EffectColor(prefix, 0);
		piVar1 = &parts._version;
		*piVar1 = *piVar1 + 1;
		pSVar4 = parts._items;
		if (pSVar4 != null) {
			uVar3 = parts._size;
			if (uVar3 < (uint)pSVar4.Length) {
				parts._size = uVar3 + 1;
				pSVar4[(int)uVar3] = pSVar5;
				uVar2 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
			}
			else {
				parts.AddWithResize((object)pSVar5);
				uVar2 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
			}
			pSVar5 = AottgEditCharacterDialog.EffectColor(prefix, 1);
			piVar1 = &parts._version;
			*piVar1 = *piVar1 + 1;
			pSVar4 = parts._items;
			if (pSVar4 != null) {
				uVar3 = parts._size;
				if (uVar3 < (uint)pSVar4.Length) {
					parts._size = uVar3 + 1;
					pSVar4[(int)uVar3] = pSVar5;
					uVar2 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
				}
				else {
					parts.AddWithResize((object)pSVar5);
					uVar2 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
				}
				pSVar5 = AottgEditCharacterDialog.EffectColor(prefix, 2);
				piVar1 = &parts._version;
				*piVar1 = *piVar1 + 1;
				pSVar4 = parts._items;
				if (pSVar4 != null) {
					uVar3 = parts._size;
					if (uVar3 < (uint)pSVar4.Length) {
						parts._size = uVar3 + 1;
						pSVar4[(int)uVar3] = pSVar5;
						uVar2 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
					}
					else {
						parts.AddWithResize((object)pSVar5);
						uVar2 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
					}
					if (uVar2 == 0) {
					}
					pSVar5 = AottgEditCharacterDialog.EffectColor(prefix, 3);
					piVar1 = &parts._version;
					*piVar1 = *piVar1 + 1;
					pSVar4 = parts._items;
					if (pSVar4 != null) {
						uVar3 = parts._size;
						if (uVar3 < (uint)pSVar4.Length) {
							parts._size = uVar3 + 1;
							pSVar4[(int)uVar3] = pSVar5;
							return;
						}
						parts.AddWithResize((object)pSVar5);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60012C5")]
	[Address(RVA = "0x57F1DB0", Offset = "0x57F0DB0", VA = "0x57F1DB0")]
	private static void RegisterEffectColors(string prefix, JSONNode effect)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$RegisterEffectColors): 4 lines keep C-only constructs
		uint uVar1;
		String pSVar2;
		String pSVar3;
		int local_34;

		if (Il2CppMethodInitialized_075455a8 == false) {
			Il2CppMethodInitialized_075455a8 = true;
			uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		local_34 = 0;
		if (Il2CppMethodInitialized_0754559c == false) {
			local_34 = 0;
			Il2CppMethodInitialized_0754559c = true;
		}
		pSVar2 = local_34.ToString();
		pSVar2 = String.Concat(prefix, "-color-", pSVar2);
		pSVar3 = AottgEditCharacterDialog.ColorValue(effect, 0);
		GisketchUIColorPicker.Register(pSVar2, pSVar3, null, true, false, false);
		if ((typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		local_34 = 1;
		if (Il2CppMethodInitialized_0754559c == false) {
			local_34 = 1;
			Il2CppMethodInitialized_0754559c = true;
		}
		pSVar2 = local_34.ToString();
		pSVar2 = String.Concat(prefix, "-color-", pSVar2);
		pSVar3 = AottgEditCharacterDialog.ColorValue(effect, 1);
		GisketchUIColorPicker.Register(pSVar2, pSVar3, null, true, false, false);
		if ((typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		local_34 = 2;
		if (Il2CppMethodInitialized_0754559c == false) {
			local_34 = 2;
			Il2CppMethodInitialized_0754559c = true;
		}
		pSVar2 = local_34.ToString();
		pSVar2 = String.Concat(prefix, "-color-", pSVar2);
		pSVar3 = AottgEditCharacterDialog.ColorValue(effect, 2);
		GisketchUIColorPicker.Register(pSVar2, pSVar3, null, true, false, false);
		if ((typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		local_34 = 3;
		if (Il2CppMethodInitialized_0754559c == false) {
			local_34 = 3;
			Il2CppMethodInitialized_0754559c = true;
		}
		pSVar2 = local_34.ToString();
		pSVar2 = String.Concat(prefix, "-color-", pSVar2);
		pSVar3 = AottgEditCharacterDialog.ColorValue(effect, 3);
		GisketchUIColorPicker.Register(pSVar2, pSVar3, null, true, false, false);
		return;
	}

	[Token(Token = "0x60012C6")]
	[Address(RVA = "0x57F3050", Offset = "0x57F2050", VA = "0x57F3050")]
	private static string ColorValue(JSONNode effect, int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$ColorValue): clean
		bool bVar1;
		JSONNode pSVar2;
		JSONNode a;
		String pSVar3;

		pSVar2 = null;
		bVar1 = (effect != null);
		if (bVar1) {
			if (effect == null) goto label_058f3199;
			pSVar2 = effect.get_Item("colors");
		}
		bVar1 = (pSVar2 != null);
		if (!bVar1) {
			return "#FFFFFFFF";
		}
		if (pSVar2 != null) {
			a = pSVar2.get_Item(index);
			bVar1 = (a != null);
			if (!bVar1) {
				return "#FFFFFFFF";
			}
			pSVar2 = pSVar2.get_Item(index);
			if (pSVar2 != null) {
				return pSVar3;
			}
		}
	label_058f3199: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60012C7")]
	[Address(RVA = "0x57F31A0", Offset = "0x57F21A0", VA = "0x57F31A0")]
	public AottgEditCharacterDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c (Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEditCharacterDialog.c.

	// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c__DisplayClass39_0$$.ctor: clean
	private void c__DisplayClass39_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c__DisplayClass60_0$$.ctor: clean
	private void c__DisplayClass60_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog$$.cctor: clean
	static AottgEditCharacterDialog()
	{
		Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_StaticFields pGVar1;
		HashSet<string> __this;

		pGVar1 = typeof(AottgEditCharacterDialog).static_fields;
		pGVar1._nameEffectType = "None";
		pGVar1 = typeof(AottgEditCharacterDialog).static_fields;
		pGVar1._guildEffectType = "None";
		pGVar1 = typeof(AottgEditCharacterDialog).static_fields;
		pGVar1._nameFont = "Normal";
		pGVar1 = typeof(AottgEditCharacterDialog).static_fields;
		pGVar1._guildFont = "Normal";
		__this = new HashSet<string>();
		pGVar1 = typeof(AottgEditCharacterDialog).static_fields;
		pGVar1.SelectedBadges = __this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgEditCharacterDialog.c();
		AottgEditCharacterDialog.c.__9 =(AottgEditCharacterDialog.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c$$<BuildBody>b__39_2: clean
	private void c__BuildBody_b__39_2(AottgUi footer)
	{
		GisketchNodeDefinition pGVar1;
		GisketchUIBindingDefinition __this_00;

		if (footer != null) {
			footer.ButtonKey(3, "Common.Cancel", "overlay.close", null, null, null, null);
			pGVar1 = footer.ButtonKey(0, "Common.Save", "profile.save.character", null, null, null, null);
			__this_00 = new GisketchUIBindingDefinition();
			if (__this_00 != null) {
				__this_00.enabled = "profile.save.idle";
				if (pGVar1 != null) {
					pGVar1.bind = __this_00;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c$$<PresetGuild>b__59_0: 5 lines keep C-only constructs
	private void c__PresetGuild_b__59_0(AottgUi group)
	{
		String value;
		GisketchChoiceOptionDefinition[] options;
		Action<GisketchActionContext> __this_00;
		GisketchNodeDefinition pGVar1;
		GisketchLayoutDefinition pGVar2;
		MethodInfo method_01;
		String* method_02;

		if (Il2CppMethodInitialized_075455ad == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgGuildPresetChoicePreview)) ;
			Il2CppMethodInitialized_075455ad = true;
		}
		if ((typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		value = AottgEditCharacterDialog.SelectedPresetGuildValue();
		options = AottgEditCharacterDialog.PresetGuildOptions();
		__this_00 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_SelectPresetGuild);
		if (group != null) {
			pGVar1 = group.FormSelect("profile-character-preset-guild", "Guild Preset", value, options, __this_00, null, 6, null);
			if (g_data_075455d0 == false) {
				method_02 = &"profile-character-guild-preset-preview";
				g_data_075455d0 = true;
			}
			if (pGVar1 != null) {
				method_01 = (MethodInfo)&pGVar1.choiceOptionRenderer;
				pGVar1.choiceOptionRenderer = "profile-character-guild-preset-preview";
				pGVar2 = AottgEditCharacterDialog.ChoiceRowLayout();
				pGVar1.layout = pGVar2;
				return;
			}
			AottgEditCharacterDialog.ChoiceRowLayout();
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c__DisplayClass39_0$$<BuildBody>b__0: 3 lines keep C-only constructs
	private void c__DisplayClass39_0__BuildBody_b__0(AottgUi panel)
	{
		AottgEditCharacterDialog pGVar1;
		object @object;
		String pSVar2;
		String icon;
		AottgDialogHeader __this_00;
		Action<AottgUi> pSVar3;
		GisketchLength pGVar4;
		GisketchLength minHeight;
		GisketchLayoutDefinition pGVar5;
		GisketchLayoutDefinition contentLayout;
		Gisketch_Aottg2UI_Game_AottgEditCharacterDialog___c_StaticFields pGVar6;

		if (Il2CppMethodInitialized_075455ae == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c__DisplayClass39_0_BuildBody_b__1) ;
			Il2CppMethodInitialized_075455ae = true;
		}
		pGVar1 = this.__4__this;
		if (pGVar1 != null) {
			pSVar2 = pGVar1.get_Title();
			pGVar1 = this.__4__this;
			if (pGVar1 != null) {
				icon = pGVar1.get_TitleIcon();
				__this_00 = new AottgDialogHeader(pSVar2, 0, icon, null, null);
				if (panel != null) {
					panel.Component((AottgComponent)__this_00);
					pSVar2 = "dialogBody";
					pSVar3 = this.__9__1;
					if (pSVar3 == null) {
						pSVar3 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c__DisplayClass39_0_BuildBody_b__1);
						this.__9__1 = pSVar3;
					}
					pGVar4 = AottgUi.Percent(100.0);
					minHeight = AottgUi.Points(0.0);
					pGVar5 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar4, null, null, minHeight, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
					pGVar4 = AottgUi.Percent(100.0);
					contentLayout = AottgUi.Layout("Column", null, "Stretch", null, null, 12.0, pGVar4, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
					panel.ScrollView(pSVar2, pSVar3, "profile-edit-character-form-body", pGVar5, contentLayout, null);
					pSVar2 = "dialogFooter";
					pGVar6 = typeof(AottgEditCharacterDialog.c).static_fields;
					pSVar3 = pGVar6.__9__39_2;
					if (pSVar3 == null) {
						if ((typeof(AottgEditCharacterDialog.c)._2).cctor_finished_or_no_cctor == 0 ) {
							pGVar6 = typeof(AottgEditCharacterDialog.c).static_fields;
						}
						@object = (object)pGVar6.__9;
						pSVar3 = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c_BuildBody_b__39_2);
						pGVar6 = typeof(AottgEditCharacterDialog.c).static_fields;
						pGVar6.__9__39_2 = pSVar3;
					}
					pGVar4 = AottgUi.Percent(100.0);
					pGVar5 = AottgUi.Layout("Row", "FlexEnd", "Center", null, null, 12.0, pGVar4, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
					panel.Panel(pSVar2, pSVar3, "profile-edit-character-form-footer", pGVar5, null);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c__DisplayClass39_0$$<BuildBody>b__1: 4 lines keep C-only constructs
	private void c__DisplayClass39_0__BuildBody_b__1(AottgUi form)
	{
		sbyte cVar1;
		uint uVar2;
		bool enabled;
		Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_StaticFields pGVar3;
		JSONNode pSVar4;
		String pSVar5;
		Action<GisketchActionContext> pSVar6;
		AottgCharacterTextField __this_00;
		MethodInfo method_00;

		if (Il2CppMethodInitialized_075455af == false) {
			Il2CppMethodInitialized_075455af = true;
			uVar2 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
		}
		if (Il2CppMethodInitialized_075455a4 == false) {
			Il2CppMethodInitialized_075455a4 = true;
			uVar2 = (typeof(AottgEditCharacterDialog)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(AottgEditCharacterDialog))._2). cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			il2cpp_codegen_runtime_class_init(typeof(AottgEditCharacterDialog)) ;
			pGVar3 = typeof(AottgEditCharacterDialog).static_fields;
			cVar1 = pGVar3._noGuildSelected;
		}
		else {
			pGVar3 = (typeof(AottgEditCharacterDialog)).static_fields;
			cVar1 = pGVar3._noGuildSelected;
		}
		if (cVar1 == false) {
			if (((typeof(AottgEditCharacterDialog))._2). cctor_finished_or_no_cctor == 0) {
				pGVar3 = typeof(AottgEditCharacterDialog).static_fields;
			}
			enabled = String.IsNullOrEmpty(pGVar3._selectedGuildPresetId);
		}
		else {
			enabled = false;
		}
		ProfileDialogUi.SaveCallout(form);
		pSVar4 = this.info;
		if ((pSVar4 != null) &&(pSVar4 = pSVar4.get_Item("name"), pSVar4 != null)) {
			pSVar5 = pSVar4.get_Value();
			pSVar6 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_RefreshPreview);
			__this_00 = new AottgCharacterTextField("profile-character-name", "MainMenu.Profile.CharacterName", "MainMenu.Profile.CharacterNamePlaceholder", pSVar5, true, "profile-character-name-effect", pSVar6);
			if (form != null) {
				form.Component((AottgComponent)__this_00);
				pSVar4 = this.info;
				if ((pSVar4 != null) &&(pSVar4 = pSVar4.get_Item("guild"), pSVar4 != null)) {
					pSVar5 = pSVar4.get_Value();
					pSVar6 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_RefreshPreview);
					method_00 = new AottgCharacterTextField("profile-character-guild", "Common.Guild", "MainMenu.Profile.GuildPlaceholder", pSVar5, enabled, "profile-character-guild-effect", pSVar6);
					form.Component((AottgComponent)method_00);
					AottgEditCharacterDialog.PresetGuild(form);
					AottgEditCharacterDialog.Badges(form);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c__DisplayClass60_0$$<Badges>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass60_0__Badges_b__0(AottgUi group)
	{
		List<AottgProfileEntitlementOption> pSVar1;
		String style;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		if (group != null) {
			group.TextKey("MainMenu.Profile.Badges", "accountInputLabel", null, null, null);
			style = "row";
			pSVar1 = this.badges;
			if (pSVar1 != null) {
				if (pSVar1._size == 0) {
					group.TextKey("MainMenu.Profile.NoneAvailable", "accountInputLabel", null, null, null);
				}
				else {
					__this_00 = this.__9__1;
					if (__this_00 == null) {
						__this_00 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_c__DisplayClass60_0_Badges_b__1);
						this.__9__1 = __this_00;
					}
					width = AottgUi.Percent(100.0);
					layout = AottgUi.Layout("Row", null, null, null, "Wrap", 14.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
					group.Panel(style, __this_00, "profile-character-badges", layout, null);
				}
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgEditCharacterDialog.<>c__DisplayClass60_0$$<Badges>b__1: 8 lines keep C-only constructs
	private void c__DisplayClass60_0__Badges_b__1(AottgUi row)
	{
		List<AottgProfileEntitlementOption> __this_00;
		String text;
		HashSet<object> __this_01;
		object item;
		String icon;
		ulong uVar1;
		bool bVar2;
		Action<GisketchActionContext> __this_02;
		GisketchNodeDefinition pGVar3;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar4;
		String pSVar5;
		Nullable<bool>[] aSStack_b0 = new Nullable<bool>[4];
		AottgUi pGStack_a8;
		String pSStack_a0;
		System_Collections_Generic_List_Enumerator_T__o SStack_98;
		String pSStack_80;
		String pSStack_78;
		ulong uStack_70;
		byte[] auStack_60 = new byte[16];
		String pSStack_50;
		String pSStack_48;
		String pSStack_40;
		ulong uStack_38;

		pGStack_a8 = row;
		if (Il2CppMethodInitialized_075455b1 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_075455b1 = true;
		}
		__this_00 = this.badges;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		auStack_60.GetEnumerator(__this_00);
		pSStack_78 = pSStack_40;
		uStack_70 = uStack_38;
		SStack_98._current = (object)pSStack_50;
		pSStack_80 = pSStack_48;
		SStack_98._list = (List<T>)auStack_60._0_8_;
		SStack_98._index = auStack_60._8_4_;
		SStack_98._version = auStack_60._12_4_;
		auStack_60._0_8_ = null;
		auStack_60._8_8_ = &SStack_98;
		while(true) {
			bVar2 = SStack_98.MoveNext();
			uVar1 = uStack_70;
			icon = pSStack_78;
			pSVar5 = pSStack_80;
			item = SStack_98._current;
			if (!bVar2) {
				SStack_98.Dispose();
				return;
			}
			pSStack_a0 = String.Concat("profile-character-badge-", (String)SStack_98._current);
			text = (String)**(ulong*)(g_data_07556758 + 0xb8);
			bVar2 = false;
			if ((uVar1 & 1) != 0) {
				__this_01 = (HashSet<object>)AottgEditCharacterDialog.SelectedBadges;
				if (__this_01 == null) {
					throw new NullReferenceException();
				}
				bVar2 = __this_01.Contains(item);
			}
			__this_02 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgEditCharacterDialog_ToggleBadge);
			if (pGStack_a8 == null) {
				throw new NullReferenceException();
			}
			if ((uVar1 & 1) == 0) {
				pSVar5 = null;
			}
			pGVar3 = pGStack_a8.Checkbox(pSStack_a0, text, bVar2, __this_02, icon, pSVar5);
			aSStack_b0[0].hasValue = false;
			aSStack_b0[0].value = false;
			aSStack_b0 = new Nullable<bool>((bool)((byte)uVar1 & 1));
			if (pGVar3 == null) break;
			pGVar3.enabled = aSStack_b0[0];
			if ((uVar1 & 1) == 0) {
				pSVar5 = "MainMenu.Profile.SupporterOnlyFeature";
			}
			else {
				pSVar5 = null;
			}
			pGVar3.tooltipKey = pSVar5;
			width = AottgUi.Points(72.0);
			height = AottgUi.Points(42.0);
			pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			pGVar3.layout = pGVar4;
		}
		throw new NullReferenceException();
	}
}
