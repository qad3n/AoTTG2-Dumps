// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapObjectCollideMode
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapObjectCollideMode.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapLoader.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Map;

[Token(Token = "0x200040D")]
public static class MapObjectCollideMode
{
	[Token(Token = "0x40014E1")]
	[FieldOffset(Offset = "0x0")]
	public static string Physical;

	[Token(Token = "0x40014E2")]
	[FieldOffset(Offset = "0x8")]
	public static string Region;

	[Token(Token = "0x40014E3")]
	[FieldOffset(Offset = "0x10")]
	public static string None;

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Map/MapObjectCollideMode.c.

	// Map.MapObjectCollideMode$$.cctor: clean
	static MapObjectCollideMode()
	{
		Map_MapObjectCollideMode_StaticFields pMVar1;

		MapObjectCollideMode.Physical = "Physical";
		pMVar1 = typeof(MapObjectCollideMode).static_fields;
		pMVar1.Region = "Region";
		pMVar1 = typeof(MapObjectCollideMode).static_fields;
		pMVar1.None = "None";
		return;
	}
}
