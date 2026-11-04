// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapAssets
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Map/MapAssets.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Map;

[Token(Token = "0x2000393")]
internal class MapAssets
{
	[Token(Token = "0x400128A")]
	[FieldOffset(Offset = "0x0")]
	public static string NavMeshRegion;

	[Token(Token = "0x400128B")]
	[FieldOffset(Offset = "0x8")]
	public static string NavMeshObstacle;

	[Token(Token = "0x60016A0")]
	[Address(RVA = "0x1E8B420", Offset = "0x1E89A20", VA = "0x181E8B420")]
	public static bool HasEditorMaterial(string asset)
	{
		return default(bool);
	}

	[Token(Token = "0x60016A1")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public MapAssets()
	{
	}
}
