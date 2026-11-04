// ==================== AoTTG2 cross-reference ====================
// Type: Map.BuiltinMapPrefabs
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/BuiltinMapPrefabs.c
// Prior real C# source (older reference): Assets/Scripts/Map/BuiltinMapPrefabs.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Map;

[Token(Token = "0x200038E")]
internal class BuiltinMapPrefabs
{
	[Token(Token = "0x4001267")]
	[FieldOffset(Offset = "0x0")]
	private static JSONNode _prefabList;

	[Token(Token = "0x4001268")]
	[FieldOffset(Offset = "0x8")]
	public static Dictionary<string, MapScriptBaseObject> AllPrefabs;

	[Token(Token = "0x4001269")]
	[FieldOffset(Offset = "0x10")]
	public static Dictionary<string, List<MapScriptBaseObject>> PrefabCategories;

	[Token(Token = "0x400126A")]
	[FieldOffset(Offset = "0x18")]
	public static Dictionary<string, MapScriptBaseObject> AllPrefabsLower;

	[Token(Token = "0x400126B")]
	[FieldOffset(Offset = "0x20")]
	public static Dictionary<string, string> PrefabPreviews;

	[Token(Token = "0x400126C")]
	[FieldOffset(Offset = "0x28")]
	public static Dictionary<string, List<string>> PrefabVariants;

	[Token(Token = "0x400126D")]
	[FieldOffset(Offset = "0x30")]
	public static Dictionary<string, string> VariantToBasePrefab;

	[Token(Token = "0x600168B")]
	[Address(RVA = "0x1E84A30", Offset = "0x1E83030", VA = "0x181E84A30")]
	public static void Init()
	{
	}

	[Token(Token = "0x600168C")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public BuiltinMapPrefabs()
	{
	}
}
