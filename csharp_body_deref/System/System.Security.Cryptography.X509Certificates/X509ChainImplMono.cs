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
		[Address(RVA = "0x493CEE0", Offset = "0x493CEE0", VA = "0x493CEE0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000146")]
	public override X509ChainElementCollection ChainElements
	{
		[Token(Token = "0x6000611")]
		[Address(RVA = "0x493CEF0", Offset = "0x493CEF0", VA = "0x493CEF0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000147")]
	public override X509ChainPolicy ChainPolicy
	{
		[Token(Token = "0x6000612")]
		[Address(RVA = "0x493CF00", Offset = "0x493CF00", VA = "0x493CF00", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000148")]
	private X509Certificate2Collection Roots
	{
		[Token(Token = "0x6000616")]
		[Address(RVA = "0x493DC90", Offset = "0x493DC90", VA = "0x493DC90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000149")]
	private X509Certificate2Collection CertificateAuthorities
	{
		[Token(Token = "0x6000617")]
		[Address(RVA = "0x493DF60", Offset = "0x493DF60", VA = "0x493DF60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700014A")]
	private X509Store LMRootStore
	{
		[Token(Token = "0x6000618")]
		[Address(RVA = "0x493DD60", Offset = "0x493DD60", VA = "0x493DD60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700014B")]
	private X509Store UserRootStore
	{
		[Token(Token = "0x6000619")]
		[Address(RVA = "0x493DE60", Offset = "0x493DE60", VA = "0x493DE60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700014C")]
	private X509Store LMCAStore
	{
		[Token(Token = "0x600061A")]
		[Address(RVA = "0x493E030", Offset = "0x493E030", VA = "0x493E030")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700014D")]
	private X509Store UserCAStore
	{
		[Token(Token = "0x600061B")]
		[Address(RVA = "0x493E130", Offset = "0x493E130", VA = "0x493E130")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700014E")]
	private X509Certificate2Collection CertificateCollection
	{
		[Token(Token = "0x600061C")]
		[Address(RVA = "0x493E230", Offset = "0x493E230", VA = "0x493E230")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600060F")]
	[Address(RVA = "0x493CDB0", Offset = "0x493CDB0", VA = "0x493CDB0")]
	public X509ChainImplMono(bool useMachineContext)
	{
	}

	[Token(Token = "0x6000613")]
	[Address(RVA = "0x493CF10", Offset = "0x493CF10", VA = "0x493CF10", Slot = "9")]
	public override void AddStatus(X509ChainStatusFlags error)
	{
	}

	[Token(Token = "0x6000614")]
	[Address(RVA = "0x493CF20", Offset = "0x493CF20", VA = "0x493CF20", Slot = "8")]
	[System.MonoTODO("Not totally RFC3280 compliant, but neither is MS implementation...")]
	public override bool Build(X509Certificate2 certificate)
	{
		return default(bool);
	}

	[Token(Token = "0x6000615")]
	[Address(RVA = "0x493DB00", Offset = "0x493DB00", VA = "0x493DB00", Slot = "10")]
	public override void Reset()
	{
	}

	[Token(Token = "0x600061D")]
	[Address(RVA = "0x493D760", Offset = "0x493D760", VA = "0x493D760")]
	private X509ChainStatusFlags BuildChainFrom(X509Certificate2 certificate)
	{
		return default(X509ChainStatusFlags);
	}

	[Token(Token = "0x600061E")]
	[Address(RVA = "0x493E8D0", Offset = "0x493E8D0", VA = "0x493E8D0")]
	private X509Certificate2 SelectBestFromCollection(X509Certificate2 child, X509Certificate2Collection c)
	{
		return null;
	}

	[Token(Token = "0x600061F")]
	[Address(RVA = "0x493E6C0", Offset = "0x493E6C0", VA = "0x493E6C0")]
	private X509Certificate2 FindParent(X509Certificate2 certificate)
	{
		return null;
	}

	[Token(Token = "0x6000620")]
	[Address(RVA = "0x493E7E0", Offset = "0x493E7E0", VA = "0x493E7E0")]
	private bool IsChainComplete(X509Certificate2 certificate)
	{
		return default(bool);
	}

	[Token(Token = "0x6000621")]
	[Address(RVA = "0x493EC40", Offset = "0x493EC40", VA = "0x493EC40")]
	private bool IsSelfIssued(X509Certificate2 certificate)
	{
		return default(bool);
	}

	[Token(Token = "0x6000622")]
	[Address(RVA = "0x493D8B0", Offset = "0x493D8B0", VA = "0x493D8B0")]
	private void ValidateChain(X509ChainStatusFlags flag)
	{
	}

	[Token(Token = "0x6000623")]
	[Address(RVA = "0x493EC80", Offset = "0x493EC80", VA = "0x493EC80")]
	private void Process(int n)
	{
	}

	[Token(Token = "0x6000624")]
	[Address(RVA = "0x493F0B0", Offset = "0x493F0B0", VA = "0x493F0B0")]
	private void PrepareForNextCertificate(int n)
	{
	}

	[Token(Token = "0x6000625")]
	[Address(RVA = "0x493F720", Offset = "0x493F720", VA = "0x493F720")]
	private void WrapUp()
	{
	}

	[Token(Token = "0x6000626")]
	[Address(RVA = "0x493F8F0", Offset = "0x493F8F0", VA = "0x493F8F0")]
	private void ProcessCertificateExtensions(X509ChainElement element)
	{
	}

	[Token(Token = "0x6000627")]
	[Address(RVA = "0x493F8C0", Offset = "0x493F8C0", VA = "0x493F8C0")]
	private bool IsSignedWith(X509Certificate2 signed, AsymmetricAlgorithm pubkey)
	{
		return default(bool);
	}

	[Token(Token = "0x6000628")]
	[Address(RVA = "0x493EBB0", Offset = "0x493EBB0", VA = "0x493EBB0")]
	private string GetSubjectKeyIdentifier(X509Certificate2 certificate)
	{
		return null;
	}

	[Token(Token = "0x6000629")]
	[Address(RVA = "0x493EB20", Offset = "0x493EB20", VA = "0x493EB20")]
	private static string GetAuthorityKeyIdentifier(X509Certificate2 certificate)
	{
		return null;
	}

	[Token(Token = "0x600062A")]
	[Address(RVA = "0x493FB70", Offset = "0x493FB70", VA = "0x493FB70")]
	private static string GetAuthorityKeyIdentifier(X509Crl crl)
	{
		return null;
	}

	[Token(Token = "0x600062B")]
	[Address(RVA = "0x493F9F0", Offset = "0x493F9F0", VA = "0x493F9F0")]
	private static string GetAuthorityKeyIdentifier(Mono.Security.X509.X509Extension ext)
	{
		return null;
	}

	[Token(Token = "0x600062C")]
	[Address(RVA = "0x493F430", Offset = "0x493F430", VA = "0x493F430")]
	private void CheckRevocationOnChain(X509ChainStatusFlags flag)
	{
	}

	[Token(Token = "0x600062D")]
	[Address(RVA = "0x493FBF0", Offset = "0x493FBF0", VA = "0x493FBF0")]
	private X509ChainStatusFlags CheckRevocation(X509Certificate2 certificate, int ca, bool online)
	{
		return default(X509ChainStatusFlags);
	}

	[Token(Token = "0x600062E")]
	[Address(RVA = "0x493FDD0", Offset = "0x493FDD0", VA = "0x493FDD0")]
	private X509ChainStatusFlags CheckRevocation(X509Certificate2 certificate, X509Certificate2 ca_cert, bool online)
	{
		return default(X509ChainStatusFlags);
	}

	[Token(Token = "0x600062F")]
	[Address(RVA = "0x4940890", Offset = "0x4940890", VA = "0x4940890")]
	private static X509Crl CheckCrls(string subject, string ski, Mono.Security.X509.X509Store store)
	{
		return null;
	}

	[Token(Token = "0x6000630")]
	[Address(RVA = "0x493FFB0", Offset = "0x493FFB0", VA = "0x493FFB0")]
	private X509Crl FindCrl(X509Certificate2 caCertificate)
	{
		return null;
	}

	[Token(Token = "0x6000631")]
	[Address(RVA = "0x49404B0", Offset = "0x49404B0", VA = "0x49404B0")]
	private bool ProcessCrlExtensions(X509Crl crl)
	{
		return default(bool);
	}

	[Token(Token = "0x6000632")]
	[Address(RVA = "0x4940120", Offset = "0x4940120", VA = "0x4940120")]
	private bool ProcessCrlEntryExtensions(X509Crl.X509CrlEntry entry)
	{
		return default(bool);
	}
}
