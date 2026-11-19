// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgSettingsScreen
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsScreen.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200033B")]
[AottgScreen("settings", TitleKey = "SettingsPopup.Title", SearchTitleKey = "Common.Settings", SearchGroup = "main-menu", BackScreenId = "main-menu", BackActionId = "settings.back")]
public sealed class AottgSettingsScreen : AottgScreen
{
	[Token(Token = "0x400102C")]
	public const string Id = "settings";

	[Token(Token = "0x17000236")]
	protected override string RootStyle
	{
		[Token(Token = "0x6001443")]
		[Address(RVA = "0x58108F0", Offset = "0x580F8F0", VA = "0x58108F0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000237")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6001444")]
		[Address(RVA = "0x5810920", Offset = "0x580F920", VA = "0x5810920", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001445")]
	[Address(RVA = "0x58109F0", Offset = "0x580F9F0", VA = "0x58109F0", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6001446")]
	[Address(RVA = "0x5810AF0", Offset = "0x580FAF0", VA = "0x5810AF0")]
	private static AottgScreenSection[] Sections()
	{
		return null;
	}

	[Token(Token = "0x6001447")]
	[Address(RVA = "0x58115A0", Offset = "0x58105A0", VA = "0x58115A0")]
	private static AottgScreenSection Category(string id, string icon, string textKey, Action<AottgUi, AottgScreenSectionContext> build)
	{
		return default(AottgScreenSection);
	}

	[Token(Token = "0x6001448")]
	[Address(RVA = "0x58115E0", Offset = "0x58105E0", VA = "0x58115E0")]
	internal static bool RefreshCategory(GisketchUIRoot root, string categoryId)
	{
		return default(bool);
	}

	[Token(Token = "0x6001449")]
	[Address(RVA = "0x58119B0", Offset = "0x58109B0", VA = "0x58119B0")]
	internal static void SyncState(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x600144A")]
	[Address(RVA = "0x5811A30", Offset = "0x5810A30", VA = "0x5811A30")]
	private static void BuildGeneral(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x600144B")]
	[Address(RVA = "0x5811A40", Offset = "0x5810A40", VA = "0x5811A40")]
	private static void BuildSound(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x600144C")]
	[Address(RVA = "0x5811A50", Offset = "0x5810A50", VA = "0x5811A50")]
	private static void BuildGraphics(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x600144D")]
	[Address(RVA = "0x5811A60", Offset = "0x5810A60", VA = "0x5811A60")]
	private static void BuildUi(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x600144E")]
	[Address(RVA = "0x5811A70", Offset = "0x5810A70", VA = "0x5811A70")]
	private static void BuildKeybinds(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x600144F")]
	[Address(RVA = "0x5811AE0", Offset = "0x5810AE0", VA = "0x5811AE0")]
	private static void BuildSkins(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x6001450")]
	[Address(RVA = "0x5811AF0", Offset = "0x5810AF0", VA = "0x5811AF0")]
	private static void BuildAbility(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x6001451")]
	[Address(RVA = "0x5811B00", Offset = "0x5810B00", VA = "0x5811B00")]
	private static void BuildFooter(AottgUi footer)
	{
	}

	[Token(Token = "0x6001452")]
	[Address(RVA = "0x5811380", Offset = "0x5810380", VA = "0x5811380")]
	private static AottgBrushSidePanelOption[] SettingsFooterOptions()
	{
		return null;
	}

	[Token(Token = "0x6001453")]
	[Address(RVA = "0x5811C80", Offset = "0x5810C80", VA = "0x5811C80")]
	private static GisketchNodeDefinition FooterButton(AottgUi footer, AottgButtonVariant variant, string textKey, string actionId, string id, string icon)
	{
		return null;
	}

	[Token(Token = "0x6001454")]
	[Address(RVA = "0x5811DB0", Offset = "0x5810DB0", VA = "0x5811DB0")]
	public AottgSettingsScreen()
	{
	}
}
