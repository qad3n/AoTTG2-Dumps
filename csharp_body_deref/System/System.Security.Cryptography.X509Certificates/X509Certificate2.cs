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
[Token(Token = "0x2000138")]
public class X509Certificate2 : X509Certificate
{
	[Token(Token = "0x40005A4")]
	[FieldOffset(Offset = "0x60")]
	private byte[] lazyRawData;

	[Token(Token = "0x40005A5")]
	[FieldOffset(Offset = "0x68")]
	private Oid lazySignatureAlgorithm;

	[Token(Token = "0x40005A6")]
	[FieldOffset(Offset = "0x70")]
	private int lazyVersion;

	[Token(Token = "0x40005A7")]
	[FieldOffset(Offset = "0x78")]
	private X500DistinguishedName lazySubjectName;

	[Token(Token = "0x40005A8")]
	[FieldOffset(Offset = "0x80")]
	private X500DistinguishedName lazyIssuerName;

	[Token(Token = "0x40005A9")]
	[FieldOffset(Offset = "0x88")]
	private PublicKey lazyPublicKey;

	[Token(Token = "0x40005AA")]
	[FieldOffset(Offset = "0x90")]
	private AsymmetricAlgorithm lazyPrivateKey;

	[Token(Token = "0x40005AB")]
	[FieldOffset(Offset = "0x98")]
	private X509ExtensionCollection lazyExtensions;

	[Token(Token = "0x1700013D")]
	public X509ExtensionCollection Extensions
	{
		[Token(Token = "0x6000759")]
		[Address(RVA = "0x2886780", Offset = "0x2884D80", VA = "0x182886780")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700013E")]
	public bool HasPrivateKey
	{
		[Token(Token = "0x600075A")]
		[Address(RVA = "0x2886AC0", Offset = "0x28850C0", VA = "0x182886AC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700013F")]
	public AsymmetricAlgorithm PrivateKey
	{
		[Token(Token = "0x600075B")]
		[Address(RVA = "0x2886C20", Offset = "0x2885220", VA = "0x182886C20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000140")]
	public X500DistinguishedName IssuerName
	{
		[Token(Token = "0x600075C")]
		[Address(RVA = "0x2886B80", Offset = "0x2885180", VA = "0x182886B80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000141")]
	public DateTime NotAfter
	{
		[Token(Token = "0x600075D")]
		[Address(RVA = "0x2886C00", Offset = "0x2885200", VA = "0x182886C00")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000142")]
	public DateTime NotBefore
	{
		[Token(Token = "0x600075E")]
		[Address(RVA = "0x2886C10", Offset = "0x2885210", VA = "0x182886C10")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000143")]
	public PublicKey PublicKey
	{
		[Token(Token = "0x600075F")]
		[Address(RVA = "0x2886DD0", Offset = "0x28853D0", VA = "0x182886DD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000144")]
	public byte[] RawData
	{
		[Token(Token = "0x6000760")]
		[Address(RVA = "0x2886F60", Offset = "0x2885560", VA = "0x182886F60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000145")]
	public string SerialNumber
	{
		[Token(Token = "0x6000761")]
		[Address(RVA = "0x198B170", Offset = "0x1989770", VA = "0x18198B170")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000146")]
	public Oid SignatureAlgorithm
	{
		[Token(Token = "0x6000762")]
		[Address(RVA = "0x2886FE0", Offset = "0x28855E0", VA = "0x182886FE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000147")]
	public X500DistinguishedName SubjectName
	{
		[Token(Token = "0x6000763")]
		[Address(RVA = "0x2887190", Offset = "0x2885790", VA = "0x182887190")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000148")]
	public string Thumbprint
	{
		[Token(Token = "0x6000764")]
		[Address(RVA = "0x2887210", Offset = "0x2885810", VA = "0x182887210")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000149")]
	public int Version
	{
		[Token(Token = "0x6000765")]
		[Address(RVA = "0x2887240", Offset = "0x2885840", VA = "0x182887240")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700014A")]
	internal X509Certificate2Impl Impl
	{
		[Token(Token = "0x600076C")]
		[Address(RVA = "0x2886B00", Offset = "0x2885100", VA = "0x182886B00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000752")]
	[Address(RVA = "0x28857B0", Offset = "0x2883DB0", VA = "0x1828857B0", Slot = "7")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6000753")]
	[Address(RVA = "0x2886710", Offset = "0x2884D10", VA = "0x182886710")]
	public X509Certificate2()
	{
	}

	[Token(Token = "0x6000754")]
	[Address(RVA = "0x28865F0", Offset = "0x2884BF0", VA = "0x1828865F0")]
	public X509Certificate2(byte[] rawData)
	{
	}

	[Token(Token = "0x6000755")]
	[Address(RVA = "0x28865D0", Offset = "0x2884BD0", VA = "0x1828865D0")]
	public X509Certificate2(byte[] rawData, string password)
	{
	}

	[Token(Token = "0x6000756")]
	[Address(RVA = "0x2886700", Offset = "0x2884D00", VA = "0x182886700")]
	internal X509Certificate2(X509Certificate2Impl impl)
	{
	}

	[Token(Token = "0x6000757")]
	[Address(RVA = "0x28865E0", Offset = "0x2884BE0", VA = "0x1828865E0")]
	public X509Certificate2(X509Certificate certificate)
	{
	}

	[Token(Token = "0x6000758")]
	[Address(RVA = "0x2886720", Offset = "0x2884D20", VA = "0x182886720")]
	protected X509Certificate2(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000766")]
	[Address(RVA = "0x28856C0", Offset = "0x2883CC0", VA = "0x1828856C0")]
	public static X509ContentType GetCertContentType(byte[] rawData)
	{
		return default(X509ContentType);
	}

	[Token(Token = "0x6000767")]
	[Address(RVA = "0x2885760", Offset = "0x2883D60", VA = "0x182885760")]
	public string GetNameInfo(X509NameType nameType, bool forIssuer)
	{
		return null;
	}

	[Token(Token = "0x6000768")]
	[Address(RVA = "0x2886580", Offset = "0x2884B80", VA = "0x182886580", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000769")]
	[Address(RVA = "0x2885880", Offset = "0x2883E80", VA = "0x182885880", Slot = "19")]
	public override string ToString(bool verbose)
	{
		return null;
	}

	[Token(Token = "0x600076A")]
	[Address(RVA = "0x2886590", Offset = "0x2884B90", VA = "0x182886590")]
	public bool Verify()
	{
		return default(bool);
	}

	[Token(Token = "0x600076B")]
	[Address(RVA = "0x28853C0", Offset = "0x28839C0", VA = "0x1828853C0")]
	private static X509Extension CreateCustomExtensionIfAny(Oid oid)
	{
		return null;
	}
}
