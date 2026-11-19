// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapScriptDefaultTiledMaterial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapScriptDefaultTiledMaterial.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/Materials/MapScriptDefaultTiledMaterial.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using Utility;

namespace Map;

[Token(Token = "0x2000426")]
public class MapScriptDefaultTiledMaterial : MapScriptBaseMaterial
{
	[Token(Token = "0x4001547")]
	[FieldOffset(Offset = "0x20")]
	[Order(3)]
	public Vector2 Tiling;

	[Token(Token = "0x6001A40")]
	[Address(RVA = "0x58A4CA0", Offset = "0x58A3CA0", VA = "0x58A4CA0")]
	public MapScriptDefaultTiledMaterial()
	{
		// Lifted from source/cpp/Map/MapScriptDefaultTiledMaterial.c (Map.MapScriptDefaultTiledMaterial$$.ctor): clean
		this.Tiling = (Vector2.oneVector);
		base();
		return;
	}
}
