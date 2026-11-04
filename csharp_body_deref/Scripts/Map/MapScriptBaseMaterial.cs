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

[Token(Token = "0x20003C5")]
public class MapScriptBaseMaterial : BaseCSVRowItem
{
	[Token(Token = "0x40013A2")]
	[FieldOffset(Offset = "0x10")]
	[Order(1)]
	public string Shader;

	[Token(Token = "0x40013A3")]
	[FieldOffset(Offset = "0x18")]
	[Order(2)]
	public Color255 Color;

	[Token(Token = "0x60017C7")]
	[Address(RVA = "0x1ED9DB0", Offset = "0x1ED83B0", VA = "0x181ED9DB0")]
	public MapScriptBaseMaterial()
	{
	}
}
