using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Map;

[Token(Token = "0x200022C")]
internal class BuiltinMapPrefabs
{
	[Token(Token = "0x4000C0D")]
	[FieldOffset(Offset = "0x0")]
	private static JSONNode _prefabList;

	[Token(Token = "0x4000C0E")]
	[FieldOffset(Offset = "0x8")]
	public static Dictionary<string, MapScriptBaseObject> AllPrefabs;

	[Token(Token = "0x4000C0F")]
	[FieldOffset(Offset = "0x10")]
	public static Dictionary<string, List<MapScriptBaseObject>> PrefabCategories;

	[Token(Token = "0x4000C10")]
	[FieldOffset(Offset = "0x18")]
	public static Dictionary<string, MapScriptBaseObject> AllPrefabsLower;

	[Token(Token = "0x4000C11")]
	[FieldOffset(Offset = "0x20")]
	public static Dictionary<string, string> PrefabPreviews;

	[Token(Token = "0x4000C12")]
	[FieldOffset(Offset = "0x28")]
	public static Dictionary<string, List<string>> PrefabVariants;

	[Token(Token = "0x4000C13")]
	[FieldOffset(Offset = "0x30")]
	public static Dictionary<string, string> VariantToBasePrefab;

	[Token(Token = "0x6000D2B")]
	[Address(RVA = "0x3C99320", Offset = "0x3C99320", VA = "0x3C99320")]
	public static void Init()
	{
	}

	[Token(Token = "0x6000D2C")]
	[Address(RVA = "0x3C9AD10", Offset = "0x3C9AD10", VA = "0x3C9AD10")]
	public BuiltinMapPrefabs()
	{
	}
}
