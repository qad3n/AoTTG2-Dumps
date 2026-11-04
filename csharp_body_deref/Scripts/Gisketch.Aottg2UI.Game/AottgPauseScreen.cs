// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgPauseScreen
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgPauseScreen.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000267")]
[AottgScreen("pause", Title = "AoTTG 2 Paused", TitleKey = "Common.Paused", SearchTitle = "Paused", SearchTitleKey = "Common.Paused", SearchGroup = "in-game", BackActionId = "pause.back")]
public sealed class AottgPauseScreen : AottgScreen
{
	[Token(Token = "0x4000C64")]
	public const string Id = "pause";

	[Token(Token = "0x17000192")]
	protected override string RootStyle
	{
		[Token(Token = "0x6000E80")]
		[Address(RVA = "0x1DE4990", Offset = "0x1DE2F90", VA = "0x181DE4990", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000193")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000E81")]
		[Address(RVA = "0x1DE4880", Offset = "0x1DE2E80", VA = "0x181DE4880", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E82")]
	[Address(RVA = "0x1DE4200", Offset = "0x1DE2800", VA = "0x181DE4200", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000E83")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgPauseScreen()
	{
	}
}
