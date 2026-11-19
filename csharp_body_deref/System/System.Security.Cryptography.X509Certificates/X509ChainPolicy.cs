// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.X509ChainPolicy
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000108")]
public sealed class X509ChainPolicy
{
	[Token(Token = "0x40004FE")]
	[FieldOffset(Offset = "0x10")]
	private OidCollection apps;

	[Token(Token = "0x40004FF")]
	[FieldOffset(Offset = "0x18")]
	private OidCollection cert;

	[Token(Token = "0x4000500")]
	[FieldOffset(Offset = "0x20")]
	private X509CertificateCollection store;

	[Token(Token = "0x4000501")]
	[FieldOffset(Offset = "0x28")]
	private X509Certificate2Collection store2;

	[Token(Token = "0x4000502")]
	[FieldOffset(Offset = "0x30")]
	private X509RevocationFlag rflag;

	[Token(Token = "0x4000503")]
	[FieldOffset(Offset = "0x34")]
	private X509RevocationMode mode;

	[Token(Token = "0x4000504")]
	[FieldOffset(Offset = "0x38")]
	private TimeSpan timeout;

	[Token(Token = "0x4000505")]
	[FieldOffset(Offset = "0x40")]
	private X509VerificationFlags vflags;

	[Token(Token = "0x4000506")]
	[FieldOffset(Offset = "0x48")]
	private DateTime vtime;

	[Token(Token = "0x17000159")]
	public X509Certificate2Collection ExtraStore
	{
		[Token(Token = "0x600065F")]
		[Address(RVA = "0x6219080", Offset = "0x6218080", VA = "0x6219080")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015A")]
	public X509RevocationFlag RevocationFlag
	{
		[Token(Token = "0x6000660")]
		[Address(RVA = "0x621BA10", Offset = "0x621AA10", VA = "0x621BA10")]
		get
		{
			return default(X509RevocationFlag);
		}
	}

	[Token(Token = "0x1700015B")]
	public X509RevocationMode RevocationMode
	{
		[Token(Token = "0x6000661")]
		[Address(RVA = "0x621BA20", Offset = "0x621AA20", VA = "0x621BA20")]
		get
		{
			return default(X509RevocationMode);
		}
		[Token(Token = "0x6000662")]
		[Address(RVA = "0x621BA30", Offset = "0x621AA30", VA = "0x621BA30")]
		set
		{
		}
	}

	[Token(Token = "0x1700015C")]
	public X509VerificationFlags VerificationFlags
	{
		[Token(Token = "0x6000663")]
		[Address(RVA = "0x621BA90", Offset = "0x621AA90", VA = "0x621BA90")]
		get
		{
			return default(X509VerificationFlags);
		}
		[Token(Token = "0x6000664")]
		[Address(RVA = "0x621BAA0", Offset = "0x621AAA0", VA = "0x621BAA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700015D")]
	public DateTime VerificationTime
	{
		[Token(Token = "0x6000665")]
		[Address(RVA = "0x621BB00", Offset = "0x621AB00", VA = "0x621BB00")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x600065E")]
	[Address(RVA = "0x6217C50", Offset = "0x6216C50", VA = "0x6217C50")]
	public X509ChainPolicy()
	{
	}

	[Token(Token = "0x6000666")]
	[Address(RVA = "0x621B840", Offset = "0x621A840", VA = "0x621B840")]
	public void Reset()
	{
	}
}
