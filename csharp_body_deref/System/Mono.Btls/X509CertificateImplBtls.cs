// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Btls.X509CertificateImplBtls
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Security.Cryptography;
using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;
using Microsoft.Win32.SafeHandles;

namespace Mono.Btls;

[Token(Token = "0x20000A7")]
internal class X509CertificateImplBtls : X509Certificate2ImplUnix
{
	[Token(Token = "0x40001F4")]
	[FieldOffset(Offset = "0xB0")]
	private MonoBtlsX509 x509;

	[Token(Token = "0x40001F5")]
	[FieldOffset(Offset = "0xB8")]
	private MonoBtlsKey nativePrivateKey;

	[Token(Token = "0x40001F6")]
	[FieldOffset(Offset = "0xC0")]
	private X509CertificateImplCollection intermediateCerts;

	[Token(Token = "0x17000077")]
	public override bool IsValid
	{
		[Token(Token = "0x600030F")]
		[Address(RVA = "0x28473B0", Offset = "0x28459B0", VA = "0x1828473B0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000078")]
	internal MonoBtlsX509 X509
	{
		[Token(Token = "0x6000310")]
		[Address(RVA = "0x28473F0", Offset = "0x28459F0", VA = "0x1828473F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000079")]
	internal MonoBtlsKey NativePrivateKey
	{
		[Token(Token = "0x6000311")]
		[Address(RVA = "0x28473D0", Offset = "0x28459D0", VA = "0x1828473D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007A")]
	internal override X509CertificateImplCollection IntermediateCertificates
	{
		[Token(Token = "0x6000314")]
		[Address(RVA = "0xC8FF80", Offset = "0xC8E580", VA = "0x180C8FF80", Slot = "29")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007B")]
	public override bool HasPrivateKey
	{
		[Token(Token = "0x6000316")]
		[Address(RVA = "0x2663FD0", Offset = "0x26625D0", VA = "0x182663FD0", Slot = "17")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700007C")]
	public override AsymmetricAlgorithm PrivateKey
	{
		[Token(Token = "0x6000317")]
		[Address(RVA = "0x28466A0", Offset = "0x2844CA0", VA = "0x1828466A0", Slot = "24")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000318")]
		[Address(RVA = "0x2847410", Offset = "0x2845A10", VA = "0x182847410", Slot = "25")]
		set
		{
		}
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x2846F90", Offset = "0x2845590", VA = "0x182846F90")]
	internal X509CertificateImplBtls(MonoBtlsX509 x509)
	{
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x2846FE0", Offset = "0x28455E0", VA = "0x182846FE0")]
	private X509CertificateImplBtls(X509CertificateImplBtls other)
	{
	}

	[Token(Token = "0x600030D")]
	[Address(RVA = "0x28470B0", Offset = "0x28456B0", VA = "0x1828470B0")]
	internal X509CertificateImplBtls(byte[] data, MonoBtlsX509Format format)
	{
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x2847110", Offset = "0x2845710", VA = "0x182847110")]
	internal X509CertificateImplBtls(byte[] data, Microsoft.Win32.SafeHandles.SafePasswordHandle password, X509KeyStorageFlags keyStorageFlags)
	{
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x2846500", Offset = "0x2844B00", VA = "0x182846500", Slot = "6")]
	public override System.Security.Cryptography.X509Certificates.X509CertificateImpl Clone()
	{
		return null;
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x28466E0", Offset = "0x2844CE0", VA = "0x1828466E0", Slot = "33")]
	protected override byte[] GetRawCertData()
	{
		return null;
	}

	[Token(Token = "0x6000315")]
	[Address(RVA = "0x2846610", Offset = "0x2844C10", VA = "0x182846610", Slot = "21")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x28466A0", Offset = "0x2844CA0", VA = "0x1828466A0", Slot = "18")]
	public override RSA GetRSAPrivateKey()
	{
		return null;
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x2846660", Offset = "0x2844C60", VA = "0x182846660", Slot = "19")]
	public override DSA GetDSAPrivateKey()
	{
		return null;
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x2846C40", Offset = "0x2845240", VA = "0x182846C40")]
	private void Import(byte[] data)
	{
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x2846800", Offset = "0x2844E00", VA = "0x182846800")]
	private void ImportPkcs12(byte[] data, Microsoft.Win32.SafeHandles.SafePasswordHandle password)
	{
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x2846720", Offset = "0x2844D20", VA = "0x182846720")]
	private void ImportAuthenticode(byte[] data)
	{
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x2846CA0", Offset = "0x28452A0", VA = "0x182846CA0", Slot = "31")]
	public override bool Verify(X509Certificate2 thisCertificate)
	{
		return default(bool);
	}
}
