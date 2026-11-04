// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Unity.UnityTlsProvider
// Update status: unchanged since the previous dump
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
using Mono.Net.Security;
using Mono.Security.Interface;
using Mono.Util;

namespace Mono.Unity;

[Token(Token = "0x2000043")]
internal class UnityTlsProvider : MobileTlsProvider
{
	[Token(Token = "0x1700000D")]
	public override string Name
	{
		[Token(Token = "0x6000094")]
		[Address(RVA = "0x24A6760", Offset = "0x24A4D60", VA = "0x1824A6760", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000E")]
	public override Guid ID
	{
		[Token(Token = "0x6000095")]
		[Address(RVA = "0x24A6700", Offset = "0x24A4D00", VA = "0x1824A6700", Slot = "4")]
		get
		{
			return default(Guid);
		}
	}

	[Token(Token = "0x1700000F")]
	public override bool SupportsSslStream
	{
		[Token(Token = "0x6000096")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000010")]
	public override bool SupportsMonoExtensions
	{
		[Token(Token = "0x6000097")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000011")]
	public override bool SupportsConnectionInfo
	{
		[Token(Token = "0x6000098")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000012")]
	internal override bool SupportsCleanShutdown
	{
		[Token(Token = "0x6000099")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000013")]
	public override SslProtocols SupportedProtocols
	{
		[Token(Token = "0x600009A")]
		[Address(RVA = "0x249C810", Offset = "0x249AE10", VA = "0x18249C810", Slot = "9")]
		get
		{
			return default(SslProtocols);
		}
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x24A5C00", Offset = "0x24A4200", VA = "0x1824A5C00", Slot = "11")]
	internal override MobileAuthenticatedStream CreateSslStream(SslStream sslStream, Stream innerStream, bool leaveInnerStreamOpen, MonoTlsSettings settings)
	{
		return null;
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x24A6790", Offset = "0x24A4D90", VA = "0x1824A6790")]
	[MonoPInvokeCallback(typeof(UnityTls.unitytls_x509verify_callback))]
	private unsafe static UnityTls.unitytls_x509verify_result x509verify_callback(void* userData, UnityTls.unitytls_x509_ref cert, UnityTls.unitytls_x509verify_result result, UnityTls.unitytls_errorstate* errorState)
	{
		return default(UnityTls.unitytls_x509verify_result);
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x24A5DE0", Offset = "0x24A43E0", VA = "0x1824A5DE0", Slot = "12")]
	internal override bool ValidateCertificate(ChainValidationHelper validator, string targetHost, bool serverMode, X509CertificateCollection certificates, bool wantsChain, ref X509Chain chain, ref SslPolicyErrors errors, ref int status11)
	{
		return default(bool);
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public UnityTlsProvider()
	{
	}
}
