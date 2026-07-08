using Il2CppDummyDll;
using Mono.Security.X509;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000106")]
internal class X509ChainImplMono : X509ChainImpl
{
	[Token(Token = "0x40004EB")]
	[FieldOffset(Offset = "0x10")]
	private StoreLocation location;

	[Token(Token = "0x40004EC")]
	[FieldOffset(Offset = "0x18")]
	private X509ChainElementCollection elements;

	[Token(Token = "0x40004ED")]
	[FieldOffset(Offset = "0x20")]
	private X509ChainPolicy policy;

	[Token(Token = "0x40004EE")]
	[FieldOffset(Offset = "0x28")]
	private X509ChainStatus[] status;

	[Token(Token = "0x40004EF")]
	[FieldOffset(Offset = "0x0")]
	private static X509ChainStatus[] Empty;

	[Token(Token = "0x40004F0")]
	[FieldOffset(Offset = "0x30")]
	private int max_path_length;

	[Token(Token = "0x40004F1")]
	[FieldOffset(Offset = "0x38")]
	private X500DistinguishedName working_issuer_name;

	[Token(Token = "0x40004F2")]
	[FieldOffset(Offset = "0x40")]
	private AsymmetricAlgorithm working_public_key;

	[Token(Token = "0x40004F3")]
	[FieldOffset(Offset = "0x48")]
	private X509ChainElement bce_restriction;

	[Token(Token = "0x40004F4")]
	[FieldOffset(Offset = "0x50")]
	private X509Certificate2Collection roots;

	[Token(Token = "0x40004F5")]
	[FieldOffset(Offset = "0x58")]
	private X509Certificate2Collection cas;

	[Token(Token = "0x40004F6")]
	[FieldOffset(Offset = "0x60")]
	private X509Store root_store;

	[Token(Token = "0x40004F7")]
	[FieldOffset(Offset = "0x68")]
	private X509Store ca_store;

	[Token(Token = "0x40004F8")]
	[FieldOffset(Offset = "0x70")]
	private X509Store user_root_store;

	[Token(Token = "0x40004F9")]
	[FieldOffset(Offset = "0x78")]
	private X509Store user_ca_store;

	[Token(Token = "0x40004FA")]
	[FieldOffset(Offset = "0x80")]
	private X509Certificate2Collection collection;

	[Token(Token = "0x17000145")]
	public override bool IsValid
	{
		[Token(Token = "0x6000610")]
		[Address(RVA = "0x4617DE0", Offset = "0x4617DE0", VA = "0x4617DE0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000146")]
	public override X509ChainElementCollection ChainElements
	{
		[Token(Token = "0x6000611")]
		[Address(RVA = "0x4617DF0", Offset = "0x4617DF0", VA = "0x4617DF0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000147")]
	public override X509ChainPolicy ChainPolicy
	{
		[Token(Token = "0x6000612")]
		[Address(RVA = "0x4617E00", Offset = "0x4617E00", VA = "0x4617E00", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000148")]
	private X509Certificate2Collection Roots
	{
		[Token(Token = "0x6000616")]
		[Address(RVA = "0x4618B90", Offset = "0x4618B90", VA = "0x4618B90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000149")]
	private X509Certificate2Collection CertificateAuthorities
	{
		[Token(Token = "0x6000617")]
		[Address(RVA = "0x4618E60", Offset = "0x4618E60", VA = "0x4618E60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700014A")]
	private X509Store LMRootStore
	{
		[Token(Token = "0x6000618")]
		[Address(RVA = "0x4618C60", Offset = "0x4618C60", VA = "0x4618C60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700014B")]
	private X509Store UserRootStore
	{
		[Token(Token = "0x6000619")]
		[Address(RVA = "0x4618D60", Offset = "0x4618D60", VA = "0x4618D60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700014C")]
	private X509Store LMCAStore
	{
		[Token(Token = "0x600061A")]
		[Address(RVA = "0x4618F30", Offset = "0x4618F30", VA = "0x4618F30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700014D")]
	private X509Store UserCAStore
	{
		[Token(Token = "0x600061B")]
		[Address(RVA = "0x4619030", Offset = "0x4619030", VA = "0x4619030")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700014E")]
	private X509Certificate2Collection CertificateCollection
	{
		[Token(Token = "0x600061C")]
		[Address(RVA = "0x4619130", Offset = "0x4619130", VA = "0x4619130")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600060F")]
	[Address(RVA = "0x4617CB0", Offset = "0x4617CB0", VA = "0x4617CB0")]
	public X509ChainImplMono(bool useMachineContext)
	{
	}

	[Token(Token = "0x6000613")]
	[Address(RVA = "0x4617E10", Offset = "0x4617E10", VA = "0x4617E10", Slot = "9")]
	public override void AddStatus(X509ChainStatusFlags error)
	{
	}

	[Token(Token = "0x6000614")]
	[Address(RVA = "0x4617E20", Offset = "0x4617E20", VA = "0x4617E20", Slot = "8")]
	[System.MonoTODO("Not totally RFC3280 compliant, but neither is MS implementation...")]
	public override bool Build(X509Certificate2 certificate)
	{
		return default(bool);
	}

	[Token(Token = "0x6000615")]
	[Address(RVA = "0x4618A00", Offset = "0x4618A00", VA = "0x4618A00", Slot = "10")]
	public override void Reset()
	{
	}

	[Token(Token = "0x600061D")]
	[Address(RVA = "0x4618660", Offset = "0x4618660", VA = "0x4618660")]
	private X509ChainStatusFlags BuildChainFrom(X509Certificate2 certificate)
	{
		return default(X509ChainStatusFlags);
	}

	[Token(Token = "0x600061E")]
	[Address(RVA = "0x46197D0", Offset = "0x46197D0", VA = "0x46197D0")]
	private X509Certificate2 SelectBestFromCollection(X509Certificate2 child, X509Certificate2Collection c)
	{
		return null;
	}

	[Token(Token = "0x600061F")]
	[Address(RVA = "0x46195C0", Offset = "0x46195C0", VA = "0x46195C0")]
	private X509Certificate2 FindParent(X509Certificate2 certificate)
	{
		return null;
	}

	[Token(Token = "0x6000620")]
	[Address(RVA = "0x46196E0", Offset = "0x46196E0", VA = "0x46196E0")]
	private bool IsChainComplete(X509Certificate2 certificate)
	{
		return default(bool);
	}

	[Token(Token = "0x6000621")]
	[Address(RVA = "0x4619B40", Offset = "0x4619B40", VA = "0x4619B40")]
	private bool IsSelfIssued(X509Certificate2 certificate)
	{
		return default(bool);
	}

	[Token(Token = "0x6000622")]
	[Address(RVA = "0x46187B0", Offset = "0x46187B0", VA = "0x46187B0")]
	private void ValidateChain(X509ChainStatusFlags flag)
	{
	}

	[Token(Token = "0x6000623")]
	[Address(RVA = "0x4619B80", Offset = "0x4619B80", VA = "0x4619B80")]
	private void Process(int n)
	{
	}

	[Token(Token = "0x6000624")]
	[Address(RVA = "0x4619FB0", Offset = "0x4619FB0", VA = "0x4619FB0")]
	private void PrepareForNextCertificate(int n)
	{
	}

	[Token(Token = "0x6000625")]
	[Address(RVA = "0x461A620", Offset = "0x461A620", VA = "0x461A620")]
	private void WrapUp()
	{
	}

	[Token(Token = "0x6000626")]
	[Address(RVA = "0x461A7F0", Offset = "0x461A7F0", VA = "0x461A7F0")]
	private void ProcessCertificateExtensions(X509ChainElement element)
	{
	}

	[Token(Token = "0x6000627")]
	[Address(RVA = "0x461A7C0", Offset = "0x461A7C0", VA = "0x461A7C0")]
	private bool IsSignedWith(X509Certificate2 signed, AsymmetricAlgorithm pubkey)
	{
		return default(bool);
	}

	[Token(Token = "0x6000628")]
	[Address(RVA = "0x4619AB0", Offset = "0x4619AB0", VA = "0x4619AB0")]
	private string GetSubjectKeyIdentifier(X509Certificate2 certificate)
	{
		return null;
	}

	[Token(Token = "0x6000629")]
	[Address(RVA = "0x4619A20", Offset = "0x4619A20", VA = "0x4619A20")]
	private static string GetAuthorityKeyIdentifier(X509Certificate2 certificate)
	{
		return null;
	}

	[Token(Token = "0x600062A")]
	[Address(RVA = "0x461AA70", Offset = "0x461AA70", VA = "0x461AA70")]
	private static string GetAuthorityKeyIdentifier(X509Crl crl)
	{
		return null;
	}

	[Token(Token = "0x600062B")]
	[Address(RVA = "0x461A8F0", Offset = "0x461A8F0", VA = "0x461A8F0")]
	private static string GetAuthorityKeyIdentifier(Mono.Security.X509.X509Extension ext)
	{
		return null;
	}

	[Token(Token = "0x600062C")]
	[Address(RVA = "0x461A330", Offset = "0x461A330", VA = "0x461A330")]
	private void CheckRevocationOnChain(X509ChainStatusFlags flag)
	{
	}

	[Token(Token = "0x600062D")]
	[Address(RVA = "0x461AAF0", Offset = "0x461AAF0", VA = "0x461AAF0")]
	private X509ChainStatusFlags CheckRevocation(X509Certificate2 certificate, int ca, bool online)
	{
		return default(X509ChainStatusFlags);
	}

	[Token(Token = "0x600062E")]
	[Address(RVA = "0x461ACD0", Offset = "0x461ACD0", VA = "0x461ACD0")]
	private X509ChainStatusFlags CheckRevocation(X509Certificate2 certificate, X509Certificate2 ca_cert, bool online)
	{
		return default(X509ChainStatusFlags);
	}

	[Token(Token = "0x600062F")]
	[Address(RVA = "0x461B790", Offset = "0x461B790", VA = "0x461B790")]
	private static X509Crl CheckCrls(string subject, string ski, Mono.Security.X509.X509Store store)
	{
		return null;
	}

	[Token(Token = "0x6000630")]
	[Address(RVA = "0x461AEB0", Offset = "0x461AEB0", VA = "0x461AEB0")]
	private X509Crl FindCrl(X509Certificate2 caCertificate)
	{
		return null;
	}

	[Token(Token = "0x6000631")]
	[Address(RVA = "0x461B3B0", Offset = "0x461B3B0", VA = "0x461B3B0")]
	private bool ProcessCrlExtensions(X509Crl crl)
	{
		return default(bool);
	}

	[Token(Token = "0x6000632")]
	[Address(RVA = "0x461B020", Offset = "0x461B020", VA = "0x461B020")]
	private bool ProcessCrlEntryExtensions(X509Crl.X509CrlEntry entry)
	{
		return default(bool);
	}
}
