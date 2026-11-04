// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509ChainImplMono
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Mono.Security.X509;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000146")]
internal class X509ChainImplMono : X509ChainImpl
{
	[Token(Token = "0x40005BD")]
	[FieldOffset(Offset = "0x10")]
	private StoreLocation location;

	[Token(Token = "0x40005BE")]
	[FieldOffset(Offset = "0x18")]
	private X509ChainElementCollection elements;

	[Token(Token = "0x40005BF")]
	[FieldOffset(Offset = "0x20")]
	private X509ChainPolicy policy;

	[Token(Token = "0x40005C0")]
	[FieldOffset(Offset = "0x28")]
	private X509ChainStatus[] status;

	[Token(Token = "0x40005C1")]
	[FieldOffset(Offset = "0x0")]
	private static X509ChainStatus[] Empty;

	[Token(Token = "0x40005C2")]
	[FieldOffset(Offset = "0x30")]
	private int max_path_length;

	[Token(Token = "0x40005C3")]
	[FieldOffset(Offset = "0x38")]
	private X500DistinguishedName working_issuer_name;

	[Token(Token = "0x40005C4")]
	[FieldOffset(Offset = "0x40")]
	private AsymmetricAlgorithm working_public_key;

	[Token(Token = "0x40005C5")]
	[FieldOffset(Offset = "0x48")]
	private X509ChainElement bce_restriction;

	[Token(Token = "0x40005C6")]
	[FieldOffset(Offset = "0x50")]
	private X509Certificate2Collection roots;

	[Token(Token = "0x40005C7")]
	[FieldOffset(Offset = "0x58")]
	private X509Certificate2Collection cas;

	[Token(Token = "0x40005C8")]
	[FieldOffset(Offset = "0x60")]
	private X509Store root_store;

	[Token(Token = "0x40005C9")]
	[FieldOffset(Offset = "0x68")]
	private X509Store ca_store;

	[Token(Token = "0x40005CA")]
	[FieldOffset(Offset = "0x70")]
	private X509Store user_root_store;

	[Token(Token = "0x40005CB")]
	[FieldOffset(Offset = "0x78")]
	private X509Store user_ca_store;

	[Token(Token = "0x40005CC")]
	[FieldOffset(Offset = "0x80")]
	private X509Certificate2Collection collection;

	[Token(Token = "0x1700017E")]
	public override bool IsValid
	{
		[Token(Token = "0x60007F9")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700017F")]
	public override X509ChainElementCollection ChainElements
	{
		[Token(Token = "0x60007FA")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000180")]
	public override X509ChainPolicy ChainPolicy
	{
		[Token(Token = "0x60007FB")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000181")]
	private X509Certificate2Collection Roots
	{
		[Token(Token = "0x60007FF")]
		[Address(RVA = "0x288CFA0", Offset = "0x288B5A0", VA = "0x18288CFA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000182")]
	private X509Certificate2Collection CertificateAuthorities
	{
		[Token(Token = "0x6000800")]
		[Address(RVA = "0x288C8F0", Offset = "0x288AEF0", VA = "0x18288C8F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000183")]
	private X509Store LMRootStore
	{
		[Token(Token = "0x6000801")]
		[Address(RVA = "0x288CF00", Offset = "0x288B500", VA = "0x18288CF00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000184")]
	private X509Store UserRootStore
	{
		[Token(Token = "0x6000802")]
		[Address(RVA = "0x288D1F0", Offset = "0x288B7F0", VA = "0x18288D1F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000185")]
	private X509Store LMCAStore
	{
		[Token(Token = "0x6000803")]
		[Address(RVA = "0x288CE60", Offset = "0x288B460", VA = "0x18288CE60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000186")]
	private X509Store UserCAStore
	{
		[Token(Token = "0x6000804")]
		[Address(RVA = "0x288D150", Offset = "0x288B750", VA = "0x18288D150")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000187")]
	private X509Certificate2Collection CertificateCollection
	{
		[Token(Token = "0x6000805")]
		[Address(RVA = "0x288CAA0", Offset = "0x288B0A0", VA = "0x18288CAA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007F8")]
	[Address(RVA = "0x288C6F0", Offset = "0x288ACF0", VA = "0x18288C6F0")]
	public X509ChainImplMono(bool useMachineContext)
	{
	}

	[Token(Token = "0x60007FC")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	public override void AddStatus(X509ChainStatusFlags error)
	{
	}

	[Token(Token = "0x60007FD")]
	[Address(RVA = "0x2889900", Offset = "0x2887F00", VA = "0x182889900", Slot = "8")]
	[System.MonoTODO("Not totally RFC3280 compliant, but neither is MS implementation...")]
	public override bool Build(X509Certificate2 certificate)
	{
		return default(bool);
	}

	[Token(Token = "0x60007FE")]
	[Address(RVA = "0x288BD80", Offset = "0x288A380", VA = "0x18288BD80", Slot = "10")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6000806")]
	[Address(RVA = "0x2889580", Offset = "0x2887B80", VA = "0x182889580")]
	private X509ChainStatusFlags BuildChainFrom(X509Certificate2 certificate)
	{
		return default(X509ChainStatusFlags);
	}

	[Token(Token = "0x6000807")]
	[Address(RVA = "0x288BF60", Offset = "0x288A560", VA = "0x18288BF60")]
	private X509Certificate2 SelectBestFromCollection(X509Certificate2 child, X509Certificate2Collection c)
	{
		return null;
	}

	[Token(Token = "0x6000808")]
	[Address(RVA = "0x288AAD0", Offset = "0x28890D0", VA = "0x18288AAD0")]
	private X509Certificate2 FindParent(X509Certificate2 certificate)
	{
		return null;
	}

	[Token(Token = "0x6000809")]
	[Address(RVA = "0x288AF90", Offset = "0x2889590", VA = "0x18288AF90")]
	private bool IsChainComplete(X509Certificate2 certificate)
	{
		return default(bool);
	}

	[Token(Token = "0x600080A")]
	[Address(RVA = "0x288B0E0", Offset = "0x28896E0", VA = "0x18288B0E0")]
	private bool IsSelfIssued(X509Certificate2 certificate)
	{
		return default(bool);
	}

	[Token(Token = "0x600080B")]
	[Address(RVA = "0x288C290", Offset = "0x288A890", VA = "0x18288C290")]
	private void ValidateChain(X509ChainStatusFlags flag)
	{
	}

	[Token(Token = "0x600080C")]
	[Address(RVA = "0x288BA30", Offset = "0x288A030", VA = "0x18288BA30")]
	private void Process(int n)
	{
	}

	[Token(Token = "0x600080D")]
	[Address(RVA = "0x288B170", Offset = "0x2889770", VA = "0x18288B170")]
	private void PrepareForNextCertificate(int n)
	{
	}

	[Token(Token = "0x600080E")]
	[Address(RVA = "0x288C520", Offset = "0x288AB20", VA = "0x18288C520")]
	private void WrapUp()
	{
	}

	[Token(Token = "0x600080F")]
	[Address(RVA = "0x288B4A0", Offset = "0x2889AA0", VA = "0x18288B4A0")]
	private void ProcessCertificateExtensions(X509ChainElement element)
	{
	}

	[Token(Token = "0x6000810")]
	[Address(RVA = "0x288B130", Offset = "0x2889730", VA = "0x18288B130")]
	private bool IsSignedWith(X509Certificate2 signed, AsymmetricAlgorithm pubkey)
	{
		return default(bool);
	}

	[Token(Token = "0x6000811")]
	[Address(RVA = "0x288AEF0", Offset = "0x28894F0", VA = "0x18288AEF0")]
	private string GetSubjectKeyIdentifier(X509Certificate2 certificate)
	{
		return null;
	}

	[Token(Token = "0x6000812")]
	[Address(RVA = "0x288AC70", Offset = "0x2889270", VA = "0x18288AC70")]
	private static string GetAuthorityKeyIdentifier(X509Certificate2 certificate)
	{
		return null;
	}

	[Token(Token = "0x6000813")]
	[Address(RVA = "0x288AD00", Offset = "0x2889300", VA = "0x18288AD00")]
	private static string GetAuthorityKeyIdentifier(X509Crl crl)
	{
		return null;
	}

	[Token(Token = "0x6000814")]
	[Address(RVA = "0x288AD80", Offset = "0x2889380", VA = "0x18288AD80")]
	private static string GetAuthorityKeyIdentifier(Mono.Security.X509.X509Extension ext)
	{
		return null;
	}

	[Token(Token = "0x6000815")]
	[Address(RVA = "0x288A280", Offset = "0x2888880", VA = "0x18288A280")]
	private void CheckRevocationOnChain(X509ChainStatusFlags flag)
	{
	}

	[Token(Token = "0x6000816")]
	[Address(RVA = "0x288A6B0", Offset = "0x2888CB0", VA = "0x18288A6B0")]
	private X509ChainStatusFlags CheckRevocation(X509Certificate2 certificate, int ca, bool online)
	{
		return default(X509ChainStatusFlags);
	}

	[Token(Token = "0x6000817")]
	[Address(RVA = "0x288A4B0", Offset = "0x2888AB0", VA = "0x18288A4B0")]
	private X509ChainStatusFlags CheckRevocation(X509Certificate2 certificate, X509Certificate2 ca_cert, bool online)
	{
		return default(X509ChainStatusFlags);
	}

	[Token(Token = "0x6000818")]
	[Address(RVA = "0x288A050", Offset = "0x2888650", VA = "0x18288A050")]
	private static X509Crl CheckCrls(string subject, string ski, Mono.Security.X509.X509Store store)
	{
		return null;
	}

	[Token(Token = "0x6000819")]
	[Address(RVA = "0x288A7D0", Offset = "0x2888DD0", VA = "0x18288A7D0")]
	private X509Crl FindCrl(X509Certificate2 caCertificate)
	{
		return null;
	}

	[Token(Token = "0x600081A")]
	[Address(RVA = "0x288B820", Offset = "0x2889E20", VA = "0x18288B820")]
	private bool ProcessCrlExtensions(X509Crl crl)
	{
		return default(bool);
	}

	[Token(Token = "0x600081B")]
	[Address(RVA = "0x288B650", Offset = "0x2889C50", VA = "0x18288B650")]
	private bool ProcessCrlEntryExtensions(X509Crl.X509CrlEntry entry)
	{
		return default(bool);
	}
}
