// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgProfileStatsPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgProfileStatsPanel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using GameProgress;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200032C")]
public sealed class AottgProfileStatsPanel : AottgComponent
{
	[Token(Token = "0x60013EC")]
	[Address(RVA = "0x580A1A0", Offset = "0x58091A0", VA = "0x580A1A0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x60013ED")]
	[Address(RVA = "0x580A420", Offset = "0x5809420", VA = "0x580A420")]
	private static void BuildRows(AottgUi ui, GameStatContainer stat, AchievementCount achievements)
	{
	}

	[Token(Token = "0x60013EE")]
	[Address(RVA = "0x580B580", Offset = "0x580A580", VA = "0x580B580")]
	private static void Header(AottgUi ui, string key, [Optional] GameStatRecord? record, [Optional] string id)
	{
	}

	[Token(Token = "0x60013EF")]
	[Address(RVA = "0x580B740", Offset = "0x580A740", VA = "0x580B740")]
	private static void Stat(AottgUi ui, string key, string value, [Optional] GameStatRecord? record, [Optional] string id)
	{
	}

	[Token(Token = "0x60013F0")]
	[Address(RVA = "0x580B7C0", Offset = "0x580A7C0", VA = "0x580B7C0")]
	private static void Stat(AottgUi ui, string key, string label, string value, GameStatRecord? record, string id)
	{
	}

	[Token(Token = "0x60013F1")]
	[Address(RVA = "0x580B9E0", Offset = "0x580A9E0", VA = "0x580B9E0")]
	private static void ClearButton(AottgUi ui, GameStatRecord record, string label, string id)
	{
	}

	[Token(Token = "0x60013F2")]
	[Address(RVA = "0x5807240", Offset = "0x5806240", VA = "0x5807240")]
	public AottgProfileStatsPanel()
	{
	}
}
