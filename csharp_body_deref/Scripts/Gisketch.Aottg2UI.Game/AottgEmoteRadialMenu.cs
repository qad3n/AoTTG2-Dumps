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

[Token(Token = "0x20002A7")]
public sealed class AottgEmoteRadialMenu : AottgComponent
{
	[Token(Token = "0x4000DC1")]
	private const float Width = 780f;

	[Token(Token = "0x4000DC2")]
	private const float Height = 560f;

	[Token(Token = "0x4000DC3")]
	private const float RadiusX = 300f;

	[Token(Token = "0x4000DC4")]
	private const float RadiusY = 220f;

	[Token(Token = "0x4000DC5")]
	private const float SlotWidth = 154f;

	[Token(Token = "0x4000DC6")]
	private const float SlotHeight = 96f;

	[Token(Token = "0x4000DC7")]
	private const float TextInsetX = 18f;

	[Token(Token = "0x4000DC8")]
	private const float TextInsetY = 10f;

	[Token(Token = "0x4000DC9")]
	private const float CenterWidth = 260f;

	[Token(Token = "0x4000DCA")]
	private const float CenterHeight = 132f;

	[Token(Token = "0x4000DCB")]
	[FieldOffset(Offset = "0x10")]
	private readonly bool _stickers;

	[Token(Token = "0x170001D5")]
	private string Suffix
	{
		[Token(Token = "0x600109B")]
		[Address(RVA = "0x1E11EE0", Offset = "0x1E104E0", VA = "0x181E11EE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001099")]
	[Address(RVA = "0x1A291A0", Offset = "0x1A277A0", VA = "0x181A291A0")]
	public AottgEmoteRadialMenu(bool stickers)
	{
	}

	[Token(Token = "0x600109A")]
	[Address(RVA = "0x1E10D50", Offset = "0x1E0F350", VA = "0x181E10D50", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x600109C")]
	[Address(RVA = "0x1E11450", Offset = "0x1E0FA50", VA = "0x181E11450")]
	private void Slot(AottgUi wheel, int index)
	{
	}

	[Token(Token = "0x600109D")]
	[Address(RVA = "0x1E10D10", Offset = "0x1E0F310", VA = "0x181E10D10")]
	private static float AbsoluteX(float width, float xFromCenter)
	{
		return default(float);
	}

	[Token(Token = "0x600109E")]
	[Address(RVA = "0x1E10D30", Offset = "0x1E0F330", VA = "0x181E10D30")]
	private static float AbsoluteY(float height, float yFromCenter)
	{
		return default(float);
	}

	[Token(Token = "0x600109F")]
	[Address(RVA = "0x1E10F40", Offset = "0x1E0F540", VA = "0x181E10F40")]
	private GisketchNodeDefinition[] SlotChildren(int index, string value)
	{
		return null;
	}

	[Token(Token = "0x60010A0")]
	[Address(RVA = "0x1E11A90", Offset = "0x1E10090", VA = "0x181E11A90")]
	private static string Text(int index)
	{
		return null;
	}

	[Token(Token = "0x60010A1")]
	[Address(RVA = "0x1E119A0", Offset = "0x1E0FFA0", VA = "0x181E119A0")]
	private static string Sticker(int index)
	{
		return null;
	}

	[Token(Token = "0x60010A2")]
	[Address(RVA = "0x1E11990", Offset = "0x1E0FF90", VA = "0x181E11990")]
	private static string StickerSprite(string value)
	{
		return null;
	}
}
