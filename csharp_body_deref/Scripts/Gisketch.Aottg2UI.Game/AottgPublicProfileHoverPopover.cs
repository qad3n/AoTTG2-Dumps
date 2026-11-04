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

[Token(Token = "0x20002DA")]
[AottgPopover("public-profile-hover", DismissOnBackdrop = false)]
public sealed class AottgPublicProfileHoverPopover : AottgPopover
{
	[Token(Token = "0x4000E82")]
	public const string Id = "public-profile-hover";

	[Token(Token = "0x170001F7")]
	protected override string RootStyle
	{
		[Token(Token = "0x60011D2")]
		[Address(RVA = "0x1E2C630", Offset = "0x1E2AC30", VA = "0x181E2C630", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F8")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60011D3")]
		[Address(RVA = "0x1E2C540", Offset = "0x1E2AB40", VA = "0x181E2C540", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60011D4")]
	[Address(RVA = "0x1E2C320", Offset = "0x1E2A920", VA = "0x181E2C320", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x60011D5")]
	[Address(RVA = "0x1E2BE00", Offset = "0x1E2A400", VA = "0x181E2BE00")]
	private static void BuildLoading(AottgUi card)
	{
	}

	[Token(Token = "0x60011D6")]
	[Address(RVA = "0x1E2C090", Offset = "0x1E2A690", VA = "0x181E2C090")]
	private static void BuildReady(AottgUi card)
	{
	}

	[Token(Token = "0x60011D7")]
	[Address(RVA = "0x1E2BB50", Offset = "0x1E2A150", VA = "0x181E2BB50")]
	private static void BuildError(AottgUi card)
	{
	}

	[Token(Token = "0x60011D8")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgPublicProfileHoverPopover()
	{
	}
}
