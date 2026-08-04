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

[Token(Token = "0x2000266")]
internal class BuiltinMapTextures
{
	[Token(Token = "0x4000CFA")]
	[FieldOffset(Offset = "0x0")]
	private static JSONNode _textureList;

	[Token(Token = "0x4000CFB")]
	[FieldOffset(Offset = "0x8")]
	public static Dictionary<string, MapScriptBasicMaterial> AllTextures;

	[Token(Token = "0x4000CFC")]
	[FieldOffset(Offset = "0x10")]
	public static Dictionary<string, List<MapScriptBasicMaterial>> TextureCategories;

	[Token(Token = "0x4000CFD")]
	[FieldOffset(Offset = "0x18")]
	public static Dictionary<string, MapScriptBasicMaterial> AllTexturesLower;

	[Token(Token = "0x4000CFE")]
	[FieldOffset(Offset = "0x20")]
	public static Dictionary<string, MapScriptBasicMaterial> AllTexturesNoLegacy;

	[Token(Token = "0x4000CFF")]
	[FieldOffset(Offset = "0x28")]
	public static Dictionary<string, string> LegacyTexturePaths;

	[Token(Token = "0x6000ED8")]
	[Address(RVA = "0x3FA0850", Offset = "0x3FA0850", VA = "0x3FA0850")]
	public static void Init()
	{
	}

	[Token(Token = "0x6000ED9")]
	[Address(RVA = "0x3FA10D0", Offset = "0x3FA10D0", VA = "0x3FA10D0")]
	public BuiltinMapTextures()
	{
	}
}
