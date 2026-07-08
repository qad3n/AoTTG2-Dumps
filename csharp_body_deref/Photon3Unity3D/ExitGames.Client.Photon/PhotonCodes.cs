using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x200001E")]
internal static class PhotonCodes
{
	[Token(Token = "0x40000CD")]
	[FieldOffset(Offset = "0x0")]
	internal static byte ClientKey;

	[Token(Token = "0x40000CE")]
	[FieldOffset(Offset = "0x1")]
	internal static byte ModeKey;

	[Token(Token = "0x40000CF")]
	[FieldOffset(Offset = "0x2")]
	internal static byte ServerKey;

	[Token(Token = "0x40000D0")]
	[FieldOffset(Offset = "0x3")]
	internal static byte InitEncryption;

	[Token(Token = "0x40000D1")]
	[FieldOffset(Offset = "0x4")]
	internal static byte Ping;

	[Token(Token = "0x40000D2")]
	public const byte Ok = 0;
}
