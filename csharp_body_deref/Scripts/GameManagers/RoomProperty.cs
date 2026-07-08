using Il2CppDummyDll;

namespace GameManagers;

[Token(Token = "0x20001FB")]
internal class RoomProperty
{
	[Token(Token = "0x4000B34")]
	[FieldOffset(Offset = "0x0")]
	public static string Name;

	[Token(Token = "0x4000B35")]
	[FieldOffset(Offset = "0x8")]
	public static string Map;

	[Token(Token = "0x4000B36")]
	[FieldOffset(Offset = "0x10")]
	public static string GameMode;

	[Token(Token = "0x4000B37")]
	[FieldOffset(Offset = "0x18")]
	public static string Password;

	[Token(Token = "0x4000B38")]
	[FieldOffset(Offset = "0x20")]
	public static string PasswordSalt;

	[Token(Token = "0x4000B39")]
	[FieldOffset(Offset = "0x28")]
	public static string PasswordHash;

	[Token(Token = "0x4000B3A")]
	[FieldOffset(Offset = "0x30")]
	public static string AccountRequired;

	[Token(Token = "0x6000C06")]
	[Address(RVA = "0x413B980", Offset = "0x413B980", VA = "0x413B980")]
	public RoomProperty()
	{
	}
}
