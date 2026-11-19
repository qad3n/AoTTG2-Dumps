// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapScriptBaseMaterial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapScriptBaseMaterial.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/Materials/MapScriptBaseMaterial.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Utility;

namespace Map;

[Token(Token = "0x2000424")]
public class MapScriptBaseMaterial : BaseCSVRowItem
{
	[Token(Token = "0x4001542")]
	[FieldOffset(Offset = "0x10")]
	[Order(1)]
	public string Shader;

	[Token(Token = "0x4001543")]
	[FieldOffset(Offset = "0x18")]
	[Order(2)]
	public Color255 Color;

	[Token(Token = "0x6001A3E")]
	[Address(RVA = "0x58A4890", Offset = "0x58A3890", VA = "0x58A4890")]
	public MapScriptBaseMaterial()
	{
		// Lifted from source/cpp/Map/MapScriptBaseMaterial.c (Map.MapScriptBaseMaterial$$.ctor): clean
		Color255 __this_00;

		this.Shader = "Default";
		__this_00 = new Color255();
		this.Color = __this_00;
		base();
		return;
	}
}
