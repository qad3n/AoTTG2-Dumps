// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgPauseScreen
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgPauseScreen.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200028D")]
[AottgScreen("pause", TitleKey = "Common.Paused", SearchTitleKey = "Common.Paused", SearchGroup = "in-game", BackActionId = "pause.back")]
public sealed class AottgPauseScreen : AottgScreen
{
	[Token(Token = "0x4000D14")]
	public const string Id = "pause";

	[Token(Token = "0x1700019D")]
	protected override string RootStyle
	{
		[Token(Token = "0x6000F8F")]
		[Address(RVA = "0x57B4680", Offset = "0x57B3680", VA = "0x57B4680", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019E")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000F90")]
		[Address(RVA = "0x57B46B0", Offset = "0x57B36B0", VA = "0x57B46B0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F91")]
	[Address(RVA = "0x57B4780", Offset = "0x57B3780", VA = "0x57B4780", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000F92")]
	[Address(RVA = "0x57B4E30", Offset = "0x57B3E30", VA = "0x57B4E30")]
	public AottgPauseScreen()
	{
	}
}
