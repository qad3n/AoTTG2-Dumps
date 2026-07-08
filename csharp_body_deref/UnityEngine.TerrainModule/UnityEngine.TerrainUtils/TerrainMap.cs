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
		[Address(RVA = "0x4B798E0", Offset = "0x4B798E0", VA = "0x4B798E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4B78A40", Offset = "0x4B78A40", VA = "0x4B78A40")]
	public Terrain GetTerrain(int tileX, int tileZ)
	{
		return null;
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x4B78AB0", Offset = "0x4B78AB0", VA = "0x4B78AB0")]
	public static TerrainMap CreateFromPlacement(Terrain originTerrain, [Optional] Predicate<Terrain> filter, bool fullValidation = true)
	{
		return null;
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4B78F80", Offset = "0x4B78F80", VA = "0x4B78F80")]
	public static TerrainMap CreateFromPlacement(Vector2 gridOrigin, Vector2 gridSize, [Optional] Predicate<Terrain> filter, bool fullValidation = true)
	{
		return null;
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x4B795A0", Offset = "0x4B795A0", VA = "0x4B795A0")]
	public TerrainMap()
	{
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4B798F0", Offset = "0x4B798F0", VA = "0x4B798F0")]
	private void AddTerrainInternal(int x, int z, Terrain terrain)
	{
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4B79620", Offset = "0x4B79620", VA = "0x4B79620")]
	private bool TryToAddTerrain(int tileX, int tileZ, Terrain terrain)
	{
		return default(bool);
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x4B79AB0", Offset = "0x4B79AB0", VA = "0x4B79AB0")]
	private void ValidateTerrain(int tileX, int tileZ)
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4B79760", Offset = "0x4B79760", VA = "0x4B79760")]
	private TerrainMapStatusCode Validate()
	{
		return default(TerrainMapStatusCode);
	}
}
