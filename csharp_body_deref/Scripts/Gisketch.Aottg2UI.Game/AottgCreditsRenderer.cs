// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCreditsRenderer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsRenderer.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using ApplicationManagers.Credits;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000155")]
internal static class AottgCreditsRenderer
{
	[Token(Token = "0x4000794")]
	private const string InfoIcon = "UI/Icons/info-circle";

	[Token(Token = "0x4000795")]
	private const float GroupTopGap = 8f;

	[Token(Token = "0x4000796")]
	private const float ContributorCellWidthPercent = 32f;

	[Token(Token = "0x4000797")]
	private const float ContributorCellHeight = 36f;

	[Token(Token = "0x6000785")]
	[Address(RVA = "0x43E60D0", Offset = "0x43E60D0", VA = "0x43E60D0")]
	public static void BuildCategory(AottgUi content, AottgCreditCategory category, int categoryIndex, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x6000786")]
	[Address(RVA = "0x43E69B0", Offset = "0x43E69B0", VA = "0x43E69B0")]
	private static void BuildGroup(AottgUi content, AottgCreditGroup group, string id)
	{
	}

	[Token(Token = "0x6000787")]
	[Address(RVA = "0x43E66D0", Offset = "0x43E66D0", VA = "0x43E66D0")]
	private static void BuildContributors(AottgUi content, IReadOnlyList<AottgCreditContributor> contributors, string id)
	{
	}

	[Token(Token = "0x6000788")]
	[Address(RVA = "0x43E6EC0", Offset = "0x43E6EC0", VA = "0x43E6EC0")]
	private static void BuildContributor(AottgUi grid, AottgCreditContributor contributor, string id)
	{
	}

	[Token(Token = "0x6000789")]
	[Address(RVA = "0x43E7110", Offset = "0x43E7110", VA = "0x43E7110")]
	private static GisketchNodeDefinition[] ContributorChildren(AottgCreditContributor contributor, string id)
	{
		return null;
	}

	[Token(Token = "0x600078A")]
	[Address(RVA = "0x43E7010", Offset = "0x43E7010", VA = "0x43E7010")]
	private static GisketchLayoutDefinition ContributorCellLayout()
	{
		return null;
	}

	[Token(Token = "0x600078B")]
	[Address(RVA = "0x43E6D00", Offset = "0x43E6D00", VA = "0x43E6D00")]
	private static void BuildEmpty(AottgUi content, string id, string text)
	{
	}

	[Token(Token = "0x600078C")]
	[Address(RVA = "0x43E68A0", Offset = "0x43E68A0", VA = "0x43E68A0")]
	private static void BuildGap(AottgUi content, string id)
	{
	}

	[Token(Token = "0x600078D")]
	[Address(RVA = "0x43E75A0", Offset = "0x43E75A0", VA = "0x43E75A0")]
	public static string SectionId(string name, int index)
	{
		return null;
	}

	[Token(Token = "0x600078E")]
	[Address(RVA = "0x43E7650", Offset = "0x43E7650", VA = "0x43E7650")]
	private static string SafeId(string value)
	{
		return null;
	}
}
