using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000107")]
public sealed class X509ChainPolicy
{
	[Token(Token = "0x40004FB")]
	[FieldOffset(Offset = "0x10")]
	private OidCollection apps;

	[Token(Token = "0x40004FC")]
	[FieldOffset(Offset = "0x18")]
	private OidCollection cert;

	[Token(Token = "0x40004FD")]
	[FieldOffset(Offset = "0x20")]
	private X509CertificateCollection store;

	[Token(Token = "0x40004FE")]
	[FieldOffset(Offset = "0x28")]
	private X509Certificate2Collection store2;

	[Token(Token = "0x40004FF")]
	[FieldOffset(Offset = "0x30")]
	private X509RevocationFlag rflag;

	[Token(Token = "0x4000500")]
	[FieldOffset(Offset = "0x34")]
	private X509RevocationMode mode;

	[Token(Token = "0x4000501")]
	[FieldOffset(Offset = "0x38")]
	private TimeSpan timeout;

	[Token(Token = "0x4000502")]
	[FieldOffset(Offset = "0x40")]
	private X509VerificationFlags vflags;

	[Token(Token = "0x4000503")]
	[FieldOffset(Offset = "0x48")]
	private DateTime vtime;

	[Token(Token = "0x1700014F")]
	public X509Certificate2Collection ExtraStore
	{
		[Token(Token = "0x6000635")]
		[Address(RVA = "0x4619220", Offset = "0x4619220", VA = "0x4619220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000150")]
	public X509RevocationFlag RevocationFlag
	{
		[Token(Token = "0x6000636")]
		[Address(RVA = "0x461BFD0", Offset = "0x461BFD0", VA = "0x461BFD0")]
		get
		{
			return default(X509RevocationFlag);
		}
	}

	[Token(Token = "0x17000151")]
	public X509RevocationMode RevocationMode
	{
		[Token(Token = "0x6000637")]
		[Address(RVA = "0x461BFE0", Offset = "0x461BFE0", VA = "0x461BFE0")]
		get
		{
			return default(X509RevocationMode);
		}
		[Token(Token = "0x6000638")]
		[Address(RVA = "0x461BFF0", Offset = "0x461BFF0", VA = "0x461BFF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000152")]
	public X509VerificationFlags VerificationFlags
	{
		[Token(Token = "0x6000639")]
		[Address(RVA = "0x461C050", Offset = "0x461C050", VA = "0x461C050")]
		get
		{
			return default(X509VerificationFlags);
		}
		[Token(Token = "0x600063A")]
		[Address(RVA = "0x461C060", Offset = "0x461C060", VA = "0x461C060")]
		set
		{
		}
	}

	[Token(Token = "0x17000153")]
	public DateTime VerificationTime
	{
		[Token(Token = "0x600063B")]
		[Address(RVA = "0x461C0C0", Offset = "0x461C0C0", VA = "0x461C0C0")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x6000634")]
	[Address(RVA = "0x4617DC0", Offset = "0x4617DC0", VA = "0x4617DC0")]
	public X509ChainPolicy()
	{
	}

	[Token(Token = "0x600063C")]
	[Address(RVA = "0x461BE00", Offset = "0x461BE00", VA = "0x461BE00")]
	public void Reset()
	{
	}
}
