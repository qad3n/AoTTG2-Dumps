// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Interface.TlsProtocols
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Mono.Security.Interface;

[Token(Token = "0x2000047")]
[Flags]
public enum TlsProtocols
{
	[Token(Token = "0x4000201")]
	Zero = 0,
	[Token(Token = "0x4000202")]
	Tls10Client = 0x80,
	[Token(Token = "0x4000203")]
	Tls10Server = 0x40,
	[Token(Token = "0x4000204")]
	Tls10 = Tls10Client | Tls10Server,
	[Token(Token = "0x4000205")]
	Tls11Client = 0x200,
	[Token(Token = "0x4000206")]
	Tls11Server = 0x100,
	[Token(Token = "0x4000207")]
	Tls11 = Tls11Client | Tls11Server,
	[Token(Token = "0x4000208")]
	Tls12Client = 0x800,
	[Token(Token = "0x4000209")]
	Tls12Server = 0x400,
	[Token(Token = "0x400020A")]
	Tls12 = Tls12Client | Tls12Server,
	[Token(Token = "0x400020B")]
	ClientMask = Tls10Client | Tls11Client | Tls12Client,
	[Token(Token = "0x400020C")]
	ServerMask = Tls10Server | Tls11Server | Tls12Server
}
