using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000149")]
[AottgScreen("main-menu", Title = "AoTTG 2 Main Menu", SearchTitle = "Menu", SearchGroup = "main-menu")]
public sealed class AottgMainMenuScreen : AottgScreen
{
	[Token(Token = "0x400078E")]
	public const string Id = "main-menu";

	[Token(Token = "0x400078F")]
	private const string AccountBannerMotion = "mainMenuTipPanel";

	[Token(Token = "0x170000DE")]
	protected override string RootStyle
	{
		[Token(Token = "0x60006FD")]
		[Address(RVA = "0x40C69F0", Offset = "0x40C69F0", VA = "0x40C69F0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DF")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60006FE")]
		[Address(RVA = "0x40C6A20", Offset = "0x40C6A20", VA = "0x40C6A20", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60006FF")]
	[Address(RVA = "0x40C6AF0", Offset = "0x40C6AF0", VA = "0x40C6AF0", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000700")]
	[Address(RVA = "0x40C6E30", Offset = "0x40C6E30", VA = "0x40C6E30")]
	public AottgMainMenuScreen()
	{
	}
}
