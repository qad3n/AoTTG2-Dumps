// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHoverPopover.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000337")]
[AottgPopover("public-profile-hover", DismissOnBackdrop = false)]
public sealed class AottgPublicProfileHoverPopover : AottgPopover
{
	[Token(Token = "0x4001010")]
	public const string Id = "public-profile-hover";

	[Token(Token = "0x17000234")]
	protected override string RootStyle
	{
		[Token(Token = "0x6001424")]
		[Address(RVA = "0x580DC50", Offset = "0x580CC50", VA = "0x580DC50", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000235")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6001425")]
		[Address(RVA = "0x580DC80", Offset = "0x580CC80", VA = "0x580DC80", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001426")]
	[Address(RVA = "0x580DD40", Offset = "0x580CD40", VA = "0x580DD40", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6001427")]
	[Address(RVA = "0x580DF10", Offset = "0x580CF10", VA = "0x580DF10")]
	private static void BuildLoading(AottgUi card)
	{
	}

	[Token(Token = "0x6001428")]
	[Address(RVA = "0x580E150", Offset = "0x580D150", VA = "0x580E150")]
	private static void BuildReady(AottgUi card)
	{
	}

	[Token(Token = "0x6001429")]
	[Address(RVA = "0x580E390", Offset = "0x580D390", VA = "0x580E390")]
	private static void BuildError(AottgUi card)
	{
	}

	[Token(Token = "0x600142A")]
	[Address(RVA = "0x580E5F0", Offset = "0x580D5F0", VA = "0x580E5F0")]
	public AottgPublicProfileHoverPopover()
	{
	}
}
