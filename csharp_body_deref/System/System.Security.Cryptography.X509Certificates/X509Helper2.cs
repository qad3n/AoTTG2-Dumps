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

[Token(Token = "0x200010D")]
internal static class X509Helper2
{
	[Token(Token = "0x600065E")]
	[Address(RVA = "0x4942E10", Offset = "0x4942E10", VA = "0x4942E10")]
	[System.MonoTODO("Investigate replacement; see comments in source.")]
	internal static Mono.Security.X509.X509Certificate GetMonoCertificate(X509Certificate2 certificate)
	{
		return null;
	}

	[Token(Token = "0x600065F")]
	[Address(RVA = "0x4942ED0", Offset = "0x4942ED0", VA = "0x4942ED0")]
	internal static X509ChainImpl CreateChainImpl(bool useMachineContext)
	{
		return null;
	}

	[Token(Token = "0x6000660")]
	[Address(RVA = "0x4942F20", Offset = "0x4942F20", VA = "0x4942F20")]
	public static bool IsValid(X509ChainImpl impl)
	{
		return default(bool);
	}

	[Token(Token = "0x6000661")]
	[Address(RVA = "0x4942F40", Offset = "0x4942F40", VA = "0x4942F40")]
	internal static void ThrowIfContextInvalid(X509ChainImpl impl)
	{
	}

	[Token(Token = "0x6000662")]
	[Address(RVA = "0x4942F80", Offset = "0x4942F80", VA = "0x4942F80")]
	internal static Exception GetInvalidChainContextException()
	{
		return null;
	}
}
