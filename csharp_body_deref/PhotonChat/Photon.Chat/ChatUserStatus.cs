using Il2CppDummyDll;

namespace Photon.Chat;

[Token(Token = "0x2000013")]
public static class ChatUserStatus
{
	[Token(Token = "0x40000B6")]
	public const int Offline = 0;

	[Token(Token = "0x40000B7")]
	public const int Invisible = 1;

	[Token(Token = "0x40000B8")]
	public const int Online = 2;

	[Token(Token = "0x40000B9")]
	public const int Away = 3;

	[Token(Token = "0x40000BA")]
	public const int DND = 4;

	[Token(Token = "0x40000BB")]
	public const int LFG = 5;

	[Token(Token = "0x40000BC")]
	public const int Playing = 6;
}
