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

[Token(Token = "0x200000D")]
public class TerrainMap
{
	[Token(Token = "0x4000027")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private Vector3 m_patchSize;

	[Token(Token = "0x4000028")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private TerrainMapStatusCode m_errorCode;

	[Token(Token = "0x4000029")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Dictionary<TerrainTileCoord, Terrain> m_terrainTiles;

	[Token(Token = "0x17000013")]
	public Dictionary<TerrainTileCoord, Terrain> terrainTiles
	{
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x2FFAA60", Offset = "0x2FF9060", VA = "0x182FFAA60")]
	public Terrain GetTerrain(int tileX, int tileZ)
	{
		return null;
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x2FFA550", Offset = "0x2FF8B50", VA = "0x182FFA550")]
	public static TerrainMap CreateFromPlacement(Terrain originTerrain, [Optional] Predicate<Terrain> filter, bool fullValidation = true)
	{
		return null;
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x2FFA190", Offset = "0x2FF8790", VA = "0x182FFA190")]
	public static TerrainMap CreateFromPlacement(Vector2 gridOrigin, Vector2 gridSize, [Optional] Predicate<Terrain> filter, bool fullValidation = true)
	{
		return null;
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x2FFB580", Offset = "0x2FF9B80", VA = "0x182FFB580")]
	public TerrainMap()
	{
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x2FF9E70", Offset = "0x2FF8470", VA = "0x182FF9E70")]
	private void AddTerrainInternal(int x, int z, Terrain terrain)
	{
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x2FFAAE0", Offset = "0x2FF90E0", VA = "0x182FFAAE0")]
	private bool TryToAddTerrain(int tileX, int tileZ, Terrain terrain)
	{
		return default(bool);
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x2FFABF0", Offset = "0x2FF91F0", VA = "0x182FFABF0")]
	private void ValidateTerrain(int tileX, int tileZ)
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x2FFB430", Offset = "0x2FF9A30", VA = "0x182FFB430")]
	private TerrainMapStatusCode Validate()
	{
		return default(TerrainMapStatusCode);
	}
}
