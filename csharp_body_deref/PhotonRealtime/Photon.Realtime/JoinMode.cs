using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x200002F")]
public enum JoinMode : byte
{
	[Token(Token = "0x4000185")]
	Default,
	[Token(Token = "0x4000186")]
	CreateIfNotExists,
	[Token(Token = "0x4000187")]
	JoinOrRejoin,
	[Token(Token = "0x4000188")]
	RejoinOnly
}
