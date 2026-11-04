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

[Token(Token = "0x20002CF")]
public sealed class AottgProfileStatsPanel : AottgComponent
{
	[Token(Token = "0x600119A")]
	[Address(RVA = "0x1E201B0", Offset = "0x1E1E7B0", VA = "0x181E201B0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x600119B")]
	[Address(RVA = "0x1E1F510", Offset = "0x1E1DB10", VA = "0x181E1F510")]
	private static void BuildRows(AottgUi ui, GameStatContainer stat, AchievementCount achievements)
	{
	}

	[Token(Token = "0x600119C")]
	[Address(RVA = "0x1E20690", Offset = "0x1E1EC90", VA = "0x181E20690")]
	private static void Header(AottgUi ui, string key, string label, [Optional] GameStatRecord? record, [Optional] string id)
	{
	}

	[Token(Token = "0x600119D")]
	[Address(RVA = "0x1E20890", Offset = "0x1E1EE90", VA = "0x181E20890")]
	private static void Stat(AottgUi ui, string label, string value)
	{
	}

	[Token(Token = "0x600119E")]
	[Address(RVA = "0x1E208C0", Offset = "0x1E1EEC0", VA = "0x181E208C0")]
	private static void Stat(AottgUi ui, string key, string label, string value, [Optional] GameStatRecord? record, [Optional] string id)
	{
	}

	[Token(Token = "0x600119F")]
	[Address(RVA = "0x1E20440", Offset = "0x1E1EA40", VA = "0x181E20440")]
	private static void ClearButton(AottgUi ui, GameStatRecord record, string label, string id)
	{
	}

	[Token(Token = "0x60011A0")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgProfileStatsPanel()
	{
	}
}
