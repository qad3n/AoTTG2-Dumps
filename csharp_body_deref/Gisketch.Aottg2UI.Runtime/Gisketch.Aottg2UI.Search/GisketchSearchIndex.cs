using System.Collections.Generic;
using System.Text;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Search;

[Token(Token = "0x2000026")]
public static class GisketchSearchIndex
{
	[Token(Token = "0x6000139")]
	[Address(RVA = "0x39DD200", Offset = "0x39DD200", VA = "0x39DD200")]
	public static List<GisketchSearchEntry> EntriesFor(GisketchManifestDefinition manifest, string activeScreenId)
	{
		return null;
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x39DE010", Offset = "0x39DE010", VA = "0x39DE010")]
	private static List<GisketchSearchEntry> WithoutDuplicateMainMenuScreenButtons(List<GisketchSearchEntry> entries, HashSet<string> screenTitles)
	{
		return null;
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x39DD8B0", Offset = "0x39DD8B0", VA = "0x39DD8B0")]
	private static void AddNodeEntries(List<GisketchSearchEntry> entries, GisketchScreenDefinition screen, GisketchNodeDefinition node, string sectionId, string sectionTitle)
	{
	}

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x39DE710", Offset = "0x39DE710", VA = "0x39DE710")]
	private static void AddChildEntries(List<GisketchSearchEntry> entries, GisketchScreenDefinition screen, GisketchNodeDefinition[] children, string sectionId, string sectionTitle)
	{
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x39DE1D0", Offset = "0x39DE1D0", VA = "0x39DE1D0")]
	private static string HarvestKeywords(GisketchNodeDefinition node)
	{
		return null;
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x39DE8B0", Offset = "0x39DE8B0", VA = "0x39DE8B0")]
	private static void HarvestChildKeywords(StringBuilder builder, GisketchNodeDefinition[] children)
	{
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x39DE780", Offset = "0x39DE780", VA = "0x39DE780")]
	private static void AppendText(StringBuilder builder, GisketchNodeDefinition node)
	{
	}

	[Token(Token = "0x6000140")]
	[Address(RVA = "0x39DE130", Offset = "0x39DE130", VA = "0x39DE130")]
	private static bool IsSection(GisketchNodeDefinition node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000141")]
	[Address(RVA = "0x39DE300", Offset = "0x39DE300", VA = "0x39DE300")]
	private static bool IsControl(GisketchNodeDefinition node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x39DE410", Offset = "0x39DE410", VA = "0x39DE410")]
	private static bool IsExplicitSearch(GisketchNodeDefinition node)
	{
		return default(bool);
	}

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x39DE4B0", Offset = "0x39DE4B0", VA = "0x39DE4B0")]
	private static string Kind(GisketchNodeDefinition node)
	{
		return null;
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x39DE500", Offset = "0x39DE500", VA = "0x39DE500")]
	private static string Title(GisketchNodeDefinition node)
	{
		return null;
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x39DE5C0", Offset = "0x39DE5C0", VA = "0x39DE5C0")]
	private static string Keywords(GisketchNodeDefinition node)
	{
		return null;
	}

	[Token(Token = "0x6000146")]
	[Address(RVA = "0x39DD820", Offset = "0x39DD820", VA = "0x39DD820")]
	private static string ScreenTitle(GisketchScreenDefinition screen)
	{
		return null;
	}

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x39DD7C0", Offset = "0x39DD7C0", VA = "0x39DD7C0")]
	private static string SearchGroup(GisketchScreenDefinition screen)
	{
		return null;
	}

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x39DE270", Offset = "0x39DE270", VA = "0x39DE270")]
	private static string Join(string a, string b)
	{
		return null;
	}

	[Token(Token = "0x6000149")]
	[Address(RVA = "0x39DE190", Offset = "0x39DE190", VA = "0x39DE190")]
	private static string First(string a, string b)
	{
		return null;
	}

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x39DEA20", Offset = "0x39DEA20", VA = "0x39DEA20")]
	private static void Append(StringBuilder builder, string value)
	{
	}
}
