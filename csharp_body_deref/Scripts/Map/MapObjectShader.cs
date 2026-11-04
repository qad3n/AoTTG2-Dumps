// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapObjectShader
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapObjectShader.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapLoader.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Map;

[Token(Token = "0x20003AF")]
public static class MapObjectShader
{
	[Token(Token = "0x4001340")]
	[FieldOffset(Offset = "0x0")]
	public static string Default;

	[Token(Token = "0x4001341")]
	[FieldOffset(Offset = "0x8")]
	public static string DefaultNoTint;

	[Token(Token = "0x4001342")]
	[FieldOffset(Offset = "0x10")]
	public static string DefaultTiled;

	[Token(Token = "0x4001343")]
	[FieldOffset(Offset = "0x18")]
	public static string Basic;

	[Token(Token = "0x4001344")]
	[FieldOffset(Offset = "0x20")]
	public static string Transparent;

	[Token(Token = "0x4001345")]
	[FieldOffset(Offset = "0x28")]
	public static string Reflective;

	[Token(Token = "0x4001346")]
	[FieldOffset(Offset = "0x30")]
	public static string OldBombExplode;

	[Token(Token = "0x4001347")]
	[FieldOffset(Offset = "0x38")]
	public static string CannonRegionMat;

	[Token(Token = "0x4001348")]
	[FieldOffset(Offset = "0x40")]
	public static string BombTexMat;

	[Token(Token = "0x4001349")]
	[FieldOffset(Offset = "0x48")]
	public static string Smoke1Mat;

	[Token(Token = "0x6001766")]
	[Address(RVA = "0x1EB4DB0", Offset = "0x1EB33B0", VA = "0x181EB4DB0")]
	public static bool IsLegacyShader(string shader)
	{
		return default(bool);
	}
}
