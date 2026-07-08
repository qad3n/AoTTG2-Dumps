using Il2CppDummyDll;

namespace GameManagers;

[Token(Token = "0x20001F3")]
internal class PlayerCharacter
{
	[Token(Token = "0x4000AFF")]
	[FieldOffset(Offset = "0x0")]
	public static string Human;

	[Token(Token = "0x4000B00")]
	[FieldOffset(Offset = "0x8")]
	public static string Titan;

	[Token(Token = "0x4000B01")]
	[FieldOffset(Offset = "0x10")]
	public static string Shifter;

	[Token(Token = "0x6000BF6")]
	[Address(RVA = "0x413B240", Offset = "0x413B240", VA = "0x413B240")]
	public PlayerCharacter()
	{
	}
}
