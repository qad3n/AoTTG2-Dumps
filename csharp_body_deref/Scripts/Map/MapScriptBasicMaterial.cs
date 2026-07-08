using Il2CppDummyDll;
using UnityEngine;
using Utility;

namespace Map;

[Token(Token = "0x2000245")]
public class MapScriptBasicMaterial : MapScriptBaseMaterial
{
	[Token(Token = "0x4000CA7")]
	[FieldOffset(Offset = "0x20")]
	[Order(3)]
	public string Texture;

	[Token(Token = "0x4000CA8")]
	[FieldOffset(Offset = "0x28")]
	[Order(4)]
	public Vector2 Tiling;

	[Token(Token = "0x4000CA9")]
	[FieldOffset(Offset = "0x30")]
	[Order(5)]
	public Vector2 Offset;

	[Token(Token = "0x6000DA6")]
	[Address(RVA = "0x3C9B790", Offset = "0x3C9B790", VA = "0x3C9B790")]
	public MapScriptBasicMaterial()
	{
	}
}
