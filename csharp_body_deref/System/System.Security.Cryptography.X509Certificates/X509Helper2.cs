using Il2CppDummyDll;
using Mono.Security.X509;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x200010D")]
internal static class X509Helper2
{
	[Token(Token = "0x600065E")]
	[Address(RVA = "0x461DD10", Offset = "0x461DD10", VA = "0x461DD10")]
	[System.MonoTODO("Investigate replacement; see comments in source.")]
	internal static Mono.Security.X509.X509Certificate GetMonoCertificate(X509Certificate2 certificate)
	{
		return null;
	}

	[Token(Token = "0x600065F")]
	[Address(RVA = "0x461DDD0", Offset = "0x461DDD0", VA = "0x461DDD0")]
	internal static X509ChainImpl CreateChainImpl(bool useMachineContext)
	{
		return null;
	}

	[Token(Token = "0x6000660")]
	[Address(RVA = "0x461DE20", Offset = "0x461DE20", VA = "0x461DE20")]
	public static bool IsValid(X509ChainImpl impl)
	{
		return default(bool);
	}

	[Token(Token = "0x6000661")]
	[Address(RVA = "0x461DE40", Offset = "0x461DE40", VA = "0x461DE40")]
	internal static void ThrowIfContextInvalid(X509ChainImpl impl)
	{
	}

	[Token(Token = "0x6000662")]
	[Address(RVA = "0x461DE80", Offset = "0x461DE80", VA = "0x461DE80")]
	internal static Exception GetInvalidChainContextException()
	{
		return null;
	}
}
