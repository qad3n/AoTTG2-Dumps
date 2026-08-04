// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapObjectShader
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapObjectShader.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapLoader.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Map;

[Token(Token = "0x2000270")]
public static class MapObjectShader
{
	[Token(Token = "0x4000D3E")]
	[FieldOffset(Offset = "0x0")]
	public static string Default;

	[Token(Token = "0x4000D3F")]
	[FieldOffset(Offset = "0x8")]
	public static string DefaultNoTint;

	[Token(Token = "0x4000D40")]
	[FieldOffset(Offset = "0x10")]
	public static string DefaultTiled;

	[Token(Token = "0x4000D41")]
	[FieldOffset(Offset = "0x18")]
	public static string Basic;

	[Token(Token = "0x4000D42")]
	[FieldOffset(Offset = "0x20")]
	public static string Transparent;

	[Token(Token = "0x4000D43")]
	[FieldOffset(Offset = "0x28")]
	public static string Reflective;

	[Token(Token = "0x4000D44")]
	[FieldOffset(Offset = "0x30")]
	public static string OldBombExplode;

	[Token(Token = "0x4000D45")]
	[FieldOffset(Offset = "0x38")]
	public static string CannonRegionMat;

	[Token(Token = "0x4000D46")]
	[FieldOffset(Offset = "0x40")]
	public static string BombTexMat;

	[Token(Token = "0x4000D47")]
	[FieldOffset(Offset = "0x48")]
	public static string Smoke1Mat;

	[Token(Token = "0x6000F20")]
	[Address(RVA = "0x3FB1800", Offset = "0x3FB1800", VA = "0x3FB1800")]
	public static bool IsLegacyShader(string shader)
	{
		return default(bool);
	}
}
