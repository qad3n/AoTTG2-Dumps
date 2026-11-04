// ==================== AoTTG2 cross-reference ====================
// Type: Internal.Cryptography.Pal.GeneralNameType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Internal.Cryptography.Pal;

[Token(Token = "0x20000AE")]
internal enum GeneralNameType
{
	[Token(Token = "0x4000208")]
	OtherName = 0,
	[Token(Token = "0x4000209")]
	Rfc822Name = 1,
	[Token(Token = "0x400020A")]
	Email = Rfc822Name,
	[Token(Token = "0x400020B")]
	DnsName = 2,
	[Token(Token = "0x400020C")]
	X400Address = 3,
	[Token(Token = "0x400020D")]
	DirectoryName = 4,
	[Token(Token = "0x400020E")]
	EdiPartyName = 5,
	[Token(Token = "0x400020F")]
	UniformResourceIdentifier = 6,
	[Token(Token = "0x4000210")]
	IPAddress = 7,
	[Token(Token = "0x4000211")]
	RegisteredId = 8
}
