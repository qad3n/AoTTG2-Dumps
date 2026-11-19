// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapObjectShader
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapObjectShader.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapLoader.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
		return default(bool);
	}
}
