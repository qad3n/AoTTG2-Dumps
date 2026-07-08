using System;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x2000021")]
[Flags]
internal enum InitV3Flags : short
{
	[Token(Token = "0x40000E6")]
	NoFlags = 0,
	[Token(Token = "0x40000E7")]
	EncryptionFlag = 1,
	[Token(Token = "0x40000E8")]
	IPv6Flag = 2,
	[Token(Token = "0x40000E9")]
	ReleaseSdkFlag = 4
}
