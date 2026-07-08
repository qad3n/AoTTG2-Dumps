using Il2CppDummyDll;

namespace GameManagers;

[Token(Token = "0x20001F4")]
internal class HumanLoadout
{
	[Token(Token = "0x4000B02")]
	[FieldOffset(Offset = "0x0")]
	public static string Blade;

	[Token(Token = "0x4000B03")]
	[FieldOffset(Offset = "0x8")]
	public static string AHSS;

	[Token(Token = "0x4000B04")]
	[FieldOffset(Offset = "0x10")]
	public static string Thunderspear;

	[Token(Token = "0x4000B05")]
	[FieldOffset(Offset = "0x18")]
	public static string APG;

	[Token(Token = "0x6000BF8")]
	[Address(RVA = "0x413B310", Offset = "0x413B310", VA = "0x413B310")]
	public HumanLoadout()
	{
	}
}
