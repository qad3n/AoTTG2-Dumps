using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000090")]
[Flags]
internal enum UriSyntaxFlags
{
	[Token(Token = "0x4000235")]
	None = 0,
	[Token(Token = "0x4000236")]
	MustHaveAuthority = 1,
	[Token(Token = "0x4000237")]
	OptionalAuthority = 2,
	[Token(Token = "0x4000238")]
	MayHaveUserInfo = 4,
	[Token(Token = "0x4000239")]
	MayHavePort = 8,
	[Token(Token = "0x400023A")]
	MayHavePath = 0x10,
	[Token(Token = "0x400023B")]
	MayHaveQuery = 0x20,
	[Token(Token = "0x400023C")]
	MayHaveFragment = 0x40,
	[Token(Token = "0x400023D")]
	AllowEmptyHost = 0x80,
	[Token(Token = "0x400023E")]
	AllowUncHost = 0x100,
	[Token(Token = "0x400023F")]
	AllowDnsHost = 0x200,
	[Token(Token = "0x4000240")]
	AllowIPv4Host = 0x400,
	[Token(Token = "0x4000241")]
	AllowIPv6Host = 0x800,
	[Token(Token = "0x4000242")]
	AllowAnInternetHost = 0xE00,
	[Token(Token = "0x4000243")]
	AllowAnyOtherHost = 0x1000,
	[Token(Token = "0x4000244")]
	FileLikeUri = 0x2000,
	[Token(Token = "0x4000245")]
	MailToLikeUri = 0x4000,
	[Token(Token = "0x4000246")]
	V1_UnknownUri = 0x10000,
	[Token(Token = "0x4000247")]
	SimpleUserSyntax = 0x20000,
	[Token(Token = "0x4000248")]
	BuiltInSyntax = 0x40000,
	[Token(Token = "0x4000249")]
	ParserSchemeOnly = 0x80000,
	[Token(Token = "0x400024A")]
	AllowDOSPath = 0x100000,
	[Token(Token = "0x400024B")]
	PathIsRooted = 0x200000,
	[Token(Token = "0x400024C")]
	ConvertPathSlashes = 0x400000,
	[Token(Token = "0x400024D")]
	CompressPath = 0x800000,
	[Token(Token = "0x400024E")]
	CanonicalizeAsFilePath = 0x1000000,
	[Token(Token = "0x400024F")]
	UnEscapeDotsAndSlashes = 0x2000000,
	[Token(Token = "0x4000250")]
	AllowIdn = 0x4000000,
	[Token(Token = "0x4000251")]
	AllowIriParsing = 0x10000000
}
