// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgDirectConnectDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgDirectConnectDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002BF")]
[AottgDialog("multiplayer-direct-connect")]
public sealed class AottgDirectConnectDialog : AottgDialog
{
	[Token(Token = "0x4000DF7")]
	public const string Id = "multiplayer-direct-connect";

	[Token(Token = "0x4000DF8")]
	public const string TitleKey = "MainMenu.MultiplayerLanPopup.Title";

	[Token(Token = "0x4000DF9")]
	private const string Prefix = "MainMenu.MultiplayerLanPopup.";

	[Token(Token = "0x170001D6")]
	protected override string Title
	{
		[Token(Token = "0x600109B")]
		[Address(RVA = "0x57C6D30", Offset = "0x57C5D30", VA = "0x57C6D30", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgDirectConnectDialog.c (Gisketch.Aottg2UI.Game.AottgDirectConnectDialog$$get_Title): clean
			String pSVar1;

			pSVar1 = Aottg2GisketchLocale.Text("MainMenu.MultiplayerLanPopup.Title");
			return pSVar1;
		}
	}

	[Token(Token = "0x170001D7")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x600109C")]
		[Address(RVA = "0x57C6D90", Offset = "0x57C5D90", VA = "0x57C6D90", Slot = "13")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgDirectConnectDialog.c (Gisketch.Aottg2UI.Game.AottgDirectConnectDialog$$get_BodyScrollable): clean
			return false;
		}
	}

	[Token(Token = "0x170001D8")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x600109D")]
		[Address(RVA = "0x57C6DA0", Offset = "0x57C5DA0", VA = "0x57C6DA0", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgDirectConnectDialog.c (Gisketch.Aottg2UI.Game.AottgDirectConnectDialog$$get_RootLayout): clean
			GisketchLength width;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Points(920.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x600109E")]
	[Address(RVA = "0x57C6E60", Offset = "0x57C5E60", VA = "0x57C6E60", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgDirectConnectDialog.c (Gisketch.Aottg2UI.Game.AottgDirectConnectDialog$$BuildBody): 5 lines keep C-only constructs
		MultiplayerSettings pSVar1;
		StringSetting pSVar2;
		IntSetting setting;
		BoolSetting setting_00;
		String pSVar3;
		String pSVar4;
		String id;
		Action<GisketchActionContext> pSVar5;
		AottgStringSettingAdapter pGVar6;
		AottgComponent pGVar7;
		AottgIntSettingAdapter __this_00;
		AottgBoolSettingAdapter __this_01;

		if (body != null) {
			pSVar1 = SettingsManager.MultiplayerSettings;
			body.TextKey("MainMenu.MultiplayerLanPopup.Description", "text", "multiplayer-direct-connect-description", null, null);
			if (pSVar1 != null) {
				pSVar2 = pSVar1.LanIP;
				pSVar5 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgDirectConnectDialog_Save);
				pSVar4 = "multiplayer-direct-connect-ip";
				pSVar3 = "MainMenu.MultiplayerLanPopup.IP";
				pGVar6 = new AottgStringSettingAdapter(pSVar2);
				pGVar7 = AottgMultiplayerRows.Row(pSVar4, pSVar3, 4, (IAottgSettingAdapter)pGVar6, null, null, pSVar5);
				body.Component(pGVar7);
				setting = pSVar1.LanPort;
				pSVar5 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgDirectConnectDialog_Save);
				pSVar4 = "multiplayer-direct-connect-port";
				pSVar3 = "MainMenu.MultiplayerLanPopup.Port";
				__this_00 = new AottgIntSettingAdapter(setting);
				pGVar7 = AottgMultiplayerRows.Row(pSVar4, pSVar3, 4, (IAottgSettingAdapter)__this_00, null, null, pSVar5);
				body.Component(pGVar7);
				pSVar2 = pSVar1.LanPassword;
				pSVar5 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgDirectConnectDialog_Save);
				pSVar4 = "multiplayer-direct-connect-password";
				pSVar3 = "MainMenu.MultiplayerLanPopup.PasswordOptional";
				pGVar6 = new AottgStringSettingAdapter(pSVar2);
				pGVar7 = AottgMultiplayerRows.Row(pSVar4, pSVar3, 4, (IAottgSettingAdapter)pGVar6, null, null, pSVar5);
				body.Component(pGVar7);
				setting_00 = pSVar1.LanSupportsAccounts;
				pSVar5 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgDirectConnectDialog_Save);
				id = "multiplayer-direct-connect-accounts";
				pSVar4 = "MainMenu.MultiplayerLanPopup.SupportsAccountsTooltip";
				pSVar3 = "MainMenu.MultiplayerLanPopup.SupportsAccounts";
				__this_01 = il2cpp_codegen_object_new(typeof(AottgBoolSettingAdapter)) ;
				__this_01 = new AottgBoolSettingAdapter(setting_00);
				pGVar7 = AottgMultiplayerRows.Row(id, pSVar3, 0, (IAottgSettingAdapter)__this_01, pSVar4, pSVar5, null);
				body.Component(pGVar7);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600109F")]
	[Address(RVA = "0x57C73F0", Offset = "0x57C63F0", VA = "0x57C73F0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgDirectConnectDialog.c (Gisketch.Aottg2UI.Game.AottgDirectConnectDialog$$BuildFooter): 2 lines keep C-only constructs
		Action<GisketchActionContext> pSVar1;

		pSVar1 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgDirectConnectDialog_Back);
		if (footer == null) {
			throw new NullReferenceException();
		}
		footer.QuietKey("Common.Back", pSVar1);
		pSVar1 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgDirectConnectDialog_Connect);
		footer.PrimaryKey("MainMenu.MultiplayerLanPopup.Connect", pSVar1);
		return;
	}

	[Token(Token = "0x60010A0")]
	[Address(RVA = "0x57C74D0", Offset = "0x57C64D0", VA = "0x57C74D0")]
	private static void Save(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgDirectConnectDialog.c (Gisketch.Aottg2UI.Game.AottgDirectConnectDialog$$Save): clean
		MultiplayerSettings pSVar1;

		pSVar1 = SettingsManager.MultiplayerSettings;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		pSVar1.Save();
		return;
	}

	[Token(Token = "0x60010A1")]
	[Address(RVA = "0x57C7520", Offset = "0x57C6520", VA = "0x57C7520")]
	private static void Back(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgDirectConnectDialog.c (Gisketch.Aottg2UI.Game.AottgDirectConnectDialog$$Back): clean
		MultiplayerSettings pSVar1;
		GisketchOverlayManager __this;
		GisketchUIRoot pGVar2;

		pSVar1 = SettingsManager.MultiplayerSettings;
		if (pSVar1 != null) {
			pSVar1.Save();
			pGVar2 = AottgGisketchUiHost.Root;
			if (pGVar2 != null) {
				__this = pGVar2._Overlays_k__BackingField;
				if (__this == null) {
					return;
				}
				__this.CloseTop(true);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60010A2")]
	[Address(RVA = "0x57C75A0", Offset = "0x57C65A0", VA = "0x57C75A0")]
	private static void Connect(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgDirectConnectDialog.c (Gisketch.Aottg2UI.Game.AottgDirectConnectDialog$$Connect): clean
		MultiplayerSettings pSVar1;
		GisketchOverlayManager __this;
		GisketchUIRoot pGVar2;

		pSVar1 = SettingsManager.MultiplayerSettings;
		if (pSVar1 != null) {
			pSVar1.Save();
			pGVar2 = AottgGisketchUiHost.Root;
			if (pGVar2 != null) {
				__this = pGVar2._Overlays_k__BackingField;
				if (__this != null) {
					__this.CloseTop(true);
				}
				AottgQuickPlay.Cancel();
				pSVar1 = SettingsManager.MultiplayerSettings;
				if (pSVar1 != null) {
					pSVar1.ConnectLAN();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60010A3")]
	[Address(RVA = "0x57C7790", Offset = "0x57C6790", VA = "0x57C7790")]
	public AottgDirectConnectDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgDirectConnectDialog.c (Gisketch.Aottg2UI.Game.AottgDirectConnectDialog$$.ctor): clean
		base();
		return;
	}
}
