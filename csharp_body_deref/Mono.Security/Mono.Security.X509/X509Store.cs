// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.X509.X509Store
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x52C1780", Offset = "0x52C0780", VA = "0x52C1780")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000043")]
	public ArrayList Crls
	{
		[Token(Token = "0x60000CB")]
		[Address(RVA = "0x52C1AE0", Offset = "0x52C0AE0", VA = "0x52C1AE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x52C1740", Offset = "0x52C0740", VA = "0x52C1740")]
	internal X509Store(string path, bool crl, bool newFormat)
	{
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x52C1E20", Offset = "0x52C0E20", VA = "0x52C1E20")]
	private byte[] Load(string filename)
	{
		return null;
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x52C1FF0", Offset = "0x52C0FF0", VA = "0x52C1FF0")]
	private X509Certificate LoadCertificate(string filename)
	{
		return null;
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x52C2050", Offset = "0x52C1050", VA = "0x52C2050")]
	private X509Crl LoadCrl(string filename)
	{
		return null;
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x52C20B0", Offset = "0x52C10B0", VA = "0x52C20B0")]
	private bool CheckStore(string path, bool throwException)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x52C17C0", Offset = "0x52C07C0", VA = "0x52C17C0")]
	private X509CertificateCollection BuildCertificatesCollection(string storeName)
	{
		return null;
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x52C1B80", Offset = "0x52C0B80", VA = "0x52C1B80")]
	private ArrayList BuildCrlsCollection(string storeName)
	{
		return null;
	}
}
