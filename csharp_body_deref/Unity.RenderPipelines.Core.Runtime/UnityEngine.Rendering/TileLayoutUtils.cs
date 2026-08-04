// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.TileLayoutUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001D1")]
public static class TileLayoutUtils
{
	[Token(Token = "0x6000D44")]
	[Address(RVA = "0x4C03E60", Offset = "0x4C03E60", VA = "0x4C03E60")]
	public static bool TryLayoutByTiles(RectInt src, uint tileSize, out RectInt main, out RectInt topRow, out RectInt rightCol, out RectInt topRight)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D45")]
	[Address(RVA = "0x4C03F10", Offset = "0x4C03F10", VA = "0x4C03F10")]
	public static bool TryLayoutByRow(RectInt src, uint tileSize, out RectInt main, out RectInt other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D46")]
	[Address(RVA = "0x4C03FA0", Offset = "0x4C03FA0", VA = "0x4C03FA0")]
	public static bool TryLayoutByCol(RectInt src, uint tileSize, out RectInt main, out RectInt other)
	{
		return default(bool);
	}
}
