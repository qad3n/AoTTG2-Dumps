// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsCategoryPage
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsCategoryPage.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000178")]
internal static class AottgSettingsCategoryPage
{
	[Token(Token = "0x400085B")]
	private const string PlaceholderText = "Migration pending. Use legacy settings until this category migrates.";

	[Token(Token = "0x60007E2")]
	[Address(RVA = "0x2313D60", Offset = "0x2312360", VA = "0x182313D60")]
	public static void Build(AottgUi content, AottgScreenSectionContext context, string categoryId, params AottgSettingsGroup[] groups)
	{
	}

	[Token(Token = "0x60007E3")]
	[Address(RVA = "0x2313C00", Offset = "0x2312200", VA = "0x182313C00")]
	public static void BuildVirtual(AottgUi content, AottgScreenSectionContext context, string categoryId, params AottgSettingsGroup[] groups)
	{
	}

	[Token(Token = "0x60007E4")]
	[Address(RVA = "0x2313CB0", Offset = "0x23122B0", VA = "0x182313CB0")]
	public static void BuildVirtual(AottgUi content, AottgScreenSectionContext context, string categoryId, float initialScrollOffset, AottgSettingsGroup[] groups)
	{
	}

	[Token(Token = "0x60007E5")]
	[Address(RVA = "0x2314310", Offset = "0x2312910", VA = "0x182314310")]
	public static void SyncState(GisketchUIRoot root, params AottgSettingsGroup[] groups)
	{
	}

	[Token(Token = "0x60007E6")]
	[Address(RVA = "0x2313A10", Offset = "0x2312010", VA = "0x182313A10")]
	public static void BuildPlaceholder(AottgUi content, AottgScreenSectionContext context, string categoryId, params string[] groups)
	{
	}

	[Token(Token = "0x60007E7")]
	[Address(RVA = "0x2313F20", Offset = "0x2312520", VA = "0x182313F20")]
	private static AottgSettingsGroup PlaceholderGroup(string categoryId, string title)
	{
		return null;
	}

	[Token(Token = "0x60007E8")]
	[Address(RVA = "0x2314250", Offset = "0x2312850", VA = "0x182314250")]
	internal static string SafeId(string value)
	{
		return null;
	}

	[Token(Token = "0x60007E9")]
	[Address(RVA = "0x2313E80", Offset = "0x2312480", VA = "0x182313E80")]
	internal static string ContentId(string categoryId)
	{
		return null;
	}

	[Token(Token = "0x60007EA")]
	[Address(RVA = "0x2313ED0", Offset = "0x23124D0", VA = "0x182313ED0")]
	internal static string OwnerPrefix(string categoryId)
	{
		return null;
	}
}
