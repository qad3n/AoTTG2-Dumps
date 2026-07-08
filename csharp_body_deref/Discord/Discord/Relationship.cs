using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x2000042")]
public struct Relationship
{
	[Token(Token = "0x40000CB")]
	[FieldOffset(Offset = "0x0")]
	public RelationshipType Type;

	[Token(Token = "0x40000CC")]
	[FieldOffset(Offset = "0x8")]
	public User User;

	[Token(Token = "0x40000CD")]
	[FieldOffset(Offset = "0x30")]
	public Presence Presence;
}
