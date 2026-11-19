// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509Certificate2
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Serializable]
[Token(Token = "0x20000F9")]
public class X509Certificate2 : X509Certificate
{
	[Token(Token = "0x40004D5")]
	[FieldOffset(Offset = "0x60")]
	private byte[] lazyRawData;

	[Token(Token = "0x40004D6")]
	[FieldOffset(Offset = "0x68")]
	private Oid lazySignatureAlgorithm;

	[Token(Token = "0x40004D7")]
	[FieldOffset(Offset = "0x70")]
	private int lazyVersion;

	[Token(Token = "0x40004D8")]
	[FieldOffset(Offset = "0x78")]
	private X500DistinguishedName lazySubjectName;

	[Token(Token = "0x40004D9")]
	[FieldOffset(Offset = "0x80")]
	private X500DistinguishedName lazyIssuerName;

	[Token(Token = "0x40004DA")]
	[FieldOffset(Offset = "0x88")]
	private PublicKey lazyPublicKey;

	[Token(Token = "0x40004DB")]
	[FieldOffset(Offset = "0x90")]
	private AsymmetricAlgorithm lazyPrivateKey;

	[Token(Token = "0x40004DC")]
	[FieldOffset(Offset = "0x98")]
	private X509ExtensionCollection lazyExtensions;

	[Token(Token = "0x1700010E")]
	public X509ExtensionCollection Extensions
	{
		[Token(Token = "0x600059E")]
		[Address(RVA = "0x620E410", Offset = "0x620D410", VA = "0x620E410")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010F")]
	public bool HasPrivateKey
	{
		[Token(Token = "0x600059F")]
		[Address(RVA = "0x620EA90", Offset = "0x620DA90", VA = "0x620EA90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000110")]
	public AsymmetricAlgorithm PrivateKey
	{
		[Token(Token = "0x60005A0")]
		[Address(RVA = "0x620EB20", Offset = "0x620DB20", VA = "0x620EB20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000111")]
	public X500DistinguishedName IssuerName
	{
		[Token(Token = "0x60005A1")]
		[Address(RVA = "0x620ED50", Offset = "0x620DD50", VA = "0x620ED50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000112")]
	public DateTime NotAfter
	{
		[Token(Token = "0x60005A2")]
		[Address(RVA = "0x620EE20", Offset = "0x620DE20", VA = "0x620EE20")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000113")]
	public DateTime NotBefore
	{
		[Token(Token = "0x60005A3")]
		[Address(RVA = "0x620EE30", Offset = "0x620DE30", VA = "0x620EE30")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000114")]
	public PublicKey PublicKey
	{
		[Token(Token = "0x60005A4")]
		[Address(RVA = "0x620EE40", Offset = "0x620DE40", VA = "0x620EE40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000115")]
	public byte[] RawData
	{
		[Token(Token = "0x60005A5")]
		[Address(RVA = "0x620EFF0", Offset = "0x620DFF0", VA = "0x620EFF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000116")]
	public string SerialNumber
	{
		[Token(Token = "0x60005A6")]
		[Address(RVA = "0x620F0C0", Offset = "0x620E0C0", VA = "0x620F0C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000117")]
	public Oid SignatureAlgorithm
	{
		[Token(Token = "0x60005A7")]
		[Address(RVA = "0x620F0E0", Offset = "0x620E0E0", VA = "0x620F0E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000118")]
	public X500DistinguishedName SubjectName
	{
		[Token(Token = "0x60005A8")]
		[Address(RVA = "0x620F1B0", Offset = "0x620E1B0", VA = "0x620F1B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000119")]
	public string Thumbprint
	{
		[Token(Token = "0x60005A9")]
		[Address(RVA = "0x620F270", Offset = "0x620E270", VA = "0x620F270")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011A")]
	public int Version
	{
		[Token(Token = "0x60005AA")]
		[Address(RVA = "0x620F290", Offset = "0x620E290", VA = "0x620F290")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700011B")]
	internal X509Certificate2Impl Impl
	{
		[Token(Token = "0x60005B1")]
		[Address(RVA = "0x620E860", Offset = "0x620D860", VA = "0x620E860")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000599")]
	[Address(RVA = "0x620E150", Offset = "0x620D150", VA = "0x620E150", Slot = "7")]
	public override void Reset()
	{
	}

	[Token(Token = "0x600059A")]
	[Address(RVA = "0x620E230", Offset = "0x620D230", VA = "0x620E230")]
	public X509Certificate2()
	{
	}

	[Token(Token = "0x600059B")]
	[Address(RVA = "0x620E240", Offset = "0x620D240", VA = "0x620E240")]
	public X509Certificate2(byte[] rawData)
	{
	}

	[Token(Token = "0x600059C")]
	[Address(RVA = "0x620E3B0", Offset = "0x620D3B0", VA = "0x620E3B0")]
	public X509Certificate2(X509Certificate certificate)
	{
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x620E3C0", Offset = "0x620D3C0", VA = "0x620E3C0")]
	protected X509Certificate2(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x620F340", Offset = "0x620E340", VA = "0x620F340")]
	public static X509ContentType GetCertContentType(byte[] rawData)
	{
		return default(X509ContentType);
	}

	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x620F3E0", Offset = "0x620E3E0", VA = "0x620F3E0")]
	public string GetNameInfo(X509NameType nameType, bool forIssuer)
	{
		return null;
	}

	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x620F480", Offset = "0x620E480", VA = "0x620F480", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x620F490", Offset = "0x620E490", VA = "0x620F490", Slot = "18")]
	public override string ToString(bool verbose)
	{
		return null;
	}

	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x6210A90", Offset = "0x620FA90", VA = "0x6210A90")]
	public bool Verify()
	{
		return default(bool);
	}

	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x620E8D0", Offset = "0x620D8D0", VA = "0x620E8D0")]
	private static X509Extension CreateCustomExtensionIfAny(Oid oid)
	{
		return null;
	}
}
