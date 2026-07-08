using Il2CppDummyDll;
using UnityEngine;
using Utility;

namespace Map;

[Token(Token = "0x2000247")]
internal class MapScriptLegacyMaterial : MapScriptBaseMaterial
{
	[Token(Token = "0x4000CAB")]
	[FieldOffset(Offset = "0x20")]
	[Order(3)]
	public Vector2 Tiling;

	[Token(Token = "0x6000DA8")]
	[Address(RVA = "0x3C9F440", Offset = "0x3C9F440", VA = "0x3C9F440")]
	public MapScriptLegacyMaterial()
	{
	}
}
