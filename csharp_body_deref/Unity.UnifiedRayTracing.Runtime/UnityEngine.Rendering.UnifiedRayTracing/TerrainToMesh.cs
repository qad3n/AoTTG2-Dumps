// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.TerrainToMesh
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x67849D0", Offset = "0x67839D0", VA = "0x67849D0")]
	private static AsyncTerrainToMeshRequest MakeAsyncTerrainToMeshRequest(int width, int height, Vector3 heightmapScale, float[,] heightmap, bool[,] holes)
	{
		return default(AsyncTerrainToMeshRequest);
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x6784F90", Offset = "0x6783F90", VA = "0x6784F90")]
	public static AsyncTerrainToMeshRequest ConvertAsync(Terrain terrain)
	{
		return default(AsyncTerrainToMeshRequest);
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x67850C0", Offset = "0x67840C0", VA = "0x67850C0")]
	public static AsyncTerrainToMeshRequest ConvertAsync(int heightmapWidth, int heightmapHeight, short[] heightmapData, Vector3 heightmapScale, int holeWidth, int holeHeight, byte[] holedata)
	{
		return default(AsyncTerrainToMeshRequest);
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x677DA40", Offset = "0x677CA40", VA = "0x677DA40")]
	public static Mesh Convert(Terrain terrain)
	{
		return null;
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x6785510", Offset = "0x6784510", VA = "0x6785510")]
	public static Mesh Convert(int heightmapWidth, int heightmapHeight, short[] heightmapData, Vector3 heightmapScale, int holeWidth, int holeHeight, byte[] holedata)
	{
		return null;
	}
}
