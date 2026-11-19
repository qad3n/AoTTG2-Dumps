// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapObjectShader
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapObjectShader.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapLoader.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Map;

[Token(Token = "0x200040C")]
public static class MapObjectShader
{
	[Token(Token = "0x40014D7")]
	[FieldOffset(Offset = "0x0")]
	public static string Default;

	[Token(Token = "0x40014D8")]
	[FieldOffset(Offset = "0x8")]
	public static string DefaultNoTint;

	[Token(Token = "0x40014D9")]
	[FieldOffset(Offset = "0x10")]
	public static string DefaultTiled;

	[Token(Token = "0x40014DA")]
	[FieldOffset(Offset = "0x18")]
	public static string Basic;

	[Token(Token = "0x40014DB")]
	[FieldOffset(Offset = "0x20")]
	public static string Transparent;

	[Token(Token = "0x40014DC")]
	[FieldOffset(Offset = "0x28")]
	public static string Reflective;

	[Token(Token = "0x40014DD")]
	[FieldOffset(Offset = "0x30")]
	public static string OldBombExplode;

	[Token(Token = "0x40014DE")]
	[FieldOffset(Offset = "0x38")]
	public static string CannonRegionMat;

	[Token(Token = "0x40014DF")]
	[FieldOffset(Offset = "0x40")]
	public static string BombTexMat;

	[Token(Token = "0x40014E0")]
	[FieldOffset(Offset = "0x48")]
	public static string Smoke1Mat;

	[Token(Token = "0x60019D4")]
	[Address(RVA = "0x589E940", Offset = "0x589D940", VA = "0x589E940")]
	public static bool IsLegacyShader(string shader)
	{
		// Lifted from source/cpp/Map/MapObjectShader.c (Map.MapObjectShader$$IsLegacyShader): clean
		bool bVar1;

		bVar1 = (shader == MapObjectShader.OldBombExplode);
		if (!bVar1) {
			bVar1 = (shader == MapObjectShader.CannonRegionMat);
			if (!bVar1) {
				bVar1 = (shader == MapObjectShader.BombTexMat);
				if (!bVar1) {
					bVar1 = (shader == MapObjectShader.Smoke1Mat);
					return bVar1;
				}
			}
		}
		return true;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Map/MapObjectShader.c.

	// Map.MapObjectShader$$.cctor: clean
	static MapObjectShader()
	{
		Map_MapObjectShader_StaticFields pMVar1;

		MapObjectShader.Default = "Default";
		pMVar1 = typeof(MapObjectShader).static_fields;
		pMVar1.DefaultNoTint = "DefaultNoTint";
		pMVar1 = typeof(MapObjectShader).static_fields;
		pMVar1.DefaultTiled = "DefaultTiled";
		pMVar1 = typeof(MapObjectShader).static_fields;
		pMVar1.Basic = "Basic";
		pMVar1 = typeof(MapObjectShader).static_fields;
		pMVar1.Transparent = "Transparent";
		pMVar1 = typeof(MapObjectShader).static_fields;
		pMVar1.Reflective = "Reflective";
		pMVar1 = typeof(MapObjectShader).static_fields;
		pMVar1.OldBombExplode = "OldBombExplodeMat";
		pMVar1 = typeof(MapObjectShader).static_fields;
		pMVar1.CannonRegionMat = "CannonRegionMat";
		pMVar1 = typeof(MapObjectShader).static_fields;
		pMVar1.BombTexMat = "BombTexMat";
		pMVar1 = typeof(MapObjectShader).static_fields;
		pMVar1.Smoke1Mat = "Smoke1Mat";
		return;
	}
}
