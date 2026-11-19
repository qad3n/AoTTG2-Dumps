// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgSettingsSearchPaletteDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsSearchPaletteDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200033E")]
[AottgDialog("aottg-settings-search-palette", Lifecycle = GisketchOverlayLifecycle.CachedReset)]
public sealed class AottgSettingsSearchPaletteDialog : AottgDialog
{
	[Token(Token = "0x4001031")]
	public const string Id = "aottg-settings-search-palette";

	[Token(Token = "0x17000238")]
	protected override string Title
	{
		[Token(Token = "0x6001458")]
		[Address(RVA = "0x5811ED0", Offset = "0x5810ED0", VA = "0x5811ED0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000239")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6001459")]
		[Address(RVA = "0x5811F30", Offset = "0x5810F30", VA = "0x5811F30", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700023A")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x600145A")]
		[Address(RVA = "0x5811F60", Offset = "0x5810F60", VA = "0x5811F60", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600145B")]
	[Address(RVA = "0x5812040", Offset = "0x5811040", VA = "0x5812040", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x600145C")]
	[Address(RVA = "0x58120F0", Offset = "0x58110F0", VA = "0x58120F0")]
	public AottgSettingsSearchPaletteDialog()
	{
	}
}
