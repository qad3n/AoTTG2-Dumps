using Il2CppDummyDll;

namespace UnityEngine.TerrainUtils;

[Token(Token = "0x200000A")]
public readonly struct TerrainTileCoord
{
	[Token(Token = "0x400001A")]
	[FieldOffset(Offset = "0x0")]
	public readonly int tileX;

	[Token(Token = "0x400001B")]
	[FieldOffset(Offset = "0x4")]
	public readonly int tileZ;

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4B78A30", Offset = "0x4B78A30", VA = "0x4B78A30")]
	public TerrainTileCoord(int tileX, int tileZ)
	{
	}
}
