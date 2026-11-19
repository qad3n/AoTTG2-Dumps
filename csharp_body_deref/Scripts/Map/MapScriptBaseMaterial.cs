// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapScriptBaseMaterial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapScriptBaseMaterial.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/Materials/MapScriptBaseMaterial.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
	}
}
