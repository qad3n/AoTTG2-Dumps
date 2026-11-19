// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509Helper2
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Mono.Security.X509;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x200010E")]
internal static class X509Helper2
{
	[Token(Token = "0x6000688")]
	[Address(RVA = "0x621D5F0", Offset = "0x621C5F0", VA = "0x621D5F0")]
	[System.MonoTODO("Investigate replacement; see comments in source.")]
	internal static Mono.Security.X509.X509Certificate GetMonoCertificate(X509Certificate2 certificate)
	{
		return null;
	}

	[Token(Token = "0x6000689")]
	[Address(RVA = "0x621D6B0", Offset = "0x621C6B0", VA = "0x621D6B0")]
	internal static X509ChainImpl CreateChainImpl(bool useMachineContext)
	{
		return null;
	}

	[Token(Token = "0x600068A")]
	[Address(RVA = "0x621D700", Offset = "0x621C700", VA = "0x621D700")]
	public static bool IsValid(X509ChainImpl impl)
	{
		return default(bool);
	}

	[Token(Token = "0x600068B")]
	[Address(RVA = "0x621D720", Offset = "0x621C720", VA = "0x621D720")]
	internal static void ThrowIfContextInvalid(X509ChainImpl impl)
	{
	}

	[Token(Token = "0x600068C")]
	[Address(RVA = "0x621D760", Offset = "0x621C760", VA = "0x621D760")]
	internal static Exception GetInvalidChainContextException()
	{
		return null;
	}
}
