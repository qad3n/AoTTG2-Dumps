// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Btls.MonoBtlsSslError
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Btls;

[Token(Token = "0x2000089")]
internal enum MonoBtlsSslError
{
	[Token(Token = "0x400015C")]
	None = 0,
	[Token(Token = "0x400015D")]
	Ssl = 1,
	[Token(Token = "0x400015E")]
	WantRead = 2,
	[Token(Token = "0x400015F")]
	WantWrite = 3,
	[Token(Token = "0x4000160")]
	WantX509Lookup = 4,
	[Token(Token = "0x4000161")]
	Syscall = 5,
	[Token(Token = "0x4000162")]
	ZeroReturn = 6,
	[Token(Token = "0x4000163")]
	WantConnect = 7,
	[Token(Token = "0x4000164")]
	WantAccept = 8,
	[Token(Token = "0x4000165")]
	WantChannelIdLookup = 9,
	[Token(Token = "0x4000166")]
	PendingSession = 11,
	[Token(Token = "0x4000167")]
	PendingCertificate = 12,
	[Token(Token = "0x4000168")]
	WantPrivateKeyOperation = 13
}
