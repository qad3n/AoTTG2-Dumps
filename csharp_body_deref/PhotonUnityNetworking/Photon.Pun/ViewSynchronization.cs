using Il2CppDummyDll;

namespace Photon.Pun;

[Token(Token = "0x2000008")]
public enum ViewSynchronization
{
	[Token(Token = "0x4000019")]
	Off,
	[Token(Token = "0x400001A")]
	ReliableDeltaCompressed,
	[Token(Token = "0x400001B")]
	Unreliable,
	[Token(Token = "0x400001C")]
	UnreliableOnChange
}
