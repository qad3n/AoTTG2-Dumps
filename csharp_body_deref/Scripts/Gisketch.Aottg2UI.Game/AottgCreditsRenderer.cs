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

[Token(Token = "0x20001E4")]
internal static class AottgCreditsRenderer
{
	[Token(Token = "0x4000A37")]
	private const string InfoIcon = "UI/Icons/info-circle";

	[Token(Token = "0x4000A38")]
	private const float GroupTopGap = 8f;

	[Token(Token = "0x4000A39")]
	private const float ContributorCellWidthPercent = 32f;

	[Token(Token = "0x4000A3A")]
	private const float ContributorCellHeight = 36f;

	[Token(Token = "0x6000B1F")]
	[Address(RVA = "0x23A8800", Offset = "0x23A6E00", VA = "0x1823A8800")]
	public static void BuildCategory(AottgUi content, AottgCreditCategory category, int categoryIndex, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x23A9640", Offset = "0x23A7C40", VA = "0x1823A9640")]
	private static void BuildGroup(AottgUi content, AottgCreditGroup group, string id)
	{
	}

	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x23A9140", Offset = "0x23A7740", VA = "0x1823A9140")]
	private static void BuildContributors(AottgUi content, IReadOnlyList<AottgCreditContributor> contributors, string id)
	{
	}

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x23A8E90", Offset = "0x23A7490", VA = "0x1823A8E90")]
	private static void BuildContributor(AottgUi grid, AottgCreditContributor contributor, string id)
	{
	}

	[Token(Token = "0x6000B23")]
	[Address(RVA = "0x23A9A90", Offset = "0x23A8090", VA = "0x1823A9A90")]
	private static GisketchNodeDefinition[] ContributorChildren(AottgCreditContributor contributor, string id)
	{
		return null;
	}

	[Token(Token = "0x6000B24")]
	[Address(RVA = "0x23A9950", Offset = "0x23A7F50", VA = "0x1823A9950")]
	private static GisketchLayoutDefinition ContributorCellLayout()
	{
		return null;
	}

	[Token(Token = "0x6000B25")]
	[Address(RVA = "0x23A9330", Offset = "0x23A7930", VA = "0x1823A9330")]
	private static void BuildEmpty(AottgUi content, string id, string textKey, string text)
	{
	}

	[Token(Token = "0x6000B26")]
	[Address(RVA = "0x23A9500", Offset = "0x23A7B00", VA = "0x1823A9500")]
	private static void BuildGap(AottgUi content, string id)
	{
	}

	[Token(Token = "0x6000B27")]
	[Address(RVA = "0x23AA150", Offset = "0x23A8750", VA = "0x1823AA150")]
	public static string SectionId(string name, int index)
	{
		return null;
	}

	[Token(Token = "0x6000B28")]
	[Address(RVA = "0x23A9FA0", Offset = "0x23A85A0", VA = "0x1823A9FA0")]
	private static string SafeId(string value)
	{
		return null;
	}
}
