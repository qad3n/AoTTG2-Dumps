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
	[Token(Token = "0x400012A")]
	[FieldOffset(Offset = "0x0")]
	private static bool is_macosx;

	[Token(Token = "0x400012B")]
	[FieldOffset(Offset = "0x4")]
	private static X509KeyUsageFlags s_flags;

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x249F860", Offset = "0x249DE60", VA = "0x18249F860")]
	static SystemCertificateValidator()
	{
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
	internal static bool NeedsChain(MonoTlsSettings settings)
	{
		return default(bool);
	}
}
