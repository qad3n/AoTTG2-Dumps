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

[Token(Token = "0x200014D")]
internal static class X509Helper2
{
	[Token(Token = "0x6000848")]
	[Address(RVA = "0x288FC80", Offset = "0x288E280", VA = "0x18288FC80")]
	[System.MonoTODO("Investigate replacement; see comments in source.")]
	internal static Mono.Security.X509.X509Certificate GetMonoCertificate(X509Certificate2 certificate)
	{
		return null;
	}

	[Token(Token = "0x6000849")]
	[Address(RVA = "0x288FBB0", Offset = "0x288E1B0", VA = "0x18288FBB0")]
	internal static X509ChainImpl CreateChainImpl(bool useMachineContext)
	{
		return null;
	}

	[Token(Token = "0x600084A")]
	[Address(RVA = "0x19EC100", Offset = "0x19EA700", VA = "0x1819EC100")]
	public static bool IsValid(X509ChainImpl impl)
	{
		return default(bool);
	}

	[Token(Token = "0x600084B")]
	[Address(RVA = "0x288FDA0", Offset = "0x288E3A0", VA = "0x18288FDA0")]
	internal static void ThrowIfContextInvalid(X509ChainImpl impl)
	{
	}

	[Token(Token = "0x600084C")]
	[Address(RVA = "0x288FC10", Offset = "0x288E210", VA = "0x18288FC10")]
	internal static Exception GetInvalidChainContextException()
	{
		return null;
	}
}
