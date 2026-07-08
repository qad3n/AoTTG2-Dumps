using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200019E")]
[AottgPopover("public-profile-hover", DismissOnBackdrop = false)]
public sealed class AottgPublicProfileHoverPopover : AottgPopover
{
	[Token(Token = "0x4000904")]
	public const string Id = "public-profile-hover";

	[Token(Token = "0x17000113")]
	protected override string RootStyle
	{
		[Token(Token = "0x6000982")]
		[Address(RVA = "0x40FEB20", Offset = "0x40FEB20", VA = "0x40FEB20", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000114")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000983")]
		[Address(RVA = "0x40FEB50", Offset = "0x40FEB50", VA = "0x40FEB50", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000984")]
	[Address(RVA = "0x40FEC20", Offset = "0x40FEC20", VA = "0x40FEC20", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000985")]
	[Address(RVA = "0x40FEDF0", Offset = "0x40FEDF0", VA = "0x40FEDF0")]
	private static void BuildLoading(AottgUi card)
	{
	}

	[Token(Token = "0x6000986")]
	[Address(RVA = "0x40FF030", Offset = "0x40FF030", VA = "0x40FF030")]
	private static void BuildReady(AottgUi card)
	{
	}

	[Token(Token = "0x6000987")]
	[Address(RVA = "0x40FF270", Offset = "0x40FF270", VA = "0x40FF270")]
	private static void BuildError(AottgUi card)
	{
	}

	[Token(Token = "0x6000988")]
	[Address(RVA = "0x40FF4D0", Offset = "0x40FF4D0", VA = "0x40FF4D0")]
	public AottgPublicProfileHoverPopover()
	{
	}
}
