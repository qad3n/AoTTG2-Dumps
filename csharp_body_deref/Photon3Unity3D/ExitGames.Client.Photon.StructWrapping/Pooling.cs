using Il2CppDummyDll;

namespace ExitGames.Client.Photon.StructWrapping;

[Token(Token = "0x2000051")]
public enum Pooling
{
	[Token(Token = "0x4000246")]
	Disconnected = 0,
	[Token(Token = "0x4000247")]
	Connected = 1,
	[Token(Token = "0x4000248")]
	ReleaseOnUnwrap = 2,
	[Token(Token = "0x4000249")]
	Readonly = 4,
	[Token(Token = "0x400024A")]
	CheckedOut = 8
}
