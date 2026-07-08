using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x200002D")]
public enum RelationshipType
{
	[Token(Token = "0x4000073")]
	None,
	[Token(Token = "0x4000074")]
	Friend,
	[Token(Token = "0x4000075")]
	Blocked,
	[Token(Token = "0x4000076")]
	PendingIncoming,
	[Token(Token = "0x4000077")]
	PendingOutgoing,
	[Token(Token = "0x4000078")]
	Implicit
}
