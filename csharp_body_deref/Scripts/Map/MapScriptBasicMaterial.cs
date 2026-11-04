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

[Token(Token = "0x20003C6")]
public class MapScriptBasicMaterial : MapScriptBaseMaterial
{
	[Token(Token = "0x40013A4")]
	[FieldOffset(Offset = "0x20")]
	[Order(3)]
	public string Texture;

	[Token(Token = "0x40013A5")]
	[FieldOffset(Offset = "0x28")]
	[Order(4)]
	public Vector2 Tiling;

	[Token(Token = "0x40013A6")]
	[FieldOffset(Offset = "0x30")]
	[Order(5)]
	public Vector2 Offset;

	[Token(Token = "0x60017C8")]
	[Address(RVA = "0x1ED9E40", Offset = "0x1ED8440", VA = "0x181ED9E40")]
	public MapScriptBasicMaterial()
	{
	}
}
