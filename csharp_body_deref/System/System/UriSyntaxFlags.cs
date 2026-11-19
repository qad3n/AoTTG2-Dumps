// ==================== AoTTG2 cross-reference ====================
// Type: System.UriSyntaxFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000090")]
[Flags]
internal enum UriSyntaxFlags
{
	[Token(Token = "0x4000236")]
	None = 0,
	[Token(Token = "0x4000237")]
	MustHaveAuthority = 1,
	[Token(Token = "0x4000238")]
	OptionalAuthority = 2,
	[Token(Token = "0x4000239")]
	MayHaveUserInfo = 4,
	[Token(Token = "0x400023A")]
	MayHavePort = 8,
	[Token(Token = "0x400023B")]
	MayHavePath = 0x10,
	[Token(Token = "0x400023C")]
	MayHaveQuery = 0x20,
	[Token(Token = "0x400023D")]
	MayHaveFragment = 0x40,
	[Token(Token = "0x400023E")]
	AllowEmptyHost = 0x80,
	[Token(Token = "0x400023F")]
	AllowUncHost = 0x100,
	[Token(Token = "0x4000240")]
	AllowDnsHost = 0x200,
	[Token(Token = "0x4000241")]
	AllowIPv4Host = 0x400,
	[Token(Token = "0x4000242")]
	AllowIPv6Host = 0x800,
	[Token(Token = "0x4000243")]
	AllowAnInternetHost = AllowDnsHost | AllowIPv4Host | AllowIPv6Host,
	[Token(Token = "0x4000244")]
	AllowAnyOtherHost = 0x1000,
	[Token(Token = "0x4000245")]
	FileLikeUri = 0x2000,
	[Token(Token = "0x4000246")]
	MailToLikeUri = 0x4000,
	[Token(Token = "0x4000247")]
	V1_UnknownUri = 0x10000,
	[Token(Token = "0x4000248")]
	SimpleUserSyntax = 0x20000,
	[Token(Token = "0x4000249")]
	BuiltInSyntax = 0x40000,
	[Token(Token = "0x400024A")]
	ParserSchemeOnly = 0x80000,
	[Token(Token = "0x400024B")]
	AllowDOSPath = 0x100000,
	[Token(Token = "0x400024C")]
	PathIsRooted = 0x200000,
	[Token(Token = "0x400024D")]
	ConvertPathSlashes = 0x400000,
	[Token(Token = "0x400024E")]
	CompressPath = 0x800000,
	[Token(Token = "0x400024F")]
	CanonicalizeAsFilePath = 0x1000000,
	[Token(Token = "0x4000250")]
	UnEscapeDotsAndSlashes = 0x2000000,
	[Token(Token = "0x4000251")]
	AllowIdn = 0x4000000,
	[Token(Token = "0x4000252")]
	AllowIriParsing = 0x10000000
}
