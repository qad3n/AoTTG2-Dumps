using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20000E7")]
internal enum AsnDecodeStatus
{
	[Token(Token = "0x4000449")]
	NotDecoded = -1,
	[Token(Token = "0x400044A")]
	Ok,
	[Token(Token = "0x400044B")]
	BadAsn,
	[Token(Token = "0x400044C")]
	BadTag,
	[Token(Token = "0x400044D")]
	BadLength,
	[Token(Token = "0x400044E")]
	InformationNotAvailable
}
