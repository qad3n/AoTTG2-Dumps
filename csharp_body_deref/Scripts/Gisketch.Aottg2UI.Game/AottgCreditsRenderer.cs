using System.Collections.Generic;
using ApplicationManagers.Credits;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000123")]
internal static class AottgCreditsRenderer
{
	[Token(Token = "0x40006D5")]
	private const string InfoIcon = "UI/Icons/info-circle";

	[Token(Token = "0x40006D6")]
	private const float GroupTopGap = 8f;

	[Token(Token = "0x40006D7")]
	private const float ContributorCellWidthPercent = 32f;

	[Token(Token = "0x40006D8")]
	private const float ContributorCellHeight = 36f;

	[Token(Token = "0x6000618")]
	[Address(RVA = "0x406E8E0", Offset = "0x406E8E0", VA = "0x406E8E0")]
	public static void BuildCategory(AottgUi content, AottgCreditCategory category, int categoryIndex, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x6000619")]
	[Address(RVA = "0x406F1C0", Offset = "0x406F1C0", VA = "0x406F1C0")]
	private static void BuildGroup(AottgUi content, AottgCreditGroup group, string id)
	{
	}

	[Token(Token = "0x600061A")]
	[Address(RVA = "0x406EEE0", Offset = "0x406EEE0", VA = "0x406EEE0")]
	private static void BuildContributors(AottgUi content, IReadOnlyList<AottgCreditContributor> contributors, string id)
	{
	}

	[Token(Token = "0x600061B")]
	[Address(RVA = "0x406F6D0", Offset = "0x406F6D0", VA = "0x406F6D0")]
	private static void BuildContributor(AottgUi grid, AottgCreditContributor contributor, string id)
	{
	}

	[Token(Token = "0x600061C")]
	[Address(RVA = "0x406F920", Offset = "0x406F920", VA = "0x406F920")]
	private static GisketchNodeDefinition[] ContributorChildren(AottgCreditContributor contributor, string id)
	{
		return null;
	}

	[Token(Token = "0x600061D")]
	[Address(RVA = "0x406F820", Offset = "0x406F820", VA = "0x406F820")]
	private static GisketchLayoutDefinition ContributorCellLayout()
	{
		return null;
	}

	[Token(Token = "0x600061E")]
	[Address(RVA = "0x406F510", Offset = "0x406F510", VA = "0x406F510")]
	private static void BuildEmpty(AottgUi content, string id, string text)
	{
	}

	[Token(Token = "0x600061F")]
	[Address(RVA = "0x406F0B0", Offset = "0x406F0B0", VA = "0x406F0B0")]
	private static void BuildGap(AottgUi content, string id)
	{
	}

	[Token(Token = "0x6000620")]
	[Address(RVA = "0x406FDB0", Offset = "0x406FDB0", VA = "0x406FDB0")]
	public static string SectionId(string name, int index)
	{
		return null;
	}

	[Token(Token = "0x6000621")]
	[Address(RVA = "0x406FE60", Offset = "0x406FE60", VA = "0x406FE60")]
	private static string SafeId(string value)
	{
		return null;
	}
}
