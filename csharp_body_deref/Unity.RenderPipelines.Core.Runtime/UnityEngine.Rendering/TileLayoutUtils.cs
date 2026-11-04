// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.TileLayoutUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001EF")]
public static class TileLayoutUtils
{
	[Token(Token = "0x6000EBB")]
	[Address(RVA = "0x2B63FA0", Offset = "0x2B625A0", VA = "0x182B63FA0")]
	public static bool TryLayoutByTiles(RectInt src, uint tileSize, out RectInt main, out RectInt topRow, out RectInt rightCol, out RectInt topRight)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EBC")]
	[Address(RVA = "0x2B63ED0", Offset = "0x2B624D0", VA = "0x182B63ED0")]
	public static bool TryLayoutByRow(RectInt src, uint tileSize, out RectInt main, out RectInt other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EBD")]
	[Address(RVA = "0x2B63E00", Offset = "0x2B62400", VA = "0x182B63E00")]
	public static bool TryLayoutByCol(RectInt src, uint tileSize, out RectInt main, out RectInt other)
	{
		return default(bool);
	}
}
