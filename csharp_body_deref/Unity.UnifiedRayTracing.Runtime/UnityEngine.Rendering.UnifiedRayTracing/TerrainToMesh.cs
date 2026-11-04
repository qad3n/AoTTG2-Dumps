// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.TerrainToMesh
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.UnifiedRayTracing;

[Token(Token = "0x2000039")]
internal static class TerrainToMesh
{
	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x2D94E50", Offset = "0x2D93450", VA = "0x182D94E50")]
	private static AsyncTerrainToMeshRequest MakeAsyncTerrainToMeshRequest(int width, int height, Vector3 heightmapScale, float[,] heightmap, bool[,] holes)
	{
		return default(AsyncTerrainToMeshRequest);
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x2D949B0", Offset = "0x2D92FB0", VA = "0x182D949B0")]
	public static AsyncTerrainToMeshRequest ConvertAsync(Terrain terrain)
	{
		return default(AsyncTerrainToMeshRequest);
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x2D946A0", Offset = "0x2D92CA0", VA = "0x182D946A0")]
	public static AsyncTerrainToMeshRequest ConvertAsync(int heightmapWidth, int heightmapHeight, short[] heightmapData, Vector3 heightmapScale, int holeWidth, int holeHeight, byte[] holedata)
	{
		return default(AsyncTerrainToMeshRequest);
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x2D94C60", Offset = "0x2D93260", VA = "0x182D94C60")]
	public static Mesh Convert(Terrain terrain)
	{
		return null;
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x2D94B60", Offset = "0x2D93160", VA = "0x182D94B60")]
	public static Mesh Convert(int heightmapWidth, int heightmapHeight, short[] heightmapData, Vector3 heightmapScale, int holeWidth, int holeHeight, byte[] holedata)
	{
		return null;
	}
}
