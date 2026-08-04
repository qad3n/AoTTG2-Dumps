// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgEmoteRadialMenu
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgEmoteRadialMenu.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001A1")]
public sealed class AottgEmoteRadialMenu : AottgComponent
{
	[Token(Token = "0x400091A")]
	private const float Width = 780f;

	[Token(Token = "0x400091B")]
	private const float Height = 560f;

	[Token(Token = "0x400091C")]
	private const float RadiusX = 300f;

	[Token(Token = "0x400091D")]
	private const float RadiusY = 220f;

	[Token(Token = "0x400091E")]
	private const float SlotWidth = 154f;

	[Token(Token = "0x400091F")]
	private const float SlotHeight = 96f;

	[Token(Token = "0x4000920")]
	private const float TextInsetX = 18f;

	[Token(Token = "0x4000921")]
	private const float TextInsetY = 10f;

	[Token(Token = "0x4000922")]
	private const float CenterWidth = 260f;

	[Token(Token = "0x4000923")]
	private const float CenterHeight = 132f;

	[Token(Token = "0x4000924")]
	[FieldOffset(Offset = "0x10")]
	private readonly bool _stickers;

	[Token(Token = "0x1700014E")]
	private string Suffix
	{
		[Token(Token = "0x60009DE")]
		[Address(RVA = "0x4418BF0", Offset = "0x4418BF0", VA = "0x4418BF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009DC")]
	[Address(RVA = "0x4418A10", Offset = "0x4418A10", VA = "0x4418A10")]
	public AottgEmoteRadialMenu(bool stickers)
	{
	}

	[Token(Token = "0x60009DD")]
	[Address(RVA = "0x4418A30", Offset = "0x4418A30", VA = "0x4418A30", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x60009DF")]
	[Address(RVA = "0x4418C40", Offset = "0x4418C40", VA = "0x4418C40")]
	private void Slot(AottgUi wheel, int index)
	{
	}

	[Token(Token = "0x60009E0")]
	[Address(RVA = "0x4419140", Offset = "0x4419140", VA = "0x4419140")]
	private static float AbsoluteX(float width, float xFromCenter)
	{
		return default(float);
	}

	[Token(Token = "0x60009E1")]
	[Address(RVA = "0x4419160", Offset = "0x4419160", VA = "0x4419160")]
	private static float AbsoluteY(float height, float yFromCenter)
	{
		return default(float);
	}

	[Token(Token = "0x60009E2")]
	[Address(RVA = "0x4419180", Offset = "0x4419180", VA = "0x4419180")]
	private GisketchNodeDefinition[] SlotChildren(int index, string value)
	{
		return null;
	}

	[Token(Token = "0x60009E3")]
	[Address(RVA = "0x4418F80", Offset = "0x4418F80", VA = "0x4418F80")]
	private static string Text(int index)
	{
		return null;
	}

	[Token(Token = "0x60009E4")]
	[Address(RVA = "0x4419060", Offset = "0x4419060", VA = "0x4419060")]
	private static string Sticker(int index)
	{
		return null;
	}

	[Token(Token = "0x60009E5")]
	[Address(RVA = "0x44195B0", Offset = "0x44195B0", VA = "0x44195B0")]
	private static string StickerSprite(string value)
	{
		return null;
	}
}
