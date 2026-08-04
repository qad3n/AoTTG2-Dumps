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

[Token(Token = "0x2000034")]
[Flags]
public enum TlsProtocols
{
	[Token(Token = "0x40001F7")]
	Zero = 0,
	[Token(Token = "0x40001F8")]
	Tls10Client = 0x80,
	[Token(Token = "0x40001F9")]
	Tls10Server = 0x40,
	[Token(Token = "0x40001FA")]
	Tls10 = 0xC0,
	[Token(Token = "0x40001FB")]
	Tls11Client = 0x200,
	[Token(Token = "0x40001FC")]
	Tls11Server = 0x100,
	[Token(Token = "0x40001FD")]
	Tls11 = 0x300,
	[Token(Token = "0x40001FE")]
	Tls12Client = 0x800,
	[Token(Token = "0x40001FF")]
	Tls12Server = 0x400,
	[Token(Token = "0x4000200")]
	Tls12 = 0xC00,
	[Token(Token = "0x4000201")]
	ClientMask = 0xA80,
	[Token(Token = "0x4000202")]
	ServerMask = 0x540
}
