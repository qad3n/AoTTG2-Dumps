// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Microsoft.Win32.SafeHandles;
using Mono.Security.X509;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x20000FD")]
internal class X509Certificate2ImplMono : X509Certificate2ImplUnix
{
	[Token(Token = "0x40004DF")]
	[FieldOffset(Offset = "0xB0")]
	private X509CertificateImplCollection intermediateCerts;

	[Token(Token = "0x40004E0")]
	[FieldOffset(Offset = "0xB8")]
	private Mono.Security.X509.X509Certificate _cert;

	[Token(Token = "0x40004E1")]
	[FieldOffset(Offset = "0x0")]
	private static string empty_error;

	[Token(Token = "0x40004E2")]
	[FieldOffset(Offset = "0x8")]
	private static byte[] signedData;

	[Token(Token = "0x17000126")]
	public override bool IsValid
	{
		[Token(Token = "0x60005CE")]
		[Address(RVA = "0x6212920", Offset = "0x6211920", VA = "0x6212920", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000127")]
	private Mono.Security.X509.X509Certificate Cert
	{
		[Token(Token = "0x60005D3")]
		[Address(RVA = "0x6212CE0", Offset = "0x6211CE0", VA = "0x6212CE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000128")]
	public override bool HasPrivateKey
	{
		[Token(Token = "0x60005D5")]
		[Address(RVA = "0x6212D40", Offset = "0x6211D40", VA = "0x6212D40", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000129")]
	public override AsymmetricAlgorithm PrivateKey
	{
		[Token(Token = "0x60005D6")]
		[Address(RVA = "0x6212D60", Offset = "0x6211D60", VA = "0x6212D60", Slot = "23")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005D7")]
		[Address(RVA = "0x6213270", Offset = "0x6212270", VA = "0x6213270", Slot = "24")]
		set
		{
		}
	}

	[Token(Token = "0x1700012A")]
	internal override X509CertificateImplCollection IntermediateCertificates
	{
		[Token(Token = "0x60005DD")]
		[Address(RVA = "0x6214060", Offset = "0x6213060", VA = "0x6214060", Slot = "28")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012B")]
	internal Mono.Security.X509.X509Certificate MonoCertificate
	{
		[Token(Token = "0x60005DE")]
		[Address(RVA = "0x6214070", Offset = "0x6213070", VA = "0x6214070")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005CF")]
	[Address(RVA = "0x6212930", Offset = "0x6211930", VA = "0x6212930")]
	public X509Certificate2ImplMono(Mono.Security.X509.X509Certificate cert)
	{
	}

	[Token(Token = "0x60005D0")]
	[Address(RVA = "0x6212980", Offset = "0x6211980", VA = "0x6212980")]
	private X509Certificate2ImplMono(X509Certificate2ImplMono other)
	{
	}

	[Token(Token = "0x60005D1")]
	[Address(RVA = "0x6212A80", Offset = "0x6211A80", VA = "0x6212A80")]
	public X509Certificate2ImplMono(byte[] rawData, Microsoft.Win32.SafeHandles.SafePasswordHandle password, X509KeyStorageFlags keyStorageFlags)
	{
	}

	[Token(Token = "0x60005D2")]
	[Address(RVA = "0x6212C80", Offset = "0x6211C80", VA = "0x6212C80", Slot = "6")]
	public override System.Security.Cryptography.X509Certificates.X509CertificateImpl Clone()
	{
		return null;
	}

	[Token(Token = "0x60005D4")]
	[Address(RVA = "0x6212D00", Offset = "0x6211D00", VA = "0x6212D00", Slot = "32")]
	protected override byte[] GetRawCertData()
	{
		return null;
	}

	[Token(Token = "0x60005D8")]
	[Address(RVA = "0x6213400", Offset = "0x6212400", VA = "0x6213400", Slot = "18")]
	public override RSA GetRSAPrivateKey()
	{
		return null;
	}

	[Token(Token = "0x60005D9")]
	[Address(RVA = "0x6213480", Offset = "0x6212480", VA = "0x6213480", Slot = "19")]
	public override DSA GetDSAPrivateKey()
	{
		return null;
	}

	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x6212C30", Offset = "0x6211C30", VA = "0x6212C30")]
	private Mono.Security.X509.X509Certificate ImportPkcs12(byte[] rawData, Microsoft.Win32.SafeHandles.SafePasswordHandle password)
	{
		return null;
	}

	[Token(Token = "0x60005DB")]
	[Address(RVA = "0x6213500", Offset = "0x6212500", VA = "0x6213500")]
	private Mono.Security.X509.X509Certificate ImportPkcs12(byte[] rawData, string password)
	{
		return null;
	}

	[Token(Token = "0x60005DC")]
	[Address(RVA = "0x6213EB0", Offset = "0x6212EB0", VA = "0x6213EB0", Slot = "30")]
	[System.MonoTODO("by default this depends on the incomplete X509Chain")]
	public override bool Verify(X509Certificate2 thisCertificate)
	{
		return default(bool);
	}
}
