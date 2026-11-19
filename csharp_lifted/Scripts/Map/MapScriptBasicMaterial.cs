// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapScriptBasicMaterial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapScriptBasicMaterial.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/Materials/MapScriptBasicMaterial.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using Utility;

namespace Map;

[Token(Token = "0x2000425")]
public class MapScriptBasicMaterial : MapScriptBaseMaterial
{
	[Token(Token = "0x4001544")]
	[FieldOffset(Offset = "0x20")]
	[Order(3)]
	public string Texture;

	[Token(Token = "0x4001545")]
	[FieldOffset(Offset = "0x28")]
	[Order(4)]
	public Vector2 Tiling;

	[Token(Token = "0x4001546")]
	[FieldOffset(Offset = "0x30")]
	[Order(5)]
	public Vector2 Offset;

	[Token(Token = "0x6001A3F")]
	[Address(RVA = "0x58A1F40", Offset = "0x58A0F40", VA = "0x58A1F40")]
	public MapScriptBasicMaterial()
	{
		// Lifted from source/cpp/Map/MapScriptBasicMaterial.c (Map.MapScriptBasicMaterial$$.ctor): clean
		MethodInfo method_00;

		method_00 = (MethodInfo *)"Misc/None";
		this.Texture = "Misc/None";
		this.Tiling = (Vector2.oneVector);
		this.Offset = *(Vector2)&(Vector3.zeroVector);
		base();
		return;
	}
}
