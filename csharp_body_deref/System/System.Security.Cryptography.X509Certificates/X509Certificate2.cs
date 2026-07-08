using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Serializable]
[Token(Token = "0x20000F8")]
public class X509Certificate2 : X509Certificate
{
	[Token(Token = "0x40004D2")]
	[FieldOffset(Offset = "0x60")]
	private byte[] lazyRawData;

	[Token(Token = "0x40004D3")]
	[FieldOffset(Offset = "0x68")]
	private Oid lazySignatureAlgorithm;

	[Token(Token = "0x40004D4")]
	[FieldOffset(Offset = "0x70")]
	private int lazyVersion;

	[Token(Token = "0x40004D5")]
	[FieldOffset(Offset = "0x78")]
	private X500DistinguishedName lazySubjectName;

	[Token(Token = "0x40004D6")]
	[FieldOffset(Offset = "0x80")]
	private X500DistinguishedName lazyIssuerName;

	[Token(Token = "0x40004D7")]
	[FieldOffset(Offset = "0x88")]
	private PublicKey lazyPublicKey;

	[Token(Token = "0x40004D8")]
	[FieldOffset(Offset = "0x90")]
	private AsymmetricAlgorithm lazyPrivateKey;

	[Token(Token = "0x40004D9")]
	[FieldOffset(Offset = "0x98")]
	private X509ExtensionCollection lazyExtensions;

	[Token(Token = "0x17000104")]
	public X509ExtensionCollection Extensions
	{
		[Token(Token = "0x6000574")]
		[Address(RVA = "0x460DF60", Offset = "0x460DF60", VA = "0x460DF60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000105")]
	public bool HasPrivateKey
	{
		[Token(Token = "0x6000575")]
		[Address(RVA = "0x460E6B0", Offset = "0x460E6B0", VA = "0x460E6B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000106")]
	public AsymmetricAlgorithm PrivateKey
	{
		[Token(Token = "0x6000576")]
		[Address(RVA = "0x460E740", Offset = "0x460E740", VA = "0x460E740")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000107")]
	public X500DistinguishedName IssuerName
	{
		[Token(Token = "0x6000577")]
		[Address(RVA = "0x460E970", Offset = "0x460E970", VA = "0x460E970")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000108")]
	public DateTime NotAfter
	{
		[Token(Token = "0x6000578")]
		[Address(RVA = "0x460EA40", Offset = "0x460EA40", VA = "0x460EA40")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000109")]
	public DateTime NotBefore
	{
		[Token(Token = "0x6000579")]
		[Address(RVA = "0x460EA50", Offset = "0x460EA50", VA = "0x460EA50")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700010A")]
	public PublicKey PublicKey
	{
		[Token(Token = "0x600057A")]
		[Address(RVA = "0x460EA60", Offset = "0x460EA60", VA = "0x460EA60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010B")]
	public byte[] RawData
	{
		[Token(Token = "0x600057B")]
		[Address(RVA = "0x460EC10", Offset = "0x460EC10", VA = "0x460EC10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010C")]
	public string SerialNumber
	{
		[Token(Token = "0x600057C")]
		[Address(RVA = "0x460ECE0", Offset = "0x460ECE0", VA = "0x460ECE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010D")]
	public Oid SignatureAlgorithm
	{
		[Token(Token = "0x600057D")]
		[Address(RVA = "0x460ED00", Offset = "0x460ED00", VA = "0x460ED00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010E")]
	public X500DistinguishedName SubjectName
	{
		[Token(Token = "0x600057E")]
		[Address(RVA = "0x460EDD0", Offset = "0x460EDD0", VA = "0x460EDD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010F")]
	public string Thumbprint
	{
		[Token(Token = "0x600057F")]
		[Address(RVA = "0x460EE90", Offset = "0x460EE90", VA = "0x460EE90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000110")]
	public int Version
	{
		[Token(Token = "0x6000580")]
		[Address(RVA = "0x460EEB0", Offset = "0x460EEB0", VA = "0x460EEB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000111")]
	internal X509Certificate2Impl Impl
	{
		[Token(Token = "0x6000587")]
		[Address(RVA = "0x460E480", Offset = "0x460E480", VA = "0x460E480")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600056F")]
	[Address(RVA = "0x460DC30", Offset = "0x460DC30", VA = "0x460DC30", Slot = "7")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x460DD10", Offset = "0x460DD10", VA = "0x460DD10")]
	public X509Certificate2()
	{
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x460DD20", Offset = "0x460DD20", VA = "0x460DD20")]
	public X509Certificate2(byte[] rawData)
	{
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x460DF00", Offset = "0x460DF00", VA = "0x460DF00")]
	public X509Certificate2(X509Certificate certificate)
	{
	}

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x460DF10", Offset = "0x460DF10", VA = "0x460DF10")]
	protected X509Certificate2(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000581")]
	[Address(RVA = "0x460EF60", Offset = "0x460EF60", VA = "0x460EF60")]
	public static X509ContentType GetCertContentType(byte[] rawData)
	{
		return default(X509ContentType);
	}

	[Token(Token = "0x6000582")]
	[Address(RVA = "0x460F000", Offset = "0x460F000", VA = "0x460F000")]
	public string GetNameInfo(X509NameType nameType, bool forIssuer)
	{
		return null;
	}

	[Token(Token = "0x6000583")]
	[Address(RVA = "0x460F0A0", Offset = "0x460F0A0", VA = "0x460F0A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000584")]
	[Address(RVA = "0x460F0B0", Offset = "0x460F0B0", VA = "0x460F0B0", Slot = "18")]
	public override string ToString(bool verbose)
	{
		return null;
	}

	[Token(Token = "0x6000585")]
	[Address(RVA = "0x46104D0", Offset = "0x46104D0", VA = "0x46104D0")]
	public bool Verify()
	{
		return default(bool);
	}

	[Token(Token = "0x6000586")]
	[Address(RVA = "0x460E4F0", Offset = "0x460E4F0", VA = "0x460E4F0")]
	private static X509Extension CreateCustomExtensionIfAny(Oid oid)
	{
		return null;
	}
}
