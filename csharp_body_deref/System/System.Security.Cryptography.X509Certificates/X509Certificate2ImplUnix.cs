// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Text;
using Il2CppDummyDll;
using Internal.Cryptography.Pal;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x20000FE")]
internal abstract class X509Certificate2ImplUnix : X509Certificate2Impl
{
	[Token(Token = "0x40004E3")]
	[FieldOffset(Offset = "0x10")]
	private bool readCertData;

	[Token(Token = "0x40004E4")]
	[FieldOffset(Offset = "0x18")]
	private CertificateData certData;

	[Token(Token = "0x1700012C")]
	public sealed override string KeyAlgorithm
	{
		[Token(Token = "0x60005E2")]
		[Address(RVA = "0x6214200", Offset = "0x6213200", VA = "0x6214200", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012D")]
	public sealed override byte[] KeyAlgorithmParameters
	{
		[Token(Token = "0x60005E3")]
		[Address(RVA = "0x62142C0", Offset = "0x62132C0", VA = "0x62142C0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012E")]
	public sealed override byte[] PublicKeyValue
	{
		[Token(Token = "0x60005E4")]
		[Address(RVA = "0x6214380", Offset = "0x6213380", VA = "0x6214380", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012F")]
	public sealed override byte[] SerialNumber
	{
		[Token(Token = "0x60005E5")]
		[Address(RVA = "0x6214440", Offset = "0x6213440", VA = "0x6214440", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000130")]
	public sealed override string SignatureAlgorithm
	{
		[Token(Token = "0x60005E6")]
		[Address(RVA = "0x6214500", Offset = "0x6213500", VA = "0x6214500", Slot = "25")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000131")]
	public sealed override int Version
	{
		[Token(Token = "0x60005E7")]
		[Address(RVA = "0x62145C0", Offset = "0x62135C0", VA = "0x62145C0", Slot = "27")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000132")]
	public sealed override X500DistinguishedName SubjectName
	{
		[Token(Token = "0x60005E8")]
		[Address(RVA = "0x6214680", Offset = "0x6213680", VA = "0x6214680", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000133")]
	public sealed override X500DistinguishedName IssuerName
	{
		[Token(Token = "0x60005E9")]
		[Address(RVA = "0x6214740", Offset = "0x6213740", VA = "0x6214740", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000134")]
	public sealed override string Subject
	{
		[Token(Token = "0x60005EA")]
		[Address(RVA = "0x6214800", Offset = "0x6213800", VA = "0x6214800", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000135")]
	public sealed override string Issuer
	{
		[Token(Token = "0x60005EB")]
		[Address(RVA = "0x6214830", Offset = "0x6213830", VA = "0x6214830", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000136")]
	public sealed override byte[] RawData
	{
		[Token(Token = "0x60005EC")]
		[Address(RVA = "0x6214860", Offset = "0x6213860", VA = "0x6214860", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000137")]
	public sealed override byte[] Thumbprint
	{
		[Token(Token = "0x60005ED")]
		[Address(RVA = "0x6214920", Offset = "0x6213920", VA = "0x6214920", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000138")]
	public sealed override IEnumerable<X509Extension> Extensions
	{
		[Token(Token = "0x60005EF")]
		[Address(RVA = "0x6214BF0", Offset = "0x6213BF0", VA = "0x6214BF0", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000139")]
	public sealed override DateTime NotAfter
	{
		[Token(Token = "0x60005F0")]
		[Address(RVA = "0x6214CB0", Offset = "0x6213CB0", VA = "0x6214CB0", Slot = "10")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700013A")]
	public sealed override DateTime NotBefore
	{
		[Token(Token = "0x60005F1")]
		[Address(RVA = "0x6214DD0", Offset = "0x6213DD0", VA = "0x6214DD0", Slot = "11")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x60005E0")]
	[Address(RVA = "0x6214150", Offset = "0x6213150", VA = "0x6214150")]
	private void EnsureCertData()
	{
	}

	[Token(Token = "0x60005E1")]
	protected abstract byte[] GetRawCertData();

	[Token(Token = "0x60005EE")]
	[Address(RVA = "0x6214B10", Offset = "0x6213B10", VA = "0x6214B10", Slot = "29")]
	public sealed override string GetNameInfo(X509NameType nameType, bool forIssuer)
	{
		return null;
	}

	[Token(Token = "0x60005F2")]
	[Address(RVA = "0x6214EF0", Offset = "0x6213EF0", VA = "0x6214EF0", Slot = "31")]
	public sealed override void AppendPrivateKeyInfo(StringBuilder sb)
	{
	}

	[Token(Token = "0x60005F3")]
	[Address(RVA = "0x6212970", Offset = "0x6211970", VA = "0x6212970")]
	protected X509Certificate2ImplUnix()
	{
	}
}
