// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Btls.MonoBtlsProvider
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.IO;
using System.Net.Security;
using System.Security.Authentication;
using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;
using Microsoft.Win32.SafeHandles;
using Mono.Net.Security;
using Mono.Security.Interface;

namespace Mono.Btls;

[Token(Token = "0x200007D")]
internal class MonoBtlsProvider : MobileTlsProvider
{
	[Token(Token = "0x17000062")]
	public override Guid ID
	{
		[Token(Token = "0x60001F6")]
		[Address(RVA = "0x249C780", Offset = "0x249AD80", VA = "0x18249C780", Slot = "4")]
		get
		{
			return default(Guid);
		}
	}

	[Token(Token = "0x17000063")]
	public override string Name
	{
		[Token(Token = "0x60001F7")]
		[Address(RVA = "0x249C7E0", Offset = "0x249ADE0", VA = "0x18249C7E0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000064")]
	public override bool SupportsSslStream
	{
		[Token(Token = "0x60001F9")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000065")]
	public override bool SupportsMonoExtensions
	{
		[Token(Token = "0x60001FA")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000066")]
	public override bool SupportsConnectionInfo
	{
		[Token(Token = "0x60001FB")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000067")]
	internal override bool SupportsCleanShutdown
	{
		[Token(Token = "0x60001FC")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000068")]
	public override SslProtocols SupportedProtocols
	{
		[Token(Token = "0x60001FD")]
		[Address(RVA = "0x249C810", Offset = "0x249AE10", VA = "0x18249C810", Slot = "9")]
		get
		{
			return default(SslProtocols);
		}
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x249C6E0", Offset = "0x249ACE0", VA = "0x18249C6E0")]
	internal MonoBtlsProvider()
	{
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x249A790", Offset = "0x2498D90", VA = "0x18249A790", Slot = "11")]
	internal override MobileAuthenticatedStream CreateSslStream(SslStream sslStream, Stream innerStream, bool leaveInnerStreamOpen, MonoTlsSettings settings)
	{
		return null;
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x249A940", Offset = "0x2498F40", VA = "0x18249A940")]
	internal X509Certificate2Impl GetNativeCertificate(byte[] data, string password, X509KeyStorageFlags flags)
	{
		return null;
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x249AAF0", Offset = "0x24990F0", VA = "0x18249AAF0")]
	internal X509Certificate2Impl GetNativeCertificate(X509Certificate certificate)
	{
		return null;
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x249AA80", Offset = "0x2499080", VA = "0x18249AA80")]
	internal X509Certificate2Impl GetNativeCertificate(byte[] data, Microsoft.Win32.SafeHandles.SafePasswordHandle password, X509KeyStorageFlags flags)
	{
		return null;
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x249AEE0", Offset = "0x24994E0", VA = "0x18249AEE0")]
	internal static MonoBtlsX509VerifyParam GetVerifyParam(MonoTlsSettings settings, string targetHost, bool serverMode)
	{
		return null;
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x249B700", Offset = "0x2499D00", VA = "0x18249B700", Slot = "12")]
	internal override bool ValidateCertificate(ChainValidationHelper validator, string targetHost, bool serverMode, X509CertificateCollection certificates, bool wantsChain, ref X509Chain chain, ref SslPolicyErrors errors, ref int status11)
	{
		return default(bool);
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x249C0B0", Offset = "0x249A6B0", VA = "0x18249C0B0")]
	internal static bool ValidateCertificate(MonoBtlsX509Chain chain, MonoBtlsX509VerifyParam param)
	{
		return default(bool);
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x249A350", Offset = "0x2498950", VA = "0x18249A350")]
	private void CheckValidationResult(ChainValidationHelper validator, string targetHost, bool serverMode, X509CertificateCollection certificates, bool wantsChain, X509Chain chain, MonoBtlsX509StoreCtx storeCtx, bool success, ref SslPolicyErrors errors, ref int status11)
	{
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x249B070", Offset = "0x2499670", VA = "0x18249B070")]
	internal static X509ChainStatusFlags MapVerifyErrorToChainStatus(MonoBtlsX509Error code)
	{
		return default(X509ChainStatusFlags);
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x249B2C0", Offset = "0x24998C0", VA = "0x18249B2C0")]
	internal static void SetupCertificateStore(MonoBtlsX509Store store, MonoTlsSettings settings, bool server)
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x249B670", Offset = "0x2499C70", VA = "0x18249B670")]
	private static void SetupDefaultCertificateStore(MonoBtlsX509Store store)
	{
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x249A2F0", Offset = "0x24988F0", VA = "0x18249A2F0")]
	private static void AddUserStore(MonoBtlsX509Store store)
	{
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x249A250", Offset = "0x2498850", VA = "0x18249A250")]
	private static void AddMachineStore(MonoBtlsX509Store store)
	{
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x249A2B0", Offset = "0x24988B0", VA = "0x18249A2B0")]
	private static void AddTrustedRoots(MonoBtlsX509Store store, MonoTlsSettings settings, bool server)
	{
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x249A680", Offset = "0x2498C80", VA = "0x18249A680")]
	public static X509Certificate2 CreateCertificate(MonoBtlsX509 x509)
	{
		return null;
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x249A8C0", Offset = "0x2498EC0", VA = "0x18249A8C0")]
	public static X509Chain GetManagedChain(MonoBtlsX509Chain chain)
	{
		return null;
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x249A810", Offset = "0x2498E10", VA = "0x18249A810")]
	public static MonoBtlsX509 GetBtlsCertificate(X509Certificate certificate)
	{
		return null;
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x249AC10", Offset = "0x2499210", VA = "0x18249AC10")]
	public static MonoBtlsX509Chain GetNativeChain(X509CertificateCollection certificates)
	{
		return null;
	}
}
