// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapObjectCollideWith
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapObjectCollideWith.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapLoader.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Map;

[Token(Token = "0x200040E")]
public static class MapObjectCollideWith
{
	[Token(Token = "0x40014E4")]
	[FieldOffset(Offset = "0x0")]
	public static string All;

	[Token(Token = "0x40014E5")]
	[FieldOffset(Offset = "0x8")]
	public static string MapObjects;

	[Token(Token = "0x40014E6")]
	[FieldOffset(Offset = "0x10")]
	public static string Characters;

	[Token(Token = "0x40014E7")]
	[FieldOffset(Offset = "0x18")]
	public static string Titans;

	[Token(Token = "0x40014E8")]
	[FieldOffset(Offset = "0x20")]
	public static string Humans;

	[Token(Token = "0x40014E9")]
	[FieldOffset(Offset = "0x28")]
	public static string Projectiles;

	[Token(Token = "0x40014EA")]
	[FieldOffset(Offset = "0x30")]
	public static string Entities;

	[Token(Token = "0x40014EB")]
	[FieldOffset(Offset = "0x38")]
	public static string Hitboxes;

	[Token(Token = "0x40014EC")]
	[FieldOffset(Offset = "0x40")]
	public static string MapEditor;

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Map/MapObjectCollideWith.c.

	// Map.MapObjectCollideWith$$.cctor: clean
	static MapObjectCollideWith()
	{
		Map_MapObjectCollideWith_StaticFields pMVar1;

		MapObjectCollideWith.All = "All";
		pMVar1 = typeof(MapObjectCollideWith).static_fields;
		pMVar1.MapObjects = "MapObjects";
		pMVar1 = typeof(MapObjectCollideWith).static_fields;
		pMVar1.Characters = "Characters";
		pMVar1 = typeof(MapObjectCollideWith).static_fields;
		pMVar1.Titans = "Titans";
		pMVar1 = typeof(MapObjectCollideWith).static_fields;
		pMVar1.Humans = "Humans";
		pMVar1 = typeof(MapObjectCollideWith).static_fields;
		pMVar1.Projectiles = "Projectiles";
		pMVar1 = typeof(MapObjectCollideWith).static_fields;
		pMVar1.Entities = "Entities";
		pMVar1 = typeof(MapObjectCollideWith).static_fields;
		pMVar1.Hitboxes = "Hitboxes";
		pMVar1 = typeof(MapObjectCollideWith).static_fields;
		pMVar1.MapEditor = "MapEditor";
		return;
	}
}
