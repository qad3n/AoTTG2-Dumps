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

[Token(Token = "0x2000107")]
internal class X509ChainImplMono : X509ChainImpl
{
	[Token(Token = "0x40004EE")]
	[FieldOffset(Offset = "0x10")]
	private StoreLocation location;

	[Token(Token = "0x40004EF")]
	[FieldOffset(Offset = "0x18")]
	private X509ChainElementCollection elements;

	[Token(Token = "0x40004F0")]
	[FieldOffset(Offset = "0x20")]
	private X509ChainPolicy policy;

	[Token(Token = "0x40004F1")]
	[FieldOffset(Offset = "0x28")]
	private X509ChainStatus[] status;

	[Token(Token = "0x40004F2")]
	[FieldOffset(Offset = "0x0")]
	private static X509ChainStatus[] Empty;

	[Token(Token = "0x40004F3")]
	[FieldOffset(Offset = "0x30")]
	private int max_path_length;

	[Token(Token = "0x40004F4")]
	[FieldOffset(Offset = "0x38")]
	private X500DistinguishedName working_issuer_name;

	[Token(Token = "0x40004F5")]
	[FieldOffset(Offset = "0x40")]
	private AsymmetricAlgorithm working_public_key;

	[Token(Token = "0x40004F6")]
	[FieldOffset(Offset = "0x48")]
	private X509ChainElement bce_restriction;

	[Token(Token = "0x40004F7")]
	[FieldOffset(Offset = "0x50")]
	private X509Certificate2Collection roots;

	[Token(Token = "0x40004F8")]
	[FieldOffset(Offset = "0x58")]
	private X509Certificate2Collection cas;

	[Token(Token = "0x40004F9")]
	[FieldOffset(Offset = "0x60")]
	private X509Store root_store;

	[Token(Token = "0x40004FA")]
	[FieldOffset(Offset = "0x68")]
	private X509Store ca_store;

	[Token(Token = "0x40004FB")]
	[FieldOffset(Offset = "0x70")]
	private X509Store user_root_store;

	[Token(Token = "0x40004FC")]
	[FieldOffset(Offset = "0x78")]
	private X509Store user_ca_store;

	[Token(Token = "0x40004FD")]
	[FieldOffset(Offset = "0x80")]
	private X509Certificate2Collection collection;

	[Token(Token = "0x1700014F")]
	public override bool IsValid
	{
		[Token(Token = "0x600063A")]
		[Address(RVA = "0x6217C70", Offset = "0x6216C70", VA = "0x6217C70", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000150")]
	public override X509ChainElementCollection ChainElements
	{
		[Token(Token = "0x600063B")]
		[Address(RVA = "0x6217C80", Offset = "0x6216C80", VA = "0x6217C80", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000151")]
	public override X509ChainPolicy ChainPolicy
	{
		[Token(Token = "0x600063C")]
		[Address(RVA = "0x6217C90", Offset = "0x6216C90", VA = "0x6217C90", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000152")]
	private X509Certificate2Collection Roots
	{
		[Token(Token = "0x6000640")]
		[Address(RVA = "0x62189F0", Offset = "0x62179F0", VA = "0x62189F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000153")]
	private X509Certificate2Collection CertificateAuthorities
	{
		[Token(Token = "0x6000641")]
		[Address(RVA = "0x6218CC0", Offset = "0x6217CC0", VA = "0x6218CC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000154")]
	private X509Store LMRootStore
	{
		[Token(Token = "0x6000642")]
		[Address(RVA = "0x6218AC0", Offset = "0x6217AC0", VA = "0x6218AC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000155")]
	private X509Store UserRootStore
	{
		[Token(Token = "0x6000643")]
		[Address(RVA = "0x6218BC0", Offset = "0x6217BC0", VA = "0x6218BC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000156")]
	private X509Store LMCAStore
	{
		[Token(Token = "0x6000644")]
		[Address(RVA = "0x6218D90", Offset = "0x6217D90", VA = "0x6218D90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000157")]
	private X509Store UserCAStore
	{
		[Token(Token = "0x6000645")]
		[Address(RVA = "0x6218E90", Offset = "0x6217E90", VA = "0x6218E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000158")]
	private X509Certificate2Collection CertificateCollection
	{
		[Token(Token = "0x6000646")]
		[Address(RVA = "0x6218F90", Offset = "0x6217F90", VA = "0x6218F90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000639")]
	[Address(RVA = "0x6217B40", Offset = "0x6216B40", VA = "0x6217B40")]
	public X509ChainImplMono(bool useMachineContext)
	{
	}

	[Token(Token = "0x600063D")]
	[Address(RVA = "0x6217CA0", Offset = "0x6216CA0", VA = "0x6217CA0", Slot = "9")]
	public override void AddStatus(X509ChainStatusFlags error)
	{
	}

	[Token(Token = "0x600063E")]
	[Address(RVA = "0x6217CB0", Offset = "0x6216CB0", VA = "0x6217CB0", Slot = "8")]
	[System.MonoTODO("Not totally RFC3280 compliant, but neither is MS implementation...")]
	public override bool Build(X509Certificate2 certificate)
	{
		return default(bool);
	}

	[Token(Token = "0x600063F")]
	[Address(RVA = "0x6218860", Offset = "0x6217860", VA = "0x6218860", Slot = "10")]
	public override void Reset()
	{
	}

	[Token(Token = "0x6000647")]
	[Address(RVA = "0x62184C0", Offset = "0x62174C0", VA = "0x62184C0")]
	private X509ChainStatusFlags BuildChainFrom(X509Certificate2 certificate)
	{
		return default(X509ChainStatusFlags);
	}

	[Token(Token = "0x6000648")]
	[Address(RVA = "0x62195A0", Offset = "0x62185A0", VA = "0x62195A0")]
	private X509Certificate2 SelectBestFromCollection(X509Certificate2 child, X509Certificate2Collection c)
	{
		return null;
	}

	[Token(Token = "0x6000649")]
	[Address(RVA = "0x6219390", Offset = "0x6218390", VA = "0x6219390")]
	private X509Certificate2 FindParent(X509Certificate2 certificate)
	{
		return null;
	}

	[Token(Token = "0x600064A")]
	[Address(RVA = "0x62194B0", Offset = "0x62184B0", VA = "0x62194B0")]
	private bool IsChainComplete(X509Certificate2 certificate)
	{
		return default(bool);
	}

	[Token(Token = "0x600064B")]
	[Address(RVA = "0x6219920", Offset = "0x6218920", VA = "0x6219920")]
	private bool IsSelfIssued(X509Certificate2 certificate)
	{
		return default(bool);
	}

	[Token(Token = "0x600064C")]
	[Address(RVA = "0x6218610", Offset = "0x6217610", VA = "0x6218610")]
	private void ValidateChain(X509ChainStatusFlags flag)
	{
	}

	[Token(Token = "0x600064D")]
	[Address(RVA = "0x6219960", Offset = "0x6218960", VA = "0x6219960")]
	private void Process(int n)
	{
	}

	[Token(Token = "0x600064E")]
	[Address(RVA = "0x6219D80", Offset = "0x6218D80", VA = "0x6219D80")]
	private void PrepareForNextCertificate(int n)
	{
	}

	[Token(Token = "0x600064F")]
	[Address(RVA = "0x621A3D0", Offset = "0x62193D0", VA = "0x621A3D0")]
	private void WrapUp()
	{
	}

	[Token(Token = "0x6000650")]
	[Address(RVA = "0x621A5A0", Offset = "0x62195A0", VA = "0x621A5A0")]
	private void ProcessCertificateExtensions(X509ChainElement element)
	{
	}

	[Token(Token = "0x6000651")]
	[Address(RVA = "0x621A570", Offset = "0x6219570", VA = "0x621A570")]
	private bool IsSignedWith(X509Certificate2 signed, AsymmetricAlgorithm pubkey)
	{
		return default(bool);
	}

	[Token(Token = "0x6000652")]
	[Address(RVA = "0x6219890", Offset = "0x6218890", VA = "0x6219890")]
	private string GetSubjectKeyIdentifier(X509Certificate2 certificate)
	{
		return null;
	}

	[Token(Token = "0x6000653")]
	[Address(RVA = "0x6219800", Offset = "0x6218800", VA = "0x6219800")]
	private static string GetAuthorityKeyIdentifier(X509Certificate2 certificate)
	{
		return null;
	}

	[Token(Token = "0x6000654")]
	[Address(RVA = "0x621A820", Offset = "0x6219820", VA = "0x621A820")]
	private static string GetAuthorityKeyIdentifier(X509Crl crl)
	{
		return null;
	}

	[Token(Token = "0x6000655")]
	[Address(RVA = "0x621A6A0", Offset = "0x62196A0", VA = "0x621A6A0")]
	private static string GetAuthorityKeyIdentifier(Mono.Security.X509.X509Extension ext)
	{
		return null;
	}

	[Token(Token = "0x6000656")]
	[Address(RVA = "0x621A0E0", Offset = "0x62190E0", VA = "0x621A0E0")]
	private void CheckRevocationOnChain(X509ChainStatusFlags flag)
	{
	}

	[Token(Token = "0x6000657")]
	[Address(RVA = "0x621A8A0", Offset = "0x62198A0", VA = "0x621A8A0")]
	private X509ChainStatusFlags CheckRevocation(X509Certificate2 certificate, int ca, bool online)
	{
		return default(X509ChainStatusFlags);
	}

	[Token(Token = "0x6000658")]
	[Address(RVA = "0x621AA80", Offset = "0x6219A80", VA = "0x621AA80")]
	private X509ChainStatusFlags CheckRevocation(X509Certificate2 certificate, X509Certificate2 ca_cert, bool online)
	{
		return default(X509ChainStatusFlags);
	}

	[Token(Token = "0x6000659")]
	[Address(RVA = "0x621B440", Offset = "0x621A440", VA = "0x621B440")]
	private static X509Crl CheckCrls(string subject, string ski, Mono.Security.X509.X509Store store)
	{
		return null;
	}

	[Token(Token = "0x600065A")]
	[Address(RVA = "0x621AC60", Offset = "0x6219C60", VA = "0x621AC60")]
	private X509Crl FindCrl(X509Certificate2 caCertificate)
	{
		return null;
	}

	[Token(Token = "0x600065B")]
	[Address(RVA = "0x621B0F0", Offset = "0x621A0F0", VA = "0x621B0F0")]
	private bool ProcessCrlExtensions(X509Crl crl)
	{
		return default(bool);
	}

	[Token(Token = "0x600065C")]
	[Address(RVA = "0x621ADD0", Offset = "0x6219DD0", VA = "0x621ADD0")]
	private bool ProcessCrlEntryExtensions(X509Crl.X509CrlEntry entry)
	{
		return default(bool);
	}
}
