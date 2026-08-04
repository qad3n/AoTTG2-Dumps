// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Text;
using Il2CppDummyDll;
using Internal.Cryptography.Pal;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x20000FD")]
internal abstract class X509Certificate2ImplUnix : X509Certificate2Impl
{
	[Token(Token = "0x40004E0")]
	[FieldOffset(Offset = "0x10")]
	private bool readCertData;

	[Token(Token = "0x40004E1")]
	[FieldOffset(Offset = "0x18")]
	private CertificateData certData;

	[Token(Token = "0x17000122")]
	public sealed override string KeyAlgorithm
	{
		[Token(Token = "0x60005B8")]
		[Address(RVA = "0x49392F0", Offset = "0x49392F0", VA = "0x49392F0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000123")]
	public sealed override byte[] KeyAlgorithmParameters
	{
		[Token(Token = "0x60005B9")]
		[Address(RVA = "0x49393B0", Offset = "0x49393B0", VA = "0x49393B0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000124")]
	public sealed override byte[] PublicKeyValue
	{
		[Token(Token = "0x60005BA")]
		[Address(RVA = "0x4939470", Offset = "0x4939470", VA = "0x4939470", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000125")]
	public sealed override byte[] SerialNumber
	{
		[Token(Token = "0x60005BB")]
		[Address(RVA = "0x4939530", Offset = "0x4939530", VA = "0x4939530", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000126")]
	public sealed override string SignatureAlgorithm
	{
		[Token(Token = "0x60005BC")]
		[Address(RVA = "0x49395F0", Offset = "0x49395F0", VA = "0x49395F0", Slot = "25")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000127")]
	public sealed override int Version
	{
		[Token(Token = "0x60005BD")]
		[Address(RVA = "0x49396B0", Offset = "0x49396B0", VA = "0x49396B0", Slot = "27")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000128")]
	public sealed override X500DistinguishedName SubjectName
	{
		[Token(Token = "0x60005BE")]
		[Address(RVA = "0x4939770", Offset = "0x4939770", VA = "0x4939770", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000129")]
	public sealed override X500DistinguishedName IssuerName
	{
		[Token(Token = "0x60005BF")]
		[Address(RVA = "0x4939830", Offset = "0x4939830", VA = "0x4939830", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012A")]
	public sealed override string Subject
	{
		[Token(Token = "0x60005C0")]
		[Address(RVA = "0x49398F0", Offset = "0x49398F0", VA = "0x49398F0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012B")]
	public sealed override string Issuer
	{
		[Token(Token = "0x60005C1")]
		[Address(RVA = "0x4939920", Offset = "0x4939920", VA = "0x4939920", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012C")]
	public sealed override byte[] RawData
	{
		[Token(Token = "0x60005C2")]
		[Address(RVA = "0x4939950", Offset = "0x4939950", VA = "0x4939950", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012D")]
	public sealed override byte[] Thumbprint
	{
		[Token(Token = "0x60005C3")]
		[Address(RVA = "0x4939A10", Offset = "0x4939A10", VA = "0x4939A10", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012E")]
	public sealed override IEnumerable<X509Extension> Extensions
	{
		[Token(Token = "0x60005C5")]
		[Address(RVA = "0x4939D40", Offset = "0x4939D40", VA = "0x4939D40", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012F")]
	public sealed override DateTime NotAfter
	{
		[Token(Token = "0x60005C6")]
		[Address(RVA = "0x4939E00", Offset = "0x4939E00", VA = "0x4939E00", Slot = "10")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000130")]
	public sealed override DateTime NotBefore
	{
		[Token(Token = "0x60005C7")]
		[Address(RVA = "0x4939F00", Offset = "0x4939F00", VA = "0x4939F00", Slot = "11")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x60005B6")]
	[Address(RVA = "0x4939240", Offset = "0x4939240", VA = "0x4939240")]
	private void EnsureCertData()
	{
	}

	[Token(Token = "0x60005B7")]
	protected abstract byte[] GetRawCertData();

	[Token(Token = "0x60005C4")]
	[Address(RVA = "0x4939C60", Offset = "0x4939C60", VA = "0x4939C60", Slot = "29")]
	public sealed override string GetNameInfo(X509NameType nameType, bool forIssuer)
	{
		return null;
	}

	[Token(Token = "0x60005C8")]
	[Address(RVA = "0x493A000", Offset = "0x493A000", VA = "0x493A000", Slot = "31")]
	public sealed override void AppendPrivateKeyInfo(StringBuilder sb)
	{
	}

	[Token(Token = "0x60005C9")]
	[Address(RVA = "0x49377A0", Offset = "0x49377A0", VA = "0x49377A0")]
	protected X509Certificate2ImplUnix()
	{
	}
}
