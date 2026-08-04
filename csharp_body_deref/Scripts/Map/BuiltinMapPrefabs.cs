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

[Token(Token = "0x2000265")]
internal class BuiltinMapPrefabs
{
	[Token(Token = "0x4000CF3")]
	[FieldOffset(Offset = "0x0")]
	private static JSONNode _prefabList;

	[Token(Token = "0x4000CF4")]
	[FieldOffset(Offset = "0x8")]
	public static Dictionary<string, MapScriptBaseObject> AllPrefabs;

	[Token(Token = "0x4000CF5")]
	[FieldOffset(Offset = "0x10")]
	public static Dictionary<string, List<MapScriptBaseObject>> PrefabCategories;

	[Token(Token = "0x4000CF6")]
	[FieldOffset(Offset = "0x18")]
	public static Dictionary<string, MapScriptBaseObject> AllPrefabsLower;

	[Token(Token = "0x4000CF7")]
	[FieldOffset(Offset = "0x20")]
	public static Dictionary<string, string> PrefabPreviews;

	[Token(Token = "0x4000CF8")]
	[FieldOffset(Offset = "0x28")]
	public static Dictionary<string, List<string>> PrefabVariants;

	[Token(Token = "0x4000CF9")]
	[FieldOffset(Offset = "0x30")]
	public static Dictionary<string, string> VariantToBasePrefab;

	[Token(Token = "0x6000ED5")]
	[Address(RVA = "0x3F9F1C0", Offset = "0x3F9F1C0", VA = "0x3F9F1C0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6000ED6")]
	[Address(RVA = "0x3FA0640", Offset = "0x3FA0640", VA = "0x3FA0640")]
	public BuiltinMapPrefabs()
	{
	}
}
