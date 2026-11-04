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
		[Token(Token = "0x60000D6")]
		[Address(RVA = "0x192AEA0", Offset = "0x19294A0", VA = "0x18192AEA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000043")]
	public ArrayList Crls
	{
		[Token(Token = "0x60000D7")]
		[Address(RVA = "0x192AEE0", Offset = "0x19294E0", VA = "0x18192AEE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x192AE60", Offset = "0x1929460", VA = "0x18192AE60")]
	internal X509Store(string path, bool crl, bool newFormat)
	{
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x192AD00", Offset = "0x1929300", VA = "0x18192AD00")]
	private byte[] Load(string filename)
	{
		return null;
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x192AB30", Offset = "0x1929130", VA = "0x18192AB30")]
	private X509Certificate LoadCertificate(string filename)
	{
		return null;
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x192ABA0", Offset = "0x19291A0", VA = "0x18192ABA0")]
	private X509Crl LoadCrl(string filename)
	{
		return null;
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x192AAD0", Offset = "0x19290D0", VA = "0x18192AAD0")]
	private bool CheckStore(string path, bool throwException)
	{
		return default(bool);
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x192A7B0", Offset = "0x1928DB0", VA = "0x18192A7B0")]
	private X509CertificateCollection BuildCertificatesCollection(string storeName)
	{
		return null;
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x192A980", Offset = "0x1928F80", VA = "0x18192A980")]
	private ArrayList BuildCrlsCollection(string storeName)
	{
		return null;
	}
}
