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

[Token(Token = "0x200038F")]
internal class BuiltinMapTextures
{
	[Token(Token = "0x400126E")]
	[FieldOffset(Offset = "0x0")]
	private static JSONNode _textureList;

	[Token(Token = "0x400126F")]
	[FieldOffset(Offset = "0x8")]
	public static Dictionary<string, MapScriptBasicMaterial> AllTextures;

	[Token(Token = "0x4001270")]
	[FieldOffset(Offset = "0x10")]
	public static Dictionary<string, List<MapScriptBasicMaterial>> TextureCategories;

	[Token(Token = "0x4001271")]
	[FieldOffset(Offset = "0x18")]
	public static Dictionary<string, MapScriptBasicMaterial> AllTexturesLower;

	[Token(Token = "0x4001272")]
	[FieldOffset(Offset = "0x20")]
	public static Dictionary<string, MapScriptBasicMaterial> AllTexturesNoLegacy;

	[Token(Token = "0x4001273")]
	[FieldOffset(Offset = "0x28")]
	public static Dictionary<string, string> LegacyTexturePaths;

	[Token(Token = "0x600168E")]
	[Address(RVA = "0x1E85F30", Offset = "0x1E84530", VA = "0x181E85F30")]
	public static void Init()
	{
	}

	[Token(Token = "0x600168F")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public BuiltinMapTextures()
	{
	}
}
