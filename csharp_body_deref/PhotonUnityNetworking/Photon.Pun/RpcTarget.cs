using Il2CppDummyDll;

namespace Photon.Pun;

[Token(Token = "0x2000007")]
public enum RpcTarget
{
	[Token(Token = "0x4000011")]
	All,
	[Token(Token = "0x4000012")]
	Others,
	[Token(Token = "0x4000013")]
	MasterClient,
	[Token(Token = "0x4000014")]
	AllBuffered,
	[Token(Token = "0x4000015")]
	OthersBuffered,
	[Token(Token = "0x4000016")]
	AllViaServer,
	[Token(Token = "0x4000017")]
	AllBufferedViaServer
}
