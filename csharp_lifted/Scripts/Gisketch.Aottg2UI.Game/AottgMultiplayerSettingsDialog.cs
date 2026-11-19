// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgMultiplayerSettingsDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgMultiplayerSettingsDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002C1")]
[AottgDialog("multiplayer-settings")]
public sealed class AottgMultiplayerSettingsDialog : AottgDialog
{
	[Token(Token = "0x4000DFB")]
	public const string Id = "multiplayer-settings";

	[Token(Token = "0x4000DFC")]
	private const string Category = "MainMenu";

	[Token(Token = "0x4000DFD")]
	private const string Sub = "MultiplayerSettingsPopup";

	[Token(Token = "0x4000DFE")]
	[FieldOffset(Offset = "0x0")]
	private static MultiplayerSettings _draft;

	[Token(Token = "0x170001D9")]
	protected override string Title
	{
		[Token(Token = "0x60010AC")]
		[Address(RVA = "0x57C7C40", Offset = "0x57C6C40", VA = "0x57C7C40", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMultiplayerSettingsDialog.c (Gisketch.Aottg2UI.Game.AottgMultiplayerSettingsDialog$$get_Title): clean
			String pSVar1;

			pSVar1 = AottgMultiplayerRows.Key("MainMenu", "MultiplayerSettingsPopup", "Title");
			if ((typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor == 0) {
				pSVar1 = Aottg2GisketchLocale.Text(pSVar1);
				return pSVar1;
			}
			pSVar1 = Aottg2GisketchLocale.Text(pSVar1);
			return pSVar1;
		}
	}

	[Token(Token = "0x170001DA")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x60010AD")]
		[Address(RVA = "0x57C7CE0", Offset = "0x57C6CE0", VA = "0x57C7CE0", Slot = "13")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMultiplayerSettingsDialog.c (Gisketch.Aottg2UI.Game.AottgMultiplayerSettingsDialog$$get_BodyScrollable): clean
			return false;
		}
	}

	[Token(Token = "0x170001DB")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60010AE")]
		[Address(RVA = "0x57C7CF0", Offset = "0x57C6CF0", VA = "0x57C7CF0", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMultiplayerSettingsDialog.c (Gisketch.Aottg2UI.Game.AottgMultiplayerSettingsDialog$$get_RootLayout): clean
			GisketchLength width;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Points(920.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x60010AF")]
	[Address(RVA = "0x57C7DB0", Offset = "0x57C6DB0", VA = "0x57C7DB0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMultiplayerSettingsDialog.c (Gisketch.Aottg2UI.Game.AottgMultiplayerSettingsDialog$$BuildBody): 2 lines keep C-only constructs
		StringSetting pSVar1;
		String pSVar2;
		MultiplayerSettings pSVar3;
		AottgComponent pGVar4;
		String pSVar5;
		AottgStringSettingAdapter pGVar6;
		MethodInfo pMVar7;
		MethodInfo method_00;

		pSVar3 = new MultiplayerSettings();
		AottgMultiplayerSettingsDialog._draft = pSVar3;
		pSVar3 = AottgMultiplayerSettingsDialog._draft;
		if (pSVar3 != null) {
			pSVar3.Copy((BaseSetting)SettingsManager.MultiplayerSettings);
			pSVar3 = AottgMultiplayerSettingsDialog._draft;
			if (pSVar3 != null) {
				pGVar4 = AottgMultiplayerRows.Select("multiplayer-settings-quick-play-region", "MainMenu", "MultiplayerSettingsPopup", "QuickPlayRegion", pSVar3.QuickPlayRegion);
				if (body != null) {
					body.Component(pGVar4);
					body.Separator(null, null);
					pSVar3 = AottgMultiplayerSettingsDialog._draft;
					if (pSVar3 != null) {
						pMVar7 = (MethodInfo *)"Lobby";
						pGVar4 = AottgMultiplayerRows.Select("multiplayer-settings-lobby", "MainMenu", "MultiplayerSettingsPopup", "Lobby", pSVar3.LobbyMode);
						body.Component(pGVar4);
						pSVar5 = AottgMultiplayerRows.Key("MainMenu", "MultiplayerSettingsPopup", "LobbyCustom");
						pSVar2 = "multiplayer-settings-custom-lobby";
						pSVar3 = AottgMultiplayerSettingsDialog._draft;
						if (pSVar3 != null) {
							pSVar1 = pSVar3.CustomLobby;
							pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgStringSettingAdapter));
							pGVar6 = new AottgStringSettingAdapter(pSVar1) ;
							pGVar4 = AottgMultiplayerRows.Row(pSVar2, pSVar5, 4, (IAottgSettingAdapter)pGVar6, null, null, null);
							body.Component(pGVar4);
							body.Separator(null, null);
							pSVar3 = AottgMultiplayerSettingsDialog._draft;
							if (pSVar3 != null) {
								method_00 = (MethodInfo *)"AppId";
								pGVar4 = AottgMultiplayerRows.Select("multiplayer-settings-app-id", "MainMenu", "MultiplayerSettingsPopup", "AppId", pSVar3.AppIdMode);
								body.Component(pGVar4);
								pSVar5 = AottgMultiplayerRows.Key("MainMenu", "MultiplayerSettingsPopup", "AppIdCustom") ;
								pSVar2 = "multiplayer-settings-custom-app-id";
								pSVar3 = AottgMultiplayerSettingsDialog._draft;
								if (pSVar3 != null) {
									pSVar1 = pSVar3.CustomAppId;
									pGVar6 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgStringSettingAdapter));
									pGVar6 = new AottgStringSettingAdapter(pSVar1);
									pGVar4 = AottgMultiplayerRows.Row(pSVar2, pSVar5, 4, (IAottgSettingAdapter)pGVar6, null, null, null);
									body.Component(pGVar4);
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

	[Token(Token = "0x60010B0")]
	[Address(RVA = "0x57C8190", Offset = "0x57C7190", VA = "0x57C8190", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMultiplayerSettingsDialog.c (Gisketch.Aottg2UI.Game.AottgMultiplayerSettingsDialog$$BuildFooter): 1 lines keep C-only constructs
		Action<GisketchActionContext> __this_00;

		__this_00 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgMultiplayerSettingsDialog_Save);
		if (footer == null) {
			throw new NullReferenceException();
		}
		footer.PrimaryKey("Common.Save", __this_00);
		return;
	}

	[Token(Token = "0x60010B1")]
	[Address(RVA = "0x57C8220", Offset = "0x57C7220", VA = "0x57C8220")]
	private static void Save(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMultiplayerSettingsDialog.c (Gisketch.Aottg2UI.Game.AottgMultiplayerSettingsDialog$$Save): clean
		GisketchOverlayManager __this;
		GisketchUIRoot pGVar1;
		MultiplayerSettings method_00;

		method_00 = SettingsManager.MultiplayerSettings;
		if (method_00 != null) {
			method_00.Copy((BaseSetting)AottgMultiplayerSettingsDialog._draft);
			method_00.Save();
			AottgCustomServerWarning.Sync();
			pGVar1 = AottgGisketchUiHost.Root;
			if (pGVar1 != null) {
				__this = pGVar1._Overlays_k__BackingField;
				if (__this == null) {
					return;
				}
				__this.CloseTop(true);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60010B2")]
	[Address(RVA = "0x57C82D0", Offset = "0x57C72D0", VA = "0x57C82D0")]
	public AottgMultiplayerSettingsDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMultiplayerSettingsDialog.c (Gisketch.Aottg2UI.Game.AottgMultiplayerSettingsDialog$$.ctor): clean
		base();
		return;
	}
}
