using Il2CppDummyDll;
using UnityEngine;
using Utility;

namespace Map;

[Token(Token = "0x2000246")]
public class MapScriptDefaultTiledMaterial : MapScriptBaseMaterial
{
	[Token(Token = "0x4000CAA")]
	[FieldOffset(Offset = "0x20")]
	[Order(3)]
	public Vector2 Tiling;

	[Token(Token = "0x6000DA7")]
	[Address(RVA = "0x3CB00C0", Offset = "0x3CB00C0", VA = "0x3CB00C0")]
	public MapScriptDefaultTiledMaterial()
	{
	}
}
