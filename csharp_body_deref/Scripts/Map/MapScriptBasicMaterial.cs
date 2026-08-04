// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapScriptBasicMaterial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapScriptBasicMaterial.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/Materials/MapScriptBasicMaterial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using Utility;

namespace Map;

[Token(Token = "0x200027E")]
public class MapScriptBasicMaterial : MapScriptBaseMaterial
{
	[Token(Token = "0x4000D8D")]
	[FieldOffset(Offset = "0x20")]
	[Order(3)]
	public string Texture;

	[Token(Token = "0x4000D8E")]
	[FieldOffset(Offset = "0x28")]
	[Order(4)]
	public Vector2 Tiling;

	[Token(Token = "0x4000D8F")]
	[FieldOffset(Offset = "0x30")]
	[Order(5)]
	public Vector2 Offset;

	[Token(Token = "0x6000F50")]
	[Address(RVA = "0x3FB4C30", Offset = "0x3FB4C30", VA = "0x3FB4C30")]
	public MapScriptBasicMaterial()
	{
	}
}
