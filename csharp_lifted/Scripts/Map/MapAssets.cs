// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapAssets
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapAssets.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Map;

[Token(Token = "0x20003EE")]
internal class MapAssets
{
	[Token(Token = "0x400141C")]
	[FieldOffset(Offset = "0x0")]
	public static string NavMeshRegion;

	[Token(Token = "0x400141D")]
	[FieldOffset(Offset = "0x8")]
	public static string NavMeshObstacle;

	[Token(Token = "0x6001905")]
	[Address(RVA = "0x58798E0", Offset = "0x58788E0", VA = "0x58798E0")]
	public static bool HasEditorMaterial(string asset)
	{
		// Lifted from source/cpp/Map/MapAssets.c (Map.MapAssets$$HasEditorMaterial): clean
		bool bVar1;

		bVar1 = (asset == MapAssets.NavMeshRegion);
		if (bVar1) {
			return true;
		}
		bVar1 = (asset == MapAssets.NavMeshObstacle);
		return bVar1;
	}

	[Token(Token = "0x6001906")]
	[Address(RVA = "0x5879970", Offset = "0x5878970", VA = "0x5879970")]
	public MapAssets()
	{
		// Lifted from source/cpp/Map/MapAssets.c (Map.MapAssets$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Map/MapAssets.c.

	// Map.MapAssets$$.cctor: clean
	static MapAssets()
	{

		MapAssets.NavMeshRegion = "Geometry/NavMeshRegion";
		MapAssets.NavMeshObstacle = "Geometry/NavMeshObstacle";
		return;
	}
}
