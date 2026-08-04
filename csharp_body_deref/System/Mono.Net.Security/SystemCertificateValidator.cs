// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Net.Security.SystemCertificateValidator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;
using Mono.Security.Interface;

namespace Mono.Net.Security;

[Token(Token = "0x2000064")]
internal static class SystemCertificateValidator
{
	[Token(Token = "0x4000128")]
	[FieldOffset(Offset = "0x0")]
	private static bool is_macosx;

	[Token(Token = "0x4000129")]
	[FieldOffset(Offset = "0x4")]
	private static X509KeyUsageFlags s_flags;

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x452B600", Offset = "0x452B600", VA = "0x452B600")]
	static SystemCertificateValidator()
	{
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x45256D0", Offset = "0x45256D0", VA = "0x45256D0")]
	internal static bool NeedsChain(MonoTlsSettings settings)
	{
		return default(bool);
	}
}
