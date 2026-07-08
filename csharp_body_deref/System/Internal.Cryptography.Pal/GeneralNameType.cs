using Il2CppDummyDll;

namespace Internal.Cryptography.Pal;

[Token(Token = "0x200006D")]
internal enum GeneralNameType
{
	[Token(Token = "0x4000137")]
	OtherName = 0,
	[Token(Token = "0x4000138")]
	Rfc822Name = 1,
	[Token(Token = "0x4000139")]
	Email = 1,
	[Token(Token = "0x400013A")]
	DnsName = 2,
	[Token(Token = "0x400013B")]
	X400Address = 3,
	[Token(Token = "0x400013C")]
	DirectoryName = 4,
	[Token(Token = "0x400013D")]
	EdiPartyName = 5,
	[Token(Token = "0x400013E")]
	UniformResourceIdentifier = 6,
	[Token(Token = "0x400013F")]
	IPAddress = 7,
	[Token(Token = "0x4000140")]
	RegisteredId = 8
}
