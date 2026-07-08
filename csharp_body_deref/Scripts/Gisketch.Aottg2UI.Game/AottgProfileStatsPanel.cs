using GameProgress;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000195")]
public sealed class AottgProfileStatsPanel : AottgComponent
{
	[Token(Token = "0x6000950")]
	[Address(RVA = "0x40FB9A0", Offset = "0x40FB9A0", VA = "0x40FB9A0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000951")]
	[Address(RVA = "0x40FC0D0", Offset = "0x40FC0D0", VA = "0x40FC0D0")]
	private static void BuildRows(AottgUi ui, GameStatContainer stat, AchievementCount achievements)
	{
	}

	[Token(Token = "0x6000952")]
	[Address(RVA = "0x40FCA80", Offset = "0x40FCA80", VA = "0x40FCA80")]
	private static void Header(AottgUi ui, string label)
	{
	}

	[Token(Token = "0x6000953")]
	[Address(RVA = "0x40FCBA0", Offset = "0x40FCBA0", VA = "0x40FCBA0")]
	private static void Stat(AottgUi ui, string label, string value)
	{
	}

	[Token(Token = "0x6000954")]
	[Address(RVA = "0x40F94A0", Offset = "0x40F94A0", VA = "0x40F94A0")]
	public AottgProfileStatsPanel()
	{
	}
}
