// ==================== AoTTG2 cross-reference ====================
// Type: Map.BuiltinMapTextures
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/BuiltinMapTextures.c
// Prior real C# source (older reference): Assets/Scripts/Map/BuiltinMapTextures.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Map;

[Token(Token = "0x20003EA")]
internal class BuiltinMapTextures
{
	[Token(Token = "0x4001400")]
	[FieldOffset(Offset = "0x0")]
	private static JSONNode _textureList;

	[Token(Token = "0x4001401")]
	[FieldOffset(Offset = "0x8")]
	public static Dictionary<string, MapScriptBasicMaterial> AllTextures;

	[Token(Token = "0x4001402")]
	[FieldOffset(Offset = "0x10")]
	public static Dictionary<string, List<MapScriptBasicMaterial>> TextureCategories;

	[Token(Token = "0x4001403")]
	[FieldOffset(Offset = "0x18")]
	public static Dictionary<string, MapScriptBasicMaterial> AllTexturesLower;

	[Token(Token = "0x4001404")]
	[FieldOffset(Offset = "0x20")]
	public static Dictionary<string, MapScriptBasicMaterial> AllTexturesNoLegacy;

	[Token(Token = "0x4001405")]
	[FieldOffset(Offset = "0x28")]
	public static Dictionary<string, string> LegacyTexturePaths;

	[Token(Token = "0x60018F5")]
	[Address(RVA = "0x58772F0", Offset = "0x58762F0", VA = "0x58772F0")]
	public static void Init()
	{
	}

	[Token(Token = "0x60018F6")]
	[Address(RVA = "0x5877B70", Offset = "0x5876B70", VA = "0x5877B70")]
	public BuiltinMapTextures()
	{
	}
}
