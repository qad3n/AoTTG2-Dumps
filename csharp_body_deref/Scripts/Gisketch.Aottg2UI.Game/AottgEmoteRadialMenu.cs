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

[Token(Token = "0x2000304")]
public sealed class AottgEmoteRadialMenu : AottgComponent
{
	[Token(Token = "0x4000F56")]
	private const float Width = 780f;

	[Token(Token = "0x4000F57")]
	private const float Height = 560f;

	[Token(Token = "0x4000F58")]
	private const float RadiusX = 300f;

	[Token(Token = "0x4000F59")]
	private const float RadiusY = 220f;

	[Token(Token = "0x4000F5A")]
	private const float SlotWidth = 154f;

	[Token(Token = "0x4000F5B")]
	private const float SlotHeight = 96f;

	[Token(Token = "0x4000F5C")]
	private const float TextInsetX = 18f;

	[Token(Token = "0x4000F5D")]
	private const float TextInsetY = 10f;

	[Token(Token = "0x4000F5E")]
	private const float CenterWidth = 260f;

	[Token(Token = "0x4000F5F")]
	private const float CenterHeight = 132f;

	[Token(Token = "0x4000F60")]
	[FieldOffset(Offset = "0x10")]
	private readonly bool _stickers;

	[Token(Token = "0x17000212")]
	private string Suffix
	{
		[Token(Token = "0x60012EC")]
		[Address(RVA = "0x57F5DF0", Offset = "0x57F4DF0", VA = "0x57F5DF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60012EA")]
	[Address(RVA = "0x57F5C10", Offset = "0x57F4C10", VA = "0x57F5C10")]
	public AottgEmoteRadialMenu(bool stickers)
	{
	}

	[Token(Token = "0x60012EB")]
	[Address(RVA = "0x57F5C30", Offset = "0x57F4C30", VA = "0x57F5C30", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x60012ED")]
	[Address(RVA = "0x57F5E40", Offset = "0x57F4E40", VA = "0x57F5E40")]
	private void Slot(AottgUi wheel, int index)
	{
	}

	[Token(Token = "0x60012EE")]
	[Address(RVA = "0x57F6340", Offset = "0x57F5340", VA = "0x57F6340")]
	private static float AbsoluteX(float width, float xFromCenter)
	{
		return default(float);
	}

	[Token(Token = "0x60012EF")]
	[Address(RVA = "0x57F6360", Offset = "0x57F5360", VA = "0x57F6360")]
	private static float AbsoluteY(float height, float yFromCenter)
	{
		return default(float);
	}

	[Token(Token = "0x60012F0")]
	[Address(RVA = "0x57F6380", Offset = "0x57F5380", VA = "0x57F6380")]
	private GisketchNodeDefinition[] SlotChildren(int index, string value)
	{
		return null;
	}

	[Token(Token = "0x60012F1")]
	[Address(RVA = "0x57F6180", Offset = "0x57F5180", VA = "0x57F6180")]
	private static string Text(int index)
	{
		return null;
	}

	[Token(Token = "0x60012F2")]
	[Address(RVA = "0x57F6260", Offset = "0x57F5260", VA = "0x57F6260")]
	private static string Sticker(int index)
	{
		return null;
	}

	[Token(Token = "0x60012F3")]
	[Address(RVA = "0x57F66E0", Offset = "0x57F56E0", VA = "0x57F66E0")]
	private static string StickerSprite(string value)
	{
		return null;
	}
}
