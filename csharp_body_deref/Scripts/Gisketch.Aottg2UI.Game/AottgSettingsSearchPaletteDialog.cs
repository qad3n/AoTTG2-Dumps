// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgSettingsSearchPaletteDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsSearchPaletteDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002E1")]
[AottgDialog("aottg-settings-search-palette", Lifecycle = GisketchOverlayLifecycle.CachedReset)]
public sealed class AottgSettingsSearchPaletteDialog : AottgDialog
{
	[Token(Token = "0x4000EA3")]
	public const string Id = "aottg-settings-search-palette";

	[Token(Token = "0x170001FB")]
	protected override string Title
	{
		[Token(Token = "0x6001206")]
		[Address(RVA = "0x1E31FC0", Offset = "0x1E305C0", VA = "0x181E31FC0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001FC")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6001207")]
		[Address(RVA = "0x1E31F90", Offset = "0x1E30590", VA = "0x181E31F90", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001FD")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6001208")]
		[Address(RVA = "0x1E31E80", Offset = "0x1E30480", VA = "0x181E31E80", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001209")]
	[Address(RVA = "0x1E31DC0", Offset = "0x1E303C0", VA = "0x181E31DC0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x600120A")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgSettingsSearchPaletteDialog()
	{
	}
}
