// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapScriptReflectiveMaterial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapScriptReflectiveMaterial.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/Materials/MapScriptReflectiveMaterial.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Utility;

namespace Map;

[Token(Token = "0x2000428")]
public class MapScriptReflectiveMaterial : MapScriptBasicMaterial
{
	[Token(Token = "0x4001549")]
	[FieldOffset(Offset = "0x38")]
	[Order(6)]
	public Color255 ReflectColor;

	[Token(Token = "0x6001A42")]
	[Address(RVA = "0x58A4CF0", Offset = "0x58A3CF0", VA = "0x58A4CF0")]
	public MapScriptReflectiveMaterial()
	{
		// Lifted from source/cpp/Map/MapScriptReflectiveMaterial.c (Map.MapScriptReflectiveMaterial$$.ctor): clean
		MethodInfo method_00;

		method_00 = new Color255();
		this.ReflectColor = (Color255)method_00;
		base();
		return;
	}
}
