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

[Token(Token = "0x200013C")]
internal class X509Certificate2ImplMono : X509Certificate2ImplUnix
{
	[Token(Token = "0x40005AE")]
	[FieldOffset(Offset = "0xB0")]
	private X509CertificateImplCollection intermediateCerts;

	[Token(Token = "0x40005AF")]
	[FieldOffset(Offset = "0xB8")]
	private Mono.Security.X509.X509Certificate _cert;

	[Token(Token = "0x40005B0")]
	[FieldOffset(Offset = "0x0")]
	private static string empty_error;

	[Token(Token = "0x40005B1")]
	[FieldOffset(Offset = "0x8")]
	private static byte[] signedData;

	[Token(Token = "0x17000155")]
	public override bool IsValid
	{
		[Token(Token = "0x6000789")]
		[Address(RVA = "0x2663FD0", Offset = "0x26625D0", VA = "0x182663FD0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000156")]
	private Mono.Security.X509.X509Certificate Cert
	{
		[Token(Token = "0x600078E")]
		[Address(RVA = "0x28473D0", Offset = "0x28459D0", VA = "0x1828473D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000157")]
	public override bool HasPrivateKey
	{
		[Token(Token = "0x6000790")]
		[Address(RVA = "0x2884210", Offset = "0x2882810", VA = "0x182884210", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000158")]
	public override AsymmetricAlgorithm PrivateKey
	{
		[Token(Token = "0x6000791")]
		[Address(RVA = "0x2884230", Offset = "0x2882830", VA = "0x182884230", Slot = "24")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000792")]
		[Address(RVA = "0x2884660", Offset = "0x2882C60", VA = "0x182884660", Slot = "25")]
		set
		{
		}
	}

	[Token(Token = "0x17000159")]
	internal override X509CertificateImplCollection IntermediateCertificates
	{
		[Token(Token = "0x6000798")]
		[Address(RVA = "0x1537220", Offset = "0x1535820", VA = "0x181537220", Slot = "29")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015A")]
	internal Mono.Security.X509.X509Certificate MonoCertificate
	{
		[Token(Token = "0x6000799")]
		[Address(RVA = "0x187BC10", Offset = "0x187A210", VA = "0x18187BC10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600078A")]
	[Address(RVA = "0x2884110", Offset = "0x2882710", VA = "0x182884110")]
	public X509Certificate2ImplMono(Mono.Security.X509.X509Certificate cert)
	{
	}

	[Token(Token = "0x600078B")]
	[Address(RVA = "0x2884150", Offset = "0x2882750", VA = "0x182884150")]
	private X509Certificate2ImplMono(X509Certificate2ImplMono other)
	{
	}

	[Token(Token = "0x600078C")]
	[Address(RVA = "0x2883EC0", Offset = "0x28824C0", VA = "0x182883EC0")]
	public X509Certificate2ImplMono(byte[] rawData, Microsoft.Win32.SafeHandles.SafePasswordHandle password, X509KeyStorageFlags keyStorageFlags)
	{
	}

	[Token(Token = "0x600078D")]
	[Address(RVA = "0x28832C0", Offset = "0x28818C0", VA = "0x1828832C0", Slot = "6")]
	public override System.Security.Cryptography.X509Certificates.X509CertificateImpl Clone()
	{
		return null;
	}

	[Token(Token = "0x600078F")]
	[Address(RVA = "0x28834D0", Offset = "0x2881AD0", VA = "0x1828834D0", Slot = "33")]
	protected override byte[] GetRawCertData()
	{
		return null;
	}

	[Token(Token = "0x6000793")]
	[Address(RVA = "0x2883440", Offset = "0x2881A40", VA = "0x182883440", Slot = "18")]
	public override RSA GetRSAPrivateKey()
	{
		return null;
	}

	[Token(Token = "0x6000794")]
	[Address(RVA = "0x28833B0", Offset = "0x28819B0", VA = "0x1828833B0", Slot = "19")]
	public override DSA GetDSAPrivateKey()
	{
		return null;
	}

	[Token(Token = "0x6000795")]
	[Address(RVA = "0x2883BE0", Offset = "0x28821E0", VA = "0x182883BE0")]
	private Mono.Security.X509.X509Certificate ImportPkcs12(byte[] rawData, Microsoft.Win32.SafeHandles.SafePasswordHandle password)
	{
		return null;
	}

	[Token(Token = "0x6000796")]
	[Address(RVA = "0x2883520", Offset = "0x2881B20", VA = "0x182883520")]
	private Mono.Security.X509.X509Certificate ImportPkcs12(byte[] rawData, string password)
	{
		return null;
	}

	[Token(Token = "0x6000797")]
	[Address(RVA = "0x2883C50", Offset = "0x2882250", VA = "0x182883C50", Slot = "31")]
	[System.MonoTODO("by default this depends on the incomplete X509Chain")]
	public override bool Verify(X509Certificate2 thisCertificate)
	{
		return default(bool);
	}
}
