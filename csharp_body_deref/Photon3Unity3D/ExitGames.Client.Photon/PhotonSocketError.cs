using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x2000011")]
public enum PhotonSocketError
{
	[Token(Token = "0x4000068")]
	Success,
	[Token(Token = "0x4000069")]
	Skipped,
	[Token(Token = "0x400006A")]
	NoData,
	[Token(Token = "0x400006B")]
	Exception,
	[Token(Token = "0x400006C")]
	Busy,
	[Token(Token = "0x400006D")]
	PendingSend
}
