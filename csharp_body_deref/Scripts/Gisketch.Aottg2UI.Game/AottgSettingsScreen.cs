// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgSettingsScreen
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsScreen.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002DE")]
[AottgScreen("settings", Title = "AoTTG 2 Settings", TitleKey = "SettingsPopup.Title", SearchTitle = "Settings", SearchTitleKey = "Common.Settings", SearchGroup = "main-menu", BackScreenId = "main-menu", BackActionId = "settings.back")]
public sealed class AottgSettingsScreen : AottgScreen
{
	[Token(Token = "0x4000E9E")]
	public const string Id = "settings";

	[Token(Token = "0x170001F9")]
	protected override string RootStyle
	{
		[Token(Token = "0x60011F1")]
		[Address(RVA = "0x1E31D90", Offset = "0x1E30390", VA = "0x181E31D90", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001FA")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60011F2")]
		[Address(RVA = "0x1E31C80", Offset = "0x1E30280", VA = "0x181E31C80", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60011F3")]
	[Address(RVA = "0x1E308F0", Offset = "0x1E2EEF0", VA = "0x181E308F0", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x60011F4")]
	[Address(RVA = "0x1E31080", Offset = "0x1E2F680", VA = "0x181E31080")]
	private static AottgScreenSection[] Sections()
	{
		return null;
	}

	[Token(Token = "0x60011F5")]
	[Address(RVA = "0x1E30AE0", Offset = "0x1E2F0E0", VA = "0x181E30AE0")]
	private static AottgScreenSection Category(string id, string label, string icon, string textKey, Action<AottgUi, AottgScreenSectionContext> build)
	{
		return default(AottgScreenSection);
	}

	[Token(Token = "0x60011F6")]
	[Address(RVA = "0x1E30CE0", Offset = "0x1E2F2E0", VA = "0x181E30CE0")]
	internal static bool RefreshCategory(GisketchUIRoot root, string categoryId)
	{
		return default(bool);
	}

	[Token(Token = "0x60011F7")]
	[Address(RVA = "0x1E31C20", Offset = "0x1E30220", VA = "0x181E31C20")]
	internal static void SyncState(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x60011F8")]
	[Address(RVA = "0x1E307D0", Offset = "0x1E2EDD0", VA = "0x181E307D0")]
	private static void BuildGeneral(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x60011F9")]
	[Address(RVA = "0x1E30890", Offset = "0x1E2EE90", VA = "0x181E30890")]
	private static void BuildSound(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x60011FA")]
	[Address(RVA = "0x1E30800", Offset = "0x1E2EE00", VA = "0x181E30800")]
	private static void BuildGraphics(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x60011FB")]
	[Address(RVA = "0x1E308C0", Offset = "0x1E2EEC0", VA = "0x181E308C0")]
	private static void BuildUi(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x60011FC")]
	[Address(RVA = "0x1E30830", Offset = "0x1E2EE30", VA = "0x181E30830")]
	private static void BuildKeybinds(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x60011FD")]
	[Address(RVA = "0x1E30860", Offset = "0x1E2EE60", VA = "0x181E30860")]
	private static void BuildSkins(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x60011FE")]
	[Address(RVA = "0x1E305C0", Offset = "0x1E2EBC0", VA = "0x181E305C0")]
	private static void BuildAbility(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x60011FF")]
	[Address(RVA = "0x1E305F0", Offset = "0x1E2EBF0", VA = "0x181E305F0")]
	private static void BuildFooter(AottgUi footer)
	{
	}

	[Token(Token = "0x6001200")]
	[Address(RVA = "0x1E31950", Offset = "0x1E2FF50", VA = "0x181E31950")]
	private static AottgBrushSidePanelOption[] SettingsFooterOptions()
	{
		return null;
	}

	[Token(Token = "0x6001201")]
	[Address(RVA = "0x1E30B70", Offset = "0x1E2F170", VA = "0x181E30B70")]
	private static GisketchNodeDefinition FooterButton(AottgUi footer, AottgButtonVariant variant, string text, string actionId, string id, string icon, string textKey)
	{
		return null;
	}

	[Token(Token = "0x6001202")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgSettingsScreen()
	{
	}
}
