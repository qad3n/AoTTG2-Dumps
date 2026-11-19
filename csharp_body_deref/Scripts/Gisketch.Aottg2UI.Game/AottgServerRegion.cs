// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgServerRegion
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgServerRegion.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002DE")]
public readonly struct AottgServerRegion
{
	[Token(Token = "0x4000E78")]
	private const string SpriteRoot = "UI/Sprites/ServerSelect/";

	[Token(Token = "0x4000E79")]
	[FieldOffset(Offset = "0x0")]
	public static readonly AottgServerRegion[] All;

	[Token(Token = "0x4000E7A")]
	[FieldOffset(Offset = "0x0")]
	public readonly string Id;

	[Token(Token = "0x4000E7B")]
	[FieldOffset(Offset = "0x8")]
	public readonly string Label;

	[Token(Token = "0x4000E7C")]
	[FieldOffset(Offset = "0x10")]
	public readonly MultiplayerRegion Region;

	[Token(Token = "0x4000E7D")]
	[FieldOffset(Offset = "0x18")]
	public readonly string MaskSprite;

	[Token(Token = "0x4000E7E")]
	[FieldOffset(Offset = "0x20")]
	public readonly Rect MaskArea;

	[Token(Token = "0x4000E7F")]
	[FieldOffset(Offset = "0x30")]
	public readonly Vector2 LabelPoint;

	[Token(Token = "0x170001F6")]
	public static string MapSprite
	{
		[Token(Token = "0x600115F")]
		[Address(RVA = "0x57D2870", Offset = "0x57D1870", VA = "0x57D2870")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600115E")]
	[Address(RVA = "0x57D27C0", Offset = "0x57D17C0", VA = "0x57D27C0")]
	private AottgServerRegion(string id, string label, MultiplayerRegion region, string mask, Rect maskArea, Vector2 labelPoint)
	{
	}

	[Token(Token = "0x6001160")]
	[Address(RVA = "0x57D28A0", Offset = "0x57D18A0", VA = "0x57D28A0")]
	private static Rect Area(float centerX, float centerY, float width, float height)
	{
		return default(Rect);
	}
}
