// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TerrainUtils.TerrainMap
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.TerrainUtils;

[Token(Token = "0x200000B")]
public class TerrainMap
{
	[Token(Token = "0x400001C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private Vector3 m_patchSize;

	[Token(Token = "0x400001D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private TerrainMapStatusCode m_errorCode;

	[Token(Token = "0x400001E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Dictionary<TerrainTileCoord, Terrain> m_terrainTiles;

	[Token(Token = "0x17000007")]
	public Dictionary<TerrainTileCoord, Terrain> terrainTiles
	{
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x4EA1210", Offset = "0x4EA1210", VA = "0x4EA1210")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4EA0370", Offset = "0x4EA0370", VA = "0x4EA0370")]
	public Terrain GetTerrain(int tileX, int tileZ)
	{
		return null;
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x4EA03E0", Offset = "0x4EA03E0", VA = "0x4EA03E0")]
	public static TerrainMap CreateFromPlacement(Terrain originTerrain, [Optional] Predicate<Terrain> filter, bool fullValidation = true)
	{
		return null;
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4EA08B0", Offset = "0x4EA08B0", VA = "0x4EA08B0")]
	public static TerrainMap CreateFromPlacement(Vector2 gridOrigin, Vector2 gridSize, [Optional] Predicate<Terrain> filter, bool fullValidation = true)
	{
		return null;
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x4EA0ED0", Offset = "0x4EA0ED0", VA = "0x4EA0ED0")]
	public TerrainMap()
	{
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4EA1220", Offset = "0x4EA1220", VA = "0x4EA1220")]
	private void AddTerrainInternal(int x, int z, Terrain terrain)
	{
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4EA0F50", Offset = "0x4EA0F50", VA = "0x4EA0F50")]
	private bool TryToAddTerrain(int tileX, int tileZ, Terrain terrain)
	{
		return default(bool);
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x4EA13E0", Offset = "0x4EA13E0", VA = "0x4EA13E0")]
	private void ValidateTerrain(int tileX, int tileZ)
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4EA1090", Offset = "0x4EA1090", VA = "0x4EA1090")]
	private TerrainMapStatusCode Validate()
	{
		return default(TerrainMapStatusCode);
	}
}
