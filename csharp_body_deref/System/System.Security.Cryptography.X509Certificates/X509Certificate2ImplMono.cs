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

[Token(Token = "0x20000FC")]
internal class X509Certificate2ImplMono : X509Certificate2ImplUnix
{
	[Token(Token = "0x40004DC")]
	[FieldOffset(Offset = "0xB0")]
	private X509CertificateImplCollection intermediateCerts;

	[Token(Token = "0x40004DD")]
	[FieldOffset(Offset = "0xB8")]
	private Mono.Security.X509.X509Certificate _cert;

	[Token(Token = "0x40004DE")]
	[FieldOffset(Offset = "0x0")]
	private static string empty_error;

	[Token(Token = "0x40004DF")]
	[FieldOffset(Offset = "0x8")]
	private static byte[] signedData;

	[Token(Token = "0x1700011C")]
	public override bool IsValid
	{
		[Token(Token = "0x60005A4")]
		[Address(RVA = "0x4937750", Offset = "0x4937750", VA = "0x4937750", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700011D")]
	private Mono.Security.X509.X509Certificate Cert
	{
		[Token(Token = "0x60005A9")]
		[Address(RVA = "0x4937B10", Offset = "0x4937B10", VA = "0x4937B10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011E")]
	public override bool HasPrivateKey
	{
		[Token(Token = "0x60005AB")]
		[Address(RVA = "0x4937B70", Offset = "0x4937B70", VA = "0x4937B70", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700011F")]
	public override AsymmetricAlgorithm PrivateKey
	{
		[Token(Token = "0x60005AC")]
		[Address(RVA = "0x4937B90", Offset = "0x4937B90", VA = "0x4937B90", Slot = "23")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005AD")]
		[Address(RVA = "0x49381E0", Offset = "0x49381E0", VA = "0x49381E0", Slot = "24")]
		set
		{
		}
	}

	[Token(Token = "0x17000120")]
	internal override X509CertificateImplCollection IntermediateCertificates
	{
		[Token(Token = "0x60005B3")]
		[Address(RVA = "0x4939150", Offset = "0x4939150", VA = "0x4939150", Slot = "28")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000121")]
	internal Mono.Security.X509.X509Certificate MonoCertificate
	{
		[Token(Token = "0x60005B4")]
		[Address(RVA = "0x4939160", Offset = "0x4939160", VA = "0x4939160")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x4937760", Offset = "0x4937760", VA = "0x4937760")]
	public X509Certificate2ImplMono(Mono.Security.X509.X509Certificate cert)
	{
	}

	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x49377B0", Offset = "0x49377B0", VA = "0x49377B0")]
	private X509Certificate2ImplMono(X509Certificate2ImplMono other)
	{
	}

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x49378B0", Offset = "0x49378B0", VA = "0x49378B0")]
	public X509Certificate2ImplMono(byte[] rawData, Microsoft.Win32.SafeHandles.SafePasswordHandle password, X509KeyStorageFlags keyStorageFlags)
	{
	}

	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x4937AB0", Offset = "0x4937AB0", VA = "0x4937AB0", Slot = "6")]
	public override System.Security.Cryptography.X509Certificates.X509CertificateImpl Clone()
	{
		return null;
	}

	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x4937B30", Offset = "0x4937B30", VA = "0x4937B30", Slot = "32")]
	protected override byte[] GetRawCertData()
	{
		return null;
	}

	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x4938360", Offset = "0x4938360", VA = "0x4938360", Slot = "18")]
	public override RSA GetRSAPrivateKey()
	{
		return null;
	}

	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x49383E0", Offset = "0x49383E0", VA = "0x49383E0", Slot = "19")]
	public override DSA GetDSAPrivateKey()
	{
		return null;
	}

	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x4937A60", Offset = "0x4937A60", VA = "0x4937A60")]
	private Mono.Security.X509.X509Certificate ImportPkcs12(byte[] rawData, Microsoft.Win32.SafeHandles.SafePasswordHandle password)
	{
		return null;
	}

	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x4938460", Offset = "0x4938460", VA = "0x4938460")]
	private Mono.Security.X509.X509Certificate ImportPkcs12(byte[] rawData, string password)
	{
		return null;
	}

	[Token(Token = "0x60005B2")]
	[Address(RVA = "0x4938FA0", Offset = "0x4938FA0", VA = "0x4938FA0", Slot = "30")]
	[System.MonoTODO("by default this depends on the incomplete X509Chain")]
	public override bool Verify(X509Certificate2 thisCertificate)
	{
		return default(bool);
	}
}
