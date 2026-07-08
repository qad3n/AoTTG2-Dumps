using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200016F")]
public sealed class AottgEmoteRadialMenu : AottgComponent
{
	[Token(Token = "0x4000856")]
	private const float Width = 780f;

	[Token(Token = "0x4000857")]
	private const float Height = 560f;

	[Token(Token = "0x4000858")]
	private const float RadiusX = 300f;

	[Token(Token = "0x4000859")]
	private const float RadiusY = 220f;

	[Token(Token = "0x400085A")]
	private const float SlotWidth = 154f;

	[Token(Token = "0x400085B")]
	private const float SlotHeight = 96f;

	[Token(Token = "0x400085C")]
	private const float TextInsetX = 18f;

	[Token(Token = "0x400085D")]
	private const float TextInsetY = 10f;

	[Token(Token = "0x400085E")]
	private const float CenterWidth = 260f;

	[Token(Token = "0x400085F")]
	private const float CenterHeight = 132f;

	[Token(Token = "0x4000860")]
	[FieldOffset(Offset = "0x10")]
	private readonly bool _stickers;

	[Token(Token = "0x170000F8")]
	private string Suffix
	{
		[Token(Token = "0x6000868")]
		[Address(RVA = "0x40E7BF0", Offset = "0x40E7BF0", VA = "0x40E7BF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000866")]
	[Address(RVA = "0x40E7A10", Offset = "0x40E7A10", VA = "0x40E7A10")]
	public AottgEmoteRadialMenu(bool stickers)
	{
	}

	[Token(Token = "0x6000867")]
	[Address(RVA = "0x40E7A30", Offset = "0x40E7A30", VA = "0x40E7A30", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000869")]
	[Address(RVA = "0x40E7C40", Offset = "0x40E7C40", VA = "0x40E7C40")]
	private void Slot(AottgUi wheel, int index)
	{
	}

	[Token(Token = "0x600086A")]
	[Address(RVA = "0x40E8140", Offset = "0x40E8140", VA = "0x40E8140")]
	private static float AbsoluteX(float width, float xFromCenter)
	{
		return default(float);
	}

	[Token(Token = "0x600086B")]
	[Address(RVA = "0x40E8160", Offset = "0x40E8160", VA = "0x40E8160")]
	private static float AbsoluteY(float height, float yFromCenter)
	{
		return default(float);
	}

	[Token(Token = "0x600086C")]
	[Address(RVA = "0x40E8180", Offset = "0x40E8180", VA = "0x40E8180")]
	private GisketchNodeDefinition[] SlotChildren(int index, string value)
	{
		return null;
	}

	[Token(Token = "0x600086D")]
	[Address(RVA = "0x40E7F80", Offset = "0x40E7F80", VA = "0x40E7F80")]
	private static string Text(int index)
	{
		return null;
	}

	[Token(Token = "0x600086E")]
	[Address(RVA = "0x40E8060", Offset = "0x40E8060", VA = "0x40E8060")]
	private static string Sticker(int index)
	{
		return null;
	}

	[Token(Token = "0x600086F")]
	[Address(RVA = "0x40E84D0", Offset = "0x40E84D0", VA = "0x40E84D0")]
	private static string StickerSprite(string value)
	{
		return null;
	}
}
