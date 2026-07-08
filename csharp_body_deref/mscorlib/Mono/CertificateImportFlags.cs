using System;
using Il2CppDummyDll;

namespace Mono;

[Token(Token = "0x200000E")]
[Flags]
internal enum CertificateImportFlags
{
	[Token(Token = "0x4000085")]
	None = 0,
	[Token(Token = "0x4000086")]
	DisableNativeBackend = 1,
	[Token(Token = "0x4000087")]
	DisableAutomaticFallback = 2
}
