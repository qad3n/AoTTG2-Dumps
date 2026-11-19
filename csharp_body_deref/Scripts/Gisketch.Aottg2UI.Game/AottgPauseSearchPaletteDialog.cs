// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgPauseSearchPaletteDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgPauseSearchPaletteDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200028E")]
[AottgDialog("aottg-pause-search-palette", Lifecycle = GisketchOverlayLifecycle.CachedReset)]
public sealed class AottgPauseSearchPaletteDialog : AottgDialog
{
	[Token(Token = "0x4000D15")]
	public const string Id = "aottg-pause-search-palette";

	[Token(Token = "0x1700019F")]
	protected override string Title
	{
		[Token(Token = "0x6000F93")]
		[Address(RVA = "0x57B4E40", Offset = "0x57B3E40", VA = "0x57B4E40", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A0")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000F94")]
		[Address(RVA = "0x57B4EA0", Offset = "0x57B3EA0", VA = "0x57B4EA0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A1")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000F95")]
		[Address(RVA = "0x57B4ED0", Offset = "0x57B3ED0", VA = "0x57B4ED0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F96")]
	[Address(RVA = "0x57B4FB0", Offset = "0x57B3FB0", VA = "0x57B4FB0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000F97")]
	[Address(RVA = "0x57B50D0", Offset = "0x57B40D0", VA = "0x57B50D0")]
	public AottgPauseSearchPaletteDialog()
	{
	}
}
