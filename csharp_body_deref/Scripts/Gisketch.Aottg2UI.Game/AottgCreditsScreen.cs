using ApplicationManagers.Credits;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000127")]
[AottgScreen("credits", Title = "AoTTG 2 Credits", SearchTitle = "Credits", SearchGroup = "main-menu", BackScreenId = "main-menu")]
public sealed class AottgCreditsScreen : AottgScreen
{
	[Token(Token = "0x40006DF")]
	public const string Id = "credits";

	[Token(Token = "0x40006E0")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AottgBrushSidePanelOption[] Footer;

	[Token(Token = "0x170000C0")]
	protected override string RootStyle
	{
		[Token(Token = "0x6000629")]
		[Address(RVA = "0x4070810", Offset = "0x4070810", VA = "0x4070810", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C1")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x600062A")]
		[Address(RVA = "0x4070840", Offset = "0x4070840", VA = "0x4070840", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000628")]
	[Address(RVA = "0x4070550", Offset = "0x4070550", VA = "0x4070550")]
	static AottgCreditsScreen()
	{
	}

	[Token(Token = "0x600062B")]
	[Address(RVA = "0x4070910", Offset = "0x4070910", VA = "0x4070910", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x600062C")]
	[Address(RVA = "0x4070A00", Offset = "0x4070A00", VA = "0x4070A00")]
	private static AottgScreenSection[] Sections()
	{
		return null;
	}

	[Token(Token = "0x600062D")]
	[Address(RVA = "0x4070DA0", Offset = "0x4070DA0", VA = "0x4070DA0")]
	private static AottgScreenSection[] CreditSections(AottgCreditsResponse credits)
	{
		return null;
	}

	[Token(Token = "0x600062E")]
	[Address(RVA = "0x40711B0", Offset = "0x40711B0", VA = "0x40711B0")]
	private static void BuildCredits(AottgUi content, AottgScreenSectionContext context)
	{
	}

	[Token(Token = "0x600062F")]
	[Address(RVA = "0x40713B0", Offset = "0x40713B0", VA = "0x40713B0")]
	private static void BuildLoading(AottgUi ui)
	{
	}

	[Token(Token = "0x6000630")]
	[Address(RVA = "0x4071610", Offset = "0x4071610", VA = "0x4071610")]
	private static void BuildReadyPlaceholder(AottgUi ui)
	{
	}

	[Token(Token = "0x6000631")]
	[Address(RVA = "0x4071870", Offset = "0x4071870", VA = "0x4071870")]
	private static void BuildEmpty(AottgUi ui)
	{
	}

	[Token(Token = "0x6000632")]
	[Address(RVA = "0x4071AD0", Offset = "0x4071AD0", VA = "0x4071AD0")]
	private static void BuildError(AottgUi ui)
	{
	}

	[Token(Token = "0x6000633")]
	[Address(RVA = "0x4071D30", Offset = "0x4071D30", VA = "0x4071D30")]
	public AottgCreditsScreen()
	{
	}
}
