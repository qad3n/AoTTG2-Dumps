using System.Collections;
using Il2CppDummyDll;

namespace Mono.Security.X509;

[Token(Token = "0x2000018")]
public class X509Store
{
	[Token(Token = "0x4000073")]
	[FieldOffset(Offset = "0x10")]
	private string _storePath;

	[Token(Token = "0x4000074")]
	[FieldOffset(Offset = "0x18")]
	private X509CertificateCollection _certificates;

	[Token(Token = "0x4000075")]
	[FieldOffset(Offset = "0x20")]
	private ArrayList _crls;

	[Token(Token = "0x4000076")]
	[FieldOffset(Offset = "0x28")]
	private bool _crl;

	[Token(Token = "0x4000077")]
	[FieldOffset(Offset = "0x29")]
	private bool _newFormat;

	[Token(Token = "0x17000042")]
	public X509CertificateCollection Certificates
	{
		[Token(Token = "0x60000CA")]
		[Address(RVA = "0x3A48E10", Offset = "0x3A48E10", VA = "0x3A48E10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000043")]
	public ArrayList Crls
	{
		[Token(Token = "0x60000CB")]
		[Address(RVA = "0x3A49110", Offset = "0x3A49110", VA = "0x3A49110")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x3A48DD0", Offset = "0x3A48DD0", VA = "0x3A48DD0")]
	internal X509Store(string path, bool crl, bool newFormat)
	{
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x3A49460", Offset = "0x3A49460", VA = "0x3A49460")]
	private byte[] Load(string filename)
	{
		return null;
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x3A49690", Offset = "0x3A49690", VA = "0x3A49690")]
	private X509Certificate LoadCertificate(string filename)
	{
		return null;
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x3A496F0", Offset = "0x3A496F0", VA = "0x3A496F0")]
	private X509Crl LoadCrl(string filename)
	{
		return null;
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x3A49750", Offset = "0x3A49750", VA = "0x3A49750")]
	private bool CheckStore(string path, bool throwException)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x3A48E50", Offset = "0x3A48E50", VA = "0x3A48E50")]
	private X509CertificateCollection BuildCertificatesCollection(string storeName)
	{
		return null;
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x3A491B0", Offset = "0x3A491B0", VA = "0x3A491B0")]
	private ArrayList BuildCrlsCollection(string storeName)
	{
		return null;
	}
}
