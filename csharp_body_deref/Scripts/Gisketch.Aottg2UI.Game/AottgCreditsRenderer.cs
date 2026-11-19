// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCreditsRenderer
// Update status: CHANGED in this game update
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

[Token(Token = "0x20001FE")]
internal static class AottgCreditsRenderer
{
	[Token(Token = "0x4000AB0")]
	private const string InfoIcon = "UI/Icons/info-circle";

	[Token(Token = "0x4000AB1")]
	private const float GroupTopGap = 8f;

	[Token(Token = "0x4000AB2")]
	private const float ContributorCellWidthPercent = 32f;

	[Token(Token = "0x4000AB3")]
	private const float ContributorCellHeight = 36f;

	[Token(Token = "0x6000BE3")]
	[Address(RVA = "0x5D80210", Offset = "0x5D7F210", VA = "0x5D80210")]
	public static void BuildCategory(AottgUi content, AottgCreditCategory category, int categoryIndex, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x6000BE4")]
	[Address(RVA = "0x5D80AF0", Offset = "0x5D7FAF0", VA = "0x5D80AF0")]
	private static void BuildGroup(AottgUi content, AottgCreditGroup group, string id)
	{
	}

	[Token(Token = "0x6000BE5")]
	[Address(RVA = "0x5D80810", Offset = "0x5D7F810", VA = "0x5D80810")]
	private static void BuildContributors(AottgUi content, IReadOnlyList<AottgCreditContributor> contributors, string id)
	{
	}

	[Token(Token = "0x6000BE6")]
	[Address(RVA = "0x5D80FF0", Offset = "0x5D7FFF0", VA = "0x5D80FF0")]
	private static void BuildContributor(AottgUi grid, AottgCreditContributor contributor, string id)
	{
	}

	[Token(Token = "0x6000BE7")]
	[Address(RVA = "0x5D81240", Offset = "0x5D80240", VA = "0x5D81240")]
	private static GisketchNodeDefinition[] ContributorChildren(AottgCreditContributor contributor, string id)
	{
		return null;
	}

	[Token(Token = "0x6000BE8")]
	[Address(RVA = "0x5D81140", Offset = "0x5D80140", VA = "0x5D81140")]
	private static GisketchLayoutDefinition ContributorCellLayout()
	{
		return null;
	}

	[Token(Token = "0x6000BE9")]
	[Address(RVA = "0x5D80E30", Offset = "0x5D7FE30", VA = "0x5D80E30")]
	private static void BuildEmpty(AottgUi content, string id, string textKey)
	{
	}

	[Token(Token = "0x6000BEA")]
	[Address(RVA = "0x5D809E0", Offset = "0x5D7F9E0", VA = "0x5D809E0")]
	private static void BuildGap(AottgUi content, string id)
	{
	}

	[Token(Token = "0x6000BEB")]
	[Address(RVA = "0x5D816C0", Offset = "0x5D806C0", VA = "0x5D816C0")]
	public static string SectionId(string name, int index)
	{
		return null;
	}

	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x5D81770", Offset = "0x5D80770", VA = "0x5D81770")]
	private static string SafeId(string value)
	{
		return null;
	}
}
