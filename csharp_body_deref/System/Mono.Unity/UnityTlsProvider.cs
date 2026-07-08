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
		[Token(Token = "0x6000093")]
		[Address(RVA = "0x453A5A0", Offset = "0x453A5A0", VA = "0x453A5A0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000E")]
	public override Guid ID
	{
		[Token(Token = "0x6000094")]
		[Address(RVA = "0x453A5D0", Offset = "0x453A5D0", VA = "0x453A5D0", Slot = "4")]
		get
		{
			return default(Guid);
		}
	}

	[Token(Token = "0x1700000F")]
	public override bool SupportsSslStream
	{
		[Token(Token = "0x6000095")]
		[Address(RVA = "0x453A620", Offset = "0x453A620", VA = "0x453A620", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000010")]
	public override bool SupportsMonoExtensions
	{
		[Token(Token = "0x6000096")]
		[Address(RVA = "0x453A630", Offset = "0x453A630", VA = "0x453A630", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000011")]
	public override bool SupportsConnectionInfo
	{
		[Token(Token = "0x6000097")]
		[Address(RVA = "0x453A640", Offset = "0x453A640", VA = "0x453A640", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000012")]
	internal override bool SupportsCleanShutdown
	{
		[Token(Token = "0x6000098")]
		[Address(RVA = "0x453A650", Offset = "0x453A650", VA = "0x453A650", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000013")]
	public override SslProtocols SupportedProtocols
	{
		[Token(Token = "0x6000099")]
		[Address(RVA = "0x453A660", Offset = "0x453A660", VA = "0x453A660", Slot = "9")]
		get
		{
			return default(SslProtocols);
		}
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x453A670", Offset = "0x453A670", VA = "0x453A670", Slot = "11")]
	internal override MobileAuthenticatedStream CreateSslStream(SslStream sslStream, Stream innerStream, bool leaveInnerStreamOpen, MonoTlsSettings settings)
	{
		return null;
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x453A550", Offset = "0x453A550", VA = "0x453A550")]
	[MonoPInvokeCallback(typeof(UnityTls.unitytls_x509verify_callback))]
	private unsafe static UnityTls.unitytls_x509verify_result x509verify_callback(void* userData, UnityTls.unitytls_x509_ref cert, UnityTls.unitytls_x509verify_result result, UnityTls.unitytls_errorstate* errorState)
	{
		return default(UnityTls.unitytls_x509verify_result);
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x453A7A0", Offset = "0x453A7A0", VA = "0x453A7A0", Slot = "12")]
	internal override bool ValidateCertificate(ChainValidationHelper validator, string targetHost, bool serverMode, X509CertificateCollection certificates, bool wantsChain, ref X509Chain chain, ref SslPolicyErrors errors, ref int status11)
	{
		return default(bool);
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x453B4A0", Offset = "0x453B4A0", VA = "0x453B4A0")]
	public UnityTlsProvider()
	{
	}
}
