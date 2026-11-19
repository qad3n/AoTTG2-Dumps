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

[Token(Token = "0x20003E9")]
internal class BuiltinMapPrefabs
{
	[Token(Token = "0x40013F9")]
	[FieldOffset(Offset = "0x0")]
	private static JSONNode _prefabList;

	[Token(Token = "0x40013FA")]
	[FieldOffset(Offset = "0x8")]
	public static Dictionary<string, MapScriptBaseObject> AllPrefabs;

	[Token(Token = "0x40013FB")]
	[FieldOffset(Offset = "0x10")]
	public static Dictionary<string, List<MapScriptBaseObject>> PrefabCategories;

	[Token(Token = "0x40013FC")]
	[FieldOffset(Offset = "0x18")]
	public static Dictionary<string, MapScriptBaseObject> AllPrefabsLower;

	[Token(Token = "0x40013FD")]
	[FieldOffset(Offset = "0x20")]
	public static Dictionary<string, string> PrefabPreviews;

	[Token(Token = "0x40013FE")]
	[FieldOffset(Offset = "0x28")]
	public static Dictionary<string, List<string>> PrefabVariants;

	[Token(Token = "0x40013FF")]
	[FieldOffset(Offset = "0x30")]
	public static Dictionary<string, string> VariantToBasePrefab;

	[Token(Token = "0x60018F2")]
	[Address(RVA = "0x5875C70", Offset = "0x5874C70", VA = "0x5875C70")]
	public static void Init()
	{
	}

	[Token(Token = "0x60018F3")]
	[Address(RVA = "0x58770E0", Offset = "0x58760E0", VA = "0x58770E0")]
	public BuiltinMapPrefabs()
	{
	}
}
