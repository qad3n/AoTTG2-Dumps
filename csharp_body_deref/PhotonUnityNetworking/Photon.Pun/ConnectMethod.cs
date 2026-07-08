using Il2CppDummyDll;

namespace Photon.Pun;

[Token(Token = "0x2000005")]
public enum ConnectMethod
{
	[Token(Token = "0x4000008")]
	NotCalled,
	[Token(Token = "0x4000009")]
	ConnectToMaster,
	[Token(Token = "0x400000A")]
	ConnectToRegion,
	[Token(Token = "0x400000B")]
	ConnectToBest
}
