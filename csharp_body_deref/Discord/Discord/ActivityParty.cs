using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x200003E")]
public struct ActivityParty
{
	[Token(Token = "0x40000B8")]
	[FieldOffset(Offset = "0x0")]
	public string Id;

	[Token(Token = "0x40000B9")]
	[FieldOffset(Offset = "0x8")]
	public PartySize Size;

	[Token(Token = "0x40000BA")]
	[FieldOffset(Offset = "0x10")]
	public ActivityPartyPrivacy Privacy;
}
