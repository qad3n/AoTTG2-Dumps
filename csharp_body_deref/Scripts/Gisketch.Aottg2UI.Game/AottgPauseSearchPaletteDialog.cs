// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgPauseSearchPaletteDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgPauseSearchPaletteDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000268")]
[AottgDialog("aottg-pause-search-palette", Lifecycle = GisketchOverlayLifecycle.CachedReset)]
public sealed class AottgPauseSearchPaletteDialog : AottgDialog
{
	[Token(Token = "0x4000C65")]
	public const string Id = "aottg-pause-search-palette";

	[Token(Token = "0x17000194")]
	protected override string Title
	{
		[Token(Token = "0x6000E84")]
		[Address(RVA = "0x1DE4C30", Offset = "0x1DE3230", VA = "0x181DE4C30", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000195")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000E85")]
		[Address(RVA = "0x1DE4C00", Offset = "0x1DE3200", VA = "0x181DE4C00", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000196")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000E86")]
		[Address(RVA = "0x1DE4AF0", Offset = "0x1DE30F0", VA = "0x181DE4AF0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E87")]
	[Address(RVA = "0x1DE49C0", Offset = "0x1DE2FC0", VA = "0x181DE49C0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000E88")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgPauseSearchPaletteDialog()
	{
	}
}
