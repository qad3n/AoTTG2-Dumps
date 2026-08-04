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

[Token(Token = "0x20001D1")]
[AottgPopover("public-profile-hover", DismissOnBackdrop = false)]
public sealed class AottgPublicProfileHoverPopover : AottgPopover
{
	[Token(Token = "0x40009CA")]
	public const string Id = "public-profile-hover";

	[Token(Token = "0x17000169")]
	protected override string RootStyle
	{
		[Token(Token = "0x6000AFF")]
		[Address(RVA = "0x442FA50", Offset = "0x442FA50", VA = "0x442FA50", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016A")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000B00")]
		[Address(RVA = "0x442FA80", Offset = "0x442FA80", VA = "0x442FA80", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B01")]
	[Address(RVA = "0x442FB50", Offset = "0x442FB50", VA = "0x442FB50", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000B02")]
	[Address(RVA = "0x442FD20", Offset = "0x442FD20", VA = "0x442FD20")]
	private static void BuildLoading(AottgUi card)
	{
	}

	[Token(Token = "0x6000B03")]
	[Address(RVA = "0x442FF60", Offset = "0x442FF60", VA = "0x442FF60")]
	private static void BuildReady(AottgUi card)
	{
	}

	[Token(Token = "0x6000B04")]
	[Address(RVA = "0x44301A0", Offset = "0x44301A0", VA = "0x44301A0")]
	private static void BuildError(AottgUi card)
	{
	}

	[Token(Token = "0x6000B05")]
	[Address(RVA = "0x4430400", Offset = "0x4430400", VA = "0x4430400")]
	public AottgPublicProfileHoverPopover()
	{
	}
}
