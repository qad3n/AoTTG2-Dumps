using Il2CppDummyDll;

namespace Map;

[Token(Token = "0x2000237")]
public static class MapObjectShader
{
	[Token(Token = "0x4000C58")]
	[FieldOffset(Offset = "0x0")]
	public static string Default;

	[Token(Token = "0x4000C59")]
	[FieldOffset(Offset = "0x8")]
	public static string DefaultNoTint;

	[Token(Token = "0x4000C5A")]
	[FieldOffset(Offset = "0x10")]
	public static string DefaultTiled;

	[Token(Token = "0x4000C5B")]
	[FieldOffset(Offset = "0x18")]
	public static string Basic;

	[Token(Token = "0x4000C5C")]
	[FieldOffset(Offset = "0x20")]
	public static string Transparent;

	[Token(Token = "0x4000C5D")]
	[FieldOffset(Offset = "0x28")]
	public static string Reflective;

	[Token(Token = "0x4000C5E")]
	[FieldOffset(Offset = "0x30")]
	public static string OldBombExplode;

	[Token(Token = "0x4000C5F")]
	[FieldOffset(Offset = "0x38")]
	public static string CannonRegionMat;

	[Token(Token = "0x4000C60")]
	[FieldOffset(Offset = "0x40")]
	public static string BombTexMat;

	[Token(Token = "0x4000C61")]
	[FieldOffset(Offset = "0x48")]
	public static string Smoke1Mat;

	[Token(Token = "0x6000D76")]
	[Address(RVA = "0x3CA5330", Offset = "0x3CA5330", VA = "0x3CA5330")]
	public static bool IsLegacyShader(string shader)
	{
		return default(bool);
	}
}
