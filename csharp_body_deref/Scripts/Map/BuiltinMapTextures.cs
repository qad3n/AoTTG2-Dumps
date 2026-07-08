using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Map;

[Token(Token = "0x200022D")]
internal class BuiltinMapTextures
{
	[Token(Token = "0x4000C14")]
	[FieldOffset(Offset = "0x0")]
	private static JSONNode _textureList;

	[Token(Token = "0x4000C15")]
	[FieldOffset(Offset = "0x8")]
	public static Dictionary<string, MapScriptBasicMaterial> AllTextures;

	[Token(Token = "0x4000C16")]
	[FieldOffset(Offset = "0x10")]
	public static Dictionary<string, List<MapScriptBasicMaterial>> TextureCategories;

	[Token(Token = "0x4000C17")]
	[FieldOffset(Offset = "0x18")]
	public static Dictionary<string, MapScriptBasicMaterial> AllTexturesLower;

	[Token(Token = "0x4000C18")]
	[FieldOffset(Offset = "0x20")]
	public static Dictionary<string, MapScriptBasicMaterial> AllTexturesNoLegacy;

	[Token(Token = "0x4000C19")]
	[FieldOffset(Offset = "0x28")]
	public static Dictionary<string, string> LegacyTexturePaths;

	[Token(Token = "0x6000D2E")]
	[Address(RVA = "0x3C9AF20", Offset = "0x3C9AF20", VA = "0x3C9AF20")]
	public static void Init()
	{
	}

	[Token(Token = "0x6000D2F")]
	[Address(RVA = "0x3C9B840", Offset = "0x3C9B840", VA = "0x3C9B840")]
	public BuiltinMapTextures()
	{
	}
}
