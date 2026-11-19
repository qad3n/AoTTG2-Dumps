// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapTags
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapTags.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapTags.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Map;

[Token(Token = "0x2000429")]
internal class MapTags
{
	[Token(Token = "0x400154A")]
	[FieldOffset(Offset = "0x0")]
	public static string CameraSpawnPoint;

	[Token(Token = "0x400154B")]
	[FieldOffset(Offset = "0x8")]
	public static string HumanSpawnPoint;

	[Token(Token = "0x400154C")]
	[FieldOffset(Offset = "0x10")]
	public static string HumanSpawnPointBlue;

	[Token(Token = "0x400154D")]
	[FieldOffset(Offset = "0x18")]
	public static string HumanSpawnPointRed;

	[Token(Token = "0x400154E")]
	[FieldOffset(Offset = "0x20")]
	public static string TitanSpawnPoint;

	[Token(Token = "0x6001A43")]
	[Address(RVA = "0x58A6360", Offset = "0x58A5360", VA = "0x58A6360")]
	public MapTags()
	{
		// Lifted from source/cpp/Map/MapTags.c (Map.MapTags$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Map/MapTags.c.

	// Map.MapTags$$.cctor: clean
	static MapTags()
	{
		Map_MapTags_StaticFields pMVar1;

		MapTags.CameraSpawnPoint = "CameraSpawnPoint";
		pMVar1 = typeof(MapTags).static_fields;
		pMVar1.HumanSpawnPoint = "HumanSpawnPoint";
		pMVar1 = typeof(MapTags).static_fields;
		pMVar1.HumanSpawnPointBlue = "HumanSpawnPointBlue";
		pMVar1 = typeof(MapTags).static_fields;
		pMVar1.HumanSpawnPointRed = "HumanSpawnPointRed";
		pMVar1 = typeof(MapTags).static_fields;
		pMVar1.TitanSpawnPoint = "TitanSpawnPoint";
		return;
	}
}
