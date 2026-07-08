using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001D1")]
public static class TileLayoutUtils
{
	[Token(Token = "0x6000D44")]
	[Address(RVA = "0x48DEDF0", Offset = "0x48DEDF0", VA = "0x48DEDF0")]
	public static bool TryLayoutByTiles(RectInt src, uint tileSize, out RectInt main, out RectInt topRow, out RectInt rightCol, out RectInt topRight)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D45")]
	[Address(RVA = "0x48DEEA0", Offset = "0x48DEEA0", VA = "0x48DEEA0")]
	public static bool TryLayoutByRow(RectInt src, uint tileSize, out RectInt main, out RectInt other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D46")]
	[Address(RVA = "0x48DEF30", Offset = "0x48DEF30", VA = "0x48DEF30")]
	public static bool TryLayoutByCol(RectInt src, uint tileSize, out RectInt main, out RectInt other)
	{
		return default(bool);
	}
}
