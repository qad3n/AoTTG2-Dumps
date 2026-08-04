// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgMainMenuScreen
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuScreen.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200017B")]
[AottgScreen("main-menu", Title = "AoTTG 2 Main Menu", SearchTitle = "Menu", SearchGroup = "main-menu")]
public sealed class AottgMainMenuScreen : AottgScreen
{
	[Token(Token = "0x400084D")]
	public const string Id = "main-menu";

	[Token(Token = "0x400084E")]
	private const string AccountBannerMotion = "mainMenuTipPanel";

	[Token(Token = "0x17000134")]
	protected override string RootStyle
	{
		[Token(Token = "0x600086A")]
		[Address(RVA = "0x43F7880", Offset = "0x43F7880", VA = "0x43F7880", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000135")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x600086B")]
		[Address(RVA = "0x43F78B0", Offset = "0x43F78B0", VA = "0x43F78B0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600086C")]
	[Address(RVA = "0x43F7980", Offset = "0x43F7980", VA = "0x43F7980", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x600086D")]
	[Address(RVA = "0x43F7CB0", Offset = "0x43F7CB0", VA = "0x43F7CB0")]
	public AottgMainMenuScreen()
	{
	}
}
