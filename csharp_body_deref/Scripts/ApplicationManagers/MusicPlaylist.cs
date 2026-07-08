using Il2CppDummyDll;

namespace ApplicationManagers;

[Token(Token = "0x2000740")]
public class MusicPlaylist
{
	[Token(Token = "0x4002329")]
	[FieldOffset(Offset = "0x0")]
	public static string Menu;

	[Token(Token = "0x400232A")]
	[FieldOffset(Offset = "0x8")]
	public static string Default;

	[Token(Token = "0x400232B")]
	[FieldOffset(Offset = "0x10")]
	public static string Peaceful;

	[Token(Token = "0x400232C")]
	[FieldOffset(Offset = "0x18")]
	public static string Ambient;

	[Token(Token = "0x400232D")]
	[FieldOffset(Offset = "0x20")]
	public static string Battle;

	[Token(Token = "0x400232E")]
	[FieldOffset(Offset = "0x28")]
	public static string Boss;

	[Token(Token = "0x400232F")]
	[FieldOffset(Offset = "0x30")]
	public static string Racing;

	[Token(Token = "0x60046B7")]
	[Address(RVA = "0x40A4C70", Offset = "0x40A4C70", VA = "0x40A4C70")]
	public MusicPlaylist()
	{
	}
}
