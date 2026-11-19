// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapScriptLegacyMaterial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapScriptLegacyMaterial.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/Materials/MapScriptLegacyMaterial.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using Utility;

namespace Map;

[Token(Token = "0x2000427")]
internal class MapScriptLegacyMaterial : MapScriptBaseMaterial
{
	[Token(Token = "0x4001548")]
	[FieldOffset(Offset = "0x20")]
	[Order(3)]
	public Vector2 Tiling;

	[Token(Token = "0x6001A41")]
	[Address(RVA = "0x58A4D50", Offset = "0x58A3D50", VA = "0x58A4D50")]
	public MapScriptLegacyMaterial()
	{
		// Lifted from source/cpp/Map/MapScriptLegacyMaterial.c (Map.MapScriptLegacyMaterial$$.ctor): clean
		this.Tiling = (Vector2.oneVector);
		base();
		return;
	}
}
