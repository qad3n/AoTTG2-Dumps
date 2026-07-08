using Il2CppDummyDll;

namespace GameManagers;

[Token(Token = "0x20001F2")]
internal class PlayerStatus
{
	[Token(Token = "0x4000AFC")]
	[FieldOffset(Offset = "0x0")]
	public static string Alive;

	[Token(Token = "0x4000AFD")]
	[FieldOffset(Offset = "0x8")]
	public static string Dead;

	[Token(Token = "0x4000AFE")]
	[FieldOffset(Offset = "0x10")]
	public static string Spectating;

	[Token(Token = "0x6000BF4")]
	[Address(RVA = "0x413B170", Offset = "0x413B170", VA = "0x413B170")]
	public PlayerStatus()
	{
	}
}
