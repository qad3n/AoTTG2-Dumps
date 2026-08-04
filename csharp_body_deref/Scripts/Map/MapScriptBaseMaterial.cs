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

[Token(Token = "0x200027D")]
public class MapScriptBaseMaterial : BaseCSVRowItem
{
	[Token(Token = "0x4000D8B")]
	[FieldOffset(Offset = "0x10")]
	[Order(1)]
	public string Shader;

	[Token(Token = "0x4000D8C")]
	[FieldOffset(Offset = "0x18")]
	[Order(2)]
	public Color255 Color;

	[Token(Token = "0x6000F4F")]
	[Address(RVA = "0x3FB5F30", Offset = "0x3FB5F30", VA = "0x3FB5F30")]
	public MapScriptBaseMaterial()
	{
	}
}
