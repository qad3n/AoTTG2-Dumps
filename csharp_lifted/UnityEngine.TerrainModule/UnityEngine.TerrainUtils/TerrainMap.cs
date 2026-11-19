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
		[Address(RVA = "0x69F5860", Offset = "0x69F4860", VA = "0x69F5860")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x69F4C80", Offset = "0x69F3C80", VA = "0x69F4C80")]
	public Terrain GetTerrain(int tileX, int tileZ)
	{
		return null;
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x69F4CF0", Offset = "0x69F3CF0", VA = "0x69F4CF0")]
	public static TerrainMap CreateFromPlacement(Terrain originTerrain, [Optional] Predicate<Terrain> filter, bool fullValidation = true)
	{
		return null;
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x69F4FC0", Offset = "0x69F3FC0", VA = "0x69F4FC0")]
	public static TerrainMap CreateFromPlacement(Vector2 gridOrigin, Vector2 gridSize, [Optional] Predicate<Terrain> filter, bool fullValidation = true)
	{
		return null;
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x69F5530", Offset = "0x69F4530", VA = "0x69F5530")]
	public TerrainMap()
	{
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x69F5870", Offset = "0x69F4870", VA = "0x69F5870")]
	private void AddTerrainInternal(int x, int z, Terrain terrain)
	{
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x69F55B0", Offset = "0x69F45B0", VA = "0x69F55B0")]
	private bool TryToAddTerrain(int tileX, int tileZ, Terrain terrain)
	{
		return default(bool);
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x69F5980", Offset = "0x69F4980", VA = "0x69F5980")]
	private void ValidateTerrain(int tileX, int tileZ)
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x69F56F0", Offset = "0x69F46F0", VA = "0x69F56F0")]
	private TerrainMapStatusCode Validate()
	{
		return default(TerrainMapStatusCode);
	}
}
