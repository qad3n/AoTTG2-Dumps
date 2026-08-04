// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Search.GisketchSearchIndex
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Search/GisketchSearchIndex.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Text;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Search;

[Token(Token = "0x2000027")]
public static class GisketchSearchIndex
{
	[Token(Token = "0x6000141")]
	[Address(RVA = "0x3A47880", Offset = "0x3A47880", VA = "0x3A47880")]
	public static List<GisketchSearchEntry> EntriesFor(GisketchManifestDefinition manifest, string activeScreenId)
	{
		return null;
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x3A48690", Offset = "0x3A48690", VA = "0x3A48690")]
	private static List<GisketchSearchEntry> WithoutDuplicateMainMenuScreenButtons(List<GisketchSearchEntry> entries, HashSet<string> screenTitles)
	{
		return null;
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x3A47F30", Offset = "0x3A47F30", VA = "0x3A47F30")]
	private static void AddNodeEntries(List<GisketchSearchEntry> entries, GisketchScreenDefinition screen, GisketchNodeDefinition node, string sectionId, string sectionTitle)
	{
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x3A48D90", Offset = "0x3A48D90", VA = "0x3A48D90")]
	private static void AddChildEntries(List<GisketchSearchEntry> entries, GisketchScreenDefinition screen, GisketchNodeDefinition[] children, string sectionId, string sectionTitle)
	{
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x3A48850", Offset = "0x3A48850", VA = "0x3A48850")]
	private static string HarvestKeywords(GisketchNodeDefinition node)
	{
		return null;
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x3A48F30", Offset = "0x3A48F30", VA = "0x3A48F30")]
	private static void HarvestChildKeywords(StringBuilder builder, GisketchNodeDefinition[] children)
	{
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x3A48E00", Offset = "0x3A48E00", VA = "0x3A48E00")]
	private static void AppendText(StringBuilder builder, GisketchNodeDefinition node)
	{
	}

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x3A487B0", Offset = "0x3A487B0", VA = "0x3A487B0")]
	private static bool IsSection(GisketchNodeDefinition node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000149")]
	[Address(RVA = "0x3A48980", Offset = "0x3A48980", VA = "0x3A48980")]
	private static bool IsControl(GisketchNodeDefinition node)
	{
		return default(bool);
	}

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x3A48A90", Offset = "0x3A48A90", VA = "0x3A48A90")]
	private static bool IsExplicitSearch(GisketchNodeDefinition node)
	{
		return default(bool);
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x3A48B30", Offset = "0x3A48B30", VA = "0x3A48B30")]
	private static string Kind(GisketchNodeDefinition node)
	{
		return null;
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x3A48B80", Offset = "0x3A48B80", VA = "0x3A48B80")]
	private static string Title(GisketchNodeDefinition node)
	{
		return null;
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x3A48C40", Offset = "0x3A48C40", VA = "0x3A48C40")]
	private static string Keywords(GisketchNodeDefinition node)
	{
		return null;
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x3A47EA0", Offset = "0x3A47EA0", VA = "0x3A47EA0")]
	private static string ScreenTitle(GisketchScreenDefinition screen)
	{
		return null;
	}

	[Token(Token = "0x600014F")]
	[Address(RVA = "0x3A47E40", Offset = "0x3A47E40", VA = "0x3A47E40")]
	private static string SearchGroup(GisketchScreenDefinition screen)
	{
		return null;
	}

	[Token(Token = "0x6000150")]
	[Address(RVA = "0x3A488F0", Offset = "0x3A488F0", VA = "0x3A488F0")]
	private static string Join(string a, string b)
	{
		return null;
	}

	[Token(Token = "0x6000151")]
	[Address(RVA = "0x3A48810", Offset = "0x3A48810", VA = "0x3A48810")]
	private static string First(string a, string b)
	{
		return null;
	}

	[Token(Token = "0x6000152")]
	[Address(RVA = "0x3A490A0", Offset = "0x3A490A0", VA = "0x3A490A0")]
	private static void Append(StringBuilder builder, string value)
	{
	}
}
