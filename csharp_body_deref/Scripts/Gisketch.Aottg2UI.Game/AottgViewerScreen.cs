// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgViewerScreen
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgViewerScreen.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000359")]
public abstract class AottgViewerScreen : AottgScreen
{
	[Token(Token = "0x40010CA")]
	private const string CounterKey = "viewer.counter";

	[Token(Token = "0x40010CB")]
	private const float CounterMargin = 24f;

	[Token(Token = "0x40010CC")]
	private const float CounterWidth = 160f;

	[Token(Token = "0x40010CD")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AottgBrushSidePanelOption[] Footer;

	[Token(Token = "0x40010CE")]
	[FieldOffset(Offset = "0x8")]
	protected static readonly AottgBrushSidePanelOption[] StepOptions;

	[Token(Token = "0x17000242")]
	protected abstract string ViewerId
	{
		[Token(Token = "0x60014DF")]
		get;
	}

	[Token(Token = "0x17000243")]
	protected abstract string PanelTitleKey
	{
		[Token(Token = "0x60014E0")]
		get;
	}

	[Token(Token = "0x17000244")]
	protected virtual AottgBrushSidePanelOption[] Options
	{
		[Token(Token = "0x60014E1")]
		[Address(RVA = "0x5819620", Offset = "0x5818620", VA = "0x5819620", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000245")]
	protected override string RootStyle
	{
		[Token(Token = "0x60014E2")]
		[Address(RVA = "0x5819690", Offset = "0x5818690", VA = "0x5819690", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000246")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60014E3")]
		[Address(RVA = "0x58196C0", Offset = "0x58186C0", VA = "0x58196C0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60014E4")]
	[Address(RVA = "0x5819790", Offset = "0x5818790", VA = "0x5819790", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x60014E5")]
	[Address(RVA = "0x5819A70", Offset = "0x5818A70", VA = "0x5819A70")]
	public static void SetCounter(int position, int count)
	{
	}

	[Token(Token = "0x60014E6")]
	[Address(RVA = "0x5819B10", Offset = "0x5818B10", VA = "0x5819B10")]
	protected AottgViewerScreen()
	{
	}
}
