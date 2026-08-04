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
		[Token(Token = "0x6000093")]
		[Address(RVA = "0x4520790", Offset = "0x4520790", VA = "0x4520790", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000E")]
	public override Guid ID
	{
		[Token(Token = "0x6000094")]
		[Address(RVA = "0x45207C0", Offset = "0x45207C0", VA = "0x45207C0", Slot = "4")]
		get
		{
			return default(Guid);
		}
	}

	[Token(Token = "0x1700000F")]
	public override bool SupportsSslStream
	{
		[Token(Token = "0x6000095")]
		[Address(RVA = "0x4520810", Offset = "0x4520810", VA = "0x4520810", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000010")]
	public override bool SupportsMonoExtensions
	{
		[Token(Token = "0x6000096")]
		[Address(RVA = "0x4520820", Offset = "0x4520820", VA = "0x4520820", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000011")]
	public override bool SupportsConnectionInfo
	{
		[Token(Token = "0x6000097")]
		[Address(RVA = "0x4520830", Offset = "0x4520830", VA = "0x4520830", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000012")]
	internal override bool SupportsCleanShutdown
	{
		[Token(Token = "0x6000098")]
		[Address(RVA = "0x4520840", Offset = "0x4520840", VA = "0x4520840", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000013")]
	public override SslProtocols SupportedProtocols
	{
		[Token(Token = "0x6000099")]
		[Address(RVA = "0x4520850", Offset = "0x4520850", VA = "0x4520850", Slot = "9")]
		get
		{
			return default(SslProtocols);
		}
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x4520860", Offset = "0x4520860", VA = "0x4520860", Slot = "11")]
	internal override MobileAuthenticatedStream CreateSslStream(SslStream sslStream, Stream innerStream, bool leaveInnerStreamOpen, MonoTlsSettings settings)
	{
		return null;
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x4520740", Offset = "0x4520740", VA = "0x4520740")]
	[MonoPInvokeCallback(typeof(UnityTls.unitytls_x509verify_callback))]
	private unsafe static UnityTls.unitytls_x509verify_result x509verify_callback(void* userData, UnityTls.unitytls_x509_ref cert, UnityTls.unitytls_x509verify_result result, UnityTls.unitytls_errorstate* errorState)
	{
		return default(UnityTls.unitytls_x509verify_result);
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x4520990", Offset = "0x4520990", VA = "0x4520990", Slot = "12")]
	internal override bool ValidateCertificate(ChainValidationHelper validator, string targetHost, bool serverMode, X509CertificateCollection certificates, bool wantsChain, ref X509Chain chain, ref SslPolicyErrors errors, ref int status11)
	{
		return default(bool);
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x4521690", Offset = "0x4521690", VA = "0x4521690")]
	public UnityTlsProvider()
	{
	}
}
