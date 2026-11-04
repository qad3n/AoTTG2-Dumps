// ==================== AoTTG2 cross-reference ====================
// Type: System.UriSyntaxFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000CF")]
[Flags]
internal enum UriSyntaxFlags
{
	[Token(Token = "0x4000305")]
	None = 0,
	[Token(Token = "0x4000306")]
	MustHaveAuthority = 1,
	[Token(Token = "0x4000307")]
	OptionalAuthority = 2,
	[Token(Token = "0x4000308")]
	MayHaveUserInfo = 4,
	[Token(Token = "0x4000309")]
	MayHavePort = 8,
	[Token(Token = "0x400030A")]
	MayHavePath = 0x10,
	[Token(Token = "0x400030B")]
	MayHaveQuery = 0x20,
	[Token(Token = "0x400030C")]
	MayHaveFragment = 0x40,
	[Token(Token = "0x400030D")]
	AllowEmptyHost = 0x80,
	[Token(Token = "0x400030E")]
	AllowUncHost = 0x100,
	[Token(Token = "0x400030F")]
	AllowDnsHost = 0x200,
	[Token(Token = "0x4000310")]
	AllowIPv4Host = 0x400,
	[Token(Token = "0x4000311")]
	AllowIPv6Host = 0x800,
	[Token(Token = "0x4000312")]
	AllowAnInternetHost = AllowDnsHost | AllowIPv4Host | AllowIPv6Host,
	[Token(Token = "0x4000313")]
	AllowAnyOtherHost = 0x1000,
	[Token(Token = "0x4000314")]
	FileLikeUri = 0x2000,
	[Token(Token = "0x4000315")]
	MailToLikeUri = 0x4000,
	[Token(Token = "0x4000316")]
	V1_UnknownUri = 0x10000,
	[Token(Token = "0x4000317")]
	SimpleUserSyntax = 0x20000,
	[Token(Token = "0x4000318")]
	BuiltInSyntax = 0x40000,
	[Token(Token = "0x4000319")]
	ParserSchemeOnly = 0x80000,
	[Token(Token = "0x400031A")]
	AllowDOSPath = 0x100000,
	[Token(Token = "0x400031B")]
	PathIsRooted = 0x200000,
	[Token(Token = "0x400031C")]
	ConvertPathSlashes = 0x400000,
	[Token(Token = "0x400031D")]
	CompressPath = 0x800000,
	[Token(Token = "0x400031E")]
	CanonicalizeAsFilePath = 0x1000000,
	[Token(Token = "0x400031F")]
	UnEscapeDotsAndSlashes = 0x2000000,
	[Token(Token = "0x4000320")]
	AllowIdn = 0x4000000,
	[Token(Token = "0x4000321")]
	AllowIriParsing = 0x10000000
}
